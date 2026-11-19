/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libkernl/filestub.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc,src/sce/libkernl */
#include "common.h"

/* libkernl.a(filestub.o) */

#include <eekernel.h>

#include <sifrpc.h>

#include <string.h>

#include <libkernl_internal.h>

#include <sifcmd.h>

#define fs_inited D_003EC6BC
#define fs_sema D_003EC6C4
#define iob_sema D_003EC6C8
#define fsIobTab D_00474940
#define fsVersion D_00474B68
#define fs_stamp D_003EC6D0
extern int fs_inited;

 /* derived name */

extern int fs_sema;

 /* derived name */

extern int iob_sema;

 /* derived name */

/* The requests the FS calls send in fsSendBuf.  Each starts with the
   semaphore the caller waits on (negated for a no-wait request), the word the
   reply's result goes to and the reply mode; the rest is the call's
   arguments, with the descriptor's index in the iob table where the call
   names a descriptor. */
typedef struct { /* field names derived */
    int sema;
    int *result;
    int mode;
    int fd;
    void *buf;
    int nbyte;
    int pad6;
    int iob;
} FsReadReq;

 /* derived name */

/* the write request carries the unaligned head of the caller's buffer, the
   rest goes by DMA from its 16-byte aligned address */
typedef struct { /* field names derived */
    int sema;
    int *result;
    int mode;
    int fd;
    void *buf;
    int nbyte;
    int headLen;
    char head[16];
    int iob;
} FsWriteReq;

 /* derived name */

typedef struct { /* field names derived */
    int sema;
    int *result;
    int mode;
    void *drv;
} FsAddDrvReq;

 /* derived name */

typedef struct { /* field names derived */
    int sema;
    int *result;
    int mode;
    void *stat;
    unsigned char name[0x400];
} FsGetstatReq;

 /* derived name */

typedef struct { /* field names derived */
    int sema;
    int *result;
    int mode;
    unsigned int len;
    void *buf;
    char name[0x400];
} FsReadlinkReq;

 /* derived name */

extern char fsIobTab[0x200];

 /* derived name */

extern char fsVersion[4];

 /* derived name */

void _sceFsIobSemaMK(void);

/* The four-byte filesystem version stamp the IOP hands back
   in the RPC receive buffer; _fs_version() memcmps it against the two
   built-in stamps. */
typedef struct { /* field names derived */
    char v[4];
} SceFsVersion;

 /* derived name */

/* the FS reply packet the IOP leaves in fsRcvPkt; the handler reads it
   through the uncached accelerated window, so every record copy below is a
   byte-array assignment and gcc expands each one inline with the unaligned
   pairs the window forces. */
/* the readdir reply record and the 0x40-byte stat record */
typedef struct { /* field names derived */
    char v[0x144];
} SceFsDirent;

 /* derived name */

typedef struct { /* field names derived */
    char v[0x40];
} SceFsStatRec;

 /* derived name */

/* The SIF command handler for the FS reply.  Each reply word is its own
   local (the header's request id, command, buffer and size, then a
   command's destination and length), filled by a four-byte record copy
   through the uncached window. */
void _sceFs_Rcv_Intr(void);

void _sceFsSemInit(void);

void _sceFsSigSema(void);

int sceFsInit(void);

/* the stamp _fs_version accepts besides the library's own.  Defined here,
   after _sceFs_Rcv_Intr, its four dots follow that function's jump table in
   the member's .rodata, and the pointer is still the member's last .data
   word. */
extern char *fs_stamp;

/* The 16-byte file-descriptor record new_iob() hands out of
   the fsIobTab table; field 0 is the driver handle _sceCallCode returns and
   field 4 the in-use flag new_iob() sets to 0x10000000. */
typedef struct { /* field names derived */
    int fd;
    int inuse;
    int pad8[2];
} SceIob;

 /* derived name */

/* Varargs: the mode is the first anonymous argument, read after the
   new_iob() check.  One status local, rc, carries the RPC result, the
   uncached reply word and the returned index, the way sceLseek keeps its
   own.  The descriptor is stored before the in-use flag is or-ed. */
int sceOpen(unsigned char *name, int flags, ...);

int sceClose(unsigned int fd);

/* whether a descriptor was opened with the no-wait flag (0x8000, SCE_NOWAIT
   in the public SDK naming), read from the open-mode half of the
   descriptor's in-use word.  The name is ours. */
static inline int isNowait(unsigned short mode)
{
    return mode & 0x8000;
}

int sceLseek(unsigned int fd, int offset, int whence);

int sceRead(int fd, void *buf, int nbyte);

int sceWrite(int fd, void *buf, int nbyte);

/* the ioctl argument pointer the request-0x1 arm reads back */
/* the 8-byte status word the IOP leaves for requests 0x2 and 0x3 */

typedef struct { /* field names derived */
    char b[1024];
} SceIoctlArg;

 /* derived name */

int sceIoctl(unsigned int fd, int request, void *argp);

int sceIoctl2(unsigned int fd, int request, void *argp, unsigned int arglen, void *bufp,
              unsigned int buflen);

int _sceCallCode(void *name, int code);

int sceMkdir(char *name, int mode);

int sceFormat(unsigned char *dev, unsigned char *blockdev, unsigned char *arg, int arglen);

int sceAddDrv(void *drv);

int sceDopen(void *name);

int sceDclose(unsigned int fd);

int sceDread(unsigned int fd, int dbuf);

int sceGetstat(unsigned char *name, void *stat);

/* the 0x40-byte stat record the request carries; the copy below is a record
   assignment, which gcc expands inline, since memcpy stays a call at
   -fno-builtin */
typedef struct { /* field names derived */
    char v[0x40];
} SceFsStat;

 /* derived name */

int sceChstat(unsigned char *name, void *stat, int mask);

int sceRename(unsigned char *oldname, unsigned char *newname);

int sceSync(unsigned char *name, int flag);

int sceMount(unsigned char *fsname, unsigned char *devname, int flag, unsigned char *arg,
             int arglen);

long long sceLseek64(int fd, long long offset, int whence);

int sceDevctl(unsigned char *name, int cmd, unsigned char *arg, unsigned int arglen, void *bufp,
              unsigned int buflen);

int sceSymlink(unsigned char *existing, unsigned char *newpath);

int sceReadlink(unsigned char *name, void *buf, unsigned int len);




void *new_iob(void)
{
    char *p;
    char *end;
    _sceFsIobSemaMK();
    WaitSema(iob_sema);
    p = fsIobTab;
    end = p + 0x200;
    while (p < end) {
        if (*(int *)(p + 4) == 0) {
            *(int *)(p + 4) = 0x10000000;
            SignalSema(iob_sema);
            return p;
        }
        p += 0x10;
    }
    SignalSema(iob_sema);
    return 0;
}
int func_00237288_x0010EA50(void *cd, int rpc, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *earg) __asm__("sceSifCallRpc");
int func_00235518_x0010EA50(int) __asm__("func_0010B2D8");
int func_0010EA50_x0010EA50(void *cd, int rpc, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *earg, int nowait) __asm__("func_0010EA50");
/* sceFsSifCallRpc: from https://github.com/Komasia/sly2-decomp (src/lib/sceFsSifCallRpc.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010EA50_x0010EA50(void *cd, int rpc, int mode, void *send, int ssize, void *recv, int rsize, void *end, void *earg, int nowait)
{
    int r;
    unsigned int delay = 1;
    int i = 0;

    do {
        r = func_00237288_x0010EA50(cd, rpc, mode, send, ssize, recv, rsize, end, earg) < 0;
        if (!r || nowait)
            break;
        func_00235518_x0010EA50(delay * 1000);
        if ((int)delay < 0x7F)
            delay *= 2;
        i++;
    } while (i < 101);
    return r;
}


void *get_iob(unsigned int i)
{
    char *p;
    _sceFsIobSemaMK();
    WaitSema(iob_sema);
    if (i < 0x20) {
        goto ok;
    }
    SignalSema(iob_sema);
    return 0;
ok:
    p = &fsIobTab[i * 16];
    SignalSema(iob_sema);
    return p;
}
INCLUDE_PAD(4);
typedef unsigned int size_t_x0010EBB0;
typedef struct { char v[4]; } SceFsVersion_x0010EBB0;
typedef struct { char v[0x144]; } SceFsDirent_x0010EBB0;
typedef struct { char v[0x40]; } SceFsStatRec_x0010EBB0;
extern void *memcpy_x0010EBB0(void *, const void *, size_t_x0010EBB0) __asm__("func_00125740");
extern int iSignalSema_x0010EBB0(int) __asm__("iSignalSema");
extern int D_00486240_x0010EBB0 __asm__("D_003EC6C0");
extern int D_00486238_x0010EBB0 __asm__("D_003EC6B8");
extern char D_004E5480_x0010EBB0[] __asm__("D_004740C0");
extern volatile int D_004861B8_x0010EBB0[32] __asm__("D_003EC638");
void func_0010EBB0_x0010EBB0(int *arg) __asm__("func_0010EBB0");
/* func_00110DA8: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_110DA8.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010EBB0_x0010EBB0(int *arg)
{
    int id;
    int cmd;
    int buf;
    int size;
    int addr;
    int len;
    int *q;
    int i;
    int k;
    int idx;
    char *pkt;

    D_00486238_x0010EBB0 = D_00486240_x0010EBB0 ? arg[3] : 0;
    pkt = (char *)((int)(D_004E5480_x0010EBB0 + D_00486238_x0010EBB0 * 0x440) | 0x20000000);
    *(SceFsVersion_x0010EBB0 *)&id = *(SceFsVersion_x0010EBB0 *)(pkt + 0x0);
    *(SceFsVersion_x0010EBB0 *)&cmd = *(SceFsVersion_x0010EBB0 *)(pkt + 0x4);
    *(SceFsVersion_x0010EBB0 *)&buf = *(SceFsVersion_x0010EBB0 *)(pkt + 0x8);
    *(SceFsVersion_x0010EBB0 *)&size = *(SceFsVersion_x0010EBB0 *)(pkt + 0xC);
    if (id >= 0)
        memcpy_x0010EBB0((void *)buf, pkt + 0x10, size);
    switch (cmd) {
    case 2:
        q = (int *)(pkt + 0x14);
        if (q[0] > 0) {
            register char *dst asm("$8") = (char *)q[2];
            char *udst = (char *)((int)dst | 0x20000000);

            for (i = 0; i < q[0]; i++) {
                char *src = (char *)q + 0x10;

                unsigned char c = src[i];

                udst[i] = c;
                dst[i] = c;
            }
        }
        if (q[1] > 0) {
            register char *dst asm("$8") = (char *)q[3];
            char *udst = (char *)((int)dst | 0x20000000);

            for (i = 0; i < q[1]; i++) {
                char *src = (char *)q + 0x50;

                unsigned char c = src[i];

                udst[i] = c;
                dst[i] = c;
            }
        }
        break;
    case 11:
        if (*(int *)buf > 0) {
            *(SceFsVersion_x0010EBB0 *)&addr = *(SceFsVersion_x0010EBB0 *)(pkt + 0x14);
            *(SceFsDirent_x0010EBB0 *)addr = *(SceFsDirent_x0010EBB0 *)(pkt + 0x18);
        }
        break;
    case 12:
        *(SceFsVersion_x0010EBB0 *)&addr = *(SceFsVersion_x0010EBB0 *)(pkt + 0x14);
        *(SceFsStatRec_x0010EBB0 *)addr = *(SceFsStatRec_x0010EBB0 *)(pkt + 0x18);
        break;
    case 23:
    case 25:
    case 26:
        *(SceFsVersion_x0010EBB0 *)&addr = *(SceFsVersion_x0010EBB0 *)(pkt + 0x14);
        *(SceFsVersion_x0010EBB0 *)&len = *(SceFsVersion_x0010EBB0 *)(pkt + 0x18);
        k = len;
        if (1024 < (unsigned int)k) {
            len = 1024;
            k = 1024;
        }
        memcpy_x0010EBB0((void *)addr, pkt + 0x1C, k);
        break;
    }
    if (id < 0) {
        id = -id;
        for (i = 0; i < 32; i++) {
            if (D_004861B8_x0010EBB0[i] == id) {
                D_004861B8_x0010EBB0[i] = -1;
                break;
            }
        }
    } else {
        iSignalSema_x0010EBB0(id);
    }
}
__asm__("# rebind func_0010EBB0 0x0010EBB0");
struct SemaParam_x0010EF68 { int currentCount; int maxCount; int initCount; int numWaitThreads; unsigned int attr; unsigned int option; };
extern int D_002C4A84_x0010EF68 __asm__("D_003EC6C4");
extern char D_002AAA98_x0010EF68[] __asm__("D_0045D6E8");
int func_00234A20_x0010EF68(struct SemaParam_x0010EF68 *) __asm__("CreateSema");
void _sceFsSemInit_x0010EF68(void) __asm__("_sceFsSemInit");
/* _sceFsSemInit_x0010EF68: from https://github.com/Komasia/sly2-decomp (src/lib/_sceFsSemInit_x0010EF68.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void _sceFsSemInit_x0010EF68(void)
{
    struct SemaParam_x0010EF68 p;
    if (D_002C4A84_x0010EF68 == -1) {
        p.option = (unsigned int)D_002AAA98_x0010EF68;
        p.initCount = 1;
        p.maxCount = 1;
        D_002C4A84_x0010EF68 = func_00234A20_x0010EF68(&p);
    }
}


int _sceFsWaitS(int arg)
{
    _sceFsSemInit();
    WaitSema(fs_sema);
    return 0;
}
INCLUDE_PAD(4);
s32 SignalSema_x0010EFF0(s32) __asm__("SignalSema");
extern s32 D_003EC6C4_x0010EFF0 __asm__("D_003EC6C4");
void func_0010EFF0_x0010EFF0(void) __asm__("func_0010EFF0");
void func_0010EFF0_x0010EFF0(void) {
    SignalSema_x0010EFF0(D_003EC6C4_x0010EFF0);
}
int DIntr_x0010F000(void) __asm__("DI");
int EIntr_x0010F000(void) __asm__("EI");
typedef void (*scePowerOffFunc_x0010F000)(void *data);
typedef struct {
    scePowerOffFunc_x0010F000 func;
    void *data;
} FsPowerOffData_x0010F000;
int sceFsInit_x0010F000(void) __asm__("func_0010F0E8");
extern int _fs_init_x0010F000 __asm__("D_003EC6BC");
static FsPowerOffData_x0010F000 _sif_FsPoff_Data_x0010F000;
extern void *sceCbPoff_Gp_x0010F000 __asm__("D_00474C00") __attribute__((aligned(64)));
int _sceFsWaitS_x0010F000(int cmd) __asm__("func_0010EFC0");
void _sceFsSigSema_x0010F000(void) __asm__("func_0010EFF0");
int sceFsInit_x0010F000(void) __asm__("func_0010F0E8");
int _sceFsWaitS_x0010F000(int cmd) __attribute__((weak, section(".b3stub")));
int _sceFsWaitS_x0010F000(int cmd) {}
void _sceFsSigSema_x0010F000(void) __attribute__((weak, section(".b3stub")));
void _sceFsSigSema_x0010F000(void) {}
scePowerOffFunc_x0010F000 func_0010F000_x0010F000(scePowerOffFunc_x0010F000 func, void *data) __asm__("func_0010F000");
/* scePowerOffHandler: from https://github.com/crashbashash/DW4_Decomp (src/sony/libkernl/filestub.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.9-991111-01 -O2 -G0 */
scePowerOffFunc_x0010F000 func_0010F000_x0010F000(scePowerOffFunc_x0010F000 func, void *data)
{
    FsPowerOffData_x0010F000 *poff = &_sif_FsPoff_Data_x0010F000;
    scePowerOffFunc_x0010F000 old;
    int enabled;
    _sceFsWaitS_x0010F000(27);
    if (_fs_init_x0010F000 == 0) {
        sceFsInit_x0010F000();
    }
    enabled = DIntr_x0010F000();
    old = _sif_FsPoff_Data_x0010F000.func;
    poff->data = data;
    _sif_FsPoff_Data_x0010F000.func = func;
    __asm__("sw $28,%0" : : "m"(sceCbPoff_Gp_x0010F000));
    if (enabled) {
        EIntr_x0010F000();
    }
    _sceFsSigSema_x0010F000();
    return old;
}
__asm__("# rebind func_0010F000 0x0010F000");
extern volatile int D_004E5FC0_x0010F0A0 __asm__("D_00474C00");
typedef struct { void (*func)(void *); void *arg; } Cb11298_x0010F0A0;
void func_0010F0A0_x0010F0A0(int a, Cb11298_x0010F0A0 *cb) __asm__("func_0010F0A0");
/* _sceFs_Poff_Intr: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_1111E0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
void func_0010F0A0_x0010F0A0(int a, Cb11298_x0010F0A0 *cb)
{
    void (*f)(void *) = cb->func;
    if (f != 0) {
        void *save;
         
        __asm__ volatile("move %0, $gp\n\tlw $gp, %1" : "=&r"(save) : "m"((*(void **)&D_004E5FC0_x0010F0A0)));
        f(cb->arg);
        __asm__ volatile("move $gp, %0" : : "r"(save));
    }
    __asm__ volatile("sync");
    __asm__ volatile("ei");
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F0E8);
 /* derived name */

int _fs_version(void)
{
    char *s3 = __ps2_klibinfo__ + 12;
    char *s1 = fsVersion;
    int s2 = 0;
    int v0;
    v0 = memcmp(s1, s3, 4);
    if (v0 == 0)
        goto done;
    v0 = memcmp(s1, fs_stamp, 4);
    if (v0 == 0)
        goto done;
    v0 = memcmp(s3, fs_stamp, 4);
    s2 = (unsigned)0 < (unsigned)v0;
done:
    return s2;
}


int sceFsReset(void)
{
    fs_inited = 0;
    memset(fsVersion, 0, 4);
    return 0;
}
INCLUDE_PAD(4);
extern unsigned int D_00473440_x0010F3B8[] __asm__("D_00473440");
extern int D_003EC6BC_x0010F3B8 __asm__("D_003EC6BC");
extern int D_00474B40_x0010F3B8[] __asm__("D_00474B40");
extern int D_00474080_x0010F3B8[] __asm__("D_00474080");
int _sceFsWaitS_x0010F3B8(int) __asm__("_sceFsWaitS");
void func_0010F0E8_x0010F3B8(void) __asm__("func_0010F0E8");
int _fs_version_x0010F3B8(void) __asm__("_fs_version");
int func_0010EFF0_x0010F3B8(void) __asm__("func_0010EFF0");
int func_0010E948_x0010F3B8(void) __asm__("func_0010E948");
int func_0010EA50_x0010F3B8(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_0010F3B8_x0010F3B8(unsigned int a, unsigned int b) __asm__("func_0010F3B8");
int func_0010F3B8_x0010F3B8(unsigned int a, unsigned int b)
{
    int r;

    _sceFsWaitS_x0010F3B8(0xFE);
    if (D_003EC6BC_x0010F3B8 == 0) {
        func_0010F0E8_x0010F3B8();
    }
    if (_fs_version_x0010F3B8()) {
        func_0010EFF0_x0010F3B8();
        return 0xFFFEFFFC;
    }
    if (func_0010E948_x0010F3B8()) {
        func_0010EFF0_x0010F3B8();
        return -16;
    }
    if ((a & 0x3FFF) || a == 0 || a > 0xFFFFF || b == 0 || b > 0x20) {
        func_0010EFF0_x0010F3B8();
        return -22;
    }
    D_00473440_x0010F3B8[0] = a;
    D_00473440_x0010F3B8[1] = b;
    if (func_0010EA50_x0010F3B8(D_00474B40_x0010F3B8, 0xFE, 0, D_00473440_x0010F3B8, 8, D_00474080_x0010F3B8, 4, 0, 0, 0) < 0) {
        func_0010EFF0_x0010F3B8();
        return -11;
    }
    r = *(int *)((unsigned)D_00474080_x0010F3B8 | 0x20000000);
    func_0010EFF0_x0010F3B8();
    return r;
}
extern int D_00473440_x0010F4F8 __asm__("D_00473440");
extern int D_003EC6BC_x0010F4F8 __asm__("D_003EC6BC");
extern int D_00474B40_x0010F4F8[] __asm__("D_00474B40");
extern int D_00474080_x0010F4F8[] __asm__("D_00474080");
int _sceFsWaitS_x0010F4F8(int) __asm__("_sceFsWaitS");
void func_0010F0E8_x0010F4F8(void) __asm__("func_0010F0E8");
int _fs_version_x0010F4F8(void) __asm__("_fs_version");
int func_0010EFF0_x0010F4F8(void) __asm__("func_0010EFF0");
int func_0010E948_x0010F4F8(void) __asm__("func_0010E948");
int func_0010EA50_x0010F4F8(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_0010F4F8_x0010F4F8(int a) __asm__("func_0010F4F8");
int func_0010F4F8_x0010F4F8(int a)
{
    int r;

    _sceFsWaitS_x0010F4F8(0xFD);
    if (D_003EC6BC_x0010F4F8 == 0) {
        func_0010F0E8_x0010F4F8();
    }
    if (_fs_version_x0010F4F8()) {
        func_0010EFF0_x0010F4F8();
        return 0xFFFEFFFC;
    }
    if (func_0010E948_x0010F4F8()) {
        func_0010EFF0_x0010F4F8();
        return -16;
    }
    D_00473440_x0010F4F8 = a;
    if (func_0010EA50_x0010F4F8(D_00474B40_x0010F4F8, 0xFD, 0, &D_00473440_x0010F4F8, 8, D_00474080_x0010F4F8, 4, 0, 0, 0) < 0) {
        func_0010EFF0_x0010F4F8();
        return -11;
    }
    r = *(int *)((unsigned)D_00474080_x0010F4F8 | 0x20000000);
    func_0010EFF0_x0010F4F8();
    return r;
}
extern int func_003B3EC8_x0010F5E8(int cmd) __asm__("func_0010EFC0");
typedef struct { int f0; int f4; int f8; int fC; } Iob_x0010F5E8;
typedef struct {
    int sema;
    void *dst;
    int size;
    int flags;
    int mode;
    char name[0x400];
    int unit;
} OpenPkt_x0010F5E8;
struct SemaParam_x0010F5E8 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
extern Iob_x0010F5E8 *new_iob_x0010F5E8(void) __asm__("func_0010E9C8");
extern void func_003B3F50_x0010F5E8(void) __asm__("func_0010F0E8");
extern int func_003B4158_x0010F5E8(void) __asm__("func_0010F2F0");
extern int func_003B3958_x0010F5E8(void *, int, int, void *, int, void *, int, int, int, int) __asm__("func_0010EA50");
extern int SignalSema_3B3EF8_x0010F5E8(void) __asm__("func_0010EFF0");
extern int CreateSema_x0010F5E8(struct SemaParam_x0010F5E8 *p) __asm__("CreateSema");
extern int DeleteSema_x0010F5E8(int id) __asm__("DeleteSema");
extern int WaitSema_x0010F5E8(int id) __asm__("WaitSema");
extern int SignalSema_x0010F5E8(int id) __asm__("SignalSema");
extern int D_003FAEDC_x0010F5E8 __asm__("D_003EC6BC");
extern int D_003FAEE8_x0010F5E8 __asm__("D_003EC6C8");
extern Iob_x0010F5E8 D_007814C0_x0010F5E8[32] __asm__("D_00474940");
extern OpenPkt_x0010F5E8 D_0077FFC0_x0010F5E8 __asm__("D_00473440");
extern char D_00460120_x0010F5E8[] __asm__("D_0045D700");
extern char D_00780C00_x0010F5E8[] __asm__("D_00474080");
extern char D_007816C0_x0010F5E8[] __asm__("D_00474B40");
int func_0010F5E8_x0010F5E8(const char *name, int flags, ...) __asm__("func_0010F5E8");
/* func_003B4220: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003b4220.c, MIT); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010F5E8_x0010F5E8(const char *name, int flags, ...)
{
    struct SemaParam_x0010F5E8 sp;
    int result;
    Iob_x0010F5E8 *p;
    int sid;
    int r;
    int i;
    int mode;
    int unit;

    OpenPkt_x0010F5E8 *q = &D_0077FFC0_x0010F5E8;

    func_003B3EC8_x0010F5E8(0);
    if (!D_003FAEDC_x0010F5E8)
        func_003B3F50_x0010F5E8();
    if (func_003B4158_x0010F5E8()) {
        SignalSema_3B3EF8_x0010F5E8();
        return 0xFFFEFFFC;
    }
    p = new_iob_x0010F5E8();
    if (!p) {
        SignalSema_3B3EF8_x0010F5E8();
        return -19;
    }
    mode = *(int *)((char *)__builtin_next_arg(flags) - 0x30);
    for (i = 0; i < 0x400; i++) {
        if ((q->name[i] = name[i]) == 0)
            break;
    }
    if (i == 0x400)
        q->name[0x3FF] = 0;
    q->flags = flags & 0x7FFFFFFF;
    q->mode = mode;
    unit = p - D_007814C0_x0010F5E8;
    q->unit = unit;
    sp.maxCount = 1;
    sp.initCount = 0;
    sp.option = (unsigned int)D_00460120_x0010F5E8;
    sid = CreateSema_x0010F5E8(&sp);
    q->dst = &result;
    q->sema = sid;
    q->size = 4;
    r = func_003B3958_x0010F5E8(D_007816C0_x0010F5E8, 0, 0, &D_0077FFC0_x0010F5E8, 0x418, D_00780C00_x0010F5E8, 4, 0, 0, 0);
    if (r < 0) {
        DeleteSema_x0010F5E8(sid);
        SignalSema_3B3EF8_x0010F5E8();
        return -11;
    }
    r = *(int *)((unsigned int)D_00780C00_x0010F5E8 | 0x20000000);
    SignalSema_3B3EF8_x0010F5E8();
    if (r == 0) {
        DeleteSema_x0010F5E8(sid);
        return -11;
    }
    WaitSema_x0010F5E8(sid);
    DeleteSema_x0010F5E8(sid);
    if (result < 0) {
        WaitSema_x0010F5E8(D_003FAEE8_x0010F5E8);
        p->f4 = 0;
        SignalSema_x0010F5E8(D_003FAEE8_x0010F5E8);
        return result;
    }
    r = unit;
    WaitSema_x0010F5E8(D_003FAEE8_x0010F5E8);
    p->f0 = result;
    p->f4 |= flags;
    SignalSema_x0010F5E8(D_003FAEE8_x0010F5E8);
    return r;
}
typedef unsigned char u8_x0010F878;
typedef signed int s32_x0010F878;
typedef unsigned int u32_x0010F878;
typedef struct {
    int handle;
    int active;
} CloseIob_x0010F878;
typedef struct {
    int sema;
    int result;
    int size;
    int handle;
    int slot;
} CloseState_x0010F878;
typedef struct {
    int count;
    int maxCount;
    int initialCount;
    int waitThreads;
    int attr;
    const char *name;
} CloseSema_x0010F878;
extern CloseState_x0010F878 D_01FE5940_x0010F878 __asm__("D_00473440");
extern u8_x0010F878 D_01FE6E40_x0010F878[] __asm__("D_00474940");
extern u8_x0010F878 D_01FE6580_x0010F878[] __asm__("D_00474080");
extern u8_x0010F878 D_01FE7040_x0010F878[] __asm__("D_00474B40");
extern s32_x0010F878 D_01EFEFDC_x0010F878 __asm__("D_003EC6BC");
extern const char S_01F27878_x0010F878[] __asm__("D_0045D718");
extern CloseIob_x0010F878 *F_iob_lookup_x0010F878(u32_x0010F878 fd) __asm__("func_0010EB40");
extern s32_x0010F878 F_lock_x0010F878(s32_x0010F878 n) __asm__("func_0010EFC0");
extern void F_unlock_x0010F878(void) __asm__("func_0010EFF0");
extern s32_x0010F878 CreateSema_x0010F878(CloseSema_x0010F878 *sema) __asm__("CreateSema");
extern s32_x0010F878 DeleteSema_x0010F878(s32_x0010F878 sid) __asm__("DeleteSema");
extern s32_x0010F878 WaitSema_x0010F878(s32_x0010F878 sid) __asm__("WaitSema");
extern s32_x0010F878 F_call_rpc_x0010F878(u8_x0010F878 *send, s32_x0010F878 f1, s32_x0010F878 f2, CloseState_x0010F878 *state, s32_x0010F878 n, u8_x0010F878 *recv, s32_x0010F878 rsize, s32_x0010F878 z1, s32_x0010F878 z2, s32_x0010F878 z3) __asm__("func_0010EA50");
int func_0010F878_x0010F878(unsigned int fd) __asm__("func_0010F878");
/* sceClose: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceClose.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010F878_x0010F878(unsigned int fd) {
    CloseSema_x0010F878 sema;
    int result;
    int sid;
    int rpcResult;
    CloseIob_x0010F878 *iob;
    CloseState_x0010F878 *state = &D_01FE5940_x0010F878;

    iob = F_iob_lookup_x0010F878(fd);
    F_lock_x0010F878(1);
     
    if (D_01EFEFDC_x0010F878 == 0) {
        F_unlock_x0010F878();
        return -9;
    }
    if (iob == 0 || iob->active == 0) {
        F_unlock_x0010F878();
        return -9;
    }
    state->handle = iob->handle;
    state->slot = ((char *)iob - (char *)D_01FE6E40_x0010F878) >> 4;
    sema.maxCount = 1;
    sema.name = S_01F27878_x0010F878;
    sema.initialCount = 0;
    sid = CreateSema_x0010F878(&sema);
    state->sema = sid;
    state->result = (int)&result;
    state->size = 4;
    rpcResult = F_call_rpc_x0010F878(D_01FE7040_x0010F878, 1, 0, state, 0x14,
                           D_01FE6580_x0010F878, 4, 0, 0, 0);
    if (rpcResult < 0) {
        DeleteSema_x0010F878(sid);
        F_unlock_x0010F878();
        return -11;
    }
    iob->active = 0;
    rpcResult = *(int *)((unsigned int)D_01FE6580_x0010F878 | 0x20000000);
    F_unlock_x0010F878();
    if (rpcResult == 0) {
        DeleteSema_x0010F878(sid);
        return -11;
    }
    WaitSema_x0010F878(sid);
    DeleteSema_x0010F878(sid);
    if (result < 0) {
        return result;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F9F0);
struct iob_x0010FC30 { int fd, flags, x8, xC; };
struct SemaParam_x0010FC30 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
typedef struct { int sema; int *res; int rsize; int fd; void *buf; int size; int x18; int idx; } ReadArg_x0010FC30;
extern int D_002C4A7C_x0010FC30 __asm__("D_003EC6BC");
extern int D_002C4A8C_x0010FC30 __asm__("D_003EC6CC");
extern int D_002C49F8_x0010FC30[32] __asm__("D_003EC638");
extern ReadArg_x0010FC30 D_0044A680_x0010FC30 __asm__("D_00473440");
extern struct iob_x0010FC30 D_0044BB80_x0010FC30[] __asm__("D_00474940");
extern char D_0044BD80_x0010FC30[] __asm__("D_00474B40");
extern int D_0044B2C0_x0010FC30[] __asm__("D_00474080");
extern char D_002AAAF8_x0010FC30[] __asm__("D_0045D748");
struct iob_x0010FC30 *get_iob_x0010FC30(int) __asm__("func_0010EB40");
int func_00237B50_x0010FC30(int) __asm__("func_0010EFC0");
void func_00237B80_x0010FC30(void) __asm__("func_0010EFF0");
void func_0023B170_x0010FC30(void *, int) __asm__("func_0010D770");
int func_00234A20_x0010FC30(struct SemaParam_x0010FC30 *) __asm__("CreateSema");
int func_00234A30_x0010FC30(int) __asm__("DeleteSema");
int func_00234A40_x0010FC30(int) __asm__("SignalSema");
int func_00234A60_x0010FC30(int) __asm__("WaitSema");
int func_002375E0_x0010FC30(void *, int, int, void *, int, void *, int, void *, void *, int) __asm__("func_0010EA50");
int func_0010FC30_x0010FC30(int fd, void *buf, int size) __asm__("func_0010FC30");
/* sceRead: from https://github.com/Komasia/sly2-decomp (src/lib/sceRead.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010FC30_x0010FC30(int fd, void *buf, int size)
{
    struct SemaParam_x0010FC30 sp;
    int res;
    struct iob_x0010FC30 *io;
    ReadArg_x0010FC30 *arg;
    int sema, r, flags, nowait, i;

    arg = &D_0044A680_x0010FC30;
    io = get_iob_x0010FC30(fd);
    func_00237B50_x0010FC30(2);
    if (D_002C4A7C_x0010FC30 == 0 || io == 0 || (flags = io->flags) == 0) {
        func_00237B80_x0010FC30();
        return -9;
    }
    arg->fd = io->fd;
    arg->idx = io - D_0044BB80_x0010FC30;
    sp.maxCount = 1;
    sp.option = (unsigned int)D_002AAAF8_x0010FC30;
    arg->buf = buf;
    arg->size = size;
    sp.initCount = 0;
    sema = func_00234A20_x0010FC30(&sp);
    arg->res = &res;
    arg->rsize = 4;
    D_0044A680_x0010FC30.sema = sema;
    if (flags & 0x8000) {
        func_00234A60_x0010FC30(D_002C4A8C_x0010FC30);
        r = (int)D_002C49F8_x0010FC30;
        i = 0;
        do { do { nowait = flags & 0x8000; } while (0); } while (0);
        for (; i < 32; i++) {
            if (D_002C49F8_x0010FC30[i] == -1) {
                D_002C49F8_x0010FC30[i] = arg->sema;
                arg->sema = -arg->sema;
                break;
            }
        }
        func_00234A40_x0010FC30(D_002C4A8C_x0010FC30);
    } else {
        r = (int)D_0044B2C0_x0010FC30;
        nowait = 0;
    }
    if (!(flags & 0x20000000))
        func_0023B170_x0010FC30(buf, size);
    func_0023B170_x0010FC30(arg, 0x20);
    if (func_002375E0_x0010FC30(D_0044BD80_x0010FC30, 2, 0, &D_0044A680_x0010FC30, 0x20, D_0044B2C0_x0010FC30, 4, 0, 0, nowait) < 0) {
        func_00234A30_x0010FC30(sema);
        func_00237B80_x0010FC30();
        return -11;
    }
    r = *(int *)((unsigned int)D_0044B2C0_x0010FC30 | 0x20000000);
    func_00237B80_x0010FC30();
    if (r == 0) {
        func_00234A30_x0010FC30(sema);
        return -11;
    }
    if (nowait) {
        func_00234A30_x0010FC30(sema);
        return 0;
    }
    func_00234A60_x0010FC30(sema);
    func_00234A30_x0010FC30(sema);
    return res;
}
struct iob_x0010FEA0 { int fd, flags, x8, xC; };
struct SemaParam_x0010FEA0 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
typedef struct { int sema; int *res; int rsize; int fd; void *buf; int size; int nhead; char head[16]; int idx; } WriteArg_x0010FEA0;
extern int D_002C4A7C_x0010FEA0 __asm__("D_003EC6BC");
extern int D_002C4A8C_x0010FEA0 __asm__("D_003EC6CC");
extern int D_002C49F8_x0010FEA0[32] __asm__("D_003EC638");
extern WriteArg_x0010FEA0 D_0044A680_x0010FEA0 __asm__("D_00473440");
extern struct iob_x0010FEA0 D_0044BB80_x0010FEA0[] __asm__("D_00474940");
extern char D_0044BD80_x0010FEA0[] __asm__("D_00474B40");
extern int D_0044B2C0_x0010FEA0[] __asm__("D_00474080");
extern char D_002AAB10_x0010FEA0[] __asm__("D_0045D760");
struct iob_x0010FEA0 *func_002376D0_x0010FEA0(int) __asm__("func_0010EB40");
int func_00237B50_x0010FEA0(int) __asm__("func_0010EFC0");
void func_00237B80_x0010FEA0(void) __asm__("func_0010EFF0");
void func_0023B170_x0010FEA0(void *, int) __asm__("func_0010D770");
int func_00234A20_x0010FEA0(struct SemaParam_x0010FEA0 *) __asm__("CreateSema");
int func_00234A30_x0010FEA0(int) __asm__("DeleteSema");
int func_00234A40_x0010FEA0(int) __asm__("SignalSema");
int func_00234A60_x0010FEA0(int) __asm__("WaitSema");
int func_002375E0_x0010FEA0(void *, int, int, void *, int, void *, int, void *, void *, int) __asm__("func_0010EA50");
int func_0010FEA0_x0010FEA0(int fd, const void *buf, int size) __asm__("func_0010FEA0");
/* sceWrite: from https://github.com/Komasia/sly2-decomp (src/lib/sceWrite.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_0010FEA0_x0010FEA0(int fd, const void *buf, int size)
{
    struct SemaParam_x0010FEA0 sp;
    int res;
    struct iob_x0010FEA0 *io;
    WriteArg_x0010FEA0 *arg;
    int sema, r, flags, nowait, i, n, j;

    arg = &D_0044A680_x0010FEA0;
    io = func_002376D0_x0010FEA0(fd);
    func_00237B50_x0010FEA0(3);
    if (D_002C4A7C_x0010FEA0 == 0 || io == 0 || (flags = io->flags) == 0) {
        func_00237B80_x0010FEA0();
        return -9;
    }
    arg->fd = io->fd;
    arg->idx = io - D_0044BB80_x0010FEA0;
    sp.maxCount = 1;
    sp.option = (unsigned int)D_002AAB10_x0010FEA0;
    arg->size = size;
    arg->buf = (void *)buf;
    sp.initCount = 0;
    sema = func_00234A20_x0010FEA0(&sp);
    arg->res = &res;
    arg->rsize = 4;
    D_0044A680_x0010FEA0.sema = sema;
    if (flags & 0x8000) {
        func_00234A60_x0010FEA0(D_002C4A8C_x0010FEA0);
        r = (int)D_002C49F8_x0010FEA0;
        i = 0;
        do { do { nowait = flags & 0x8000; } while (0); } while (0);
        for (; i < 32; i++) {
            if (D_002C49F8_x0010FEA0[i] == -1) {
                D_002C49F8_x0010FEA0[i] = arg->sema;
                arg->sema = -arg->sema;
                break;
            }
        }
        func_00234A40_x0010FEA0(D_002C4A8C_x0010FEA0);
    } else {
        n = (unsigned int)buf & 0xF;
        nowait = 0;
    }
    if (((unsigned int)buf & 0xF) == 0)
        n = 0;
    else
        n = (unsigned int)buf / 16 * 16 + 16 - (unsigned int)buf;
    if (size < n)
        n = size;
    if (!(flags & 0x20000000))
        func_0023B170_x0010FEA0((void *)buf, size);
    buf = (void *)((unsigned int)buf | 0x20000000);
    arg->nhead = n;
    for (j = 0; j < n; j++)
        arg->head[j] = ((const char *)buf)[j];
    if (func_002375E0_x0010FEA0(D_0044BD80_x0010FEA0, 3, 0, &D_0044A680_x0010FEA0, 0x30, D_0044B2C0_x0010FEA0, 4, 0, 0, nowait) < 0) {
        func_00234A30_x0010FEA0(sema);
        func_00237B80_x0010FEA0();
        return -11;
    }
    r = *(volatile int *)((unsigned int)D_0044B2C0_x0010FEA0 | 0x20000000);
    func_00237B80_x0010FEA0();
    if (r == 0) {
        func_00234A30_x0010FEA0(sema);
        return -11;
    }
    if (nowait) {
        func_00234A30_x0010FEA0(sema);
        return 0;
    }
    func_00234A60_x0010FEA0(sema);
    func_00234A30_x0010FEA0(sema);
    return res;
}
struct iob_x00110160 { int fd, flags, x8, xC; };
struct SemaParam_x00110160 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
typedef struct { char b[0x400]; } IoctlData_x00110160;
typedef struct { int sema; int *res; int rsize; int fd; int req; IoctlData_x00110160 data; int x414; int x418; int size; } IoctlArg_x00110160;
typedef struct { char b[0x440]; } FsStat_x00110160;
extern int D_002C4A7C_x00110160 __asm__("D_003EC6BC");
extern int D_002C4A78_x00110160 __asm__("D_003EC6B8");
extern int D_002C4A8C_x00110160 __asm__("D_003EC6CC");
extern volatile int D_002C49F8_x00110160[32] __asm__("D_003EC638");
extern void *D_0044A648_x00110160 __asm__("D_00473408");
extern IoctlArg_x00110160 D_0044A680_x00110160 __asm__("D_00473440");
extern FsStat_x00110160 D_0044B310_x00110160[] __asm__("D_004740D0");
extern char D_0044BD80_x00110160[] __asm__("D_00474B40");
extern int D_0044B2C0_x00110160[] __asm__("D_00474080");
extern char D_002AAB28_x00110160[] __asm__("D_0045D778");
struct iob_x00110160 *func_002376D0_x00110160(int) __asm__("func_0010EB40");
int func_00237B50_x00110160(int) __asm__("func_0010EFC0");
void func_00237B80_x00110160(void) __asm__("func_0010EFF0");
void func_00237BD8_x00110160(void) __asm__("func_0010F0E8");
void func_0023B170_x00110160(void *, int) __asm__("func_0010D770");
int func_00234A20_x00110160(struct SemaParam_x00110160 *) __asm__("CreateSema");
int func_00234A30_x00110160(int) __asm__("DeleteSema");
int func_00234A40_x00110160(int) __asm__("SignalSema");
int func_00234A60_x00110160(int) __asm__("WaitSema");
int func_002375E0_x00110160(void *, int, int, void *, int, void *, int, void *, void *, int) __asm__("func_0010EA50");
int func_00110160_x00110160(int fd, int req, void *data) __asm__("func_00110160");
/* sceIoctl: from https://github.com/Komasia/sly2-decomp (src/lib/sceIoctl.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00110160_x00110160(int fd, int req, void *data)
{
    struct SemaParam_x00110160 sp;
    int res;
    struct iob_x00110160 *io;
    IoctlArg_x00110160 *arg;
    int sema, r, i;
    int one = 1;     

    arg = &D_0044A680_x00110160;
    io = func_002376D0_x00110160(fd);
    func_00237B50_x00110160(5);
    D_0044A648_x00110160 = data;
    if (D_002C4A7C_x00110160 == 0)
        func_00237BD8_x00110160();
    if (io == 0 || io->flags == 0) {
        func_00237B80_x00110160();
        return -9;
    }
    arg->x414 = 0;
    arg->x418 = 0;
    if (req == 2) goto c2;
    if (req < 3) { if (req == one) goto c1; goto dflt; }
    if (req == 3) goto c3;
    goto dflt;
    c1: {
        func_00234A60_x00110160(D_002C4A8C_x00110160);
        for (i = 0; i < 32; i++) {
            if (D_002C49F8_x00110160[i] != -1)
                break;
        }
        if (i == 32)
            *(int *)D_0044A648_x00110160 = 0;
        else
            *(int *)D_0044A648_x00110160 = 1;
        func_00234A40_x00110160(D_002C4A8C_x00110160);
        func_00237B80_x00110160();
        return 0;
    }
    c2: {
        *(int *)data = *(int *)((unsigned int)&D_0044B310_x00110160[D_002C4A78_x00110160] | 0x20000000);
        func_00237B80_x00110160();
        return 0;
    }
    c3: {
        *(long *)data = *(long *)((unsigned int)&D_0044B310_x00110160[D_002C4A78_x00110160] | 0x20000000);
        func_00237B80_x00110160();
        return 0;
    }
    dflt:
    arg->fd = io->fd;
    arg->req = req;
    if (data == 0) {
        arg->size = 0;
    } else {
        arg->size = 0x400;
        arg->data = *(IoctlData_x00110160 *)data;
    }
    sp.maxCount = 1;
    sp.option = (unsigned int)D_002AAB28_x00110160;
    sp.initCount = 0;
    sema = func_00234A20_x00110160(&sp);
    arg->sema = sema;
    arg->res = &res;
    arg->rsize = 4;
    func_0023B170_x00110160(&D_0044A680_x00110160, 0x420);
    if (func_002375E0_x00110160(D_0044BD80_x00110160, 5, 0, &D_0044A680_x00110160, 0x420, D_0044B2C0_x00110160, 4, 0, 0, 0) < 0) {
        func_00234A30_x00110160(sema);
        func_00237B80_x00110160();
        return -11;
    }
    r = *(volatile int *)((unsigned int)D_0044B2C0_x00110160 | 0x20000000);
    func_00237B80_x00110160();
    if (r == 0) {
        func_00234A30_x00110160(sema);
        return -11;
    }
    func_00234A60_x00110160(sema);
    func_00234A30_x00110160(sema);
    return res;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001104E8);
struct SemaParam_CC_x001106D0 { int currentCount; int maxCount; int initCount; int numWaitThreads; unsigned int attr; unsigned int option; };
struct FsCall_CC_x001106D0 { int sema; int *result; int result_size; char name[0x400]; };
extern struct FsCall_CC_x001106D0 D_00473440_x001106D0 __asm__("D_00473440");
extern int D_003EC6BC_x001106D0 __asm__("D_003EC6BC");
extern int D_00474B40_x001106D0[] __asm__("D_00474B40");
extern int D_00474080_x001106D0[] __asm__("D_00474080");
extern char D_0045D7A8_x001106D0[] __asm__("D_0045D7A8");
int _sceFsWaitS_x001106D0(int) __asm__("_sceFsWaitS");
void func_0010F0E8_x001106D0(void) __asm__("func_0010F0E8");
int func_0010EFF0_x001106D0(void) __asm__("func_0010EFF0");
int CreateSema_x001106D0(struct SemaParam_CC_x001106D0 *) __asm__("CreateSema");
int DeleteSema_x001106D0(int) __asm__("DeleteSema");
int WaitSema_x001106D0(int) __asm__("WaitSema");
int func_0010EA50_x001106D0(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int _sceCallCode_x001106D0(const char *path, int cmd) __asm__("_sceCallCode");
int _sceCallCode_x001106D0(const char *path, int cmd)
{
    struct FsCall_CC_x001106D0 *call = &D_00473440_x001106D0;
    struct SemaParam_CC_x001106D0 sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS_x001106D0(cmd);
    if (D_003EC6BC_x001106D0 == 0) func_0010F0E8_x001106D0();
    i = 0;
    while (i < 0x400) {
        if ((*(((char *)call + i) + 0xC) = path[i]) == 0) break;
        i++;
    }
    if (i == 0x400) {
        *((char *)call + 0x40B) = 0;
        i = 0x3FF;
    }
    sp.maxCount = 1;
    sp.option = (unsigned)D_0045D7A8_x001106D0;
    sp.initCount = 0;
    sema = CreateSema_x001106D0(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (func_0010EA50_x001106D0(D_00474B40_x001106D0, cmd, 0, &D_00473440_x001106D0, i + 0xD, D_00474080_x001106D0, 4, 0, 0, 0) < 0) {
        DeleteSema_x001106D0(sema);
        func_0010EFF0_x001106D0();
        return -11;
    }
    status = *(int *)((unsigned)D_00474080_x001106D0 | 0x20000000);
    func_0010EFF0_x001106D0();
    if (status == 0) {
        DeleteSema_x001106D0(sema);
        return -11;
    }
    WaitSema_x001106D0(sema);
    DeleteSema_x001106D0(sema);
    return result;
}


int sceRemove(void *name)
{
    return _sceCallCode(name, 6);
}
INCLUDE_PAD(4);
struct FsCallMk_x001108A0 {
    int sema;             
    void *result;         
    int result_size;      
    int arg;              
    char path[0x400];     
};
struct SemaParam_x001108A0 {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};
extern struct FsCallMk_x001108A0 fs_call_x001108A0 __asm__("D_00473440");
extern int fs_ready_x001108A0 __asm__("D_003EC6BC");
extern int fs_rpc_client_x001108A0[] __asm__("D_00474B40");
extern int fs_rpc_result_x001108A0[] __asm__("D_00474080");
extern char fs_mkdir_sema_name_x001108A0[] __asm__("D_0045D7C0");
extern void _sceFsWaitS_x001108A0(int) __asm__("func_0010EFC0");
extern void sceFsInit_x001108A0(void) __asm__("func_0010F0E8");
extern int CreateSema_x001108A0(struct SemaParam_x001108A0 *) __asm__("CreateSema");
extern int DeleteSema_x001108A0(int) __asm__("DeleteSema");
extern int WaitSema_x001108A0(int) __asm__("WaitSema");
extern int ReadQueueStatus_x001108A0(void) __asm__("func_0010EFF0");
extern int fs_call_rpc_x001108A0(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_001108A0_x001108A0(char *path, int mode) __asm__("func_001108A0");
/* sceMkdir: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceMkdir.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001108A0_x001108A0(char *path, int mode) {
    struct FsCallMk_x001108A0 *call = &fs_call_x001108A0;
    struct SemaParam_x001108A0 sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS_x001108A0(7);
    if (fs_ready_x001108A0 == 0) sceFsInit_x001108A0();
    i = 0;
    while (i < 0x400) {
        if ((*(((char *)call + i) + 0x10) = path[i]) == 0) break;
        i++;
    }
    if (i == 0x400) {
        *((char *)call + 0x40F) = 0;
        i = 0x3FF;
    }
    call->arg = mode;
    sp.max_count = 1;
    sp.option = (unsigned)fs_mkdir_sema_name_x001108A0;
    sp.init_count = 0;
    sema = CreateSema_x001108A0(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (fs_call_rpc_x001108A0(fs_rpc_client_x001108A0, 7, 0, &fs_call_x001108A0, i + 0x11, fs_rpc_result_x001108A0, 4, 0, 0,
                    0) < 0) {
        DeleteSema_x001108A0(sema);
        ReadQueueStatus_x001108A0();
        return -11;
    }
    status = *(int *)((unsigned)fs_rpc_result_x001108A0 | 0x20000000);
    ReadQueueStatus_x001108A0();
    if (status == 0) {
        DeleteSema_x001108A0(sema);
        return -11;
    }
    WaitSema_x001108A0(sema);
    DeleteSema_x001108A0(sema);
    return result;
}


int sceRmdir(void *name)
{
    return _sceCallCode(name, 8);
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110A78);
struct SemaParam_CF8_x00110CF8 { int currentCount; int maxCount; int initCount; int numWaitThreads; unsigned int attr; unsigned int option; };
struct FsCall_CF8_x00110CF8 { int sema; int *result; int result_size; int arg; };
extern struct FsCall_CF8_x00110CF8 D_00473440_x00110CF8 __asm__("D_00473440");
extern int D_003EC6BC_x00110CF8 __asm__("D_003EC6BC");
extern int D_00474B40_x00110CF8[] __asm__("D_00474B40");
extern int D_00474080_x00110CF8[] __asm__("D_00474080");
extern char D_0045D7F0_x00110CF8[] __asm__("D_0045D7F0");
int _sceFsWaitS_x00110CF8(int) __asm__("_sceFsWaitS");
void func_0010F0E8_x00110CF8(void) __asm__("func_0010F0E8");
int func_0010EFF0_x00110CF8(void) __asm__("func_0010EFF0");
int CreateSema_x00110CF8(struct SemaParam_CF8_x00110CF8 *) __asm__("CreateSema");
int DeleteSema_x00110CF8(int) __asm__("DeleteSema");
int WaitSema_x00110CF8(int) __asm__("WaitSema");
int func_0010EA50_x00110CF8(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_00110CF8_x00110CF8(int arg) __asm__("func_00110CF8");
int func_00110CF8_x00110CF8(int arg)
{
    struct FsCall_CF8_x00110CF8 *call = &D_00473440_x00110CF8;
    struct SemaParam_CF8_x00110CF8 sp;
    int sema;
    int result;
    int status;

    _sceFsWaitS_x00110CF8(0xF);
    if (D_003EC6BC_x00110CF8 == 0) func_0010F0E8_x00110CF8();
    call->arg = arg;
    sp.maxCount = 1;
    sp.option = (unsigned)D_0045D7F0_x00110CF8;
    sp.initCount = 0;
    sema = CreateSema_x00110CF8(&sp);
    call->sema = sema;
    call->result = &result;
    call->result_size = 4;
    if (func_0010EA50_x00110CF8(D_00474B40_x00110CF8, 0xF, 0, call, 0x10, D_00474080_x00110CF8, 4, 0, 0, 0) < 0) {
        DeleteSema_x00110CF8(sema);
        func_0010EFF0_x00110CF8();
        return -11;
    }
    status = *(int *)((unsigned)D_00474080_x00110CF8 | 0x20000000);
    func_0010EFF0_x00110CF8();
    if (status == 0) {
        DeleteSema_x00110CF8(sema);
        return -11;
    }
    WaitSema_x00110CF8(sema);
    DeleteSema_x00110CF8(sema);
    return result;
}


int sceDelDrv(void *name)
{
    return _sceCallCode(name, 0x10);
}
INCLUDE_PAD(4);
typedef struct { int fd, used, a, b; } Entry2DB0_x00110E48;
extern Entry2DB0_x00110E48 D_004E5D00_x00110E48[] __asm__("D_00474940");
extern int D_0048623C_x00110E48 __asm__("D_003EC6BC");
extern int D_00486248_x00110E48 __asm__("D_003EC6C8");
extern int _sceFsWaitS_x00110E48(int) __asm__("func_0010EFC0");
extern void func_001112E0_x00110E48(void) __asm__("func_0010F0E8");
extern void _sceFsSigSema_x00110E48(void) __asm__("func_0010EFF0");
extern Entry2DB0_x00110E48 *new_iob_x00110E48(void) __asm__("func_0010E9C8");
extern int _sceCallCode_x00110E48(int,int) __asm__("func_001106D0");
extern int WaitSema_x00110E48(int) __asm__("WaitSema");
extern int SignalSema_x00110E48(int) __asm__("SignalSema");
int func_00110E48_x00110E48(int path) __asm__("func_00110E48");
/* sceDopen: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libkernl/libkernl_112DB0.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00110E48_x00110E48(int path){
 Entry2DB0_x00110E48 *e;
 int r, sem;
 _sceFsWaitS_x00110E48(9);
 if(!D_0048623C_x00110E48)func_001112E0_x00110E48();
 _sceFsSigSema_x00110E48();
 e=new_iob_x00110E48();
 if(!e)return -19;
 r=_sceCallCode_x00110E48(path,9);
 if(r<0){WaitSema_x00110E48(D_00486248_x00110E48);e->used=0;sem=D_00486248_x00110E48;}
 else{WaitSema_x00110E48(D_00486248_x00110E48);e->fd=r;sem=D_00486248_x00110E48;r=e-D_004E5D00_x00110E48;}
 SignalSema_x00110E48(sem);
 return r;
}
struct SemaParam_F10_x00110F10 { int currentCount; int maxCount; int initCount; int numWaitThreads; unsigned int attr; unsigned int option; };
struct FsCall_F10_x00110F10 { int sema; int *result; int result_size; int fd; };
typedef struct { int fd; int mode; } FsIob_F10_x00110F10;
extern struct FsCall_F10_x00110F10 D_00473440_x00110F10 __asm__("D_00473440");
extern int D_003EC6BC_x00110F10 __asm__("D_003EC6BC");
extern int D_00474B40_x00110F10[] __asm__("D_00474B40");
extern int D_00474080_x00110F10[] __asm__("D_00474080");
extern char D_0045D808_x00110F10[] __asm__("D_0045D808");
FsIob_F10_x00110F10 *get_iob_x00110F10(int) __asm__("get_iob");
int _sceFsWaitS_x00110F10(int) __asm__("_sceFsWaitS");
int func_0010EFF0_x00110F10(void) __asm__("func_0010EFF0");
int CreateSema_x00110F10(struct SemaParam_F10_x00110F10 *) __asm__("CreateSema");
int DeleteSema_x00110F10(int) __asm__("DeleteSema");
int WaitSema_x00110F10(int) __asm__("WaitSema");
int func_0010EA50_x00110F10(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_00110F10_x00110F10(int fd) __asm__("func_00110F10");
int func_00110F10_x00110F10(int fd)
{
    struct FsCall_F10_x00110F10 *call = &D_00473440_x00110F10;
    FsIob_F10_x00110F10 *io;
    struct SemaParam_F10_x00110F10 sp;
    int sema;
    int result;
    int status;

    io = get_iob_x00110F10(fd);
    _sceFsWaitS_x00110F10(0xA);
    if (D_003EC6BC_x00110F10 == 0 || io == 0 || io->mode == 0) {
        func_0010EFF0_x00110F10();
        return -9;
    }
    call->fd = io->fd;
    sp.maxCount = 1;
    sp.option = (unsigned)D_0045D808_x00110F10;
    sp.initCount = 0;
    sema = CreateSema_x00110F10(&sp);
    call->sema = sema;
    call->result = &result;
    call->result_size = 4;
    if (func_0010EA50_x00110F10(D_00474B40_x00110F10, 0xA, 0, call, 0x14, D_00474080_x00110F10, 4, 0, 0, 0) < 0) {
        DeleteSema_x00110F10(sema);
        func_0010EFF0_x00110F10();
        return -11;
    }
    io->mode = 0;
    status = *(int *)((unsigned)D_00474080_x00110F10 | 0x20000000);
    func_0010EFF0_x00110F10();
    if (status == 0) {
        DeleteSema_x00110F10(sema);
        return -11;
    }
    WaitSema_x00110F10(sema);
    DeleteSema_x00110F10(sema);
    if (result < 0) {
        return result;
    }
    return 0;
}
struct FsIob_x00111078 {
    int fd;
    int mode;
    int pad8;
    int padC;
};
struct FsCall_x00111078 {
    int sema;             
    void *result;         
    int result_size;      
    int fd;               
    void *buf;            
    int size;             
    int unk18;            
    int iob;              
};
struct SemaParam_x00111078 {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};
extern struct FsCall_x00111078 fs_call_x00111078 __asm__("D_00473440");
extern int fs_ready_x00111078 __asm__("D_003EC6BC");
extern unsigned char fs_rpc_client_x00111078[] __asm__("D_00474B40");
extern unsigned char fs_rpc_result_x00111078[] __asm__("D_00474080");
extern char sceStdioDreadSemaName_x00111078[] __asm__("D_0045D820");
extern struct FsIob_x00111078 *get_iob_x00111078(int fd) __asm__("func_0010EB40");
extern void _sceFsWaitS_x00111078(int) __asm__("func_0010EFC0");
extern int ReadQueueStatus_x00111078(void) __asm__("func_0010EFF0");
extern int CreateSema_x00111078(struct SemaParam_x00111078 *) __asm__("CreateSema");
extern int DeleteSema_x00111078(int) __asm__("DeleteSema");
extern int WaitSema_x00111078(int) __asm__("WaitSema");
extern int fs_call_rpc_x00111078(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_00111078_x00111078(int fd, void *buf, int size) __asm__("func_00111078");
/* sceDread: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceDread.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00111078_x00111078(int fd, void *buf, int size) {
    struct FsCall_x00111078 *call = &fs_call_x00111078;
    struct FsIob_x00111078 *iob;
    struct SemaParam_x00111078 sp;
    int result;
    int mode;
    int sema;
    int ret;

    iob = get_iob_x00111078(fd);
    _sceFsWaitS_x00111078(0xB);
    if (fs_ready_x00111078 == 0 || iob == 0 || (mode = iob->mode) == 0) {
        ReadQueueStatus_x00111078();
        return -9;
    }
    call->fd = iob->fd;
    call->buf = buf;
    sp.max_count = 1;
    sp.option = (unsigned)sceStdioDreadSemaName_x00111078;
    sp.init_count = 0;
    sema = CreateSema_x00111078(&sp);
    call->sema = sema;
    call->result = &result;
    call->result_size = 4;
    if (fs_call_rpc_x00111078(fs_rpc_client_x00111078, 0xB, 0, call, 0x20, fs_rpc_result_x00111078, 4, 0, 0, 0) < 0) {
        WaitSema_x00111078(sema);
        ReadQueueStatus_x00111078();
        return -11;
    }
    ret = *(int *)((unsigned)fs_rpc_result_x00111078 | 0x20000000);
    ReadQueueStatus_x00111078();
    if (ret == 0) {
        DeleteSema_x00111078(sema);
        return -11;
    }
    WaitSema_x00111078(sema);
    DeleteSema_x00111078(sema);
    return result;
}
struct FsCallGs_x001111D0 {
    int sema;             
    void *result;         
    int result_size;      
    void *stat;           
    char path[0x400];     
};
struct SemaParam_x001111D0 {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};
extern struct FsCallGs_x001111D0 fs_call_x001111D0 __asm__("D_00473440");
extern int fs_ready_x001111D0 __asm__("D_003EC6BC");
extern int fs_rpc_client_x001111D0[] __asm__("D_00474B40");
extern int fs_rpc_result_x001111D0[] __asm__("D_00474080");
extern char fs_getstat_sema_name_x001111D0[] __asm__("D_0045D838");
extern void _sceFsWaitS_x001111D0(int) __asm__("func_0010EFC0");
extern void sceFsInit_x001111D0(void) __asm__("func_0010F0E8");
extern int CreateSema_x001111D0(struct SemaParam_x001111D0 *) __asm__("CreateSema");
extern int DeleteSema_x001111D0(int) __asm__("DeleteSema");
extern int WaitSema_x001111D0(int) __asm__("WaitSema");
extern int ReadQueueStatus_x001111D0(void) __asm__("func_0010EFF0");
extern int fs_call_rpc_x001111D0(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_001111D0_x001111D0(unsigned char *path, void *stat) __asm__("func_001111D0");
/* sceGetstat: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceGetstat.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_001111D0_x001111D0(unsigned char *path, void *stat) {
    struct FsCallGs_x001111D0 *call = &fs_call_x001111D0;
    struct SemaParam_x001111D0 sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS_x001111D0(0xC);
    if (fs_ready_x001111D0 == 0) sceFsInit_x001111D0();
    i = 0;
    while (i < 0x400) {
        if ((*(((unsigned char *)call + i) + 0x10) = path[i]) == 0) break;
        i++;
    }

    if (i == 0x400) {
        *((unsigned char *)call + 0x40F) = 0;
        i = 0x3FF;
    }
    call->stat = stat;
    sp.max_count = 1;
    sp.option = (unsigned)fs_getstat_sema_name_x001111D0;
    sp.init_count = 0;
    sema = CreateSema_x001111D0(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (fs_call_rpc_x001111D0(fs_rpc_client_x001111D0, 0xC, 0, &fs_call_x001111D0, i + 0x11, fs_rpc_result_x001111D0,
                    4, 0, 0, 0) < 0) {
        DeleteSema_x001111D0(sema);
        ReadQueueStatus_x001111D0();
        return -11;
    }
    status = *(int *)((unsigned)fs_rpc_result_x001111D0 | 0x20000000);
    ReadQueueStatus_x001111D0();
    if (status == 0) {
        DeleteSema_x001111D0(sema);
        return -11;
    }
    WaitSema_x001111D0(sema);
    DeleteSema_x001111D0(sema);
    return result;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00111388);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001115D8);


int sceChdir(void *name)
{
    return _sceCallCode(name, 0x12);
}
INCLUDE_PAD(4);
struct FsCallSync_x00111800 {
    int sema;             
    void *result;         
    int result_size;      
    int pad0C;            
    int flag;             
    char path[0x400];     
};
struct SemaParam_x00111800 {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned attr;
    unsigned option;
};
extern struct FsCallSync_x00111800 fs_call_x00111800 __asm__("D_00473440");
extern int fs_ready_x00111800 __asm__("D_003EC6BC");
extern int fs_rpc_client_x00111800[] __asm__("D_00474B40");
extern int fs_rpc_result_x00111800[] __asm__("D_00474080");
extern char fs_sync_sema_name_x00111800[] __asm__("D_0045D880");
extern void _sceFsWaitS_x00111800(int) __asm__("func_0010EFC0");
extern void sceFsInit_x00111800(void) __asm__("func_0010F0E8");
extern int CreateSema_x00111800(struct SemaParam_x00111800 *) __asm__("CreateSema");
extern int DeleteSema_x00111800(int) __asm__("DeleteSema");
extern int WaitSema_x00111800(int) __asm__("WaitSema");
extern int ReadQueueStatus_x00111800(void) __asm__("func_0010EFF0");
extern int fs_call_rpc_x00111800(void *, int, int, void *, int, void *, int, void *, void *, void *) __asm__("func_0010EA50");
int func_00111800_x00111800(char *path, int flag) __asm__("func_00111800");
/* sceSync: from https://github.com/OpenRAC/rac5-sm-decomp (src/boot/sceSync.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00111800_x00111800(char *path, int flag) {
    struct FsCallSync_x00111800 *call = &fs_call_x00111800;
    struct SemaParam_x00111800 sp;
    int sema;
    int result;
    int status;
    int i;

    _sceFsWaitS_x00111800(0x13);
    if (fs_ready_x00111800 == 0) sceFsInit_x00111800();
    i = 0;
    while (i < 0x400) {
        if ((*(((char *)call + i) + 0x14) = path[i]) == 0) break;
        i++;
    }
    if (i == 0x400) *((char *)call + 0x413) = 0;
    call->flag = flag;
    sp.max_count = 1;
    sp.option = (unsigned)fs_sync_sema_name_x00111800;
    sp.init_count = 0;
    sema = CreateSema_x00111800(&sp);
    call->result = &result;
    call->sema = sema;
    call->result_size = 4;
    if (fs_call_rpc_x00111800(fs_rpc_client_x00111800, 0x13, 0, &fs_call_x00111800, 0x414, fs_rpc_result_x00111800, 4, 0,
                    0, 0) < 0) {
        DeleteSema_x00111800(sema);
        ReadQueueStatus_x00111800();
        return -11;
    }
    status = *(int *)((unsigned)fs_rpc_result_x00111800 | 0x20000000);
    ReadQueueStatus_x00111800();
    if (status == 0) {
        DeleteSema_x00111800(sema);
        return -11;
    }
    WaitSema_x00111800(sema);
    DeleteSema_x00111800(sema);
    return result;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001119B0);


int sceUmount(void *name)
{
    return _sceCallCode(name, 0x15);
}
INCLUDE_PAD(4);
