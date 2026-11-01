// Verilator testbench for the Phoenix Lynx core: lynx_phoenix.v with the
// Lynx (gen/lynx_core.v, from the VHDL), the SRAM and (later) an SD card.
//
//   obj_dir/Vlynx_phoenix [--sd card.img | --cart game.lnx] [--frames n]
//                         [--ppm prefix] [--ppm-every n] [--pad frame:bits,...]
//
// --sd is an SD card image (mksd.py) for the menu (make loader).  --cart puts the cartridge (without its 64-byte LNX header) in the SRAM
// at 10000, where the loader would put it; with the stub loader ROM
// (make stub) the game then starts at once.  Frames are HDMI frames
// (60/s).  --ppm writes the Lynx frame buffer (160x102) every --ppm-every
// frames.  --pad holds Lynx buttons (lynx_phoenix joy bits, hex) from a
// frame on.

#include "Vlynx_phoenix.h"
#include "Vlynx_phoenix___024root.h"
#include "Vlynx_phoenix__Syms.h"
#include "Vlynx_phoenix_lynx_phoenix.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <deque>

static uint8_t sram[512 * 1024];

// SD card in SPI mode (from nes/sim/tb.cpp)
struct SdCard {
    std::vector<uint8_t> img;
    bool present = false;

    bool last_sclk = false, last_cs_n = true;
    uint8_t rx = 0, tx = 0xFF;
    int bit = 0;
    std::vector<uint8_t> cmd;
    std::deque<uint8_t> out;
    bool idle = true, app = false;
    int acmd41_count = 0;
    int miso = 1;
    long reads = 0, writes = 0, multi = 0;
    // CMD18: streaming sectors from mblk until CMD12
    bool streaming = false;
    size_t mblk = 0;
    // CMD24: 0 none, 1 waiting for the data token, 2 receiving
    int wstate = 0;
    size_t wbase = 0;
    std::vector<uint8_t> wdata;

    bool load(const char *path) {
        FILE *f = fopen(path, "rb");
        if (!f) return false;
        fseek(f, 0, SEEK_END);
        long n = ftell(f);
        fseek(f, 0, SEEK_SET);
        img.resize(n);
        if (fread(img.data(), 1, n, f) != (size_t)n) { fclose(f); return false; }
        fclose(f);
        present = true;
        return true;
    }

    void command() {
        uint8_t c = cmd[0] & 0x3F;
        uint32_t arg = (cmd[1] << 24) | (cmd[2] << 16) | (cmd[3] << 8) | cmd[4];
        bool was_app = app;
        app = false;
        out.push_back(0xFF);                        // Ncr
        uint8_t r1 = idle ? 0x01 : 0x00;
        if (was_app && c == 41) {
            if (++acmd41_count >= 2) idle = false;
            out.push_back(idle ? 0x01 : 0x00);
            return;
        }
        switch (c) {
        case 0:  idle = true; out.push_back(0x01); break;
        case 8:  out.push_back(r1); out.push_back(0); out.push_back(0);
                 out.push_back(0x01); out.push_back(arg & 0xFF); break;
        case 55: app = true; out.push_back(r1); break;
        case 58: out.push_back(r1); out.push_back(0xC0); out.push_back(0xFF);
                 out.push_back(0x80); out.push_back(0x00); break;
        case 16: out.push_back(r1); break;
        case 17: {
            ++reads;
            out.push_back(0x00);
            out.push_back(0xFF);
            out.push_back(0xFF);
            out.push_back(0xFE);
            size_t base = (size_t)arg * 512;
            uint16_t crc = 0;
            for (int i = 0; i < 512; ++i) {
                uint8_t d = base + i < img.size() ? img[base + i] : 0;
                out.push_back(d);
                crc ^= d << 8;
                for (int k = 0; k < 8; ++k)
                    crc = (crc & 0x8000) ? (crc << 1) ^ 0x1021 : crc << 1;
            }
            out.push_back(crc >> 8);
            out.push_back(crc & 0xFF);
            break;
        }
        case 18:
            ++multi;
            out.push_back(0x00);
            streaming = true;
            mblk = arg;
            break;
        case 12:
            streaming = false;
            out.clear();
            out.push_back(0xFF);                    // stuff byte
            out.push_back(0x00);                    // R1
            out.push_back(0x00);                    // busy
            out.push_back(0x00);
            break;
        case 24:
            out.push_back(0x00);
            wstate = 1;
            wbase = (size_t)arg * 512;
            wdata.clear();
            break;
        default: out.push_back(0x04); break;        // illegal command
        }
    }

    void byte_received(uint8_t b) {
        if (wstate == 1) {
            if (b == 0xFE) wstate = 2;
            return;
        }
        if (wstate == 2) {
            wdata.push_back(b);
            if (wdata.size() == 514) {              // data and CRC
                if (wbase + 512 <= img.size())
                    memcpy(&img[wbase], wdata.data(), 512);
                ++writes;
                wstate = 0;
                out.clear();
                out.push_back(0x05);                // accepted
                for (int i = 0; i < 8; ++i) out.push_back(0x00);   // busy
            }
            return;
        }
        if (cmd.empty() && (b & 0xC0) != 0x40)
            return;
        cmd.push_back(b);
        if (cmd.size() == 6) {
            out.clear();
            command();
            cmd.clear();
        }
    }

    // The next sector of a CMD18, when the card has sent the last.
    void stream() {
        if (!streaming || out.size() > 2) return;
        out.push_back(0xFF);
        out.push_back(0xFE);
        size_t base = mblk * 512;
        uint16_t crc = 0;
        for (int i = 0; i < 512; ++i) {
            uint8_t b = base + i < img.size() ? img[base + i] : 0;
            out.push_back(b);
            crc ^= b << 8;
            for (int k = 0; k < 8; ++k)
                crc = (crc & 0x8000) ? (crc << 1) ^ 0x1021 : crc << 1;
        }
        out.push_back(crc >> 8);
        out.push_back(crc & 0xFF);
        ++mblk;
        ++reads;
    }

    // Called once per clock with the current pins.
    void step(bool cs_n, bool sclk, bool mosi) {
        stream();
        if (cs_n) {
            if (!last_cs_n) { bit = 0; cmd.clear(); wstate = 0; streaming = false; }
            miso = 1;
        } else {
            if (last_cs_n) {                        // selected: load first byte
                bit = 0;
                tx = 0xFF;
                miso = 1;
            }
            if (sclk && !last_sclk) {               // rising: sample MOSI
                rx = (rx << 1) | (mosi ? 1 : 0);
                if (++bit == 8) {
                    bit = 0;
                    byte_received(rx);
                }
            }
            if (!sclk && last_sclk) {               // falling: next MISO bit
                if (bit == 0) {
                    if (!out.empty()) { tx = out.front(); out.pop_front(); }
                    else tx = 0xFF;
                }
                miso = (tx >> (7 - bit)) & 1;
            }
        }
        last_sclk = sclk;
        last_cs_n = cs_n;
    }
};

static void write_ppm(Vlynx_phoenix *t, const std::string &name)
{
    FILE *f = fopen(name.c_str(), "wb");
    if (!f) return;
    fprintf(f, "P6\n160 102\n255\n");
    auto &fb = t->rootp->vlSymsp->TOP__lynx_phoenix.fb;
    for (int i = 0; i < 160 * 102; ++i) {
        uint16_t p = fb[i];
        uint8_t rgb[3] = { (uint8_t)(((p >> 8) & 15) * 17), (uint8_t)(((p >> 4) & 15) * 17),
                           (uint8_t)((p & 15) * 17) };
        fwrite(rgb, 1, 3, f);
    }
    fclose(f);
}

static uint32_t fb_sum(Vlynx_phoenix *t)
{
    auto &fb = t->rootp->vlSymsp->TOP__lynx_phoenix.fb;
    uint32_t s = 0;
    for (int i = 0; i < 160 * 102; ++i) s = s * 31 + fb[i];
    return s;
}

int main(int argc, char **argv)
{
    const char *cart = nullptr, *ppm = nullptr, *sd_path = nullptr;
    int frames = 60, ppm_every = 0;
    std::vector<std::pair<int, int>> pads;
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--cart") && i + 1 < argc) cart = argv[++i];
        else if (!strcmp(argv[i], "--sd") && i + 1 < argc) sd_path = argv[++i];
        else if (!strcmp(argv[i], "--frames") && i + 1 < argc) frames = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--ppm") && i + 1 < argc) ppm = argv[++i];
        else if (!strcmp(argv[i], "--ppm-every") && i + 1 < argc) ppm_every = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--pad") && i + 1 < argc)
            for (char *s = strtok(argv[++i], ","); s; s = strtok(nullptr, ","))
                if (char *c = strchr(s, ':')) pads.push_back({atoi(s), (int)strtol(c + 1, nullptr, 16)});
    }
    setvbuf(stdout, nullptr, _IOLBF, 0);
    Verilated::commandArgs(argc, argv);

    // The SRAM powers up with random contents
    srand(12345);
    for (size_t i = 0; i < sizeof sram; ++i) sram[i] = rand() & 0xFF;
    if (cart) {
        FILE *f = fopen(cart, "rb");
        if (!f) { perror(cart); return 1; }
        std::vector<uint8_t> d(1024 * 1024);
        size_t n = fread(d.data(), 1, d.size(), f);
        fclose(f);
        size_t ofs = (n >= 64 && !memcmp(d.data(), "LYNX", 4)) ? 64 : 0;
        if (n - ofs > 448 * 1024) n = ofs + 448 * 1024;
        memcpy(sram + 0x10000, d.data() + ofs, n - ofs);
        printf("cart: %zu bytes at 10000\n", n - ofs);
    }

    SdCard sd;
    if (sd_path && !sd.load(sd_path)) { perror(sd_path); return 1; }

    auto *t = new Vlynx_phoenix;
    t->reset = 1;
    t->game_reset = 0;
    t->cv1 = t->cv2 = 0x3c0;     // no key
    t->snes = 0;
    t->kb_keys = 0;
    t->kb_joy = 0;
    t->sd_miso = 1;
    t->sd_cd_n = sd.present ? 0 : 1;
    t->clk32_locked = 1;
    t->clk25 = 0;
    t->clk32 = 0;

    // Event times in ps: clk32 edges every 15625, clk25 every 20000
    const uint64_t H32 = 15625, H25 = 20000;
    uint64_t t32 = H32, t25 = H25, now = 0;
    int frame = 0, last_vc = 0;
    uint64_t c32 = 0;
    int prev_we = 1;
    int last_boot = -1;

    while (frame < frames) {
        bool e32 = t32 <= t25;
        now = e32 ? t32 : t25;
        if (e32) { t->clk32 = !t->clk32; t32 += H32; if (t->clk32) ++c32; }
        else     { t->clk25 = !t->clk25; t25 += H25; }

        // SRAM: asynchronous read; a write takes place when WE rises
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();
        if (prev_we == 0 && t->sram_we_n == 1 && t->sram_doe) {
            sram[t->sram_addr & 0x7FFFF] = t->sram_dout;
            // ROM cache fills: game-mode writes above the Lynx RAM
            if (!t->boot_mode && t->sram_addr >= 0x10000 && (t->sram_addr & 0x1FFF) == 0)
                printf("cache fill: SRAM page %d at frame %d\n", t->sram_addr >> 13, frame);
        }
        prev_we = t->sram_we_n;
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();

        if (e32 && t->clk32) {
            sd.step(t->sd_cs_n, t->sd_sclk, t->sd_mosi);
            t->sd_miso = sd.miso;
        }

        // TB_CART: log game-mode cartridge reads of a 2K block's first byte
        if (getenv("TB_CART") && e32 && t->clk32 && !t->boot_mode && t->sram_addr >= 0x10000 &&
            !t->sram_oe_n && !t->sram_doe && (t->sram_addr & 0x7FF) == 0) {
            static uint32_t last = 0;
            if (t->sram_addr != last)
                printf("cart rd %05x = %02x at frame %d\n", t->sram_addr, sram[t->sram_addr], frame);
            last = t->sram_addr;
        }

        if (t->reset && c32 > 1000) t->reset = 0;

        if (t->boot_mode != last_boot) {
            printf("boot_mode %d at frame %d\n", t->boot_mode, frame);
            last_boot = t->boot_mode;
        }

        // Pads
        int joy = 0;
        for (auto &p : pads) if (frame >= p.first) joy = p.second;
        // lynx_phoenix joy bits come from the SNES pad here: map them back
        // (0 up 1 down 2 left 3 right 4 A 5 B 6 opt1 7 opt2 8 pause)
        t->snes = ((joy & 1) ? 1 << 8 : 0) | ((joy & 2) ? 1 << 9 : 0) | ((joy & 4) ? 1 << 10 : 0) |
                  ((joy & 8) ? 1 << 11 : 0) | ((joy & 16) ? 1 : 0) | ((joy & 32) ? 2 : 0) |
                  ((joy & 64) ? 1 << 6 : 0) | ((joy & 128) ? 1 << 7 : 0) | ((joy & 256) ? 1 << 4 : 0);

        // TB_TRACE=n: the CPU's first n bus requests (as sim/postsyn/tb_ps.v)
        {
            static long trace_n = getenv("TB_TRACE") ? atol(getenv("TB_TRACE")) : 0, n = 0;
            static bool pend = false;
            if (trace_n && e32 && t->clk32 && n < trace_n) {
                // evaluated after the edge: use the values of before it
                static int p_ce = 0, p_req = 0, p_rnw = 0, p_done = 0, p_addr = 0;
                if (p_done) pend = false;
                if (p_ce && p_req && !pend && !p_done) {
                    printf("%ld %04x %s\n", n, p_addr, p_rnw ? "R" : "W");
                    ++n; pend = true;
                    if (n == trace_n) { printf("trace done\n"); exit(0); }
                }
                p_ce = t->dbg_ce_o; p_req = t->dbg_req_o; p_rnw = t->dbg_rnw_o;
                p_done = t->dbg_done_o; p_addr = t->dbg_addr_o;
            }
        }

        // Cartridge reads (SRAM addresses at 10000 and up, while OE is low)
        static uint32_t last_ra = 0; static long cart_reads = 0;
        if (e32 && t->clk32 && t->sram_addr >= 0x10000 && t->sram_addr != last_ra) { ++cart_reads; }
        last_ra = t->sram_addr;

        // HDMI frames
        int vc = t->rootp->vlSymsp->TOP__lynx_phoenix.vc;
        if (vc == 0 && last_vc != 0) {
            ++frame;
            if (ppm && ppm_every && frame % ppm_every == 0) {
                char name[256];
                snprintf(name, sizeof name, "%s%04d.ppm", ppm, frame);
                write_ppm(t, name);
            }
            if (frame % 10 == 0)
                printf("frame %d: fb sum %08x, cart reads %ld\n", frame, fb_sum(t), cart_reads);
        }
        last_vc = vc;
    }
    printf("%d frames, %llu clocks, %ld SD reads\n", frames, (unsigned long long)c32, sd.reads);
    if (ppm) write_ppm(t, std::string(ppm) + "_end.ppm");
    delete t;
    return 0;
}
