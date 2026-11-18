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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010EFF0);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F5E8);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_0010F878);
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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001108A0);


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
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110E48);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00110F10);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00111078);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001111D0);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00111388);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001115D8);


int sceChdir(void *name)
{
    return _sceCallCode(name, 0x12);
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_00111800);
INCLUDE_ASM("asm/nonmatchings/sdk/libkernl/kfiv_filestub", func_001119B0);


int sceUmount(void *name)
{
    return _sceCallCode(name, 0x15);
}
INCLUDE_PAD(4);
