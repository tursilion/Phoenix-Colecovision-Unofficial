/* Lynx test cart for the Phoenix core simulation: colour bars, text and a
 * frame counter (cc65 -t lynx). */
#include <tgi.h>
#include <lynx.h>
#include <joystick.h>
#include <stdio.h>

void main(void)
{
    unsigned char i, joy;
    unsigned int n = 0;
    char s[20];

    tgi_install(tgi_static_stddrv);
    joy_install(joy_static_stddrv);
    tgi_init();
    asm("cli");
    while (tgi_busy())
        ;
    tgi_setbgcolor(0);
    for (;;) {
        tgi_clear();
        for (i = 0; i < 16; ++i) {
            tgi_setcolor(i);
            tgi_bar(i * 10, 0, i * 10 + 9, 30);
        }
        tgi_setcolor(15);
        tgi_outtextxy(8, 40, "PHOENIX LYNX");
        sprintf(s, "FRAME %u", n++);
        tgi_outtextxy(8, 56, s);
        joy = joy_read(JOY_1);
        sprintf(s, "JOY %02X", joy);
        tgi_outtextxy(8, 72, s);
        tgi_updatedisplay();
        while (tgi_busy())
            ;
    }
}
