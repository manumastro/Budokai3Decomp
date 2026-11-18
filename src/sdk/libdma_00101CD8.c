#include "common.h"

s32 func_00101CD8_x00101CD8(s32 arg0) __asm__("func_00101CD8");
s32 func_00101CD8_x00101CD8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)0x1000E060;
    *(s32 *)0x1000E060 = arg0;
    return temp_v0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101CF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101DD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101E48);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101E90);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101F10);
s32 func_00101868_x00101F90() __asm__("func_00101868");
s32 func_00101F90_x00101F90(u32 *arg0, s32 arg1) __asm__("func_00101F90");
s32 func_00101F90_x00101F90(u32 *arg0, s32 arg1) {
    if (arg1 == 1) {
        return ((u32) *arg0 >> 8) & 1;
    }
    func_00101868_x00101F90();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101FC8);
int DIntr_x00102000(void) __asm__("DI");
int EIntr_x00102000(void) __asm__("EI");
typedef struct {
    volatile unsigned int chcr;
} sceDmaChan_x00102000;
unsigned int func_00102000_x00102000(sceDmaChan_x00102000 *chan) __asm__("func_00102000");
/* sceDmaPause: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00397590.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_00102000_x00102000(sceDmaChan_x00102000 *chan)
{
    int oldstat;
    unsigned int en;
    unsigned int chcr;

    oldstat = DIntr_x00102000();
    en = (*(volatile unsigned int *)0x1000F520);
    if (!(en & 0x10000)) {
        (*(volatile unsigned int *)0x1000F590) = en | 0x10000;
    }
    (*(volatile unsigned int *)0x1000E000);
    chcr = chan->chcr;
    chan->chcr = chcr & 0xFFFFFEFF;
    (*(volatile unsigned int *)0x1000F590) = en;
    if (oldstat) {
        EIntr_x00102000();
    }
    return chcr;
}
s32 func_00102098_x00102098(u32 *arg0, u32 arg1) __asm__("func_00102098");
s32 func_00102098_x00102098(u32 *arg0, u32 arg1) {
    u32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return (temp_v0 >> 8) & 1;
}
INCLUDE_PAD(4);
