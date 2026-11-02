// Verilator testbench for the Phoenix Williams cores: williams_phoenix.v
// with the board (gen/williams_soc.v from the VHDL), the SRAM and an SD
// card.
//
//   obj_dir/Vwilliams_phoenix --sd card.img [--frames n] [--ppm prefix]
//                             [--ppm-every n] [--pad frame:bits,...]
//                             [--wav file] [--dump-sram file]
//
// Frames are HDMI frames.  --ppm writes the HDMI picture (640x480).  --pad
// holds buttons from a frame on (hex: 1 up, 2 down, 4 left, 8 right,
// 10 fire 1, 20 fire 2, 40 start 1, 80 coin, 100 L = rotate), through the
// SNES pad.
// --wav writes the HDMI audio (48kHz, left channel).

#include "Vwilliams_phoenix.h"
#include "Vwilliams_phoenix___024root.h"
#include "Vwilliams_phoenix__Syms.h"
#include "Vwilliams_phoenix_williams_phoenix.h"
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

static void write_wav(const char *name, const std::vector<int16_t> &pcm)
{
    FILE *f = fopen(name, "wb");
    if (!f) return;
    uint32_t n = pcm.size() * 2, rate = 48000, brate = 96000;
    uint16_t one = 1, align = 2, bits = 16;
    uint32_t riff = 36 + n, fmt = 16;
    fwrite("RIFF", 1, 4, f); fwrite(&riff, 4, 1, f); fwrite("WAVEfmt ", 1, 8, f);
    fwrite(&fmt, 4, 1, f); fwrite(&one, 2, 1, f); fwrite(&one, 2, 1, f);
    fwrite(&rate, 4, 1, f); fwrite(&brate, 4, 1, f); fwrite(&align, 2, 1, f); fwrite(&bits, 2, 1, f);
    fwrite("data", 1, 4, f); fwrite(&n, 4, 1, f); fwrite(pcm.data(), 2, pcm.size(), f);
    fclose(f);
}

int main(int argc, char **argv)
{
    const char *ppm = nullptr, *sd_path = nullptr, *wav = nullptr, *dump = nullptr;
    int frames = 60, ppm_every = 0, trace = 0, trace_all = 0, watch = -1, log_writes = 0, cd_only = 0;
    uint64_t trace_from = 0;
    std::vector<std::pair<int, int>> pads;
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--sd") && i + 1 < argc) sd_path = argv[++i];
        else if (!strcmp(argv[i], "--frames") && i + 1 < argc) frames = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--ppm") && i + 1 < argc) ppm = argv[++i];
        else if (!strcmp(argv[i], "--ppm-every") && i + 1 < argc) ppm_every = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--wav") && i + 1 < argc) wav = argv[++i];
        else if (!strcmp(argv[i], "--dump-sram") && i + 1 < argc) dump = argv[++i];
        else if (!strcmp(argv[i], "--trace") && i + 1 < argc) trace = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--trace-all")) trace_all = 1;
        else if (!strcmp(argv[i], "--log-writes") && i + 1 < argc) log_writes = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--cd-only")) cd_only = 1;   // card detected, but it never answers
        else if (!strcmp(argv[i], "--watch") && i + 1 < argc) watch = strtol(argv[++i], nullptr, 16);
        else if (!strcmp(argv[i], "--trace-from") && i + 1 < argc) trace_from = strtoull(argv[++i], nullptr, 0);
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

    auto *t = new Vwilliams_phoenix;
    auto &top = t->rootp->vlSymsp->TOP__williams_phoenix;
#define SC1(v) top.soc__DOT__cpu_board__DOT__blt__DOT__##v
#ifdef TB_CPU09
#define CPU_PC top.soc__DOT__mc6809__DOT__pc
#define CPU_OP top.soc__DOT__mc6809__DOT__op_code
#define CPU_ST top.soc__DOT__mc6809__DOT__state
#else
#define CPU_PC 0
#define CPU_OP 0
#define CPU_ST 0
#endif
    t->reset = 1;
    t->game_reset = 0;
    t->cv1 = t->cv2 = 0x3c0;     // no key
    t->snes = 0;
    t->kb_keys = 0;
    t->kb_joy = 0;
    t->sd_miso = 1;
    t->sd_cd_n = (sd.present || cd_only) ? 0 : 1;
    t->clk_locked = 1;
    t->clk25 = t->clk48 = t->clk12 = t->clk12g = 0;

    // Times in units of 1/3 ps: clk48 edges every 31250 (48MHz), clk12 on
    // every fourth one (rising with clk48), clk25 every 60000.  clk12g is
    // clk12 with the enable taken while clk12 is low, as a BUFGCE.
    const uint64_t H48 = 31250, H25 = 60000;
    uint64_t t48 = H48, t25 = H25;
    int n48 = 0, gate = 1;
    int frame = 0, last_vc = 0;
    uint64_t c12 = 0, c12g = 0;
    int prev_we = 1;
    int last_boot = -1;
    int px = 0, py = 0;
    int last_blank = 1;
    std::vector<int16_t> pcm;
    int aud_div = 0;
    long sram_w_rom = 0;
    int last_ctl = -1;
    // the last CPU cycles (phase 8: the MPU access), dumped when the control register changes
    struct Cyc { uint64_t c; uint16_t a, pc; uint8_t wr, d, op, st, ra, rb; };
    std::vector<Cyc> ring(4096);
    size_t rpos = 0;
    std::deque<std::string> blog;          // blitter register writes, newest last
    uint64_t last_bregs = 0;

    while (frame < frames) {
        bool e48 = t48 <= t25;
        if (e48) {
            t->clk48 = !t->clk48;
            t48 += H48;
            if (++n48 == 4) {
                n48 = 0;
                t->clk12 = !t->clk12;
                if (t->clk12) { ++c12; if (gate) ++c12g; }
                else gate = t->run;
            }
            t->clk12g = t->clk12 && gate;
        } else {
            t->clk25 = !t->clk25;
            t25 += H25;
        }

        // SRAM: asynchronous read; a write takes place when WE rises
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();
        if (prev_we == 0 && t->sram_we_n == 1 && t->sram_doe) {
            sram[t->sram_addr & 0x7FFFF] = t->sram_dout;
            if (log_writes > 0) {
                --log_writes;
                printf("W %05x %02x\n", t->sram_addr & 0x7FFFF, t->sram_dout);
            }
            if ((int)(t->sram_addr & 0x7FFFF) == watch)
                printf("watch: %05x <= %02x at frame %d, board clock %llu, pc %04x op %02x st %02x\n", watch,
                       t->sram_dout, frame, (unsigned long long)c12g, CPU_PC,
                       CPU_OP, CPU_ST);
            if ((int)(t->sram_addr & 0x7FFFF) == watch && CPU_ST == 0x20) {
                printf("  blitter dst %04x src %04x state %d\n", SC1(dst_address), SC1(src_address), SC1(state));
                for (auto &l : blog) printf("%s\n", l.c_str());
            }
            if (!t->boot_mode && t->sram_addr >= 0x10000)
                if (++sram_w_rom < 10)
                    printf("game write to the ROM area: %05x at frame %d\n", t->sram_addr, frame);
        }
        prev_we = t->sram_we_n;
        t->sram_din = sram[t->sram_addr & 0x7FFFF];
        t->eval();

        {
            uint64_t r = (uint64_t)SC1(reg_src_base) << 48 | (uint64_t)SC1(reg_dst_base) << 32 |
                         (uint64_t)SC1(reg_width) << 24 | SC1(reg_height) << 16 | SC1(reg_ctrl) << 8 | SC1(reg_solid);
            if (r != last_bregs) {
                char l[160];
                snprintf(l, sizeof l, "  blit regs src %04x dst %04x w %02x h %02x ctrl %02x solid %02x  (clock %llu pc %04x)",
                         SC1(reg_src_base), SC1(reg_dst_base), SC1(reg_width), SC1(reg_height), SC1(reg_ctrl),
                         SC1(reg_solid), (unsigned long long)c12g, CPU_PC);
                blog.push_back(l);
                if (blog.size() > 24) blog.pop_front();
                last_bregs = r;
            }
        }

        if (e48 && t->clk12g && n48 == 0 && top.phase == 0x100) {
            Cyc &y = ring[rpos++ % ring.size()];
            y.c = c12g; y.a = top.mem_a; y.wr = !top.mem_wr_n;
            y.d = top.soc__DOT__cpu_board__DOT__mpu_data_in;
#ifdef TB_CPU09
            y.pc = CPU_PC; y.op = CPU_OP;
            y.st = CPU_ST;
            y.ra = top.soc__DOT__mc6809__DOT__acca; y.rb = top.soc__DOT__mc6809__DOT__accb;
#endif
        }

        // --trace n: the first n board accesses at $C000 and up, and I/O writes
        if (e48 && t->clk12g && n48 == 0 && trace > 0 && c12g >= trace_from && (trace_from ? 1 : trace_all ? (top.mem_a >= 0xC000 && top.mem_a != 0xFFFF) || !top.mem_wr_n : (top.mem_a & 0xFC00) == 0xC400)) {
            --trace;
            printf("%7llu %03x %04x %s%s%s %02x %02x\n", (unsigned long long)c12g, top.phase, top.mem_a, top.mem_wr_n ? "r" : "w",
                   top.ext_wr ? " iow" : "", top.ext_rd ? " ior" : "", top.ext_dout, top.ext_din);
        }

        if (e48 && t->clk48) {
            sd.step(t->sd_cs_n, t->sd_sclk, t->sd_mosi);
            t->sd_miso = sd.miso;
        }

        if (t->reset && c12 > 1000) t->reset = 0;

        // The board's control register ($C900): flip, blitter window, ROM bank
        {
            int ctl = top.soc__DOT__cpu_board__DOT__screen_control << 1 |
                      top.soc__DOT__cpu_board__DOT__blt_win_en << 2;
            if (ctl != last_ctl) {
                printf("control %x (flip %d, window %d) at frame %d, board clock %llu\n", ctl, (ctl >> 1) & 1,
                       (ctl >> 2) & 1, frame, (unsigned long long)c12g);
                if (last_ctl >= 0 && ctl != 0)
                    for (size_t i = 0; i < ring.size(); ++i) {
                        Cyc &y = ring[(rpos + i) % ring.size()];
                        if (y.c)
                            printf("  %llu %04x %s %02x  pc %04x op %02x st %02x a %02x b %02x\n",
                                   (unsigned long long)y.c, y.a, y.wr ? "w" : "r", y.d, y.pc, y.op, y.st, y.ra, y.rb);
                    }
                last_ctl = ctl;
            }
        }

        {
            static int last_cs = -1;
            if (t->sd_cs_n != last_cs) {
                printf("CS %d t=%llu us\n", t->sd_cs_n, (unsigned long long)(c12 / 12));
                last_cs = t->sd_cs_n;
            }
        }

        if (t->boot_mode != last_boot) {
            printf("boot_mode %d at frame %d\n", t->boot_mode, frame);
            last_boot = t->boot_mode;
        }

        // Pads, through the SNES pad (0 A 1 B 2 X 3 Y 4 start 5 select 8 up ...)
        int joy = 0;
        for (auto &p : pads) if (frame >= p.first) joy = p.second;
        t->snes = ((joy & 1) ? 1 << 8 : 0) | ((joy & 2) ? 1 << 9 : 0) | ((joy & 4) ? 1 << 10 : 0) |
                  ((joy & 8) ? 1 << 11 : 0) | ((joy & 16) ? 1 : 0) | ((joy & 32) ? 2 : 0) |
                  ((joy & 64) ? 1 << 4 : 0) | ((joy & 128) ? 1 << 5 : 0) | ((joy & 256) ? 1 << 6 : 0);

        if (!e48 && t->clk25) {
            // Audio at 48kHz (25MHz / 520.83)
            aud_div += 48;
            if (aud_div >= 25000) { aud_div -= 25000; if (wav) pcm.push_back((int16_t)t->audio_l); }

            // HDMI picture
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
            int vc = top.vc;
            if (vc == 0 && last_vc != 0) {
                py = 0;
                ++frame;
                if (ppm && ppm_every && frame % ppm_every == 0) {
                    char name[256];
                    snprintf(name, sizeof name, "%s%04d.ppm", ppm, frame);
                    write_ppm(name);
                }
                if (frame % 10 == 0)
                    printf("frame %d: picture sum %08x, board clocks %llu of %llu\n", frame, pic_sum(),
                           (unsigned long long)c12g, (unsigned long long)c12);
            }
            last_vc = vc;
        }
    }
    printf("%d frames, %llu board clocks, %ld SD reads\n", frames, (unsigned long long)c12g, sd.reads);
    if (ppm) write_ppm(std::string(ppm) + "_end.ppm");
    if (wav) write_wav(wav, pcm);
    if (dump) {
        FILE *f = fopen(dump, "wb");
        if (f) { fwrite(sram, 1, sizeof sram, f); fclose(f); }
    }
    delete t;
    return 0;
}
