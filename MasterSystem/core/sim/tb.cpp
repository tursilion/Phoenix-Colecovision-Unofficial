// Verilator testbench for the Phoenix Master System core: sms_phoenix.v
// with the system (gen/system.v, gen/video.v from the VHDL), the SRAM and
// an SD card.
//
//   obj_dir/Vsms_phoenix --sd card.img [--frames n] [--ppm prefix]
//                        [--ppm-every n] [--pad frame:bits,...]
//
// Frames are HDMI frames.  --ppm writes the HDMI picture (640x480).  --pad
// holds buttons from a frame on (hex, sms_phoenix joy1 bits: 1 up, 2 down,
// 4 left, 8 right, 10 button 1, 20 button 2, 40 pause), through the SNES
// pad.

#include "Vsms_phoenix.h"
#include "Vsms_phoenix___024root.h"
#include "Vsms_phoenix__Syms.h"
#include "Vsms_phoenix_sms_phoenix.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <deque>

static uint8_t sram[512 * 1024];
static uint8_t pic[480][640][3];

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

static void write_ppm(const std::string &name)
{
    FILE *f = fopen(name.c_str(), "wb");
    if (!f) return;
    fprintf(f, "P6\n640 480\n255\n");
    fwrite(pic, 1, sizeof pic, f);
    fclose(f);
}

static uint32_t pic_sum()
{
    uint32_t s = 0;
    for (int y = 0; y < 480; ++y)
        for (int x = 0; x < 640; ++x)
            s = s * 31 + (pic[y][x][0] << 16 | pic[y][x][1] << 8 | pic[y][x][2]);
    return s;
}

int main(int argc, char **argv)
{
    const char *ppm = nullptr, *sd_path = nullptr;
    int frames = 60, ppm_every = 0;
    std::vector<std::pair<int, int>> pads;
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--sd") && i + 1 < argc) sd_path = argv[++i];
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

    SdCard sd;
    if (sd_path && !sd.load(sd_path)) { perror(sd_path); return 1; }

    auto *t = new Vsms_phoenix;
    t->reset = 1;
    t->game_reset = 0;
    t->cv1 = t->cv2 = 0x3c0;     // no key
    t->snes = 0;
    t->kb_keys = 0;
    t->kb_joy = 0;
    t->sd_miso = 1;
    t->sd_cd_n = sd.present ? 0 : 1;
    t->clk_locked = 1;
    t->clk25 = 0;
    t->clk = 0;

    // Event times in ps: clk edges every 15517 (32.22MHz), clk25 every 20000
    const uint64_t HS = 15517, H25 = 20000;
    uint64_t ts = HS, t25 = H25;
    int frame = 0, last_vc = 0;
    uint64_t cs = 0;
    int prev_we = 1;
    int last_boot = -1;
    int px = 0, py = 0;     // HDMI picture position (from the blanking)
    int last_blank = 1;

    while (frame < frames) {
        bool es = ts <= t25;
        if (es) { t->clk = !t->clk; ts += HS; if (t->clk) ++cs; }
        else    { t->clk25 = !t->clk25; t25 += H25; }

        // SRAM: asynchronous read; a write takes place when WE rises
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();
        if (prev_we == 0 && t->sram_we_n == 1 && t->sram_doe) {
            sram[t->sram_addr & 0x7FFFF] = t->sram_dout;
            // ROM cache fills: game-mode writes at an 8K page start below the cartridge RAM
            if (!t->boot_mode && t->sram_addr < 0x78000 && (t->sram_addr & 0x1FFF) == 0)
                printf("cache fill: SRAM page %d at frame %d\n", t->sram_addr >> 13, frame);
        }
        prev_we = t->sram_we_n;
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();

        if (es && t->clk) {
            sd.step(t->sd_cs_n, t->sd_sclk, t->sd_mosi);
            t->sd_miso = sd.miso;
        }

        if (t->reset && cs > 1000) t->reset = 0;

        if (t->boot_mode != last_boot) {
            printf("boot_mode %d at frame %d\n", t->boot_mode, frame);
            last_boot = t->boot_mode;
        }

        // Pads, through the SNES pad (0 A 1 B 2 X 3 Y 4 start 8 up ...)
        int joy = 0;
        for (auto &p : pads) if (frame >= p.first) joy = p.second;
        t->snes = ((joy & 1) ? 1 << 8 : 0) | ((joy & 2) ? 1 << 9 : 0) | ((joy & 4) ? 1 << 10 : 0) |
                  ((joy & 8) ? 1 << 11 : 0) | ((joy & 16) ? 2 : 0) | ((joy & 32) ? 1 : 0) |
                  ((joy & 64) ? 1 << 4 : 0);

        // HDMI picture: sample at clk25 rising edges
        if (!es && t->clk25) {
            int blank = t->vid_blank;
            if (!blank) {
                if (px < 640 && py < 480) {
                    pic[py][px][0] = t->vid_r; pic[py][px][1] = t->vid_g; pic[py][px][2] = t->vid_b;
                }
                ++px;
            } else if (!last_blank) {
                px = 0;
                ++py;
            }
            last_blank = blank;
            int vc = t->rootp->vlSymsp->TOP__sms_phoenix.vc;
            if (vc == 0 && last_vc != 0) {
                py = 0;
                ++frame;
                if (ppm && ppm_every && frame % ppm_every == 0) {
                    char name[256];
                    snprintf(name, sizeof name, "%s%04d.ppm", ppm, frame);
                    write_ppm(name);
                }
                if (frame % 10 == 0)
                    printf("frame %d: picture sum %08x\n", frame, pic_sum());
            }
            last_vc = vc;
        }
    }
    printf("%d frames, %llu clocks, %ld SD reads\n", frames, (unsigned long long)cs, sd.reads);
    if (ppm) write_ppm(std::string(ppm) + "_end.ppm");
    delete t;
    return 0;
}
