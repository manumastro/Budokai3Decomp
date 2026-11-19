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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010EA50);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010EBB0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", _sceFsSemInit);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F000);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F0A0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F3B8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F4F8);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010FC30);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010FEA0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110160);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001104E8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", _sceCallCode);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110CF8);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110F10);
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
