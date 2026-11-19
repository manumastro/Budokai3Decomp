#include "common.h"

s32 func_00101CD8_x00101CD8(s32 arg0) __asm__("func_00101CD8");
s32 func_00101CD8_x00101CD8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)0x1000E060;
    *(s32 *)0x1000E060 = arg0;
    return temp_v0;
}
typedef unsigned char      u8_x00101CF0;
typedef signed int         s32_x00101CF0;
typedef unsigned int       u32_x00101CF0;
struct DmaChannelRegs_x00101CF0;
void WaitDma_x00101CF0(volatile u32_x00101CF0 *) __asm__("func_00101868");
u32_x00101CF0 CheckAddress_x00101CF0(u32_x00101CF0) __asm__("func_00101960");
struct DmaChannelRegs_x00101CF0 {
    s32_x00101CF0 chcr;
    u8_x00101CF0  pad_4[0x1C];
    s32_x00101CF0 qwc;
    u8_x00101CF0  pad_24[0xC];
    s32_x00101CF0 tadr;
};
void func_00101CF0_x00101CF0(struct DmaChannelRegs_x00101CF0 *channel, s32_x00101CF0 addr) __asm__("func_00101CF0");
/* sceDmaSend: from https://github.com/lombyte-project/Lombyte (src/sdk/dma/sce_dma_send.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101CF0_x00101CF0(struct DmaChannelRegs_x00101CF0 *channel, s32_x00101CF0 addr) {
    s32_x00101CF0          phys_addr;
    register u32_x00101CF0 sentinel;
    phys_addr = CheckAddress_x00101CF0(addr);
    WaitDma_x00101CF0(channel);
    sentinel = 0xFFFFFFFFu;
    if ((u32_x00101CF0)channel->tadr != sentinel)
        channel->tadr = phys_addr;
    channel->qwc = 0;
    channel->chcr = (s32_x00101CF0)((channel->chcr & ~0xC) | 0x105);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101DD0);
s32 func_00101868_x00101E48() __asm__("func_00101868");
void func_00101E48_x00101E48(u8 *arg0) __asm__("func_00101E48");
void func_00101E48_x00101E48(u8 *arg0)
{
  func_00101868_x00101E48();
  *((s32 *) (((u8 *) arg0) + 0x20)) = 0;
  arg0++;
  arg0--;
  *((s32 *) (((u8 *) arg0) + 0)) = (s32) (((((*((s32 *) (((u8 *) arg0) + 0))) & (~0xC)) | 4) & (~1)) | 0x100);
}
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
s32 func_001018D8_x00101FC8() __asm__("func_001018D8");
s32 func_00101FC8_x00101FC8(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) __asm__("func_00101FC8");
s32 func_00101FC8_x00101FC8(u8 *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    if (arg2 == 1) {
        return (u32) *(u32 *)((u8 *)arg0 + 0x10) < arg1;
    }
    func_001018D8_x00101FC8(arg0, arg1, arg3, arg3, arg4, arg5, arg6, arg7);
    return 0;
}
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
