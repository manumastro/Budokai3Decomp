#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B9B8", sceTtyWrite);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl_0010B9B8", sceTtyRead);
typedef unsigned char u8_x0010BC00;
typedef unsigned short u16_x0010BC00;
typedef signed int s32_x0010BC00;
typedef unsigned int u32_x0010BC00;
typedef struct {
    u8_x0010BC00 pad0[2];
    u16_x0010BC00 unk2;
    u16_x0010BC00 len;
    u8_x0010BC00 tag0;
    u8_x0010BC00 tag1;
    s32_x0010BC00 unk8;
} TtyHdr_x0010BC00;
typedef struct {
    volatile s32_x0010BC00 socket;
    volatile s32_x0010BC00 unk4;
    volatile s32_x0010BC00 unk8;
    volatile s32_x0010BC00 unkC;
    TtyHdr_x0010BC00 *wbuf;
    void *rbuf;
    void *q;
} TtyState_x0010BC00;
extern TtyState_x0010BC00 _sceTtyState_x0010BC00 __asm__("D_00471590");
extern u8_x0010BC00 _sceTtySendBuf_x0010BC00[] __asm__("D_004715C0");
extern u8_x0010BC00 _sceTtyRecvBuf_x0010BC00[] __asm__("D_00471700");
extern void FlushCache_x0010BC00(s32_x0010BC00) __asm__("FlushCache");
extern s32_x0010BC00 sceDeci2Open_x0010BC00(s32_x0010BC00, void *, void (*)(s32_x0010BC00, s32_x0010BC00, void *)) __asm__("func_0010B540");
extern void sceTtyHandler_x0010BC00(s32_x0010BC00, s32_x0010BC00, void *) __asm__("func_0010B820");
extern void *_sceTtyQueueInit_x0010BC00(s32_x0010BC00) __asm__("func_0010B778");
s32_x0010BC00 sceTtyInit_x0010BC00(void) __asm__("sceTtyInit");
/* sceTtyInit_x0010BC00: from https://github.com/gekoii/grandia_xtreme (src/main/48D640.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
s32_x0010BC00 sceTtyInit_x0010BC00(void) {
    TtyHdr_x0010BC00 *h;

    FlushCache_x0010BC00(0);
    _sceTtyState_x0010BC00.socket = sceDeci2Open_x0010BC00(0x210, &_sceTtyState_x0010BC00, sceTtyHandler_x0010BC00);
    if (_sceTtyState_x0010BC00.socket < 0) {
        return 0;
    }
    _sceTtyState_x0010BC00.unkC = 0;
    _sceTtyState_x0010BC00.unk4 = 0;
    _sceTtyState_x0010BC00.unk8 = 0;
    _sceTtyState_x0010BC00.rbuf = (void *)((u32_x0010BC00)_sceTtyRecvBuf_x0010BC00 | 0x20000000);
    h = (TtyHdr_x0010BC00 *)((u32_x0010BC00)_sceTtySendBuf_x0010BC00 | 0x20000000);
    _sceTtyState_x0010BC00.wbuf = h;
    h->unk2 = 0;
    h->len = 0x210;
    h->tag0 = 'E';
    h->tag1 = 'H';
    h->unk8 = 0;
    _sceTtyState_x0010BC00.q = _sceTtyQueueInit_x0010BC00(0x100);
    return 1;
}
