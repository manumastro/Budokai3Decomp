#include "common.h"

s32 DeleteSema(s32);                            /* extern */
s32 func_0011A700(s32, s32, s32);   /* extern */
extern s32 D_003EF94C;
extern s32 D_003EF950;

typedef struct { char p[0x24]; int server; } RpcCD_x00119CB0;
struct SemaParam_x00119CB0 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
extern RpcCD_x00119CB0 D_00450880_x00119CB0 __asm__("D_00478FC0");
extern char D_00450900_x00119CB0[] __asm__("D_00479040");
extern int D_00451E40_x00119CB0[] __asm__("D_0047A580");
extern int D_002C8354_x00119CB0 __asm__("D_003EF94C");
extern int D_002C8358_x00119CB0 __asm__("D_003EF950");
extern char D_002AB7B0_x00119CB0[] __asm__("D_0045DE08");
extern char D_002AB7C0_x00119CB0[] __asm__("D_0045DE18");
extern char D_002AB7D8_x00119CB0[] __asm__("D_0045DE30");
extern char D_002AB7F0_x00119CB0[] __asm__("D_0045DE48");
extern char D_002AB818_x00119CB0[] __asm__("D_0045DE70");
int func_00234A20_x00119CB0(struct SemaParam_x00119CB0 *) __asm__("CreateSema");
int func_00234A30_x00119CB0(int) __asm__("DeleteSema");
int func_00234A40_x00119CB0(int) __asm__("SignalSema");
int func_00234A60_x00119CB0(int) __asm__("WaitSema");
void func_00244450_x00119CB0(int, int, int) __asm__("func_0011A700");
void func_00236A60_x00119CB0(int) __asm__("sceSifInitRpc");
int func_00236960_x00119CB0(const char *, ...) __asm__("scePrintf");
int func_002370A8_x00119CB0(void *, unsigned int, int) __asm__("sceSifBindRpc");
int func_00237288_x00119CB0(void *cd, int fno, unsigned int mode, void *send, int ssize, void *recv, int rsize, void *end, void *earg) __asm__("sceSifCallRpc");
static inline int bindmc_x00119CB0(void)
{
    if (func_002370A8_x00119CB0(&D_00450880_x00119CB0, 0x80000400, 0) < 0) {
        func_00236960_x00119CB0(D_002AB7D8_x00119CB0);
        while (1) ;
    }
    return D_00450880_x00119CB0.server;
}
int func_00119CB0_x00119CB0(void) __asm__("func_00119CB0");
/* sceMcInit: from https://github.com/Komasia/sly2-decomp (src/lib/sceMcInit.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00119CB0_x00119CB0(void)
{
    struct SemaParam_x00119CB0 sp;
    int i = 0;
    int j;
    int r;

    if (D_002C8354_x00119CB0 < 0) {
        int m1 = -1;
        sp.initCount = 1;
        sp.option = (unsigned int)D_002AB7B0_x00119CB0;
        sp.maxCount = 1;
        D_002C8354_x00119CB0 = func_00234A20_x00119CB0(&sp);
        if (D_002C8354_x00119CB0 == m1)
            return -101;
        sp.maxCount = 1;
        sp.initCount = 0;
        sp.option = (unsigned int)D_002AB7C0_x00119CB0;
        r = func_00234A20_x00119CB0(&sp);
        D_002C8358_x00119CB0 = r;
        if (r == m1) {
            func_00234A30_x00119CB0(D_002C8354_x00119CB0);
            D_002C8354_x00119CB0 = r;
            return -101;
        }
    }
    func_00244450_x00119CB0(0, 0, 0);
    func_00234A60_x00119CB0(D_002C8354_x00119CB0);
    func_00236A60_x00119CB0(0);
    while (bindmc_x00119CB0() == 0) {
        j = 0x100000;
        while (--j) ;
        if (++i >= 0x200) {
            func_00236960_x00119CB0(D_002AB7D8_x00119CB0);
            return -91;
        }
    }
    r = func_00237288_x00119CB0(&D_00450880_x00119CB0, 0xFE, 0, D_00450900_x00119CB0, 0x30, D_00451E40_x00119CB0, 0xC, 0, 0);
    func_00234A40_x00119CB0(D_002C8354_x00119CB0);
    if (r < 0) {
        D_00450880_x00119CB0.server = 0;
        return -91;
    }
    if (D_00451E40_x00119CB0[1] < 0x20A) {
        func_00236960_x00119CB0(D_002AB7F0_x00119CB0);
        D_00450880_x00119CB0.server = 0;
        return -120;
    }
    if (D_00451E40_x00119CB0[2] < 0x20E) {
        func_00236960_x00119CB0(D_002AB818_x00119CB0);
        D_00450880_x00119CB0.server = 0;
        return -121;
    }
    return D_00451E40_x00119CB0[0];
}
s32 func_00119ED8(void) {
    if (D_003EF94C >= 0) {
        func_0011A700(0, 0, 0);
        DeleteSema(D_003EF94C);
        D_003EF94C = -1;
        DeleteSema(D_003EF950);
    }
    return 1;
}
s32 iSignalSema_x00119F30(s32) __asm__("iSignalSema");
extern s32 D_003EF950_x00119F30 __asm__("D_003EF950");
void func_00119F30_x00119F30(void) __asm__("func_00119F30");
void func_00119F30_x00119F30(void) {
    iSignalSema_x00119F30(D_003EF950_x00119F30);
}
extern u8 D_00478FC0_x00119F40[] __asm__("D_00478FC0");
extern s32 D_00479040_x00119F40[] __asm__("D_00479040");
extern u8 D_0047A580_x00119F40[] __asm__("D_0047A580");
extern s32 D_003EF94C_x00119F40 __asm__("D_003EF94C");
extern s32 D_003EF948_x00119F40 __asm__("D_003EF948");
void func_00119F30_x00119F40(void *) __asm__("func_00119F30");
int PollSema_x00119F40(int) __asm__("PollSema");
int SignalSema_x00119F40(int) __asm__("SignalSema");
int sceSifCallRpc_x00119F40(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
s32 func_00119F40_x00119F40(s32 a0) __asm__("func_00119F40");
s32 func_00119F40_x00119F40(s32 a0)
{
    u8 *cd = D_00478FC0_x00119F40;

    if (*(s32 *)(cd + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema_x00119F40(D_003EF94C_x00119F40) < 0) {
        return -0xC8;
    }
    D_00479040_x00119F40[5] = a0;
    if (sceSifCallRpc_x00119F40(cd, 0x14, 1, D_00479040_x00119F40, 0x30, D_0047A580_x00119F40, 4, func_00119F30_x00119F40, 0) != 0) {
        SignalSema_x00119F40(D_003EF94C_x00119F40);
        return -0x5B;
    }
    D_003EF948_x00119F40 = 0x14;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A000;
typedef struct {
    int reserved_00;
    int port;
} MemoryCardSlotRequest_x0011A000;
extern MemoryCardRpcClient_x0011A000 MC_CLIENT_x0011A000 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A000[] __asm__("D_003EF94C");
extern MemoryCardSlotRequest_x0011A000 MC_REQ_x0011A000 __asm__("D_00479040");
extern int MC_OUTBUF_x0011A000[] __asm__("D_0047A580");
extern int PollSema_x0011A000(int) __asm__("PollSema");
extern int SignalSema_x0011A000(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A000(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
int func_0011A000_x0011A000(int port) __asm__("func_0011A000");
/* sceMcGetSlotMax: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcGetSlotMax.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A000_x0011A000(int port) {
    int rpc_result;

    if (MC_CLIENT_x0011A000.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A000(MC_SEMA_x0011A000[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011A000.port = port;
    rpc_result = sceSifCallRpc_x0011A000(&MC_CLIENT_x0011A000, 0x15, 0, &MC_REQ_x0011A000, 0x30, MC_OUTBUF_x0011A000, 4, 0, 0);
    if (rpc_result != 0) {
        SignalSema_x0011A000(MC_SEMA_x0011A000[0]);
        return -0x5B;
    }
    SignalSema_x0011A000(MC_SEMA_x0011A000[0]);
    return MC_OUTBUF_x0011A000[0];
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A0C0;
typedef struct {
    int port;
    int slot;
    int flags;
    int maxent;
    int unk10;
    char name[0x400];
} MemoryCardNameParam_x0011A0C0;
extern MemoryCardRpcClient_x0011A0C0 MC_CLIENT_x0011A0C0 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A0C0[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A0C0 __asm__("D_003EF948");
extern unsigned char MC_NAMEBUF_x0011A0C0[] __asm__("D_00479084");
extern int MC_OUTBUF_x0011A0C0[] __asm__("D_0047A580");
extern int PollSema_x0011A0C0(int) __asm__("PollSema");
extern int SignalSema_x0011A0C0(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A0C0(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern char *strncpy_x0011A0C0(char *, const char *, unsigned int) __asm__("func_00128040");
extern void RPC_END_x0011A0C0(void) __asm__("func_00119F30");
int func_0011A0C0_x0011A0C0(int port, int slot, char *name, int mode) __asm__("func_0011A0C0");
/* sceMcOpen: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcOpen.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A0C0_x0011A0C0(int port, int slot, char *name, int mode) {
    MemoryCardNameParam_x0011A0C0 *request;
    int rpc_result;

    if (MC_CLIENT_x0011A0C0.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A0C0(MC_SEMA_x0011A0C0[0]) < 0) {
        return -0xC8;
    }
    if (name == 0 || name[0] == 0) {
        SignalSema_x0011A0C0(MC_SEMA_x0011A0C0[0]);
        return -0xD2;
    }
    strncpy_x0011A0C0((char *)MC_NAMEBUF_x0011A0C0, name, 0x3FF);
    request = (MemoryCardNameParam_x0011A0C0 *)(MC_NAMEBUF_x0011A0C0 - 0x14);
    request->port = port;
    request->flags = mode;
    request->slot = slot;
    request->name[0x3FF] = 0;
    rpc_result = sceSifCallRpc_x0011A0C0(&MC_CLIENT_x0011A0C0, 2, 1, request, 0x414, MC_OUTBUF_x0011A0C0, 4,
                               (void *)RPC_END_x0011A0C0, 0);
    if (rpc_result != 0) {
        SignalSema_x0011A0C0(MC_SEMA_x0011A0C0[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A0C0 = 2;
    return 0;
}
int sceMcOpen_x0011A1E8(int port, int slot, char *name, int flags) __asm__("func_0011A0C0");
extern int mcFunc_x0011A1E8 __asm__("D_003EF948");
int sceMcOpen_x0011A1E8(int port, int slot, char *name, int flags) __asm__("func_0011A0C0");
int func_0011A1E8_x0011A1E8(int port, int slot, char *name) __asm__("func_0011A1E8");
/* sceMcMkdir: from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libmc/libmc.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A1E8_x0011A1E8(int port, int slot, char *name)
{
    int ret = sceMcOpen_x0011A1E8(port, slot, name, 0x40);
    if (ret == 0) {
        mcFunc_x0011A1E8 = 0xB;
    }
    return ret;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A220;
extern MemoryCardRpcClient_x0011A220 MC_CLIENT_x0011A220 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A220[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A220 __asm__("D_003EF948");
extern int MC_REQ_x0011A220[] __asm__("D_00479040");
extern int MC_OUTBUF_x0011A220[] __asm__("D_0047A580");
extern int PollSema_x0011A220(int) __asm__("PollSema");
extern int SignalSema_x0011A220(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A220(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern void RPC_END_x0011A220(void) __asm__("func_00119F30");
int func_0011A220_x0011A220(int file_descriptor) __asm__("func_0011A220");
/* sceMcClose: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcClose.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A220_x0011A220(int file_descriptor) {
    int rpc_result;

    if (MC_CLIENT_x0011A220.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A220(MC_SEMA_x0011A220[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011A220[0] = file_descriptor;
    rpc_result = sceSifCallRpc_x0011A220(&MC_CLIENT_x0011A220, 3, 1, MC_REQ_x0011A220, 0x30, MC_OUTBUF_x0011A220, 4,
                               (void *)RPC_END_x0011A220, 0);
    if (rpc_result != 0) {
        SignalSema_x0011A220(MC_SEMA_x0011A220[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A220 = 3;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A2E0;
typedef struct {
    int file_descriptor;
    unsigned char reserved_04[0xC];
    int offset;
    int origin;
} MemoryCardSeekRequest_x0011A2E0;
extern MemoryCardRpcClient_x0011A2E0 MC_CLIENT_x0011A2E0 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A2E0[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A2E0 __asm__("D_003EF948");
extern MemoryCardSeekRequest_x0011A2E0 MC_REQ_x0011A2E0 __asm__("D_00479040");
extern int MC_OUTBUF_x0011A2E0[] __asm__("D_0047A580");
extern int PollSema_x0011A2E0(int) __asm__("PollSema");
extern int SignalSema_x0011A2E0(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A2E0(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern void RPC_END_x0011A2E0(void) __asm__("func_00119F30");
int func_0011A2E0_x0011A2E0(int file_descriptor, int offset, int origin) __asm__("func_0011A2E0");
/* sceMcSeek: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcSeek.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A2E0_x0011A2E0(int file_descriptor, int offset, int origin) {
    int rpc_result;

    if (MC_CLIENT_x0011A2E0.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A2E0(MC_SEMA_x0011A2E0[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011A2E0.file_descriptor = file_descriptor;
    MC_REQ_x0011A2E0.offset = offset;
    MC_REQ_x0011A2E0.origin = origin;
    rpc_result = sceSifCallRpc_x0011A2E0(&MC_CLIENT_x0011A2E0, 4, 1, &MC_REQ_x0011A2E0, 0x30, MC_OUTBUF_x0011A2E0, 4,
                               (void *)RPC_END_x0011A2E0, 0);
    if (rpc_result != 0) {
        SignalSema_x0011A2E0(MC_SEMA_x0011A2E0[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A2E0 = 4;
    return 0;
}
typedef struct { int n, m; unsigned char *a, *b; unsigned char x[64], y[64]; } Req_A3C0_x0011A3C0;
extern int D_003EF950_x0011A3C0 __asm__("D_003EF950");
int iSignalSema_x0011A3C0(int) __asm__("iSignalSema");
void func_0011A3C0_x0011A3C0(Req_A3C0_x0011A3C0 *p) __asm__("func_0011A3C0");
void func_0011A3C0_x0011A3C0(Req_A3C0_x0011A3C0 *p)
{
    int i;

    p = (Req_A3C0_x0011A3C0 *)((unsigned)p | 0x20000000);
    if (p->n) {
        unsigned char *dest = p->a, *uncached = (unsigned char *)((unsigned)dest | 0x20000000);
        for (i = 0; i < p->n; i++) {
            unsigned char c = p->x[i];
            *dest++ = c;
            *uncached++ = c;
        }
    }
    if (p->m) {
        unsigned char *dest = p->b, *uncached = (unsigned char *)((unsigned)dest | 0x20000000);
        for (i = 0; i < p->m; i++) {
            unsigned char c = p->y[i];
            *dest++ = c;
            *uncached++ = c;
        }
    }
    iSignalSema_x0011A3C0(D_003EF950_x0011A3C0);
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A470;
typedef struct {
    int fd;
    int unk04;
    int unk08;
    int byte_count;
    int unk10;
    int unk14;
    void *dest;
    void *transfer;
} McReadParam_x0011A470;
extern MemoryCardRpcClient_x0011A470 MC_CLIENT_x0011A470 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A470[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A470 __asm__("D_003EF948");
extern McReadParam_x0011A470 MC_INFO_x0011A470 __asm__("D_00479040");
extern char MC_XFER_x0011A470[] __asm__("D_004794C0");
extern int MC_OUTBUF_x0011A470[] __asm__("D_0047A580");
extern int PollSema_x0011A470(int) __asm__("PollSema");
extern int SignalSema_x0011A470(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A470(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern int sceSifWriteBackDCache_x0011A470(void *, int) __asm__("func_0010D770");
extern void RPC_READ_END_x0011A470(void) __asm__("func_0011A3C0");
int func_0011A470_x0011A470(int fd, void *buf, int count) __asm__("func_0011A470");
/* sceMcRead: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcRead.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A470_x0011A470(int fd, void *buf, int count) {
    McReadParam_x0011A470 *request;
    int rpc_result;

    if (MC_CLIENT_x0011A470.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A470(MC_SEMA_x0011A470[0]) < 0) {
        return -0xC8;
    }
    request = &MC_INFO_x0011A470;
    request->fd = fd;
    request->dest = buf;
    request->byte_count = count;
    request->transfer = MC_XFER_x0011A470;
    sceSifWriteBackDCache_x0011A470(buf, count);
    sceSifWriteBackDCache_x0011A470(MC_XFER_x0011A470, 0xC0);
    rpc_result = sceSifCallRpc_x0011A470(&MC_CLIENT_x0011A470, 5, 1, request, 0x30, MC_OUTBUF_x0011A470, 4,
                               (void *)RPC_READ_END_x0011A470, MC_XFER_x0011A470);
    if (rpc_result != 0) {
        SignalSema_x0011A470(MC_SEMA_x0011A470[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A470 = 5;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A588;
typedef struct {
    int fd;
    int unk04;
    int unk08;
    int byte_count;
    int unk10;
    int origin;
    char *data;
    int unk1C;
    unsigned char data2[0x400];
} McWriteParam_x0011A588;
extern MemoryCardRpcClient_x0011A588 MC_CLIENT_x0011A588 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A588[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A588 __asm__("D_003EF948");
extern McWriteParam_x0011A588 MC_INFO_x0011A588 __asm__("D_00479040");
extern int MC_OUTBUF_x0011A588[] __asm__("D_0047A580");
extern int PollSema_x0011A588(int) __asm__("PollSema");
extern int SignalSema_x0011A588(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A588(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern int FlushCache_x0011A588(int) __asm__("FlushCache");
extern void RPC_END_x0011A588(void) __asm__("func_00119F30");
int func_0011A588_x0011A588(int fd, unsigned char *buf, int size) __asm__("func_0011A588");
/* sceMcWrite: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcWrite.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A588_x0011A588(int fd, unsigned char *buf, int size) {
    unsigned int i;
    int root_off;
    int base;
    int rpc_result;

    if (MC_CLIENT_x0011A588.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A588(MC_SEMA_x0011A588[0]) < 0) {
        return -0xC8;
    }
    MC_INFO_x0011A588.fd = fd;
    if (size < 0x11) {
        MC_INFO_x0011A588.origin = size;
        MC_INFO_x0011A588.byte_count = 0;
        MC_INFO_x0011A588.data = 0;
    } else {
        base = (int)buf - 0x10;
        root_off = (((int)buf - 1) & 0xFFFFFFF0) - base;
        MC_INFO_x0011A588.byte_count = size - root_off;
        MC_INFO_x0011A588.origin = root_off;
        MC_INFO_x0011A588.data = buf + root_off;
    }
    for (i = 0; i < MC_INFO_x0011A588.origin; i++) {
        MC_INFO_x0011A588.data2[i] = buf[i];
    }
    FlushCache_x0011A588(0);
    rpc_result = sceSifCallRpc_x0011A588(&MC_CLIENT_x0011A588, 6, 1, &MC_INFO_x0011A588, 0x30, MC_OUTBUF_x0011A588, 4,
                               (void *)RPC_END_x0011A588, 0);
    if (rpc_result != 0) {
        SignalSema_x0011A588(MC_SEMA_x0011A588[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A588 = 6;
    return 0;
}
s32 PollSema_x0011A700(s32) __asm__("PollSema");
s32 SignalSema_x0011A700(s32) __asm__("SignalSema");
s32 WaitSema_x0011A700(s32) __asm__("WaitSema");
extern s32 D_003EF948_x0011A700 __asm__("D_003EF948");
extern s32 D_003EF94C_x0011A700 __asm__("D_003EF94C");
extern s32 D_003EF950_x0011A700 __asm__("D_003EF950");
extern s32 D_0047A580_x0011A700 __asm__("D_0047A580");
s32 func_0011A700_x0011A700(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0011A700");
s32 func_0011A700_x0011A700(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_s0;
  void *new_var;
  s32 var_s0;
  if (D_003EF948_x0011A700 == 0)
  {
    return -1;
  }
  var_s0 = 0;
  var_s0 = PollSema_x0011A700(D_003EF950_x0011A700) < var_s0;
  new_var = (void *) 0;
  if ((arg0 == 0) && (var_s0 != 0))
  {
    var_s0 = 0;
    WaitSema_x0011A700(D_003EF950_x0011A700);
  }
  temp_s0 = var_s0 == 0;
  if (arg1 != new_var)
  {
    *arg1 = D_003EF948_x0011A700;
  }
  if (temp_s0 != 0)
  {
    D_003EF948_x0011A700 = 0;
    if (arg2 != ((void *) 0))
    {
      *arg2 = D_0047A580_x0011A700;
    }
    SignalSema_x0011A700(D_003EF94C_x0011A700);
  }
  return temp_s0;
}
int iSignalSema_x0011A7C8(int sema) __asm__("iSignalSema");
typedef struct McInfoApdx_x0011A7C8 {
    int type;
    int free;
    int reserved[34];
    int format;
} McInfoApdx_x0011A7C8;
extern int semaid_timerfunc_x0011A7C8 __asm__("D_003EF950");
extern int *typeAddr_x0011A7C8 __asm__("D_00478FE8");
extern int *freeAddr_x0011A7C8 __asm__("D_00478FEC");
extern int *formAddr_x0011A7C8 __asm__("D_00478FF0");
void func_0011A7C8_x0011A7C8(void *apdx) __asm__("func_0011A7C8");
/* mceGetInfoApdx: from https://github.com/crashbashash/DW4_Decomp (src/sony/libmc/libmc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0011A7C8_x0011A7C8(void *apdx)
{
    McInfoApdx_x0011A7C8 *info;

    info = (McInfoApdx_x0011A7C8 *)((unsigned int)apdx | 0x20000000);
    if (typeAddr_x0011A7C8) *typeAddr_x0011A7C8 = info->type;
    if (freeAddr_x0011A7C8) *freeAddr_x0011A7C8 = info->free;
    if (formAddr_x0011A7C8) *formAddr_x0011A7C8 = info->format;
    iSignalSema_x0011A7C8(semaid_timerfunc_x0011A7C8);
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011A820;
typedef struct {
    int unk00;
    int unk04;
    int unk08;
    int unk0C;
    int unk10;
    int unk14;
    int unk18;
    void *unk1C;
} McInfoParam_x0011A820;
extern MemoryCardRpcClient_x0011A820 MC_CLIENT_x0011A820 __asm__("D_00478FC0");
extern int MC_SEMA_x0011A820[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011A820 __asm__("D_003EF948");
extern McInfoParam_x0011A820 MC_INFO_x0011A820 __asm__("D_00479040");
extern char MC_XFER_x0011A820[] __asm__("D_004794C0");
extern int MC_OUTBUF_x0011A820[] __asm__("D_0047A580");
extern int G_INFO2C_x0011A820[] __asm__("D_00478FE8");
extern int G_INFO30_x0011A820[] __asm__("D_00478FEC");
extern int G_INFO34_x0011A820[] __asm__("D_00478FF0");
extern int PollSema_x0011A820(int) __asm__("PollSema");
extern int SignalSema_x0011A820(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011A820(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern int sceSifWriteBackDCache_x0011A820(void *, int) __asm__("func_0010D770");
extern void RPC_INFO_END_x0011A820(void) __asm__("func_0011A7C8");
int func_0011A820_x0011A820(int arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0011A820");
/* sceMcGetInfo: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcGetInfo.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011A820_x0011A820(int arg0, int arg1, int arg2, int arg3, int arg4) {
    int rpc_result;

    if (MC_CLIENT_x0011A820.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011A820(MC_SEMA_x0011A820[0]) < 0) {
        return -0xC8;
    }
    MC_INFO_x0011A820.unk04 = arg0;
    MC_INFO_x0011A820.unk08 = arg1;
    MC_INFO_x0011A820.unk1C = MC_XFER_x0011A820;
    if (arg2 != 0) {
        MC_INFO_x0011A820.unk14 = 1;
    } else {
        MC_INFO_x0011A820.unk14 = 0;
    }
    if (arg3 != 0) {
        MC_INFO_x0011A820.unk10 = 1;
    } else {
        MC_INFO_x0011A820.unk10 = 0;
    }
    if (arg4 != 0) {
        MC_INFO_x0011A820.unk0C = 1;
    } else {
        MC_INFO_x0011A820.unk0C = 0;
    }
    G_INFO2C_x0011A820[0] = arg2;
    G_INFO30_x0011A820[0] = arg3;
    G_INFO34_x0011A820[0] = arg4;
    sceSifWriteBackDCache_x0011A820(MC_XFER_x0011A820, 0xC0);
    rpc_result = sceSifCallRpc_x0011A820(&MC_CLIENT_x0011A820, 1, 1, &MC_INFO_x0011A820, 0x30, MC_OUTBUF_x0011A820, 4,
                               (void *)RPC_INFO_END_x0011A820, MC_XFER_x0011A820);
    if (rpc_result != 0) {
        SignalSema_x0011A820(MC_SEMA_x0011A820[0]);
        return -0x5B;
    }
    MC_STATUS_x0011A820 = 1;
    return 0;
}
extern int D_00478FC0_x0011A9A0[] __asm__("D_00478FC0");
extern int D_00479040_x0011A9A0[] __asm__("D_00479040");
extern int D_0047A580_x0011A9A0[] __asm__("D_0047A580");
extern char D_0045DE98_x0011A9A0[] __asm__("D_0045DE98");
void func_00119F30_x0011A9A0(void *) __asm__("func_00119F30");
int sceSifCallRpc_x0011A9A0(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
int scePrintf_x0011A9A0(const char *, ...) __asm__("scePrintf");
int func_0011A9A0_x0011A9A0(void) __asm__("func_0011A9A0");
int func_0011A9A0_x0011A9A0(void)
{
    if (sceSifCallRpc_x0011A9A0(D_00478FC0_x0011A9A0, 0x35, 0, D_00479040_x0011A9A0, 0x30, D_0047A580_x0011A9A0, 4, func_00119F30_x0011A9A0, 0) != 0) {
        scePrintf_x0011A9A0(D_0045DE98_x0011A9A0);
        return -0x5B;
    }
    return D_0047A580_x0011A9A0[0];
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011AA10;
typedef struct {
    int port;
    int slot;
    int maxent;
    int unk0C;
    int unk10;
    char name[0x400];
} MemoryCardDirParam_x0011AA10;
extern MemoryCardRpcClient_x0011AA10 MC_CLIENT_x0011AA10 __asm__("D_00478FC0");
extern int MC_SEMA_x0011AA10[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011AA10 __asm__("D_003EF948");
extern MemoryCardDirParam_x0011AA10 MC_DIR_x0011AA10 __asm__("D_00479070");
extern int MC_OUTBUF_x0011AA10[] __asm__("D_0047A580");
extern int PollSema_x0011AA10(int) __asm__("PollSema");
extern int SignalSema_x0011AA10(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011AA10(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern int sceSifWriteBackDCache_x0011AA10(void *, int) __asm__("func_0010D770");
extern char *strncpy_x0011AA10(char *, const char *, unsigned int) __asm__("func_00128040");
extern void RPC_END_x0011AA10(void) __asm__("func_00119F30");
int func_0011AA10_x0011AA10(int port, int slot, char *path, int maxent, int arg4, int arg5) __asm__("func_0011AA10");
/* sceMcGetDir: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcGetDir.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011AA10_x0011AA10(int port, int slot, char *path, int maxent, int arg4, int arg5) {
    int rpc_result;

    if (MC_CLIENT_x0011AA10.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011AA10(MC_SEMA_x0011AA10[0]) < 0) {
        return -0xC8;
    }
    if (path == 0 || path[0] == 0) {
        SignalSema_x0011AA10(MC_SEMA_x0011AA10[0]);
        return -0xD2;
    }
    MC_DIR_x0011AA10.port = port;
    MC_DIR_x0011AA10.slot = slot;
    MC_DIR_x0011AA10.maxent = maxent;
    MC_DIR_x0011AA10.unk0C = arg4;
    MC_DIR_x0011AA10.unk10 = arg5;
    strncpy_x0011AA10(MC_DIR_x0011AA10.name, path, 0x3FF);
    MC_DIR_x0011AA10.name[0x3FF] = 0;
    if (arg4 >= 0) {
        sceSifWriteBackDCache_x0011AA10((void *)arg5, arg4 << 6);
    }
    rpc_result = sceSifCallRpc_x0011AA10(&MC_CLIENT_x0011AA10, 0xD, 1, &MC_DIR_x0011AA10, 0x414, MC_OUTBUF_x0011AA10, 4,
                               (void *)RPC_END_x0011AA10, 0);
    if (rpc_result != 0) {
        SignalSema_x0011AA10(MC_SEMA_x0011AA10[0]);
        return -0x5B;
    }
    MC_STATUS_x0011AA10 = 0xD;
    return 0;
}
int iSignalSema_x0011AB60(int sema) __asm__("iSignalSema");
typedef unsigned int size_t_x0011AB60;
void *memcpy_x0011AB60(void *, const void *, size_t_x0011AB60) __asm__("func_00125740");
size_t_x0011AB60 strlen_x0011AB60(const char *) __asm__("func_00127BA0");
extern int semaid_timerfunc_x0011AB60 __asm__("D_003EF950");
extern char currentDir_x0011AB60[4096] __asm__("D_00479580");
void func_0011AB60_x0011AB60(char *dir) __asm__("func_0011AB60");
/* mceStorePwd: from https://github.com/crashbashash/DW4_Decomp (src/sony/libmc/libmc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0011AB60_x0011AB60(char *dir)
{
    unsigned int length;

    if (dir) {
        if (strlen_x0011AB60((char *)((unsigned int)currentDir_x0011AB60 | 0x20000000)) < 1024) {
            length = strlen_x0011AB60((char *)((unsigned int)currentDir_x0011AB60 | 0x20000000));
        } else {
            length = 1023;
        }
        memcpy_x0011AB60(dir, (char *)((unsigned int)currentDir_x0011AB60 | 0x20000000), length);
        dir[length] = 0;
    }
    iSignalSema_x0011AB60(semaid_timerfunc_x0011AB60);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011ABF0);
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011AD30;
typedef struct {
    int reserved_00;
    int port;
    int slot;
} MemoryCardFormatRequest_x0011AD30;
extern MemoryCardRpcClient_x0011AD30 MC_CLIENT_x0011AD30 __asm__("D_00478FC0");
extern int MC_SEMA_x0011AD30[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011AD30 __asm__("D_003EF948");
extern MemoryCardFormatRequest_x0011AD30 MC_REQ_x0011AD30 __asm__("D_00479040");
extern int MC_OUTBUF_x0011AD30[] __asm__("D_0047A580");
extern int PollSema_x0011AD30(int) __asm__("PollSema");
extern int SignalSema_x0011AD30(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011AD30(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern void RPC_END_x0011AD30(void) __asm__("func_00119F30");
int func_0011AD30_x0011AD30(int port, int slot) __asm__("func_0011AD30");
/* sceMcFormat: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcFormat.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011AD30_x0011AD30(int port, int slot) {
    int rpc_result;

    if (MC_CLIENT_x0011AD30.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011AD30(MC_SEMA_x0011AD30[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011AD30.port = port;
    MC_REQ_x0011AD30.slot = slot;
    rpc_result = sceSifCallRpc_x0011AD30(&MC_CLIENT_x0011AD30, 0x10, 1, &MC_REQ_x0011AD30, 0x30, MC_OUTBUF_x0011AD30, 4,
                               (void *)RPC_END_x0011AD30, 0);
    if (rpc_result != 0) {
        SignalSema_x0011AD30(MC_SEMA_x0011AD30[0]);
        return -0x5B;
    }
    MC_STATUS_x0011AD30 = 0x10;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011AE00;
typedef struct {
    int port;
    int slot;
    int flags;
    int maxent;
    int unk10;
    char name[0x400];
} MemoryCardNameParam_x0011AE00;
extern MemoryCardRpcClient_x0011AE00 MC_CLIENT_x0011AE00 __asm__("D_00478FC0");
extern int MC_SEMA_x0011AE00[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011AE00 __asm__("D_003EF948");
extern unsigned char MC_NAMEBUF_x0011AE00[] __asm__("D_00479084");
extern int MC_OUTBUF_x0011AE00[] __asm__("D_0047A580");
extern int PollSema_x0011AE00(int) __asm__("PollSema");
extern int SignalSema_x0011AE00(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011AE00(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern char *strncpy_x0011AE00(char *, const char *, unsigned int) __asm__("func_00128040");
extern void RPC_END_x0011AE00(void) __asm__("func_00119F30");
int func_0011AE00_x0011AE00(int port, int slot, char *name) __asm__("func_0011AE00");
/* sceMcDelete: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcDelete.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011AE00_x0011AE00(int port, int slot, char *name) {
    MemoryCardNameParam_x0011AE00 *request;
    int rpc_result;

    if (MC_CLIENT_x0011AE00.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011AE00(MC_SEMA_x0011AE00[0]) < 0) {
        return -0xC8;
    }
    if (name == 0 || name[0] == 0) {
        SignalSema_x0011AE00(MC_SEMA_x0011AE00[0]);
        return -0xD2;
    }
    strncpy_x0011AE00((char *)MC_NAMEBUF_x0011AE00, name, 0x3FF);
    request = (MemoryCardNameParam_x0011AE00 *)(MC_NAMEBUF_x0011AE00 - 0x14);
    request->port = port;
    request->slot = slot;
    request->name[0x3FF] = 0;
    request->flags = 0;
    rpc_result = sceSifCallRpc_x0011AE00(&MC_CLIENT_x0011AE00, 0xF, 1, request, 0x414, MC_OUTBUF_x0011AE00, 4,
                               (void *)RPC_END_x0011AE00, 0);
    if (rpc_result != 0) {
        SignalSema_x0011AE00(MC_SEMA_x0011AE00[0]);
        return -0x5B;
    }
    MC_STATUS_x0011AE00 = 0xF;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011AF20;
extern MemoryCardRpcClient_x0011AF20 MC_CLIENT_x0011AF20 __asm__("D_00478FC0");
extern int MC_SEMA_x0011AF20[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011AF20 __asm__("D_003EF948");
extern int MC_REQ_x0011AF20[] __asm__("D_00479040");
extern int MC_OUTBUF_x0011AF20[] __asm__("D_0047A580");
extern int PollSema_x0011AF20(int) __asm__("PollSema");
extern int SignalSema_x0011AF20(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011AF20(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern void RPC_END_x0011AF20(void) __asm__("func_00119F30");
int func_0011AF20_x0011AF20(int file_descriptor) __asm__("func_0011AF20");
/* sceMcFlush: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcFlush.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011AF20_x0011AF20(int file_descriptor) {
    int rpc_result;

    if (MC_CLIENT_x0011AF20.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011AF20(MC_SEMA_x0011AF20[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011AF20[0] = file_descriptor;
    rpc_result = sceSifCallRpc_x0011AF20(&MC_CLIENT_x0011AF20, 0x0A, 1, MC_REQ_x0011AF20, 0x30, MC_OUTBUF_x0011AF20, 4,
                               (void *)RPC_END_x0011AF20, 0);
    if (rpc_result != 0) {
        SignalSema_x0011AF20(MC_SEMA_x0011AF20[0]);
        return -0x5B;
    }
    MC_STATUS_x0011AF20 = 0x0A;
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmc", func_0011AFE0);
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011B1B0;
typedef struct {
    int port;
    int slot;
    int flags;
    int unk0C;
    void *unk10;
    char name[0x400];
} MemoryCardRenameParam_x0011B1B0;
extern MemoryCardRpcClient_x0011B1B0 MC_CLIENT_x0011B1B0 __asm__("D_00478FC0");
extern int MC_SEMA_x0011B1B0[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011B1B0 __asm__("D_003EF948");
extern MemoryCardRenameParam_x0011B1B0 MC_DIR_x0011B1B0 __asm__("D_00479070");
extern char MC_RENAME_NAME_x0011B1B0[] __asm__("D_00479020");
extern int MC_OUTBUF_x0011B1B0[] __asm__("D_0047A580");
extern int PollSema_x0011B1B0(int) __asm__("PollSema");
extern int SignalSema_x0011B1B0(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011B1B0(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern char *strncpy_x0011B1B0(char *, const char *, unsigned int) __asm__("func_00128040");
extern int FlushCache_x0011B1B0(int) __asm__("FlushCache");
extern void RPC_END_x0011B1B0(void) __asm__("func_00119F30");
int func_0011B1B0_x0011B1B0(int port, int slot, char *name1, char *name2) __asm__("func_0011B1B0");
/* sceMcRename: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcRename.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011B1B0_x0011B1B0(int port, int slot, char *name1, char *name2) {
    MemoryCardRenameParam_x0011B1B0 *request;
    int rpc_result;

    if (MC_CLIENT_x0011B1B0.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011B1B0(MC_SEMA_x0011B1B0[0]) < 0) {
        return -0xC8;
    }
    if (name1 == 0 || name1[0] == 0 || name2 == 0) {
        SignalSema_x0011B1B0(MC_SEMA_x0011B1B0[0]);
        return -0xD2;
    }
    request = &MC_DIR_x0011B1B0;
    request->port = port;
    request->slot = slot;
    request->flags = 0x10;
    strncpy_x0011B1B0(request->name, name1, 0x3FF);
    request->name[0x3FF] = 0;
    strncpy_x0011B1B0(MC_RENAME_NAME_x0011B1B0, name2, 0x20);
    request->unk10 = MC_RENAME_NAME_x0011B1B0 - 0x20;
    FlushCache_x0011B1B0(0);
    rpc_result = sceSifCallRpc_x0011B1B0(&MC_CLIENT_x0011B1B0, 0xE, 1, request, 0x414, MC_OUTBUF_x0011B1B0, 4,
                               (void *)RPC_END_x0011B1B0, 0);
    if (rpc_result != 0) {
        SignalSema_x0011B1B0(MC_SEMA_x0011B1B0[0]);
        return -0x5B;
    }
    MC_STATUS_x0011B1B0 = 0x13;
    return 0;
}
typedef struct {
    unsigned char reserved_00[0x24];
    int is_initialized;
} MemoryCardRpcClient_x0011B308;
typedef struct {
    int reserved_00;
    int port;
    int slot;
} MemoryCardUnformatRequest_x0011B308;
extern MemoryCardRpcClient_x0011B308 MC_CLIENT_x0011B308 __asm__("D_00478FC0");
extern int MC_SEMA_x0011B308[] __asm__("D_003EF94C");
extern int MC_STATUS_x0011B308 __asm__("D_003EF948");
extern MemoryCardUnformatRequest_x0011B308 MC_REQ_x0011B308 __asm__("D_00479040");
extern int MC_OUTBUF_x0011B308[] __asm__("D_0047A580");
extern int PollSema_x0011B308(int) __asm__("PollSema");
extern int SignalSema_x0011B308(int) __asm__("SignalSema");
extern int sceSifCallRpc_x0011B308(void *, int, int, void *, int, void *, int, void *, void *) __asm__("sceSifCallRpc");
extern void RPC_END_x0011B308(void) __asm__("func_00119F30");
int func_0011B308_x0011B308(int port, int slot) __asm__("func_0011B308");
/* sceMcUnformat: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMcUnformat.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011B308_x0011B308(int port, int slot) {
    int rpc_result;

    if (MC_CLIENT_x0011B308.is_initialized == 0) {
        return -0x64;
    }
    if (PollSema_x0011B308(MC_SEMA_x0011B308[0]) < 0) {
        return -0xC8;
    }
    MC_REQ_x0011B308.port = port;
    MC_REQ_x0011B308.slot = slot;
    rpc_result = sceSifCallRpc_x0011B308(&MC_CLIENT_x0011B308, 0x11, 1, &MC_REQ_x0011B308, 0x30, MC_OUTBUF_x0011B308, 4,
                               (void *)RPC_END_x0011B308, 0);
    if (rpc_result != 0) {
        SignalSema_x0011B308(MC_SEMA_x0011B308[0]);
        return -0x5B;
    }
    MC_STATUS_x0011B308 = 0x11;
    return 0;
}
typedef struct { char p[0x24]; int server; } RpcCD_x0011B3D8;
typedef struct { int port; int slot; int flags; int size; int offset; char name[0x400]; } McSend_x0011B3D8;
extern RpcCD_x0011B3D8 D_00450880_x0011B3D8 __asm__("D_00478FC0");
extern McSend_x0011B3D8 D_00450930_x0011B3D8 __asm__("D_00479070");
extern int D_00451E40_x0011B3D8[] __asm__("D_0047A580");
extern int D_002C8354_x0011B3D8 __asm__("D_003EF94C");
extern int D_002C8350_x0011B3D8 __asm__("D_003EF948");
void func_00243ED8_x0011B3D8(void *) __asm__("func_00119F30");
int func_00234A70_x0011B3D8(int) __asm__("PollSema");
int func_00234A40_x0011B3D8(int) __asm__("SignalSema");
char *func_00233638_x0011B3D8(char *, const char *, unsigned int) __asm__("func_00128040");
int func_00237288_x0011B3D8(void *cd, int fno, unsigned int mode, void *send, int ssize, void *recv, int rsize, void *end, void *earg) __asm__("sceSifCallRpc");
int func_0011B3D8_x0011B3D8(int port, int slot, const char *path) __asm__("func_0011B3D8");
/* sceMcGetEntSpace: from https://github.com/Komasia/sly2-decomp (src/lib/sceMcGetEntSpace.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0011B3D8_x0011B3D8(int port, int slot, const char *path)
{
    if (D_00450880_x0011B3D8.server == 0)
        return -100;
    if (func_00234A70_x0011B3D8(D_002C8354_x0011B3D8) < 0)
        return -200;
    if (path == 0 || path[0] == 0) {
        func_00234A40_x0011B3D8(D_002C8354_x0011B3D8);
        return -210;
    }
    D_00450930_x0011B3D8.port = port;
    D_00450930_x0011B3D8.slot = slot;
    func_00233638_x0011B3D8(D_00450930_x0011B3D8.name, path, 0x3FF);
    D_00450930_x0011B3D8.name[0x3FF] = 0;
    if (func_00237288_x0011B3D8(&D_00450880_x0011B3D8, 0x12, 1, &D_00450930_x0011B3D8, 0x414, D_00451E40_x0011B3D8, 4, func_00243ED8_x0011B3D8, 0) != 0) {
        func_00234A40_x0011B3D8(D_002C8354_x0011B3D8);
        return -91;
    }
    D_002C8350_x0011B3D8 = 0x12;
    return 0;
}
