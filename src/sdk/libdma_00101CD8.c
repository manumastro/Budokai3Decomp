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
typedef unsigned int u32_x00101D58;
typedef u32_x00101D58 addr_t_x00101D58;
typedef struct sceDmaChan_x00101D58 {
    u32_x00101D58 chcr; u32_x00101D58 pad00[3];
    u32_x00101D58 madr; u32_x00101D58 pad10[3];
    u32_x00101D58 qwc;  u32_x00101D58 pad20[3];
    u32_x00101D58 tadr; u32_x00101D58 pad30[3];
    u32_x00101D58 asr0; u32_x00101D58 pad40[3];
    u32_x00101D58 asr1; u32_x00101D58 pad50[3];
    u32_x00101D58 pad60[8];
    u32_x00101D58 sadr;
} sceDmaChan_x00101D58;
void WaitDma_x00101D58(sceDmaChan_x00101D58 *chan) __asm__("func_00101868");
u32_x00101D58 CheckAddress_x00101D58(addr_t_x00101D58 addr) __asm__("func_00101960");
void WaitDma_x00101D58(sceDmaChan_x00101D58 *chan) __asm__("func_00101868");
u32_x00101D58 CheckAddress_x00101D58(addr_t_x00101D58 addr) __asm__("func_00101960");
void func_00101D58_x00101D58(sceDmaChan_x00101D58 *chan, void *data, u32_x00101D58 qwc) __asm__("func_00101D58");
/* sceDmaSendN: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libdma.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101D58_x00101D58(sceDmaChan_x00101D58 *chan, void *data, u32_x00101D58 qwc)
{
    u32_x00101D58 addr = CheckAddress_x00101D58(((u32_x00101D58)(data)));

    WaitDma_x00101D58(chan);
    if (chan->madr != 0xFFFFFFFF) {
        chan->madr = addr;
    }
    chan->qwc = qwc;
    chan->chcr = ((int)chan->chcr & ~0xC) | 0x101;
}
typedef unsigned int u32_x00101DD0;
typedef u32_x00101DD0 addr_t_x00101DD0;
typedef struct sceDmaChan_x00101DD0 {
    u32_x00101DD0 chcr; u32_x00101DD0 pad00[3];
    u32_x00101DD0 madr; u32_x00101DD0 pad10[3];
    u32_x00101DD0 qwc;  u32_x00101DD0 pad20[3];
    u32_x00101DD0 tadr; u32_x00101DD0 pad30[3];
    u32_x00101DD0 asr0; u32_x00101DD0 pad40[3];
    u32_x00101DD0 asr1; u32_x00101DD0 pad50[3];
    u32_x00101DD0 pad60[8];
    u32_x00101DD0 sadr;
} sceDmaChan_x00101DD0;
void WaitDma_x00101DD0(sceDmaChan_x00101DD0 *chan) __asm__("func_00101868");
u32_x00101DD0 CheckAddress_x00101DD0(addr_t_x00101DD0 addr) __asm__("func_00101960");
void WaitDma_x00101DD0(sceDmaChan_x00101DD0 *chan) __asm__("func_00101868");
u32_x00101DD0 CheckAddress_x00101DD0(addr_t_x00101DD0 addr) __asm__("func_00101960");
void func_00101DD0_x00101DD0(sceDmaChan_x00101DD0 *chan, void *data, u32_x00101DD0 qwc) __asm__("func_00101DD0");
/* sceDmaSendI: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libdma.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101DD0_x00101DD0(sceDmaChan_x00101DD0 *chan, void *data, u32_x00101DD0 qwc)
{
    u32_x00101DD0 addr = CheckAddress_x00101DD0(((u32_x00101DD0)(data)));

    WaitDma_x00101DD0(chan);
    if (chan->madr != 0xFFFFFFFF) {
        chan->madr = addr;
    }
    chan->qwc = qwc;
    chan->chcr = ((int)chan->chcr & ~0xC) | 0x109;
}
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
typedef struct { volatile int chcr; int p0[3]; volatile unsigned int madr; int p1[3]; volatile unsigned int qwc; int p2[3]; volatile unsigned int tadr; } DmaChan_x00101E90;
extern void WaitDma_x00101E90(DmaChan_x00101E90 *) __asm__("func_00101868");
extern unsigned int CheckAddress_x00101E90(void *) __asm__("func_00101960");
void func_00101E90_x00101E90(DmaChan_x00101E90 *d, void *addr, int qwc) __asm__("func_00101E90");
/* sceDmaRecvN: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libgraph/libgraph_104070.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101E90_x00101E90(DmaChan_x00101E90 *d, void *addr, int qwc)
{
    unsigned int a = CheckAddress_x00101E90(addr);
    int c;
    WaitDma_x00101E90(d);
    if (d->madr != 0xFFFFFFFF) d->madr = a;
    c = d->chcr;
    d->qwc = qwc;
    c &= ~0xC;
    c &= ~1;
    c |= 0x100;
    d->chcr = c;
}
typedef unsigned int u32_x00101F10;
typedef u32_x00101F10 addr_t_x00101F10;
typedef struct sceDmaChan_x00101F10 {
    u32_x00101F10 chcr; u32_x00101F10 pad00[3];
    u32_x00101F10 madr; u32_x00101F10 pad10[3];
    u32_x00101F10 qwc;  u32_x00101F10 pad20[3];
    u32_x00101F10 tadr; u32_x00101F10 pad30[3];
    u32_x00101F10 asr0; u32_x00101F10 pad40[3];
    u32_x00101F10 asr1; u32_x00101F10 pad50[3];
    u32_x00101F10 pad60[8];
    u32_x00101F10 sadr;
} sceDmaChan_x00101F10;
void WaitDma_x00101F10(sceDmaChan_x00101F10 *chan) __asm__("func_00101868");
u32_x00101F10 CheckAddress_x00101F10(addr_t_x00101F10 addr) __asm__("func_00101960");
void WaitDma_x00101F10(sceDmaChan_x00101F10 *chan) __asm__("func_00101868");
u32_x00101F10 CheckAddress_x00101F10(addr_t_x00101F10 addr) __asm__("func_00101960");
void func_00101F10_x00101F10(sceDmaChan_x00101F10 *chan, void *data, u32_x00101F10 qwc) __asm__("func_00101F10");
/* sceDmaRecvI: from https://github.com/Megami-Decomps/smt3-decomp (src/smt3/sdk/libdma.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_00101F10_x00101F10(sceDmaChan_x00101F10 *chan, void *data, u32_x00101F10 qwc)
{
    u32_x00101F10 addr = CheckAddress_x00101F10(((u32_x00101F10)(data)));

    WaitDma_x00101F10(chan);
    if (chan->madr != 0xFFFFFFFF) {
        chan->madr = addr;
    }
    chan->qwc = qwc;
    chan->chcr = ((((int)chan->chcr & ~0xC) | 0x8) & ~1) | 0x100;
}
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
