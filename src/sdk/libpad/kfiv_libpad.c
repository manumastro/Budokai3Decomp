/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libpad/libpad.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libkernl,src/sce/libpad */
#include "common.h"

/* libpad.a.  The archive's member boundaries in this build are not known,
 * so this file is the archive's whole run. */
#include <sifrpc.h>

#include <sifcmd.h>

#include <libpad.h>

#include <stdio.h>

#include <eekernel.h>

#include <string.h>

#define PAD_DEBUG 0 /* derived name */

struct S12 { /* field names derived */
    char b[12];
};

/* The per-port, per-slot state record (0x1C bytes, padSlot[2][4]).  The
 * pointer fields are typed by what scePadPortOpen stores in them: the EE pad
 * DMA area the caller passes, this slot's command buffer (read back as an int
 * pointer by scePadSetActDirect), and the IOP-side buffer address the open
 * RPC returns, with the command buffer's type.  scePadInit clears the two
 * words at 0x14 and 0x18, which nothing else in the run reads. */
typedef struct {   /* field names derived */
    void *dmaArea; /* 0x00 */
    int *cmdBuf;   /* 0x04 */
    int *iopBuf;   /* 0x08 */
    int dmaId;     /* 0x0C, the sceSifSetDma id _send_to_iop polls */
    int opened;    /* 0x10 */
    int pad14;     /* 0x14 */
    int pad18;     /* 0x18 */
} PadSlot;

#define printf scePrintf

 /* derived name */

#define padInited D_003EDD00
#define padDebug D_003EDD04
#define padClient D_00478940
#define padSlot D_00478990
#define padRpcBuf D_00478B80
extern int padInited;

 /* derived name */

extern int padDebug;

 /* derived name */

/* the member's .bss: the two RPC clients (padman's two servers), the slot
   records, each slot's 64-byte command buffer and the RPC buffer */
extern sceSifRpcClientData padClient[2];

 /* derived name */

extern PadSlot padSlot[2][4];

 /* derived name */

extern int padRpcBuf[32];

 /* derived name */

/* The IOP send helper, libpad.o's first function (its first string is the
   member's first .rodata entry). */
void _send_to_iop(int port, int slot);

int scePadInit2(int a0);

int scePadEnd(void);

int scePadPortOpen(int port, int slot, void *addr);

int scePadGetDmaStr(int port, int slot);

int scePadGetFrameCount(int port, int slot);

int scePadRead(int port, int slot, void *data);

int scePadGetState(int port, int slot);

 /* derived name */

void scePadStateIntToStr(unsigned int state, char *str);

int scePadSetReqState(int port, int slot, int state);

int scePadGetReqState(int port, int slot);

 /* derived name */

void scePadReqIntToStr(unsigned int state, char *str);

/* the pad DMA buffer scePadGetDmaStr hands back, laid out from the offsets
   this TU's members use: the input data scePadRead copies out (scePadPortOpen
   fills its first 32 bytes with 0xFF), the actuator and combination tables of
   four-byte records, the mode table scePadInfoMode indexes, the frame count
   and data size, the levels of information the pad has answered with, and the
   state bytes scePadGetState and scePadSetReqState use.  A byte nothing reads
   is padding. */
typedef struct {               /* field names derived */
    unsigned char data[32];    /* 0x00 */
    unsigned char pad20[16];   /* 0x20 */
    unsigned char act[4][4];   /* 0x30 */
    unsigned char comb[4][4];  /* 0x40 */
    unsigned short modeTbl[4]; /* 0x50 */
    int frame;                 /* 0x58 */
    unsigned char pad5C[4];    /* 0x5C */
    int size;                  /* 0x60 */
    unsigned char infoLevel;   /* 0x64, 2 or more once the act and comb tables are filled */
    unsigned char modeId;      /* 0x65, the pad's id, 0xF3 for none */
    unsigned char maskLevel;   /* 0x66, 2 or more once the button mask is filled */
    unsigned char pad67;       /* 0x67 */
    unsigned char nmode;       /* 0x68 */
    unsigned char curMode;     /* 0x69 */
    unsigned char nact;        /* 0x6A */
    unsigned char ncomb;       /* 0x6B */
    unsigned char pad6C[4];    /* 0x6C */
    unsigned char state;       /* 0x70 */
    unsigned char reqState;    /* 0x71 */
    unsigned char infoValid;   /* 0x72, 1 when the pad's information is valid */
} PadDmaStr;

                   /* derived name */

int scePadInfoAct(int port, int slot, int act, int term);

int scePadInfoComb(int port, int slot, int comb, int term);

int scePadInfoMode(int port, int slot, int term, int index);

int scePadSetActDirect(int port, int slot, unsigned char *act);

int scePadGetButtonMask(int port, int slot);

int scePadSetButtonInfo(int port, int slot, int mask);

int scePadSetVrefParam(int port, int slot, void *param);

int scePadGetSlotMax(int port);

int scePadSetWarningLevel(int level);

extern char D_0045DA20[];
extern char D_0045DA48[];



int scePadInit(int a0)
{
    int ver;
    int major;
    int i;

    padInited = 1;
    while (1) {
        sceSifBindRpc(&padClient[0], 0x80000100, 0);
        if (padClient[0].serve != 0) {
            break;
        }
        for (i = 0x10000; i != -1; i--) {}
    }
    while (1) {
        sceSifBindRpc(&padClient[1], 0x80000101, 0);
        if (padClient[1].serve != 0) {
            break;
        }
        for (i = 0x10000; i != -1; i--) {}
    }
    ver = scePadGetModVersion();
    major = ver >> 8;
    if (major != 4) {
        if (padDebug != 0) {
            printf(D_0045DA20);
            printf(D_0045DA48, 4, 0, major, ver & 0xFF);
        }
        return 0;
    }
    return scePadInit2(a0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116690);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadInit2);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_001167D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116860);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116978);


int scePadPortClose(int port, int slot)
{
    int ret;

    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    padRpcBuf[0] = 0xE;
    padRpcBuf[1] = port;
    padRpcBuf[2] = slot;
    padRpcBuf[4] = 1;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    padSlot[port][slot].opened = 0;
    return padRpcBuf[3];
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116C18);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116D70);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116DC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116E40);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116EB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadSetReqState);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00116FA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117000);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117038);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117150);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117268);


int scePadSetMainMode(int port, int slot, int mode, int option)
{
    int *s0 = padRpcBuf;
    void *local = 0;
    int ret;
    int s;
    padRpcBuf[0] = 6;
    s0[1] = port;
    s0[2] = slot;
    s0[3] = mode;
    s0[4] = option;
    ret = sceSifCallRpc(&padClient[0], 1, 0, s0, 0x80, s0, 0x80, 0, local);
    if (ret < 0) {
        return 0;
    }
    s = s0[5];
    if (s == 1) {
        scePadSetReqState(port, slot, 2);
        s = s0[5];
    }
    return s;
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117458);


int scePadSetActAlign(int port, int slot, char *act)
{
    int *buf = padRpcBuf;
    int i;
    int val;
    int ret;
    char *dst;
    padRpcBuf[0] = 8;
    buf[1] = port;
    buf[2] = slot;
    dst = (char *)buf + 0xC;
    for (i = 0; i < 6; i++) {
        dst[i] = act[i];
    }
    ret = sceSifCallRpc(&padClient[0], 1, 0, buf, 0x80, buf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    val = buf[5];
    if (val == 1) {
        scePadSetReqState(port, slot, 2);
        val = buf[5];
    }
    return val;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadGetButtonMask);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", scePadSetButtonInfo);


int scePadInfoPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadGetButtonMask(port, slot) == 0x3FFFF;
}


int scePadEnterPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadSetButtonInfo(port, slot, 0xFFF);
}


int scePadExitPressMode(int port, int slot)
{
    if (padSlot[port][slot].opened == 0) {
        return 0;
    }
    return scePadSetButtonInfo(port, slot, 0);
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_00117868);


int scePadGetPortMax(void)
{
    int ret;
    padRpcBuf[0] = 0xC;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    return padRpcBuf[3];
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libpad/kfiv_libpad", func_001179A0);


int scePadGetModVersion(void)
{
    int ret;
    padRpcBuf[0] = 0x12;
    ret = sceSifCallRpc(&padClient[0], 1, 0, padRpcBuf, 0x80, padRpcBuf, 0x80, 0, 0);
    if (ret < 0) {
        return 0;
    }
    return padRpcBuf[3];
}
INCLUDE_PAD(4);
