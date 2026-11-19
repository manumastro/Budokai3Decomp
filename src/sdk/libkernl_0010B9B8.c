#include "common.h"

typedef unsigned int u_int_x0010B9B8;
typedef unsigned char u_char_x0010B9B8;
typedef struct {
    unsigned short len;
    unsigned short rsvd;
    unsigned short proto;
    unsigned char source;
    unsigned char destination;
} sceDeci2Hdr_x0010B9B8;
typedef struct {
    sceDeci2Hdr_x0010B9B8 hdr;
    u_int_x0010B9B8 reserved;
    char data[256];
} TtyPacket_x0010B9B8;
typedef struct {
    volatile int s;
    volatile u_int_x0010B9B8 wlen;
    volatile u_int_x0010B9B8 rlen;
    volatile int writing;
    u_char_x0010B9B8 *wptr;
    u_char_x0010B9B8 *rptr;
    void *queue;
} TtyInfo_x0010B9B8;
extern TtyInfo_x0010B9B8 tinfo_x0010B9B8 __asm__("D_00471590");
extern u_char_x0010B9B8 wbuf_x0010B9B8[320] __asm__("D_004715C0");
extern int DIntr_x0010B9B8(void) __asm__("DI");
extern int EIntr_x0010B9B8(void) __asm__("EI");
extern int sceDeci2ReqSend_x0010B9B8(int, char) __asm__("sceDeci2ReqSend");
extern int sceDeci2Poll_x0010B9B8(int) __asm__("sceDeci2Poll");
int sceTtyWrite_x0010B9B8(char *buf, int n) __asm__("sceTtyWrite");
/* sceTtyWrite: after https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/tty.c, decompiled src/: no licence
   granted by the repository (its tools are CC0-1.0)); the empty asm after the poll call is ours (the scheduling) */
int sceTtyWrite_x0010B9B8(char *buf, int n)
{
    int written = 0;
    int datalen = 0;
    int intr;
    TtyPacket_x0010B9B8 *packet;
    char *data;

    if (tinfo_x0010B9B8.writing) {
        return -1;
    }
    intr = DIntr_x0010B9B8();
    tinfo_x0010B9B8.writing = 1;
    tinfo_x0010B9B8.wptr = (u_char_x0010B9B8 *)((u_int_x0010B9B8)wbuf_x0010B9B8 | 0x20000000);
    packet = (TtyPacket_x0010B9B8 *)tinfo_x0010B9B8.wptr;
    data = packet->data;
    while (n--) {
        if (*buf == '\n') {
            *data++ = '\r';
            datalen++;
            if (datalen >= 256) {
                break;
            }
        }
        *data++ = *buf++;
        datalen++;
        written++;
        if (datalen >= 256) {
            break;
        }
    }
    tinfo_x0010B9B8.wlen = sizeof(sceDeci2Hdr_x0010B9B8) + sizeof(u_int_x0010B9B8) + datalen;
    packet->hdr.len = tinfo_x0010B9B8.wlen;
    if (sceDeci2ReqSend_x0010B9B8(tinfo_x0010B9B8.s, packet->hdr.destination) < 0) {
        tinfo_x0010B9B8.writing = 0;
        if (intr) {
            EIntr_x0010B9B8();
        }
        return -1;
    }
    while (tinfo_x0010B9B8.writing) {
        sceDeci2Poll_x0010B9B8(tinfo_x0010B9B8.s);
        __asm__ volatile("");
    }
    if (intr) {
        EIntr_x0010B9B8();
    }
    return written;
}
__asm__("# noswap sceTtyWrite");
typedef unsigned int u_int_x0010BB30;
typedef unsigned char u_char_x0010BB30;
typedef struct {
    int size;
    volatile int count;
    char *rp;
    char *wp;
    char buf[256];
} Queue_x0010BB30;
typedef struct {
    volatile int s;
    volatile u_int_x0010BB30 wlen;
    volatile u_int_x0010BB30 rlen;
    volatile int writing;
    u_char_x0010BB30 *wptr;
    u_char_x0010BB30 *rptr;
    Queue_x0010BB30 *queue;
} TtyInfo_x0010BB30;
void QueuePeekReadDone_x0010BB30(Queue_x0010BB30 *queue) __asm__("func_0010B7E0");
extern TtyInfo_x0010BB30 tinfo_x0010BB30 __asm__("D_00471590");
void QueuePeekReadDone_x0010BB30(Queue_x0010BB30 *queue) __asm__("func_0010B7E0");
void QueuePeekReadDone_x0010BB30(Queue_x0010BB30 *queue) __attribute__((weak, section(".b3stub")));
void QueuePeekReadDone_x0010BB30(Queue_x0010BB30 *queue) {}
int sceTtyRead_x0010BB30(char *buf, int n) __asm__("sceTtyRead");
/* sceTtyRead_x0010BB30: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/tty.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
int sceTtyRead_x0010BB30(char *buf, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        while (tinfo_x0010BB30.queue->count == 0) {
        }
        buf[i] = *tinfo_x0010BB30.queue->rp;
        QueuePeekReadDone_x0010BB30(tinfo_x0010BB30.queue);
        if (buf[i] == '\n' || buf[i] == '\r') {
            return i + 1;
        }
    }
    return i;
}
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
