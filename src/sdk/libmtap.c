/* libmtap: Sony's multitap library (PS2 SDK 3.0), the EE side of the IOP module mtapman.irx. Every call is an RPC to
 * mtapman; the module's status comes back in a 0x80-byte buffer that mtapman writes by DMA (D_00492B80).
 * Compiled with ee-gcc 2.9-ee-991111-01 -O2 -G0 (docs/plan.md, "The libraries' compilers").
 * Its data stays in the assembly data files for now (docs/decomp_guide.md): the strings and the static buffers are
 * declared extern under their D_ names. */
#include "common.h"

typedef struct {
    u8 pad[0x24];
    void *serve; /* 0x24: set once the server is bound */
    u8 pad2[4];
} sceSifClientData;

/* mtapman's status block (0x80 bytes, DMA-aligned): a valid flag, then two words per port at 0x18 and 0x28. */
typedef struct {
    u32 valid;
    u32 unk4[5];
    u32 a[4];   /* 0x18 */
    u32 b[4];   /* 0x28 */
    u32 unk38[18];
} __attribute__((aligned(64))) MtapBuf;

extern sceSifClientData D_00492AC0; /* the RPC client of mtapman */
extern u32 D_00492B00[32];          /* the RPC send / receive buffer */
extern MtapBuf D_00492B80;          /* status mtapman writes by DMA */

extern char D_00467F90[]; /* "libmtap: bind failed\n" */
extern char D_00467FA8[]; /* "libmtap: Module version mismatch " */
extern char D_00467FD0[]; /* "[libmtap.a = %d.%d, mtapman.irx = %d.%d]\n" */
extern char D_00468000[]; /* "sceMtapPortOpen: rpc error\n" */
extern char D_00468020[]; /* "sceMtapPortClose: rpc error\n" */
extern char D_00468040[]; /* "sceMtapGetConnection: rpc error\n" */
extern char D_00468068[]; /* "sceMtapChangeThreadPriority: rpc error\n" */
extern char D_00468090[]; /* "sceMtapGetModVersion: rpc error\n" */

int sceSifInitRpc(int mode);
int sceSifBindRpc(sceSifClientData *cd, u32 request, u32 mode);
int sceSifCallRpc(sceSifClientData *cd, u32 fno, u32 mode, void *send, int ssize, void *recv, int rsize,
                  void (*end)(void *), void *end_param);
void *memset(void *p, int c, unsigned int n);
int DI(void);
int EI(void);
void func_0010AB58(void *start, void *end);
int sceMtapGetModVersion(void);
int scePrintf(const char *fmt, ...);

/* The library's debug print: empty in the release build. */
void func_001A19D0(const char *fmt, ...) {
}

/* Registers the status buffer with mtapman (RPC 6); returns the answer's first word, 0 on an RPC error. */
int func_001A19F8(void *buf) {
    D_00492B00[1] = (u32)buf;
    if (sceSifCallRpc(&D_00492AC0, 6, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0)
        return 0;
    return D_00492B00[0];
}

int sceMtapInit(void) {
    int ver;
    int i;
    sceSifInitRpc(0);
    while (1) {
        if (sceSifBindRpc(&D_00492AC0, 0x80000900, 0) < 0) {
            func_001A19D0(D_00467F90);
            return 0;
        }
        if (D_00492AC0.serve != 0)
            break;
        i = 0x10000;
        while (i--)
            ;
    }
    ver = sceMtapGetModVersion();
    if ((ver >> 4) != 0x31) {
        scePrintf(D_00467FA8);
        scePrintf(D_00467FD0, 3, 0x10, ver >> 8, ver & 0xFF);
        return 0;
    }
    memset(&D_00492B80, 0, 0x80);
    func_001A19F8(&D_00492B80);
    return 1;
}

/* Unregisters the status buffer. */
int func_001A1B58(void) {
    return func_001A19F8(0);
}

int sceMtapPortOpen(int port) {
    D_00492B00[0] = port;
    if (sceSifCallRpc(&D_00492AC0, 1, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468000);
        return 0;
    }
    return D_00492B00[1];
}

int sceMtapPortClose(int port) {
    D_00492B00[0] = port;
    if (sceSifCallRpc(&D_00492AC0, 2, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468020);
        return 0;
    }
    return D_00492B00[1];
}

/* Copies the status buffer (interrupts off) and returns the two words of a port; 0 if mtapman has not written it. */
int func_001A1C58(int port, int *a, int *b) {
    MtapBuf st;
    func_0010AB58(&D_00492B80, (u8 *)&D_00492B80 + 0x80);
    DI();
    st = D_00492B80;
    EI();
    if (st.valid == 0)
        return 0;
    if (a != 0)
        *a = st.a[port];
    if (b != 0)
        *b = st.b[port];
    return 1;
}

int sceMtapGetConnection(int port) {
    D_00492B00[0] = port;
    if (sceSifCallRpc(&D_00492AC0, 3, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468040);
        return 0;
    }
    return D_00492B00[1];
}

int sceMtapChangeThreadPriority(int hi, int lo) {
    D_00492B00[0] = hi;
    D_00492B00[1] = lo;
    if (sceSifCallRpc(&D_00492AC0, 4, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468068);
        return 0;
    }
    return D_00492B00[2];
}

int sceMtapGetModVersion(void) {
    if (sceSifCallRpc(&D_00492AC0, 5, 0, D_00492B00, 0x80, D_00492B00, 0x80, 0, 0) < 0) {
        func_001A19D0(D_00468090);
        return 0;
    }
    return D_00492B00[0];
}

/* The Metrowerks object linked next starts on 16 bytes; the asm objects of the split are only 4-aligned, so the
 * padding nop is kept here. */
__asm__(".section .text\n\t.balign 16\n");
