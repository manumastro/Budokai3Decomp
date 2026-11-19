#include "common.h"

s32 func_0019EB20();                            /* extern */

s32 func_0019D7C8();                                /* extern */

s32 func_0019D6D0(s32 *);                   /* extern */
extern s32 D_00492A58;
extern s32 D_00492A64;

extern s32 D_00467A00;

s32 func_0019CF60();                            /* extern */
s32 func_0019CFE8(s32);                         /* extern */
s32 func_0019D070(s32);                             /* extern */

extern s32 D_00426B38;
extern s32 D_00426B3C;

s32 memset(s32, s32, s32);              /* extern */

extern s32 D_00426A98;

s32 func_00172A40();                            /* extern */

s32 func_0019AA08();                            /* extern */

s32 func_0019A718();                            /* extern */

s32 func_0019A218();                            /* extern */
s32 func_0019AD80(s32);                         /* extern */

s32 func_0019A058(s32);                         /* extern */

s32 func_001998B8();                                /* extern */

s32 func_001976B8();                            /* extern */

s32 func_00198F70(s32, s32 *);                  /* extern */

s32 func_00198BE8(s32, s32 *);                  /* extern */

s32 func_0018A7A0(s32, s32);                    /* extern */

extern s32 D_00426ADC;

s32 func_00196B90();                            /* extern */
s32 func_00196C38(s32);                         /* extern */
s32 func_00196CC0(s32);                         /* extern */

s32 func_001969A8();                            /* extern */
s32 func_00198C30(s32);                         /* extern */

s32 func_0019A160();                            /* extern */

s32 func_001966C0();                            /* extern */

s32 func_00189DE8(s32, s32);                    /* extern */
s32 func_0019B938(s32, s32);                    /* extern */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

s32 func_00178C68(s32 *, s32, s32);     /* extern */

s32 func_00107AF0();                            /* extern */
s32 func_00178F48(s32 *, s32, s32); /* extern */
extern s32 D_004929F8;

extern s32 D_00426B18;

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */

void func_00194D48(s64 *arg0, s64 arg1, s64 arg2, s64 arg3) {
    *arg0 = (arg1 << 0x20) | ((u64) (arg2 << 0x20) >> 4) | ((u64) (arg3 << 0x20) >> 0x20);
}
typedef struct SfdIpuEntry_x00194D70 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00194D70;
typedef struct SfdDmaTag_x00194D70 {
    long long tag;
    long long pad;
} SfdDmaTag_x00194D70;
typedef struct SfdIpuStream_x00194D70 {
    void *base;
    SfdDmaTag_x00194D70 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00194D70 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00194D70;
struct SemaParam_x00194D70 {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
int CreateSema_x00194D70(struct SemaParam_x00194D70 *param) __asm__("CreateSema");
int viBufReset_x00194D70(SfdIpuStream_x00194D70 *stream) __asm__("func_00194DE8");
int viBufReset_x00194D70(SfdIpuStream_x00194D70 *stream) __asm__("func_00194DE8");
int func_00194D70_x00194D70(SfdIpuStream_x00194D70 *stream, void *base, void *address, int sectors, SfdIpuEntry_x00194D70 *entries, int entryCount) __asm__("func_00194D70");
/* viBufCreate: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00194D70_x00194D70(SfdIpuStream_x00194D70 *stream, void *base, void *address, int sectors, SfdIpuEntry_x00194D70 *entries, int entryCount) {
    struct SemaParam_x00194D70 param;
    stream->base = base;
    stream->uncached = (SfdDmaTag_x00194D70 *)((((unsigned int)address) & 0x0FFFFFFF) | 0x20000000);
    stream->sectors = sectors;
    stream->bytes = sectors * 2048;
    stream->entries = entries;
    stream->entryCount = entryCount;
    param.initCount = 1;
    param.maxCount = 1;
    stream->sema = CreateSema_x00194D70(&param);
    viBufReset_x00194D70(stream);
    stream->totalBytes = 0;
    return 1;
}
typedef struct SfdIpuEntry_x00194DE8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00194DE8;
typedef struct SfdDmaTag_x00194DE8 {
    long long tag;
    long long pad;
} SfdDmaTag_x00194DE8;
typedef struct SfdIpuStream_x00194DE8 {
    void *base;
    SfdDmaTag_x00194DE8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00194DE8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00194DE8;
void scTag2_x00194DE8(long long *tag, long long addr, long long id, long long qwc) __asm__("func_00194D48");
void setD4_CHCR_x00194DE8(unsigned int chcr) __asm__("func_00194CE0");
void scTag2_x00194DE8(long long *tag, long long addr, long long id, long long qwc) __asm__("func_00194D48");
int func_00194DE8_x00194DE8(SfdIpuStream_x00194DE8 *stream) __asm__("func_00194DE8");
/* viBufReset: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00194DE8_x00194DE8(SfdIpuStream_x00194DE8 *stream) {
    int i;
    stream->headSct = 0;
    stream->queuedSct = 0;
    stream->restBytes = 0;
    stream->active = 1;
    stream->f88 = 0;
    stream->f92 = 0;
    for (i = 0; i < stream->entryCount; i++) {
        stream->entries[i].f0 = -1;
        stream->entries[i].f8 = -1;
        stream->entries[i].f16 = 0;
        stream->entries[i].f20 = 0;
    }
    for (i = 0; i < stream->sectors; i++) {
        scTag2_x00194DE8((long long *)(stream->uncached + i), ((i * 2048 + (unsigned int)stream->base) & 0x0FFFFFFF), 3, 128);
    }
    scTag2_x00194DE8((long long *)(stream->uncached + i), (((unsigned int)stream->uncached) & 0x0FFFFFFF), 2, 0);
    *((volatile unsigned int *)0x1000B420) = 0;
    *((volatile unsigned int *)0x1000B410) = (((unsigned int)stream->base) & 0x0FFFFFFF);
    *((volatile unsigned int *)0x1000B430) = (((unsigned int)stream->uncached) & 0x0FFFFFFF);
    setD4_CHCR_x00194DE8(5);
    return 1;
}
typedef struct SfdIpuEntry_x00194F28 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00194F28;
typedef struct SfdDmaTag_x00194F28 {
    long long tag;
    long long pad;
} SfdDmaTag_x00194F28;
typedef struct SfdIpuStream_x00194F28 {
    void *base;
    SfdDmaTag_x00194F28 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00194F28 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00194F28;
int SignalSema_x00194F28(int sema) __asm__("SignalSema");
int WaitSema_x00194F28(int sema) __asm__("WaitSema");
void func_00194F28_x00194F28(SfdIpuStream_x00194F28 *stream, char **first, int *firstSize, char **second, int *secondSize) __asm__("func_00194F28");
/* viBufBeginPut: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00194F28_x00194F28(SfdIpuStream_x00194F28 *stream, char **first, int *firstSize, char **second, int *secondSize) {
    int es;
    int en;
    int fs;
    int fn;
    WaitSema_x00194F28(stream->sema);
    fs = (stream->headSct + stream->queuedSct) * 2048;
    fn = (stream->sectors - 2 - stream->queuedSct) * 2048;
    es = (fs + stream->restBytes) % stream->bytes;
    en = fn - stream->restBytes;
    if (stream->bytes - es >= en) {
        *first = (char *)stream->base + es;
        *firstSize = en;
        *second = 0;
        *secondSize = 0;
    } else {
        *first = (char *)stream->base + es;
        *firstSize = stream->bytes - es;
        *second = (char *)stream->base;
        *secondSize = en - (stream->bytes - es);
    }
    SignalSema_x00194F28(stream->sema);
}
void func_00195018(u8 *arg0, s32 arg1) {
    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) (*(s32 *)((u8 *)arg0 + 0x14) + arg1);
    *(s64 *)((u8 *)arg0 + 0x48) = (s64) (arg1 + *(s64 *)((u8 *)arg0 + 0x48));
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
}
extern int WaitSema_x00195068(int sid) __asm__("WaitSema");
extern int SignalSema_x00195068(int sid) __asm__("SignalSema");
typedef struct {
               unsigned int base;
               unsigned int tagp;
               int nblk;
               int rd;
               int rdofs;
               int wr;
               int size;
               unsigned char pad1C[0x40 - 0x1C];
               int sema;
               int active;
               long long total;
               void *ent;
               int nent;
               int f58;
               int f5C;
} ViBuf_x00195068;
int func_00195068_x00195068(ViBuf_x00195068 *b, int n) __asm__("func_00195068");
/* func_00355C08: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00353500.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00195068_x00195068(ViBuf_x00195068 *b, int n)
{
    WaitSema_x00195068(b->sema);
    b->wr -= n;
    b->total -= n;
    if (b->wr < 0) {
        for (;;) {
        }
    }
    SignalSema_x00195068(b->sema);
    return n;
}
typedef struct SfdIpuEntry_x001950E8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001950E8;
typedef struct SfdDmaTag_x001950E8 {
    long long tag;
    long long pad;
} SfdDmaTag_x001950E8;
typedef struct SfdIpuStream_x001950E8 {
    void *base;
    SfdDmaTag_x001950E8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001950E8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001950E8;
int SignalSema_x001950E8(int sema) __asm__("SignalSema");
int WaitSema_x001950E8(int sema) __asm__("WaitSema");
void scTag2_x001950E8(long long *tag, long long addr, long long id, long long qwc) __asm__("func_00194D48");
int getFIFOindex_x001950E8(SfdIpuStream_x001950E8 *stream, int position) __asm__("func_00194C28");
void setD4_CHCR_x001950E8(unsigned int chcr) __asm__("func_00194CE0");
void scTag2_x001950E8(long long *tag, long long addr, long long id, long long qwc) __asm__("func_00194D48");
int func_001950E8_x001950E8(SfdIpuStream_x001950E8 *stream) __asm__("func_001950E8");
/* viBufAddDMA: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001950E8_x001950E8(SfdIpuStream_x001950E8 *stream) {
    int i;
    int index;
    int id;
    int last;
    unsigned int d4chcr;
    int isNewData = 0;
    int consume;
    int readStart;
    int readN;
    WaitSema_x001950E8(stream->sema);
    if (!stream->active) {
        SignalSema_x001950E8(stream->sema);
        return 0;
    }
    setD4_CHCR_x001950E8(5);
    d4chcr = *((volatile unsigned int *)0x1000B400);
    index = getFIFOindex_x001950E8(stream, *((volatile unsigned int *)0x1000B410));
    consume = (index + stream->sectors - stream->headSct) % stream->sectors;
    stream->headSct = (stream->headSct + consume) % stream->sectors;
    stream->queuedSct -= consume;
    readStart = (stream->headSct + stream->queuedSct) % stream->sectors;
    readN = stream->restBytes / 2048;
    stream->restBytes %= 2048;
    if (readN > 0) {
        last = (stream->headSct + stream->queuedSct - 1 + stream->sectors) % stream->sectors;
        scTag2_x001950E8((long long *)(stream->uncached + last), (int)((char *)stream->base + 2048 * last), 3, 128);
        isNewData = 1;
    }
    index = readStart;
    for (i = 0; i < readN; i++) {
        id = (i == readN - 1) ? 0 : 3;
        scTag2_x001950E8((long long *)(stream->uncached + index), (int)((char *)stream->base + 2048 * index), id, 128);
        index = (index + 1) % stream->sectors;
    }
    stream->queuedSct += readN;
    if (stream->queuedSct) {
        if (isNewData) {
            d4chcr = (d4chcr & 0x0FFFFFFF) | (3 << 28);
        }
        setD4_CHCR_x001950E8(d4chcr | 0x100);
    }
    SignalSema_x001950E8(stream->sema);
    return 1;
}
typedef struct SfdIpuEntry_x001952E8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001952E8;
typedef struct SfdDmaTag_x001952E8 {
    long long tag;
    long long pad;
} SfdDmaTag_x001952E8;
typedef struct SfdIpuStream_x001952E8 {
    void *base;
    SfdDmaTag_x001952E8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001952E8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001952E8;
int SignalSema_x001952E8(int sema) __asm__("SignalSema");
int WaitSema_x001952E8(int sema) __asm__("WaitSema");
void sfmpvps2_setD3_CHCR_x001952E8(unsigned int chcr) __asm__("func_00194C78");
void setD4_CHCR_x001952E8(unsigned int chcr) __asm__("func_00194CE0");
int func_001952E8_x001952E8(SfdIpuStream_x001952E8 *stream) __asm__("func_001952E8");
/* viBufStopDMA: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001952E8_x001952E8(SfdIpuStream_x001952E8 *stream) {
    WaitSema_x001952E8(stream->sema);
    stream->active = 0;
    setD4_CHCR_x001952E8(5);
    stream->r28 = (*(volatile int *)(0x1000B410));
    stream->r32 = (*(volatile int *)(0x1000B430));
    stream->r36 = (*(volatile int *)(0x1000B420));
    stream->r40 = (*(volatile int *)(0x1000B400));
    while ((*(volatile int *)(0x10002010)) & 0xF0) {
    }
    sfmpvps2_setD3_CHCR_x001952E8(0);
    stream->r44 = (*(volatile int *)(0x1000B010));
    stream->r48 = (*(volatile int *)(0x1000B020));
    stream->r52 = (*(volatile int *)(0x1000B000));
    stream->r56 = (*(volatile int *)(0x10002020));
    stream->r60 = (*(volatile int *)(0x10002010));
    SignalSema_x001952E8(stream->sema);
    return 1;
}
typedef struct SfdIpuEntry_x001953E8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001953E8;
typedef struct SfdDmaTag_x001953E8 {
    long long tag;
    long long pad;
} SfdDmaTag_x001953E8;
typedef struct SfdIpuStream_x001953E8 {
    void *base;
    SfdDmaTag_x001953E8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001953E8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001953E8;
int SignalSema_x001953E8(int sema) __asm__("SignalSema");
int WaitSema_x001953E8(int sema) __asm__("WaitSema");
int getFIFOindex_x001953E8(SfdIpuStream_x001953E8 *stream, int position) __asm__("func_00194C28");
void sfmpvps2_setD3_CHCR_x001953E8(unsigned int chcr) __asm__("func_00194C78");
void setD4_CHCR_x001953E8(unsigned int chcr) __asm__("func_00194CE0");
int func_001953E8_x001953E8(SfdIpuStream_x001953E8 *stream) __asm__("func_001953E8");
/* viBufRestartDMA: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001953E8_x001953E8(SfdIpuStream_x001953E8 *stream) {
    int bp;
    int fp;
    int ifc;
    unsigned int madr;
    unsigned int qwc;
    unsigned int tadr;
    unsigned int chcr;
    int index;
    int indexNext;
    int id;
    WaitSema_x001953E8(stream->sema);
    bp = stream->r56 & 0x7F;
    fp = (stream->r56 >> 16) & 0x3;
    ifc = (stream->r56 >> 8) & 0xF;
    madr = stream->r28 - ((fp + ifc) << 4);
    qwc = stream->r36 + (fp + ifc);
    tadr = stream->r32;
    chcr = stream->r40 | 0x100;
    if (madr < (unsigned int)stream->base) {
        qwc = ((unsigned int)stream->base - madr) >> 4;
        madr += (unsigned int)(stream->sectors * 2048);
        tadr = (((unsigned int)stream->uncached) & 0x0FFFFFFF);
        id = (stream->r28 == (unsigned int)stream->base
              || stream->r28 == (unsigned int)stream->base + 2048 * stream->sectors) ? 0 : 3;
        chcr = (stream->r40 & 0x0FFFFFFF) | (id << 28) | 0x100;
        if (!(0 <= (0 + stream->sectors - stream->headSct) % stream->sectors
              && (0 + stream->sectors - stream->headSct) % stream->sectors < stream->queuedSct)) {
            stream->headSct = stream->sectors - 1;
            stream->queuedSct++;
        }
    } else if ((index = getFIFOindex_x001953E8(stream, stream->r28)) != (indexNext = getFIFOindex_x001953E8(stream, madr))) {
        tadr = ((index * 16 + (unsigned int)stream->uncached) & 0x0FFFFFFF);
        qwc = ((unsigned int)stream->base + 2048 * index - madr) >> 4;
        id = ((unsigned int)stream->base + (stream->r28 - (unsigned int)stream->base) % (2048 * stream->sectors)
              == (unsigned int)stream->base + 2048 * ((stream->headSct + stream->queuedSct) % stream->sectors)) ? 0 : 3;
        chcr = (stream->r40 & 0x0FFFFFFF) | (id << 28) | 0x100;
        if (!(0 <= (indexNext + stream->sectors - stream->headSct) % stream->sectors
              && (indexNext + stream->sectors - stream->headSct) % stream->sectors < stream->queuedSct)) {
            stream->headSct = indexNext;
            stream->queuedSct++;
        }
    }
    if (stream->r44 != 0 && stream->r48 != 0) {
        (*(volatile int *)(0x1000B010)) = stream->r44;
        (*(volatile int *)(0x1000B020)) = stream->r48;
        sfmpvps2_setD3_CHCR_x001953E8(stream->r52 | 0x100);
    }
    while ((*(volatile int *)(0x10002010)) < 0) {
    }
    (*(volatile int *)(0x10002000)) = bp;
    while ((*(volatile int *)(0x10002010)) < 0) {
    }
    *((volatile unsigned int *)0x1000B410) = madr;
    *((volatile unsigned int *)0x1000B430) = tadr;
    *((volatile unsigned int *)0x1000B420) = qwc;
    if (stream->queuedSct != 0) {
        setD4_CHCR_x001953E8(chcr);
    }
    (*(volatile int *)(0x10002010)) = stream->r60;
    stream->active = 1;
    SignalSema_x001953E8(stream->sema);
    return 1;
}
typedef struct SfdIpuEntry_x00195700 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00195700;
typedef struct SfdDmaTag_x00195700 {
    long long tag;
    long long pad;
} SfdDmaTag_x00195700;
typedef struct SfdIpuStream_x00195700 {
    void *base;
    SfdDmaTag_x00195700 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00195700 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00195700;
int DeleteSema_x00195700(int sema) __asm__("DeleteSema");
extern int DeleteSema_x00195700(int sema) __asm__("DeleteSema");
void setD4_CHCR_x00195700(unsigned int chcr) __asm__("func_00194CE0");
int func_00195700_x00195700(SfdIpuStream_x00195700 *stream) __asm__("func_00195700");
/* viBufDelete: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00195700_x00195700(SfdIpuStream_x00195700 *stream) {
    setD4_CHCR_x00195700(5);
    *((volatile unsigned int *)0x1000B420) = 0;
    *((volatile unsigned int *)0x1000B410) = 0;
    *((volatile unsigned int *)0x1000B430) = 0;
    DeleteSema_x00195700(stream->sema);
    return 1;
}
typedef struct SfdIpuEntry_x00195758 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00195758;
typedef struct SfdDmaTag_x00195758 {
    long long tag;
    long long pad;
} SfdDmaTag_x00195758;
typedef struct SfdIpuStream_x00195758 {
    void *base;
    SfdDmaTag_x00195758 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00195758 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00195758;
int SignalSema_x00195758(int sema) __asm__("SignalSema");
int WaitSema_x00195758(int sema) __asm__("WaitSema");
void func_00195758_x00195758(SfdIpuStream_x00195758 *stream) __asm__("func_00195758");
/* viBufFlush: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00195758_x00195758(SfdIpuStream_x00195758 *stream) {
    WaitSema_x00195758(stream->sema);
    stream->restBytes = (stream->restBytes + 2051) / 2048 * 2048;
    SignalSema_x00195758(stream->sema);
}
void func_001957A8(s32 arg0) {
    D_00426B18 = arg0;
}
s32 func_001957B8(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFC8) != 0;
}
void func_001957C8(void) {
    if (D_00426B18 != 0) {
        func_00107AF0();
        func_00178F48(&D_004929F8, 0, 0x48);
    }
}
void func_00195810_x00195810(u8 *a0, s32 *a1, s32 *a2, s32 *a3, s32 *t0) __asm__("func_00195810");
void func_00195810_x00195810(u8 *a0, s32 *a1, s32 *a2, s32 *a3, s32 *t0) {
    s32 *p;

    p = (s32 *)(*(u8 **)(a0 + 0x1C70) + 0x1038);
    *a1 = p[6];
    *a3 = p[3] << 11;
    *a2 = (((p[3] + p[4]) << 11) + p[5]) % p[6];
    *t0 = (p[4] << 11) + p[5];
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195878);
s32 func_00195A90(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x109C);
}
typedef struct { u64 v; } __attribute__((packed)) U64P_x00195AA0;
extern s32 D_00492A40_x00195AA0 __asm__("D_00492A40");
extern U64P_x00195AA0 D_00492A48_x00195AA0 __asm__("D_00492A48");
void func_0018D650_x00195AA0(u8 *a0, s32 a1) __asm__("func_0018D650");
s32 func_00195AA0_x00195AA0(s32 a0, U64P_x00195AA0 *a1, u8 *a2) __asm__("func_00195AA0");
s32 func_00195AA0_x00195AA0(s32 a0, U64P_x00195AA0 *a1, u8 *a2) {
    D_00492A40_x00195AA0 = 1;
    D_00492A48_x00195AA0 = *a1;
    *(U64P_x00195AA0 *)(*(u8 **)(a2 + 0x1C70) + 0x1098) = *a1;
    func_0018D650_x00195AA0(a2, 0xFF000F40);
    return 1;
}
typedef struct SfdIpuEntry_x00195B08 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00195B08;
typedef struct SfdDmaTag_x00195B08 {
    long long tag;
    long long pad;
} SfdDmaTag_x00195B08;
typedef struct SfdIpuStream_x00195B08 {
    void *base;
    SfdDmaTag_x00195B08 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00195B08 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00195B08;
void viBufBeginPut_x00195B08(SfdIpuStream_x00195B08 *stream, char **first, int *firstSize, char **second, int *secondSize) __asm__("func_00194F28");
void viBufEndPut_x00195B08(SfdIpuStream_x00195B08 *stream, int bytes) __asm__("func_00195018");
int copy2area_x00195B08(char *buf, int size, char *dst, int cap, char *src, int pos, char *data, int len) __asm__("func_00195E68");
void viBufEndPut_x00195B08(SfdIpuStream_x00195B08 *stream, int bytes) __asm__("func_00195018");
int copy2area_x00195B08(char *buf, int size, char *dst, int cap, char *src, int pos, char *data, int len) __asm__("func_00195E68");
void viBufBeginPut_x00195B08(SfdIpuStream_x00195B08 *stream, char **first, int *firstSize, char **second, int *secondSize) __asm__("func_00194F28");
int func_00195B08_x00195B08(SfdIpuStream_x00195B08 *stream, char *src, int pos) __asm__("func_00195B08");
/* sfmpvp_PutVibuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00195B08_x00195B08(SfdIpuStream_x00195B08 *stream, char *src, int pos) {
    char *first;
    int firstSize;
    char *second;
    int secondSize;
    int result;
    viBufBeginPut_x00195B08(stream, &first, &firstSize, &second, &secondSize);
    result = copy2area_x00195B08((char *)((((unsigned int)first) & 0x0FFFFFFF) | 0x20000000), firstSize, (char *)((((unsigned int)second) & 0x0FFFFFFF) | 0x20000000), secondSize, src, pos, 0, 0);
    viBufEndPut_x00195B08(stream, result);
    return result;
}
s32 func_001950E8_x00195BA8(void *) __asm__("func_001950E8");
s32 func_00195B08_x00195BA8(void *, s32 *, s32) __asm__("func_00195B08");
extern s32 D_00467558_x00195BA8 __asm__("D_00467558");
s32 func_00195BA8_x00195BA8(s32 arg0, s32 arg1, u8 *arg2) __asm__("func_00195BA8");
s32 func_00195BA8_x00195BA8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_v0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_v0 = *(s32 *)((u8 *)arg2 + 0x1C70);
    temp_s0 = temp_v0 + 0x1038;
    temp_s1 = temp_v0 + 0xFC8;
    func_001950E8_x00195BA8(temp_s0);
    if ((*(s32 *)((u8 *)temp_s1 + 0x14) != 0) && (*(s32 *)((u8 *)temp_s0 + 0x10) == 0)) {
        *(s32 *)((u8 *)temp_s1 + 0x18) = 1;
        func_00195B08_x00195BA8(temp_s0, &D_00467558_x00195BA8, 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) *(s32 *)((u8 *)temp_s0 + 0x18);
        func_001950E8_x00195BA8(temp_s0);
    }
    return 1;
}
s32 func_001952E8_x00195C28(s32 a0) __asm__("func_001952E8");
s32 func_00195C28_x00195C28(s32 a0, s32 a1, u8 *a2) __asm__("func_00195C28");
s32 func_00195C28_x00195C28(s32 a0, s32 a1, u8 *a2) {
    func_001952E8_x00195C28(*(s32 *)(a2 + 0x1C70) + 0x1038);
    return 1;
}
s32 func_001953E8_x00195C50(s32 a0) __asm__("func_001953E8");
s32 func_00195C50_x00195C50(s32 a0, s32 a1, u8 *a2) __asm__("func_00195C50");
s32 func_00195C50_x00195C50(s32 a0, s32 a1, u8 *a2) {
    func_001953E8_x00195C50(*(s32 *)(a2 + 0x1C70) + 0x1038);
    return 1;
}
s32 func_00107C88_x00195C78(s32) __asm__("func_00107C88");
s32 func_00195700_x00195C78(s32) __asm__("func_00195700");
s32 func_001957B8_x00195C78() __asm__("func_001957B8");
s32 func_00195D00_x00195C78(void *) __asm__("func_00195D00");
s32 func_00197EB8_x00195C78() __asm__("func_00197EB8");
s32 sceMpegDelete_x00195C78(s32) __asm__("sceMpegDelete");
void func_00195C78_x00195C78(u8 *arg0) __asm__("func_00195C78");
void func_00195C78_x00195C78(u8 *arg0)
{
  s32 temp_a0;
  s32 temp_s0;
  if (func_001957B8_x00195C78() == 0)
  {
    goto block_6;
  }
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1C70));
  temp_a0 = temp_s0 + 0x1038;
  func_00195700_x00195C78(temp_a0);
  ;
  if (1)
  {
    if (1 == func_00197EB8_x00195C78())
    {
      goto block_4;
    }
    sceMpegDelete_x00195C78(temp_s0 + 0xFF0);
    return;
    block_4:
    func_00107C88_x00195C78(temp_s0 + 0xFF0);

    func_00195D00_x00195C78(arg0);
    return;
    block_6:
    return;

  }
}
void func_00195D00(u8 *arg0) {
    func_00178C68(&D_004929F8, *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, 0x48);
}
void func_00195D28(u8 *arg0) {
    func_00178C68(*(s32 *)((u8 *)arg0 + 0x1C70) + 0xFF0, &D_004929F8, 0x48);
}
s32 func_001957B8_x00195D50() __asm__("func_001957B8");
s32 func_00195B08_x00195D50(s32, s32, s32) __asm__("func_00195B08");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00195D50");
s32 func_00195D50_x00195D50(u8 *arg0, s32 arg1, s32 arg2) {
    if (func_001957B8_x00195D50() == 0) {
        return arg2;
    }
    return func_00195B08_x00195D50(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1, arg2);
}
s32 func_00195068_x00195DC0(s32, s32) __asm__("func_00195068");
s32 func_001957B8_x00195DC0() __asm__("func_001957B8");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) __asm__("func_00195DC0");
s32 func_00195DC0_x00195DC0(u8 *arg0, s32 arg1) {
    if (func_001957B8_x00195DC0() == 0) {
        return arg1;
    }
    return func_00195068_x00195DC0(*(s32 *)((u8 *)arg0 + 0x1C70) + 0x1038, arg1);
}
s32 func_00195758_x00195E20(s32) __asm__("func_00195758");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1) __asm__("func_00195E20");
void func_00195E20_x00195E20(u8 *arg0, s32 arg1)
{
  s32 temp_s0;
  u8 *temp_s0_2;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1C70));
  func_00195758_x00195E20(temp_s0 + 0x1038);
  temp_s0_2 = temp_s0 + 0xFC8;
  *((s32 *) (((u8 *) temp_s0_2) + 0x20)) = arg1;
  *((s32 *) (((u8 *) temp_s0_2) + 0x1C)) = 1;
}
typedef unsigned int size_t_x00195E68;
void *memcpy_x00195E68(void *, const void *, size_t_x00195E68) __asm__("func_00125740");
int func_00195E68_x00195E68(char *buf, int size, char *dst, int cap, char *src, int pos, char *data, int len) __asm__("func_00195E68");
/* copy2area: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00195E68_x00195E68(char *buf, int size, char *dst, int cap, char *src, int pos, char *data, int len) {
    int end = pos + len;
    int r = 0;
    if (size + cap >= end) {
        if (pos >= size) {
            memcpy_x00195E68(buf, src, size);
            memcpy_x00195E68(dst, src + size, pos - size);
            memcpy_x00195E68(dst + pos - size, data, len);
        } else {
            int room = size - pos;
            if (len >= room) {
                memcpy_x00195E68(buf, src, pos);
                memcpy_x00195E68(buf + pos, data, room);
                memcpy_x00195E68(dst, data + size - pos, len - room);
            } else {
                memcpy_x00195E68(buf, src, pos);
                memcpy_x00195E68(buf + pos, data, len);
            }
        }
        r = end;
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00195F98);
s32 func_001960E0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0xFF8);
}
typedef struct { s32 x0; s32 a; s32 b; s32 c; u8 last[3]; } St_60F0_x001960F0;
u8 *func_0017B5B8_x001960F0(u8 *, s32, s32) __asm__("func_0017B5B8");
void func_001960F0_x001960F0(u8 *ply, u8 *buf, s32 len) __asm__("func_001960F0");
void func_001960F0_x001960F0(u8 *ply, u8 *buf, s32 len)
{
    St_60F0_x001960F0 *st;
    u8 tmp[6];
    s32 i;
    u8 *p;

    st = (St_60F0_x001960F0 *)(*(u8 **)(ply + 0x1C70) + 0xFC8);
    st->c += st->a;
    st->a = st->b;
    st->b = 0;
    tmp[0] = st->last[0];
    tmp[1] = st->last[1];
    tmp[2] = st->last[2];
    tmp[3] = buf[0];
    tmp[4] = buf[1];
    tmp[5] = buf[2];
    for (i = 0; i < ((len < 4) ? len : 3); i++) {
        if (tmp[i] == 0 && tmp[i + 1] == 0 && tmp[i + 2] == 1 && tmp[i + 3] == 0) {
            st->b++;
            break;
        }
    }
    if (len < 3) {
        st->last[0] = tmp[len];
        st->last[1] = tmp[len + 1];
        st->last[2] = tmp[len + 2];
    } else {
        st->last[0] = buf[len - 3];
        st->last[1] = buf[len - 2];
        st->last[2] = buf[len - 1];
    }
    while (len >= 4) {
        p = func_0017B5B8_x001960F0(buf, len, 4);
        if (p == 0) {
            break;
        }
        st->b++;
        p += 4;
        len -= p - buf;
        buf = p;
    }
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p16_06583c_0_x __asm__("b3a06583c_0");
extern int b3p16_06583c_1_x __asm__("b3a06583c_1");
extern int b3p16_06583c_2_x __asm__("b3a06583c_2");
extern int b3p16_06583c_3_x __asm__("b3a06583c_3");
extern int b3p32_06583c_0_x __asm__("b3cse_asmpad_06583c_0_xx");
void func_00196288(u8 *arg0) {
    u8 *temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFC8;
    *(s32 *)((u8 *)temp_v1 + 0xC) = (s32) (*(s32 *)((u8 *)temp_v1 + 0xC) - 1);
}
s32 func_001957B8_x001962A0(void *obj) __asm__("func_001957B8");
s32 func_001962A0_x001962A0(void *obj) __asm__("func_001962A0");
s32 func_001962A0_x001962A0(void *obj) {
    u8 *base;
    s32 *q;

    if (func_001957B8_x001962A0(obj) == 0) {
        return 1;
    }
    base = *(u8 **)((u8 *)obj + 0x1C70);
    q = (s32 *)(base + 0xFC8);
    if (q[8] == 1) {
        return 1;
    }
    if (q[3] < 3) {
        return 0;
    }
    return 1;
}
s32 func_001962F8(void) {
    return 0x48;
}
s32 func_00196300(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000141);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x50);
}
typedef unsigned char Uint8_x00196350;
typedef signed char Sint8_x00196350;
typedef signed short Sint16_x00196350;
typedef unsigned int Uint32_x00196350;
typedef signed int Sint32_x00196350;
typedef signed long long Sint64_x00196350;
typedef char Char8_x00196350;
typedef struct SJ_OBJ_x00196350 *SJ_x00196350;
typedef struct {
        Uint8_x00196350 *data;
        Sint32_x00196350 len;
} SJCK_x00196350;
typedef struct {
        Uint8_x00196350 data[16];
} SJUUID_x00196350;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00196350 sj);
        const SJUUID_x00196350 *(*GetUuid)(SJ_x00196350 sj);
        void (*Reset)(SJ_x00196350 sj);
        void (*GetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, Sint32_x00196350 nbyte, SJCK_x00196350 *ck);
        void (*UngetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, SJCK_x00196350 *ck);
        void (*PutChunk)(SJ_x00196350 sj, Sint32_x00196350 id, SJCK_x00196350 *ck);
        Sint32_x00196350 (*GetNumData)(SJ_x00196350 sj, Sint32_x00196350 id);
        Sint32_x00196350 (*IsGetChunk)(SJ_x00196350 sj, Sint32_x00196350 id, Sint32_x00196350 nbyte, Sint32_x00196350 *rbyte);
        void (*EntryErrFunc)(SJ_x00196350 sj, void (*func)(void *obj, Char8_x00196350 *msg), void *obj);
} SJ_IF_x00196350;
struct SJ_OBJ_x00196350 {
        SJ_IF_x00196350 *vtbl;
};
typedef struct SFD_OBJ_x00196350 *SFD_x00196350;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00196350 rsv1;
        Sint32_x00196350 rsv2;
} SFUO_CH_x00196350;
typedef struct {
        Sint32_x00196350 nch;
        SFUO_CH_x00196350 ch[3];
} SFUO_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Sint32_x00196350 (*SetOutPan)(SFD_x00196350 sfd, Sint32_x00196350 ch, Sint32_x00196350 pan);
        Sint32_x00196350 (*GetOutPan)(SFD_x00196350 sfd, Sint32_x00196350 ch);
        Sint32_x00196350 (*SetOutVol)(SFD_x00196350 sfd, Sint32_x00196350 vol);
        Sint32_x00196350 (*GetOutVol)(SFD_x00196350 sfd);
        void (*SetSpeed)(SFD_x00196350 sfd, Sint32_x00196350 speed);
        Sint32_x00196350 x18;
} SFAOAP_x00196350;
typedef struct {
        Uint8_x00196350 pad0[0xB8];
        Sint32_x00196350 tottime;
        Sint32_x00196350 tunit;
        Uint8_x00196350 padc0[0x150 - 0xC0];
        Sint64_x00196350 scr_base;
        Sint64_x00196350 scr_ofst;
        Sint32_x00196350 pad160;
        Sint32_x00196350 ctime;
        Sint32_x00196350 ctime_idx;
        Sint32_x00196350 ctime_que[32];
        Sint32_x00196350 tot_last;
        Sint32_x00196350 pad1F0;
        Sint32_x00196350 que_wr;
        Sint32_x00196350 que_rd;
        Sint32_x00196350 tot_que[32];
} SFCON_x00196350;
typedef struct {
        Sint32_x00196350 type;
        Sint32_x00196350 drop;
        Sint32_x00196350 hour;
        Sint32_x00196350 min;
        Sint32_x00196350 sec;
        Sint32_x00196350 frm;
        Sint32_x00196350 frm2;
        Sint16_x00196350 x1c;
        Sint16_x00196350 field;
} SFTIM_TC_x00196350;
typedef struct {
        Sint32_x00196350 valid;
        SFTIM_TC_x00196350 tc;
        Sint32_x00196350 val;
        Sint32_x00196350 unit;
} SFTIM_TTU_x00196350;
typedef struct {
        Sint64_x00196350 pts;
        Uint32_x00196350 pos;
        Uint32_x00196350 len;
} SFPTS_ENT_x00196350;
typedef struct {
        SFPTS_ENT_x00196350 *ent;
        Sint32_x00196350 num;
        Sint32_x00196350 cnt;
        Sint32_x00196350 wr;
        Sint32_x00196350 rd;
} SFPTS_QUE_x00196350;
typedef struct {
        Sint32_x00196350 raw[0x20];
} SFD_VFRM_INF_x00196350;
typedef struct {
        void *frm;
        Sint32_x00196350 x04;
        SFD_VFRM_INF_x00196350 inf;
} SFD_VFRM_x00196350;
typedef struct {
        Sint32_x00196350 kind;
        SJ_x00196350 sj;
        Uint32_x00196350 ofst;
        Sint32_x00196350 size;
        Sint32_x00196350 xsize;
        Sint32_x00196350 x14;
} SFBUF_SUP_x00196350;
typedef struct {
        SFBUF_SUP_x00196350 sup;
        Uint8_x00196350 *dlm_pos;
        Sint32_x00196350 dlm_len;
        Sint32_x00196350 wtot;
        Sint32_x00196350 rtot;
        SFPTS_QUE_x00196350 ptsque;
} SFBUF_RING_x00196350;
typedef struct {
        Sint32_x00196350 mode;
        Sint32_x00196350 used;
        Sint32_x00196350 prepflg;
        Sint32_x00196350 termflg;
        union {
                SFBUF_RING_x00196350 ring;
                struct {
                        Uint32_x00196350 adr;
                        Sint32_x00196350 size;
                        Sint32_x00196350 x18;
                        Sint32_x00196350 x1c;
                        SFD_VFRM_x00196350 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00196350 adr;
                        Sint32_x00196350 size;
                        Sint32_x00196350 rsv[7];
                        Sint32_x00196350 rsv2[3];
                } aout;
                SFUO_CH_x00196350 uoch[3];
        } u;
        Sint32_x00196350 in_tr;
        Sint32_x00196350 out_tr;
        Sint32_x00196350 rsv[8];
} SFBUF_WORK_x00196350;
typedef Sint32_x00196350 (*SFD_TR_FUNC_x00196350)();
typedef struct {
        Sint32_x00196350 prepflg;
        Sint32_x00196350 termflg;
        void *hn;
        SFD_TR_FUNC_x00196350 *trif;
        Sint32_x00196350 bufin;
        Sint32_x00196350 bufout;
        Sint32_x00196350 bufout2;
        Sint32_x00196350 bufout3;
        Sint32_x00196350 x20;
        Uint8_x00196350 pad24[0x44 - 0x24];
} SFD_TR_x00196350;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00196350 cwidth;
        Sint16_x00196350 ywidth;
} SFMPV_PLANE_x00196350;
typedef struct {
        void *buf;
        Sint32_x00196350 len;
} SFMPV_PICUSR_x00196350;
typedef struct {
        Sint32_x00196350 stat;
        Sint32_x00196350 lock;
        void *buf;
        SFTIM_TTU_x00196350 ttu;
        Sint32_x00196350 ftime;
        Sint32_x00196350 tunit;
        Sint32_x00196350 ndct;
        Sint32_x00196350 nbyte;
        Sint32_x00196350 gopno;
        Sint32_x00196350 x4c;
        Sint32_x00196350 x50;
        SFMPV_PICUSR_x00196350 *picusr;
        Sint32_x00196350 pa_width;
        Sint32_x00196350 pa_height;
        Sint32_x00196350 pa_mb_width;
        Sint32_x00196350 pa_mb_height;
        Sint32_x00196350 pa_frame_rate;
        Sint32_x00196350 tmpref;
        Sint32_x00196350 pa_pic_type;
        Sint32_x00196350 pa_tc_drop;
        Sint32_x00196350 pa_tc_hour;
        Sint32_x00196350 pa_tc_min;
        Sint32_x00196350 pa_tc_sec;
        Sint32_x00196350 pa_tc_pic;
        Sint32_x00196350 x88;
        Sint32_x00196350 x8c;
        Sint32_x00196350 pa_x90[3];
        Sint32_x00196350 pa_x9c[3];
        Sint16_x00196350 pa_xa8;
        Sint16_x00196350 pa_xaa;
        Sint8_x00196350 pa_xac;
        Sint8_x00196350 pa_xad;
        Sint8_x00196350 pa_xae;
        Sint8_x00196350 pa_xaf;
        Sint8_x00196350 pa_xb0;
        Sint8_x00196350 pa_xb1;
        Sint8_x00196350 pa_xb2;
        Sint8_x00196350 pa_xb3;
        Sint8_x00196350 pa_xb4;
        Sint8_x00196350 pa_xb5;
        Sint8_x00196350 pa_xb6;
        Sint8_x00196350 pa_xb7;
        Sint8_x00196350 pa_xb8;
        Sint8_x00196350 pa_xb9;
        Sint8_x00196350 pa_xba;
        Sint8_x00196350 pa_xbb;
        Sint8_x00196350 pa_xbc;
        Uint8_x00196350 padbd[0xD8 - 0xBD];
        Sint64_x00196350 pts;
} SFMPV_FRM_x00196350;
typedef struct {
        Sint32_x00196350 cwidth;
        Sint32_x00196350 cheight;
        Sint32_x00196350 width;
        Sint32_x00196350 height;
        Sint32_x00196350 x10;
        Sint32_x00196350 max_width;
        Sint32_x00196350 max_height;
        Sint32_x00196350 nfrm;
        Sint32_x00196350 x20;
} SFMPV_PARA_x00196350;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00196350 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00196350 *curfrm;
        Sint32_x00196350 picstat;
        Sint32_x00196350 dlmmask;
        Sint32_x00196350 termflg;
        Sint32_x00196350 gopstat;
        Sint32_x00196350 nskip;
        Sint32_x00196350 nconcat;
        Uint8_x00196350 picatr[0x80];
        Sint32_x00196350 last_ngop;
        Sint32_x00196350 newgop;
        Sint32_x00196350 vbvsiz;
        Sint32_x00196350 pts_tmpref;
        Sint32_x00196350 pts_ofst;
        Sint32_x00196350 pts_max;
        Sint32_x00196350 pad124;
        SFPTS_ENT_x00196350 ptsent;
        Sint32_x00196350 refidx[2];
        SFMPV_PLANE_x00196350 rfbuf[2];
        SFMPV_FRM_x00196350 *ref[2];
        SFMPV_FRM_x00196350 *pendfrm;
        Sint32_x00196350 skipret;
        Sint32_x00196350 dlmwait;
        Sint32_x00196350 tmpref_adj;
        Sint32_x00196350 nfrm;
        Sint32_x00196350 pad17c;
        SFMPV_FRM_x00196350 frm[16];
        void *picusr_buf;
        Sint32_x00196350 picusr_num;
        Sint32_x00196350 picusr_siz;
        Uint8_x00196350 *picusr_dat;
        Sint32_x00196350 picusr_len;
        SFMPV_PICUSR_x00196350 picusr[16];
        Sint32_x00196350 pad1014;
        Sint64_x00196350 pts;
} SFMPV_WORK_x00196350;
typedef struct {
        Sint32_x00196350 raw[0x2A];
} SFD_PLYINF_x00196350 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00196350 code);
        void *obj;
        Sint32_x00196350 code;
        Sint32_x00196350 x0c;
        Sint32_x00196350 x10;
} SFLIB_ERRINF_x00196350;
typedef struct {
        Sint32_x00196350 codec;
        Sint32_x00196350 layer;
        Sint32_x00196350 chnum;
        Sint32_x00196350 smphz;
} SFHDS_AUD_x00196350;
typedef struct {
        Sint32_x00196350 codec;
        Sint32_x00196350 bitrate;
        Sint32_x00196350 picw;
        Sint32_x00196350 pich;
        Sint32_x00196350 picrate;
        Sint32_x00196350 ftr_eff;
        Sint32_x00196350 ftr_coltype;
        Sint32_x00196350 ftr_pictype;
        Sint32_x00196350 ftr_fixflg;
        Sint32_x00196350 ftr_shcfixflg;
        Sint32_x00196350 ftr_expand;
        Sint32_x00196350 ftr_gopn;
        Sint32_x00196350 ftr_gopm;
} SFHDS_VID_x00196350;
typedef struct {
        Sint32_x00196350 valid;
        Sint32_x00196350 ver_major;
        Sint32_x00196350 ver_minor;
        Sint32_x00196350 byterate;
        Sint32_x00196350 hdrsiz;
        Sint32_x00196350 packtype;
        Sint32_x00196350 pketsizlen;
        Sint32_x00196350 packsiz;
        Sint32_x00196350 numelem_tot;
        Sint32_x00196350 numelem_aud;
        Sint32_x00196350 numelem_vid;
        Sint32_x00196350 numelem_prv;
        Sint32_x00196350 maxplylen_aud;
        Sint32_x00196350 maxplylen_vid;
        Sint32_x00196350 maxfrmnum;
        Sint32_x00196350 stmid_prv1;
        Sint32_x00196350 stmid_prv2;
        Sint32_x00196350 stmid_aud;
        Sint32_x00196350 stmid_vid;
        SFHDS_AUD_x00196350 aud;
        SFHDS_VID_x00196350 vid;
        Sint32_x00196350 rawsiz;
        Uint8_x00196350 raw[0x800];
} SFHDS_FHD_x00196350;
typedef struct {
        Uint8_x00196350 data[2][0xB0];
        Sint32_x00196350 len[2];
} SFSEE_SYSHD_x00196350;
typedef struct {
        Sint32_x00196350 analyzed;
        Sint32_x00196350 ncount;
        Sint32_x00196350 tscale;
        Sint32_x00196350 nvid;
        Sint32_x00196350 naud;
        Sint32_x00196350 pad14;
        Sint64_x00196350 scr_base;
        Sint64_x00196350 pts_min;
        Sint32_x00196350 stmid_vid;
        Sint32_x00196350 stmid_aud;
        SFSEE_SYSHD_x00196350 syshd;
} SFSEE_SHDR_x00196350;
typedef struct {
        Sint32_x00196350 analyzed;
        Sint32_x00196350 ncount;
        Sint32_x00196350 tscale;
        SFHDS_FHD_x00196350 fhd;
        SFSEE_SHDR_x00196350 shdr;
        Uint8_x00196350 pada38[0xAD0 - 0xA38];
        Sint32_x00196350 a1hdr;
        Sint32_x00196350 a1ncount;
        Sint32_x00196350 a1tscale;
        Uint8_x00196350 padadc[0xD0C - 0xADC];
        Sint32_x00196350 a2hdr;
        Sint32_x00196350 a2ncount;
        Sint32_x00196350 a2tscale;
        Uint8_x00196350 padd18[0xDA8 - 0xD18];
        Sint32_x00196350 rate;
        Sint32_x00196350 fsize_est;
        Sint32_x00196350 tot_est;
        Sint32_x00196350 tunit_est;
        Sint32_x00196350 av_a;
        Sint32_x00196350 av_b;
        Sint32_x00196350 paddc0;
        Sint32_x00196350 fsize;
        Sint32_x00196350 tottime;
        Sint32_x00196350 tunit;
        Sint32_x00196350 byterate;
        Sint32_x00196350 seekpos;
} SFSEE_WORK_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Sint32_x00196350 pos;
        Sint32_x00196350 x08;
} SFSEE_REQ_x00196350;
typedef struct {
        Sint32_x00196350 bsize;
        Sint32_x00196350 xsize;
        void *buf;
        Sint32_x00196350 maxnch;
        Sint32_x00196350 x10;
        Sint32_x00196350 worksize;
        void *work;
} SFADXT_PARA_x00196350;
typedef struct {
        void *adxt;
        SJ_x00196350 sj;
        SFADXT_PARA_x00196350 para;
        Sint32_x00196350 tcount;
        Sint32_x00196350 tunit;
        Sint32_x00196350 pause;
        Sint32_x00196350 discard;
        Sint32_x00196350 seekflg;
        Sint32_x00196350 smplofst;
        void (*func)(SFD_x00196350 sfd, Uint8_x00196350 *data, Sint32_x00196350 len, Sint32_x00196350 *nbyte);
        Sint32_x00196350 x40;
        Sint32_x00196350 svrfreq;
        Sint32_x00196350 totbyte;
        Sint32_x00196350 x4c;
} SFADXT_WORK_x00196350;
typedef struct {
        SFSEE_WORK_x00196350 *wk;
        SFSEE_REQ_x00196350 req;
} SFSEE_HN_x00196350;
typedef struct {
        Sint32_x00196350 x00;
        Uint32_x00196350 adr;
        Sint32_x00196350 size[7];
        Sint32_x00196350 x24;
        Sint32_x00196350 unit;
        Sint32_x00196350 x2c;
        Sint32_x00196350 x30;
        Sint32_x00196350 x34;
        Sint32_x00196350 x38;
        void *hnwork;
        Sint32_x00196350 hnwksiz;
} SFD_CREPRM_x00196350;
typedef struct {
        void *x00;
        Sint32_x00196350 x04;
        Sint32_x00196350 x08;
} SFPLY_PTSM_x00196350;
typedef struct {
        Sint64_x00196350 sum;
        Sint64_x00196350 min;
        Sint64_x00196350 max;
        Sint32_x00196350 cnt;
} SFTMR_TSUM_x00196350;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00196350 nvid;
        Sint32_x00196350 naud;
        Sint32_x00196350 x0c;
        Sint64_x00196350 pts_min;
        Sint64_x00196350 pts_min2;
        Sint32_x00196350 concat_cnt;
        Sint32_x00196350 last_vid;
        Sint32_x00196350 last_aud;
        Sint32_x00196350 first_vid;
        Sint32_x00196350 first_aud;
        Sint32_x00196350 cur_vid;
        Sint32_x00196350 cur_aud;
        Sint32_x00196350 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00196350 stmid);
        void *outobj;
        Sint32_x00196350 skip;
        Sint32_x00196350 x15c;
        Sint32_x00196350 x160;
        Sint32_x00196350 x164;
} SFMPS_WORK_x00196350;
typedef struct SFD_OBJ_x00196350 {
        SFD_CREPRM_x00196350 prm;
        Sint32_x00196350 chg_flg;
        Sint32_x00196350 stat;
        Sint32_x00196350 req;
        Sint32_x00196350 pause_sw;
        Sint32_x00196350 pause_cnt;
        Uint8_x00196350 pad58[0x74 - 0x58];
        Sint32_x00196350 pad74;
        SFHDS_FHD_x00196350 fhd;
        Sint32_x00196350 x90c;
        Sint32_x00196350 x910;
        Sint32_x00196350 x914;
        Sint32_x00196350 x918;
        Sint32_x00196350 x91c;
        Sint32_x00196350 picrate;
        Sint32_x00196350 x924;
        Sint32_x00196350 x928;
        Sint32_x00196350 x92c;
        Sint32_x00196350 numelem_aud;
        Sint32_x00196350 numelem_vid;
        Sint32_x00196350 numelem_prv;
        Sint32_x00196350 x93c;
        Sint32_x00196350 x940;
        Sint32_x00196350 x944;
        Sint32_x00196350 x948;
        Sint32_x00196350 x94c;
        SFD_PLYINF_x00196350 plyinf;
        SFLIB_ERRINF_x00196350 err;
        Sint32_x00196350 cond[100];
        Sint32_x00196350 cond_def[100];
        Uint8_x00196350 padD24[4];
        SFCON_x00196350 con;
        Uint8_x00196350 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00196350))];
        Uint8_x00196350 tst[0x1C0];
        Uint8_x00196350 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00196350 ptsm;
        Uint8_x00196350 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00196350 buf[8];
        SFD_VFRM_x00196350 vfrm[16];
        SFD_TR_x00196350 tr[9];
        Sint32_x00196350 pad218c;
        SFMPS_WORK_x00196350 mps;
        Uint8_x00196350 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00196350 mpv;
        SFADXT_WORK_x00196350 adxt;
        Uint8_x00196350 pad3410[0x3474 - 0x3410];
        SFAOAP_x00196350 aoap;
        SFUO_x00196350 uo_tbl;
        Sint32_x00196350 pad34c4;
        SFSEE_HN_x00196350 see;
        SFTMR_TSUM_x00196350 tsum[6];
} SFD_OBJ_x00196350;
Sint32_x00196350 SFLIB_SetErr_x00196350(SFD_x00196350 sfd, Sint32_x00196350 code) __asm__("func_0018D650");
Sint32_x00196350 SFLIB_CheckHn_x00196350(SFD_x00196350 sfd) __asm__("func_0018D870");
Sint32_x00196350 SFPL2_Pause_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw) __asm__("func_001963E0");
Sint32_x00196350 func_00196350_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw) __asm__("func_00196350");
/* SFD_Pause: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_pl2.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00196350 func_00196350_x00196350(SFD_x00196350 sfd, Sint32_x00196350 sw)
{
        Sint32_x00196350 psw;
        Sint32_x00196350 mode;
        Sint32_x00196350 ret;
        if (SFLIB_CheckHn_x00196350(sfd) != 0) {
                return SFLIB_SetErr_x00196350(0, 0xFF000142);
        }
        psw = sfd->pause_sw;
        if (sw == 0) {
                if (psw == 0) {
                        return 0;
                }
                mode = 0;
        } else {
                if (psw == 0) {
                        mode = 1;
                } else {
                        mode = 2;
                }
        }
        sfd->pause_sw = sw;
        ret = SFPL2_Pause_x00196350(sfd, mode);
        sfd->chg_flg = 1;
        return ret;
}
typedef struct SfdSj_x001963E0____________ SfdSj_x001963E0____________;
typedef struct SfdSjChunk_x001963E0____________ {
    char *data;
    int len;
} SfdSjChunk_x001963E0____________;
typedef struct SfdSjVtbl_x001963E0____________ {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001963E0____________ *sj);
    int (*getUuid)(SfdSj_x001963E0____________ *sj);
    void (*reset)(SfdSj_x001963E0____________ *sj);
    void (*getChunk)(SfdSj_x001963E0____________ *sj, int id, int n, SfdSjChunk_x001963E0____________ *ck);
    void (*ungetChunk)(SfdSj_x001963E0____________ *sj, int id, SfdSjChunk_x001963E0____________ *ck);
    void (*putChunk)(SfdSj_x001963E0____________ *sj, int id, SfdSjChunk_x001963E0____________ *ck);
    int (*getNumData)(SfdSj_x001963E0____________ *sj, int id);
} SfdSjVtbl_x001963E0____________;
struct SfdSj_x001963E0____________ {
    SfdSjVtbl_x001963E0____________ *vtbl;
};
struct SfdSj_x001963E0____________;
struct SfdRecSlot_x001963E0____________;
struct SfdRec_x001963E0____________;
struct SfdMpvCond_x001963E0____________;
struct SfdPlanes_x001963E0____________;
struct SfdFrameInfo_x001963E0____________;
struct SfdPly_x001963E0____________;
typedef int (*SfdTimeFn_x001963E0____________)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x001963E0____________ {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001963E0____________;
typedef struct SfdTimeRec_x001963E0____________ {
    int valid;
    SfdTimeCode_x001963E0____________ tc;
    int time;
    int unit;
} SfdTimeRec_x001963E0____________;
typedef struct SfdTst_x001963E0____________ {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x001963E0____________;
typedef struct SfdSyncTally_x001963E0____________ {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x001963E0____________;
typedef struct SfdSyncQueue_x001963E0____________ {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x001963E0____________;
typedef struct SfdFieldEntry_x001963E0____________ {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x001963E0____________;
typedef struct SfdPtsm_x001963E0____________ {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x001963E0____________;
typedef struct SfdHdrAudio_x001963E0____________ {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001963E0____________;
typedef struct SfdHdrMux_x001963E0____________ {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001963E0____________;
typedef struct SfdHdrVideo_x001963E0____________ {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001963E0____________;
typedef struct SfdHdrInf_x001963E0____________ {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001963E0____________ mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001963E0____________ audio;
    SfdHdrVideo_x001963E0____________ video;
    int size;
    char data[2048];
} SfdHdrInf_x001963E0____________;
typedef struct SfdMvInf_x001963E0____________ {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x001963E0____________;
typedef struct SfdPlyInf_x001963E0____________ {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x001963E0____________;
typedef void (*SfdErrFn_x001963E0____________)(void *obj, int code);
typedef struct SfdErrInf_x001963E0____________ {
    SfdErrFn_x001963E0____________ func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x001963E0____________;
typedef int (*SfdExtClockFn_x001963E0____________)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x001963E0____________)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x001963E0____________ {
    SfdTimeFn_x001963E0____________ timefn[6];
    SfdIsSkipFn_x001963E0____________ isSkipFn;
    SfdTimeCode_x001963E0____________ tc;
    SfdTimeRec_x001963E0____________ state;
    SfdTimeRec_x001963E0____________ best;
    SfdTimeRec_x001963E0____________ tot;
    SfdTimeRec_x001963E0____________ cur;
    SfdTimeRec_x001963E0____________ latest;
    SfdTimeRec_x001963E0____________ vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x001963E0____________ tally;
    SfdSyncQueue_x001963E0____________ queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x001963E0____________ clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x001963E0____________ tst;
    SfdFieldEntry_x001963E0____________ fields[64];
    SfdPtsm_x001963E0____________ ptsm;
    char pad1468[36];
} SfdTim_x001963E0____________;
enum {
    SFD_COND_VIDEO_x001963E0____________ = 5,
    SFD_COND_AUDIO_x001963E0____________ = 6,
    SFD_COND_KEEPSUP_x001963E0____________ = 8,
    SFD_COND_SYNCMODE_x001963E0____________ = 15,
    SFD_COND_ETIME_x001963E0____________ = 20,
    SFD_COND_ETUNIT_x001963E0____________ = 21,
    SFD_COND_LNKSTM_x001963E0____________ = 49,
    SFD_COND_SUPPLY_END_x001963E0____________ = 56,
    SFD_COND_DECODE_END_x001963E0____________ = 57,
    SFD_COND_DEMUX_SPLIT_x001963E0____________ = 59,
    SFD_COND_VIDEO_AUTO_OFF_x001963E0____________ = 79,
    SFD_COND_AUDIO_AUTO_OFF_x001963E0____________ = 80,
    SFD_COND_SYSHD_FN_x001963E0____________ = 85,
    SFD_COND_SYSHD_FN_OBJ_x001963E0____________ = 86,
    SFD_COND_NUM_x001963E0____________ = 100
};
typedef enum SfdBufFmt_x001963E0____________ {
    SFD_BUFFMT_0_x001963E0____________ = 0
} SfdBufFmt_x001963E0____________;
typedef enum SfdBufId_x001963E0____________ {
    SFD_BUF_NONE_x001963E0____________ = 8
} SfdBufId_x001963E0____________;
typedef struct SfdCrePrm_x001963E0____________ {
    struct SfdTrnConfig_x001963E0____________ *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x001963E0____________ bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x001963E0____________;
typedef struct SfdItem_x001963E0____________ {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x001963E0____________;
typedef struct SfdRing_x001963E0____________ {
    SfdItem_x001963E0____________ *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x001963E0____________;
typedef struct SfdBufInf_x001963E0____________ {
    char *data;
    struct SfdSj_x001963E0____________ *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x001963E0____________;
typedef struct SfdBufCur_x001963E0____________ {
    char *pos;
    int len;
} SfdBufCur_x001963E0____________;
typedef struct SfdBufDlm_x001963E0____________ {
    char *pos;
    char *end;
} SfdBufDlm_x001963E0____________;
typedef struct SfdBufRing_x001963E0____________ {
    SfdBufInf_x001963E0____________ sup;
    SfdBufDlm_x001963E0____________ dlm;
    int wtot;
    int rtot;
    SfdRing_x001963E0____________ ptsque;
} SfdBufRing_x001963E0____________;
typedef struct SfdBufAring_x001963E0____________ {
    SfdBufInf_x001963E0____________ sup;
    SfdBufCur_x001963E0____________ ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x001963E0____________;
typedef struct SfdUoch_x001963E0____________ {
    struct SfdSj_x001963E0____________ *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x001963E0____________;
typedef struct SfdBufEnt_x001963E0____________ {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x001963E0____________ ring;
        SfdBufAring_x001963E0____________ aring;
        SfdBufInf_x001963E0____________ vfrm;
        SfdUoch_x001963E0____________ uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x001963E0____________;
typedef int (*SfdTrnFn_x001963E0____________)();
typedef struct SfdTrnConfig_x001963E0____________ {
    SfdTrnFn_x001963E0____________ *fns[9];
} SfdTrnConfig_x001963E0____________;
typedef struct SfdMpsPrm_x001963E0____________ {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x001963E0____________ *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x001963E0____________;
typedef struct SfdAdxCfg_x001963E0____________ {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x001963E0____________;
typedef void (*SfdAdxStep_x001963E0____________)(struct SfdPly_x001963E0____________ *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x001963E0____________ {
    void *adxt;
    void *sj;
    SfdAdxCfg_x001963E0____________ cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x001963E0____________ step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x001963E0____________;
typedef struct SfdAoap_x001963E0____________ {
    int rna;
    void (*setOutPan)(struct SfdPly_x001963E0____________ *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x001963E0____________ *h, int ch);
    void (*setOutVol)(struct SfdPly_x001963E0____________ *h, int vol);
    int (*getOutVol)(struct SfdPly_x001963E0____________ *h);
    void (*setSpeed)(struct SfdPly_x001963E0____________ *h, int speed);
} SfdAoap_x001963E0____________;
typedef struct SfainfOut_x001963E0____________ {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x001963E0____________;
typedef struct SfainfList_x001963E0____________ {
    int nout;
    SfainfOut_x001963E0____________ out[3];
} SfainfList_x001963E0____________;
typedef struct SfdTrnSlot_x001963E0____________ {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x001963E0____________ *mps;
        struct SfdMpv_x001963E0____________ *mpv;
        SfdAdxCtx_x001963E0____________ *adxt;
        SfdAoap_x001963E0____________ *aoap;
        SfainfList_x001963E0____________ *uo;
    } hn;
    SfdTrnFn_x001963E0____________ *fns;
    SfdBufId_x001963E0____________ bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x001963E0____________;
typedef struct SfdTsum_x001963E0____________ {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x001963E0____________;
typedef struct SfdTmrInf_x001963E0____________ {
    SfdTsum_x001963E0____________ tsum[6];
} SfdTmrInf_x001963E0____________;
struct SfdSj_x001963E0____________;
typedef struct M2vErrInf_x001963E0____________ {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001963E0____________;
typedef struct Mpeg2Ext_x001963E0____________ {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001963E0____________;
typedef enum M2vFrameRate_x001963E0____________ {
    M2V_FRAME_RATE_FORBIDDEN_x001963E0____________ = 0
} M2vFrameRate_x001963E0____________;
typedef enum M2vPicType_x001963E0____________ {
    M2V_PICTYPE_I_x001963E0____________ = 1,
    M2V_PICTYPE_P_x001963E0____________ = 2,
    M2V_PICTYPE_B_x001963E0____________ = 3,
    M2V_PICTYPE_D_x001963E0____________ = 4
} M2vPicType_x001963E0____________;
typedef enum M2vPicStruct_x001963E0____________ {
    M2V_PICSTRUCT_TOP_FIELD_x001963E0____________ = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001963E0____________ = 2,
    M2V_PICSTRUCT_FRAME_x001963E0____________ = 3
} M2vPicStruct_x001963E0____________;
typedef enum M2vPicAtrF64_x001963E0____________ {
    M2V_PICATR_F64_0_x001963E0____________ = 0
} M2vPicAtrF64_x001963E0____________;
typedef struct M2vPicAtr_x001963E0____________ {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001963E0____________ frame_rate_code;
    int temporal_reference;
    M2vPicType_x001963E0____________ picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001963E0____________ picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001963E0____________ f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001963E0____________;
typedef void (*M2vUsrDatFn_x001963E0____________)(void *obj, int level);
typedef struct M2vUsrSj_x001963E0____________ {
    struct SfdSj_x001963E0____________ *sj;
    M2vUsrDatFn_x001963E0____________ fn;
    void *obj;
} M2vUsrSj_x001963E0____________;
typedef struct M2vPicUsr_x001963E0____________ {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001963E0____________;
typedef void (*M2vCondFn_x001963E0____________)();
typedef struct M2vObj_x001963E0____________ {
    int stat;
    M2vErrInf_x001963E0____________ err;
    M2vCondFn_x001963E0____________ cond[16];
    M2vPicAtr_x001963E0____________ picatr;
    char pad216[64];
    M2vUsrSj_x001963E0____________ usrsj[4];
    M2vPicUsr_x001963E0____________ picusr;
    char pad340[12];
    Mpeg2Ext_x001963E0____________ ext;
    char pad1656[8];
} M2vObj_x001963E0____________;
extern void M2V_SetErrFunc_x001963E0____________(M2vObj_x001963E0____________ *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x001963E0____________ {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001963E0____________;
typedef struct sceMpeg_x001963E0____________ {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x001963E0____________ *sys;
} sceMpeg_x001963E0____________;
typedef enum {
    sceMpegCbError_x001963E0____________,
    sceMpegCbNodata_x001963E0____________,
    sceMpegCbStopDMA_x001963E0____________,
    sceMpegCbRestartDMA_x001963E0____________,
    sceMpegCbBackground_x001963E0____________,
    sceMpegCbTimeStamp_x001963E0____________,
    sceMpegCbStr_x001963E0____________,
    sceMpegCbNum_x001963E0____________
} sceMpegCbType_x001963E0____________;
typedef struct {
    sceMpegCbType_x001963E0____________ type;
    char *errMessage;
} sceMpegCbDataError_x001963E0____________;
typedef struct {
    sceMpegCbType_x001963E0____________ type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x001963E0____________;
typedef struct {
    sceMpegCbType_x001963E0____________ type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x001963E0____________;
typedef union {
    sceMpegCbType_x001963E0____________ type;
    sceMpegCbDataError_x001963E0____________ error;
    sceMpegCbDataTimeStamp_x001963E0____________ ts;
    sceMpegCbDataStr_x001963E0____________ str;
} sceMpegCbData_x001963E0____________;
typedef int (*sceMpegCallback_x001963E0____________)(sceMpeg_x001963E0____________ *mp, sceMpegCbData_x001963E0____________ *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x001963E0____________ func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x001963E0____________;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x001963E0____________;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x001963E0____________;
typedef struct {
    _sceMpegPicture_x001963E0____________ *ref_image;
    _sceMpegPicture_x001963E0____________ *prev_image;
    _sceMpegPicture_x001963E0____________ *decode;
    _sceMpegPicture_x001963E0____________ *image;
} _sceMpegPictureSlot_x001963E0____________;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x001963E0____________;
typedef void (*_sceMpegMcKernel_x001963E0____________)(_sceMpegMcFetch_x001963E0____________ *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x001963E0____________ luma_kernel[4];
    _sceMpegMcKernel_x001963E0____________ chroma_kernel[4];
    _sceMpegMcFetch_x001963E0____________ luma[4];
    _sceMpegMcFetch_x001963E0____________ chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x001963E0____________;
typedef struct _sceMpegDecoder_x001963E0____________ {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x001963E0____________ callbacks[sceMpegCbNum_x001963E0____________];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x001963E0____________ ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x001963E0____________ alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x001963E0____________ slots[3];
    _sceMpegPicture_x001963E0____________ pictures[9];
    _sceMpegSprBuffer_x001963E0____________ spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x001963E0____________ *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x001963E0____________;
typedef struct SfdPlanes_x001963E0____________ {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x001963E0____________;
typedef struct SfdUserData_x001963E0____________ {
    char data[512];
    int size;
} SfdUserData_x001963E0____________;
typedef struct SfdRecVideo_x001963E0____________ {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001963E0____________ stamp;
    SfdUserData_x001963E0____________ user;
} SfdRecVideo_x001963E0____________;
typedef struct SfdSlot_x001963E0____________ {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x001963E0____________ stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001963E0____________ *blob;
    M2vPicAtr_x001963E0____________ info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x001963E0____________;
typedef struct SfdBufPool_x001963E0____________ {
    char *base;
    int count;
    int size;
    SfdSjChunk_x001963E0____________ slot[18];
} SfdBufPool_x001963E0____________;
typedef struct SfdMpvCond_x001963E0____________ {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x001963E0____________;
typedef struct SfdMpvWorkBufs_x001963E0____________ {
    int w[2];
} SfdMpvWorkBufs_x001963E0____________;
typedef struct SfdMpvFrameBufs_x001963E0____________ {
    int w[16];
} SfdMpvFrameBufs_x001963E0____________;
typedef struct SfdIpuEntry_x001963E0____________ {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001963E0____________;
typedef struct SfdDmaTag_x001963E0____________ {
    long long tag;
    long long pad;
} SfdDmaTag_x001963E0____________;
typedef struct SfdIpuStream_x001963E0____________ {
    void *base;
    SfdDmaTag_x001963E0____________ *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001963E0____________ *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001963E0____________;
typedef struct SfdIpuCtl_x001963E0____________ {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x001963E0____________ mpeg;
    SfdIpuStream_x001963E0____________ stream;
    sceMpegCbDataError_x001963E0____________ error;
} SfdIpuCtl_x001963E0____________;
typedef struct SfdPtsComp_x001963E0____________ {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x001963E0____________ ptsent;
} SfdPtsComp_x001963E0____________;
typedef struct SfdMpv_x001963E0____________ {
    void *handle;
    SfdMpvCond_x001963E0____________ cond;
    SfdMpvWorkBufs_x001963E0____________ work;
    SfdMpvFrameBufs_x001963E0____________ bufs;
    SfdSlot_x001963E0____________ *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x001963E0____________ pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x001963E0____________ ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x001963E0____________ planes[2];
    SfdSlot_x001963E0____________ *first;
    SfdSlot_x001963E0____________ *second;
    SfdSlot_x001963E0____________ *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x001963E0____________ slots[16];
    SfdBufPool_x001963E0____________ pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x001963E0____________ ipu;
} SfdMpv_x001963E0____________;
typedef enum SfdPicType_x001963E0____________ {
    SFD_PICTYPE_I_x001963E0____________ = 1,
    SFD_PICTYPE_P_x001963E0____________ = 2,
    SFD_PICTYPE_B_x001963E0____________ = 3
} SfdPicType_x001963E0____________;
typedef enum SfdFrmInfF60_x001963E0____________ {
    SFD_FRMINF_F60_0_x001963E0____________ = 0
} SfdFrmInfF60_x001963E0____________;
typedef struct SfdFrameDetail_x001963E0____________ {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x001963E0____________;
typedef struct SfdFrameInfo_x001963E0____________ {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x001963E0____________ picType;
    int time;
    int unit;
    SfdBufFmt_x001963E0____________ bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001963E0____________ *picUsr;
    SfdFrmInfF60_x001963E0____________ f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x001963E0____________ detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x001963E0____________;
typedef struct SfdVfrm_x001963E0____________ {
    int used;
    int f4;
    SfdFrameInfo_x001963E0____________ inf;
} SfdVfrm_x001963E0____________;
typedef struct SfdPly_x001963E0____________ SfdPly_x001963E0____________;
typedef struct SfdRec_x001963E0____________ SfdRec_x001963E0____________;
typedef struct SfdRecSub_x001963E0____________ {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001963E0____________;
typedef struct SfdRecSlot_x001963E0____________ {
    SfdRec_x001963E0____________ *rec;
    SfdRecSub_x001963E0____________ sub;
} SfdRecSlot_x001963E0____________;
typedef struct SfdSysHd_x001963E0____________ {
    char data[2][176];
    int len[2];
} SfdSysHd_x001963E0____________;
typedef struct SfdRecSys_x001963E0____________ {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001963E0____________ syshd;
} SfdRecSys_x001963E0____________;
typedef struct SfdRecAudio_x001963E0____________ {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001963E0____________;
struct SfdRec_x001963E0____________ {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001963E0____________ hdrInf;
    SfdRecSys_x001963E0____________ sys;
    char pad2616[152];
    SfdRecVideo_x001963E0____________ video;
    SfdRecAudio_x001963E0____________ audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x001963E0____________ {
    SfdCrePrm_x001963E0____________ cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x001963E0____________ hdr;
    SfdMvInf_x001963E0____________ mvInf;
    char pad2380[4];
    SfdPlyInf_x001963E0____________ plyInf;
    SfdErrInf_x001963E0____________ err;
    int cond[SFD_COND_NUM_x001963E0____________];
    int cond2[SFD_COND_NUM_x001963E0____________];
    char pad3364[4];
    SfdTim_x001963E0____________ tim;
    SfdBufEnt_x001963E0____________ buf[8];
    SfdVfrm_x001963E0____________ vfrm[16];
    SfdTrnSlot_x001963E0____________ trn[9];
    char pad8588[4];
    SfdMpsPrm_x001963E0____________ mps;
    char pad8944[176];
    SfdMpv_x001963E0____________ mpv;
    SfdAdxCtx_x001963E0____________ adxt;
    char pad13680[100];
    SfdAoap_x001963E0____________ aoap;
    char pad13804[4];
    SfainfList_x001963E0____________ uo;
    char pad13860[4];
    SfdRecSlot_x001963E0____________ see;
    SfdTmrInf_x001963E0____________ tmr;
};
long sfpl2_PauseExec_x001963E0____________(SfdPly_x001963E0____________ *h, int mode) __asm__("func_00196470");
long sfpl2_PauseExec_x001963E0____________(SfdPly_x001963E0____________ *h, int mode) __asm__("func_00196470");
long func_001963E0_x001963E0____________(SfdPly_x001963E0____________ *h, unsigned int mode) __asm__("func_001963E0");
/* SFPL2_Pause: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long func_001963E0_x001963E0____________(SfdPly_x001963E0____________ *h, unsigned int mode) {
    long r = 0;
    switch (mode) {
    case 2:
        if (h->stat == 4) r = sfpl2_PauseExec_x001963E0____________(h, mode);
        break;
    case 1:
        if (++h->pauseCnt == mode) r = sfpl2_PauseExec_x001963E0____________(h, mode);
        break;
    case 0:
        if (--h->pauseCnt == 0) r = sfpl2_PauseExec_x001963E0____________(h, 0);
        break;
    }
    return r;
}
__asm__("# rebind func_001963E0 0x001963E0");
typedef struct SfdSj_x00196470 SfdSj_x00196470;
typedef struct SfdSjChunk_x00196470 {
    char *data;
    int len;
} SfdSjChunk_x00196470;
typedef struct SfdSjVtbl_x00196470 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00196470 *sj);
    int (*getUuid)(SfdSj_x00196470 *sj);
    void (*reset)(SfdSj_x00196470 *sj);
    void (*getChunk)(SfdSj_x00196470 *sj, int id, int n, SfdSjChunk_x00196470 *ck);
    void (*ungetChunk)(SfdSj_x00196470 *sj, int id, SfdSjChunk_x00196470 *ck);
    void (*putChunk)(SfdSj_x00196470 *sj, int id, SfdSjChunk_x00196470 *ck);
    int (*getNumData)(SfdSj_x00196470 *sj, int id);
} SfdSjVtbl_x00196470;
struct SfdSj_x00196470 {
    SfdSjVtbl_x00196470 *vtbl;
};
struct SfdSj_x00196470;
struct SfdRecSlot_x00196470;
struct SfdRec_x00196470;
struct SfdMpvCond_x00196470;
struct SfdPlanes_x00196470;
struct SfdFrameInfo_x00196470;
struct SfdPly_x00196470;
typedef int (*SfdTimeFn_x00196470)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00196470 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00196470;
typedef struct SfdTimeRec_x00196470 {
    int valid;
    SfdTimeCode_x00196470 tc;
    int time;
    int unit;
} SfdTimeRec_x00196470;
typedef struct SfdTst_x00196470 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00196470;
typedef struct SfdSyncTally_x00196470 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00196470;
typedef struct SfdSyncQueue_x00196470 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00196470;
typedef struct SfdFieldEntry_x00196470 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00196470;
typedef struct SfdPtsm_x00196470 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00196470;
typedef struct SfdHdrAudio_x00196470 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00196470;
typedef struct SfdHdrMux_x00196470 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00196470;
typedef struct SfdHdrVideo_x00196470 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00196470;
typedef struct SfdHdrInf_x00196470 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00196470 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00196470 audio;
    SfdHdrVideo_x00196470 video;
    int size;
    char data[2048];
} SfdHdrInf_x00196470;
typedef struct SfdMvInf_x00196470 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00196470;
typedef struct SfdPlyInf_x00196470 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00196470;
typedef void (*SfdErrFn_x00196470)(void *obj, int code);
typedef struct SfdErrInf_x00196470 {
    SfdErrFn_x00196470 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00196470;
typedef int (*SfdExtClockFn_x00196470)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00196470)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00196470 {
    SfdTimeFn_x00196470 timefn[6];
    SfdIsSkipFn_x00196470 isSkipFn;
    SfdTimeCode_x00196470 tc;
    SfdTimeRec_x00196470 state;
    SfdTimeRec_x00196470 best;
    SfdTimeRec_x00196470 tot;
    SfdTimeRec_x00196470 cur;
    SfdTimeRec_x00196470 latest;
    SfdTimeRec_x00196470 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00196470 tally;
    SfdSyncQueue_x00196470 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00196470 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00196470 tst;
    SfdFieldEntry_x00196470 fields[64];
    SfdPtsm_x00196470 ptsm;
    char pad1468[36];
} SfdTim_x00196470;
enum {
    SFD_COND_VIDEO_x00196470 = 5,
    SFD_COND_AUDIO_x00196470 = 6,
    SFD_COND_KEEPSUP_x00196470 = 8,
    SFD_COND_SYNCMODE_x00196470 = 15,
    SFD_COND_ETIME_x00196470 = 20,
    SFD_COND_ETUNIT_x00196470 = 21,
    SFD_COND_LNKSTM_x00196470 = 49,
    SFD_COND_SUPPLY_END_x00196470 = 56,
    SFD_COND_DECODE_END_x00196470 = 57,
    SFD_COND_DEMUX_SPLIT_x00196470 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00196470 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00196470 = 80,
    SFD_COND_SYSHD_FN_x00196470 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00196470 = 86,
    SFD_COND_NUM_x00196470 = 100
};
typedef enum SfdBufFmt_x00196470 {
    SFD_BUFFMT_0_x00196470 = 0
} SfdBufFmt_x00196470;
typedef enum SfdBufId_x00196470 {
    SFD_BUF_NONE_x00196470 = 8
} SfdBufId_x00196470;
typedef struct SfdCrePrm_x00196470 {
    struct SfdTrnConfig_x00196470 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00196470 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00196470;
typedef struct SfdItem_x00196470 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00196470;
typedef struct SfdRing_x00196470 {
    SfdItem_x00196470 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00196470;
typedef struct SfdBufInf_x00196470 {
    char *data;
    struct SfdSj_x00196470 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00196470;
typedef struct SfdBufCur_x00196470 {
    char *pos;
    int len;
} SfdBufCur_x00196470;
typedef struct SfdBufDlm_x00196470 {
    char *pos;
    char *end;
} SfdBufDlm_x00196470;
typedef struct SfdBufRing_x00196470 {
    SfdBufInf_x00196470 sup;
    SfdBufDlm_x00196470 dlm;
    int wtot;
    int rtot;
    SfdRing_x00196470 ptsque;
} SfdBufRing_x00196470;
typedef struct SfdBufAring_x00196470 {
    SfdBufInf_x00196470 sup;
    SfdBufCur_x00196470 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00196470;
typedef struct SfdUoch_x00196470 {
    struct SfdSj_x00196470 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00196470;
typedef struct SfdBufEnt_x00196470 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00196470 ring;
        SfdBufAring_x00196470 aring;
        SfdBufInf_x00196470 vfrm;
        SfdUoch_x00196470 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00196470;
typedef int (*SfdTrnFn_x00196470)();
typedef struct SfdTrnConfig_x00196470 {
    SfdTrnFn_x00196470 *fns[9];
} SfdTrnConfig_x00196470;
typedef struct SfdMpsPrm_x00196470 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00196470 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00196470;
typedef struct SfdAdxCfg_x00196470 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00196470;
typedef void (*SfdAdxStep_x00196470)(struct SfdPly_x00196470 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00196470 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00196470 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00196470 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00196470;
typedef struct SfdAoap_x00196470 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00196470 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00196470 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00196470 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00196470 *h);
    void (*setSpeed)(struct SfdPly_x00196470 *h, int speed);
} SfdAoap_x00196470;
typedef struct SfainfOut_x00196470 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00196470;
typedef struct SfainfList_x00196470 {
    int nout;
    SfainfOut_x00196470 out[3];
} SfainfList_x00196470;
typedef struct SfdTrnSlot_x00196470 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00196470 *mps;
        struct SfdMpv_x00196470 *mpv;
        SfdAdxCtx_x00196470 *adxt;
        SfdAoap_x00196470 *aoap;
        SfainfList_x00196470 *uo;
    } hn;
    SfdTrnFn_x00196470 *fns;
    SfdBufId_x00196470 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00196470;
typedef struct SfdTsum_x00196470 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00196470;
typedef struct SfdTmrInf_x00196470 {
    SfdTsum_x00196470 tsum[6];
} SfdTmrInf_x00196470;
void SFTIM_Pause_x00196470(void *sfd, unsigned int kind) __asm__("func_0019B1C8");
struct SfdSj_x00196470;
typedef struct M2vErrInf_x00196470 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00196470;
typedef struct Mpeg2Ext_x00196470 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00196470;
typedef enum M2vFrameRate_x00196470 {
    M2V_FRAME_RATE_FORBIDDEN_x00196470 = 0
} M2vFrameRate_x00196470;
typedef enum M2vPicType_x00196470 {
    M2V_PICTYPE_I_x00196470 = 1,
    M2V_PICTYPE_P_x00196470 = 2,
    M2V_PICTYPE_B_x00196470 = 3,
    M2V_PICTYPE_D_x00196470 = 4
} M2vPicType_x00196470;
typedef enum M2vPicStruct_x00196470 {
    M2V_PICSTRUCT_TOP_FIELD_x00196470 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00196470 = 2,
    M2V_PICSTRUCT_FRAME_x00196470 = 3
} M2vPicStruct_x00196470;
typedef enum M2vPicAtrF64_x00196470 {
    M2V_PICATR_F64_0_x00196470 = 0
} M2vPicAtrF64_x00196470;
typedef struct M2vPicAtr_x00196470 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00196470 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00196470 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00196470 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00196470 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00196470;
typedef void (*M2vUsrDatFn_x00196470)(void *obj, int level);
typedef struct M2vUsrSj_x00196470 {
    struct SfdSj_x00196470 *sj;
    M2vUsrDatFn_x00196470 fn;
    void *obj;
} M2vUsrSj_x00196470;
typedef struct M2vPicUsr_x00196470 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00196470;
typedef void (*M2vCondFn_x00196470)();
typedef struct M2vObj_x00196470 {
    int stat;
    M2vErrInf_x00196470 err;
    M2vCondFn_x00196470 cond[16];
    M2vPicAtr_x00196470 picatr;
    char pad216[64];
    M2vUsrSj_x00196470 usrsj[4];
    M2vPicUsr_x00196470 picusr;
    char pad340[12];
    Mpeg2Ext_x00196470 ext;
    char pad1656[8];
} M2vObj_x00196470;
extern void M2V_SetErrFunc_x00196470(M2vObj_x00196470 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00196470 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00196470;
typedef struct sceMpeg_x00196470 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00196470 *sys;
} sceMpeg_x00196470;
typedef enum {
    sceMpegCbError_x00196470,
    sceMpegCbNodata_x00196470,
    sceMpegCbStopDMA_x00196470,
    sceMpegCbRestartDMA_x00196470,
    sceMpegCbBackground_x00196470,
    sceMpegCbTimeStamp_x00196470,
    sceMpegCbStr_x00196470,
    sceMpegCbNum_x00196470
} sceMpegCbType_x00196470;
typedef struct {
    sceMpegCbType_x00196470 type;
    char *errMessage;
} sceMpegCbDataError_x00196470;
typedef struct {
    sceMpegCbType_x00196470 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00196470;
typedef struct {
    sceMpegCbType_x00196470 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00196470;
typedef union {
    sceMpegCbType_x00196470 type;
    sceMpegCbDataError_x00196470 error;
    sceMpegCbDataTimeStamp_x00196470 ts;
    sceMpegCbDataStr_x00196470 str;
} sceMpegCbData_x00196470;
typedef int (*sceMpegCallback_x00196470)(sceMpeg_x00196470 *mp, sceMpegCbData_x00196470 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00196470 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00196470;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00196470;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00196470;
typedef struct {
    _sceMpegPicture_x00196470 *ref_image;
    _sceMpegPicture_x00196470 *prev_image;
    _sceMpegPicture_x00196470 *decode;
    _sceMpegPicture_x00196470 *image;
} _sceMpegPictureSlot_x00196470;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00196470;
typedef void (*_sceMpegMcKernel_x00196470)(_sceMpegMcFetch_x00196470 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00196470 luma_kernel[4];
    _sceMpegMcKernel_x00196470 chroma_kernel[4];
    _sceMpegMcFetch_x00196470 luma[4];
    _sceMpegMcFetch_x00196470 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00196470;
typedef struct _sceMpegDecoder_x00196470 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00196470 callbacks[sceMpegCbNum_x00196470];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00196470 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00196470 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00196470 slots[3];
    _sceMpegPicture_x00196470 pictures[9];
    _sceMpegSprBuffer_x00196470 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00196470 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00196470;
typedef struct SfdPlanes_x00196470 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00196470;
typedef struct SfdUserData_x00196470 {
    char data[512];
    int size;
} SfdUserData_x00196470;
typedef struct SfdRecVideo_x00196470 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00196470 stamp;
    SfdUserData_x00196470 user;
} SfdRecVideo_x00196470;
typedef struct SfdSlot_x00196470 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00196470 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196470 *blob;
    M2vPicAtr_x00196470 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00196470;
typedef struct SfdBufPool_x00196470 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00196470 slot[18];
} SfdBufPool_x00196470;
typedef struct SfdMpvCond_x00196470 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00196470;
typedef struct SfdMpvWorkBufs_x00196470 {
    int w[2];
} SfdMpvWorkBufs_x00196470;
typedef struct SfdMpvFrameBufs_x00196470 {
    int w[16];
} SfdMpvFrameBufs_x00196470;
typedef struct SfdIpuEntry_x00196470 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00196470;
typedef struct SfdDmaTag_x00196470 {
    long long tag;
    long long pad;
} SfdDmaTag_x00196470;
typedef struct SfdIpuStream_x00196470 {
    void *base;
    SfdDmaTag_x00196470 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00196470 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00196470;
typedef struct SfdIpuCtl_x00196470 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00196470 mpeg;
    SfdIpuStream_x00196470 stream;
    sceMpegCbDataError_x00196470 error;
} SfdIpuCtl_x00196470;
typedef struct SfdPtsComp_x00196470 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00196470 ptsent;
} SfdPtsComp_x00196470;
typedef struct SfdMpv_x00196470 {
    void *handle;
    SfdMpvCond_x00196470 cond;
    SfdMpvWorkBufs_x00196470 work;
    SfdMpvFrameBufs_x00196470 bufs;
    SfdSlot_x00196470 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00196470 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00196470 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00196470 planes[2];
    SfdSlot_x00196470 *first;
    SfdSlot_x00196470 *second;
    SfdSlot_x00196470 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00196470 slots[16];
    SfdBufPool_x00196470 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00196470 ipu;
} SfdMpv_x00196470;
typedef enum SfdPicType_x00196470 {
    SFD_PICTYPE_I_x00196470 = 1,
    SFD_PICTYPE_P_x00196470 = 2,
    SFD_PICTYPE_B_x00196470 = 3
} SfdPicType_x00196470;
typedef enum SfdFrmInfF60_x00196470 {
    SFD_FRMINF_F60_0_x00196470 = 0
} SfdFrmInfF60_x00196470;
typedef struct SfdFrameDetail_x00196470 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00196470;
typedef struct SfdFrameInfo_x00196470 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00196470 picType;
    int time;
    int unit;
    SfdBufFmt_x00196470 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196470 *picUsr;
    SfdFrmInfF60_x00196470 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00196470 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00196470;
typedef struct SfdVfrm_x00196470 {
    int used;
    int f4;
    SfdFrameInfo_x00196470 inf;
} SfdVfrm_x00196470;
typedef struct SfdPly_x00196470 SfdPly_x00196470;
typedef struct SfdRec_x00196470 SfdRec_x00196470;
typedef struct SfdRecSub_x00196470 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00196470;
typedef struct SfdRecSlot_x00196470 {
    SfdRec_x00196470 *rec;
    SfdRecSub_x00196470 sub;
} SfdRecSlot_x00196470;
typedef struct SfdSysHd_x00196470 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00196470;
typedef struct SfdRecSys_x00196470 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00196470 syshd;
} SfdRecSys_x00196470;
typedef struct SfdRecAudio_x00196470 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00196470;
struct SfdRec_x00196470 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00196470 hdrInf;
    SfdRecSys_x00196470 sys;
    char pad2616[152];
    SfdRecVideo_x00196470 video;
    SfdRecAudio_x00196470 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00196470 {
    SfdCrePrm_x00196470 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00196470 hdr;
    SfdMvInf_x00196470 mvInf;
    char pad2380[4];
    SfdPlyInf_x00196470 plyInf;
    SfdErrInf_x00196470 err;
    int cond[SFD_COND_NUM_x00196470];
    int cond2[SFD_COND_NUM_x00196470];
    char pad3364[4];
    SfdTim_x00196470 tim;
    SfdBufEnt_x00196470 buf[8];
    SfdVfrm_x00196470 vfrm[16];
    SfdTrnSlot_x00196470 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00196470 mps;
    char pad8944[176];
    SfdMpv_x00196470 mpv;
    SfdAdxCtx_x00196470 adxt;
    char pad13680[100];
    SfdAoap_x00196470 aoap;
    char pad13804[4];
    SfainfList_x00196470 uo;
    char pad13860[4];
    SfdRecSlot_x00196470 see;
    SfdTmrInf_x00196470 tmr;
};
long sfpl2_TrPause_x00196470(SfdPly_x00196470 *h, int value) __asm__("func_001964D8");
long sfpl2_TrPause_x00196470(SfdPly_x00196470 *h, int value) __asm__("func_001964D8");
long func_00196470_x00196470(SfdPly_x00196470 *h, int mode) __asm__("func_00196470");
/* sfpl2_PauseExec: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long func_00196470_x00196470(SfdPly_x00196470 *h, int mode) {
    if (h->reqStat != 3 && h->reqStat != 4) {
        return 0;
    }
    SFTIM_Pause_x00196470(h, mode);
    return sfpl2_TrPause_x00196470(h, mode);
}
typedef struct SfdSj_x001964D8 SfdSj_x001964D8;
typedef struct SfdSjChunk_x001964D8 {
    char *data;
    int len;
} SfdSjChunk_x001964D8;
typedef struct SfdSjVtbl_x001964D8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001964D8 *sj);
    int (*getUuid)(SfdSj_x001964D8 *sj);
    void (*reset)(SfdSj_x001964D8 *sj);
    void (*getChunk)(SfdSj_x001964D8 *sj, int id, int n, SfdSjChunk_x001964D8 *ck);
    void (*ungetChunk)(SfdSj_x001964D8 *sj, int id, SfdSjChunk_x001964D8 *ck);
    void (*putChunk)(SfdSj_x001964D8 *sj, int id, SfdSjChunk_x001964D8 *ck);
    int (*getNumData)(SfdSj_x001964D8 *sj, int id);
} SfdSjVtbl_x001964D8;
struct SfdSj_x001964D8 {
    SfdSjVtbl_x001964D8 *vtbl;
};
struct SfdSj_x001964D8;
struct SfdRecSlot_x001964D8;
struct SfdRec_x001964D8;
struct SfdMpvCond_x001964D8;
struct SfdPlanes_x001964D8;
struct SfdFrameInfo_x001964D8;
struct SfdPly_x001964D8;
typedef int (*SfdTimeFn_x001964D8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x001964D8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001964D8;
typedef struct SfdTimeRec_x001964D8 {
    int valid;
    SfdTimeCode_x001964D8 tc;
    int time;
    int unit;
} SfdTimeRec_x001964D8;
typedef struct SfdTst_x001964D8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x001964D8;
typedef struct SfdSyncTally_x001964D8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x001964D8;
typedef struct SfdSyncQueue_x001964D8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x001964D8;
typedef struct SfdFieldEntry_x001964D8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x001964D8;
typedef struct SfdPtsm_x001964D8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x001964D8;
typedef struct SfdHdrAudio_x001964D8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001964D8;
typedef struct SfdHdrMux_x001964D8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001964D8;
typedef struct SfdHdrVideo_x001964D8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001964D8;
typedef struct SfdHdrInf_x001964D8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001964D8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001964D8 audio;
    SfdHdrVideo_x001964D8 video;
    int size;
    char data[2048];
} SfdHdrInf_x001964D8;
typedef struct SfdMvInf_x001964D8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x001964D8;
typedef struct SfdPlyInf_x001964D8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x001964D8;
typedef void (*SfdErrFn_x001964D8)(void *obj, int code);
typedef struct SfdErrInf_x001964D8 {
    SfdErrFn_x001964D8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x001964D8;
typedef int (*SfdExtClockFn_x001964D8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x001964D8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x001964D8 {
    SfdTimeFn_x001964D8 timefn[6];
    SfdIsSkipFn_x001964D8 isSkipFn;
    SfdTimeCode_x001964D8 tc;
    SfdTimeRec_x001964D8 state;
    SfdTimeRec_x001964D8 best;
    SfdTimeRec_x001964D8 tot;
    SfdTimeRec_x001964D8 cur;
    SfdTimeRec_x001964D8 latest;
    SfdTimeRec_x001964D8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x001964D8 tally;
    SfdSyncQueue_x001964D8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x001964D8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x001964D8 tst;
    SfdFieldEntry_x001964D8 fields[64];
    SfdPtsm_x001964D8 ptsm;
    char pad1468[36];
} SfdTim_x001964D8;
enum {
    SFD_COND_VIDEO_x001964D8 = 5,
    SFD_COND_AUDIO_x001964D8 = 6,
    SFD_COND_KEEPSUP_x001964D8 = 8,
    SFD_COND_SYNCMODE_x001964D8 = 15,
    SFD_COND_ETIME_x001964D8 = 20,
    SFD_COND_ETUNIT_x001964D8 = 21,
    SFD_COND_LNKSTM_x001964D8 = 49,
    SFD_COND_SUPPLY_END_x001964D8 = 56,
    SFD_COND_DECODE_END_x001964D8 = 57,
    SFD_COND_DEMUX_SPLIT_x001964D8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x001964D8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x001964D8 = 80,
    SFD_COND_SYSHD_FN_x001964D8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x001964D8 = 86,
    SFD_COND_NUM_x001964D8 = 100
};
typedef enum SfdBufFmt_x001964D8 {
    SFD_BUFFMT_0_x001964D8 = 0
} SfdBufFmt_x001964D8;
typedef enum SfdBufId_x001964D8 {
    SFD_BUF_NONE_x001964D8 = 8
} SfdBufId_x001964D8;
typedef struct SfdCrePrm_x001964D8 {
    struct SfdTrnConfig_x001964D8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x001964D8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x001964D8;
typedef struct SfdItem_x001964D8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x001964D8;
typedef struct SfdRing_x001964D8 {
    SfdItem_x001964D8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x001964D8;
typedef struct SfdBufInf_x001964D8 {
    char *data;
    struct SfdSj_x001964D8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x001964D8;
typedef struct SfdBufCur_x001964D8 {
    char *pos;
    int len;
} SfdBufCur_x001964D8;
typedef struct SfdBufDlm_x001964D8 {
    char *pos;
    char *end;
} SfdBufDlm_x001964D8;
typedef struct SfdBufRing_x001964D8 {
    SfdBufInf_x001964D8 sup;
    SfdBufDlm_x001964D8 dlm;
    int wtot;
    int rtot;
    SfdRing_x001964D8 ptsque;
} SfdBufRing_x001964D8;
typedef struct SfdBufAring_x001964D8 {
    SfdBufInf_x001964D8 sup;
    SfdBufCur_x001964D8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x001964D8;
typedef struct SfdUoch_x001964D8 {
    struct SfdSj_x001964D8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x001964D8;
typedef struct SfdBufEnt_x001964D8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x001964D8 ring;
        SfdBufAring_x001964D8 aring;
        SfdBufInf_x001964D8 vfrm;
        SfdUoch_x001964D8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x001964D8;
typedef int (*SfdTrnFn_x001964D8)();
typedef struct SfdTrnConfig_x001964D8 {
    SfdTrnFn_x001964D8 *fns[9];
} SfdTrnConfig_x001964D8;
typedef struct SfdMpsPrm_x001964D8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x001964D8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x001964D8;
typedef struct SfdAdxCfg_x001964D8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x001964D8;
typedef void (*SfdAdxStep_x001964D8)(struct SfdPly_x001964D8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x001964D8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x001964D8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x001964D8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x001964D8;
typedef struct SfdAoap_x001964D8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x001964D8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x001964D8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x001964D8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x001964D8 *h);
    void (*setSpeed)(struct SfdPly_x001964D8 *h, int speed);
} SfdAoap_x001964D8;
typedef struct SfainfOut_x001964D8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x001964D8;
typedef struct SfainfList_x001964D8 {
    int nout;
    SfainfOut_x001964D8 out[3];
} SfainfList_x001964D8;
typedef struct SfdTrnSlot_x001964D8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x001964D8 *mps;
        struct SfdMpv_x001964D8 *mpv;
        SfdAdxCtx_x001964D8 *adxt;
        SfdAoap_x001964D8 *aoap;
        SfainfList_x001964D8 *uo;
    } hn;
    SfdTrnFn_x001964D8 *fns;
    SfdBufId_x001964D8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x001964D8;
typedef struct SfdTsum_x001964D8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x001964D8;
typedef struct SfdTmrInf_x001964D8 {
    SfdTsum_x001964D8 tsum[6];
} SfdTmrInf_x001964D8;
int SFTRN_CallTrtTrif_x001964D8(void *sfd, int index, int k, int a, int b) __asm__("func_0019C0D8");
struct SfdSj_x001964D8;
typedef struct M2vErrInf_x001964D8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001964D8;
typedef struct Mpeg2Ext_x001964D8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001964D8;
typedef enum M2vFrameRate_x001964D8 {
    M2V_FRAME_RATE_FORBIDDEN_x001964D8 = 0
} M2vFrameRate_x001964D8;
typedef enum M2vPicType_x001964D8 {
    M2V_PICTYPE_I_x001964D8 = 1,
    M2V_PICTYPE_P_x001964D8 = 2,
    M2V_PICTYPE_B_x001964D8 = 3,
    M2V_PICTYPE_D_x001964D8 = 4
} M2vPicType_x001964D8;
typedef enum M2vPicStruct_x001964D8 {
    M2V_PICSTRUCT_TOP_FIELD_x001964D8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001964D8 = 2,
    M2V_PICSTRUCT_FRAME_x001964D8 = 3
} M2vPicStruct_x001964D8;
typedef enum M2vPicAtrF64_x001964D8 {
    M2V_PICATR_F64_0_x001964D8 = 0
} M2vPicAtrF64_x001964D8;
typedef struct M2vPicAtr_x001964D8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001964D8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x001964D8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001964D8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001964D8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001964D8;
typedef void (*M2vUsrDatFn_x001964D8)(void *obj, int level);
typedef struct M2vUsrSj_x001964D8 {
    struct SfdSj_x001964D8 *sj;
    M2vUsrDatFn_x001964D8 fn;
    void *obj;
} M2vUsrSj_x001964D8;
typedef struct M2vPicUsr_x001964D8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001964D8;
typedef void (*M2vCondFn_x001964D8)();
typedef struct M2vObj_x001964D8 {
    int stat;
    M2vErrInf_x001964D8 err;
    M2vCondFn_x001964D8 cond[16];
    M2vPicAtr_x001964D8 picatr;
    char pad216[64];
    M2vUsrSj_x001964D8 usrsj[4];
    M2vPicUsr_x001964D8 picusr;
    char pad340[12];
    Mpeg2Ext_x001964D8 ext;
    char pad1656[8];
} M2vObj_x001964D8;
extern void M2V_SetErrFunc_x001964D8(M2vObj_x001964D8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x001964D8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001964D8;
typedef struct sceMpeg_x001964D8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x001964D8 *sys;
} sceMpeg_x001964D8;
typedef enum {
    sceMpegCbError_x001964D8,
    sceMpegCbNodata_x001964D8,
    sceMpegCbStopDMA_x001964D8,
    sceMpegCbRestartDMA_x001964D8,
    sceMpegCbBackground_x001964D8,
    sceMpegCbTimeStamp_x001964D8,
    sceMpegCbStr_x001964D8,
    sceMpegCbNum_x001964D8
} sceMpegCbType_x001964D8;
typedef struct {
    sceMpegCbType_x001964D8 type;
    char *errMessage;
} sceMpegCbDataError_x001964D8;
typedef struct {
    sceMpegCbType_x001964D8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x001964D8;
typedef struct {
    sceMpegCbType_x001964D8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x001964D8;
typedef union {
    sceMpegCbType_x001964D8 type;
    sceMpegCbDataError_x001964D8 error;
    sceMpegCbDataTimeStamp_x001964D8 ts;
    sceMpegCbDataStr_x001964D8 str;
} sceMpegCbData_x001964D8;
typedef int (*sceMpegCallback_x001964D8)(sceMpeg_x001964D8 *mp, sceMpegCbData_x001964D8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x001964D8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x001964D8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x001964D8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x001964D8;
typedef struct {
    _sceMpegPicture_x001964D8 *ref_image;
    _sceMpegPicture_x001964D8 *prev_image;
    _sceMpegPicture_x001964D8 *decode;
    _sceMpegPicture_x001964D8 *image;
} _sceMpegPictureSlot_x001964D8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x001964D8;
typedef void (*_sceMpegMcKernel_x001964D8)(_sceMpegMcFetch_x001964D8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x001964D8 luma_kernel[4];
    _sceMpegMcKernel_x001964D8 chroma_kernel[4];
    _sceMpegMcFetch_x001964D8 luma[4];
    _sceMpegMcFetch_x001964D8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x001964D8;
typedef struct _sceMpegDecoder_x001964D8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x001964D8 callbacks[sceMpegCbNum_x001964D8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x001964D8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x001964D8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x001964D8 slots[3];
    _sceMpegPicture_x001964D8 pictures[9];
    _sceMpegSprBuffer_x001964D8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x001964D8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x001964D8;
typedef struct SfdPlanes_x001964D8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x001964D8;
typedef struct SfdUserData_x001964D8 {
    char data[512];
    int size;
} SfdUserData_x001964D8;
typedef struct SfdRecVideo_x001964D8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001964D8 stamp;
    SfdUserData_x001964D8 user;
} SfdRecVideo_x001964D8;
typedef struct SfdSlot_x001964D8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x001964D8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001964D8 *blob;
    M2vPicAtr_x001964D8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x001964D8;
typedef struct SfdBufPool_x001964D8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x001964D8 slot[18];
} SfdBufPool_x001964D8;
typedef struct SfdMpvCond_x001964D8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x001964D8;
typedef struct SfdMpvWorkBufs_x001964D8 {
    int w[2];
} SfdMpvWorkBufs_x001964D8;
typedef struct SfdMpvFrameBufs_x001964D8 {
    int w[16];
} SfdMpvFrameBufs_x001964D8;
typedef struct SfdIpuEntry_x001964D8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001964D8;
typedef struct SfdDmaTag_x001964D8 {
    long long tag;
    long long pad;
} SfdDmaTag_x001964D8;
typedef struct SfdIpuStream_x001964D8 {
    void *base;
    SfdDmaTag_x001964D8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001964D8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001964D8;
typedef struct SfdIpuCtl_x001964D8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x001964D8 mpeg;
    SfdIpuStream_x001964D8 stream;
    sceMpegCbDataError_x001964D8 error;
} SfdIpuCtl_x001964D8;
typedef struct SfdPtsComp_x001964D8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x001964D8 ptsent;
} SfdPtsComp_x001964D8;
typedef struct SfdMpv_x001964D8 {
    void *handle;
    SfdMpvCond_x001964D8 cond;
    SfdMpvWorkBufs_x001964D8 work;
    SfdMpvFrameBufs_x001964D8 bufs;
    SfdSlot_x001964D8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x001964D8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x001964D8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x001964D8 planes[2];
    SfdSlot_x001964D8 *first;
    SfdSlot_x001964D8 *second;
    SfdSlot_x001964D8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x001964D8 slots[16];
    SfdBufPool_x001964D8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x001964D8 ipu;
} SfdMpv_x001964D8;
typedef enum SfdPicType_x001964D8 {
    SFD_PICTYPE_I_x001964D8 = 1,
    SFD_PICTYPE_P_x001964D8 = 2,
    SFD_PICTYPE_B_x001964D8 = 3
} SfdPicType_x001964D8;
typedef enum SfdFrmInfF60_x001964D8 {
    SFD_FRMINF_F60_0_x001964D8 = 0
} SfdFrmInfF60_x001964D8;
typedef struct SfdFrameDetail_x001964D8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x001964D8;
typedef struct SfdFrameInfo_x001964D8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x001964D8 picType;
    int time;
    int unit;
    SfdBufFmt_x001964D8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001964D8 *picUsr;
    SfdFrmInfF60_x001964D8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x001964D8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x001964D8;
typedef struct SfdVfrm_x001964D8 {
    int used;
    int f4;
    SfdFrameInfo_x001964D8 inf;
} SfdVfrm_x001964D8;
typedef struct SfdPly_x001964D8 SfdPly_x001964D8;
typedef struct SfdRec_x001964D8 SfdRec_x001964D8;
typedef struct SfdRecSub_x001964D8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001964D8;
typedef struct SfdRecSlot_x001964D8 {
    SfdRec_x001964D8 *rec;
    SfdRecSub_x001964D8 sub;
} SfdRecSlot_x001964D8;
typedef struct SfdSysHd_x001964D8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x001964D8;
typedef struct SfdRecSys_x001964D8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001964D8 syshd;
} SfdRecSys_x001964D8;
typedef struct SfdRecAudio_x001964D8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001964D8;
struct SfdRec_x001964D8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001964D8 hdrInf;
    SfdRecSys_x001964D8 sys;
    char pad2616[152];
    SfdRecVideo_x001964D8 video;
    SfdRecAudio_x001964D8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x001964D8 {
    SfdCrePrm_x001964D8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x001964D8 hdr;
    SfdMvInf_x001964D8 mvInf;
    char pad2380[4];
    SfdPlyInf_x001964D8 plyInf;
    SfdErrInf_x001964D8 err;
    int cond[SFD_COND_NUM_x001964D8];
    int cond2[SFD_COND_NUM_x001964D8];
    char pad3364[4];
    SfdTim_x001964D8 tim;
    SfdBufEnt_x001964D8 buf[8];
    SfdVfrm_x001964D8 vfrm[16];
    SfdTrnSlot_x001964D8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x001964D8 mps;
    char pad8944[176];
    SfdMpv_x001964D8 mpv;
    SfdAdxCtx_x001964D8 adxt;
    char pad13680[100];
    SfdAoap_x001964D8 aoap;
    char pad13804[4];
    SfainfList_x001964D8 uo;
    char pad13860[4];
    SfdRecSlot_x001964D8 see;
    SfdTmrInf_x001964D8 tmr;
};
long func_001964D8_x001964D8(SfdPly_x001964D8 *h, int value) __asm__("func_001964D8");
/* sfpl2_TrPause: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long func_001964D8_x001964D8(SfdPly_x001964D8 *h, int value) {
    return SFTRN_CallTrtTrif_x001964D8(h, 7, 8, value, 0);
}
typedef struct SfdSj_x00196500 SfdSj_x00196500;
typedef struct SfdSjChunk_x00196500 {
    char *data;
    int len;
} SfdSjChunk_x00196500;
typedef struct SfdSjVtbl_x00196500 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00196500 *sj);
    int (*getUuid)(SfdSj_x00196500 *sj);
    void (*reset)(SfdSj_x00196500 *sj);
    void (*getChunk)(SfdSj_x00196500 *sj, int id, int n, SfdSjChunk_x00196500 *ck);
    void (*ungetChunk)(SfdSj_x00196500 *sj, int id, SfdSjChunk_x00196500 *ck);
    void (*putChunk)(SfdSj_x00196500 *sj, int id, SfdSjChunk_x00196500 *ck);
    int (*getNumData)(SfdSj_x00196500 *sj, int id);
} SfdSjVtbl_x00196500;
struct SfdSj_x00196500 {
    SfdSjVtbl_x00196500 *vtbl;
};
struct SfdSj_x00196500;
struct SfdRecSlot_x00196500;
struct SfdRec_x00196500;
struct SfdMpvCond_x00196500;
struct SfdPlanes_x00196500;
struct SfdFrameInfo_x00196500;
struct SfdPly_x00196500;
typedef int (*SfdTimeFn_x00196500)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00196500 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00196500;
typedef struct SfdTimeRec_x00196500 {
    int valid;
    SfdTimeCode_x00196500 tc;
    int time;
    int unit;
} SfdTimeRec_x00196500;
typedef struct SfdTst_x00196500 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00196500;
typedef struct SfdSyncTally_x00196500 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00196500;
typedef struct SfdSyncQueue_x00196500 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00196500;
typedef struct SfdFieldEntry_x00196500 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00196500;
typedef struct SfdPtsm_x00196500 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00196500;
typedef struct SfdHdrAudio_x00196500 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00196500;
typedef struct SfdHdrMux_x00196500 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00196500;
typedef struct SfdHdrVideo_x00196500 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00196500;
typedef struct SfdHdrInf_x00196500 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00196500 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00196500 audio;
    SfdHdrVideo_x00196500 video;
    int size;
    char data[2048];
} SfdHdrInf_x00196500;
typedef struct SfdMvInf_x00196500 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00196500;
typedef struct SfdPlyInf_x00196500 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00196500;
typedef void (*SfdErrFn_x00196500)(void *obj, int code);
typedef struct SfdErrInf_x00196500 {
    SfdErrFn_x00196500 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00196500;
typedef int (*SfdExtClockFn_x00196500)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00196500)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00196500 {
    SfdTimeFn_x00196500 timefn[6];
    SfdIsSkipFn_x00196500 isSkipFn;
    SfdTimeCode_x00196500 tc;
    SfdTimeRec_x00196500 state;
    SfdTimeRec_x00196500 best;
    SfdTimeRec_x00196500 tot;
    SfdTimeRec_x00196500 cur;
    SfdTimeRec_x00196500 latest;
    SfdTimeRec_x00196500 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00196500 tally;
    SfdSyncQueue_x00196500 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00196500 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00196500 tst;
    SfdFieldEntry_x00196500 fields[64];
    SfdPtsm_x00196500 ptsm;
    char pad1468[36];
} SfdTim_x00196500;
enum {
    SFD_COND_VIDEO_x00196500 = 5,
    SFD_COND_AUDIO_x00196500 = 6,
    SFD_COND_KEEPSUP_x00196500 = 8,
    SFD_COND_SYNCMODE_x00196500 = 15,
    SFD_COND_ETIME_x00196500 = 20,
    SFD_COND_ETUNIT_x00196500 = 21,
    SFD_COND_LNKSTM_x00196500 = 49,
    SFD_COND_SUPPLY_END_x00196500 = 56,
    SFD_COND_DECODE_END_x00196500 = 57,
    SFD_COND_DEMUX_SPLIT_x00196500 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00196500 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00196500 = 80,
    SFD_COND_SYSHD_FN_x00196500 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00196500 = 86,
    SFD_COND_NUM_x00196500 = 100
};
typedef enum SfdBufFmt_x00196500 {
    SFD_BUFFMT_0_x00196500 = 0
} SfdBufFmt_x00196500;
typedef enum SfdBufId_x00196500 {
    SFD_BUF_NONE_x00196500 = 8
} SfdBufId_x00196500;
typedef struct SfdCrePrm_x00196500 {
    struct SfdTrnConfig_x00196500 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00196500 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00196500;
typedef struct SfdItem_x00196500 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00196500;
typedef struct SfdRing_x00196500 {
    SfdItem_x00196500 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00196500;
typedef struct SfdBufInf_x00196500 {
    char *data;
    struct SfdSj_x00196500 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00196500;
typedef struct SfdBufCur_x00196500 {
    char *pos;
    int len;
} SfdBufCur_x00196500;
typedef struct SfdBufDlm_x00196500 {
    char *pos;
    char *end;
} SfdBufDlm_x00196500;
typedef struct SfdBufRing_x00196500 {
    SfdBufInf_x00196500 sup;
    SfdBufDlm_x00196500 dlm;
    int wtot;
    int rtot;
    SfdRing_x00196500 ptsque;
} SfdBufRing_x00196500;
typedef struct SfdBufAring_x00196500 {
    SfdBufInf_x00196500 sup;
    SfdBufCur_x00196500 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00196500;
typedef struct SfdUoch_x00196500 {
    struct SfdSj_x00196500 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00196500;
typedef struct SfdBufEnt_x00196500 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00196500 ring;
        SfdBufAring_x00196500 aring;
        SfdBufInf_x00196500 vfrm;
        SfdUoch_x00196500 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00196500;
typedef int (*SfdTrnFn_x00196500)();
typedef struct SfdTrnConfig_x00196500 {
    SfdTrnFn_x00196500 *fns[9];
} SfdTrnConfig_x00196500;
typedef struct SfdMpsPrm_x00196500 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00196500 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00196500;
typedef struct SfdAdxCfg_x00196500 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00196500;
typedef void (*SfdAdxStep_x00196500)(struct SfdPly_x00196500 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00196500 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00196500 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00196500 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00196500;
typedef struct SfdAoap_x00196500 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00196500 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00196500 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00196500 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00196500 *h);
    void (*setSpeed)(struct SfdPly_x00196500 *h, int speed);
} SfdAoap_x00196500;
typedef struct SfainfOut_x00196500 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00196500;
typedef struct SfainfList_x00196500 {
    int nout;
    SfainfOut_x00196500 out[3];
} SfainfList_x00196500;
typedef struct SfdTrnSlot_x00196500 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00196500 *mps;
        struct SfdMpv_x00196500 *mpv;
        SfdAdxCtx_x00196500 *adxt;
        SfdAoap_x00196500 *aoap;
        SfainfList_x00196500 *uo;
    } hn;
    SfdTrnFn_x00196500 *fns;
    SfdBufId_x00196500 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00196500;
typedef struct SfdTsum_x00196500 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00196500;
typedef struct SfdTmrInf_x00196500 {
    SfdTsum_x00196500 tsum[6];
} SfdTmrInf_x00196500;
int sfd_ReportError_x00196500(void *sfd, int code) __asm__("func_0018D650");
int SFLIB_CheckHn_x00196500(void *sfd) __asm__("func_0018D870");
int SFPL2_Standby_x00196500(void *sfd) __asm__("func_00196548");
struct SfdSj_x00196500;
typedef struct M2vErrInf_x00196500 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00196500;
typedef struct Mpeg2Ext_x00196500 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00196500;
typedef enum M2vFrameRate_x00196500 {
    M2V_FRAME_RATE_FORBIDDEN_x00196500 = 0
} M2vFrameRate_x00196500;
typedef enum M2vPicType_x00196500 {
    M2V_PICTYPE_I_x00196500 = 1,
    M2V_PICTYPE_P_x00196500 = 2,
    M2V_PICTYPE_B_x00196500 = 3,
    M2V_PICTYPE_D_x00196500 = 4
} M2vPicType_x00196500;
typedef enum M2vPicStruct_x00196500 {
    M2V_PICSTRUCT_TOP_FIELD_x00196500 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00196500 = 2,
    M2V_PICSTRUCT_FRAME_x00196500 = 3
} M2vPicStruct_x00196500;
typedef enum M2vPicAtrF64_x00196500 {
    M2V_PICATR_F64_0_x00196500 = 0
} M2vPicAtrF64_x00196500;
typedef struct M2vPicAtr_x00196500 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00196500 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00196500 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00196500 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00196500 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00196500;
typedef void (*M2vUsrDatFn_x00196500)(void *obj, int level);
typedef struct M2vUsrSj_x00196500 {
    struct SfdSj_x00196500 *sj;
    M2vUsrDatFn_x00196500 fn;
    void *obj;
} M2vUsrSj_x00196500;
typedef struct M2vPicUsr_x00196500 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00196500;
typedef void (*M2vCondFn_x00196500)();
typedef struct M2vObj_x00196500 {
    int stat;
    M2vErrInf_x00196500 err;
    M2vCondFn_x00196500 cond[16];
    M2vPicAtr_x00196500 picatr;
    char pad216[64];
    M2vUsrSj_x00196500 usrsj[4];
    M2vPicUsr_x00196500 picusr;
    char pad340[12];
    Mpeg2Ext_x00196500 ext;
    char pad1656[8];
} M2vObj_x00196500;
extern void M2V_SetErrFunc_x00196500(M2vObj_x00196500 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00196500 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00196500;
typedef struct sceMpeg_x00196500 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00196500 *sys;
} sceMpeg_x00196500;
typedef enum {
    sceMpegCbError_x00196500,
    sceMpegCbNodata_x00196500,
    sceMpegCbStopDMA_x00196500,
    sceMpegCbRestartDMA_x00196500,
    sceMpegCbBackground_x00196500,
    sceMpegCbTimeStamp_x00196500,
    sceMpegCbStr_x00196500,
    sceMpegCbNum_x00196500
} sceMpegCbType_x00196500;
typedef struct {
    sceMpegCbType_x00196500 type;
    char *errMessage;
} sceMpegCbDataError_x00196500;
typedef struct {
    sceMpegCbType_x00196500 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00196500;
typedef struct {
    sceMpegCbType_x00196500 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00196500;
typedef union {
    sceMpegCbType_x00196500 type;
    sceMpegCbDataError_x00196500 error;
    sceMpegCbDataTimeStamp_x00196500 ts;
    sceMpegCbDataStr_x00196500 str;
} sceMpegCbData_x00196500;
typedef int (*sceMpegCallback_x00196500)(sceMpeg_x00196500 *mp, sceMpegCbData_x00196500 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00196500 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00196500;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00196500;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00196500;
typedef struct {
    _sceMpegPicture_x00196500 *ref_image;
    _sceMpegPicture_x00196500 *prev_image;
    _sceMpegPicture_x00196500 *decode;
    _sceMpegPicture_x00196500 *image;
} _sceMpegPictureSlot_x00196500;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00196500;
typedef void (*_sceMpegMcKernel_x00196500)(_sceMpegMcFetch_x00196500 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00196500 luma_kernel[4];
    _sceMpegMcKernel_x00196500 chroma_kernel[4];
    _sceMpegMcFetch_x00196500 luma[4];
    _sceMpegMcFetch_x00196500 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00196500;
typedef struct _sceMpegDecoder_x00196500 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00196500 callbacks[sceMpegCbNum_x00196500];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00196500 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00196500 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00196500 slots[3];
    _sceMpegPicture_x00196500 pictures[9];
    _sceMpegSprBuffer_x00196500 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00196500 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00196500;
typedef struct SfdPlanes_x00196500 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00196500;
typedef struct SfdUserData_x00196500 {
    char data[512];
    int size;
} SfdUserData_x00196500;
typedef struct SfdRecVideo_x00196500 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00196500 stamp;
    SfdUserData_x00196500 user;
} SfdRecVideo_x00196500;
typedef struct SfdSlot_x00196500 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00196500 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196500 *blob;
    M2vPicAtr_x00196500 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00196500;
typedef struct SfdBufPool_x00196500 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00196500 slot[18];
} SfdBufPool_x00196500;
typedef struct SfdMpvCond_x00196500 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00196500;
typedef struct SfdMpvWorkBufs_x00196500 {
    int w[2];
} SfdMpvWorkBufs_x00196500;
typedef struct SfdMpvFrameBufs_x00196500 {
    int w[16];
} SfdMpvFrameBufs_x00196500;
typedef struct SfdIpuEntry_x00196500 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00196500;
typedef struct SfdDmaTag_x00196500 {
    long long tag;
    long long pad;
} SfdDmaTag_x00196500;
typedef struct SfdIpuStream_x00196500 {
    void *base;
    SfdDmaTag_x00196500 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00196500 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00196500;
typedef struct SfdIpuCtl_x00196500 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00196500 mpeg;
    SfdIpuStream_x00196500 stream;
    sceMpegCbDataError_x00196500 error;
} SfdIpuCtl_x00196500;
typedef struct SfdPtsComp_x00196500 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00196500 ptsent;
} SfdPtsComp_x00196500;
typedef struct SfdMpv_x00196500 {
    void *handle;
    SfdMpvCond_x00196500 cond;
    SfdMpvWorkBufs_x00196500 work;
    SfdMpvFrameBufs_x00196500 bufs;
    SfdSlot_x00196500 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00196500 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00196500 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00196500 planes[2];
    SfdSlot_x00196500 *first;
    SfdSlot_x00196500 *second;
    SfdSlot_x00196500 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00196500 slots[16];
    SfdBufPool_x00196500 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00196500 ipu;
} SfdMpv_x00196500;
typedef enum SfdPicType_x00196500 {
    SFD_PICTYPE_I_x00196500 = 1,
    SFD_PICTYPE_P_x00196500 = 2,
    SFD_PICTYPE_B_x00196500 = 3
} SfdPicType_x00196500;
typedef enum SfdFrmInfF60_x00196500 {
    SFD_FRMINF_F60_0_x00196500 = 0
} SfdFrmInfF60_x00196500;
typedef struct SfdFrameDetail_x00196500 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00196500;
typedef struct SfdFrameInfo_x00196500 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00196500 picType;
    int time;
    int unit;
    SfdBufFmt_x00196500 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196500 *picUsr;
    SfdFrmInfF60_x00196500 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00196500 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00196500;
typedef struct SfdVfrm_x00196500 {
    int used;
    int f4;
    SfdFrameInfo_x00196500 inf;
} SfdVfrm_x00196500;
typedef struct SfdPly_x00196500 SfdPly_x00196500;
typedef struct SfdRec_x00196500 SfdRec_x00196500;
typedef struct SfdRecSub_x00196500 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00196500;
typedef struct SfdRecSlot_x00196500 {
    SfdRec_x00196500 *rec;
    SfdRecSub_x00196500 sub;
} SfdRecSlot_x00196500;
typedef struct SfdSysHd_x00196500 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00196500;
typedef struct SfdRecSys_x00196500 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00196500 syshd;
} SfdRecSys_x00196500;
typedef struct SfdRecAudio_x00196500 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00196500;
struct SfdRec_x00196500 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00196500 hdrInf;
    SfdRecSys_x00196500 sys;
    char pad2616[152];
    SfdRecVideo_x00196500 video;
    SfdRecAudio_x00196500 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00196500 {
    SfdCrePrm_x00196500 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00196500 hdr;
    SfdMvInf_x00196500 mvInf;
    char pad2380[4];
    SfdPlyInf_x00196500 plyInf;
    SfdErrInf_x00196500 err;
    int cond[SFD_COND_NUM_x00196500];
    int cond2[SFD_COND_NUM_x00196500];
    char pad3364[4];
    SfdTim_x00196500 tim;
    SfdBufEnt_x00196500 buf[8];
    SfdVfrm_x00196500 vfrm[16];
    SfdTrnSlot_x00196500 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00196500 mps;
    char pad8944[176];
    SfdMpv_x00196500 mpv;
    SfdAdxCtx_x00196500 adxt;
    char pad13680[100];
    SfdAoap_x00196500 aoap;
    char pad13804[4];
    SfainfList_x00196500 uo;
    char pad13860[4];
    SfdRecSlot_x00196500 see;
    SfdTmrInf_x00196500 tmr;
};
int SFPL2_Standby_x00196500(void *sfd) __asm__("func_00196548");
int func_00196500_x00196500(void *sfd) __asm__("func_00196500");
/* SFD_Standby: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00196500_x00196500(void *sfd) {
    SfdPly_x00196500 *h = sfd;
    if (SFLIB_CheckHn_x00196500(h) != 0) {
        return sfd_ReportError_x00196500(0, 0xFF000143);
    }
    return SFPL2_Standby_x00196500(h);
}
s32 func_00196548(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 3;
    return 0;
}
s32 func_00196558(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000144);
    }
    func_0019B938(arg0, arg1);
    func_00189DE8(arg0, arg1);
    return 0;
}
s32 func_0018D650_x001965C8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x001965C8() __asm__("func_0018D870");
s32 func_00199818_x001965C8(s32, s32, s32) __asm__("func_00199818");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) __asm__("func_001965C8");
s32 func_001965C8_x001965C8(s32 arg0, s32 arg1) {
    if (func_0018D870_x001965C8() != 0) {
        return func_0018D650_x001965C8(0, 0xFF000145, arg1);
    }
    func_00199818_x001965C8(arg0, 0x1E, arg1);
    return 0;
}
s32 func_0018D650_x00196638(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00196638() __asm__("func_0018D870");
s32 func_00199818_x00196638(s32, s32, s32) __asm__("func_00199818");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) __asm__("func_00196638");
s32 func_00196638_x00196638(s32 arg0, s32 arg1) {
    if (func_0018D870_x00196638() != 0) {
        return func_0018D650_x00196638(0, 0xFF000146, arg1);
    }
    func_00199818_x00196638(arg0, 0x1D, arg1);
    return 0;
}
void func_001966A8(void) {
    func_001966C0();
}
s32 func_0018D650_x001966C0(s32, s32) __asm__("func_0018D650");
extern s32 D_004676A4_x001966C0 __asm__("D_004676A4");
void func_001966C0_x001966C0(void) __asm__("func_001966C0");
void func_001966C0_x001966C0(void) {
    if (D_004676A4_x001966C0 != 0x5A5A5A5A) {
        func_0018D650_x001966C0(0, 0xFF000201);
    }
}
void func_00196708(void) {
    func_0019A160();
}
void func_00196720(void) {

}
typedef unsigned char u8_x00196728;
typedef unsigned int u32_x00196728;
typedef struct MovieModuleState_x00196728 {
    u8_x00196728 _pad_0[0x44];
    u32_x00196728 field_44;
    u32_x00196728 field_48;
} MovieModuleState_x00196728;
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) __asm__("func_00196728");
/* fn_12_2CD44: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CD44.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u32_x00196728 func_00196728_x00196728(MovieModuleState_x00196728 *state) {
    if (state->field_48 - 1 > 3) {
        return 1;
    }
    return state->field_44 == 0;
}
s32 func_00196728_x00196750(s32) __asm__("func_00196728");
extern s32 D_00426AE4_x00196750 __asm__("D_00426AE4");
s32 func_00196750_x00196750(void) __asm__("func_00196750");
s32 func_00196750_x00196750(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;

    var_s0 = &D_00426AE4_x00196750;
    var_s1 = 0;
loop_1:
    temp_v0 = *var_s0;
    var_s0 += 1;
    if ((temp_v0 == 0) || (var_v0 = func_00196728_x00196750(temp_v0), (var_v0 != 0))) {
        var_s1 += 1;
        if (var_s1 >= 8) {
            var_v0 = 1;
        } else {
            goto loop_1;
        }
    }
    return var_v0;
}
typedef unsigned char u8_x001967B8;
typedef unsigned int u32_x001967B8;
typedef struct MovieModuleState_x001967B8 {
    u8_x001967B8 _pad_0[0x44];
    u32_x001967B8 field_44;
} MovieModuleState_x001967B8;
extern int fn_12_24990_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_0018D870");
extern int fn_12_24A88_x001967B8(int arg0, u32_x001967B8 arg1) __asm__("func_0018D650");
extern void fn_12_2C9C4_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_00196868");
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) __asm__("func_001967B8");
/* fn_12_2CC24: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2CC24.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_001967B8_x001967B8(MovieModuleState_x001967B8 *state) {
    if (fn_12_24990_x001967B8(state)) {
        return fn_12_24A88_x001967B8(0, 0xFF000138);
    }
    state->field_44 = 1;
    fn_12_2C9C4_x001967B8(state);
    return 0;
}
s32 func_00196868_x00196810(s32) __asm__("func_00196868");
s32 func_001976B8_x00196810() __asm__("func_001976B8");
extern s32 D_00426AE4_x00196810 __asm__("D_00426AE4");
void func_00196810_x00196810(void) __asm__("func_00196810");
void func_00196810_x00196810(void) {
    s32 *var_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s0 = &D_00426AE4_x00196810;
    var_s1 = 7;
    do {
        temp_v0 = *var_s0;
        var_s0 += 1;
        if (temp_v0 != 0) {
            func_00196868_x00196810(temp_v0);
        }
        var_s1 -= 1;
    } while (var_s1 >= 0);
    func_001976B8_x00196810();
}
s64 func_001A1630_x00196868(void) __asm__("func_001A1630");
void func_00196980_x00196868(u8 *) __asm__("func_00196980");
s32 func_001969C0_x00196868(u8 *) __asm__("func_001969C0");
s32 func_001969F0_x00196868(u8 *) __asm__("func_001969F0");
s32 func_00196D88_x00196868(u8 *) __asm__("func_00196D88");
s32 func_00196E28_x00196868(u8 *) __asm__("func_00196E28");
s32 func_00196E98_x00196868(u8 *) __asm__("func_00196E98");
void func_0019B968_x00196868(u8 *, s64) __asm__("func_0019B968");
void func_00196868_x00196868(u8 *p) __asm__("func_00196868");
void func_00196868_x00196868(u8 *p)
{
    s32 st;
    s64 t0;

    st = *(s32 *)(p + 0x48);
    if ((u32)(st - 1) >= 4) {
        return;
    }
    if (*(s32 *)(p + 0x44) == 0) {
        return;
    }
    *(volatile s32 *)(p + 0x44) = 0;
    t0 = func_001A1630_x00196868();
    if ((u32)(st - 2) < 3) {
        func_00196980_x00196868(p);
    }
    st = *(s32 *)(p + 0x48);
    switch (st) {
    case 0:
        break;
    case 1:
        st = func_001969C0_x00196868(p);
        break;
    case 2:
        st = func_001969F0_x00196868(p);
        break;
    case 3:
        st = func_00196D88_x00196868(p);
        break;
    case 4:
        st = func_00196E28_x00196868(p);
        break;
    case 5:
        break;
    case 6:
        st = func_00196E98_x00196868(p);
        break;
    }
    *(s32 *)(p + 0x48) = st;
    func_0019B968_x00196868(p + 0x3298, func_001A1630_x00196868() - t0);
}
__asm__("# rebind func_00196868 0x00196868");
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p32_065a1a_0_x __asm__("b3cse_asmpad_065a1a_0_xx");
void func_00196980(s32 arg0) {
    func_001969A8();
    func_00198C30(arg0);
}
s32 func_0019C040_x001969A8(s32, s32) __asm__("func_0019C040");
void func_001969A8_x001969A8(s32 a0) __asm__("func_001969A8");
void func_001969A8_x001969A8(s32 a0) {
    func_0019C040_x001969A8(a0, 2);
}
s32 func_001969C0(u8 *arg0) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x4C);
    var_a1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 >= 2) && ((temp_v1 < 5) || (temp_v1 == 6))) {
        var_a1 = 2;
    }
    return var_a1;
}
int sfply_IsPrepEnd_x001969F0(void*) __asm__("func_00196AB0");
void sfply_AdjustPrepEnd_x001969F0(void*) __asm__("func_00196B60");
void sfply_TrStart_x001969F0(void*) __asm__("func_00197DC0");
int func_00357988_x001969F0(void*) __asm__("func_00196EA0");
int func_001969F0_x001969F0(int *a0) __asm__("func_001969F0");
/* func_003574D8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324040.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001969F0_x001969F0(int *a0) {
    int ret = a0[0x12];
    int sel = a0[0x13];
    if (sfply_IsPrepEnd_x001969F0(a0) == 0) {
        return ret;
    }
    sfply_AdjustPrepEnd_x001969F0(a0);
    switch (sel) {
        case 2:
            ret = 2;
            break;
        case 4:
        case 6:
            if (func_00357988_x001969F0(a0) != 0) {
                sfply_TrStart_x001969F0(a0);
                ret = 4;
                break;
            }
        case 3:
            ret = 3;
            break;
    }
    return ret;
}
typedef unsigned char Uint8_x00196AB0;
typedef signed char Sint8_x00196AB0;
typedef signed short Sint16_x00196AB0;
typedef unsigned int Uint32_x00196AB0;
typedef signed int Sint32_x00196AB0;
typedef signed long long Sint64_x00196AB0;
typedef char Char8_x00196AB0;
typedef Sint32_x00196AB0 Bool_x00196AB0;
typedef struct SJ_OBJ_x00196AB0 *SJ_x00196AB0;
typedef struct {
        Uint8_x00196AB0 *data;
        Sint32_x00196AB0 len;
} SJCK_x00196AB0;
typedef struct {
        Uint8_x00196AB0 data[16];
} SJUUID_x00196AB0;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00196AB0 sj);
        const SJUUID_x00196AB0 *(*GetUuid)(SJ_x00196AB0 sj);
        void (*Reset)(SJ_x00196AB0 sj);
        void (*GetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, Sint32_x00196AB0 nbyte, SJCK_x00196AB0 *ck);
        void (*UngetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, SJCK_x00196AB0 *ck);
        void (*PutChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, SJCK_x00196AB0 *ck);
        Sint32_x00196AB0 (*GetNumData)(SJ_x00196AB0 sj, Sint32_x00196AB0 id);
        Sint32_x00196AB0 (*IsGetChunk)(SJ_x00196AB0 sj, Sint32_x00196AB0 id, Sint32_x00196AB0 nbyte, Sint32_x00196AB0 *rbyte);
        void (*EntryErrFunc)(SJ_x00196AB0 sj, void (*func)(void *obj, Char8_x00196AB0 *msg), void *obj);
} SJ_IF_x00196AB0;
struct SJ_OBJ_x00196AB0 {
        SJ_IF_x00196AB0 *vtbl;
};
typedef struct SFD_OBJ_x00196AB0 *SFD_x00196AB0;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00196AB0 rsv1;
        Sint32_x00196AB0 rsv2;
} SFUO_CH_x00196AB0;
typedef struct {
        Sint32_x00196AB0 nch;
        SFUO_CH_x00196AB0 ch[3];
} SFUO_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Sint32_x00196AB0 (*SetOutPan)(SFD_x00196AB0 sfd, Sint32_x00196AB0 ch, Sint32_x00196AB0 pan);
        Sint32_x00196AB0 (*GetOutPan)(SFD_x00196AB0 sfd, Sint32_x00196AB0 ch);
        Sint32_x00196AB0 (*SetOutVol)(SFD_x00196AB0 sfd, Sint32_x00196AB0 vol);
        Sint32_x00196AB0 (*GetOutVol)(SFD_x00196AB0 sfd);
        void (*SetSpeed)(SFD_x00196AB0 sfd, Sint32_x00196AB0 speed);
        Sint32_x00196AB0 x18;
} SFAOAP_x00196AB0;
typedef struct {
        Uint8_x00196AB0 pad0[0xB8];
        Sint32_x00196AB0 tottime;
        Sint32_x00196AB0 tunit;
        Uint8_x00196AB0 padc0[0x150 - 0xC0];
        Sint64_x00196AB0 scr_base;
        Sint64_x00196AB0 scr_ofst;
        Sint32_x00196AB0 pad160;
        Sint32_x00196AB0 ctime;
        Sint32_x00196AB0 ctime_idx;
        Sint32_x00196AB0 ctime_que[32];
        Sint32_x00196AB0 tot_last;
        Sint32_x00196AB0 pad1F0;
        Sint32_x00196AB0 que_wr;
        Sint32_x00196AB0 que_rd;
        Sint32_x00196AB0 tot_que[32];
} SFCON_x00196AB0;
typedef struct {
        Sint32_x00196AB0 type;
        Sint32_x00196AB0 drop;
        Sint32_x00196AB0 hour;
        Sint32_x00196AB0 min;
        Sint32_x00196AB0 sec;
        Sint32_x00196AB0 frm;
        Sint32_x00196AB0 frm2;
        Sint16_x00196AB0 x1c;
        Sint16_x00196AB0 field;
} SFTIM_TC_x00196AB0;
typedef struct {
        Sint32_x00196AB0 valid;
        SFTIM_TC_x00196AB0 tc;
        Sint32_x00196AB0 val;
        Sint32_x00196AB0 unit;
} SFTIM_TTU_x00196AB0;
typedef struct {
        Sint64_x00196AB0 pts;
        Uint32_x00196AB0 pos;
        Uint32_x00196AB0 len;
} SFPTS_ENT_x00196AB0;
typedef struct {
        SFPTS_ENT_x00196AB0 *ent;
        Sint32_x00196AB0 num;
        Sint32_x00196AB0 cnt;
        Sint32_x00196AB0 wr;
        Sint32_x00196AB0 rd;
} SFPTS_QUE_x00196AB0;
typedef struct {
        Sint32_x00196AB0 raw[0x20];
} SFD_VFRM_INF_x00196AB0;
typedef struct {
        void *frm;
        Sint32_x00196AB0 x04;
        SFD_VFRM_INF_x00196AB0 inf;
} SFD_VFRM_x00196AB0;
typedef struct {
        Sint32_x00196AB0 kind;
        SJ_x00196AB0 sj;
        Uint32_x00196AB0 ofst;
        Sint32_x00196AB0 size;
        Sint32_x00196AB0 xsize;
        Sint32_x00196AB0 x14;
} SFBUF_SUP_x00196AB0;
typedef struct {
        SFBUF_SUP_x00196AB0 sup;
        Uint8_x00196AB0 *dlm_pos;
        Sint32_x00196AB0 dlm_len;
        Sint32_x00196AB0 wtot;
        Sint32_x00196AB0 rtot;
        SFPTS_QUE_x00196AB0 ptsque;
} SFBUF_RING_x00196AB0;
typedef struct {
        Sint32_x00196AB0 mode;
        Sint32_x00196AB0 used;
        Sint32_x00196AB0 prepflg;
        Sint32_x00196AB0 termflg;
        union {
                SFBUF_RING_x00196AB0 ring;
                struct {
                        Uint32_x00196AB0 adr;
                        Sint32_x00196AB0 size;
                        Sint32_x00196AB0 x18;
                        Sint32_x00196AB0 x1c;
                        SFD_VFRM_x00196AB0 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00196AB0 adr;
                        Sint32_x00196AB0 size;
                        Sint32_x00196AB0 rsv[7];
                        Sint32_x00196AB0 rsv2[3];
                } aout;
                SFUO_CH_x00196AB0 uoch[3];
        } u;
        Sint32_x00196AB0 in_tr;
        Sint32_x00196AB0 out_tr;
        Sint32_x00196AB0 rsv[8];
} SFBUF_WORK_x00196AB0;
typedef Sint32_x00196AB0 (*SFD_TR_FUNC_x00196AB0)();
typedef struct {
        Sint32_x00196AB0 prepflg;
        Sint32_x00196AB0 termflg;
        void *hn;
        SFD_TR_FUNC_x00196AB0 *trif;
        Sint32_x00196AB0 bufin;
        Sint32_x00196AB0 bufout;
        Sint32_x00196AB0 bufout2;
        Sint32_x00196AB0 bufout3;
        Sint32_x00196AB0 x20;
        Uint8_x00196AB0 pad24[0x44 - 0x24];
} SFD_TR_x00196AB0;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00196AB0 cwidth;
        Sint16_x00196AB0 ywidth;
} SFMPV_PLANE_x00196AB0;
typedef struct {
        void *buf;
        Sint32_x00196AB0 len;
} SFMPV_PICUSR_x00196AB0;
typedef struct {
        Sint32_x00196AB0 stat;
        Sint32_x00196AB0 lock;
        void *buf;
        SFTIM_TTU_x00196AB0 ttu;
        Sint32_x00196AB0 ftime;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 ndct;
        Sint32_x00196AB0 nbyte;
        Sint32_x00196AB0 gopno;
        Sint32_x00196AB0 x4c;
        Sint32_x00196AB0 x50;
        SFMPV_PICUSR_x00196AB0 *picusr;
        Sint32_x00196AB0 pa_width;
        Sint32_x00196AB0 pa_height;
        Sint32_x00196AB0 pa_mb_width;
        Sint32_x00196AB0 pa_mb_height;
        Sint32_x00196AB0 pa_frame_rate;
        Sint32_x00196AB0 tmpref;
        Sint32_x00196AB0 pa_pic_type;
        Sint32_x00196AB0 pa_tc_drop;
        Sint32_x00196AB0 pa_tc_hour;
        Sint32_x00196AB0 pa_tc_min;
        Sint32_x00196AB0 pa_tc_sec;
        Sint32_x00196AB0 pa_tc_pic;
        Sint32_x00196AB0 x88;
        Sint32_x00196AB0 x8c;
        Sint32_x00196AB0 pa_x90[3];
        Sint32_x00196AB0 pa_x9c[3];
        Sint16_x00196AB0 pa_xa8;
        Sint16_x00196AB0 pa_xaa;
        Sint8_x00196AB0 pa_xac;
        Sint8_x00196AB0 pa_xad;
        Sint8_x00196AB0 pa_xae;
        Sint8_x00196AB0 pa_xaf;
        Sint8_x00196AB0 pa_xb0;
        Sint8_x00196AB0 pa_xb1;
        Sint8_x00196AB0 pa_xb2;
        Sint8_x00196AB0 pa_xb3;
        Sint8_x00196AB0 pa_xb4;
        Sint8_x00196AB0 pa_xb5;
        Sint8_x00196AB0 pa_xb6;
        Sint8_x00196AB0 pa_xb7;
        Sint8_x00196AB0 pa_xb8;
        Sint8_x00196AB0 pa_xb9;
        Sint8_x00196AB0 pa_xba;
        Sint8_x00196AB0 pa_xbb;
        Sint8_x00196AB0 pa_xbc;
        Uint8_x00196AB0 padbd[0xD8 - 0xBD];
        Sint64_x00196AB0 pts;
} SFMPV_FRM_x00196AB0;
typedef struct {
        Sint32_x00196AB0 cwidth;
        Sint32_x00196AB0 cheight;
        Sint32_x00196AB0 width;
        Sint32_x00196AB0 height;
        Sint32_x00196AB0 x10;
        Sint32_x00196AB0 max_width;
        Sint32_x00196AB0 max_height;
        Sint32_x00196AB0 nfrm;
        Sint32_x00196AB0 x20;
} SFMPV_PARA_x00196AB0;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00196AB0 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00196AB0 *curfrm;
        Sint32_x00196AB0 picstat;
        Sint32_x00196AB0 dlmmask;
        Sint32_x00196AB0 termflg;
        Sint32_x00196AB0 gopstat;
        Sint32_x00196AB0 nskip;
        Sint32_x00196AB0 nconcat;
        Uint8_x00196AB0 picatr[0x80];
        Sint32_x00196AB0 last_ngop;
        Sint32_x00196AB0 newgop;
        Sint32_x00196AB0 vbvsiz;
        Sint32_x00196AB0 pts_tmpref;
        Sint32_x00196AB0 pts_ofst;
        Sint32_x00196AB0 pts_max;
        Sint32_x00196AB0 pad124;
        SFPTS_ENT_x00196AB0 ptsent;
        Sint32_x00196AB0 refidx[2];
        SFMPV_PLANE_x00196AB0 rfbuf[2];
        SFMPV_FRM_x00196AB0 *ref[2];
        SFMPV_FRM_x00196AB0 *pendfrm;
        Sint32_x00196AB0 skipret;
        Sint32_x00196AB0 dlmwait;
        Sint32_x00196AB0 tmpref_adj;
        Sint32_x00196AB0 nfrm;
        Sint32_x00196AB0 pad17c;
        SFMPV_FRM_x00196AB0 frm[16];
        void *picusr_buf;
        Sint32_x00196AB0 picusr_num;
        Sint32_x00196AB0 picusr_siz;
        Uint8_x00196AB0 *picusr_dat;
        Sint32_x00196AB0 picusr_len;
        SFMPV_PICUSR_x00196AB0 picusr[16];
        Sint32_x00196AB0 pad1014;
        Sint64_x00196AB0 pts;
} SFMPV_WORK_x00196AB0;
typedef struct {
        Sint32_x00196AB0 raw[0x2A];
} SFD_PLYINF_x00196AB0 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00196AB0 code);
        void *obj;
        Sint32_x00196AB0 code;
        Sint32_x00196AB0 x0c;
        Sint32_x00196AB0 x10;
} SFLIB_ERRINF_x00196AB0;
typedef struct {
        Sint32_x00196AB0 codec;
        Sint32_x00196AB0 layer;
        Sint32_x00196AB0 chnum;
        Sint32_x00196AB0 smphz;
} SFHDS_AUD_x00196AB0;
typedef struct {
        Sint32_x00196AB0 codec;
        Sint32_x00196AB0 bitrate;
        Sint32_x00196AB0 picw;
        Sint32_x00196AB0 pich;
        Sint32_x00196AB0 picrate;
        Sint32_x00196AB0 ftr_eff;
        Sint32_x00196AB0 ftr_coltype;
        Sint32_x00196AB0 ftr_pictype;
        Sint32_x00196AB0 ftr_fixflg;
        Sint32_x00196AB0 ftr_shcfixflg;
        Sint32_x00196AB0 ftr_expand;
        Sint32_x00196AB0 ftr_gopn;
        Sint32_x00196AB0 ftr_gopm;
} SFHDS_VID_x00196AB0;
typedef struct {
        Sint32_x00196AB0 valid;
        Sint32_x00196AB0 ver_major;
        Sint32_x00196AB0 ver_minor;
        Sint32_x00196AB0 byterate;
        Sint32_x00196AB0 hdrsiz;
        Sint32_x00196AB0 packtype;
        Sint32_x00196AB0 pketsizlen;
        Sint32_x00196AB0 packsiz;
        Sint32_x00196AB0 numelem_tot;
        Sint32_x00196AB0 numelem_aud;
        Sint32_x00196AB0 numelem_vid;
        Sint32_x00196AB0 numelem_prv;
        Sint32_x00196AB0 maxplylen_aud;
        Sint32_x00196AB0 maxplylen_vid;
        Sint32_x00196AB0 maxfrmnum;
        Sint32_x00196AB0 stmid_prv1;
        Sint32_x00196AB0 stmid_prv2;
        Sint32_x00196AB0 stmid_aud;
        Sint32_x00196AB0 stmid_vid;
        SFHDS_AUD_x00196AB0 aud;
        SFHDS_VID_x00196AB0 vid;
        Sint32_x00196AB0 rawsiz;
        Uint8_x00196AB0 raw[0x800];
} SFHDS_FHD_x00196AB0;
typedef struct {
        Uint8_x00196AB0 data[2][0xB0];
        Sint32_x00196AB0 len[2];
} SFSEE_SYSHD_x00196AB0;
typedef struct {
        Sint32_x00196AB0 analyzed;
        Sint32_x00196AB0 ncount;
        Sint32_x00196AB0 tscale;
        Sint32_x00196AB0 nvid;
        Sint32_x00196AB0 naud;
        Sint32_x00196AB0 pad14;
        Sint64_x00196AB0 scr_base;
        Sint64_x00196AB0 pts_min;
        Sint32_x00196AB0 stmid_vid;
        Sint32_x00196AB0 stmid_aud;
        SFSEE_SYSHD_x00196AB0 syshd;
} SFSEE_SHDR_x00196AB0;
typedef struct {
        Sint32_x00196AB0 analyzed;
        Sint32_x00196AB0 ncount;
        Sint32_x00196AB0 tscale;
        SFHDS_FHD_x00196AB0 fhd;
        SFSEE_SHDR_x00196AB0 shdr;
        Uint8_x00196AB0 pada38[0xAD0 - 0xA38];
        Sint32_x00196AB0 a1hdr;
        Sint32_x00196AB0 a1ncount;
        Sint32_x00196AB0 a1tscale;
        Uint8_x00196AB0 padadc[0xD0C - 0xADC];
        Sint32_x00196AB0 a2hdr;
        Sint32_x00196AB0 a2ncount;
        Sint32_x00196AB0 a2tscale;
        Uint8_x00196AB0 padd18[0xDA8 - 0xD18];
        Sint32_x00196AB0 rate;
        Sint32_x00196AB0 fsize_est;
        Sint32_x00196AB0 tot_est;
        Sint32_x00196AB0 tunit_est;
        Sint32_x00196AB0 av_a;
        Sint32_x00196AB0 av_b;
        Sint32_x00196AB0 paddc0;
        Sint32_x00196AB0 fsize;
        Sint32_x00196AB0 tottime;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 byterate;
        Sint32_x00196AB0 seekpos;
} SFSEE_WORK_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Sint32_x00196AB0 pos;
        Sint32_x00196AB0 x08;
} SFSEE_REQ_x00196AB0;
typedef struct {
        Sint32_x00196AB0 bsize;
        Sint32_x00196AB0 xsize;
        void *buf;
        Sint32_x00196AB0 maxnch;
        Sint32_x00196AB0 x10;
        Sint32_x00196AB0 worksize;
        void *work;
} SFADXT_PARA_x00196AB0;
typedef struct {
        void *adxt;
        SJ_x00196AB0 sj;
        SFADXT_PARA_x00196AB0 para;
        Sint32_x00196AB0 tcount;
        Sint32_x00196AB0 tunit;
        Sint32_x00196AB0 pause;
        Sint32_x00196AB0 discard;
        Sint32_x00196AB0 seekflg;
        Sint32_x00196AB0 smplofst;
        void (*func)(SFD_x00196AB0 sfd, Uint8_x00196AB0 *data, Sint32_x00196AB0 len, Sint32_x00196AB0 *nbyte);
        Sint32_x00196AB0 x40;
        Sint32_x00196AB0 svrfreq;
        Sint32_x00196AB0 totbyte;
        Sint32_x00196AB0 x4c;
} SFADXT_WORK_x00196AB0;
typedef struct {
        SFSEE_WORK_x00196AB0 *wk;
        SFSEE_REQ_x00196AB0 req;
} SFSEE_HN_x00196AB0;
typedef struct {
        Sint32_x00196AB0 x00;
        Uint32_x00196AB0 adr;
        Sint32_x00196AB0 size[7];
        Sint32_x00196AB0 x24;
        Sint32_x00196AB0 unit;
        Sint32_x00196AB0 x2c;
        Sint32_x00196AB0 x30;
        Sint32_x00196AB0 x34;
        Sint32_x00196AB0 x38;
        void *hnwork;
        Sint32_x00196AB0 hnwksiz;
} SFD_CREPRM_x00196AB0;
typedef struct {
        void *x00;
        Sint32_x00196AB0 x04;
        Sint32_x00196AB0 x08;
} SFPLY_PTSM_x00196AB0;
typedef struct {
        Sint64_x00196AB0 sum;
        Sint64_x00196AB0 min;
        Sint64_x00196AB0 max;
        Sint32_x00196AB0 cnt;
} SFTMR_TSUM_x00196AB0;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00196AB0 nvid;
        Sint32_x00196AB0 naud;
        Sint32_x00196AB0 x0c;
        Sint64_x00196AB0 pts_min;
        Sint64_x00196AB0 pts_min2;
        Sint32_x00196AB0 concat_cnt;
        Sint32_x00196AB0 last_vid;
        Sint32_x00196AB0 last_aud;
        Sint32_x00196AB0 first_vid;
        Sint32_x00196AB0 first_aud;
        Sint32_x00196AB0 cur_vid;
        Sint32_x00196AB0 cur_aud;
        Sint32_x00196AB0 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00196AB0 stmid);
        void *outobj;
        Sint32_x00196AB0 skip;
        Sint32_x00196AB0 x15c;
        Sint32_x00196AB0 x160;
        Sint32_x00196AB0 x164;
} SFMPS_WORK_x00196AB0;
typedef struct SFD_OBJ_x00196AB0 {
        SFD_CREPRM_x00196AB0 prm;
        Sint32_x00196AB0 chg_flg;
        Sint32_x00196AB0 stat;
        Sint32_x00196AB0 req;
        Sint32_x00196AB0 pause_sw;
        Sint32_x00196AB0 pause_cnt;
        Uint8_x00196AB0 pad58[0x74 - 0x58];
        Sint32_x00196AB0 pad74;
        SFHDS_FHD_x00196AB0 fhd;
        Sint32_x00196AB0 x90c;
        Sint32_x00196AB0 x910;
        Sint32_x00196AB0 x914;
        Sint32_x00196AB0 x918;
        Sint32_x00196AB0 x91c;
        Sint32_x00196AB0 picrate;
        Sint32_x00196AB0 x924;
        Sint32_x00196AB0 x928;
        Sint32_x00196AB0 x92c;
        Sint32_x00196AB0 numelem_aud;
        Sint32_x00196AB0 numelem_vid;
        Sint32_x00196AB0 numelem_prv;
        Sint32_x00196AB0 x93c;
        Sint32_x00196AB0 x940;
        Sint32_x00196AB0 x944;
        Sint32_x00196AB0 x948;
        Sint32_x00196AB0 x94c;
        SFD_PLYINF_x00196AB0 plyinf;
        SFLIB_ERRINF_x00196AB0 err;
        Sint32_x00196AB0 cond[100];
        Sint32_x00196AB0 cond_def[100];
        Uint8_x00196AB0 padD24[4];
        SFCON_x00196AB0 con;
        Uint8_x00196AB0 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00196AB0))];
        Uint8_x00196AB0 tst[0x1C0];
        Uint8_x00196AB0 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00196AB0 ptsm;
        Uint8_x00196AB0 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00196AB0 buf[8];
        SFD_VFRM_x00196AB0 vfrm[16];
        SFD_TR_x00196AB0 tr[9];
        Sint32_x00196AB0 pad218c;
        SFMPS_WORK_x00196AB0 mps;
        Uint8_x00196AB0 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00196AB0 mpv;
        SFADXT_WORK_x00196AB0 adxt;
        Uint8_x00196AB0 pad3410[0x3474 - 0x3410];
        SFAOAP_x00196AB0 aoap;
        SFUO_x00196AB0 uo_tbl;
        Sint32_x00196AB0 pad34c4;
        SFSEE_HN_x00196AB0 see;
        SFTMR_TSUM_x00196AB0 tsum[6];
} SFD_OBJ_x00196AB0;
Sint32_x00196AB0 SFSET_GetCond_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_001999E0");
Sint32_x00196AB0 SFTRN_GetTermFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C170");
Sint32_x00196AB0 SFTRN_GetPrepFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C140");
extern Sint32_x00196AB0 SFTRN_GetPrepFlg_x00196AB0(SFD_x00196AB0 sfd, Sint32_x00196AB0 id) __asm__("func_0019C140");
extern void (*SFPLY_recordgetfrm_x00196AB0)(SFD_x00196AB0 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00196AB0)(SFPLY_PTSM_x00196AB0 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00196AB0)(SFPLY_PTSM_x00196AB0 *ptsm) __asm__("SFPLY_ResetPtsm");
Bool_x00196AB0 func_00196AB0_x00196AB0(SFD_x00196AB0 sfd) __asm__("func_00196AB0");
/* sfply_IsPrepared: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x00196AB0 func_00196AB0_x00196AB0(SFD_x00196AB0 sfd)
{
        Bool_x00196AB0 vprep;
        Bool_x00196AB0 aprep;
        if (SFSET_GetCond_x00196AB0(sfd, 5) == 0) {
                vprep = 1;
        } else {
                vprep = SFTRN_GetPrepFlg_x00196AB0(sfd, 6);
                vprep |= SFTRN_GetTermFlg_x00196AB0(sfd, 6);
        }
        if (SFSET_GetCond_x00196AB0(sfd, 6) == 0) {
                aprep = 1;
        } else {
                aprep = SFTRN_GetPrepFlg_x00196AB0(sfd, 7);
                aprep |= SFTRN_GetTermFlg_x00196AB0(sfd, 7);
        }
        if (vprep == 0 || aprep == 0) {
                return 0;
        }
        return 1;
}
void func_00196B60(s32 arg0) {
    func_00196B90();
    func_00196C38(arg0);
    func_00196CC0(arg0);
}
typedef struct { u8 pad[0x14]; s32 a; s32 b; } Sfd9A0_x00196B90_x00196B90;
s32 func_0018AFB8_x00196B90(s32, s32) __asm__("func_0018AFB8");
s32 func_0018AF98_x00196B90(s32, s32) __asm__("func_0018AF98");
void func_00198C00_x00196B90(s32, s32, s32) __asm__("func_00198C00");
void func_00196B90_x00196B90(s32 a0) __asm__("func_00196B90");
void func_00196B90_x00196B90(s32 a0)
{
    Sfd9A0_x00196B90_x00196B90 *h = (Sfd9A0_x00196B90_x00196B90 *)(a0 + 0x9A0);

    if (h->a == 1 && func_0018AFB8_x00196B90(a0, 1) == 0 && func_0018AF98_x00196B90(a0, 1) == 0) {
        h->a = 0;
    }
    if (h->b == 1 && func_0018AFB8_x00196B90(a0, 2) == 0 && func_0018AF98_x00196B90(a0, 2) == 0) {
        h->b = 0;
    }
    func_00198C00_x00196B90(a0, h->a, h->b);
}
s32 func_00199818_x00196C38() __asm__("func_00199818");
void func_00196C38_x00196C38(s32 arg0) __asm__("func_00196C38");
void func_00196C38_x00196C38(s32 arg0) {
    u8 *temp_s0;

    temp_s0 = arg0 + 0x9A0;
    if (*(s32 *)((u8 *)temp_s0 + 0x18) != 0) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 2) {
        goto block_3;
    }
    func_00199818_x00196C38(arg0, 0xF, 1);
block_3:
    if (*(s32 *)((u8 *)temp_s0 + 0x14) == 0) {
        goto block_5;
    }
    return;
block_5:
    if (*(s32 *)((u8 *)temp_s0 + 0x3C) != 1) {
        goto block_9;
    }
    func_00199818_x00196C38(arg0, 0xF, 2);
    return;
block_9:
    return;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196CC0);
typedef struct SfdSj_x00196D88 SfdSj_x00196D88;
typedef struct SfdSjChunk_x00196D88 {
    char *data;
    int len;
} SfdSjChunk_x00196D88;
typedef struct SfdSjVtbl_x00196D88 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00196D88 *sj);
    int (*getUuid)(SfdSj_x00196D88 *sj);
    void (*reset)(SfdSj_x00196D88 *sj);
    void (*getChunk)(SfdSj_x00196D88 *sj, int id, int n, SfdSjChunk_x00196D88 *ck);
    void (*ungetChunk)(SfdSj_x00196D88 *sj, int id, SfdSjChunk_x00196D88 *ck);
    void (*putChunk)(SfdSj_x00196D88 *sj, int id, SfdSjChunk_x00196D88 *ck);
    int (*getNumData)(SfdSj_x00196D88 *sj, int id);
} SfdSjVtbl_x00196D88;
struct SfdSj_x00196D88 {
    SfdSjVtbl_x00196D88 *vtbl;
};
struct SfdSj_x00196D88;
struct SfdRecSlot_x00196D88;
struct SfdRec_x00196D88;
struct SfdMpvCond_x00196D88;
struct SfdPlanes_x00196D88;
struct SfdFrameInfo_x00196D88;
struct SfdPly_x00196D88;
typedef int (*SfdTimeFn_x00196D88)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00196D88 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00196D88;
typedef struct SfdTimeRec_x00196D88 {
    int valid;
    SfdTimeCode_x00196D88 tc;
    int time;
    int unit;
} SfdTimeRec_x00196D88;
typedef struct SfdTst_x00196D88 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00196D88;
typedef struct SfdSyncTally_x00196D88 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00196D88;
typedef struct SfdSyncQueue_x00196D88 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00196D88;
typedef struct SfdFieldEntry_x00196D88 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00196D88;
typedef struct SfdPtsm_x00196D88 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00196D88;
typedef struct SfdHdrAudio_x00196D88 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00196D88;
typedef struct SfdHdrMux_x00196D88 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00196D88;
typedef struct SfdHdrVideo_x00196D88 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00196D88;
typedef struct SfdHdrInf_x00196D88 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00196D88 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00196D88 audio;
    SfdHdrVideo_x00196D88 video;
    int size;
    char data[2048];
} SfdHdrInf_x00196D88;
typedef struct SfdMvInf_x00196D88 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00196D88;
typedef struct SfdPlyInf_x00196D88 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00196D88;
typedef void (*SfdErrFn_x00196D88)(void *obj, int code);
typedef struct SfdErrInf_x00196D88 {
    SfdErrFn_x00196D88 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00196D88;
typedef int (*SfdExtClockFn_x00196D88)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00196D88)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00196D88 {
    SfdTimeFn_x00196D88 timefn[6];
    SfdIsSkipFn_x00196D88 isSkipFn;
    SfdTimeCode_x00196D88 tc;
    SfdTimeRec_x00196D88 state;
    SfdTimeRec_x00196D88 best;
    SfdTimeRec_x00196D88 tot;
    SfdTimeRec_x00196D88 cur;
    SfdTimeRec_x00196D88 latest;
    SfdTimeRec_x00196D88 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00196D88 tally;
    SfdSyncQueue_x00196D88 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00196D88 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00196D88 tst;
    SfdFieldEntry_x00196D88 fields[64];
    SfdPtsm_x00196D88 ptsm;
    char pad1468[36];
} SfdTim_x00196D88;
enum {
    SFD_COND_VIDEO_x00196D88 = 5,
    SFD_COND_AUDIO_x00196D88 = 6,
    SFD_COND_KEEPSUP_x00196D88 = 8,
    SFD_COND_SYNCMODE_x00196D88 = 15,
    SFD_COND_ETIME_x00196D88 = 20,
    SFD_COND_ETUNIT_x00196D88 = 21,
    SFD_COND_LNKSTM_x00196D88 = 49,
    SFD_COND_SUPPLY_END_x00196D88 = 56,
    SFD_COND_DECODE_END_x00196D88 = 57,
    SFD_COND_DEMUX_SPLIT_x00196D88 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00196D88 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00196D88 = 80,
    SFD_COND_SYSHD_FN_x00196D88 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00196D88 = 86,
    SFD_COND_NUM_x00196D88 = 100
};
typedef enum SfdBufFmt_x00196D88 {
    SFD_BUFFMT_0_x00196D88 = 0
} SfdBufFmt_x00196D88;
typedef enum SfdBufId_x00196D88 {
    SFD_BUF_NONE_x00196D88 = 8
} SfdBufId_x00196D88;
typedef struct SfdCrePrm_x00196D88 {
    struct SfdTrnConfig_x00196D88 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00196D88 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00196D88;
typedef struct SfdItem_x00196D88 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00196D88;
typedef struct SfdRing_x00196D88 {
    SfdItem_x00196D88 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00196D88;
typedef struct SfdBufInf_x00196D88 {
    char *data;
    struct SfdSj_x00196D88 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00196D88;
typedef struct SfdBufCur_x00196D88 {
    char *pos;
    int len;
} SfdBufCur_x00196D88;
typedef struct SfdBufDlm_x00196D88 {
    char *pos;
    char *end;
} SfdBufDlm_x00196D88;
typedef struct SfdBufRing_x00196D88 {
    SfdBufInf_x00196D88 sup;
    SfdBufDlm_x00196D88 dlm;
    int wtot;
    int rtot;
    SfdRing_x00196D88 ptsque;
} SfdBufRing_x00196D88;
typedef struct SfdBufAring_x00196D88 {
    SfdBufInf_x00196D88 sup;
    SfdBufCur_x00196D88 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00196D88;
typedef struct SfdUoch_x00196D88 {
    struct SfdSj_x00196D88 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00196D88;
typedef struct SfdBufEnt_x00196D88 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00196D88 ring;
        SfdBufAring_x00196D88 aring;
        SfdBufInf_x00196D88 vfrm;
        SfdUoch_x00196D88 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00196D88;
typedef int (*SfdTrnFn_x00196D88)();
typedef struct SfdTrnConfig_x00196D88 {
    SfdTrnFn_x00196D88 *fns[9];
} SfdTrnConfig_x00196D88;
typedef struct SfdMpsPrm_x00196D88 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00196D88 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00196D88;
typedef struct SfdAdxCfg_x00196D88 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00196D88;
typedef void (*SfdAdxStep_x00196D88)(struct SfdPly_x00196D88 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00196D88 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00196D88 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00196D88 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00196D88;
typedef struct SfdAoap_x00196D88 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00196D88 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00196D88 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00196D88 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00196D88 *h);
    void (*setSpeed)(struct SfdPly_x00196D88 *h, int speed);
} SfdAoap_x00196D88;
typedef struct SfainfOut_x00196D88 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00196D88;
typedef struct SfainfList_x00196D88 {
    int nout;
    SfainfOut_x00196D88 out[3];
} SfainfList_x00196D88;
typedef struct SfdTrnSlot_x00196D88 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00196D88 *mps;
        struct SfdMpv_x00196D88 *mpv;
        SfdAdxCtx_x00196D88 *adxt;
        SfdAoap_x00196D88 *aoap;
        SfainfList_x00196D88 *uo;
    } hn;
    SfdTrnFn_x00196D88 *fns;
    SfdBufId_x00196D88 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00196D88;
typedef struct SfdTsum_x00196D88 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00196D88;
typedef struct SfdTmrInf_x00196D88 {
    SfdTsum_x00196D88 tsum[6];
} SfdTmrInf_x00196D88;
struct SfdSj_x00196D88;
typedef struct M2vErrInf_x00196D88 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00196D88;
typedef struct Mpeg2Ext_x00196D88 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00196D88;
typedef enum M2vFrameRate_x00196D88 {
    M2V_FRAME_RATE_FORBIDDEN_x00196D88 = 0
} M2vFrameRate_x00196D88;
typedef enum M2vPicType_x00196D88 {
    M2V_PICTYPE_I_x00196D88 = 1,
    M2V_PICTYPE_P_x00196D88 = 2,
    M2V_PICTYPE_B_x00196D88 = 3,
    M2V_PICTYPE_D_x00196D88 = 4
} M2vPicType_x00196D88;
typedef enum M2vPicStruct_x00196D88 {
    M2V_PICSTRUCT_TOP_FIELD_x00196D88 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00196D88 = 2,
    M2V_PICSTRUCT_FRAME_x00196D88 = 3
} M2vPicStruct_x00196D88;
typedef enum M2vPicAtrF64_x00196D88 {
    M2V_PICATR_F64_0_x00196D88 = 0
} M2vPicAtrF64_x00196D88;
typedef struct M2vPicAtr_x00196D88 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00196D88 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00196D88 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00196D88 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00196D88 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00196D88;
typedef void (*M2vUsrDatFn_x00196D88)(void *obj, int level);
typedef struct M2vUsrSj_x00196D88 {
    struct SfdSj_x00196D88 *sj;
    M2vUsrDatFn_x00196D88 fn;
    void *obj;
} M2vUsrSj_x00196D88;
typedef struct M2vPicUsr_x00196D88 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00196D88;
typedef void (*M2vCondFn_x00196D88)();
typedef struct M2vObj_x00196D88 {
    int stat;
    M2vErrInf_x00196D88 err;
    M2vCondFn_x00196D88 cond[16];
    M2vPicAtr_x00196D88 picatr;
    char pad216[64];
    M2vUsrSj_x00196D88 usrsj[4];
    M2vPicUsr_x00196D88 picusr;
    char pad340[12];
    Mpeg2Ext_x00196D88 ext;
    char pad1656[8];
} M2vObj_x00196D88;
extern void M2V_SetErrFunc_x00196D88(M2vObj_x00196D88 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00196D88 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00196D88;
typedef struct sceMpeg_x00196D88 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00196D88 *sys;
} sceMpeg_x00196D88;
typedef enum {
    sceMpegCbError_x00196D88,
    sceMpegCbNodata_x00196D88,
    sceMpegCbStopDMA_x00196D88,
    sceMpegCbRestartDMA_x00196D88,
    sceMpegCbBackground_x00196D88,
    sceMpegCbTimeStamp_x00196D88,
    sceMpegCbStr_x00196D88,
    sceMpegCbNum_x00196D88
} sceMpegCbType_x00196D88;
typedef struct {
    sceMpegCbType_x00196D88 type;
    char *errMessage;
} sceMpegCbDataError_x00196D88;
typedef struct {
    sceMpegCbType_x00196D88 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00196D88;
typedef struct {
    sceMpegCbType_x00196D88 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00196D88;
typedef union {
    sceMpegCbType_x00196D88 type;
    sceMpegCbDataError_x00196D88 error;
    sceMpegCbDataTimeStamp_x00196D88 ts;
    sceMpegCbDataStr_x00196D88 str;
} sceMpegCbData_x00196D88;
typedef int (*sceMpegCallback_x00196D88)(sceMpeg_x00196D88 *mp, sceMpegCbData_x00196D88 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00196D88 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00196D88;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00196D88;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00196D88;
typedef struct {
    _sceMpegPicture_x00196D88 *ref_image;
    _sceMpegPicture_x00196D88 *prev_image;
    _sceMpegPicture_x00196D88 *decode;
    _sceMpegPicture_x00196D88 *image;
} _sceMpegPictureSlot_x00196D88;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00196D88;
typedef void (*_sceMpegMcKernel_x00196D88)(_sceMpegMcFetch_x00196D88 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00196D88 luma_kernel[4];
    _sceMpegMcKernel_x00196D88 chroma_kernel[4];
    _sceMpegMcFetch_x00196D88 luma[4];
    _sceMpegMcFetch_x00196D88 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00196D88;
typedef struct _sceMpegDecoder_x00196D88 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00196D88 callbacks[sceMpegCbNum_x00196D88];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00196D88 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00196D88 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00196D88 slots[3];
    _sceMpegPicture_x00196D88 pictures[9];
    _sceMpegSprBuffer_x00196D88 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00196D88 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00196D88;
typedef struct SfdPlanes_x00196D88 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00196D88;
typedef struct SfdUserData_x00196D88 {
    char data[512];
    int size;
} SfdUserData_x00196D88;
typedef struct SfdRecVideo_x00196D88 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00196D88 stamp;
    SfdUserData_x00196D88 user;
} SfdRecVideo_x00196D88;
typedef struct SfdSlot_x00196D88 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00196D88 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196D88 *blob;
    M2vPicAtr_x00196D88 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00196D88;
typedef struct SfdBufPool_x00196D88 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00196D88 slot[18];
} SfdBufPool_x00196D88;
typedef struct SfdMpvCond_x00196D88 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00196D88;
typedef struct SfdMpvWorkBufs_x00196D88 {
    int w[2];
} SfdMpvWorkBufs_x00196D88;
typedef struct SfdMpvFrameBufs_x00196D88 {
    int w[16];
} SfdMpvFrameBufs_x00196D88;
typedef struct SfdIpuEntry_x00196D88 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00196D88;
typedef struct SfdDmaTag_x00196D88 {
    long long tag;
    long long pad;
} SfdDmaTag_x00196D88;
typedef struct SfdIpuStream_x00196D88 {
    void *base;
    SfdDmaTag_x00196D88 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00196D88 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00196D88;
typedef struct SfdIpuCtl_x00196D88 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00196D88 mpeg;
    SfdIpuStream_x00196D88 stream;
    sceMpegCbDataError_x00196D88 error;
} SfdIpuCtl_x00196D88;
typedef struct SfdPtsComp_x00196D88 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00196D88 ptsent;
} SfdPtsComp_x00196D88;
typedef struct SfdMpv_x00196D88 {
    void *handle;
    SfdMpvCond_x00196D88 cond;
    SfdMpvWorkBufs_x00196D88 work;
    SfdMpvFrameBufs_x00196D88 bufs;
    SfdSlot_x00196D88 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00196D88 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00196D88 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00196D88 planes[2];
    SfdSlot_x00196D88 *first;
    SfdSlot_x00196D88 *second;
    SfdSlot_x00196D88 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00196D88 slots[16];
    SfdBufPool_x00196D88 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00196D88 ipu;
} SfdMpv_x00196D88;
typedef enum SfdPicType_x00196D88 {
    SFD_PICTYPE_I_x00196D88 = 1,
    SFD_PICTYPE_P_x00196D88 = 2,
    SFD_PICTYPE_B_x00196D88 = 3
} SfdPicType_x00196D88;
typedef enum SfdFrmInfF60_x00196D88 {
    SFD_FRMINF_F60_0_x00196D88 = 0
} SfdFrmInfF60_x00196D88;
typedef struct SfdFrameDetail_x00196D88 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00196D88;
typedef struct SfdFrameInfo_x00196D88 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00196D88 picType;
    int time;
    int unit;
    SfdBufFmt_x00196D88 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196D88 *picUsr;
    SfdFrmInfF60_x00196D88 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00196D88 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00196D88;
typedef struct SfdVfrm_x00196D88 {
    int used;
    int f4;
    SfdFrameInfo_x00196D88 inf;
} SfdVfrm_x00196D88;
typedef struct SfdPly_x00196D88 SfdPly_x00196D88;
typedef struct SfdRec_x00196D88 SfdRec_x00196D88;
typedef struct SfdRecSub_x00196D88 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00196D88;
typedef struct SfdRecSlot_x00196D88 {
    SfdRec_x00196D88 *rec;
    SfdRecSub_x00196D88 sub;
} SfdRecSlot_x00196D88;
typedef struct SfdSysHd_x00196D88 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00196D88;
typedef struct SfdRecSys_x00196D88 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00196D88 syshd;
} SfdRecSys_x00196D88;
typedef struct SfdRecAudio_x00196D88 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00196D88;
struct SfdRec_x00196D88 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00196D88 hdrInf;
    SfdRecSys_x00196D88 sys;
    char pad2616[152];
    SfdRecVideo_x00196D88 video;
    SfdRecAudio_x00196D88 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00196D88 {
    SfdCrePrm_x00196D88 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00196D88 hdr;
    SfdMvInf_x00196D88 mvInf;
    char pad2380[4];
    SfdPlyInf_x00196D88 plyInf;
    SfdErrInf_x00196D88 err;
    int cond[SFD_COND_NUM_x00196D88];
    int cond2[SFD_COND_NUM_x00196D88];
    char pad3364[4];
    SfdTim_x00196D88 tim;
    SfdBufEnt_x00196D88 buf[8];
    SfdVfrm_x00196D88 vfrm[16];
    SfdTrnSlot_x00196D88 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00196D88 mps;
    char pad8944[176];
    SfdMpv_x00196D88 mpv;
    SfdAdxCtx_x00196D88 adxt;
    char pad13680[100];
    SfdAoap_x00196D88 aoap;
    char pad13804[4];
    SfainfList_x00196D88 uo;
    char pad13860[4];
    SfdRecSlot_x00196D88 see;
    SfdTmrInf_x00196D88 tmr;
};
int sfply_IsStartSync_x00196D88(SfdPly_x00196D88 *h) __asm__("func_00196EA0");
long sfply_TrStart_x00196D88(SfdPly_x00196D88 *h) __asm__("func_00197DC0");
int sfply_IsStartSync_x00196D88(SfdPly_x00196D88 *h) __asm__("func_00196EA0");
long sfply_TrStart_x00196D88(SfdPly_x00196D88 *h) __asm__("func_00197DC0");
int func_00196D88_x00196D88(SfdPly_x00196D88 *h) __asm__("func_00196D88");
/* sfply_StatStby: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00196D88_x00196D88(SfdPly_x00196D88 *h) {
    int st = h->stat;
    switch (h->reqStat) {
    case 2:
        st = 2;
        break;
    case 3:
        st = 3;
        break;
    case 4:
    case 6:
        if (sfply_IsStartSync_x00196D88(h) != 0) {
            st = 4;
            sfply_TrStart_x00196D88(h);
        }
        break;
    }
    return st;
}
__asm__("# rebind func_00196D88 0x00196D88");
typedef struct SfdSj_x00196E28 SfdSj_x00196E28;
typedef struct SfdSjChunk_x00196E28 {
    char *data;
    int len;
} SfdSjChunk_x00196E28;
typedef struct SfdSjVtbl_x00196E28 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00196E28 *sj);
    int (*getUuid)(SfdSj_x00196E28 *sj);
    void (*reset)(SfdSj_x00196E28 *sj);
    void (*getChunk)(SfdSj_x00196E28 *sj, int id, int n, SfdSjChunk_x00196E28 *ck);
    void (*ungetChunk)(SfdSj_x00196E28 *sj, int id, SfdSjChunk_x00196E28 *ck);
    void (*putChunk)(SfdSj_x00196E28 *sj, int id, SfdSjChunk_x00196E28 *ck);
    int (*getNumData)(SfdSj_x00196E28 *sj, int id);
} SfdSjVtbl_x00196E28;
struct SfdSj_x00196E28 {
    SfdSjVtbl_x00196E28 *vtbl;
};
struct SfdSj_x00196E28;
struct SfdRecSlot_x00196E28;
struct SfdRec_x00196E28;
struct SfdMpvCond_x00196E28;
struct SfdPlanes_x00196E28;
struct SfdFrameInfo_x00196E28;
struct SfdPly_x00196E28;
typedef int (*SfdTimeFn_x00196E28)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00196E28 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00196E28;
typedef struct SfdTimeRec_x00196E28 {
    int valid;
    SfdTimeCode_x00196E28 tc;
    int time;
    int unit;
} SfdTimeRec_x00196E28;
typedef struct SfdTst_x00196E28 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00196E28;
typedef struct SfdSyncTally_x00196E28 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00196E28;
typedef struct SfdSyncQueue_x00196E28 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00196E28;
typedef struct SfdFieldEntry_x00196E28 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00196E28;
typedef struct SfdPtsm_x00196E28 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00196E28;
typedef struct SfdHdrAudio_x00196E28 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00196E28;
typedef struct SfdHdrMux_x00196E28 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00196E28;
typedef struct SfdHdrVideo_x00196E28 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00196E28;
typedef struct SfdHdrInf_x00196E28 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00196E28 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00196E28 audio;
    SfdHdrVideo_x00196E28 video;
    int size;
    char data[2048];
} SfdHdrInf_x00196E28;
typedef struct SfdMvInf_x00196E28 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00196E28;
typedef struct SfdPlyInf_x00196E28 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00196E28;
typedef void (*SfdErrFn_x00196E28)(void *obj, int code);
typedef struct SfdErrInf_x00196E28 {
    SfdErrFn_x00196E28 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00196E28;
typedef int (*SfdExtClockFn_x00196E28)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00196E28)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00196E28 {
    SfdTimeFn_x00196E28 timefn[6];
    SfdIsSkipFn_x00196E28 isSkipFn;
    SfdTimeCode_x00196E28 tc;
    SfdTimeRec_x00196E28 state;
    SfdTimeRec_x00196E28 best;
    SfdTimeRec_x00196E28 tot;
    SfdTimeRec_x00196E28 cur;
    SfdTimeRec_x00196E28 latest;
    SfdTimeRec_x00196E28 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00196E28 tally;
    SfdSyncQueue_x00196E28 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00196E28 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00196E28 tst;
    SfdFieldEntry_x00196E28 fields[64];
    SfdPtsm_x00196E28 ptsm;
    char pad1468[36];
} SfdTim_x00196E28;
enum {
    SFD_COND_VIDEO_x00196E28 = 5,
    SFD_COND_AUDIO_x00196E28 = 6,
    SFD_COND_KEEPSUP_x00196E28 = 8,
    SFD_COND_SYNCMODE_x00196E28 = 15,
    SFD_COND_ETIME_x00196E28 = 20,
    SFD_COND_ETUNIT_x00196E28 = 21,
    SFD_COND_LNKSTM_x00196E28 = 49,
    SFD_COND_SUPPLY_END_x00196E28 = 56,
    SFD_COND_DECODE_END_x00196E28 = 57,
    SFD_COND_DEMUX_SPLIT_x00196E28 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00196E28 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00196E28 = 80,
    SFD_COND_SYSHD_FN_x00196E28 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00196E28 = 86,
    SFD_COND_NUM_x00196E28 = 100
};
typedef enum SfdBufFmt_x00196E28 {
    SFD_BUFFMT_0_x00196E28 = 0
} SfdBufFmt_x00196E28;
typedef enum SfdBufId_x00196E28 {
    SFD_BUF_NONE_x00196E28 = 8
} SfdBufId_x00196E28;
typedef struct SfdCrePrm_x00196E28 {
    struct SfdTrnConfig_x00196E28 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00196E28 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00196E28;
typedef struct SfdItem_x00196E28 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00196E28;
typedef struct SfdRing_x00196E28 {
    SfdItem_x00196E28 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00196E28;
typedef struct SfdBufInf_x00196E28 {
    char *data;
    struct SfdSj_x00196E28 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00196E28;
typedef struct SfdBufCur_x00196E28 {
    char *pos;
    int len;
} SfdBufCur_x00196E28;
typedef struct SfdBufDlm_x00196E28 {
    char *pos;
    char *end;
} SfdBufDlm_x00196E28;
typedef struct SfdBufRing_x00196E28 {
    SfdBufInf_x00196E28 sup;
    SfdBufDlm_x00196E28 dlm;
    int wtot;
    int rtot;
    SfdRing_x00196E28 ptsque;
} SfdBufRing_x00196E28;
typedef struct SfdBufAring_x00196E28 {
    SfdBufInf_x00196E28 sup;
    SfdBufCur_x00196E28 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00196E28;
typedef struct SfdUoch_x00196E28 {
    struct SfdSj_x00196E28 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00196E28;
typedef struct SfdBufEnt_x00196E28 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00196E28 ring;
        SfdBufAring_x00196E28 aring;
        SfdBufInf_x00196E28 vfrm;
        SfdUoch_x00196E28 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00196E28;
typedef int (*SfdTrnFn_x00196E28)();
typedef struct SfdTrnConfig_x00196E28 {
    SfdTrnFn_x00196E28 *fns[9];
} SfdTrnConfig_x00196E28;
typedef struct SfdMpsPrm_x00196E28 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00196E28 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00196E28;
typedef struct SfdAdxCfg_x00196E28 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00196E28;
typedef void (*SfdAdxStep_x00196E28)(struct SfdPly_x00196E28 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00196E28 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00196E28 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00196E28 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00196E28;
typedef struct SfdAoap_x00196E28 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00196E28 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00196E28 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00196E28 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00196E28 *h);
    void (*setSpeed)(struct SfdPly_x00196E28 *h, int speed);
} SfdAoap_x00196E28;
typedef struct SfainfOut_x00196E28 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00196E28;
typedef struct SfainfList_x00196E28 {
    int nout;
    SfainfOut_x00196E28 out[3];
} SfainfList_x00196E28;
typedef struct SfdTrnSlot_x00196E28 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00196E28 *mps;
        struct SfdMpv_x00196E28 *mpv;
        SfdAdxCtx_x00196E28 *adxt;
        SfdAoap_x00196E28 *aoap;
        SfainfList_x00196E28 *uo;
    } hn;
    SfdTrnFn_x00196E28 *fns;
    SfdBufId_x00196E28 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00196E28;
typedef struct SfdTsum_x00196E28 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00196E28;
typedef struct SfdTmrInf_x00196E28 {
    SfdTsum_x00196E28 tsum[6];
} SfdTmrInf_x00196E28;
struct SfdSj_x00196E28;
typedef struct M2vErrInf_x00196E28 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00196E28;
typedef struct Mpeg2Ext_x00196E28 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00196E28;
typedef enum M2vFrameRate_x00196E28 {
    M2V_FRAME_RATE_FORBIDDEN_x00196E28 = 0
} M2vFrameRate_x00196E28;
typedef enum M2vPicType_x00196E28 {
    M2V_PICTYPE_I_x00196E28 = 1,
    M2V_PICTYPE_P_x00196E28 = 2,
    M2V_PICTYPE_B_x00196E28 = 3,
    M2V_PICTYPE_D_x00196E28 = 4
} M2vPicType_x00196E28;
typedef enum M2vPicStruct_x00196E28 {
    M2V_PICSTRUCT_TOP_FIELD_x00196E28 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00196E28 = 2,
    M2V_PICSTRUCT_FRAME_x00196E28 = 3
} M2vPicStruct_x00196E28;
typedef enum M2vPicAtrF64_x00196E28 {
    M2V_PICATR_F64_0_x00196E28 = 0
} M2vPicAtrF64_x00196E28;
typedef struct M2vPicAtr_x00196E28 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00196E28 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00196E28 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00196E28 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00196E28 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00196E28;
typedef void (*M2vUsrDatFn_x00196E28)(void *obj, int level);
typedef struct M2vUsrSj_x00196E28 {
    struct SfdSj_x00196E28 *sj;
    M2vUsrDatFn_x00196E28 fn;
    void *obj;
} M2vUsrSj_x00196E28;
typedef struct M2vPicUsr_x00196E28 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00196E28;
typedef void (*M2vCondFn_x00196E28)();
typedef struct M2vObj_x00196E28 {
    int stat;
    M2vErrInf_x00196E28 err;
    M2vCondFn_x00196E28 cond[16];
    M2vPicAtr_x00196E28 picatr;
    char pad216[64];
    M2vUsrSj_x00196E28 usrsj[4];
    M2vPicUsr_x00196E28 picusr;
    char pad340[12];
    Mpeg2Ext_x00196E28 ext;
    char pad1656[8];
} M2vObj_x00196E28;
extern void M2V_SetErrFunc_x00196E28(M2vObj_x00196E28 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00196E28 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00196E28;
typedef struct sceMpeg_x00196E28 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00196E28 *sys;
} sceMpeg_x00196E28;
typedef enum {
    sceMpegCbError_x00196E28,
    sceMpegCbNodata_x00196E28,
    sceMpegCbStopDMA_x00196E28,
    sceMpegCbRestartDMA_x00196E28,
    sceMpegCbBackground_x00196E28,
    sceMpegCbTimeStamp_x00196E28,
    sceMpegCbStr_x00196E28,
    sceMpegCbNum_x00196E28
} sceMpegCbType_x00196E28;
typedef struct {
    sceMpegCbType_x00196E28 type;
    char *errMessage;
} sceMpegCbDataError_x00196E28;
typedef struct {
    sceMpegCbType_x00196E28 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00196E28;
typedef struct {
    sceMpegCbType_x00196E28 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00196E28;
typedef union {
    sceMpegCbType_x00196E28 type;
    sceMpegCbDataError_x00196E28 error;
    sceMpegCbDataTimeStamp_x00196E28 ts;
    sceMpegCbDataStr_x00196E28 str;
} sceMpegCbData_x00196E28;
typedef int (*sceMpegCallback_x00196E28)(sceMpeg_x00196E28 *mp, sceMpegCbData_x00196E28 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00196E28 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00196E28;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00196E28;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00196E28;
typedef struct {
    _sceMpegPicture_x00196E28 *ref_image;
    _sceMpegPicture_x00196E28 *prev_image;
    _sceMpegPicture_x00196E28 *decode;
    _sceMpegPicture_x00196E28 *image;
} _sceMpegPictureSlot_x00196E28;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00196E28;
typedef void (*_sceMpegMcKernel_x00196E28)(_sceMpegMcFetch_x00196E28 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00196E28 luma_kernel[4];
    _sceMpegMcKernel_x00196E28 chroma_kernel[4];
    _sceMpegMcFetch_x00196E28 luma[4];
    _sceMpegMcFetch_x00196E28 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00196E28;
typedef struct _sceMpegDecoder_x00196E28 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00196E28 callbacks[sceMpegCbNum_x00196E28];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00196E28 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00196E28 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00196E28 slots[3];
    _sceMpegPicture_x00196E28 pictures[9];
    _sceMpegSprBuffer_x00196E28 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00196E28 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00196E28;
typedef struct SfdPlanes_x00196E28 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00196E28;
typedef struct SfdUserData_x00196E28 {
    char data[512];
    int size;
} SfdUserData_x00196E28;
typedef struct SfdRecVideo_x00196E28 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00196E28 stamp;
    SfdUserData_x00196E28 user;
} SfdRecVideo_x00196E28;
typedef struct SfdSlot_x00196E28 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00196E28 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196E28 *blob;
    M2vPicAtr_x00196E28 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00196E28;
typedef struct SfdBufPool_x00196E28 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00196E28 slot[18];
} SfdBufPool_x00196E28;
typedef struct SfdMpvCond_x00196E28 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00196E28;
typedef struct SfdMpvWorkBufs_x00196E28 {
    int w[2];
} SfdMpvWorkBufs_x00196E28;
typedef struct SfdMpvFrameBufs_x00196E28 {
    int w[16];
} SfdMpvFrameBufs_x00196E28;
typedef struct SfdIpuEntry_x00196E28 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00196E28;
typedef struct SfdDmaTag_x00196E28 {
    long long tag;
    long long pad;
} SfdDmaTag_x00196E28;
typedef struct SfdIpuStream_x00196E28 {
    void *base;
    SfdDmaTag_x00196E28 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00196E28 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00196E28;
typedef struct SfdIpuCtl_x00196E28 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00196E28 mpeg;
    SfdIpuStream_x00196E28 stream;
    sceMpegCbDataError_x00196E28 error;
} SfdIpuCtl_x00196E28;
typedef struct SfdPtsComp_x00196E28 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00196E28 ptsent;
} SfdPtsComp_x00196E28;
typedef struct SfdMpv_x00196E28 {
    void *handle;
    SfdMpvCond_x00196E28 cond;
    SfdMpvWorkBufs_x00196E28 work;
    SfdMpvFrameBufs_x00196E28 bufs;
    SfdSlot_x00196E28 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00196E28 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00196E28 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00196E28 planes[2];
    SfdSlot_x00196E28 *first;
    SfdSlot_x00196E28 *second;
    SfdSlot_x00196E28 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00196E28 slots[16];
    SfdBufPool_x00196E28 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00196E28 ipu;
} SfdMpv_x00196E28;
typedef enum SfdPicType_x00196E28 {
    SFD_PICTYPE_I_x00196E28 = 1,
    SFD_PICTYPE_P_x00196E28 = 2,
    SFD_PICTYPE_B_x00196E28 = 3
} SfdPicType_x00196E28;
typedef enum SfdFrmInfF60_x00196E28 {
    SFD_FRMINF_F60_0_x00196E28 = 0
} SfdFrmInfF60_x00196E28;
typedef struct SfdFrameDetail_x00196E28 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00196E28;
typedef struct SfdFrameInfo_x00196E28 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00196E28 picType;
    int time;
    int unit;
    SfdBufFmt_x00196E28 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00196E28 *picUsr;
    SfdFrmInfF60_x00196E28 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00196E28 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00196E28;
typedef struct SfdVfrm_x00196E28 {
    int used;
    int f4;
    SfdFrameInfo_x00196E28 inf;
} SfdVfrm_x00196E28;
typedef struct SfdPly_x00196E28 SfdPly_x00196E28;
typedef struct SfdRec_x00196E28 SfdRec_x00196E28;
typedef struct SfdRecSub_x00196E28 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00196E28;
typedef struct SfdRecSlot_x00196E28 {
    SfdRec_x00196E28 *rec;
    SfdRecSub_x00196E28 sub;
} SfdRecSlot_x00196E28;
typedef struct SfdSysHd_x00196E28 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00196E28;
typedef struct SfdRecSys_x00196E28 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00196E28 syshd;
} SfdRecSys_x00196E28;
typedef struct SfdRecAudio_x00196E28 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00196E28;
struct SfdRec_x00196E28 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00196E28 hdrInf;
    SfdRecSys_x00196E28 sys;
    char pad2616[152];
    SfdRecVideo_x00196E28 video;
    SfdRecAudio_x00196E28 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00196E28 {
    SfdCrePrm_x00196E28 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00196E28 hdr;
    SfdMvInf_x00196E28 mvInf;
    char pad2380[4];
    SfdPlyInf_x00196E28 plyInf;
    SfdErrInf_x00196E28 err;
    int cond[SFD_COND_NUM_x00196E28];
    int cond2[SFD_COND_NUM_x00196E28];
    char pad3364[4];
    SfdTim_x00196E28 tim;
    SfdBufEnt_x00196E28 buf[8];
    SfdVfrm_x00196E28 vfrm[16];
    SfdTrnSlot_x00196E28 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00196E28 mps;
    char pad8944[176];
    SfdMpv_x00196E28 mpv;
    SfdAdxCtx_x00196E28 adxt;
    char pad13680[100];
    SfdAoap_x00196E28 aoap;
    char pad13804[4];
    SfainfList_x00196E28 uo;
    char pad13860[4];
    SfdRecSlot_x00196E28 see;
    SfdTmrInf_x00196E28 tmr;
};
long sfply_ChkBpa_x00196E28(SfdPly_x00196E28 *h) __asm__("func_00196F08");
int sfply_ChkFin_x00196E28(SfdPly_x00196E28 *h) __asm__("func_001973F0");
long sfply_ChkBpa_x00196E28(SfdPly_x00196E28 *h) __asm__("func_00196F08");
int sfply_ChkFin_x00196E28(SfdPly_x00196E28 *h) __asm__("func_001973F0");
int func_00196E28_x00196E28(SfdPly_x00196E28 *h) __asm__("func_00196E28");
/* sfply_StatPlay: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00196E28_x00196E28(SfdPly_x00196E28 *h) {
    int req;
    int st;
    if (sfply_ChkFin_x00196E28(h) != 0 || sfply_ChkBpa_x00196E28(h) != 0) {
        return h->stat;
    }
    req = h->reqStat;
    st = h->stat;
    if (req >= 2) {
        if (req < 5) {
            return st;
        }
        if (req == 6) {
            st = 6;
        }
    }
    return st;
}
s32 func_00196E98(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x48);
}
s32 func_001974D0_x00196EA0(u8 *) __asm__("func_001974D0");
s32 func_00196EA0_x00196EA0(u8 *a0) __asm__("func_00196EA0");
s32 func_00196EA0_x00196EA0(u8 *a0)
{
    u8 *p = a0 + 0x9A0;
    u8 *q = a0 + 0xCC0;
    if (*(s32 *)(p + 0x38) == 0) {
        return 1;
    }
    if (*(s32 *)(p + 0x14) == 0) {
        return 1;
    }
    if (*(s32 *)(q + 0x2A4) != 0) {
        return 1;
    }
    if (*(s32 *)(q + 0x2C0) >= *(s32 *)(p + 0xB4)) {
        return 1;
    }
    return func_001974D0_x00196EA0(a0) != 0;
}
s32 func_0018D908_x00196F08(void *) __asm__("func_0018D908");
s32 func_0018D920_x00196F08(void *) __asm__("func_0018D920");
s32 func_001963E0_x00196F08(s32, s32) __asm__("func_001963E0");
s32 func_00196FB8_x00196F08(s32) __asm__("func_00196FB8");
s32 func_00197138_x00196F08(s32) __asm__("func_00197138");
s32 func_00196F08_x00196F08(s32 arg0) __asm__("func_00196F08");
s32 func_00196F08_x00196F08(s32 arg0)
{
  u8 sp[8];
  s32 var_s2;
  s32 var_v0;
  u8 *temp_s1;
  temp_s1 = arg0 + 0x94C;
  func_0018D908_x00196F08(sp);
  var_s2 = 0;
  if ((var_v0 = *((s32 *) (((u8 *) temp_s1) + 0x1C))) == 0)
  {
    if (func_00196FB8_x00196F08(arg0) != 0)
    {
      *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 1;
      *((s32 *) (0x20 + ((u8 *) temp_s1))) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x20))) + 1);
      var_v0 = func_001963E0_x00196F08(arg0, 1);
      goto block_5;
    }
  }
  else
    if (func_00197138_x00196F08(arg0) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 0;
    var_v0 = func_001963E0_x00196F08(arg0, 0);
    block_5:
    var_s2 = var_v0;

  }
  func_0018D920_x00196F08(sp);
  return var_s2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00196FB8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197138);
typedef unsigned char Uint8_x00197218;
typedef signed char Sint8_x00197218;
typedef signed short Sint16_x00197218;
typedef unsigned int Uint32_x00197218;
typedef signed int Sint32_x00197218;
typedef signed long long Sint64_x00197218;
typedef char Char8_x00197218;
typedef Sint32_x00197218 Bool_x00197218;
typedef struct SJ_OBJ_x00197218 *SJ_x00197218;
typedef struct {
        Uint8_x00197218 *data;
        Sint32_x00197218 len;
} SJCK_x00197218;
typedef struct {
        Uint8_x00197218 data[16];
} SJUUID_x00197218;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197218 sj);
        const SJUUID_x00197218 *(*GetUuid)(SJ_x00197218 sj);
        void (*Reset)(SJ_x00197218 sj);
        void (*GetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, Sint32_x00197218 nbyte, SJCK_x00197218 *ck);
        void (*UngetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, SJCK_x00197218 *ck);
        void (*PutChunk)(SJ_x00197218 sj, Sint32_x00197218 id, SJCK_x00197218 *ck);
        Sint32_x00197218 (*GetNumData)(SJ_x00197218 sj, Sint32_x00197218 id);
        Sint32_x00197218 (*IsGetChunk)(SJ_x00197218 sj, Sint32_x00197218 id, Sint32_x00197218 nbyte, Sint32_x00197218 *rbyte);
        void (*EntryErrFunc)(SJ_x00197218 sj, void (*func)(void *obj, Char8_x00197218 *msg), void *obj);
} SJ_IF_x00197218;
struct SJ_OBJ_x00197218 {
        SJ_IF_x00197218 *vtbl;
};
typedef struct SFD_OBJ_x00197218 *SFD_x00197218;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197218 rsv1;
        Sint32_x00197218 rsv2;
} SFUO_CH_x00197218;
typedef struct {
        Sint32_x00197218 nch;
        SFUO_CH_x00197218 ch[3];
} SFUO_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Sint32_x00197218 (*SetOutPan)(SFD_x00197218 sfd, Sint32_x00197218 ch, Sint32_x00197218 pan);
        Sint32_x00197218 (*GetOutPan)(SFD_x00197218 sfd, Sint32_x00197218 ch);
        Sint32_x00197218 (*SetOutVol)(SFD_x00197218 sfd, Sint32_x00197218 vol);
        Sint32_x00197218 (*GetOutVol)(SFD_x00197218 sfd);
        void (*SetSpeed)(SFD_x00197218 sfd, Sint32_x00197218 speed);
        Sint32_x00197218 x18;
} SFAOAP_x00197218;
typedef struct {
        Uint8_x00197218 pad0[0xB8];
        Sint32_x00197218 tottime;
        Sint32_x00197218 tunit;
        Uint8_x00197218 padc0[0x150 - 0xC0];
        Sint64_x00197218 scr_base;
        Sint64_x00197218 scr_ofst;
        Sint32_x00197218 pad160;
        Sint32_x00197218 ctime;
        Sint32_x00197218 ctime_idx;
        Sint32_x00197218 ctime_que[32];
        Sint32_x00197218 tot_last;
        Sint32_x00197218 pad1F0;
        Sint32_x00197218 que_wr;
        Sint32_x00197218 que_rd;
        Sint32_x00197218 tot_que[32];
} SFCON_x00197218;
typedef struct {
        Sint32_x00197218 type;
        Sint32_x00197218 drop;
        Sint32_x00197218 hour;
        Sint32_x00197218 min;
        Sint32_x00197218 sec;
        Sint32_x00197218 frm;
        Sint32_x00197218 frm2;
        Sint16_x00197218 x1c;
        Sint16_x00197218 field;
} SFTIM_TC_x00197218;
typedef struct {
        Sint32_x00197218 valid;
        SFTIM_TC_x00197218 tc;
        Sint32_x00197218 val;
        Sint32_x00197218 unit;
} SFTIM_TTU_x00197218;
typedef struct {
        Sint64_x00197218 pts;
        Uint32_x00197218 pos;
        Uint32_x00197218 len;
} SFPTS_ENT_x00197218;
typedef struct {
        SFPTS_ENT_x00197218 *ent;
        Sint32_x00197218 num;
        Sint32_x00197218 cnt;
        Sint32_x00197218 wr;
        Sint32_x00197218 rd;
} SFPTS_QUE_x00197218;
typedef struct {
        Sint32_x00197218 raw[0x20];
} SFD_VFRM_INF_x00197218;
typedef struct {
        void *frm;
        Sint32_x00197218 x04;
        SFD_VFRM_INF_x00197218 inf;
} SFD_VFRM_x00197218;
typedef struct {
        Sint32_x00197218 kind;
        SJ_x00197218 sj;
        Uint32_x00197218 ofst;
        Sint32_x00197218 size;
        Sint32_x00197218 xsize;
        Sint32_x00197218 x14;
} SFBUF_SUP_x00197218;
typedef struct {
        SFBUF_SUP_x00197218 sup;
        Uint8_x00197218 *dlm_pos;
        Sint32_x00197218 dlm_len;
        Sint32_x00197218 wtot;
        Sint32_x00197218 rtot;
        SFPTS_QUE_x00197218 ptsque;
} SFBUF_RING_x00197218;
typedef struct {
        Sint32_x00197218 mode;
        Sint32_x00197218 used;
        Sint32_x00197218 prepflg;
        Sint32_x00197218 termflg;
        union {
                SFBUF_RING_x00197218 ring;
                struct {
                        Uint32_x00197218 adr;
                        Sint32_x00197218 size;
                        Sint32_x00197218 x18;
                        Sint32_x00197218 x1c;
                        SFD_VFRM_x00197218 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197218 adr;
                        Sint32_x00197218 size;
                        Sint32_x00197218 rsv[7];
                        Sint32_x00197218 rsv2[3];
                } aout;
                SFUO_CH_x00197218 uoch[3];
        } u;
        Sint32_x00197218 in_tr;
        Sint32_x00197218 out_tr;
        Sint32_x00197218 rsv[8];
} SFBUF_WORK_x00197218;
typedef Sint32_x00197218 (*SFD_TR_FUNC_x00197218)();
typedef struct {
        Sint32_x00197218 prepflg;
        Sint32_x00197218 termflg;
        void *hn;
        SFD_TR_FUNC_x00197218 *trif;
        Sint32_x00197218 bufin;
        Sint32_x00197218 bufout;
        Sint32_x00197218 bufout2;
        Sint32_x00197218 bufout3;
        Sint32_x00197218 x20;
        Uint8_x00197218 pad24[0x44 - 0x24];
} SFD_TR_x00197218;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197218 cwidth;
        Sint16_x00197218 ywidth;
} SFMPV_PLANE_x00197218;
typedef struct {
        void *buf;
        Sint32_x00197218 len;
} SFMPV_PICUSR_x00197218;
typedef struct {
        Sint32_x00197218 stat;
        Sint32_x00197218 lock;
        void *buf;
        SFTIM_TTU_x00197218 ttu;
        Sint32_x00197218 ftime;
        Sint32_x00197218 tunit;
        Sint32_x00197218 ndct;
        Sint32_x00197218 nbyte;
        Sint32_x00197218 gopno;
        Sint32_x00197218 x4c;
        Sint32_x00197218 x50;
        SFMPV_PICUSR_x00197218 *picusr;
        Sint32_x00197218 pa_width;
        Sint32_x00197218 pa_height;
        Sint32_x00197218 pa_mb_width;
        Sint32_x00197218 pa_mb_height;
        Sint32_x00197218 pa_frame_rate;
        Sint32_x00197218 tmpref;
        Sint32_x00197218 pa_pic_type;
        Sint32_x00197218 pa_tc_drop;
        Sint32_x00197218 pa_tc_hour;
        Sint32_x00197218 pa_tc_min;
        Sint32_x00197218 pa_tc_sec;
        Sint32_x00197218 pa_tc_pic;
        Sint32_x00197218 x88;
        Sint32_x00197218 x8c;
        Sint32_x00197218 pa_x90[3];
        Sint32_x00197218 pa_x9c[3];
        Sint16_x00197218 pa_xa8;
        Sint16_x00197218 pa_xaa;
        Sint8_x00197218 pa_xac;
        Sint8_x00197218 pa_xad;
        Sint8_x00197218 pa_xae;
        Sint8_x00197218 pa_xaf;
        Sint8_x00197218 pa_xb0;
        Sint8_x00197218 pa_xb1;
        Sint8_x00197218 pa_xb2;
        Sint8_x00197218 pa_xb3;
        Sint8_x00197218 pa_xb4;
        Sint8_x00197218 pa_xb5;
        Sint8_x00197218 pa_xb6;
        Sint8_x00197218 pa_xb7;
        Sint8_x00197218 pa_xb8;
        Sint8_x00197218 pa_xb9;
        Sint8_x00197218 pa_xba;
        Sint8_x00197218 pa_xbb;
        Sint8_x00197218 pa_xbc;
        Uint8_x00197218 padbd[0xD8 - 0xBD];
        Sint64_x00197218 pts;
} SFMPV_FRM_x00197218;
typedef struct {
        Sint32_x00197218 cwidth;
        Sint32_x00197218 cheight;
        Sint32_x00197218 width;
        Sint32_x00197218 height;
        Sint32_x00197218 x10;
        Sint32_x00197218 max_width;
        Sint32_x00197218 max_height;
        Sint32_x00197218 nfrm;
        Sint32_x00197218 x20;
} SFMPV_PARA_x00197218;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197218 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197218 *curfrm;
        Sint32_x00197218 picstat;
        Sint32_x00197218 dlmmask;
        Sint32_x00197218 termflg;
        Sint32_x00197218 gopstat;
        Sint32_x00197218 nskip;
        Sint32_x00197218 nconcat;
        Uint8_x00197218 picatr[0x80];
        Sint32_x00197218 last_ngop;
        Sint32_x00197218 newgop;
        Sint32_x00197218 vbvsiz;
        Sint32_x00197218 pts_tmpref;
        Sint32_x00197218 pts_ofst;
        Sint32_x00197218 pts_max;
        Sint32_x00197218 pad124;
        SFPTS_ENT_x00197218 ptsent;
        Sint32_x00197218 refidx[2];
        SFMPV_PLANE_x00197218 rfbuf[2];
        SFMPV_FRM_x00197218 *ref[2];
        SFMPV_FRM_x00197218 *pendfrm;
        Sint32_x00197218 skipret;
        Sint32_x00197218 dlmwait;
        Sint32_x00197218 tmpref_adj;
        Sint32_x00197218 nfrm;
        Sint32_x00197218 pad17c;
        SFMPV_FRM_x00197218 frm[16];
        void *picusr_buf;
        Sint32_x00197218 picusr_num;
        Sint32_x00197218 picusr_siz;
        Uint8_x00197218 *picusr_dat;
        Sint32_x00197218 picusr_len;
        SFMPV_PICUSR_x00197218 picusr[16];
        Sint32_x00197218 pad1014;
        Sint64_x00197218 pts;
} SFMPV_WORK_x00197218;
typedef struct {
        Sint32_x00197218 raw[0x2A];
} SFD_PLYINF_x00197218 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197218 code);
        void *obj;
        Sint32_x00197218 code;
        Sint32_x00197218 x0c;
        Sint32_x00197218 x10;
} SFLIB_ERRINF_x00197218;
typedef struct {
        Sint32_x00197218 codec;
        Sint32_x00197218 layer;
        Sint32_x00197218 chnum;
        Sint32_x00197218 smphz;
} SFHDS_AUD_x00197218;
typedef struct {
        Sint32_x00197218 codec;
        Sint32_x00197218 bitrate;
        Sint32_x00197218 picw;
        Sint32_x00197218 pich;
        Sint32_x00197218 picrate;
        Sint32_x00197218 ftr_eff;
        Sint32_x00197218 ftr_coltype;
        Sint32_x00197218 ftr_pictype;
        Sint32_x00197218 ftr_fixflg;
        Sint32_x00197218 ftr_shcfixflg;
        Sint32_x00197218 ftr_expand;
        Sint32_x00197218 ftr_gopn;
        Sint32_x00197218 ftr_gopm;
} SFHDS_VID_x00197218;
typedef struct {
        Sint32_x00197218 valid;
        Sint32_x00197218 ver_major;
        Sint32_x00197218 ver_minor;
        Sint32_x00197218 byterate;
        Sint32_x00197218 hdrsiz;
        Sint32_x00197218 packtype;
        Sint32_x00197218 pketsizlen;
        Sint32_x00197218 packsiz;
        Sint32_x00197218 numelem_tot;
        Sint32_x00197218 numelem_aud;
        Sint32_x00197218 numelem_vid;
        Sint32_x00197218 numelem_prv;
        Sint32_x00197218 maxplylen_aud;
        Sint32_x00197218 maxplylen_vid;
        Sint32_x00197218 maxfrmnum;
        Sint32_x00197218 stmid_prv1;
        Sint32_x00197218 stmid_prv2;
        Sint32_x00197218 stmid_aud;
        Sint32_x00197218 stmid_vid;
        SFHDS_AUD_x00197218 aud;
        SFHDS_VID_x00197218 vid;
        Sint32_x00197218 rawsiz;
        Uint8_x00197218 raw[0x800];
} SFHDS_FHD_x00197218;
typedef struct {
        Uint8_x00197218 data[2][0xB0];
        Sint32_x00197218 len[2];
} SFSEE_SYSHD_x00197218;
typedef struct {
        Sint32_x00197218 analyzed;
        Sint32_x00197218 ncount;
        Sint32_x00197218 tscale;
        Sint32_x00197218 nvid;
        Sint32_x00197218 naud;
        Sint32_x00197218 pad14;
        Sint64_x00197218 scr_base;
        Sint64_x00197218 pts_min;
        Sint32_x00197218 stmid_vid;
        Sint32_x00197218 stmid_aud;
        SFSEE_SYSHD_x00197218 syshd;
} SFSEE_SHDR_x00197218;
typedef struct {
        Sint32_x00197218 analyzed;
        Sint32_x00197218 ncount;
        Sint32_x00197218 tscale;
        SFHDS_FHD_x00197218 fhd;
        SFSEE_SHDR_x00197218 shdr;
        Uint8_x00197218 pada38[0xAD0 - 0xA38];
        Sint32_x00197218 a1hdr;
        Sint32_x00197218 a1ncount;
        Sint32_x00197218 a1tscale;
        Uint8_x00197218 padadc[0xD0C - 0xADC];
        Sint32_x00197218 a2hdr;
        Sint32_x00197218 a2ncount;
        Sint32_x00197218 a2tscale;
        Uint8_x00197218 padd18[0xDA8 - 0xD18];
        Sint32_x00197218 rate;
        Sint32_x00197218 fsize_est;
        Sint32_x00197218 tot_est;
        Sint32_x00197218 tunit_est;
        Sint32_x00197218 av_a;
        Sint32_x00197218 av_b;
        Sint32_x00197218 paddc0;
        Sint32_x00197218 fsize;
        Sint32_x00197218 tottime;
        Sint32_x00197218 tunit;
        Sint32_x00197218 byterate;
        Sint32_x00197218 seekpos;
} SFSEE_WORK_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Sint32_x00197218 pos;
        Sint32_x00197218 x08;
} SFSEE_REQ_x00197218;
typedef struct {
        Sint32_x00197218 bsize;
        Sint32_x00197218 xsize;
        void *buf;
        Sint32_x00197218 maxnch;
        Sint32_x00197218 x10;
        Sint32_x00197218 worksize;
        void *work;
} SFADXT_PARA_x00197218;
typedef struct {
        void *adxt;
        SJ_x00197218 sj;
        SFADXT_PARA_x00197218 para;
        Sint32_x00197218 tcount;
        Sint32_x00197218 tunit;
        Sint32_x00197218 pause;
        Sint32_x00197218 discard;
        Sint32_x00197218 seekflg;
        Sint32_x00197218 smplofst;
        void (*func)(SFD_x00197218 sfd, Uint8_x00197218 *data, Sint32_x00197218 len, Sint32_x00197218 *nbyte);
        Sint32_x00197218 x40;
        Sint32_x00197218 svrfreq;
        Sint32_x00197218 totbyte;
        Sint32_x00197218 x4c;
} SFADXT_WORK_x00197218;
typedef struct {
        SFSEE_WORK_x00197218 *wk;
        SFSEE_REQ_x00197218 req;
} SFSEE_HN_x00197218;
typedef struct {
        Sint32_x00197218 x00;
        Uint32_x00197218 adr;
        Sint32_x00197218 size[7];
        Sint32_x00197218 x24;
        Sint32_x00197218 unit;
        Sint32_x00197218 x2c;
        Sint32_x00197218 x30;
        Sint32_x00197218 x34;
        Sint32_x00197218 x38;
        void *hnwork;
        Sint32_x00197218 hnwksiz;
} SFD_CREPRM_x00197218;
typedef struct {
        void *x00;
        Sint32_x00197218 x04;
        Sint32_x00197218 x08;
} SFPLY_PTSM_x00197218;
typedef struct {
        Sint64_x00197218 sum;
        Sint64_x00197218 min;
        Sint64_x00197218 max;
        Sint32_x00197218 cnt;
} SFTMR_TSUM_x00197218;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197218 nvid;
        Sint32_x00197218 naud;
        Sint32_x00197218 x0c;
        Sint64_x00197218 pts_min;
        Sint64_x00197218 pts_min2;
        Sint32_x00197218 concat_cnt;
        Sint32_x00197218 last_vid;
        Sint32_x00197218 last_aud;
        Sint32_x00197218 first_vid;
        Sint32_x00197218 first_aud;
        Sint32_x00197218 cur_vid;
        Sint32_x00197218 cur_aud;
        Sint32_x00197218 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197218 stmid);
        void *outobj;
        Sint32_x00197218 skip;
        Sint32_x00197218 x15c;
        Sint32_x00197218 x160;
        Sint32_x00197218 x164;
} SFMPS_WORK_x00197218;
typedef struct SFD_OBJ_x00197218 {
        SFD_CREPRM_x00197218 prm;
        Sint32_x00197218 chg_flg;
        Sint32_x00197218 stat;
        Sint32_x00197218 req;
        Sint32_x00197218 pause_sw;
        Sint32_x00197218 pause_cnt;
        Uint8_x00197218 pad58[0x74 - 0x58];
        Sint32_x00197218 pad74;
        SFHDS_FHD_x00197218 fhd;
        Sint32_x00197218 x90c;
        Sint32_x00197218 x910;
        Sint32_x00197218 x914;
        Sint32_x00197218 x918;
        Sint32_x00197218 x91c;
        Sint32_x00197218 picrate;
        Sint32_x00197218 x924;
        Sint32_x00197218 x928;
        Sint32_x00197218 x92c;
        Sint32_x00197218 numelem_aud;
        Sint32_x00197218 numelem_vid;
        Sint32_x00197218 numelem_prv;
        Sint32_x00197218 x93c;
        Sint32_x00197218 x940;
        Sint32_x00197218 x944;
        Sint32_x00197218 x948;
        Sint32_x00197218 x94c;
        SFD_PLYINF_x00197218 plyinf;
        SFLIB_ERRINF_x00197218 err;
        Sint32_x00197218 cond[100];
        Sint32_x00197218 cond_def[100];
        Uint8_x00197218 padD24[4];
        SFCON_x00197218 con;
        Uint8_x00197218 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197218))];
        Uint8_x00197218 tst[0x1C0];
        Uint8_x00197218 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197218 ptsm;
        Uint8_x00197218 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197218 buf[8];
        SFD_VFRM_x00197218 vfrm[16];
        SFD_TR_x00197218 tr[9];
        Sint32_x00197218 pad218c;
        SFMPS_WORK_x00197218 mps;
        Uint8_x00197218 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197218 mpv;
        SFADXT_WORK_x00197218 adxt;
        Uint8_x00197218 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197218 aoap;
        SFUO_x00197218 uo_tbl;
        Sint32_x00197218 pad34c4;
        SFSEE_HN_x00197218 see;
        SFTMR_TSUM_x00197218 tsum[6];
} SFD_OBJ_x00197218;
Sint32_x00197218 SFSET_GetCond_x00197218(SFD_x00197218 sfd, Sint32_x00197218 id) __asm__("func_001999E0");
Sint32_x00197218 SFTRN_GetTermFlg_x00197218(SFD_x00197218 sfd, Sint32_x00197218 id) __asm__("func_0019C170");
Sint32_x00197218 SFBUF_GetTermFlg_x00197218(SFD_x00197218 sfd, Sint32_x00197218 buf) __asm__("func_0018B770");
extern void (*SFPLY_recordgetfrm_x00197218)(SFD_x00197218 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197218)(SFPLY_PTSM_x00197218 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197218)(SFPLY_PTSM_x00197218 *ptsm) __asm__("SFPLY_ResetPtsm");
Bool_x00197218 func_00197218_x00197218(SFD_x00197218 sfd) __asm__("func_00197218");
/* sfply_IsTermAny: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x00197218 func_00197218_x00197218(SFD_x00197218 sfd)
{
        Uint32_x00197218 i;
        if (SFSET_GetCond_x00197218(sfd, 5) && SFTRN_GetTermFlg_x00197218(sfd, 6)) {
                return 1;
        }
        if (SFSET_GetCond_x00197218(sfd, 6) && SFTRN_GetTermFlg_x00197218(sfd, 7)) {
                return 1;
        }
        for (i = 0; i < 8; i++) {
                if (SFBUF_GetTermFlg_x00197218(sfd, i)) {
                        return 1;
                }
        }
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001972B8);
s32 func_00197370_x00197370(u8 *arg0) __asm__("func_00197370");
s32 func_00197370_x00197370(u8 *arg0) {
    u8 **temp_a0;
    u8 *temp_s0;
    s32 temp_v0;
    s32 temp_x;

    temp_s0 = arg0 + (*(s32 *)((u8 *)arg0 + 0x1CBC) * 0x74) + 0x1290;
    temp_a0 = *(u8 ***)((u8 *)temp_s0 + 4);
    temp_v0 = (*(s32 (**)(u8 **, s32))((u8 *)(*temp_a0) + 0x24))(temp_a0, 1);
    temp_x = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) * 0x50) / 100;
    if (temp_v0 < temp_x) return 0;
    return 1;
}
s32 func_00197460_x001973F0() __asm__("func_00197460");
s32 func_001974D0_x001973F0(s32) __asm__("func_001974D0");
s32 func_00197598_x001973F0(s32) __asm__("func_00197598");
s32 func_001975F0_x001973F0(s32) __asm__("func_001975F0");
s32 func_00197680_x001973F0(s32) __asm__("func_00197680");
void func_001973F0_x001973F0(s32 arg0) __asm__("func_001973F0");
void func_001973F0_x001973F0(s32 arg0) {
    if (func_00197460_x001973F0() != 0) {
        goto block_6;
    }
    if (func_001974D0_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_00197598_x001973F0(arg0) != 0) {
        goto block_6;
    }
    if (func_001975F0_x001973F0(arg0) != 0) {
        goto block_5;
    }
    return;
block_5:
block_6:
    func_00197680_x001973F0(arg0);
    return;
}
typedef struct { u8 pad[0x50]; s32 a; s32 b; } Sfd9A0_r3_x00197460;
void func_0019A718_x00197460(s32, s32 *, s32 *) __asm__("func_0019A718");
s32 func_00172A40_x00197460(s32, s32, s32, s32) __asm__("func_00172A40");
s32 func_00197460_x00197460(s32 a0) __asm__("func_00197460");
s32 func_00197460_x00197460(s32 a0)
{
    Sfd9A0_r3_x00197460 *q = (Sfd9A0_r3_x00197460 *)(a0 + 0x9A0);
    s32 a = q->a;
    s32 b = q->b;
    s32 x, y;

    if (a == -4) {
        return 0;
    }
    func_0019A718_x00197460(a0, &x, &y);
    if (x < 0) {
        return 0;
    }
    return func_00172A40_x00197460(x, y, a, b) == 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001974D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197598);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001975F0);
typedef unsigned char Uint8_x00197680;
typedef signed char Sint8_x00197680;
typedef signed short Sint16_x00197680;
typedef unsigned int Uint32_x00197680;
typedef signed int Sint32_x00197680;
typedef signed long long Sint64_x00197680;
typedef char Char8_x00197680;
typedef struct SJ_OBJ_x00197680 *SJ_x00197680;
typedef struct {
        Uint8_x00197680 *data;
        Sint32_x00197680 len;
} SJCK_x00197680;
typedef struct {
        Uint8_x00197680 data[16];
} SJUUID_x00197680;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197680 sj);
        const SJUUID_x00197680 *(*GetUuid)(SJ_x00197680 sj);
        void (*Reset)(SJ_x00197680 sj);
        void (*GetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, Sint32_x00197680 nbyte, SJCK_x00197680 *ck);
        void (*UngetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, SJCK_x00197680 *ck);
        void (*PutChunk)(SJ_x00197680 sj, Sint32_x00197680 id, SJCK_x00197680 *ck);
        Sint32_x00197680 (*GetNumData)(SJ_x00197680 sj, Sint32_x00197680 id);
        Sint32_x00197680 (*IsGetChunk)(SJ_x00197680 sj, Sint32_x00197680 id, Sint32_x00197680 nbyte, Sint32_x00197680 *rbyte);
        void (*EntryErrFunc)(SJ_x00197680 sj, void (*func)(void *obj, Char8_x00197680 *msg), void *obj);
} SJ_IF_x00197680;
struct SJ_OBJ_x00197680 {
        SJ_IF_x00197680 *vtbl;
};
typedef struct SFD_OBJ_x00197680 *SFD_x00197680;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197680 rsv1;
        Sint32_x00197680 rsv2;
} SFUO_CH_x00197680;
typedef struct {
        Sint32_x00197680 nch;
        SFUO_CH_x00197680 ch[3];
} SFUO_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Sint32_x00197680 (*SetOutPan)(SFD_x00197680 sfd, Sint32_x00197680 ch, Sint32_x00197680 pan);
        Sint32_x00197680 (*GetOutPan)(SFD_x00197680 sfd, Sint32_x00197680 ch);
        Sint32_x00197680 (*SetOutVol)(SFD_x00197680 sfd, Sint32_x00197680 vol);
        Sint32_x00197680 (*GetOutVol)(SFD_x00197680 sfd);
        void (*SetSpeed)(SFD_x00197680 sfd, Sint32_x00197680 speed);
        Sint32_x00197680 x18;
} SFAOAP_x00197680;
typedef struct {
        Uint8_x00197680 pad0[0xB8];
        Sint32_x00197680 tottime;
        Sint32_x00197680 tunit;
        Uint8_x00197680 padc0[0x150 - 0xC0];
        Sint64_x00197680 scr_base;
        Sint64_x00197680 scr_ofst;
        Sint32_x00197680 pad160;
        Sint32_x00197680 ctime;
        Sint32_x00197680 ctime_idx;
        Sint32_x00197680 ctime_que[32];
        Sint32_x00197680 tot_last;
        Sint32_x00197680 pad1F0;
        Sint32_x00197680 que_wr;
        Sint32_x00197680 que_rd;
        Sint32_x00197680 tot_que[32];
} SFCON_x00197680;
typedef struct {
        Sint32_x00197680 type;
        Sint32_x00197680 drop;
        Sint32_x00197680 hour;
        Sint32_x00197680 min;
        Sint32_x00197680 sec;
        Sint32_x00197680 frm;
        Sint32_x00197680 frm2;
        Sint16_x00197680 x1c;
        Sint16_x00197680 field;
} SFTIM_TC_x00197680;
typedef struct {
        Sint32_x00197680 valid;
        SFTIM_TC_x00197680 tc;
        Sint32_x00197680 val;
        Sint32_x00197680 unit;
} SFTIM_TTU_x00197680;
typedef struct {
        Sint64_x00197680 pts;
        Uint32_x00197680 pos;
        Uint32_x00197680 len;
} SFPTS_ENT_x00197680;
typedef struct {
        SFPTS_ENT_x00197680 *ent;
        Sint32_x00197680 num;
        Sint32_x00197680 cnt;
        Sint32_x00197680 wr;
        Sint32_x00197680 rd;
} SFPTS_QUE_x00197680;
typedef struct {
        Sint32_x00197680 raw[0x20];
} SFD_VFRM_INF_x00197680;
typedef struct {
        void *frm;
        Sint32_x00197680 x04;
        SFD_VFRM_INF_x00197680 inf;
} SFD_VFRM_x00197680;
typedef struct {
        Sint32_x00197680 kind;
        SJ_x00197680 sj;
        Uint32_x00197680 ofst;
        Sint32_x00197680 size;
        Sint32_x00197680 xsize;
        Sint32_x00197680 x14;
} SFBUF_SUP_x00197680;
typedef struct {
        SFBUF_SUP_x00197680 sup;
        Uint8_x00197680 *dlm_pos;
        Sint32_x00197680 dlm_len;
        Sint32_x00197680 wtot;
        Sint32_x00197680 rtot;
        SFPTS_QUE_x00197680 ptsque;
} SFBUF_RING_x00197680;
typedef struct {
        Sint32_x00197680 mode;
        Sint32_x00197680 used;
        Sint32_x00197680 prepflg;
        Sint32_x00197680 termflg;
        union {
                SFBUF_RING_x00197680 ring;
                struct {
                        Uint32_x00197680 adr;
                        Sint32_x00197680 size;
                        Sint32_x00197680 x18;
                        Sint32_x00197680 x1c;
                        SFD_VFRM_x00197680 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197680 adr;
                        Sint32_x00197680 size;
                        Sint32_x00197680 rsv[7];
                        Sint32_x00197680 rsv2[3];
                } aout;
                SFUO_CH_x00197680 uoch[3];
        } u;
        Sint32_x00197680 in_tr;
        Sint32_x00197680 out_tr;
        Sint32_x00197680 rsv[8];
} SFBUF_WORK_x00197680;
typedef Sint32_x00197680 (*SFD_TR_FUNC_x00197680)();
typedef struct {
        Sint32_x00197680 prepflg;
        Sint32_x00197680 termflg;
        void *hn;
        SFD_TR_FUNC_x00197680 *trif;
        Sint32_x00197680 bufin;
        Sint32_x00197680 bufout;
        Sint32_x00197680 bufout2;
        Sint32_x00197680 bufout3;
        Sint32_x00197680 x20;
        Uint8_x00197680 pad24[0x44 - 0x24];
} SFD_TR_x00197680;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197680 cwidth;
        Sint16_x00197680 ywidth;
} SFMPV_PLANE_x00197680;
typedef struct {
        void *buf;
        Sint32_x00197680 len;
} SFMPV_PICUSR_x00197680;
typedef struct {
        Sint32_x00197680 stat;
        Sint32_x00197680 lock;
        void *buf;
        SFTIM_TTU_x00197680 ttu;
        Sint32_x00197680 ftime;
        Sint32_x00197680 tunit;
        Sint32_x00197680 ndct;
        Sint32_x00197680 nbyte;
        Sint32_x00197680 gopno;
        Sint32_x00197680 x4c;
        Sint32_x00197680 x50;
        SFMPV_PICUSR_x00197680 *picusr;
        Sint32_x00197680 pa_width;
        Sint32_x00197680 pa_height;
        Sint32_x00197680 pa_mb_width;
        Sint32_x00197680 pa_mb_height;
        Sint32_x00197680 pa_frame_rate;
        Sint32_x00197680 tmpref;
        Sint32_x00197680 pa_pic_type;
        Sint32_x00197680 pa_tc_drop;
        Sint32_x00197680 pa_tc_hour;
        Sint32_x00197680 pa_tc_min;
        Sint32_x00197680 pa_tc_sec;
        Sint32_x00197680 pa_tc_pic;
        Sint32_x00197680 x88;
        Sint32_x00197680 x8c;
        Sint32_x00197680 pa_x90[3];
        Sint32_x00197680 pa_x9c[3];
        Sint16_x00197680 pa_xa8;
        Sint16_x00197680 pa_xaa;
        Sint8_x00197680 pa_xac;
        Sint8_x00197680 pa_xad;
        Sint8_x00197680 pa_xae;
        Sint8_x00197680 pa_xaf;
        Sint8_x00197680 pa_xb0;
        Sint8_x00197680 pa_xb1;
        Sint8_x00197680 pa_xb2;
        Sint8_x00197680 pa_xb3;
        Sint8_x00197680 pa_xb4;
        Sint8_x00197680 pa_xb5;
        Sint8_x00197680 pa_xb6;
        Sint8_x00197680 pa_xb7;
        Sint8_x00197680 pa_xb8;
        Sint8_x00197680 pa_xb9;
        Sint8_x00197680 pa_xba;
        Sint8_x00197680 pa_xbb;
        Sint8_x00197680 pa_xbc;
        Uint8_x00197680 padbd[0xD8 - 0xBD];
        Sint64_x00197680 pts;
} SFMPV_FRM_x00197680;
typedef struct {
        Sint32_x00197680 cwidth;
        Sint32_x00197680 cheight;
        Sint32_x00197680 width;
        Sint32_x00197680 height;
        Sint32_x00197680 x10;
        Sint32_x00197680 max_width;
        Sint32_x00197680 max_height;
        Sint32_x00197680 nfrm;
        Sint32_x00197680 x20;
} SFMPV_PARA_x00197680;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197680 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197680 *curfrm;
        Sint32_x00197680 picstat;
        Sint32_x00197680 dlmmask;
        Sint32_x00197680 termflg;
        Sint32_x00197680 gopstat;
        Sint32_x00197680 nskip;
        Sint32_x00197680 nconcat;
        Uint8_x00197680 picatr[0x80];
        Sint32_x00197680 last_ngop;
        Sint32_x00197680 newgop;
        Sint32_x00197680 vbvsiz;
        Sint32_x00197680 pts_tmpref;
        Sint32_x00197680 pts_ofst;
        Sint32_x00197680 pts_max;
        Sint32_x00197680 pad124;
        SFPTS_ENT_x00197680 ptsent;
        Sint32_x00197680 refidx[2];
        SFMPV_PLANE_x00197680 rfbuf[2];
        SFMPV_FRM_x00197680 *ref[2];
        SFMPV_FRM_x00197680 *pendfrm;
        Sint32_x00197680 skipret;
        Sint32_x00197680 dlmwait;
        Sint32_x00197680 tmpref_adj;
        Sint32_x00197680 nfrm;
        Sint32_x00197680 pad17c;
        SFMPV_FRM_x00197680 frm[16];
        void *picusr_buf;
        Sint32_x00197680 picusr_num;
        Sint32_x00197680 picusr_siz;
        Uint8_x00197680 *picusr_dat;
        Sint32_x00197680 picusr_len;
        SFMPV_PICUSR_x00197680 picusr[16];
        Sint32_x00197680 pad1014;
        Sint64_x00197680 pts;
} SFMPV_WORK_x00197680;
typedef struct {
        Sint32_x00197680 raw[0x2A];
} SFD_PLYINF_x00197680 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197680 code);
        void *obj;
        Sint32_x00197680 code;
        Sint32_x00197680 x0c;
        Sint32_x00197680 x10;
} SFLIB_ERRINF_x00197680;
typedef struct {
        Sint32_x00197680 codec;
        Sint32_x00197680 layer;
        Sint32_x00197680 chnum;
        Sint32_x00197680 smphz;
} SFHDS_AUD_x00197680;
typedef struct {
        Sint32_x00197680 codec;
        Sint32_x00197680 bitrate;
        Sint32_x00197680 picw;
        Sint32_x00197680 pich;
        Sint32_x00197680 picrate;
        Sint32_x00197680 ftr_eff;
        Sint32_x00197680 ftr_coltype;
        Sint32_x00197680 ftr_pictype;
        Sint32_x00197680 ftr_fixflg;
        Sint32_x00197680 ftr_shcfixflg;
        Sint32_x00197680 ftr_expand;
        Sint32_x00197680 ftr_gopn;
        Sint32_x00197680 ftr_gopm;
} SFHDS_VID_x00197680;
typedef struct {
        Sint32_x00197680 valid;
        Sint32_x00197680 ver_major;
        Sint32_x00197680 ver_minor;
        Sint32_x00197680 byterate;
        Sint32_x00197680 hdrsiz;
        Sint32_x00197680 packtype;
        Sint32_x00197680 pketsizlen;
        Sint32_x00197680 packsiz;
        Sint32_x00197680 numelem_tot;
        Sint32_x00197680 numelem_aud;
        Sint32_x00197680 numelem_vid;
        Sint32_x00197680 numelem_prv;
        Sint32_x00197680 maxplylen_aud;
        Sint32_x00197680 maxplylen_vid;
        Sint32_x00197680 maxfrmnum;
        Sint32_x00197680 stmid_prv1;
        Sint32_x00197680 stmid_prv2;
        Sint32_x00197680 stmid_aud;
        Sint32_x00197680 stmid_vid;
        SFHDS_AUD_x00197680 aud;
        SFHDS_VID_x00197680 vid;
        Sint32_x00197680 rawsiz;
        Uint8_x00197680 raw[0x800];
} SFHDS_FHD_x00197680;
typedef struct {
        Uint8_x00197680 data[2][0xB0];
        Sint32_x00197680 len[2];
} SFSEE_SYSHD_x00197680;
typedef struct {
        Sint32_x00197680 analyzed;
        Sint32_x00197680 ncount;
        Sint32_x00197680 tscale;
        Sint32_x00197680 nvid;
        Sint32_x00197680 naud;
        Sint32_x00197680 pad14;
        Sint64_x00197680 scr_base;
        Sint64_x00197680 pts_min;
        Sint32_x00197680 stmid_vid;
        Sint32_x00197680 stmid_aud;
        SFSEE_SYSHD_x00197680 syshd;
} SFSEE_SHDR_x00197680;
typedef struct {
        Sint32_x00197680 analyzed;
        Sint32_x00197680 ncount;
        Sint32_x00197680 tscale;
        SFHDS_FHD_x00197680 fhd;
        SFSEE_SHDR_x00197680 shdr;
        Uint8_x00197680 pada38[0xAD0 - 0xA38];
        Sint32_x00197680 a1hdr;
        Sint32_x00197680 a1ncount;
        Sint32_x00197680 a1tscale;
        Uint8_x00197680 padadc[0xD0C - 0xADC];
        Sint32_x00197680 a2hdr;
        Sint32_x00197680 a2ncount;
        Sint32_x00197680 a2tscale;
        Uint8_x00197680 padd18[0xDA8 - 0xD18];
        Sint32_x00197680 rate;
        Sint32_x00197680 fsize_est;
        Sint32_x00197680 tot_est;
        Sint32_x00197680 tunit_est;
        Sint32_x00197680 av_a;
        Sint32_x00197680 av_b;
        Sint32_x00197680 paddc0;
        Sint32_x00197680 fsize;
        Sint32_x00197680 tottime;
        Sint32_x00197680 tunit;
        Sint32_x00197680 byterate;
        Sint32_x00197680 seekpos;
} SFSEE_WORK_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Sint32_x00197680 pos;
        Sint32_x00197680 x08;
} SFSEE_REQ_x00197680;
typedef struct {
        Sint32_x00197680 bsize;
        Sint32_x00197680 xsize;
        void *buf;
        Sint32_x00197680 maxnch;
        Sint32_x00197680 x10;
        Sint32_x00197680 worksize;
        void *work;
} SFADXT_PARA_x00197680;
typedef struct {
        void *adxt;
        SJ_x00197680 sj;
        SFADXT_PARA_x00197680 para;
        Sint32_x00197680 tcount;
        Sint32_x00197680 tunit;
        Sint32_x00197680 pause;
        Sint32_x00197680 discard;
        Sint32_x00197680 seekflg;
        Sint32_x00197680 smplofst;
        void (*func)(SFD_x00197680 sfd, Uint8_x00197680 *data, Sint32_x00197680 len, Sint32_x00197680 *nbyte);
        Sint32_x00197680 x40;
        Sint32_x00197680 svrfreq;
        Sint32_x00197680 totbyte;
        Sint32_x00197680 x4c;
} SFADXT_WORK_x00197680;
typedef struct {
        SFSEE_WORK_x00197680 *wk;
        SFSEE_REQ_x00197680 req;
} SFSEE_HN_x00197680;
typedef struct {
        Sint32_x00197680 x00;
        Uint32_x00197680 adr;
        Sint32_x00197680 size[7];
        Sint32_x00197680 x24;
        Sint32_x00197680 unit;
        Sint32_x00197680 x2c;
        Sint32_x00197680 x30;
        Sint32_x00197680 x34;
        Sint32_x00197680 x38;
        void *hnwork;
        Sint32_x00197680 hnwksiz;
} SFD_CREPRM_x00197680;
typedef struct {
        void *x00;
        Sint32_x00197680 x04;
        Sint32_x00197680 x08;
} SFPLY_PTSM_x00197680;
typedef struct {
        Sint64_x00197680 sum;
        Sint64_x00197680 min;
        Sint64_x00197680 max;
        Sint32_x00197680 cnt;
} SFTMR_TSUM_x00197680;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197680 nvid;
        Sint32_x00197680 naud;
        Sint32_x00197680 x0c;
        Sint64_x00197680 pts_min;
        Sint64_x00197680 pts_min2;
        Sint32_x00197680 concat_cnt;
        Sint32_x00197680 last_vid;
        Sint32_x00197680 last_aud;
        Sint32_x00197680 first_vid;
        Sint32_x00197680 first_aud;
        Sint32_x00197680 cur_vid;
        Sint32_x00197680 cur_aud;
        Sint32_x00197680 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197680 stmid);
        void *outobj;
        Sint32_x00197680 skip;
        Sint32_x00197680 x15c;
        Sint32_x00197680 x160;
        Sint32_x00197680 x164;
} SFMPS_WORK_x00197680;
typedef struct SFD_OBJ_x00197680 {
        SFD_CREPRM_x00197680 prm;
        Sint32_x00197680 chg_flg;
        Sint32_x00197680 stat;
        Sint32_x00197680 req;
        Sint32_x00197680 pause_sw;
        Sint32_x00197680 pause_cnt;
        Uint8_x00197680 pad58[0x74 - 0x58];
        Sint32_x00197680 pad74;
        SFHDS_FHD_x00197680 fhd;
        Sint32_x00197680 x90c;
        Sint32_x00197680 x910;
        Sint32_x00197680 x914;
        Sint32_x00197680 x918;
        Sint32_x00197680 x91c;
        Sint32_x00197680 picrate;
        Sint32_x00197680 x924;
        Sint32_x00197680 x928;
        Sint32_x00197680 x92c;
        Sint32_x00197680 numelem_aud;
        Sint32_x00197680 numelem_vid;
        Sint32_x00197680 numelem_prv;
        Sint32_x00197680 x93c;
        Sint32_x00197680 x940;
        Sint32_x00197680 x944;
        Sint32_x00197680 x948;
        Sint32_x00197680 x94c;
        SFD_PLYINF_x00197680 plyinf;
        SFLIB_ERRINF_x00197680 err;
        Sint32_x00197680 cond[100];
        Sint32_x00197680 cond_def[100];
        Uint8_x00197680 padD24[4];
        SFCON_x00197680 con;
        Uint8_x00197680 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197680))];
        Uint8_x00197680 tst[0x1C0];
        Uint8_x00197680 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197680 ptsm;
        Uint8_x00197680 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197680 buf[8];
        SFD_VFRM_x00197680 vfrm[16];
        SFD_TR_x00197680 tr[9];
        Sint32_x00197680 pad218c;
        SFMPS_WORK_x00197680 mps;
        Uint8_x00197680 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197680 mpv;
        SFADXT_WORK_x00197680 adxt;
        Uint8_x00197680 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197680 aoap;
        SFUO_x00197680 uo_tbl;
        Sint32_x00197680 pad34c4;
        SFSEE_HN_x00197680 see;
        SFTMR_TSUM_x00197680 tsum[6];
} SFD_OBJ_x00197680;
extern void (*SFPLY_recordgetfrm_x00197680)(SFD_x00197680 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197680)(SFPLY_PTSM_x00197680 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197680)(SFPLY_PTSM_x00197680 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197680 sfply_StopTr_x00197680(SFD_x00197680 sfd) __asm__("func_00197EC8");
Sint32_x00197680 func_00197680_x00197680(SFD_x00197680 sfd) __asm__("func_00197680");
/* sfply_StopPlay: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197680 func_00197680_x00197680(SFD_x00197680 sfd)
{
        Sint32_x00197680 ret;
        ret = sfply_StopTr_x00197680(sfd);
        if (ret != 0) {
                return ret;
        }
        sfd->req = 6;
        return 0;
}
typedef struct SfdSj_x001976B8 SfdSj_x001976B8;
typedef struct SfdSjChunk_x001976B8 {
    char *data;
    int len;
} SfdSjChunk_x001976B8;
typedef struct SfdSjVtbl_x001976B8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001976B8 *sj);
    int (*getUuid)(SfdSj_x001976B8 *sj);
    void (*reset)(SfdSj_x001976B8 *sj);
    void (*getChunk)(SfdSj_x001976B8 *sj, int id, int n, SfdSjChunk_x001976B8 *ck);
    void (*ungetChunk)(SfdSj_x001976B8 *sj, int id, SfdSjChunk_x001976B8 *ck);
    void (*putChunk)(SfdSj_x001976B8 *sj, int id, SfdSjChunk_x001976B8 *ck);
    int (*getNumData)(SfdSj_x001976B8 *sj, int id);
} SfdSjVtbl_x001976B8;
struct SfdSj_x001976B8 {
    SfdSjVtbl_x001976B8 *vtbl;
};
struct SfdSj_x001976B8;
struct SfdRecSlot_x001976B8;
struct SfdRec_x001976B8;
struct SfdMpvCond_x001976B8;
struct SfdPlanes_x001976B8;
struct SfdFrameInfo_x001976B8;
struct SfdPly_x001976B8;
typedef int (*SfdTimeFn_x001976B8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x001976B8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001976B8;
typedef struct SfdTimeRec_x001976B8 {
    int valid;
    SfdTimeCode_x001976B8 tc;
    int time;
    int unit;
} SfdTimeRec_x001976B8;
typedef struct SfdTst_x001976B8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x001976B8;
typedef struct SfdSyncTally_x001976B8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x001976B8;
typedef struct SfdSyncQueue_x001976B8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x001976B8;
typedef struct SfdFieldEntry_x001976B8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x001976B8;
typedef struct SfdPtsm_x001976B8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x001976B8;
typedef struct SfdHdrAudio_x001976B8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001976B8;
typedef struct SfdHdrMux_x001976B8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001976B8;
typedef struct SfdHdrVideo_x001976B8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001976B8;
typedef struct SfdHdrInf_x001976B8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001976B8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001976B8 audio;
    SfdHdrVideo_x001976B8 video;
    int size;
    char data[2048];
} SfdHdrInf_x001976B8;
typedef struct SfdMvInf_x001976B8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x001976B8;
typedef struct SfdPlyInf_x001976B8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x001976B8;
typedef void (*SfdErrFn_x001976B8)(void *obj, int code);
typedef struct SfdErrInf_x001976B8 {
    SfdErrFn_x001976B8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x001976B8;
typedef int (*SfdExtClockFn_x001976B8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x001976B8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x001976B8 {
    SfdTimeFn_x001976B8 timefn[6];
    SfdIsSkipFn_x001976B8 isSkipFn;
    SfdTimeCode_x001976B8 tc;
    SfdTimeRec_x001976B8 state;
    SfdTimeRec_x001976B8 best;
    SfdTimeRec_x001976B8 tot;
    SfdTimeRec_x001976B8 cur;
    SfdTimeRec_x001976B8 latest;
    SfdTimeRec_x001976B8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x001976B8 tally;
    SfdSyncQueue_x001976B8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x001976B8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x001976B8 tst;
    SfdFieldEntry_x001976B8 fields[64];
    SfdPtsm_x001976B8 ptsm;
    char pad1468[36];
} SfdTim_x001976B8;
enum {
    SFD_COND_VIDEO_x001976B8 = 5,
    SFD_COND_AUDIO_x001976B8 = 6,
    SFD_COND_KEEPSUP_x001976B8 = 8,
    SFD_COND_SYNCMODE_x001976B8 = 15,
    SFD_COND_ETIME_x001976B8 = 20,
    SFD_COND_ETUNIT_x001976B8 = 21,
    SFD_COND_LNKSTM_x001976B8 = 49,
    SFD_COND_SUPPLY_END_x001976B8 = 56,
    SFD_COND_DECODE_END_x001976B8 = 57,
    SFD_COND_DEMUX_SPLIT_x001976B8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x001976B8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x001976B8 = 80,
    SFD_COND_SYSHD_FN_x001976B8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x001976B8 = 86,
    SFD_COND_NUM_x001976B8 = 100
};
typedef enum SfdBufFmt_x001976B8 {
    SFD_BUFFMT_0_x001976B8 = 0
} SfdBufFmt_x001976B8;
typedef enum SfdBufId_x001976B8 {
    SFD_BUF_NONE_x001976B8 = 8
} SfdBufId_x001976B8;
typedef struct SfdCrePrm_x001976B8 {
    struct SfdTrnConfig_x001976B8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x001976B8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x001976B8;
typedef struct SfdItem_x001976B8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x001976B8;
typedef struct SfdRing_x001976B8 {
    SfdItem_x001976B8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x001976B8;
typedef struct SfdBufInf_x001976B8 {
    char *data;
    struct SfdSj_x001976B8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x001976B8;
typedef struct SfdBufCur_x001976B8 {
    char *pos;
    int len;
} SfdBufCur_x001976B8;
typedef struct SfdBufDlm_x001976B8 {
    char *pos;
    char *end;
} SfdBufDlm_x001976B8;
typedef struct SfdBufRing_x001976B8 {
    SfdBufInf_x001976B8 sup;
    SfdBufDlm_x001976B8 dlm;
    int wtot;
    int rtot;
    SfdRing_x001976B8 ptsque;
} SfdBufRing_x001976B8;
typedef struct SfdBufAring_x001976B8 {
    SfdBufInf_x001976B8 sup;
    SfdBufCur_x001976B8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x001976B8;
typedef struct SfdUoch_x001976B8 {
    struct SfdSj_x001976B8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x001976B8;
typedef struct SfdBufEnt_x001976B8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x001976B8 ring;
        SfdBufAring_x001976B8 aring;
        SfdBufInf_x001976B8 vfrm;
        SfdUoch_x001976B8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x001976B8;
typedef int (*SfdTrnFn_x001976B8)();
typedef struct SfdTrnConfig_x001976B8 {
    SfdTrnFn_x001976B8 *fns[9];
} SfdTrnConfig_x001976B8;
typedef struct SfdMpsPrm_x001976B8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x001976B8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x001976B8;
typedef struct SfdAdxCfg_x001976B8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x001976B8;
typedef void (*SfdAdxStep_x001976B8)(struct SfdPly_x001976B8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x001976B8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x001976B8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x001976B8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x001976B8;
typedef struct SfdAoap_x001976B8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x001976B8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x001976B8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x001976B8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x001976B8 *h);
    void (*setSpeed)(struct SfdPly_x001976B8 *h, int speed);
} SfdAoap_x001976B8;
typedef struct SfainfOut_x001976B8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x001976B8;
typedef struct SfainfList_x001976B8 {
    int nout;
    SfainfOut_x001976B8 out[3];
} SfainfList_x001976B8;
typedef struct SfdTrnSlot_x001976B8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x001976B8 *mps;
        struct SfdMpv_x001976B8 *mpv;
        SfdAdxCtx_x001976B8 *adxt;
        SfdAoap_x001976B8 *aoap;
        SfainfList_x001976B8 *uo;
    } hn;
    SfdTrnFn_x001976B8 *fns;
    SfdBufId_x001976B8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x001976B8;
typedef struct SfdTsum_x001976B8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x001976B8;
typedef struct SfdTmrInf_x001976B8 {
    SfdTsum_x001976B8 tsum[6];
} SfdTmrInf_x001976B8;
void sfd_Lock_x001976B8(void *guard) __asm__("func_0018D908");
void sfd_Unlock_x001976B8(void *guard) __asm__("func_0018D920");
struct SfdSj_x001976B8;
typedef struct M2vErrInf_x001976B8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001976B8;
typedef struct Mpeg2Ext_x001976B8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001976B8;
typedef enum M2vFrameRate_x001976B8 {
    M2V_FRAME_RATE_FORBIDDEN_x001976B8 = 0
} M2vFrameRate_x001976B8;
typedef enum M2vPicType_x001976B8 {
    M2V_PICTYPE_I_x001976B8 = 1,
    M2V_PICTYPE_P_x001976B8 = 2,
    M2V_PICTYPE_B_x001976B8 = 3,
    M2V_PICTYPE_D_x001976B8 = 4
} M2vPicType_x001976B8;
typedef enum M2vPicStruct_x001976B8 {
    M2V_PICSTRUCT_TOP_FIELD_x001976B8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001976B8 = 2,
    M2V_PICSTRUCT_FRAME_x001976B8 = 3
} M2vPicStruct_x001976B8;
typedef enum M2vPicAtrF64_x001976B8 {
    M2V_PICATR_F64_0_x001976B8 = 0
} M2vPicAtrF64_x001976B8;
typedef struct M2vPicAtr_x001976B8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001976B8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x001976B8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001976B8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001976B8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001976B8;
typedef void (*M2vUsrDatFn_x001976B8)(void *obj, int level);
typedef struct M2vUsrSj_x001976B8 {
    struct SfdSj_x001976B8 *sj;
    M2vUsrDatFn_x001976B8 fn;
    void *obj;
} M2vUsrSj_x001976B8;
typedef struct M2vPicUsr_x001976B8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001976B8;
typedef void (*M2vCondFn_x001976B8)();
typedef struct M2vObj_x001976B8 {
    int stat;
    M2vErrInf_x001976B8 err;
    M2vCondFn_x001976B8 cond[16];
    M2vPicAtr_x001976B8 picatr;
    char pad216[64];
    M2vUsrSj_x001976B8 usrsj[4];
    M2vPicUsr_x001976B8 picusr;
    char pad340[12];
    Mpeg2Ext_x001976B8 ext;
    char pad1656[8];
} M2vObj_x001976B8;
extern void M2V_SetErrFunc_x001976B8(M2vObj_x001976B8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x001976B8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001976B8;
typedef struct sceMpeg_x001976B8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x001976B8 *sys;
} sceMpeg_x001976B8;
typedef enum {
    sceMpegCbError_x001976B8,
    sceMpegCbNodata_x001976B8,
    sceMpegCbStopDMA_x001976B8,
    sceMpegCbRestartDMA_x001976B8,
    sceMpegCbBackground_x001976B8,
    sceMpegCbTimeStamp_x001976B8,
    sceMpegCbStr_x001976B8,
    sceMpegCbNum_x001976B8
} sceMpegCbType_x001976B8;
typedef struct {
    sceMpegCbType_x001976B8 type;
    char *errMessage;
} sceMpegCbDataError_x001976B8;
typedef struct {
    sceMpegCbType_x001976B8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x001976B8;
typedef struct {
    sceMpegCbType_x001976B8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x001976B8;
typedef union {
    sceMpegCbType_x001976B8 type;
    sceMpegCbDataError_x001976B8 error;
    sceMpegCbDataTimeStamp_x001976B8 ts;
    sceMpegCbDataStr_x001976B8 str;
} sceMpegCbData_x001976B8;
typedef int (*sceMpegCallback_x001976B8)(sceMpeg_x001976B8 *mp, sceMpegCbData_x001976B8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x001976B8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x001976B8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x001976B8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x001976B8;
typedef struct {
    _sceMpegPicture_x001976B8 *ref_image;
    _sceMpegPicture_x001976B8 *prev_image;
    _sceMpegPicture_x001976B8 *decode;
    _sceMpegPicture_x001976B8 *image;
} _sceMpegPictureSlot_x001976B8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x001976B8;
typedef void (*_sceMpegMcKernel_x001976B8)(_sceMpegMcFetch_x001976B8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x001976B8 luma_kernel[4];
    _sceMpegMcKernel_x001976B8 chroma_kernel[4];
    _sceMpegMcFetch_x001976B8 luma[4];
    _sceMpegMcFetch_x001976B8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x001976B8;
typedef struct _sceMpegDecoder_x001976B8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x001976B8 callbacks[sceMpegCbNum_x001976B8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x001976B8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x001976B8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x001976B8 slots[3];
    _sceMpegPicture_x001976B8 pictures[9];
    _sceMpegSprBuffer_x001976B8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x001976B8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x001976B8;
typedef struct SfdPlanes_x001976B8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x001976B8;
typedef struct SfdUserData_x001976B8 {
    char data[512];
    int size;
} SfdUserData_x001976B8;
typedef struct SfdRecVideo_x001976B8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001976B8 stamp;
    SfdUserData_x001976B8 user;
} SfdRecVideo_x001976B8;
typedef struct SfdSlot_x001976B8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x001976B8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001976B8 *blob;
    M2vPicAtr_x001976B8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x001976B8;
typedef struct SfdBufPool_x001976B8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x001976B8 slot[18];
} SfdBufPool_x001976B8;
typedef struct SfdMpvCond_x001976B8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x001976B8;
typedef struct SfdMpvWorkBufs_x001976B8 {
    int w[2];
} SfdMpvWorkBufs_x001976B8;
typedef struct SfdMpvFrameBufs_x001976B8 {
    int w[16];
} SfdMpvFrameBufs_x001976B8;
typedef struct SfdIpuEntry_x001976B8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001976B8;
typedef struct SfdDmaTag_x001976B8 {
    long long tag;
    long long pad;
} SfdDmaTag_x001976B8;
typedef struct SfdIpuStream_x001976B8 {
    void *base;
    SfdDmaTag_x001976B8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001976B8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001976B8;
typedef struct SfdIpuCtl_x001976B8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x001976B8 mpeg;
    SfdIpuStream_x001976B8 stream;
    sceMpegCbDataError_x001976B8 error;
} SfdIpuCtl_x001976B8;
typedef struct SfdPtsComp_x001976B8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x001976B8 ptsent;
} SfdPtsComp_x001976B8;
typedef struct SfdMpv_x001976B8 {
    void *handle;
    SfdMpvCond_x001976B8 cond;
    SfdMpvWorkBufs_x001976B8 work;
    SfdMpvFrameBufs_x001976B8 bufs;
    SfdSlot_x001976B8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x001976B8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x001976B8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x001976B8 planes[2];
    SfdSlot_x001976B8 *first;
    SfdSlot_x001976B8 *second;
    SfdSlot_x001976B8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x001976B8 slots[16];
    SfdBufPool_x001976B8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x001976B8 ipu;
} SfdMpv_x001976B8;
typedef enum SfdPicType_x001976B8 {
    SFD_PICTYPE_I_x001976B8 = 1,
    SFD_PICTYPE_P_x001976B8 = 2,
    SFD_PICTYPE_B_x001976B8 = 3
} SfdPicType_x001976B8;
typedef enum SfdFrmInfF60_x001976B8 {
    SFD_FRMINF_F60_0_x001976B8 = 0
} SfdFrmInfF60_x001976B8;
typedef struct SfdFrameDetail_x001976B8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x001976B8;
typedef struct SfdFrameInfo_x001976B8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x001976B8 picType;
    int time;
    int unit;
    SfdBufFmt_x001976B8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001976B8 *picUsr;
    SfdFrmInfF60_x001976B8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x001976B8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x001976B8;
typedef struct SfdVfrm_x001976B8 {
    int used;
    int f4;
    SfdFrameInfo_x001976B8 inf;
} SfdVfrm_x001976B8;
typedef struct SfdPly_x001976B8 SfdPly_x001976B8;
typedef struct SfdRec_x001976B8 SfdRec_x001976B8;
typedef struct SfdRecSub_x001976B8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001976B8;
typedef struct SfdRecSlot_x001976B8 {
    SfdRec_x001976B8 *rec;
    SfdRecSub_x001976B8 sub;
} SfdRecSlot_x001976B8;
typedef struct SfdSysHd_x001976B8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x001976B8;
typedef struct SfdRecSys_x001976B8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001976B8 syshd;
} SfdRecSys_x001976B8;
typedef struct SfdRecAudio_x001976B8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001976B8;
struct SfdRec_x001976B8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001976B8 hdrInf;
    SfdRecSys_x001976B8 sys;
    char pad2616[152];
    SfdRecVideo_x001976B8 video;
    SfdRecAudio_x001976B8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x001976B8 {
    SfdCrePrm_x001976B8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x001976B8 hdr;
    SfdMvInf_x001976B8 mvInf;
    char pad2380[4];
    SfdPlyInf_x001976B8 plyInf;
    SfdErrInf_x001976B8 err;
    int cond[SFD_COND_NUM_x001976B8];
    int cond2[SFD_COND_NUM_x001976B8];
    char pad3364[4];
    SfdTim_x001976B8 tim;
    SfdBufEnt_x001976B8 buf[8];
    SfdVfrm_x001976B8 vfrm[16];
    SfdTrnSlot_x001976B8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x001976B8 mps;
    char pad8944[176];
    SfdMpv_x001976B8 mpv;
    SfdAdxCtx_x001976B8 adxt;
    char pad13680[100];
    SfdAoap_x001976B8 aoap;
    char pad13804[4];
    SfainfList_x001976B8 uo;
    char pad13860[4];
    SfdRecSlot_x001976B8 see;
    SfdTmrInf_x001976B8 tmr;
};
extern SfdPly_x001976B8 *sfply_handles_x001976B8[8] __asm__("D_00426AE4");
extern int sfply_sys_stat_x001976B8 __asm__("D_00426A78");
int func_001976B8_x001976B8(void) __asm__("func_001976B8");
/* SFPLY_DecideSvrStat: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001976B8_x001976B8(void) {
    int count[3];
    int lock;
    SfdPly_x001976B8 **slot;
    int i;
    int kind;
    sfd_Lock_x001976B8(&lock);
    count[0] = 0;
    count[1] = 0;
    count[2] = 0;
    slot = sfply_handles_x001976B8;
    for (i = 0; i < 8; i++) {
        SfdPly_x001976B8 *h = *slot++;
        if (h != 0) {
            int st = h->stat;
            if (st == 0) {
                kind = 0;
            } else if (st == 6 || st < 0) {
                kind = 2;
            } else {
                kind = 1;
            }
            count[kind]++;
        }
    }
    if (count[1] != 0) {
        kind = 1;
    } else if (count[2] != 0) {
        kind = 2;
    } else {
        kind = 0;
    }
    sfply_sys_stat_x001976B8 = kind;
    sfd_Unlock_x001976B8(&lock);
    return kind;
}
extern s32 D_00426AE4_x00197778[] __asm__("D_00426AE4");
s32 func_00197810_x00197778(void) __asm__("func_00197810");
s32 func_00197830_x00197778(void) __asm__("func_00197830");
s32 func_00197870_x00197778(s32, s32) __asm__("func_00197870");
s32 func_00197778_x00197778(s32 a0, s32 a1) __asm__("func_00197778");
s32 func_00197778_x00197778(s32 a0, s32 a1)
{
    s32 *tbl = D_00426AE4_x00197778;
    s32 i;

    if (func_00197810_x00197778() != 0) {
        func_0018D650(0, 0xFF000203);
        return 0;
    }
    i = func_00197830_x00197778();
    if (i == -1) {
        return 0;
    }
    return tbl[i] = func_00197870_x00197778(a0, a1);
}
s32 func_00197810_x00197810(u8 *arg0) __asm__("func_00197810");
s32 func_00197810_x00197810(u8 *arg0) {
    if (*(s32 *)(arg0 + 4) == 0) {
        return -1;
    }
    if (*(u32 *)(arg0 + 0x40) >= 0x32D8U) {
        return 0;
    }
    return -1;
}
typedef struct SfdSj_x00197830 SfdSj_x00197830;
typedef struct SfdSjChunk_x00197830 {
    char *data;
    int len;
} SfdSjChunk_x00197830;
typedef struct SfdSjVtbl_x00197830 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00197830 *sj);
    int (*getUuid)(SfdSj_x00197830 *sj);
    void (*reset)(SfdSj_x00197830 *sj);
    void (*getChunk)(SfdSj_x00197830 *sj, int id, int n, SfdSjChunk_x00197830 *ck);
    void (*ungetChunk)(SfdSj_x00197830 *sj, int id, SfdSjChunk_x00197830 *ck);
    void (*putChunk)(SfdSj_x00197830 *sj, int id, SfdSjChunk_x00197830 *ck);
    int (*getNumData)(SfdSj_x00197830 *sj, int id);
} SfdSjVtbl_x00197830;
struct SfdSj_x00197830 {
    SfdSjVtbl_x00197830 *vtbl;
};
struct SfdSj_x00197830;
struct SfdRecSlot_x00197830;
struct SfdRec_x00197830;
struct SfdMpvCond_x00197830;
struct SfdPlanes_x00197830;
struct SfdFrameInfo_x00197830;
struct SfdPly_x00197830;
typedef int (*SfdTimeFn_x00197830)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00197830 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00197830;
typedef struct SfdTimeRec_x00197830 {
    int valid;
    SfdTimeCode_x00197830 tc;
    int time;
    int unit;
} SfdTimeRec_x00197830;
typedef struct SfdTst_x00197830 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00197830;
typedef struct SfdSyncTally_x00197830 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00197830;
typedef struct SfdSyncQueue_x00197830 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00197830;
typedef struct SfdFieldEntry_x00197830 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00197830;
typedef struct SfdPtsm_x00197830 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00197830;
typedef struct SfdHdrAudio_x00197830 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00197830;
typedef struct SfdHdrMux_x00197830 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00197830;
typedef struct SfdHdrVideo_x00197830 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00197830;
typedef struct SfdHdrInf_x00197830 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00197830 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00197830 audio;
    SfdHdrVideo_x00197830 video;
    int size;
    char data[2048];
} SfdHdrInf_x00197830;
typedef struct SfdMvInf_x00197830 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00197830;
typedef struct SfdPlyInf_x00197830 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00197830;
typedef void (*SfdErrFn_x00197830)(void *obj, int code);
typedef struct SfdErrInf_x00197830 {
    SfdErrFn_x00197830 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00197830;
typedef int (*SfdExtClockFn_x00197830)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00197830)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00197830 {
    SfdTimeFn_x00197830 timefn[6];
    SfdIsSkipFn_x00197830 isSkipFn;
    SfdTimeCode_x00197830 tc;
    SfdTimeRec_x00197830 state;
    SfdTimeRec_x00197830 best;
    SfdTimeRec_x00197830 tot;
    SfdTimeRec_x00197830 cur;
    SfdTimeRec_x00197830 latest;
    SfdTimeRec_x00197830 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00197830 tally;
    SfdSyncQueue_x00197830 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00197830 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00197830 tst;
    SfdFieldEntry_x00197830 fields[64];
    SfdPtsm_x00197830 ptsm;
    char pad1468[36];
} SfdTim_x00197830;
enum {
    SFD_COND_VIDEO_x00197830 = 5,
    SFD_COND_AUDIO_x00197830 = 6,
    SFD_COND_KEEPSUP_x00197830 = 8,
    SFD_COND_SYNCMODE_x00197830 = 15,
    SFD_COND_ETIME_x00197830 = 20,
    SFD_COND_ETUNIT_x00197830 = 21,
    SFD_COND_LNKSTM_x00197830 = 49,
    SFD_COND_SUPPLY_END_x00197830 = 56,
    SFD_COND_DECODE_END_x00197830 = 57,
    SFD_COND_DEMUX_SPLIT_x00197830 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00197830 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00197830 = 80,
    SFD_COND_SYSHD_FN_x00197830 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00197830 = 86,
    SFD_COND_NUM_x00197830 = 100
};
typedef enum SfdBufFmt_x00197830 {
    SFD_BUFFMT_0_x00197830 = 0
} SfdBufFmt_x00197830;
typedef enum SfdBufId_x00197830 {
    SFD_BUF_NONE_x00197830 = 8
} SfdBufId_x00197830;
typedef struct SfdCrePrm_x00197830 {
    struct SfdTrnConfig_x00197830 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00197830 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00197830;
typedef struct SfdItem_x00197830 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00197830;
typedef struct SfdRing_x00197830 {
    SfdItem_x00197830 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00197830;
typedef struct SfdBufInf_x00197830 {
    char *data;
    struct SfdSj_x00197830 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00197830;
typedef struct SfdBufCur_x00197830 {
    char *pos;
    int len;
} SfdBufCur_x00197830;
typedef struct SfdBufDlm_x00197830 {
    char *pos;
    char *end;
} SfdBufDlm_x00197830;
typedef struct SfdBufRing_x00197830 {
    SfdBufInf_x00197830 sup;
    SfdBufDlm_x00197830 dlm;
    int wtot;
    int rtot;
    SfdRing_x00197830 ptsque;
} SfdBufRing_x00197830;
typedef struct SfdBufAring_x00197830 {
    SfdBufInf_x00197830 sup;
    SfdBufCur_x00197830 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00197830;
typedef struct SfdUoch_x00197830 {
    struct SfdSj_x00197830 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00197830;
typedef struct SfdBufEnt_x00197830 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00197830 ring;
        SfdBufAring_x00197830 aring;
        SfdBufInf_x00197830 vfrm;
        SfdUoch_x00197830 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00197830;
typedef int (*SfdTrnFn_x00197830)();
typedef struct SfdTrnConfig_x00197830 {
    SfdTrnFn_x00197830 *fns[9];
} SfdTrnConfig_x00197830;
typedef struct SfdMpsPrm_x00197830 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00197830 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00197830;
typedef struct SfdAdxCfg_x00197830 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00197830;
typedef void (*SfdAdxStep_x00197830)(struct SfdPly_x00197830 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00197830 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00197830 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00197830 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00197830;
typedef struct SfdAoap_x00197830 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00197830 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00197830 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00197830 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00197830 *h);
    void (*setSpeed)(struct SfdPly_x00197830 *h, int speed);
} SfdAoap_x00197830;
typedef struct SfainfOut_x00197830 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00197830;
typedef struct SfainfList_x00197830 {
    int nout;
    SfainfOut_x00197830 out[3];
} SfainfList_x00197830;
typedef struct SfdTrnSlot_x00197830 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00197830 *mps;
        struct SfdMpv_x00197830 *mpv;
        SfdAdxCtx_x00197830 *adxt;
        SfdAoap_x00197830 *aoap;
        SfainfList_x00197830 *uo;
    } hn;
    SfdTrnFn_x00197830 *fns;
    SfdBufId_x00197830 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00197830;
typedef struct SfdTsum_x00197830 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00197830;
typedef struct SfdTmrInf_x00197830 {
    SfdTsum_x00197830 tsum[6];
} SfdTmrInf_x00197830;
struct SfdSj_x00197830;
typedef struct M2vErrInf_x00197830 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00197830;
typedef struct Mpeg2Ext_x00197830 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00197830;
typedef enum M2vFrameRate_x00197830 {
    M2V_FRAME_RATE_FORBIDDEN_x00197830 = 0
} M2vFrameRate_x00197830;
typedef enum M2vPicType_x00197830 {
    M2V_PICTYPE_I_x00197830 = 1,
    M2V_PICTYPE_P_x00197830 = 2,
    M2V_PICTYPE_B_x00197830 = 3,
    M2V_PICTYPE_D_x00197830 = 4
} M2vPicType_x00197830;
typedef enum M2vPicStruct_x00197830 {
    M2V_PICSTRUCT_TOP_FIELD_x00197830 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00197830 = 2,
    M2V_PICSTRUCT_FRAME_x00197830 = 3
} M2vPicStruct_x00197830;
typedef enum M2vPicAtrF64_x00197830 {
    M2V_PICATR_F64_0_x00197830 = 0
} M2vPicAtrF64_x00197830;
typedef struct M2vPicAtr_x00197830 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00197830 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00197830 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00197830 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00197830 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00197830;
typedef void (*M2vUsrDatFn_x00197830)(void *obj, int level);
typedef struct M2vUsrSj_x00197830 {
    struct SfdSj_x00197830 *sj;
    M2vUsrDatFn_x00197830 fn;
    void *obj;
} M2vUsrSj_x00197830;
typedef struct M2vPicUsr_x00197830 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00197830;
typedef void (*M2vCondFn_x00197830)();
typedef struct M2vObj_x00197830 {
    int stat;
    M2vErrInf_x00197830 err;
    M2vCondFn_x00197830 cond[16];
    M2vPicAtr_x00197830 picatr;
    char pad216[64];
    M2vUsrSj_x00197830 usrsj[4];
    M2vPicUsr_x00197830 picusr;
    char pad340[12];
    Mpeg2Ext_x00197830 ext;
    char pad1656[8];
} M2vObj_x00197830;
extern void M2V_SetErrFunc_x00197830(M2vObj_x00197830 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00197830 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00197830;
typedef struct sceMpeg_x00197830 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00197830 *sys;
} sceMpeg_x00197830;
typedef enum {
    sceMpegCbError_x00197830,
    sceMpegCbNodata_x00197830,
    sceMpegCbStopDMA_x00197830,
    sceMpegCbRestartDMA_x00197830,
    sceMpegCbBackground_x00197830,
    sceMpegCbTimeStamp_x00197830,
    sceMpegCbStr_x00197830,
    sceMpegCbNum_x00197830
} sceMpegCbType_x00197830;
typedef struct {
    sceMpegCbType_x00197830 type;
    char *errMessage;
} sceMpegCbDataError_x00197830;
typedef struct {
    sceMpegCbType_x00197830 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00197830;
typedef struct {
    sceMpegCbType_x00197830 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00197830;
typedef union {
    sceMpegCbType_x00197830 type;
    sceMpegCbDataError_x00197830 error;
    sceMpegCbDataTimeStamp_x00197830 ts;
    sceMpegCbDataStr_x00197830 str;
} sceMpegCbData_x00197830;
typedef int (*sceMpegCallback_x00197830)(sceMpeg_x00197830 *mp, sceMpegCbData_x00197830 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00197830 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00197830;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00197830;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00197830;
typedef struct {
    _sceMpegPicture_x00197830 *ref_image;
    _sceMpegPicture_x00197830 *prev_image;
    _sceMpegPicture_x00197830 *decode;
    _sceMpegPicture_x00197830 *image;
} _sceMpegPictureSlot_x00197830;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00197830;
typedef void (*_sceMpegMcKernel_x00197830)(_sceMpegMcFetch_x00197830 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00197830 luma_kernel[4];
    _sceMpegMcKernel_x00197830 chroma_kernel[4];
    _sceMpegMcFetch_x00197830 luma[4];
    _sceMpegMcFetch_x00197830 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00197830;
typedef struct _sceMpegDecoder_x00197830 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00197830 callbacks[sceMpegCbNum_x00197830];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00197830 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00197830 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00197830 slots[3];
    _sceMpegPicture_x00197830 pictures[9];
    _sceMpegSprBuffer_x00197830 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00197830 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00197830;
typedef struct SfdPlanes_x00197830 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00197830;
typedef struct SfdUserData_x00197830 {
    char data[512];
    int size;
} SfdUserData_x00197830;
typedef struct SfdRecVideo_x00197830 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00197830 stamp;
    SfdUserData_x00197830 user;
} SfdRecVideo_x00197830;
typedef struct SfdSlot_x00197830 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00197830 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197830 *blob;
    M2vPicAtr_x00197830 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00197830;
typedef struct SfdBufPool_x00197830 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00197830 slot[18];
} SfdBufPool_x00197830;
typedef struct SfdMpvCond_x00197830 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00197830;
typedef struct SfdMpvWorkBufs_x00197830 {
    int w[2];
} SfdMpvWorkBufs_x00197830;
typedef struct SfdMpvFrameBufs_x00197830 {
    int w[16];
} SfdMpvFrameBufs_x00197830;
typedef struct SfdIpuEntry_x00197830 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00197830;
typedef struct SfdDmaTag_x00197830 {
    long long tag;
    long long pad;
} SfdDmaTag_x00197830;
typedef struct SfdIpuStream_x00197830 {
    void *base;
    SfdDmaTag_x00197830 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00197830 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00197830;
typedef struct SfdIpuCtl_x00197830 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00197830 mpeg;
    SfdIpuStream_x00197830 stream;
    sceMpegCbDataError_x00197830 error;
} SfdIpuCtl_x00197830;
typedef struct SfdPtsComp_x00197830 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00197830 ptsent;
} SfdPtsComp_x00197830;
typedef struct SfdMpv_x00197830 {
    void *handle;
    SfdMpvCond_x00197830 cond;
    SfdMpvWorkBufs_x00197830 work;
    SfdMpvFrameBufs_x00197830 bufs;
    SfdSlot_x00197830 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00197830 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00197830 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00197830 planes[2];
    SfdSlot_x00197830 *first;
    SfdSlot_x00197830 *second;
    SfdSlot_x00197830 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00197830 slots[16];
    SfdBufPool_x00197830 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00197830 ipu;
} SfdMpv_x00197830;
typedef enum SfdPicType_x00197830 {
    SFD_PICTYPE_I_x00197830 = 1,
    SFD_PICTYPE_P_x00197830 = 2,
    SFD_PICTYPE_B_x00197830 = 3
} SfdPicType_x00197830;
typedef enum SfdFrmInfF60_x00197830 {
    SFD_FRMINF_F60_0_x00197830 = 0
} SfdFrmInfF60_x00197830;
typedef struct SfdFrameDetail_x00197830 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00197830;
typedef struct SfdFrameInfo_x00197830 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00197830 picType;
    int time;
    int unit;
    SfdBufFmt_x00197830 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197830 *picUsr;
    SfdFrmInfF60_x00197830 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00197830 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00197830;
typedef struct SfdVfrm_x00197830 {
    int used;
    int f4;
    SfdFrameInfo_x00197830 inf;
} SfdVfrm_x00197830;
typedef struct SfdPly_x00197830 SfdPly_x00197830;
typedef struct SfdRec_x00197830 SfdRec_x00197830;
typedef struct SfdRecSub_x00197830 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00197830;
typedef struct SfdRecSlot_x00197830 {
    SfdRec_x00197830 *rec;
    SfdRecSub_x00197830 sub;
} SfdRecSlot_x00197830;
typedef struct SfdSysHd_x00197830 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00197830;
typedef struct SfdRecSys_x00197830 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00197830 syshd;
} SfdRecSys_x00197830;
typedef struct SfdRecAudio_x00197830 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00197830;
struct SfdRec_x00197830 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00197830 hdrInf;
    SfdRecSys_x00197830 sys;
    char pad2616[152];
    SfdRecVideo_x00197830 video;
    SfdRecAudio_x00197830 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00197830 {
    SfdCrePrm_x00197830 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00197830 hdr;
    SfdMvInf_x00197830 mvInf;
    char pad2380[4];
    SfdPlyInf_x00197830 plyInf;
    SfdErrInf_x00197830 err;
    int cond[SFD_COND_NUM_x00197830];
    int cond2[SFD_COND_NUM_x00197830];
    char pad3364[4];
    SfdTim_x00197830 tim;
    SfdBufEnt_x00197830 buf[8];
    SfdVfrm_x00197830 vfrm[16];
    SfdTrnSlot_x00197830 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00197830 mps;
    char pad8944[176];
    SfdMpv_x00197830 mpv;
    SfdAdxCtx_x00197830 adxt;
    char pad13680[100];
    SfdAoap_x00197830 aoap;
    char pad13804[4];
    SfainfList_x00197830 uo;
    char pad13860[4];
    SfdRecSlot_x00197830 see;
    SfdTmrInf_x00197830 tmr;
};
extern SfdPly_x00197830 *sfply_handles_x00197830[8] __asm__("D_00426AE4");
int func_00197830_x00197830(void) __asm__("func_00197830");
/* sfply_SearchFreeHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00197830_x00197830(void) {
    SfdPly_x00197830 **slot = sfply_handles_x00197830;
    int i;
    for (i = 0; i < 8; i++) {
        if (*slot++ == 0) {
            return i;
        }
    }
    return -1;
}
typedef struct { s32 v[15]; u8 *buf; u32 size; } SfdCond_7870_x00197870;
extern u8 D_004268E0_x00197870[] __asm__("D_004268E0");
void func_00179018_x00197870(void *, s32, u32) __asm__("func_00179018");
void func_0018C950_x00197870(void *) __asm__("func_0018C950");
void func_00197A60_x00197870(void *) __asm__("func_00197A60");
void func_00197AC8_x00197870(void *) __asm__("func_00197AC8");
void func_00197B20_x00197870(void *) __asm__("func_00197B20");
void func_0018D638_x00197870(void *) __asm__("func_0018D638");
void func_00178BA8_x00197870(void *, void *, s32) __asm__("func_00178BA8");
void func_00199E08_x00197870(void *, void *) __asm__("func_00199E08");
s32 func_0018A1B8_x00197870(void *, void *, SfdCond_7870_x00197870 *) __asm__("func_0018A1B8");
void func_0019BAD8_x00197870(void *, void *, SfdCond_7870_x00197870 *, s32) __asm__("func_0019BAD8");
void func_001988D0_x00197870(void *) __asm__("func_001988D0");
s32 func_00197C50_x00197870(void *) __asm__("func_00197C50");
u8 *func_00197870_x00197870(SfdCond_7870_x00197870 *c, s32 a1) __asm__("func_00197870");
u8 *func_00197870_x00197870(SfdCond_7870_x00197870 *c, s32 a1)
{
    u8 *w;
    u8 *buf;

    buf = c->buf;
    func_00179018_x00197870(buf, 0, c->size >> 2);
    c->v[1] = (c->v[1] + 0x1F) & ~0x1F;
    w = (u8 *)((u32)(buf + 0x1F) & ~0x1F);
    *(s32 *)(w + 0x4C) = 0;
    *(s32 *)(w + 0x48) = 0;
    *(SfdCond_7870_x00197870 *)w = *c;
    *(s32 *)(w + 0x50) = 0;
    *(s32 *)(w + 0x44) = 1;
    *(s32 *)(w + 0x54) = 0;
    func_0018C950_x00197870(w + 0x78);
    func_00197A60_x00197870(w + 0x90C);
    func_00197AC8_x00197870(w + 0x94C);
    func_00197B20_x00197870(w + 0x31F8);
    func_0018D638_x00197870(w + 0x98C);
    func_00178BA8_x00197870(w + 0x9A0, D_004268E0_x00197870, 0x190);
    func_00178BA8_x00197870(w + 0xB30, D_004268E0_x00197870, 0x190);
    func_00199E08_x00197870(w, w + 0xCC0);
    if (func_0018A1B8_x00197870(w, w + 0x1280, c) != 0) return 0;
    func_0019BAD8_x00197870(w, w + 0x1BE0, c, a1);
    func_001988D0_x00197870(w + 0x31E8);
    if (func_00197C50_x00197870(w) != 0) return 0;
    *(s32 *)(w + 0x4C) = 1;
    *(s32 *)(w + 0x48) = 1;
    return w;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p32_065e1c_0_x __asm__("b3cse_asmpad_065e1c_0_xx");
typedef struct SfdMvInf_x00197A60 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00197A60;
void UTY_MemsetDword_x00197A60(void *dst, int value, unsigned int count) __asm__("func_00179018");
void func_00197A60_x00197A60(SfdMvInf_x00197A60 *rec) __asm__("func_00197A60");
/* sfply_InitMvInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00197A60_x00197A60(SfdMvInf_x00197A60 *rec) {
    UTY_MemsetDword_x00197A60(rec, 0, 16);
    rec->width = 0;
    rec->height = 0;
    rec->mbWidth = 0;
    rec->mbHeight = 0;
    rec->bitRate = 0;
    rec->frameRate = 0;
    rec->muxRate = 0;
    rec->vbvSize = 0;
    rec->fixedFlag = 1;
    rec->audioBound = -1;
    rec->videoBound = -1;
    rec->privateBound = -1;
}
void func_00179018_x00197AC8(void *, s32, s32) __asm__("func_00179018");
void func_00197AC8_x00197AC8(s32 *p) __asm__("func_00197AC8");
void func_00197AC8_x00197AC8(s32 *p)
{
    func_00179018_x00197AC8(p, 0, 0x10);
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[10] = 0;
    p[11] = 0;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c00197AC8_0;
extern int b3c00197AC8_1;
extern int b3cse_pad32_00197AC8_0_xxxx;
s32 func_00179018_x00197B20() __asm__("func_00179018");
s32 func_0019B948_x00197B20() __asm__("func_0019B948");
void func_00197B20_x00197B20(s32 arg0) __asm__("func_00197B20");
void func_00197B20_x00197B20(s32 arg0)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  var_a0 = arg0;
  var_s1 = 4;
  func_00179018_x00197B20(arg0, 0, 0x30);
  var_s0 = var_a0;
  do
  {
    var_a0 = var_s0;
    var_s0 += 0x20;
    var_s1 -= 1;
    func_0019B948_x00197B20(var_a0);
    var_a0 = var_s0;
  }
  while (var_s1 >= 0);
  func_0019B948_x00197B20(arg0 - -0xA0);
}
struct MovieModule_x00197B80 {
    char pad_94c[0x94c];
    int value_94c;
};
typedef void (*MovieCallback_x00197B80)(struct MovieModule_x00197B80 *, void *, int *);
extern MovieCallback_x00197B80 fn_12_2D73C_x00197B80(struct MovieModule_x00197B80 *, int) __asm__("func_001999E0");
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) __asm__("func_00197B80");
/* fn_12_2BA6C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2BA6C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00197B80_x00197B80(struct MovieModule_x00197B80 *module, int delta, void *arg) {
    int *value = &module->value_94c;
    MovieCallback_x00197B80 callback;
    *value += delta;
    callback = fn_12_2D73C_x00197B80(module, 0x24);
    if (callback != 0) {
        callback(module, arg, value);
    }
}
s32 (*func_001999E0_x00197BE8(s32, s32))(s32, s32, void *) __asm__("func_001999E0");
void func_00197BE8_x00197BE8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00197BE8");
void func_00197BE8_x00197BE8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 (*temp_v0)(s32, s32, u8 *);
  u8 *temp_s0;
  s32 new_var;
  temp_s0 = arg0 + 0x94C;
  new_var = *((s32 *) (((u8 *) temp_s0) + 4));
  do
  {
    *((s32 *) (((u8 *) temp_s0) + 4)) = (s32) (new_var + arg1);
    temp_v0 = func_001999E0_x00197BE8(arg0, 0x25);
    if (temp_v0 != ((void *) 0))
    {
      temp_v0(arg0, arg2, temp_s0);
    }
  }
  while (0);
}
s32 func_0019C040_x00197C50(s32, s32) __asm__("func_0019C040");
void func_00197C50_x00197C50(s32 a0) __asm__("func_00197C50");
void func_00197C50_x00197C50(s32 a0) {
    func_0019C040_x00197C50(a0, 3);
}
s32 func_0018A478_x00197C68(s32) __asm__("func_0018A478");
s32 func_0018C968_x00197C68(s32) __asm__("func_0018C968");
s32 func_0018D650_x00197C68(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00197C68() __asm__("func_0018D870");
s32 func_00197D08_x00197C68(s32) __asm__("func_00197D08");
s32 func_00197E40_x00197C68(s32) __asm__("func_00197E40");
extern s32 D_00426AE4_x00197C68 __asm__("D_00426AE4");
s32 func_00197C68_x00197C68(s32 arg0) __asm__("func_00197C68");
s32 func_00197C68_x00197C68(s32 arg0) {
  s32 new_var;
  s32 *var_v1;
  s32 var_a0;
  s32 temp_a1;
  if (((long) func_0018D870_x00197C68(arg0)) != 0)
  {
    return func_0018D650_x00197C68(0, 0xFF000131);
  }
  func_00197E40_x00197C68(arg0);
  func_0018C968_x00197C68(0x78 + arg0);
  func_0018A478_x00197C68(arg0);
  new_var = func_00197D08_x00197C68(arg0);
  var_a0 = 7;
  temp_a1 = new_var;
  var_v1 = &D_00426AE4_x00197C68;
  do
  {
    if ((*var_v1) == arg0)
    {
      *var_v1 = 0;
    }
    var_a0 -= 1;
    var_v1 += 1;
  }
  while (var_a0 >= 0);
  return temp_a1;
}
s32 func_0019C040_x00197D08() __asm__("func_0019C040");
void func_00197D08_x00197D08(u8 *arg0) __asm__("func_00197D08");
void func_00197D08_x00197D08(u8 *arg0) {
  *((s32 *) (((u8 *) arg0) + 0x4C)) = (*((s32 *) (((u8 *) arg0) + 0x48)) = 0);
  func_0019C040_x00197D08(arg0, 4);
}
s32 func_0018D650_x00197D30(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00197D30() __asm__("func_0018D870");
s32 func_00196548_x00197D30(void *) __asm__("func_00196548");
s32 func_00197DB0_x00197D30(void *) __asm__("func_00197DB0");
s32 func_001999E0_x00197D30(void *, s32) __asm__("func_001999E0");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0) __asm__("func_00197D30");
volatile unsigned short func_00197D30_x00197D30(u8 *arg0)
{
  int new_var;
  s32 *new_var2;
  new_var = func_0018D870_x00197D30() != 0;
  if (new_var)
  {
    func_0018D650_x00197D30(0, 0xFF000132);
    return;
  }
  if (func_001999E0_x00197D30(arg0, 0x2F) == 1)
  {
    func_00196548_x00197D30(arg0);
  }
  else
  {
    func_00197DB0_x00197D30(arg0);
  }
  new_var2 = (s32 *) (((u8 *) arg0) + 0x44);
  *new_var2 = 1;
}
s32 func_00197DB0(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x4C) = 4;
    return 0;
}
typedef struct SfdSj_x00197DC0 SfdSj_x00197DC0;
typedef struct SfdSjChunk_x00197DC0 {
    char *data;
    int len;
} SfdSjChunk_x00197DC0;
typedef struct SfdSjVtbl_x00197DC0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00197DC0 *sj);
    int (*getUuid)(SfdSj_x00197DC0 *sj);
    void (*reset)(SfdSj_x00197DC0 *sj);
    void (*getChunk)(SfdSj_x00197DC0 *sj, int id, int n, SfdSjChunk_x00197DC0 *ck);
    void (*ungetChunk)(SfdSj_x00197DC0 *sj, int id, SfdSjChunk_x00197DC0 *ck);
    void (*putChunk)(SfdSj_x00197DC0 *sj, int id, SfdSjChunk_x00197DC0 *ck);
    int (*getNumData)(SfdSj_x00197DC0 *sj, int id);
} SfdSjVtbl_x00197DC0;
struct SfdSj_x00197DC0 {
    SfdSjVtbl_x00197DC0 *vtbl;
};
struct SfdSj_x00197DC0;
struct SfdRecSlot_x00197DC0;
struct SfdRec_x00197DC0;
struct SfdMpvCond_x00197DC0;
struct SfdPlanes_x00197DC0;
struct SfdFrameInfo_x00197DC0;
struct SfdPly_x00197DC0;
typedef int (*SfdTimeFn_x00197DC0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00197DC0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00197DC0;
typedef struct SfdTimeRec_x00197DC0 {
    int valid;
    SfdTimeCode_x00197DC0 tc;
    int time;
    int unit;
} SfdTimeRec_x00197DC0;
typedef struct SfdTst_x00197DC0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00197DC0;
typedef struct SfdSyncTally_x00197DC0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00197DC0;
typedef struct SfdSyncQueue_x00197DC0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00197DC0;
typedef struct SfdFieldEntry_x00197DC0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00197DC0;
typedef struct SfdPtsm_x00197DC0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00197DC0;
typedef struct SfdHdrAudio_x00197DC0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00197DC0;
typedef struct SfdHdrMux_x00197DC0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00197DC0;
typedef struct SfdHdrVideo_x00197DC0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00197DC0;
typedef struct SfdHdrInf_x00197DC0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00197DC0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00197DC0 audio;
    SfdHdrVideo_x00197DC0 video;
    int size;
    char data[2048];
} SfdHdrInf_x00197DC0;
typedef struct SfdMvInf_x00197DC0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00197DC0;
typedef struct SfdPlyInf_x00197DC0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00197DC0;
typedef void (*SfdErrFn_x00197DC0)(void *obj, int code);
typedef struct SfdErrInf_x00197DC0 {
    SfdErrFn_x00197DC0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00197DC0;
typedef int (*SfdExtClockFn_x00197DC0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00197DC0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00197DC0 {
    SfdTimeFn_x00197DC0 timefn[6];
    SfdIsSkipFn_x00197DC0 isSkipFn;
    SfdTimeCode_x00197DC0 tc;
    SfdTimeRec_x00197DC0 state;
    SfdTimeRec_x00197DC0 best;
    SfdTimeRec_x00197DC0 tot;
    SfdTimeRec_x00197DC0 cur;
    SfdTimeRec_x00197DC0 latest;
    SfdTimeRec_x00197DC0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00197DC0 tally;
    SfdSyncQueue_x00197DC0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00197DC0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00197DC0 tst;
    SfdFieldEntry_x00197DC0 fields[64];
    SfdPtsm_x00197DC0 ptsm;
    char pad1468[36];
} SfdTim_x00197DC0;
enum {
    SFD_COND_VIDEO_x00197DC0 = 5,
    SFD_COND_AUDIO_x00197DC0 = 6,
    SFD_COND_KEEPSUP_x00197DC0 = 8,
    SFD_COND_SYNCMODE_x00197DC0 = 15,
    SFD_COND_ETIME_x00197DC0 = 20,
    SFD_COND_ETUNIT_x00197DC0 = 21,
    SFD_COND_LNKSTM_x00197DC0 = 49,
    SFD_COND_SUPPLY_END_x00197DC0 = 56,
    SFD_COND_DECODE_END_x00197DC0 = 57,
    SFD_COND_DEMUX_SPLIT_x00197DC0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00197DC0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00197DC0 = 80,
    SFD_COND_SYSHD_FN_x00197DC0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00197DC0 = 86,
    SFD_COND_NUM_x00197DC0 = 100
};
typedef enum SfdBufFmt_x00197DC0 {
    SFD_BUFFMT_0_x00197DC0 = 0
} SfdBufFmt_x00197DC0;
typedef enum SfdBufId_x00197DC0 {
    SFD_BUF_NONE_x00197DC0 = 8
} SfdBufId_x00197DC0;
typedef struct SfdCrePrm_x00197DC0 {
    struct SfdTrnConfig_x00197DC0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00197DC0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00197DC0;
typedef struct SfdItem_x00197DC0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00197DC0;
typedef struct SfdRing_x00197DC0 {
    SfdItem_x00197DC0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00197DC0;
typedef struct SfdBufInf_x00197DC0 {
    char *data;
    struct SfdSj_x00197DC0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00197DC0;
typedef struct SfdBufCur_x00197DC0 {
    char *pos;
    int len;
} SfdBufCur_x00197DC0;
typedef struct SfdBufDlm_x00197DC0 {
    char *pos;
    char *end;
} SfdBufDlm_x00197DC0;
typedef struct SfdBufRing_x00197DC0 {
    SfdBufInf_x00197DC0 sup;
    SfdBufDlm_x00197DC0 dlm;
    int wtot;
    int rtot;
    SfdRing_x00197DC0 ptsque;
} SfdBufRing_x00197DC0;
typedef struct SfdBufAring_x00197DC0 {
    SfdBufInf_x00197DC0 sup;
    SfdBufCur_x00197DC0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00197DC0;
typedef struct SfdUoch_x00197DC0 {
    struct SfdSj_x00197DC0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00197DC0;
typedef struct SfdBufEnt_x00197DC0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00197DC0 ring;
        SfdBufAring_x00197DC0 aring;
        SfdBufInf_x00197DC0 vfrm;
        SfdUoch_x00197DC0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00197DC0;
typedef int (*SfdTrnFn_x00197DC0)();
typedef struct SfdTrnConfig_x00197DC0 {
    SfdTrnFn_x00197DC0 *fns[9];
} SfdTrnConfig_x00197DC0;
typedef struct SfdMpsPrm_x00197DC0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00197DC0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00197DC0;
typedef struct SfdAdxCfg_x00197DC0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00197DC0;
typedef void (*SfdAdxStep_x00197DC0)(struct SfdPly_x00197DC0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00197DC0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00197DC0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00197DC0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00197DC0;
typedef struct SfdAoap_x00197DC0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00197DC0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00197DC0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00197DC0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00197DC0 *h);
    void (*setSpeed)(struct SfdPly_x00197DC0 *h, int speed);
} SfdAoap_x00197DC0;
typedef struct SfainfOut_x00197DC0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00197DC0;
typedef struct SfainfList_x00197DC0 {
    int nout;
    SfainfOut_x00197DC0 out[3];
} SfainfList_x00197DC0;
typedef struct SfdTrnSlot_x00197DC0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00197DC0 *mps;
        struct SfdMpv_x00197DC0 *mpv;
        SfdAdxCtx_x00197DC0 *adxt;
        SfdAoap_x00197DC0 *aoap;
        SfainfList_x00197DC0 *uo;
    } hn;
    SfdTrnFn_x00197DC0 *fns;
    SfdBufId_x00197DC0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00197DC0;
typedef struct SfdTsum_x00197DC0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00197DC0;
typedef struct SfdTmrInf_x00197DC0 {
    SfdTsum_x00197DC0 tsum[6];
} SfdTmrInf_x00197DC0;
int SFTRN_CallTrtTrif_x00197DC0(void *sfd, int index, int k, int a, int b) __asm__("func_0019C0D8");
struct SfdSj_x00197DC0;
typedef struct M2vErrInf_x00197DC0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00197DC0;
typedef struct Mpeg2Ext_x00197DC0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00197DC0;
typedef enum M2vFrameRate_x00197DC0 {
    M2V_FRAME_RATE_FORBIDDEN_x00197DC0 = 0
} M2vFrameRate_x00197DC0;
typedef enum M2vPicType_x00197DC0 {
    M2V_PICTYPE_I_x00197DC0 = 1,
    M2V_PICTYPE_P_x00197DC0 = 2,
    M2V_PICTYPE_B_x00197DC0 = 3,
    M2V_PICTYPE_D_x00197DC0 = 4
} M2vPicType_x00197DC0;
typedef enum M2vPicStruct_x00197DC0 {
    M2V_PICSTRUCT_TOP_FIELD_x00197DC0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00197DC0 = 2,
    M2V_PICSTRUCT_FRAME_x00197DC0 = 3
} M2vPicStruct_x00197DC0;
typedef enum M2vPicAtrF64_x00197DC0 {
    M2V_PICATR_F64_0_x00197DC0 = 0
} M2vPicAtrF64_x00197DC0;
typedef struct M2vPicAtr_x00197DC0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00197DC0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00197DC0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00197DC0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00197DC0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00197DC0;
typedef void (*M2vUsrDatFn_x00197DC0)(void *obj, int level);
typedef struct M2vUsrSj_x00197DC0 {
    struct SfdSj_x00197DC0 *sj;
    M2vUsrDatFn_x00197DC0 fn;
    void *obj;
} M2vUsrSj_x00197DC0;
typedef struct M2vPicUsr_x00197DC0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00197DC0;
typedef void (*M2vCondFn_x00197DC0)();
typedef struct M2vObj_x00197DC0 {
    int stat;
    M2vErrInf_x00197DC0 err;
    M2vCondFn_x00197DC0 cond[16];
    M2vPicAtr_x00197DC0 picatr;
    char pad216[64];
    M2vUsrSj_x00197DC0 usrsj[4];
    M2vPicUsr_x00197DC0 picusr;
    char pad340[12];
    Mpeg2Ext_x00197DC0 ext;
    char pad1656[8];
} M2vObj_x00197DC0;
extern void M2V_SetErrFunc_x00197DC0(M2vObj_x00197DC0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00197DC0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00197DC0;
typedef struct sceMpeg_x00197DC0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00197DC0 *sys;
} sceMpeg_x00197DC0;
typedef enum {
    sceMpegCbError_x00197DC0,
    sceMpegCbNodata_x00197DC0,
    sceMpegCbStopDMA_x00197DC0,
    sceMpegCbRestartDMA_x00197DC0,
    sceMpegCbBackground_x00197DC0,
    sceMpegCbTimeStamp_x00197DC0,
    sceMpegCbStr_x00197DC0,
    sceMpegCbNum_x00197DC0
} sceMpegCbType_x00197DC0;
typedef struct {
    sceMpegCbType_x00197DC0 type;
    char *errMessage;
} sceMpegCbDataError_x00197DC0;
typedef struct {
    sceMpegCbType_x00197DC0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00197DC0;
typedef struct {
    sceMpegCbType_x00197DC0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00197DC0;
typedef union {
    sceMpegCbType_x00197DC0 type;
    sceMpegCbDataError_x00197DC0 error;
    sceMpegCbDataTimeStamp_x00197DC0 ts;
    sceMpegCbDataStr_x00197DC0 str;
} sceMpegCbData_x00197DC0;
typedef int (*sceMpegCallback_x00197DC0)(sceMpeg_x00197DC0 *mp, sceMpegCbData_x00197DC0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00197DC0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00197DC0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00197DC0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00197DC0;
typedef struct {
    _sceMpegPicture_x00197DC0 *ref_image;
    _sceMpegPicture_x00197DC0 *prev_image;
    _sceMpegPicture_x00197DC0 *decode;
    _sceMpegPicture_x00197DC0 *image;
} _sceMpegPictureSlot_x00197DC0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00197DC0;
typedef void (*_sceMpegMcKernel_x00197DC0)(_sceMpegMcFetch_x00197DC0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00197DC0 luma_kernel[4];
    _sceMpegMcKernel_x00197DC0 chroma_kernel[4];
    _sceMpegMcFetch_x00197DC0 luma[4];
    _sceMpegMcFetch_x00197DC0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00197DC0;
typedef struct _sceMpegDecoder_x00197DC0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00197DC0 callbacks[sceMpegCbNum_x00197DC0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00197DC0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00197DC0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00197DC0 slots[3];
    _sceMpegPicture_x00197DC0 pictures[9];
    _sceMpegSprBuffer_x00197DC0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00197DC0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00197DC0;
typedef struct SfdPlanes_x00197DC0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00197DC0;
typedef struct SfdUserData_x00197DC0 {
    char data[512];
    int size;
} SfdUserData_x00197DC0;
typedef struct SfdRecVideo_x00197DC0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00197DC0 stamp;
    SfdUserData_x00197DC0 user;
} SfdRecVideo_x00197DC0;
typedef struct SfdSlot_x00197DC0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00197DC0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197DC0 *blob;
    M2vPicAtr_x00197DC0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00197DC0;
typedef struct SfdBufPool_x00197DC0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00197DC0 slot[18];
} SfdBufPool_x00197DC0;
typedef struct SfdMpvCond_x00197DC0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00197DC0;
typedef struct SfdMpvWorkBufs_x00197DC0 {
    int w[2];
} SfdMpvWorkBufs_x00197DC0;
typedef struct SfdMpvFrameBufs_x00197DC0 {
    int w[16];
} SfdMpvFrameBufs_x00197DC0;
typedef struct SfdIpuEntry_x00197DC0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00197DC0;
typedef struct SfdDmaTag_x00197DC0 {
    long long tag;
    long long pad;
} SfdDmaTag_x00197DC0;
typedef struct SfdIpuStream_x00197DC0 {
    void *base;
    SfdDmaTag_x00197DC0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00197DC0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00197DC0;
typedef struct SfdIpuCtl_x00197DC0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00197DC0 mpeg;
    SfdIpuStream_x00197DC0 stream;
    sceMpegCbDataError_x00197DC0 error;
} SfdIpuCtl_x00197DC0;
typedef struct SfdPtsComp_x00197DC0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00197DC0 ptsent;
} SfdPtsComp_x00197DC0;
typedef struct SfdMpv_x00197DC0 {
    void *handle;
    SfdMpvCond_x00197DC0 cond;
    SfdMpvWorkBufs_x00197DC0 work;
    SfdMpvFrameBufs_x00197DC0 bufs;
    SfdSlot_x00197DC0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00197DC0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00197DC0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00197DC0 planes[2];
    SfdSlot_x00197DC0 *first;
    SfdSlot_x00197DC0 *second;
    SfdSlot_x00197DC0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00197DC0 slots[16];
    SfdBufPool_x00197DC0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00197DC0 ipu;
} SfdMpv_x00197DC0;
typedef enum SfdPicType_x00197DC0 {
    SFD_PICTYPE_I_x00197DC0 = 1,
    SFD_PICTYPE_P_x00197DC0 = 2,
    SFD_PICTYPE_B_x00197DC0 = 3
} SfdPicType_x00197DC0;
typedef enum SfdFrmInfF60_x00197DC0 {
    SFD_FRMINF_F60_0_x00197DC0 = 0
} SfdFrmInfF60_x00197DC0;
typedef struct SfdFrameDetail_x00197DC0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00197DC0;
typedef struct SfdFrameInfo_x00197DC0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00197DC0 picType;
    int time;
    int unit;
    SfdBufFmt_x00197DC0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197DC0 *picUsr;
    SfdFrmInfF60_x00197DC0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00197DC0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00197DC0;
typedef struct SfdVfrm_x00197DC0 {
    int used;
    int f4;
    SfdFrameInfo_x00197DC0 inf;
} SfdVfrm_x00197DC0;
typedef struct SfdPly_x00197DC0 SfdPly_x00197DC0;
typedef struct SfdRec_x00197DC0 SfdRec_x00197DC0;
typedef struct SfdRecSub_x00197DC0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00197DC0;
typedef struct SfdRecSlot_x00197DC0 {
    SfdRec_x00197DC0 *rec;
    SfdRecSub_x00197DC0 sub;
} SfdRecSlot_x00197DC0;
typedef struct SfdSysHd_x00197DC0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00197DC0;
typedef struct SfdRecSys_x00197DC0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00197DC0 syshd;
} SfdRecSys_x00197DC0;
typedef struct SfdRecAudio_x00197DC0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00197DC0;
struct SfdRec_x00197DC0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00197DC0 hdrInf;
    SfdRecSys_x00197DC0 sys;
    char pad2616[152];
    SfdRecVideo_x00197DC0 video;
    SfdRecAudio_x00197DC0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00197DC0 {
    SfdCrePrm_x00197DC0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00197DC0 hdr;
    SfdMvInf_x00197DC0 mvInf;
    char pad2380[4];
    SfdPlyInf_x00197DC0 plyInf;
    SfdErrInf_x00197DC0 err;
    int cond[SFD_COND_NUM_x00197DC0];
    int cond2[SFD_COND_NUM_x00197DC0];
    char pad3364[4];
    SfdTim_x00197DC0 tim;
    SfdBufEnt_x00197DC0 buf[8];
    SfdVfrm_x00197DC0 vfrm[16];
    SfdTrnSlot_x00197DC0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00197DC0 mps;
    char pad8944[176];
    SfdMpv_x00197DC0 mpv;
    SfdAdxCtx_x00197DC0 adxt;
    char pad13680[100];
    SfdAoap_x00197DC0 aoap;
    char pad13804[4];
    SfainfList_x00197DC0 uo;
    char pad13860[4];
    SfdRecSlot_x00197DC0 see;
    SfdTmrInf_x00197DC0 tmr;
};
long func_00197DC0_x00197DC0(SfdPly_x00197DC0 *h) __asm__("func_00197DC0");
/* sfply_TrStart: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long func_00197DC0_x00197DC0(SfdPly_x00197DC0 *h) {
    return SFTRN_CallTrtTrif_x00197DC0(h, 7, 6, 0, 0);
}
typedef unsigned char Uint8_x00197DE8;
typedef signed char Sint8_x00197DE8;
typedef signed short Sint16_x00197DE8;
typedef unsigned int Uint32_x00197DE8;
typedef signed int Sint32_x00197DE8;
typedef signed long long Sint64_x00197DE8;
typedef char Char8_x00197DE8;
typedef struct SJ_OBJ_x00197DE8 *SJ_x00197DE8;
typedef struct {
        Uint8_x00197DE8 *data;
        Sint32_x00197DE8 len;
} SJCK_x00197DE8;
typedef struct {
        Uint8_x00197DE8 data[16];
} SJUUID_x00197DE8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197DE8 sj);
        const SJUUID_x00197DE8 *(*GetUuid)(SJ_x00197DE8 sj);
        void (*Reset)(SJ_x00197DE8 sj);
        void (*GetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, Sint32_x00197DE8 nbyte, SJCK_x00197DE8 *ck);
        void (*UngetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, SJCK_x00197DE8 *ck);
        void (*PutChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, SJCK_x00197DE8 *ck);
        Sint32_x00197DE8 (*GetNumData)(SJ_x00197DE8 sj, Sint32_x00197DE8 id);
        Sint32_x00197DE8 (*IsGetChunk)(SJ_x00197DE8 sj, Sint32_x00197DE8 id, Sint32_x00197DE8 nbyte, Sint32_x00197DE8 *rbyte);
        void (*EntryErrFunc)(SJ_x00197DE8 sj, void (*func)(void *obj, Char8_x00197DE8 *msg), void *obj);
} SJ_IF_x00197DE8;
struct SJ_OBJ_x00197DE8 {
        SJ_IF_x00197DE8 *vtbl;
};
typedef struct SFD_OBJ_x00197DE8 *SFD_x00197DE8;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197DE8 rsv1;
        Sint32_x00197DE8 rsv2;
} SFUO_CH_x00197DE8;
typedef struct {
        Sint32_x00197DE8 nch;
        SFUO_CH_x00197DE8 ch[3];
} SFUO_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Sint32_x00197DE8 (*SetOutPan)(SFD_x00197DE8 sfd, Sint32_x00197DE8 ch, Sint32_x00197DE8 pan);
        Sint32_x00197DE8 (*GetOutPan)(SFD_x00197DE8 sfd, Sint32_x00197DE8 ch);
        Sint32_x00197DE8 (*SetOutVol)(SFD_x00197DE8 sfd, Sint32_x00197DE8 vol);
        Sint32_x00197DE8 (*GetOutVol)(SFD_x00197DE8 sfd);
        void (*SetSpeed)(SFD_x00197DE8 sfd, Sint32_x00197DE8 speed);
        Sint32_x00197DE8 x18;
} SFAOAP_x00197DE8;
typedef struct {
        Uint8_x00197DE8 pad0[0xB8];
        Sint32_x00197DE8 tottime;
        Sint32_x00197DE8 tunit;
        Uint8_x00197DE8 padc0[0x150 - 0xC0];
        Sint64_x00197DE8 scr_base;
        Sint64_x00197DE8 scr_ofst;
        Sint32_x00197DE8 pad160;
        Sint32_x00197DE8 ctime;
        Sint32_x00197DE8 ctime_idx;
        Sint32_x00197DE8 ctime_que[32];
        Sint32_x00197DE8 tot_last;
        Sint32_x00197DE8 pad1F0;
        Sint32_x00197DE8 que_wr;
        Sint32_x00197DE8 que_rd;
        Sint32_x00197DE8 tot_que[32];
} SFCON_x00197DE8;
typedef struct {
        Sint32_x00197DE8 type;
        Sint32_x00197DE8 drop;
        Sint32_x00197DE8 hour;
        Sint32_x00197DE8 min;
        Sint32_x00197DE8 sec;
        Sint32_x00197DE8 frm;
        Sint32_x00197DE8 frm2;
        Sint16_x00197DE8 x1c;
        Sint16_x00197DE8 field;
} SFTIM_TC_x00197DE8;
typedef struct {
        Sint32_x00197DE8 valid;
        SFTIM_TC_x00197DE8 tc;
        Sint32_x00197DE8 val;
        Sint32_x00197DE8 unit;
} SFTIM_TTU_x00197DE8;
typedef struct {
        Sint64_x00197DE8 pts;
        Uint32_x00197DE8 pos;
        Uint32_x00197DE8 len;
} SFPTS_ENT_x00197DE8;
typedef struct {
        SFPTS_ENT_x00197DE8 *ent;
        Sint32_x00197DE8 num;
        Sint32_x00197DE8 cnt;
        Sint32_x00197DE8 wr;
        Sint32_x00197DE8 rd;
} SFPTS_QUE_x00197DE8;
typedef struct {
        Sint32_x00197DE8 raw[0x20];
} SFD_VFRM_INF_x00197DE8;
typedef struct {
        void *frm;
        Sint32_x00197DE8 x04;
        SFD_VFRM_INF_x00197DE8 inf;
} SFD_VFRM_x00197DE8;
typedef struct {
        Sint32_x00197DE8 kind;
        SJ_x00197DE8 sj;
        Uint32_x00197DE8 ofst;
        Sint32_x00197DE8 size;
        Sint32_x00197DE8 xsize;
        Sint32_x00197DE8 x14;
} SFBUF_SUP_x00197DE8;
typedef struct {
        SFBUF_SUP_x00197DE8 sup;
        Uint8_x00197DE8 *dlm_pos;
        Sint32_x00197DE8 dlm_len;
        Sint32_x00197DE8 wtot;
        Sint32_x00197DE8 rtot;
        SFPTS_QUE_x00197DE8 ptsque;
} SFBUF_RING_x00197DE8;
typedef struct {
        Sint32_x00197DE8 mode;
        Sint32_x00197DE8 used;
        Sint32_x00197DE8 prepflg;
        Sint32_x00197DE8 termflg;
        union {
                SFBUF_RING_x00197DE8 ring;
                struct {
                        Uint32_x00197DE8 adr;
                        Sint32_x00197DE8 size;
                        Sint32_x00197DE8 x18;
                        Sint32_x00197DE8 x1c;
                        SFD_VFRM_x00197DE8 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197DE8 adr;
                        Sint32_x00197DE8 size;
                        Sint32_x00197DE8 rsv[7];
                        Sint32_x00197DE8 rsv2[3];
                } aout;
                SFUO_CH_x00197DE8 uoch[3];
        } u;
        Sint32_x00197DE8 in_tr;
        Sint32_x00197DE8 out_tr;
        Sint32_x00197DE8 rsv[8];
} SFBUF_WORK_x00197DE8;
typedef Sint32_x00197DE8 (*SFD_TR_FUNC_x00197DE8)();
typedef struct {
        Sint32_x00197DE8 prepflg;
        Sint32_x00197DE8 termflg;
        void *hn;
        SFD_TR_FUNC_x00197DE8 *trif;
        Sint32_x00197DE8 bufin;
        Sint32_x00197DE8 bufout;
        Sint32_x00197DE8 bufout2;
        Sint32_x00197DE8 bufout3;
        Sint32_x00197DE8 x20;
        Uint8_x00197DE8 pad24[0x44 - 0x24];
} SFD_TR_x00197DE8;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197DE8 cwidth;
        Sint16_x00197DE8 ywidth;
} SFMPV_PLANE_x00197DE8;
typedef struct {
        void *buf;
        Sint32_x00197DE8 len;
} SFMPV_PICUSR_x00197DE8;
typedef struct {
        Sint32_x00197DE8 stat;
        Sint32_x00197DE8 lock;
        void *buf;
        SFTIM_TTU_x00197DE8 ttu;
        Sint32_x00197DE8 ftime;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 ndct;
        Sint32_x00197DE8 nbyte;
        Sint32_x00197DE8 gopno;
        Sint32_x00197DE8 x4c;
        Sint32_x00197DE8 x50;
        SFMPV_PICUSR_x00197DE8 *picusr;
        Sint32_x00197DE8 pa_width;
        Sint32_x00197DE8 pa_height;
        Sint32_x00197DE8 pa_mb_width;
        Sint32_x00197DE8 pa_mb_height;
        Sint32_x00197DE8 pa_frame_rate;
        Sint32_x00197DE8 tmpref;
        Sint32_x00197DE8 pa_pic_type;
        Sint32_x00197DE8 pa_tc_drop;
        Sint32_x00197DE8 pa_tc_hour;
        Sint32_x00197DE8 pa_tc_min;
        Sint32_x00197DE8 pa_tc_sec;
        Sint32_x00197DE8 pa_tc_pic;
        Sint32_x00197DE8 x88;
        Sint32_x00197DE8 x8c;
        Sint32_x00197DE8 pa_x90[3];
        Sint32_x00197DE8 pa_x9c[3];
        Sint16_x00197DE8 pa_xa8;
        Sint16_x00197DE8 pa_xaa;
        Sint8_x00197DE8 pa_xac;
        Sint8_x00197DE8 pa_xad;
        Sint8_x00197DE8 pa_xae;
        Sint8_x00197DE8 pa_xaf;
        Sint8_x00197DE8 pa_xb0;
        Sint8_x00197DE8 pa_xb1;
        Sint8_x00197DE8 pa_xb2;
        Sint8_x00197DE8 pa_xb3;
        Sint8_x00197DE8 pa_xb4;
        Sint8_x00197DE8 pa_xb5;
        Sint8_x00197DE8 pa_xb6;
        Sint8_x00197DE8 pa_xb7;
        Sint8_x00197DE8 pa_xb8;
        Sint8_x00197DE8 pa_xb9;
        Sint8_x00197DE8 pa_xba;
        Sint8_x00197DE8 pa_xbb;
        Sint8_x00197DE8 pa_xbc;
        Uint8_x00197DE8 padbd[0xD8 - 0xBD];
        Sint64_x00197DE8 pts;
} SFMPV_FRM_x00197DE8;
typedef struct {
        Sint32_x00197DE8 cwidth;
        Sint32_x00197DE8 cheight;
        Sint32_x00197DE8 width;
        Sint32_x00197DE8 height;
        Sint32_x00197DE8 x10;
        Sint32_x00197DE8 max_width;
        Sint32_x00197DE8 max_height;
        Sint32_x00197DE8 nfrm;
        Sint32_x00197DE8 x20;
} SFMPV_PARA_x00197DE8;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197DE8 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197DE8 *curfrm;
        Sint32_x00197DE8 picstat;
        Sint32_x00197DE8 dlmmask;
        Sint32_x00197DE8 termflg;
        Sint32_x00197DE8 gopstat;
        Sint32_x00197DE8 nskip;
        Sint32_x00197DE8 nconcat;
        Uint8_x00197DE8 picatr[0x80];
        Sint32_x00197DE8 last_ngop;
        Sint32_x00197DE8 newgop;
        Sint32_x00197DE8 vbvsiz;
        Sint32_x00197DE8 pts_tmpref;
        Sint32_x00197DE8 pts_ofst;
        Sint32_x00197DE8 pts_max;
        Sint32_x00197DE8 pad124;
        SFPTS_ENT_x00197DE8 ptsent;
        Sint32_x00197DE8 refidx[2];
        SFMPV_PLANE_x00197DE8 rfbuf[2];
        SFMPV_FRM_x00197DE8 *ref[2];
        SFMPV_FRM_x00197DE8 *pendfrm;
        Sint32_x00197DE8 skipret;
        Sint32_x00197DE8 dlmwait;
        Sint32_x00197DE8 tmpref_adj;
        Sint32_x00197DE8 nfrm;
        Sint32_x00197DE8 pad17c;
        SFMPV_FRM_x00197DE8 frm[16];
        void *picusr_buf;
        Sint32_x00197DE8 picusr_num;
        Sint32_x00197DE8 picusr_siz;
        Uint8_x00197DE8 *picusr_dat;
        Sint32_x00197DE8 picusr_len;
        SFMPV_PICUSR_x00197DE8 picusr[16];
        Sint32_x00197DE8 pad1014;
        Sint64_x00197DE8 pts;
} SFMPV_WORK_x00197DE8;
typedef struct {
        Sint32_x00197DE8 raw[0x2A];
} SFD_PLYINF_x00197DE8 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197DE8 code);
        void *obj;
        Sint32_x00197DE8 code;
        Sint32_x00197DE8 x0c;
        Sint32_x00197DE8 x10;
} SFLIB_ERRINF_x00197DE8;
typedef struct {
        Sint32_x00197DE8 codec;
        Sint32_x00197DE8 layer;
        Sint32_x00197DE8 chnum;
        Sint32_x00197DE8 smphz;
} SFHDS_AUD_x00197DE8;
typedef struct {
        Sint32_x00197DE8 codec;
        Sint32_x00197DE8 bitrate;
        Sint32_x00197DE8 picw;
        Sint32_x00197DE8 pich;
        Sint32_x00197DE8 picrate;
        Sint32_x00197DE8 ftr_eff;
        Sint32_x00197DE8 ftr_coltype;
        Sint32_x00197DE8 ftr_pictype;
        Sint32_x00197DE8 ftr_fixflg;
        Sint32_x00197DE8 ftr_shcfixflg;
        Sint32_x00197DE8 ftr_expand;
        Sint32_x00197DE8 ftr_gopn;
        Sint32_x00197DE8 ftr_gopm;
} SFHDS_VID_x00197DE8;
typedef struct {
        Sint32_x00197DE8 valid;
        Sint32_x00197DE8 ver_major;
        Sint32_x00197DE8 ver_minor;
        Sint32_x00197DE8 byterate;
        Sint32_x00197DE8 hdrsiz;
        Sint32_x00197DE8 packtype;
        Sint32_x00197DE8 pketsizlen;
        Sint32_x00197DE8 packsiz;
        Sint32_x00197DE8 numelem_tot;
        Sint32_x00197DE8 numelem_aud;
        Sint32_x00197DE8 numelem_vid;
        Sint32_x00197DE8 numelem_prv;
        Sint32_x00197DE8 maxplylen_aud;
        Sint32_x00197DE8 maxplylen_vid;
        Sint32_x00197DE8 maxfrmnum;
        Sint32_x00197DE8 stmid_prv1;
        Sint32_x00197DE8 stmid_prv2;
        Sint32_x00197DE8 stmid_aud;
        Sint32_x00197DE8 stmid_vid;
        SFHDS_AUD_x00197DE8 aud;
        SFHDS_VID_x00197DE8 vid;
        Sint32_x00197DE8 rawsiz;
        Uint8_x00197DE8 raw[0x800];
} SFHDS_FHD_x00197DE8;
typedef struct {
        Uint8_x00197DE8 data[2][0xB0];
        Sint32_x00197DE8 len[2];
} SFSEE_SYSHD_x00197DE8;
typedef struct {
        Sint32_x00197DE8 analyzed;
        Sint32_x00197DE8 ncount;
        Sint32_x00197DE8 tscale;
        Sint32_x00197DE8 nvid;
        Sint32_x00197DE8 naud;
        Sint32_x00197DE8 pad14;
        Sint64_x00197DE8 scr_base;
        Sint64_x00197DE8 pts_min;
        Sint32_x00197DE8 stmid_vid;
        Sint32_x00197DE8 stmid_aud;
        SFSEE_SYSHD_x00197DE8 syshd;
} SFSEE_SHDR_x00197DE8;
typedef struct {
        Sint32_x00197DE8 analyzed;
        Sint32_x00197DE8 ncount;
        Sint32_x00197DE8 tscale;
        SFHDS_FHD_x00197DE8 fhd;
        SFSEE_SHDR_x00197DE8 shdr;
        Uint8_x00197DE8 pada38[0xAD0 - 0xA38];
        Sint32_x00197DE8 a1hdr;
        Sint32_x00197DE8 a1ncount;
        Sint32_x00197DE8 a1tscale;
        Uint8_x00197DE8 padadc[0xD0C - 0xADC];
        Sint32_x00197DE8 a2hdr;
        Sint32_x00197DE8 a2ncount;
        Sint32_x00197DE8 a2tscale;
        Uint8_x00197DE8 padd18[0xDA8 - 0xD18];
        Sint32_x00197DE8 rate;
        Sint32_x00197DE8 fsize_est;
        Sint32_x00197DE8 tot_est;
        Sint32_x00197DE8 tunit_est;
        Sint32_x00197DE8 av_a;
        Sint32_x00197DE8 av_b;
        Sint32_x00197DE8 paddc0;
        Sint32_x00197DE8 fsize;
        Sint32_x00197DE8 tottime;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 byterate;
        Sint32_x00197DE8 seekpos;
} SFSEE_WORK_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Sint32_x00197DE8 pos;
        Sint32_x00197DE8 x08;
} SFSEE_REQ_x00197DE8;
typedef struct {
        Sint32_x00197DE8 bsize;
        Sint32_x00197DE8 xsize;
        void *buf;
        Sint32_x00197DE8 maxnch;
        Sint32_x00197DE8 x10;
        Sint32_x00197DE8 worksize;
        void *work;
} SFADXT_PARA_x00197DE8;
typedef struct {
        void *adxt;
        SJ_x00197DE8 sj;
        SFADXT_PARA_x00197DE8 para;
        Sint32_x00197DE8 tcount;
        Sint32_x00197DE8 tunit;
        Sint32_x00197DE8 pause;
        Sint32_x00197DE8 discard;
        Sint32_x00197DE8 seekflg;
        Sint32_x00197DE8 smplofst;
        void (*func)(SFD_x00197DE8 sfd, Uint8_x00197DE8 *data, Sint32_x00197DE8 len, Sint32_x00197DE8 *nbyte);
        Sint32_x00197DE8 x40;
        Sint32_x00197DE8 svrfreq;
        Sint32_x00197DE8 totbyte;
        Sint32_x00197DE8 x4c;
} SFADXT_WORK_x00197DE8;
typedef struct {
        SFSEE_WORK_x00197DE8 *wk;
        SFSEE_REQ_x00197DE8 req;
} SFSEE_HN_x00197DE8;
typedef struct {
        Sint32_x00197DE8 x00;
        Uint32_x00197DE8 adr;
        Sint32_x00197DE8 size[7];
        Sint32_x00197DE8 x24;
        Sint32_x00197DE8 unit;
        Sint32_x00197DE8 x2c;
        Sint32_x00197DE8 x30;
        Sint32_x00197DE8 x34;
        Sint32_x00197DE8 x38;
        void *hnwork;
        Sint32_x00197DE8 hnwksiz;
} SFD_CREPRM_x00197DE8;
typedef struct {
        void *x00;
        Sint32_x00197DE8 x04;
        Sint32_x00197DE8 x08;
} SFPLY_PTSM_x00197DE8;
typedef struct {
        Sint64_x00197DE8 sum;
        Sint64_x00197DE8 min;
        Sint64_x00197DE8 max;
        Sint32_x00197DE8 cnt;
} SFTMR_TSUM_x00197DE8;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197DE8 nvid;
        Sint32_x00197DE8 naud;
        Sint32_x00197DE8 x0c;
        Sint64_x00197DE8 pts_min;
        Sint64_x00197DE8 pts_min2;
        Sint32_x00197DE8 concat_cnt;
        Sint32_x00197DE8 last_vid;
        Sint32_x00197DE8 last_aud;
        Sint32_x00197DE8 first_vid;
        Sint32_x00197DE8 first_aud;
        Sint32_x00197DE8 cur_vid;
        Sint32_x00197DE8 cur_aud;
        Sint32_x00197DE8 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197DE8 stmid);
        void *outobj;
        Sint32_x00197DE8 skip;
        Sint32_x00197DE8 x15c;
        Sint32_x00197DE8 x160;
        Sint32_x00197DE8 x164;
} SFMPS_WORK_x00197DE8;
typedef struct SFD_OBJ_x00197DE8 {
        SFD_CREPRM_x00197DE8 prm;
        Sint32_x00197DE8 chg_flg;
        Sint32_x00197DE8 stat;
        Sint32_x00197DE8 req;
        Sint32_x00197DE8 pause_sw;
        Sint32_x00197DE8 pause_cnt;
        Uint8_x00197DE8 pad58[0x74 - 0x58];
        Sint32_x00197DE8 pad74;
        SFHDS_FHD_x00197DE8 fhd;
        Sint32_x00197DE8 x90c;
        Sint32_x00197DE8 x910;
        Sint32_x00197DE8 x914;
        Sint32_x00197DE8 x918;
        Sint32_x00197DE8 x91c;
        Sint32_x00197DE8 picrate;
        Sint32_x00197DE8 x924;
        Sint32_x00197DE8 x928;
        Sint32_x00197DE8 x92c;
        Sint32_x00197DE8 numelem_aud;
        Sint32_x00197DE8 numelem_vid;
        Sint32_x00197DE8 numelem_prv;
        Sint32_x00197DE8 x93c;
        Sint32_x00197DE8 x940;
        Sint32_x00197DE8 x944;
        Sint32_x00197DE8 x948;
        Sint32_x00197DE8 x94c;
        SFD_PLYINF_x00197DE8 plyinf;
        SFLIB_ERRINF_x00197DE8 err;
        Sint32_x00197DE8 cond[100];
        Sint32_x00197DE8 cond_def[100];
        Uint8_x00197DE8 padD24[4];
        SFCON_x00197DE8 con;
        Uint8_x00197DE8 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197DE8))];
        Uint8_x00197DE8 tst[0x1C0];
        Uint8_x00197DE8 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197DE8 ptsm;
        Uint8_x00197DE8 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197DE8 buf[8];
        SFD_VFRM_x00197DE8 vfrm[16];
        SFD_TR_x00197DE8 tr[9];
        Sint32_x00197DE8 pad218c;
        SFMPS_WORK_x00197DE8 mps;
        Uint8_x00197DE8 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197DE8 mpv;
        SFADXT_WORK_x00197DE8 adxt;
        Uint8_x00197DE8 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197DE8 aoap;
        SFUO_x00197DE8 uo_tbl;
        Sint32_x00197DE8 pad34c4;
        SFSEE_HN_x00197DE8 see;
        SFTMR_TSUM_x00197DE8 tsum[6];
} SFD_OBJ_x00197DE8;
Sint32_x00197DE8 SFLIB_SetErr_x00197DE8(SFD_x00197DE8 sfd, Sint32_x00197DE8 code) __asm__("func_0018D650");
Sint32_x00197DE8 SFLIB_CheckHn_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_0018D870");
extern void (*SFPLY_recordgetfrm_x00197DE8)(SFD_x00197DE8 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197DE8)(SFPLY_PTSM_x00197DE8 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197DE8)(SFPLY_PTSM_x00197DE8 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197DE8 sfply_StopHn_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_00197E40");
Sint32_x00197DE8 func_00197DE8_x00197DE8(SFD_x00197DE8 sfd) __asm__("func_00197DE8");
/* SFD_Stop: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197DE8 func_00197DE8_x00197DE8(SFD_x00197DE8 sfd)
{
        Sint32_x00197DE8 ret;
        if (SFLIB_CheckHn_x00197DE8(sfd) != 0) {
                return SFLIB_SetErr_x00197DE8(0, 0xFF000133);
        }
        ret = sfply_StopHn_x00197DE8(sfd);
        sfd->chg_flg = 1;
        return ret;
}
typedef struct SfdSj_x00197E40 SfdSj_x00197E40;
typedef struct SfdSjChunk_x00197E40 {
    char *data;
    int len;
} SfdSjChunk_x00197E40;
typedef struct SfdSjVtbl_x00197E40 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00197E40 *sj);
    int (*getUuid)(SfdSj_x00197E40 *sj);
    void (*reset)(SfdSj_x00197E40 *sj);
    void (*getChunk)(SfdSj_x00197E40 *sj, int id, int n, SfdSjChunk_x00197E40 *ck);
    void (*ungetChunk)(SfdSj_x00197E40 *sj, int id, SfdSjChunk_x00197E40 *ck);
    void (*putChunk)(SfdSj_x00197E40 *sj, int id, SfdSjChunk_x00197E40 *ck);
    int (*getNumData)(SfdSj_x00197E40 *sj, int id);
} SfdSjVtbl_x00197E40;
struct SfdSj_x00197E40 {
    SfdSjVtbl_x00197E40 *vtbl;
};
struct SfdSj_x00197E40;
struct SfdRecSlot_x00197E40;
struct SfdRec_x00197E40;
struct SfdMpvCond_x00197E40;
struct SfdPlanes_x00197E40;
struct SfdFrameInfo_x00197E40;
struct SfdPly_x00197E40;
typedef int (*SfdTimeFn_x00197E40)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00197E40 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00197E40;
typedef struct SfdTimeRec_x00197E40 {
    int valid;
    SfdTimeCode_x00197E40 tc;
    int time;
    int unit;
} SfdTimeRec_x00197E40;
typedef struct SfdTst_x00197E40 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00197E40;
typedef struct SfdSyncTally_x00197E40 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00197E40;
typedef struct SfdSyncQueue_x00197E40 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00197E40;
typedef struct SfdFieldEntry_x00197E40 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00197E40;
typedef struct SfdPtsm_x00197E40 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00197E40;
typedef struct SfdHdrAudio_x00197E40 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00197E40;
typedef struct SfdHdrMux_x00197E40 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00197E40;
typedef struct SfdHdrVideo_x00197E40 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00197E40;
typedef struct SfdHdrInf_x00197E40 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00197E40 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00197E40 audio;
    SfdHdrVideo_x00197E40 video;
    int size;
    char data[2048];
} SfdHdrInf_x00197E40;
typedef struct SfdMvInf_x00197E40 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00197E40;
typedef struct SfdPlyInf_x00197E40 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00197E40;
typedef void (*SfdErrFn_x00197E40)(void *obj, int code);
typedef struct SfdErrInf_x00197E40 {
    SfdErrFn_x00197E40 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00197E40;
typedef int (*SfdExtClockFn_x00197E40)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00197E40)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00197E40 {
    SfdTimeFn_x00197E40 timefn[6];
    SfdIsSkipFn_x00197E40 isSkipFn;
    SfdTimeCode_x00197E40 tc;
    SfdTimeRec_x00197E40 state;
    SfdTimeRec_x00197E40 best;
    SfdTimeRec_x00197E40 tot;
    SfdTimeRec_x00197E40 cur;
    SfdTimeRec_x00197E40 latest;
    SfdTimeRec_x00197E40 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00197E40 tally;
    SfdSyncQueue_x00197E40 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00197E40 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00197E40 tst;
    SfdFieldEntry_x00197E40 fields[64];
    SfdPtsm_x00197E40 ptsm;
    char pad1468[36];
} SfdTim_x00197E40;
enum {
    SFD_COND_VIDEO_x00197E40 = 5,
    SFD_COND_AUDIO_x00197E40 = 6,
    SFD_COND_KEEPSUP_x00197E40 = 8,
    SFD_COND_SYNCMODE_x00197E40 = 15,
    SFD_COND_ETIME_x00197E40 = 20,
    SFD_COND_ETUNIT_x00197E40 = 21,
    SFD_COND_LNKSTM_x00197E40 = 49,
    SFD_COND_SUPPLY_END_x00197E40 = 56,
    SFD_COND_DECODE_END_x00197E40 = 57,
    SFD_COND_DEMUX_SPLIT_x00197E40 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00197E40 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00197E40 = 80,
    SFD_COND_SYSHD_FN_x00197E40 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00197E40 = 86,
    SFD_COND_NUM_x00197E40 = 100
};
typedef enum SfdBufFmt_x00197E40 {
    SFD_BUFFMT_0_x00197E40 = 0
} SfdBufFmt_x00197E40;
typedef enum SfdBufId_x00197E40 {
    SFD_BUF_NONE_x00197E40 = 8
} SfdBufId_x00197E40;
typedef struct SfdCrePrm_x00197E40 {
    struct SfdTrnConfig_x00197E40 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00197E40 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00197E40;
typedef struct SfdItem_x00197E40 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00197E40;
typedef struct SfdRing_x00197E40 {
    SfdItem_x00197E40 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00197E40;
typedef struct SfdBufInf_x00197E40 {
    char *data;
    struct SfdSj_x00197E40 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00197E40;
typedef struct SfdBufCur_x00197E40 {
    char *pos;
    int len;
} SfdBufCur_x00197E40;
typedef struct SfdBufDlm_x00197E40 {
    char *pos;
    char *end;
} SfdBufDlm_x00197E40;
typedef struct SfdBufRing_x00197E40 {
    SfdBufInf_x00197E40 sup;
    SfdBufDlm_x00197E40 dlm;
    int wtot;
    int rtot;
    SfdRing_x00197E40 ptsque;
} SfdBufRing_x00197E40;
typedef struct SfdBufAring_x00197E40 {
    SfdBufInf_x00197E40 sup;
    SfdBufCur_x00197E40 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00197E40;
typedef struct SfdUoch_x00197E40 {
    struct SfdSj_x00197E40 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00197E40;
typedef struct SfdBufEnt_x00197E40 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00197E40 ring;
        SfdBufAring_x00197E40 aring;
        SfdBufInf_x00197E40 vfrm;
        SfdUoch_x00197E40 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00197E40;
typedef int (*SfdTrnFn_x00197E40)();
typedef struct SfdTrnConfig_x00197E40 {
    SfdTrnFn_x00197E40 *fns[9];
} SfdTrnConfig_x00197E40;
typedef struct SfdMpsPrm_x00197E40 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00197E40 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00197E40;
typedef struct SfdAdxCfg_x00197E40 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00197E40;
typedef void (*SfdAdxStep_x00197E40)(struct SfdPly_x00197E40 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00197E40 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00197E40 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00197E40 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00197E40;
typedef struct SfdAoap_x00197E40 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00197E40 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00197E40 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00197E40 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00197E40 *h);
    void (*setSpeed)(struct SfdPly_x00197E40 *h, int speed);
} SfdAoap_x00197E40;
typedef struct SfainfOut_x00197E40 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00197E40;
typedef struct SfainfList_x00197E40 {
    int nout;
    SfainfOut_x00197E40 out[3];
} SfainfList_x00197E40;
typedef struct SfdTrnSlot_x00197E40 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00197E40 *mps;
        struct SfdMpv_x00197E40 *mpv;
        SfdAdxCtx_x00197E40 *adxt;
        SfdAoap_x00197E40 *aoap;
        SfainfList_x00197E40 *uo;
    } hn;
    SfdTrnFn_x00197E40 *fns;
    SfdBufId_x00197E40 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00197E40;
typedef struct SfdTsum_x00197E40 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00197E40;
typedef struct SfdTmrInf_x00197E40 {
    SfdTsum_x00197E40 tsum[6];
} SfdTmrInf_x00197E40;
struct SfdSj_x00197E40;
typedef struct M2vErrInf_x00197E40 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00197E40;
typedef struct Mpeg2Ext_x00197E40 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00197E40;
typedef enum M2vFrameRate_x00197E40 {
    M2V_FRAME_RATE_FORBIDDEN_x00197E40 = 0
} M2vFrameRate_x00197E40;
typedef enum M2vPicType_x00197E40 {
    M2V_PICTYPE_I_x00197E40 = 1,
    M2V_PICTYPE_P_x00197E40 = 2,
    M2V_PICTYPE_B_x00197E40 = 3,
    M2V_PICTYPE_D_x00197E40 = 4
} M2vPicType_x00197E40;
typedef enum M2vPicStruct_x00197E40 {
    M2V_PICSTRUCT_TOP_FIELD_x00197E40 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00197E40 = 2,
    M2V_PICSTRUCT_FRAME_x00197E40 = 3
} M2vPicStruct_x00197E40;
typedef enum M2vPicAtrF64_x00197E40 {
    M2V_PICATR_F64_0_x00197E40 = 0
} M2vPicAtrF64_x00197E40;
typedef struct M2vPicAtr_x00197E40 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00197E40 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00197E40 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00197E40 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00197E40 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00197E40;
typedef void (*M2vUsrDatFn_x00197E40)(void *obj, int level);
typedef struct M2vUsrSj_x00197E40 {
    struct SfdSj_x00197E40 *sj;
    M2vUsrDatFn_x00197E40 fn;
    void *obj;
} M2vUsrSj_x00197E40;
typedef struct M2vPicUsr_x00197E40 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00197E40;
typedef void (*M2vCondFn_x00197E40)();
typedef struct M2vObj_x00197E40 {
    int stat;
    M2vErrInf_x00197E40 err;
    M2vCondFn_x00197E40 cond[16];
    M2vPicAtr_x00197E40 picatr;
    char pad216[64];
    M2vUsrSj_x00197E40 usrsj[4];
    M2vPicUsr_x00197E40 picusr;
    char pad340[12];
    Mpeg2Ext_x00197E40 ext;
    char pad1656[8];
} M2vObj_x00197E40;
extern void M2V_SetErrFunc_x00197E40(M2vObj_x00197E40 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00197E40 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00197E40;
typedef struct sceMpeg_x00197E40 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00197E40 *sys;
} sceMpeg_x00197E40;
typedef enum {
    sceMpegCbError_x00197E40,
    sceMpegCbNodata_x00197E40,
    sceMpegCbStopDMA_x00197E40,
    sceMpegCbRestartDMA_x00197E40,
    sceMpegCbBackground_x00197E40,
    sceMpegCbTimeStamp_x00197E40,
    sceMpegCbStr_x00197E40,
    sceMpegCbNum_x00197E40
} sceMpegCbType_x00197E40;
typedef struct {
    sceMpegCbType_x00197E40 type;
    char *errMessage;
} sceMpegCbDataError_x00197E40;
typedef struct {
    sceMpegCbType_x00197E40 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00197E40;
typedef struct {
    sceMpegCbType_x00197E40 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00197E40;
typedef union {
    sceMpegCbType_x00197E40 type;
    sceMpegCbDataError_x00197E40 error;
    sceMpegCbDataTimeStamp_x00197E40 ts;
    sceMpegCbDataStr_x00197E40 str;
} sceMpegCbData_x00197E40;
typedef int (*sceMpegCallback_x00197E40)(sceMpeg_x00197E40 *mp, sceMpegCbData_x00197E40 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00197E40 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00197E40;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00197E40;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00197E40;
typedef struct {
    _sceMpegPicture_x00197E40 *ref_image;
    _sceMpegPicture_x00197E40 *prev_image;
    _sceMpegPicture_x00197E40 *decode;
    _sceMpegPicture_x00197E40 *image;
} _sceMpegPictureSlot_x00197E40;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00197E40;
typedef void (*_sceMpegMcKernel_x00197E40)(_sceMpegMcFetch_x00197E40 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00197E40 luma_kernel[4];
    _sceMpegMcKernel_x00197E40 chroma_kernel[4];
    _sceMpegMcFetch_x00197E40 luma[4];
    _sceMpegMcFetch_x00197E40 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00197E40;
typedef struct _sceMpegDecoder_x00197E40 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00197E40 callbacks[sceMpegCbNum_x00197E40];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00197E40 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00197E40 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00197E40 slots[3];
    _sceMpegPicture_x00197E40 pictures[9];
    _sceMpegSprBuffer_x00197E40 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00197E40 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00197E40;
typedef struct SfdPlanes_x00197E40 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00197E40;
typedef struct SfdUserData_x00197E40 {
    char data[512];
    int size;
} SfdUserData_x00197E40;
typedef struct SfdRecVideo_x00197E40 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00197E40 stamp;
    SfdUserData_x00197E40 user;
} SfdRecVideo_x00197E40;
typedef struct SfdSlot_x00197E40 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00197E40 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197E40 *blob;
    M2vPicAtr_x00197E40 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00197E40;
typedef struct SfdBufPool_x00197E40 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00197E40 slot[18];
} SfdBufPool_x00197E40;
typedef struct SfdMpvCond_x00197E40 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00197E40;
typedef struct SfdMpvWorkBufs_x00197E40 {
    int w[2];
} SfdMpvWorkBufs_x00197E40;
typedef struct SfdMpvFrameBufs_x00197E40 {
    int w[16];
} SfdMpvFrameBufs_x00197E40;
typedef struct SfdIpuEntry_x00197E40 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00197E40;
typedef struct SfdDmaTag_x00197E40 {
    long long tag;
    long long pad;
} SfdDmaTag_x00197E40;
typedef struct SfdIpuStream_x00197E40 {
    void *base;
    SfdDmaTag_x00197E40 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00197E40 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00197E40;
typedef struct SfdIpuCtl_x00197E40 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00197E40 mpeg;
    SfdIpuStream_x00197E40 stream;
    sceMpegCbDataError_x00197E40 error;
} SfdIpuCtl_x00197E40;
typedef struct SfdPtsComp_x00197E40 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00197E40 ptsent;
} SfdPtsComp_x00197E40;
typedef struct SfdMpv_x00197E40 {
    void *handle;
    SfdMpvCond_x00197E40 cond;
    SfdMpvWorkBufs_x00197E40 work;
    SfdMpvFrameBufs_x00197E40 bufs;
    SfdSlot_x00197E40 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00197E40 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00197E40 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00197E40 planes[2];
    SfdSlot_x00197E40 *first;
    SfdSlot_x00197E40 *second;
    SfdSlot_x00197E40 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00197E40 slots[16];
    SfdBufPool_x00197E40 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00197E40 ipu;
} SfdMpv_x00197E40;
typedef enum SfdPicType_x00197E40 {
    SFD_PICTYPE_I_x00197E40 = 1,
    SFD_PICTYPE_P_x00197E40 = 2,
    SFD_PICTYPE_B_x00197E40 = 3
} SfdPicType_x00197E40;
typedef enum SfdFrmInfF60_x00197E40 {
    SFD_FRMINF_F60_0_x00197E40 = 0
} SfdFrmInfF60_x00197E40;
typedef struct SfdFrameDetail_x00197E40 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00197E40;
typedef struct SfdFrameInfo_x00197E40 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00197E40 picType;
    int time;
    int unit;
    SfdBufFmt_x00197E40 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00197E40 *picUsr;
    SfdFrmInfF60_x00197E40 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00197E40 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00197E40;
typedef struct SfdVfrm_x00197E40 {
    int used;
    int f4;
    SfdFrameInfo_x00197E40 inf;
} SfdVfrm_x00197E40;
typedef struct SfdPly_x00197E40 SfdPly_x00197E40;
typedef struct SfdRec_x00197E40 SfdRec_x00197E40;
typedef struct SfdRecSub_x00197E40 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00197E40;
typedef struct SfdRecSlot_x00197E40 {
    SfdRec_x00197E40 *rec;
    SfdRecSub_x00197E40 sub;
} SfdRecSlot_x00197E40;
typedef struct SfdSysHd_x00197E40 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00197E40;
typedef struct SfdRecSys_x00197E40 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00197E40 syshd;
} SfdRecSys_x00197E40;
typedef struct SfdRecAudio_x00197E40 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00197E40;
struct SfdRec_x00197E40 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00197E40 hdrInf;
    SfdRecSys_x00197E40 sys;
    char pad2616[152];
    SfdRecVideo_x00197E40 video;
    SfdRecAudio_x00197E40 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00197E40 {
    SfdCrePrm_x00197E40 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00197E40 hdr;
    SfdMvInf_x00197E40 mvInf;
    char pad2380[4];
    SfdPlyInf_x00197E40 plyInf;
    SfdErrInf_x00197E40 err;
    int cond[SFD_COND_NUM_x00197E40];
    int cond2[SFD_COND_NUM_x00197E40];
    char pad3364[4];
    SfdTim_x00197E40 tim;
    SfdBufEnt_x00197E40 buf[8];
    SfdVfrm_x00197E40 vfrm[16];
    SfdTrnSlot_x00197E40 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00197E40 mps;
    char pad8944[176];
    SfdMpv_x00197E40 mpv;
    SfdAdxCtx_x00197E40 adxt;
    char pad13680[100];
    SfdAoap_x00197E40 aoap;
    char pad13804[4];
    SfainfList_x00197E40 uo;
    char pad13860[4];
    SfdRecSlot_x00197E40 see;
    SfdTmrInf_x00197E40 tmr;
};
void SFPLY_SetResetFlg_x00197E40(int on) __asm__("func_00197EA8");
int sfply_TrStop_x00197E40(SfdPly_x00197E40 *h) __asm__("func_00197EC8");
int sfply_ResetHn_x00197E40(SfdPly_x00197E40 *h) __asm__("func_00197F28");
void SFPLY_SetResetFlg_x00197E40(int on) __asm__("func_00197EA8");
int sfply_TrStop_x00197E40(SfdPly_x00197E40 *h) __asm__("func_00197EC8");
int sfply_ResetHn_x00197E40(SfdPly_x00197E40 *h) __asm__("func_00197F28");
int func_00197E40_x00197E40(void *sfd) __asm__("func_00197E40");
/* SFPLY_Stop: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdply.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00197E40_x00197E40(void *sfd) {
    SfdPly_x00197E40 *h = sfd;
    int result;
    if (h->stat == 1) {
        return 0;
    }
    result = sfply_TrStop_x00197E40(h);
    if (result != 0) {
        return result;
    }
    h->reqStat = 0;
    h->stat = 0;
    SFPLY_SetResetFlg_x00197E40(1);
    result = sfply_ResetHn_x00197E40(h);
    SFPLY_SetResetFlg_x00197E40(0);
    return result;
}
void func_00197EA8(s32 arg0) {
    D_00426ADC = arg0;
}
s32 func_00197EB8(void) {
    return D_00426ADC;
}
typedef unsigned char Uint8_x00197EC8;
typedef signed char Sint8_x00197EC8;
typedef signed short Sint16_x00197EC8;
typedef unsigned int Uint32_x00197EC8;
typedef signed int Sint32_x00197EC8;
typedef signed long long Sint64_x00197EC8;
typedef char Char8_x00197EC8;
typedef struct SJ_OBJ_x00197EC8 *SJ_x00197EC8;
typedef struct {
        Uint8_x00197EC8 *data;
        Sint32_x00197EC8 len;
} SJCK_x00197EC8;
typedef struct {
        Uint8_x00197EC8 data[16];
} SJUUID_x00197EC8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00197EC8 sj);
        const SJUUID_x00197EC8 *(*GetUuid)(SJ_x00197EC8 sj);
        void (*Reset)(SJ_x00197EC8 sj);
        void (*GetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, Sint32_x00197EC8 nbyte, SJCK_x00197EC8 *ck);
        void (*UngetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, SJCK_x00197EC8 *ck);
        void (*PutChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, SJCK_x00197EC8 *ck);
        Sint32_x00197EC8 (*GetNumData)(SJ_x00197EC8 sj, Sint32_x00197EC8 id);
        Sint32_x00197EC8 (*IsGetChunk)(SJ_x00197EC8 sj, Sint32_x00197EC8 id, Sint32_x00197EC8 nbyte, Sint32_x00197EC8 *rbyte);
        void (*EntryErrFunc)(SJ_x00197EC8 sj, void (*func)(void *obj, Char8_x00197EC8 *msg), void *obj);
} SJ_IF_x00197EC8;
struct SJ_OBJ_x00197EC8 {
        SJ_IF_x00197EC8 *vtbl;
};
typedef struct SFD_OBJ_x00197EC8 *SFD_x00197EC8;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00197EC8 rsv1;
        Sint32_x00197EC8 rsv2;
} SFUO_CH_x00197EC8;
typedef struct {
        Sint32_x00197EC8 nch;
        SFUO_CH_x00197EC8 ch[3];
} SFUO_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Sint32_x00197EC8 (*SetOutPan)(SFD_x00197EC8 sfd, Sint32_x00197EC8 ch, Sint32_x00197EC8 pan);
        Sint32_x00197EC8 (*GetOutPan)(SFD_x00197EC8 sfd, Sint32_x00197EC8 ch);
        Sint32_x00197EC8 (*SetOutVol)(SFD_x00197EC8 sfd, Sint32_x00197EC8 vol);
        Sint32_x00197EC8 (*GetOutVol)(SFD_x00197EC8 sfd);
        void (*SetSpeed)(SFD_x00197EC8 sfd, Sint32_x00197EC8 speed);
        Sint32_x00197EC8 x18;
} SFAOAP_x00197EC8;
typedef struct {
        Uint8_x00197EC8 pad0[0xB8];
        Sint32_x00197EC8 tottime;
        Sint32_x00197EC8 tunit;
        Uint8_x00197EC8 padc0[0x150 - 0xC0];
        Sint64_x00197EC8 scr_base;
        Sint64_x00197EC8 scr_ofst;
        Sint32_x00197EC8 pad160;
        Sint32_x00197EC8 ctime;
        Sint32_x00197EC8 ctime_idx;
        Sint32_x00197EC8 ctime_que[32];
        Sint32_x00197EC8 tot_last;
        Sint32_x00197EC8 pad1F0;
        Sint32_x00197EC8 que_wr;
        Sint32_x00197EC8 que_rd;
        Sint32_x00197EC8 tot_que[32];
} SFCON_x00197EC8;
typedef struct {
        Sint32_x00197EC8 type;
        Sint32_x00197EC8 drop;
        Sint32_x00197EC8 hour;
        Sint32_x00197EC8 min;
        Sint32_x00197EC8 sec;
        Sint32_x00197EC8 frm;
        Sint32_x00197EC8 frm2;
        Sint16_x00197EC8 x1c;
        Sint16_x00197EC8 field;
} SFTIM_TC_x00197EC8;
typedef struct {
        Sint32_x00197EC8 valid;
        SFTIM_TC_x00197EC8 tc;
        Sint32_x00197EC8 val;
        Sint32_x00197EC8 unit;
} SFTIM_TTU_x00197EC8;
typedef struct {
        Sint64_x00197EC8 pts;
        Uint32_x00197EC8 pos;
        Uint32_x00197EC8 len;
} SFPTS_ENT_x00197EC8;
typedef struct {
        SFPTS_ENT_x00197EC8 *ent;
        Sint32_x00197EC8 num;
        Sint32_x00197EC8 cnt;
        Sint32_x00197EC8 wr;
        Sint32_x00197EC8 rd;
} SFPTS_QUE_x00197EC8;
typedef struct {
        Sint32_x00197EC8 raw[0x20];
} SFD_VFRM_INF_x00197EC8;
typedef struct {
        void *frm;
        Sint32_x00197EC8 x04;
        SFD_VFRM_INF_x00197EC8 inf;
} SFD_VFRM_x00197EC8;
typedef struct {
        Sint32_x00197EC8 kind;
        SJ_x00197EC8 sj;
        Uint32_x00197EC8 ofst;
        Sint32_x00197EC8 size;
        Sint32_x00197EC8 xsize;
        Sint32_x00197EC8 x14;
} SFBUF_SUP_x00197EC8;
typedef struct {
        SFBUF_SUP_x00197EC8 sup;
        Uint8_x00197EC8 *dlm_pos;
        Sint32_x00197EC8 dlm_len;
        Sint32_x00197EC8 wtot;
        Sint32_x00197EC8 rtot;
        SFPTS_QUE_x00197EC8 ptsque;
} SFBUF_RING_x00197EC8;
typedef struct {
        Sint32_x00197EC8 mode;
        Sint32_x00197EC8 used;
        Sint32_x00197EC8 prepflg;
        Sint32_x00197EC8 termflg;
        union {
                SFBUF_RING_x00197EC8 ring;
                struct {
                        Uint32_x00197EC8 adr;
                        Sint32_x00197EC8 size;
                        Sint32_x00197EC8 x18;
                        Sint32_x00197EC8 x1c;
                        SFD_VFRM_x00197EC8 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00197EC8 adr;
                        Sint32_x00197EC8 size;
                        Sint32_x00197EC8 rsv[7];
                        Sint32_x00197EC8 rsv2[3];
                } aout;
                SFUO_CH_x00197EC8 uoch[3];
        } u;
        Sint32_x00197EC8 in_tr;
        Sint32_x00197EC8 out_tr;
        Sint32_x00197EC8 rsv[8];
} SFBUF_WORK_x00197EC8;
typedef Sint32_x00197EC8 (*SFD_TR_FUNC_x00197EC8)();
typedef struct {
        Sint32_x00197EC8 prepflg;
        Sint32_x00197EC8 termflg;
        void *hn;
        SFD_TR_FUNC_x00197EC8 *trif;
        Sint32_x00197EC8 bufin;
        Sint32_x00197EC8 bufout;
        Sint32_x00197EC8 bufout2;
        Sint32_x00197EC8 bufout3;
        Sint32_x00197EC8 x20;
        Uint8_x00197EC8 pad24[0x44 - 0x24];
} SFD_TR_x00197EC8;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00197EC8 cwidth;
        Sint16_x00197EC8 ywidth;
} SFMPV_PLANE_x00197EC8;
typedef struct {
        void *buf;
        Sint32_x00197EC8 len;
} SFMPV_PICUSR_x00197EC8;
typedef struct {
        Sint32_x00197EC8 stat;
        Sint32_x00197EC8 lock;
        void *buf;
        SFTIM_TTU_x00197EC8 ttu;
        Sint32_x00197EC8 ftime;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 ndct;
        Sint32_x00197EC8 nbyte;
        Sint32_x00197EC8 gopno;
        Sint32_x00197EC8 x4c;
        Sint32_x00197EC8 x50;
        SFMPV_PICUSR_x00197EC8 *picusr;
        Sint32_x00197EC8 pa_width;
        Sint32_x00197EC8 pa_height;
        Sint32_x00197EC8 pa_mb_width;
        Sint32_x00197EC8 pa_mb_height;
        Sint32_x00197EC8 pa_frame_rate;
        Sint32_x00197EC8 tmpref;
        Sint32_x00197EC8 pa_pic_type;
        Sint32_x00197EC8 pa_tc_drop;
        Sint32_x00197EC8 pa_tc_hour;
        Sint32_x00197EC8 pa_tc_min;
        Sint32_x00197EC8 pa_tc_sec;
        Sint32_x00197EC8 pa_tc_pic;
        Sint32_x00197EC8 x88;
        Sint32_x00197EC8 x8c;
        Sint32_x00197EC8 pa_x90[3];
        Sint32_x00197EC8 pa_x9c[3];
        Sint16_x00197EC8 pa_xa8;
        Sint16_x00197EC8 pa_xaa;
        Sint8_x00197EC8 pa_xac;
        Sint8_x00197EC8 pa_xad;
        Sint8_x00197EC8 pa_xae;
        Sint8_x00197EC8 pa_xaf;
        Sint8_x00197EC8 pa_xb0;
        Sint8_x00197EC8 pa_xb1;
        Sint8_x00197EC8 pa_xb2;
        Sint8_x00197EC8 pa_xb3;
        Sint8_x00197EC8 pa_xb4;
        Sint8_x00197EC8 pa_xb5;
        Sint8_x00197EC8 pa_xb6;
        Sint8_x00197EC8 pa_xb7;
        Sint8_x00197EC8 pa_xb8;
        Sint8_x00197EC8 pa_xb9;
        Sint8_x00197EC8 pa_xba;
        Sint8_x00197EC8 pa_xbb;
        Sint8_x00197EC8 pa_xbc;
        Uint8_x00197EC8 padbd[0xD8 - 0xBD];
        Sint64_x00197EC8 pts;
} SFMPV_FRM_x00197EC8;
typedef struct {
        Sint32_x00197EC8 cwidth;
        Sint32_x00197EC8 cheight;
        Sint32_x00197EC8 width;
        Sint32_x00197EC8 height;
        Sint32_x00197EC8 x10;
        Sint32_x00197EC8 max_width;
        Sint32_x00197EC8 max_height;
        Sint32_x00197EC8 nfrm;
        Sint32_x00197EC8 x20;
} SFMPV_PARA_x00197EC8;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00197EC8 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00197EC8 *curfrm;
        Sint32_x00197EC8 picstat;
        Sint32_x00197EC8 dlmmask;
        Sint32_x00197EC8 termflg;
        Sint32_x00197EC8 gopstat;
        Sint32_x00197EC8 nskip;
        Sint32_x00197EC8 nconcat;
        Uint8_x00197EC8 picatr[0x80];
        Sint32_x00197EC8 last_ngop;
        Sint32_x00197EC8 newgop;
        Sint32_x00197EC8 vbvsiz;
        Sint32_x00197EC8 pts_tmpref;
        Sint32_x00197EC8 pts_ofst;
        Sint32_x00197EC8 pts_max;
        Sint32_x00197EC8 pad124;
        SFPTS_ENT_x00197EC8 ptsent;
        Sint32_x00197EC8 refidx[2];
        SFMPV_PLANE_x00197EC8 rfbuf[2];
        SFMPV_FRM_x00197EC8 *ref[2];
        SFMPV_FRM_x00197EC8 *pendfrm;
        Sint32_x00197EC8 skipret;
        Sint32_x00197EC8 dlmwait;
        Sint32_x00197EC8 tmpref_adj;
        Sint32_x00197EC8 nfrm;
        Sint32_x00197EC8 pad17c;
        SFMPV_FRM_x00197EC8 frm[16];
        void *picusr_buf;
        Sint32_x00197EC8 picusr_num;
        Sint32_x00197EC8 picusr_siz;
        Uint8_x00197EC8 *picusr_dat;
        Sint32_x00197EC8 picusr_len;
        SFMPV_PICUSR_x00197EC8 picusr[16];
        Sint32_x00197EC8 pad1014;
        Sint64_x00197EC8 pts;
} SFMPV_WORK_x00197EC8;
typedef struct {
        Sint32_x00197EC8 raw[0x2A];
} SFD_PLYINF_x00197EC8 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00197EC8 code);
        void *obj;
        Sint32_x00197EC8 code;
        Sint32_x00197EC8 x0c;
        Sint32_x00197EC8 x10;
} SFLIB_ERRINF_x00197EC8;
typedef struct {
        Sint32_x00197EC8 codec;
        Sint32_x00197EC8 layer;
        Sint32_x00197EC8 chnum;
        Sint32_x00197EC8 smphz;
} SFHDS_AUD_x00197EC8;
typedef struct {
        Sint32_x00197EC8 codec;
        Sint32_x00197EC8 bitrate;
        Sint32_x00197EC8 picw;
        Sint32_x00197EC8 pich;
        Sint32_x00197EC8 picrate;
        Sint32_x00197EC8 ftr_eff;
        Sint32_x00197EC8 ftr_coltype;
        Sint32_x00197EC8 ftr_pictype;
        Sint32_x00197EC8 ftr_fixflg;
        Sint32_x00197EC8 ftr_shcfixflg;
        Sint32_x00197EC8 ftr_expand;
        Sint32_x00197EC8 ftr_gopn;
        Sint32_x00197EC8 ftr_gopm;
} SFHDS_VID_x00197EC8;
typedef struct {
        Sint32_x00197EC8 valid;
        Sint32_x00197EC8 ver_major;
        Sint32_x00197EC8 ver_minor;
        Sint32_x00197EC8 byterate;
        Sint32_x00197EC8 hdrsiz;
        Sint32_x00197EC8 packtype;
        Sint32_x00197EC8 pketsizlen;
        Sint32_x00197EC8 packsiz;
        Sint32_x00197EC8 numelem_tot;
        Sint32_x00197EC8 numelem_aud;
        Sint32_x00197EC8 numelem_vid;
        Sint32_x00197EC8 numelem_prv;
        Sint32_x00197EC8 maxplylen_aud;
        Sint32_x00197EC8 maxplylen_vid;
        Sint32_x00197EC8 maxfrmnum;
        Sint32_x00197EC8 stmid_prv1;
        Sint32_x00197EC8 stmid_prv2;
        Sint32_x00197EC8 stmid_aud;
        Sint32_x00197EC8 stmid_vid;
        SFHDS_AUD_x00197EC8 aud;
        SFHDS_VID_x00197EC8 vid;
        Sint32_x00197EC8 rawsiz;
        Uint8_x00197EC8 raw[0x800];
} SFHDS_FHD_x00197EC8;
typedef struct {
        Uint8_x00197EC8 data[2][0xB0];
        Sint32_x00197EC8 len[2];
} SFSEE_SYSHD_x00197EC8;
typedef struct {
        Sint32_x00197EC8 analyzed;
        Sint32_x00197EC8 ncount;
        Sint32_x00197EC8 tscale;
        Sint32_x00197EC8 nvid;
        Sint32_x00197EC8 naud;
        Sint32_x00197EC8 pad14;
        Sint64_x00197EC8 scr_base;
        Sint64_x00197EC8 pts_min;
        Sint32_x00197EC8 stmid_vid;
        Sint32_x00197EC8 stmid_aud;
        SFSEE_SYSHD_x00197EC8 syshd;
} SFSEE_SHDR_x00197EC8;
typedef struct {
        Sint32_x00197EC8 analyzed;
        Sint32_x00197EC8 ncount;
        Sint32_x00197EC8 tscale;
        SFHDS_FHD_x00197EC8 fhd;
        SFSEE_SHDR_x00197EC8 shdr;
        Uint8_x00197EC8 pada38[0xAD0 - 0xA38];
        Sint32_x00197EC8 a1hdr;
        Sint32_x00197EC8 a1ncount;
        Sint32_x00197EC8 a1tscale;
        Uint8_x00197EC8 padadc[0xD0C - 0xADC];
        Sint32_x00197EC8 a2hdr;
        Sint32_x00197EC8 a2ncount;
        Sint32_x00197EC8 a2tscale;
        Uint8_x00197EC8 padd18[0xDA8 - 0xD18];
        Sint32_x00197EC8 rate;
        Sint32_x00197EC8 fsize_est;
        Sint32_x00197EC8 tot_est;
        Sint32_x00197EC8 tunit_est;
        Sint32_x00197EC8 av_a;
        Sint32_x00197EC8 av_b;
        Sint32_x00197EC8 paddc0;
        Sint32_x00197EC8 fsize;
        Sint32_x00197EC8 tottime;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 byterate;
        Sint32_x00197EC8 seekpos;
} SFSEE_WORK_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Sint32_x00197EC8 pos;
        Sint32_x00197EC8 x08;
} SFSEE_REQ_x00197EC8;
typedef struct {
        Sint32_x00197EC8 bsize;
        Sint32_x00197EC8 xsize;
        void *buf;
        Sint32_x00197EC8 maxnch;
        Sint32_x00197EC8 x10;
        Sint32_x00197EC8 worksize;
        void *work;
} SFADXT_PARA_x00197EC8;
typedef struct {
        void *adxt;
        SJ_x00197EC8 sj;
        SFADXT_PARA_x00197EC8 para;
        Sint32_x00197EC8 tcount;
        Sint32_x00197EC8 tunit;
        Sint32_x00197EC8 pause;
        Sint32_x00197EC8 discard;
        Sint32_x00197EC8 seekflg;
        Sint32_x00197EC8 smplofst;
        void (*func)(SFD_x00197EC8 sfd, Uint8_x00197EC8 *data, Sint32_x00197EC8 len, Sint32_x00197EC8 *nbyte);
        Sint32_x00197EC8 x40;
        Sint32_x00197EC8 svrfreq;
        Sint32_x00197EC8 totbyte;
        Sint32_x00197EC8 x4c;
} SFADXT_WORK_x00197EC8;
typedef struct {
        SFSEE_WORK_x00197EC8 *wk;
        SFSEE_REQ_x00197EC8 req;
} SFSEE_HN_x00197EC8;
typedef struct {
        Sint32_x00197EC8 x00;
        Uint32_x00197EC8 adr;
        Sint32_x00197EC8 size[7];
        Sint32_x00197EC8 x24;
        Sint32_x00197EC8 unit;
        Sint32_x00197EC8 x2c;
        Sint32_x00197EC8 x30;
        Sint32_x00197EC8 x34;
        Sint32_x00197EC8 x38;
        void *hnwork;
        Sint32_x00197EC8 hnwksiz;
} SFD_CREPRM_x00197EC8;
typedef struct {
        void *x00;
        Sint32_x00197EC8 x04;
        Sint32_x00197EC8 x08;
} SFPLY_PTSM_x00197EC8;
typedef struct {
        Sint64_x00197EC8 sum;
        Sint64_x00197EC8 min;
        Sint64_x00197EC8 max;
        Sint32_x00197EC8 cnt;
} SFTMR_TSUM_x00197EC8;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00197EC8 nvid;
        Sint32_x00197EC8 naud;
        Sint32_x00197EC8 x0c;
        Sint64_x00197EC8 pts_min;
        Sint64_x00197EC8 pts_min2;
        Sint32_x00197EC8 concat_cnt;
        Sint32_x00197EC8 last_vid;
        Sint32_x00197EC8 last_aud;
        Sint32_x00197EC8 first_vid;
        Sint32_x00197EC8 first_aud;
        Sint32_x00197EC8 cur_vid;
        Sint32_x00197EC8 cur_aud;
        Sint32_x00197EC8 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00197EC8 stmid);
        void *outobj;
        Sint32_x00197EC8 skip;
        Sint32_x00197EC8 x15c;
        Sint32_x00197EC8 x160;
        Sint32_x00197EC8 x164;
} SFMPS_WORK_x00197EC8;
typedef struct SFD_OBJ_x00197EC8 {
        SFD_CREPRM_x00197EC8 prm;
        Sint32_x00197EC8 chg_flg;
        Sint32_x00197EC8 stat;
        Sint32_x00197EC8 req;
        Sint32_x00197EC8 pause_sw;
        Sint32_x00197EC8 pause_cnt;
        Uint8_x00197EC8 pad58[0x74 - 0x58];
        Sint32_x00197EC8 pad74;
        SFHDS_FHD_x00197EC8 fhd;
        Sint32_x00197EC8 x90c;
        Sint32_x00197EC8 x910;
        Sint32_x00197EC8 x914;
        Sint32_x00197EC8 x918;
        Sint32_x00197EC8 x91c;
        Sint32_x00197EC8 picrate;
        Sint32_x00197EC8 x924;
        Sint32_x00197EC8 x928;
        Sint32_x00197EC8 x92c;
        Sint32_x00197EC8 numelem_aud;
        Sint32_x00197EC8 numelem_vid;
        Sint32_x00197EC8 numelem_prv;
        Sint32_x00197EC8 x93c;
        Sint32_x00197EC8 x940;
        Sint32_x00197EC8 x944;
        Sint32_x00197EC8 x948;
        Sint32_x00197EC8 x94c;
        SFD_PLYINF_x00197EC8 plyinf;
        SFLIB_ERRINF_x00197EC8 err;
        Sint32_x00197EC8 cond[100];
        Sint32_x00197EC8 cond_def[100];
        Uint8_x00197EC8 padD24[4];
        SFCON_x00197EC8 con;
        Uint8_x00197EC8 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00197EC8))];
        Uint8_x00197EC8 tst[0x1C0];
        Uint8_x00197EC8 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00197EC8 ptsm;
        Uint8_x00197EC8 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00197EC8 buf[8];
        SFD_VFRM_x00197EC8 vfrm[16];
        SFD_TR_x00197EC8 tr[9];
        Sint32_x00197EC8 pad218c;
        SFMPS_WORK_x00197EC8 mps;
        Uint8_x00197EC8 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00197EC8 mpv;
        SFADXT_WORK_x00197EC8 adxt;
        Uint8_x00197EC8 pad3410[0x3474 - 0x3410];
        SFAOAP_x00197EC8 aoap;
        SFUO_x00197EC8 uo_tbl;
        Sint32_x00197EC8 pad34c4;
        SFSEE_HN_x00197EC8 see;
        SFTMR_TSUM_x00197EC8 tsum[6];
} SFD_OBJ_x00197EC8;
Sint32_x00197EC8 SFTRN_CallTrtTrif_x00197EC8(SFD_x00197EC8 sfd, Sint32_x00197EC8 a, Sint32_x00197EC8 b, Sint32_x00197EC8 c, Sint32_x00197EC8 d) __asm__("func_0019C0D8");
extern void (*SFPLY_recordgetfrm_x00197EC8)(SFD_x00197EC8 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00197EC8)(SFPLY_PTSM_x00197EC8 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00197EC8)(SFPLY_PTSM_x00197EC8 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00197EC8 func_00197EC8_x00197EC8(SFD_x00197EC8 sfd) __asm__("func_00197EC8");
/* sfply_StopTr: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00197EC8 func_00197EC8_x00197EC8(SFD_x00197EC8 sfd)
{
        Sint32_x00197EC8 ret;
        if (sfd->stat == 4) {
                ret = SFTRN_CallTrtTrif_x00197EC8(sfd, 7, 7, 0, 0);
                if (ret != 0) {
                        return ret;
                }
        }
        sfd->stat = 1;
        sfd->req = 1;
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00197F28);
typedef unsigned char Uint8_x00198128;
typedef signed char Sint8_x00198128;
typedef signed short Sint16_x00198128;
typedef unsigned int Uint32_x00198128;
typedef signed int Sint32_x00198128;
typedef signed long long Sint64_x00198128;
typedef char Char8_x00198128;
typedef struct SJ_OBJ_x00198128 *SJ_x00198128;
typedef struct {
        Uint8_x00198128 *data;
        Sint32_x00198128 len;
} SJCK_x00198128;
typedef struct {
        Uint8_x00198128 data[16];
} SJUUID_x00198128;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00198128 sj);
        const SJUUID_x00198128 *(*GetUuid)(SJ_x00198128 sj);
        void (*Reset)(SJ_x00198128 sj);
        void (*GetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, Sint32_x00198128 nbyte, SJCK_x00198128 *ck);
        void (*UngetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, SJCK_x00198128 *ck);
        void (*PutChunk)(SJ_x00198128 sj, Sint32_x00198128 id, SJCK_x00198128 *ck);
        Sint32_x00198128 (*GetNumData)(SJ_x00198128 sj, Sint32_x00198128 id);
        Sint32_x00198128 (*IsGetChunk)(SJ_x00198128 sj, Sint32_x00198128 id, Sint32_x00198128 nbyte, Sint32_x00198128 *rbyte);
        void (*EntryErrFunc)(SJ_x00198128 sj, void (*func)(void *obj, Char8_x00198128 *msg), void *obj);
} SJ_IF_x00198128;
struct SJ_OBJ_x00198128 {
        SJ_IF_x00198128 *vtbl;
};
typedef struct SFD_OBJ_x00198128 *SFD_x00198128;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00198128 rsv1;
        Sint32_x00198128 rsv2;
} SFUO_CH_x00198128;
typedef struct {
        Sint32_x00198128 nch;
        SFUO_CH_x00198128 ch[3];
} SFUO_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Sint32_x00198128 (*SetOutPan)(SFD_x00198128 sfd, Sint32_x00198128 ch, Sint32_x00198128 pan);
        Sint32_x00198128 (*GetOutPan)(SFD_x00198128 sfd, Sint32_x00198128 ch);
        Sint32_x00198128 (*SetOutVol)(SFD_x00198128 sfd, Sint32_x00198128 vol);
        Sint32_x00198128 (*GetOutVol)(SFD_x00198128 sfd);
        void (*SetSpeed)(SFD_x00198128 sfd, Sint32_x00198128 speed);
        Sint32_x00198128 x18;
} SFAOAP_x00198128;
typedef struct {
        Uint8_x00198128 pad0[0xB8];
        Sint32_x00198128 tottime;
        Sint32_x00198128 tunit;
        Uint8_x00198128 padc0[0x150 - 0xC0];
        Sint64_x00198128 scr_base;
        Sint64_x00198128 scr_ofst;
        Sint32_x00198128 pad160;
        Sint32_x00198128 ctime;
        Sint32_x00198128 ctime_idx;
        Sint32_x00198128 ctime_que[32];
        Sint32_x00198128 tot_last;
        Sint32_x00198128 pad1F0;
        Sint32_x00198128 que_wr;
        Sint32_x00198128 que_rd;
        Sint32_x00198128 tot_que[32];
} SFCON_x00198128;
typedef struct {
        Sint32_x00198128 type;
        Sint32_x00198128 drop;
        Sint32_x00198128 hour;
        Sint32_x00198128 min;
        Sint32_x00198128 sec;
        Sint32_x00198128 frm;
        Sint32_x00198128 frm2;
        Sint16_x00198128 x1c;
        Sint16_x00198128 field;
} SFTIM_TC_x00198128;
typedef struct {
        Sint32_x00198128 valid;
        SFTIM_TC_x00198128 tc;
        Sint32_x00198128 val;
        Sint32_x00198128 unit;
} SFTIM_TTU_x00198128;
typedef struct {
        Sint64_x00198128 pts;
        Uint32_x00198128 pos;
        Uint32_x00198128 len;
} SFPTS_ENT_x00198128;
typedef struct {
        SFPTS_ENT_x00198128 *ent;
        Sint32_x00198128 num;
        Sint32_x00198128 cnt;
        Sint32_x00198128 wr;
        Sint32_x00198128 rd;
} SFPTS_QUE_x00198128;
typedef struct {
        Sint32_x00198128 raw[0x20];
} SFD_VFRM_INF_x00198128;
typedef struct {
        void *frm;
        Sint32_x00198128 x04;
        SFD_VFRM_INF_x00198128 inf;
} SFD_VFRM_x00198128;
typedef struct {
        Sint32_x00198128 kind;
        SJ_x00198128 sj;
        Uint32_x00198128 ofst;
        Sint32_x00198128 size;
        Sint32_x00198128 xsize;
        Sint32_x00198128 x14;
} SFBUF_SUP_x00198128;
typedef struct {
        SFBUF_SUP_x00198128 sup;
        Uint8_x00198128 *dlm_pos;
        Sint32_x00198128 dlm_len;
        Sint32_x00198128 wtot;
        Sint32_x00198128 rtot;
        SFPTS_QUE_x00198128 ptsque;
} SFBUF_RING_x00198128;
typedef struct {
        Sint32_x00198128 mode;
        Sint32_x00198128 used;
        Sint32_x00198128 prepflg;
        Sint32_x00198128 termflg;
        union {
                SFBUF_RING_x00198128 ring;
                struct {
                        Uint32_x00198128 adr;
                        Sint32_x00198128 size;
                        Sint32_x00198128 x18;
                        Sint32_x00198128 x1c;
                        SFD_VFRM_x00198128 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00198128 adr;
                        Sint32_x00198128 size;
                        Sint32_x00198128 rsv[7];
                        Sint32_x00198128 rsv2[3];
                } aout;
                SFUO_CH_x00198128 uoch[3];
        } u;
        Sint32_x00198128 in_tr;
        Sint32_x00198128 out_tr;
        Sint32_x00198128 rsv[8];
} SFBUF_WORK_x00198128;
typedef Sint32_x00198128 (*SFD_TR_FUNC_x00198128)();
typedef struct {
        Sint32_x00198128 prepflg;
        Sint32_x00198128 termflg;
        void *hn;
        SFD_TR_FUNC_x00198128 *trif;
        Sint32_x00198128 bufin;
        Sint32_x00198128 bufout;
        Sint32_x00198128 bufout2;
        Sint32_x00198128 bufout3;
        Sint32_x00198128 x20;
        Uint8_x00198128 pad24[0x44 - 0x24];
} SFD_TR_x00198128;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00198128 cwidth;
        Sint16_x00198128 ywidth;
} SFMPV_PLANE_x00198128;
typedef struct {
        void *buf;
        Sint32_x00198128 len;
} SFMPV_PICUSR_x00198128;
typedef struct {
        Sint32_x00198128 stat;
        Sint32_x00198128 lock;
        void *buf;
        SFTIM_TTU_x00198128 ttu;
        Sint32_x00198128 ftime;
        Sint32_x00198128 tunit;
        Sint32_x00198128 ndct;
        Sint32_x00198128 nbyte;
        Sint32_x00198128 gopno;
        Sint32_x00198128 x4c;
        Sint32_x00198128 x50;
        SFMPV_PICUSR_x00198128 *picusr;
        Sint32_x00198128 pa_width;
        Sint32_x00198128 pa_height;
        Sint32_x00198128 pa_mb_width;
        Sint32_x00198128 pa_mb_height;
        Sint32_x00198128 pa_frame_rate;
        Sint32_x00198128 tmpref;
        Sint32_x00198128 pa_pic_type;
        Sint32_x00198128 pa_tc_drop;
        Sint32_x00198128 pa_tc_hour;
        Sint32_x00198128 pa_tc_min;
        Sint32_x00198128 pa_tc_sec;
        Sint32_x00198128 pa_tc_pic;
        Sint32_x00198128 x88;
        Sint32_x00198128 x8c;
        Sint32_x00198128 pa_x90[3];
        Sint32_x00198128 pa_x9c[3];
        Sint16_x00198128 pa_xa8;
        Sint16_x00198128 pa_xaa;
        Sint8_x00198128 pa_xac;
        Sint8_x00198128 pa_xad;
        Sint8_x00198128 pa_xae;
        Sint8_x00198128 pa_xaf;
        Sint8_x00198128 pa_xb0;
        Sint8_x00198128 pa_xb1;
        Sint8_x00198128 pa_xb2;
        Sint8_x00198128 pa_xb3;
        Sint8_x00198128 pa_xb4;
        Sint8_x00198128 pa_xb5;
        Sint8_x00198128 pa_xb6;
        Sint8_x00198128 pa_xb7;
        Sint8_x00198128 pa_xb8;
        Sint8_x00198128 pa_xb9;
        Sint8_x00198128 pa_xba;
        Sint8_x00198128 pa_xbb;
        Sint8_x00198128 pa_xbc;
        Uint8_x00198128 padbd[0xD8 - 0xBD];
        Sint64_x00198128 pts;
} SFMPV_FRM_x00198128;
typedef struct {
        Sint32_x00198128 cwidth;
        Sint32_x00198128 cheight;
        Sint32_x00198128 width;
        Sint32_x00198128 height;
        Sint32_x00198128 x10;
        Sint32_x00198128 max_width;
        Sint32_x00198128 max_height;
        Sint32_x00198128 nfrm;
        Sint32_x00198128 x20;
} SFMPV_PARA_x00198128;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00198128 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00198128 *curfrm;
        Sint32_x00198128 picstat;
        Sint32_x00198128 dlmmask;
        Sint32_x00198128 termflg;
        Sint32_x00198128 gopstat;
        Sint32_x00198128 nskip;
        Sint32_x00198128 nconcat;
        Uint8_x00198128 picatr[0x80];
        Sint32_x00198128 last_ngop;
        Sint32_x00198128 newgop;
        Sint32_x00198128 vbvsiz;
        Sint32_x00198128 pts_tmpref;
        Sint32_x00198128 pts_ofst;
        Sint32_x00198128 pts_max;
        Sint32_x00198128 pad124;
        SFPTS_ENT_x00198128 ptsent;
        Sint32_x00198128 refidx[2];
        SFMPV_PLANE_x00198128 rfbuf[2];
        SFMPV_FRM_x00198128 *ref[2];
        SFMPV_FRM_x00198128 *pendfrm;
        Sint32_x00198128 skipret;
        Sint32_x00198128 dlmwait;
        Sint32_x00198128 tmpref_adj;
        Sint32_x00198128 nfrm;
        Sint32_x00198128 pad17c;
        SFMPV_FRM_x00198128 frm[16];
        void *picusr_buf;
        Sint32_x00198128 picusr_num;
        Sint32_x00198128 picusr_siz;
        Uint8_x00198128 *picusr_dat;
        Sint32_x00198128 picusr_len;
        SFMPV_PICUSR_x00198128 picusr[16];
        Sint32_x00198128 pad1014;
        Sint64_x00198128 pts;
} SFMPV_WORK_x00198128;
typedef struct {
        Sint32_x00198128 raw[0x2A];
} SFD_PLYINF_x00198128 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x00198128 code);
        void *obj;
        Sint32_x00198128 code;
        Sint32_x00198128 x0c;
        Sint32_x00198128 x10;
} SFLIB_ERRINF_x00198128;
typedef struct {
        Sint32_x00198128 codec;
        Sint32_x00198128 layer;
        Sint32_x00198128 chnum;
        Sint32_x00198128 smphz;
} SFHDS_AUD_x00198128;
typedef struct {
        Sint32_x00198128 codec;
        Sint32_x00198128 bitrate;
        Sint32_x00198128 picw;
        Sint32_x00198128 pich;
        Sint32_x00198128 picrate;
        Sint32_x00198128 ftr_eff;
        Sint32_x00198128 ftr_coltype;
        Sint32_x00198128 ftr_pictype;
        Sint32_x00198128 ftr_fixflg;
        Sint32_x00198128 ftr_shcfixflg;
        Sint32_x00198128 ftr_expand;
        Sint32_x00198128 ftr_gopn;
        Sint32_x00198128 ftr_gopm;
} SFHDS_VID_x00198128;
typedef struct {
        Sint32_x00198128 valid;
        Sint32_x00198128 ver_major;
        Sint32_x00198128 ver_minor;
        Sint32_x00198128 byterate;
        Sint32_x00198128 hdrsiz;
        Sint32_x00198128 packtype;
        Sint32_x00198128 pketsizlen;
        Sint32_x00198128 packsiz;
        Sint32_x00198128 numelem_tot;
        Sint32_x00198128 numelem_aud;
        Sint32_x00198128 numelem_vid;
        Sint32_x00198128 numelem_prv;
        Sint32_x00198128 maxplylen_aud;
        Sint32_x00198128 maxplylen_vid;
        Sint32_x00198128 maxfrmnum;
        Sint32_x00198128 stmid_prv1;
        Sint32_x00198128 stmid_prv2;
        Sint32_x00198128 stmid_aud;
        Sint32_x00198128 stmid_vid;
        SFHDS_AUD_x00198128 aud;
        SFHDS_VID_x00198128 vid;
        Sint32_x00198128 rawsiz;
        Uint8_x00198128 raw[0x800];
} SFHDS_FHD_x00198128;
typedef struct {
        Uint8_x00198128 data[2][0xB0];
        Sint32_x00198128 len[2];
} SFSEE_SYSHD_x00198128;
typedef struct {
        Sint32_x00198128 analyzed;
        Sint32_x00198128 ncount;
        Sint32_x00198128 tscale;
        Sint32_x00198128 nvid;
        Sint32_x00198128 naud;
        Sint32_x00198128 pad14;
        Sint64_x00198128 scr_base;
        Sint64_x00198128 pts_min;
        Sint32_x00198128 stmid_vid;
        Sint32_x00198128 stmid_aud;
        SFSEE_SYSHD_x00198128 syshd;
} SFSEE_SHDR_x00198128;
typedef struct {
        Sint32_x00198128 analyzed;
        Sint32_x00198128 ncount;
        Sint32_x00198128 tscale;
        SFHDS_FHD_x00198128 fhd;
        SFSEE_SHDR_x00198128 shdr;
        Uint8_x00198128 pada38[0xAD0 - 0xA38];
        Sint32_x00198128 a1hdr;
        Sint32_x00198128 a1ncount;
        Sint32_x00198128 a1tscale;
        Uint8_x00198128 padadc[0xD0C - 0xADC];
        Sint32_x00198128 a2hdr;
        Sint32_x00198128 a2ncount;
        Sint32_x00198128 a2tscale;
        Uint8_x00198128 padd18[0xDA8 - 0xD18];
        Sint32_x00198128 rate;
        Sint32_x00198128 fsize_est;
        Sint32_x00198128 tot_est;
        Sint32_x00198128 tunit_est;
        Sint32_x00198128 av_a;
        Sint32_x00198128 av_b;
        Sint32_x00198128 paddc0;
        Sint32_x00198128 fsize;
        Sint32_x00198128 tottime;
        Sint32_x00198128 tunit;
        Sint32_x00198128 byterate;
        Sint32_x00198128 seekpos;
} SFSEE_WORK_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Sint32_x00198128 pos;
        Sint32_x00198128 x08;
} SFSEE_REQ_x00198128;
typedef struct {
        Sint32_x00198128 bsize;
        Sint32_x00198128 xsize;
        void *buf;
        Sint32_x00198128 maxnch;
        Sint32_x00198128 x10;
        Sint32_x00198128 worksize;
        void *work;
} SFADXT_PARA_x00198128;
typedef struct {
        void *adxt;
        SJ_x00198128 sj;
        SFADXT_PARA_x00198128 para;
        Sint32_x00198128 tcount;
        Sint32_x00198128 tunit;
        Sint32_x00198128 pause;
        Sint32_x00198128 discard;
        Sint32_x00198128 seekflg;
        Sint32_x00198128 smplofst;
        void (*func)(SFD_x00198128 sfd, Uint8_x00198128 *data, Sint32_x00198128 len, Sint32_x00198128 *nbyte);
        Sint32_x00198128 x40;
        Sint32_x00198128 svrfreq;
        Sint32_x00198128 totbyte;
        Sint32_x00198128 x4c;
} SFADXT_WORK_x00198128;
typedef struct {
        SFSEE_WORK_x00198128 *wk;
        SFSEE_REQ_x00198128 req;
} SFSEE_HN_x00198128;
typedef struct {
        Sint32_x00198128 x00;
        Uint32_x00198128 adr;
        Sint32_x00198128 size[7];
        Sint32_x00198128 x24;
        Sint32_x00198128 unit;
        Sint32_x00198128 x2c;
        Sint32_x00198128 x30;
        Sint32_x00198128 x34;
        Sint32_x00198128 x38;
        void *hnwork;
        Sint32_x00198128 hnwksiz;
} SFD_CREPRM_x00198128;
typedef struct {
        void *x00;
        Sint32_x00198128 x04;
        Sint32_x00198128 x08;
} SFPLY_PTSM_x00198128;
typedef struct {
        Sint64_x00198128 sum;
        Sint64_x00198128 min;
        Sint64_x00198128 max;
        Sint32_x00198128 cnt;
} SFTMR_TSUM_x00198128;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00198128 nvid;
        Sint32_x00198128 naud;
        Sint32_x00198128 x0c;
        Sint64_x00198128 pts_min;
        Sint64_x00198128 pts_min2;
        Sint32_x00198128 concat_cnt;
        Sint32_x00198128 last_vid;
        Sint32_x00198128 last_aud;
        Sint32_x00198128 first_vid;
        Sint32_x00198128 first_aud;
        Sint32_x00198128 cur_vid;
        Sint32_x00198128 cur_aud;
        Sint32_x00198128 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00198128 stmid);
        void *outobj;
        Sint32_x00198128 skip;
        Sint32_x00198128 x15c;
        Sint32_x00198128 x160;
        Sint32_x00198128 x164;
} SFMPS_WORK_x00198128;
typedef struct SFD_OBJ_x00198128 {
        SFD_CREPRM_x00198128 prm;
        Sint32_x00198128 chg_flg;
        Sint32_x00198128 stat;
        Sint32_x00198128 req;
        Sint32_x00198128 pause_sw;
        Sint32_x00198128 pause_cnt;
        Uint8_x00198128 pad58[0x74 - 0x58];
        Sint32_x00198128 pad74;
        SFHDS_FHD_x00198128 fhd;
        Sint32_x00198128 x90c;
        Sint32_x00198128 x910;
        Sint32_x00198128 x914;
        Sint32_x00198128 x918;
        Sint32_x00198128 x91c;
        Sint32_x00198128 picrate;
        Sint32_x00198128 x924;
        Sint32_x00198128 x928;
        Sint32_x00198128 x92c;
        Sint32_x00198128 numelem_aud;
        Sint32_x00198128 numelem_vid;
        Sint32_x00198128 numelem_prv;
        Sint32_x00198128 x93c;
        Sint32_x00198128 x940;
        Sint32_x00198128 x944;
        Sint32_x00198128 x948;
        Sint32_x00198128 x94c;
        SFD_PLYINF_x00198128 plyinf;
        SFLIB_ERRINF_x00198128 err;
        Sint32_x00198128 cond[100];
        Sint32_x00198128 cond_def[100];
        Uint8_x00198128 padD24[4];
        SFCON_x00198128 con;
        Uint8_x00198128 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00198128))];
        Uint8_x00198128 tst[0x1C0];
        Uint8_x00198128 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00198128 ptsm;
        Uint8_x00198128 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00198128 buf[8];
        SFD_VFRM_x00198128 vfrm[16];
        SFD_TR_x00198128 tr[9];
        Sint32_x00198128 pad218c;
        SFMPS_WORK_x00198128 mps;
        Uint8_x00198128 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00198128 mpv;
        SFADXT_WORK_x00198128 adxt;
        Uint8_x00198128 pad3410[0x3474 - 0x3410];
        SFAOAP_x00198128 aoap;
        SFUO_x00198128 uo_tbl;
        Sint32_x00198128 pad34c4;
        SFSEE_HN_x00198128 see;
        SFTMR_TSUM_x00198128 tsum[6];
} SFD_OBJ_x00198128;
Sint32_x00198128 SFLIB_SetErr_x00198128(SFD_x00198128 sfd, Sint32_x00198128 code) __asm__("func_0018D650");
Sint32_x00198128 SFLIB_CheckHn_x00198128(SFD_x00198128 sfd) __asm__("func_0018D870");
Sint32_x00198128 SFTRN_CallTrtTrif_x00198128(SFD_x00198128 sfd, Sint32_x00198128 a, Sint32_x00198128 b, Sint32_x00198128 c, Sint32_x00198128 d) __asm__("func_0019C0D8");
typedef struct {
        SJCK_x00198128 ck1;
        SJCK_x00198128 ck2;
        Sint32_x00198128 rsv[3];
} SFBUF_RINF_x00198128;
extern void (*SFPLY_recordgetfrm_x00198128)(SFD_x00198128 sfd, void *frm) __asm__("SFPLY_recordgetfrm");
extern void (*SFPLY_SetPtsInfo_x00198128)(SFPLY_PTSM_x00198128 *ptsm) __asm__("SFPLY_SetPtsInfo");
extern void (*SFPLY_ResetPtsm_x00198128)(SFPLY_PTSM_x00198128 *ptsm) __asm__("SFPLY_ResetPtsm");
Sint32_x00198128 func_00198128_x00198128(SFD_x00198128 sfd, SFBUF_RINF_x00198128 *inf) __asm__("func_00198128");
/* SFD_GetSupplyInf: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_ply.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00198128 func_00198128_x00198128(SFD_x00198128 sfd, SFBUF_RINF_x00198128 *inf)
{
        if (SFLIB_CheckHn_x00198128(sfd) != 0) {
                return SFLIB_SetErr_x00198128(0, 0xFF000134);
        }
        return SFTRN_CallTrtTrif_x00198128(sfd, 0, 9, (Sint32_x00198128)inf, 0);
}
extern int Obj34D8_SetGlobalEE0B8_IfField48_x00198198(void *hn) __asm__("func_0018D870");
extern void func_0034DD70_x00198198(void *a0, unsigned int err) __asm__("func_0018D650");
extern void func_0035C2D0_x00198198(void *hn, int a1, int a2, void *a3, int a4) __asm__("func_0019C0D8");
void func_00198198_x00198198(void *hn, void *p, int n) __asm__("func_00198198");
/* SFD_AddWritePtr: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0034d1b8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00198198_x00198198(void *hn, void *p, int n)
{
    if (Obj34D8_SetGlobalEE0B8_IfField48_x00198198(hn) != 0) {
        func_0034DD70_x00198198(0, 0xFF000135);
        return;
    }
    func_0035C2D0_x00198198(hn, 0, 0xA, p, n);
}
s32 func_0018B750_x00198218(void *, s32, s32) __asm__("func_0018B750");
s32 func_0018B770_x00198218(void *, s32) __asm__("func_0018B770");
s32 func_0018D650_x00198218(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198218() __asm__("func_0018D870");
s32 func_00198218_x00198218(u8 *arg0) __asm__("func_00198218");
s32 func_00198218_x00198218(u8 *arg0)
{
  s32 temp_s0;
  if (func_0018D870_x00198218() != 0)
  {
    return func_0018D650_x00198218(0, 0xFF000135);
  }
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1BF4));
  if (func_0018B770_x00198218(arg0, temp_s0) != 1)
  {
    func_0018B750_x00198218(arg0, temp_s0, (unsigned short) 1);
    *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
  }
  return 0;
 do { } while (0);
}
s32 func_0018B770_x001982A8(void *a0, s32 a1) __asm__("func_0018B770");
s32 func_001982A8_x001982A8(void *a0) __asm__("func_001982A8");
s32 func_001982A8_x001982A8(void *a0) {
    return func_0018B770_x001982A8(a0, *(s32 *)((u8 *)a0 + 0x1BF4)) != 0;
}
extern void (*D_00426B20_x001982C8)(s32, s32) __asm__("D_00426B20");
s32 func_0019C0D8_x001982C8(s32, s32, s32, s32 *, s32) __asm__("func_0019C0D8");
s32 func_001982C8_x001982C8(s32 a0, s32 *a1) __asm__("func_001982C8");
s32 func_001982C8_x001982C8(s32 a0, s32 *a1)
{
    s32 r;
    s32 x;

    *a1 = 0;
    if (func_0018D870(a0) != 0) {
        return func_0018D650(0, 0xFF000136);
    }
    r = func_0019C0D8_x001982C8(a0, 6, 0xB, a1, 0);
    x = *a1;
    if (x != 0) {
        *(s32 *)(a0 + 0x964) = 1;
    }
    if (D_00426B20_x001982C8 != 0) {
        D_00426B20_x001982C8(a0, x);
    }
    return r;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p16_0660b2_0_x __asm__("b3a0660b2_0");
s32 func_0018D870_x00198380(s32, s32) __asm__("func_0018D870");
s32 func_0018D650_x00198380(s32, s32, s32, s32, s32) __asm__("func_0018D650");
s32 func_0019C0D8_x00198380(s32, s32) __asm__("func_0019C0D8");
s32 func_00198380_x00198380(s32 a0, s32 a1) __asm__("func_00198380");
s32 func_00198380_x00198380(s32 a0, s32 a1)
{
    if (func_0018D870_x00198380(a0, a1) != 0) {
        return func_0018D650_x00198380(0, 0xFF000137, 0xC, a1, 0);
    }
    *(s32 *)(a0 + 0x964) = 0;
    return func_0019C0D8_x00198380(a0, 6);
}
void func_001983F0(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000139);
        return;
    }
    func_0018A7A0(arg0, arg1);
}
void func_00198450_x00198450(u8 *arg0) __asm__("func_00198450");
void func_00198450_x00198450(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
s32 func_0018D650_x00198468(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198468() __asm__("func_0018D870");
s32 func_001984F0_x00198468(s32, s32, s32) __asm__("func_001984F0");
s32 func_00198468_x00198468(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00198468");
s32 func_00198468_x00198468(s32 arg0, s32 arg1, s32 arg2)
{
  unsigned int new_var;
  if (arg1 != 0)
  {
    new_var = arg2;
    if (arg2 > 0)
    {
      if (func_0018D870_x00198468(arg0) != 0)
      {
        return func_0018D650_x00198468(0, 0xFF000165, new_var);
      }
      func_001984F0_x00198468(arg0 + 0x132C, arg1, arg2);
 do { } while (0);
      goto block_6;
    }
    return 0;
  }
  block_6:
  return new_var = 0;

}
s32 memset_x001984F0(s32, s32, s32) __asm__("memset");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_001984F0");
void func_001984F0_x001984F0(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_s0;
  s32 temp_s2;
  s32 new_var;
  temp_s0 = (((u32) (arg1 + 3)) >> 2) * 4;
  temp_s2 = arg2 - 4;
  memset_x001984F0(temp_s0, 0, temp_s2);
  *((s32 *) (((u8 *) arg0) + 0)) = temp_s0;
  new_var = (s32) (temp_s2 / 12);
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = new_var;
}
s32 func_0018D650_x00198568(u8 *, s32) __asm__("func_0018D650");
s32 func_001985F8_x00198568(s32 *, s32 *, s32 *) __asm__("func_001985F8");
s32 func_00198568_x00198568(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_00198568");
s32 func_00198568_x00198568(u8 *arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
    s32 *p;
    *arg3 = 0;
    if (*arg2 < 0) {
        return 0;
    }
    p = (s32 *)(arg0 + arg1 * 0x74 + 0x12B8);
    if (*p == 0) {
        return 0;
    }
    if (func_001985F8_x00198568(p, arg2, arg3) == -1) {
        return func_0018D650_x00198568(arg0, 0xFF000421);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001985F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001986A0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198718);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001987C0);
s32 func_00198890_x00198890(u8 *a0, s32 a1) __asm__("func_00198890");
s32 func_00198890_x00198890(u8 *a0, s32 a1) {
    s32 *e;

    e = (s32 *)(a0 + 0x12B8 + a1 * 116);
    if (e[0] == 0) {
        return 0;
    }
    return e[2] >= e[1];
}
struct SfdRecSlot_x001988D0;
struct SfdRec_x001988D0;
typedef struct SfdTimeCode_x001988D0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001988D0;
typedef struct SfdTimeRec_x001988D0 {
    int valid;
    SfdTimeCode_x001988D0 tc;
    int time;
    int unit;
} SfdTimeRec_x001988D0;
typedef struct SfdHdrAudio_x001988D0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001988D0;
typedef struct SfdHdrMux_x001988D0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001988D0;
typedef struct SfdHdrVideo_x001988D0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001988D0;
typedef struct SfdHdrInf_x001988D0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001988D0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001988D0 audio;
    SfdHdrVideo_x001988D0 video;
    int size;
    char data[2048];
} SfdHdrInf_x001988D0;
typedef struct SfdUserData_x001988D0 {
    char data[512];
    int size;
} SfdUserData_x001988D0;
typedef struct SfdRecVideo_x001988D0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001988D0 stamp;
    SfdUserData_x001988D0 user;
} SfdRecVideo_x001988D0;
typedef struct SfdRec_x001988D0 SfdRec_x001988D0;
typedef struct SfdRecSub_x001988D0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001988D0;
typedef struct SfdRecSlot_x001988D0 {
    SfdRec_x001988D0 *rec;
    SfdRecSub_x001988D0 sub;
} SfdRecSlot_x001988D0;
typedef struct SfdSysHd_x001988D0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x001988D0;
typedef struct SfdRecSys_x001988D0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001988D0 syshd;
} SfdRecSys_x001988D0;
typedef struct SfdRecAudio_x001988D0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001988D0;
struct SfdRec_x001988D0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001988D0 hdrInf;
    SfdRecSys_x001988D0 sys;
    char pad2616[152];
    SfdRecVideo_x001988D0 video;
    SfdRecAudio_x001988D0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
void func_001988D0_x001988D0(SfdRecSlot_x001988D0 *slot) __asm__("func_001988D0");
/* SFSEE_InitHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdrec.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001988D0_x001988D0(SfdRecSlot_x001988D0 *slot)
{
    SfdRecSub_x001988D0 *sub = &slot->sub;
    sub->f0 = 0;
    sub->time = -3;
    sub->unit = 1;
    slot->rec = 0;
}
s32 func_00198938_x001988F0(s32) __asm__("func_00198938");
void func_001988F0_x001988F0(s32 arg0, s32 arg1) __asm__("func_001988F0");
void func_001988F0_x001988F0(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg1 > 0)
  {
    var_s1 = arg0;
    var_s0 = arg1;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0xDC8;
      var_s0 -= 1;
      func_00198938_x001988F0(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
s32 func_00179018_x00198938() __asm__("func_00179018");
s32 func_001989A8_x00198938() __asm__("func_001989A8");
void func_00198938_x00198938(u8 *arg0) __asm__("func_00198938");
void func_00198938_x00198938(u8 *arg0)
{
    func_00179018_x00198938(arg0, 0, 0x372);
    func_001989A8_x00198938(arg0);
    do
    {
        *((s32 *) (((u8 *) arg0) + 0xD98)) = 0;
        *((s32 *) (((u8 *) arg0) + 0xDC4)) = -1;
        *((s32 *) (((u8 *) arg0) + 0xDB8)) = -8;
        *((s32 *) (((u8 *) arg0) + 0xDBC)) = 1;
        *((s32 *) (((u8 *) arg0) + 0xD9C)) = 0;
    }
    while (0);
    do
    {
        *((s32 *) (((u8 *) arg0) + 0xDA0)) = -8;
        *((s32 *) (((u8 *) arg0) + 0xDA4)) = 1;
        *((s32 *) (((u8 *) arg0) + 0xDA8)) = -1;
    }
    while (0);
    do
    {
        *((s32 *) (((u8 *) arg0) + 0xDAC)) = -1;
        *((s32 *) (((u8 *) arg0) + 0xDB0)) = 0;
    }
    while (0);
    *((s32 *) (((u8 *) arg0) + 0xDB4)) = 0;
    *((s32 *) (((u8 *) arg0) + 0xDC0)) = 0;
}
void func_0018C950_x001989A8(u8 *) __asm__("func_0018C950");
void func_0019A010_x001989A8(u8 *, s32) __asm__("func_0019A010");
void func_001989A8_x001989A8(u8 *a0) __asm__("func_001989A8");
void func_001989A8_x001989A8(u8 *a0)
{
    s32 *p1 = (s32 *)(a0 + 0x8A0);
    s32 *p2 = (s32 *)(a0 + 0xD00);
    s32 *p3 = (s32 *)(a0 + 0xAC4);
    ((s32 *)a0)[0] = 0;
    ((s32 *)a0)[1] = 0;
    ((s32 *)a0)[2] = 0;
    func_0018C950_x001989A8(a0 + 0xC);
    p1[0] = 0;
    p1[1] = 0;
    p1[2] = 0;
    p1[3] = 0;
    p1[4] = 0;
    p1[5] = 0;
    p1[6] = 0;
    p1[7] = 0;
    p1[8] = 0;
    p3[0] = 0;
    p3[1] = 0;
    p3[2] = 0;
    func_0019A010_x001989A8(a0 + 0xAD0, 0x7FFFFFFF);
    p2[0] = 0;
    p2[1] = 0;
    p2[3] = 0;
    p2[4] = 0;
    p2[5] = 0;
    p2[2] = 1;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_001989A8_0_xxxx;
s32 func_0018D650_x00198A60(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198A60() __asm__("func_0018D870");
char func_00198A60_x00198A60(u8 *arg0, s32 arg1) __asm__("func_00198A60");
char func_00198A60_x00198A60(u8 *arg0, s32 arg1) {
  if (func_0018D870_x00198A60(arg0) != 0)
  {
    func_0018D650_x00198A60(0, 0xFF000151);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x31E8)) = arg1;
}
s32 func_0018D650_x00198AB8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198AB8() __asm__("func_0018D870");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1) __asm__("func_00198AB8");
long func_00198AB8_x00198AB8(u8 *arg0, s32 arg1)
{
  if (func_0018D870_x00198AB8() != 0)
  {
    func_0018D650_x00198AB8(0, 0xFF000152);
    return;
  }
  *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x31E8)))) + 0xDB0)) = arg1;
}
s32 func_0018D650_x00198B18(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00198B18() __asm__("func_0018D870");
s32 func_00196548_x00198B18(s32) __asm__("func_00196548");
s32 func_00199818_x00198B18(s32, s32, s32) __asm__("func_00199818");
void func_00198B18_x00198B18(s32 arg0) __asm__("func_00198B18");
void func_00198B18_x00198B18(s32 arg0) {
    if (func_0018D870_x00198B18() != 0) {
        func_0018D650_x00198B18(0, 0xFF000153, 1);
        return;
    }
    func_00199818_x00198B18(arg0, 0x2F, 1);
    func_00196548_x00198B18(arg0);
}
s32 func_00198B78(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000154);
    }
    func_00198BE8(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) __asm__("func_00198BE8");
void func_00198BE8_x00198BE8(s32 *arg0, s32 *arg1) {
    s32 temp_v0;

    temp_v0 = *arg0;
    *arg1 = ((temp_v0 ^ 1) != 0) ? 0 : temp_v0;
}
void func_00198C00(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_v1 != NULL) {
        if (*(s32 *)((u8 *)temp_v1 + 0xDA8) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDA8) = arg1;
        }
        if (*(s32 *)((u8 *)temp_v1 + 0xDAC) < 0) {
            *(s32 *)((u8 *)temp_v1 + 0xDAC) = arg2;
        }
    }
}
s32 func_00198C78_x00198C30() __asm__("func_00198C78");
s32 func_001994D8_x00198C30(void *) __asm__("func_001994D8");
void func_00198C30_x00198C30(u8 *arg0) __asm__("func_00198C30");
void func_00198C30_x00198C30(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x31E8) == 0) {
        return;
    }
    func_00198C78_x00198C30();
    func_001994D8_x00198C30(arg0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198C78);
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198DE0(int, int) __asm__("func_001999E0");
int func_00198DE0_x00198DE0(int a0, int a1, int a2) __asm__("func_00198DE0");
/* sfsee_IsAudioAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198DE0_x00198DE0(int a0, int a1, int a2) {
    int s0;
    int s1;
    int s2;
    int r;
    int v0;
    s2 = a1;
    s1 = a2;
    r = Obj35C0_IsIndexedSet_1F3C_C380_x00198DE0(a0, 3);
    s0 = a0;
    if (r) {
        r = GetArrayElemA0C_35A1C8_x00198DE0(s0, 6);
        if (r == 1) {
            *(int*)s1 = r;
            v0 = *(int*)s2;
            return ((unsigned int)v0 < 1u);
        }
    }
    *(int*)s1 = 0;
    return 0;
}
extern int Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(int, int) __asm__("func_0019C188");
extern int GetArrayElemA0C_35A1C8_x00198E60(int, int) __asm__("func_001999E0");
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) __asm__("func_00198E60");
/* sfsee_IsVideoAnalyzing: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00198E60_x00198E60(void *a0, int *a1, int *a2) {
    int *s2;
    void *s0;
    int *s1;
    int v1;
    int v0;
    s2 = a1;
    s0 = a0;
    s1 = a2;
    if (!Obj35C0_IsIndexedSet_1F3C_C380_x00198E60(s0, 2)) {
        goto fail;
    }
    v1 = GetArrayElemA0C_35A1C8_x00198E60(s0, 5);
    if (v1 != 1) {
        goto fail;
    }
    *s1 = v1;
    v0 = !(*s2);
    goto done;
fail:
    *s1 = 0;
    v0 = 0;
done:
    return v0;
}
s32 func_0019C188_x00198EE0(s32 a0, s32 a1) __asm__("func_0019C188");
s32 func_00198EE0_x00198EE0(s32 a0) __asm__("func_00198EE0");
s32 func_00198EE0_x00198EE0(s32 a0) {
    return func_0019C188_x00198EE0(a0, 1) != 0;
}
s32 func_00198F00(u8 *arg0, s32 *arg1) {
    *arg1 = 0;
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000155);
    }
    func_00198F70(*(s32 *)((u8 *)arg0 + 0x31E8), arg1);
    return 0;
}
void func_00198BE8_x00198F70(s32, s32 *) __asm__("func_00198BE8");
void func_00198F70_x00198F70(s32 a0, s32 *out) __asm__("func_00198F70");
void func_00198F70_x00198F70(s32 a0, s32 *out)
{
    s32 x;

    *out = 0;
    if (a0 == 0) {
        return;
    }
    func_00198BE8_x00198F70(a0, &x);
    if (x == 0) {
        return;
    }
    if (*(s32 *)(a0 + 0xDB0) != 0 || *(s32 *)(a0 + 0xD98) > 0) {
        *out = 1;
    }
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p16_0663dc_0_x __asm__("b3a0663dc_0");
extern int b3p32_0663dc_0_x __asm__("b3cse_asmpad_0663dc_0_xx");
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00198FE0);
s32 func_0017EE78_x00199080() __asm__("func_0017EE78");
s32 func_001990D0_x00199080() __asm__("func_001990D0");
void func_00199080_x00199080(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_00199080");
void func_00199080_x00199080(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xDB0);
    if (temp_v0 != 0) {
        func_001990D0_x00199080(temp_v0, arg1, arg2, arg3);
        return;
    }
    *arg3 = func_0017EE78_x00199080(*(s32 *)((u8 *)arg0 + 0xD98));
}
void func_001990D0_x001990D0(s32 a0, s32 a1, s32 a2, s32 *a3) __asm__("func_001990D0");
void func_001990D0_x001990D0(s32 a0, s32 a1, s32 a2, s32 *a3) {
    *a3 = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_001990D8);
void func_00199208_x00199180(s32, s32, s32 *, s32 *) __asm__("func_00199208");
s32 func_0017EE78_x00199180(s32, s32, s32) __asm__("func_0017EE78");
void func_00199180_x00199180(s32 a0, s32 a1, s32 *a2, s32 *a3) __asm__("func_00199180");
void func_00199180_x00199180(s32 a0, s32 a1, s32 *a2, s32 *a3)
{
    s32 n;

    if (*(s32 *)(a0 + 0xDB0) != 0) {
        func_00199208_x00199180(*(s32 *)(a0 + 0xDB0), a1, a2, a3);
        return;
    }
    n = *(s32 *)(a0 + 0xD98);
    if (n <= 0) {
        *a2 = 0;
    } else {
        *a2 = func_0017EE78_x00199180(a1, 1000, n);
    }
    *a3 = 1000;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_00199180_0_xxxx;
void func_00199208_x00199208(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_00199208");
void func_00199208_x00199208(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    *arg2 = 0;
    *arg3 = 0x3E8;
}
typedef struct { s32 w[3]; } SfdW3_x00199218;
s32 func_0018D870_x00199218(u8 *) __asm__("func_0018D870");
s32 func_0018D650_x00199218(u8 *, s32) __asm__("func_0018D650");
s32 func_00197E40_x00199218(u8 *) __asm__("func_00197E40");
void func_00199818_x00199218(u8 *, s32, s32) __asm__("func_00199818");
void func_0019C040_x00199218(u8 *, s32) __asm__("func_0019C040");
void func_00199218_x00199218(u8 *a0, SfdW3_x00199218 *src) __asm__("func_00199218");
void func_00199218_x00199218(u8 *a0, SfdW3_x00199218 *src)
{
    u8 *o;

    if (func_0018D870_x00199218(a0) != 0) {
        func_0018D650_x00199218(0, 0xFF000158);
        return;
    }
    o = *(u8 **)(a0 + 0x31E8);
    if (o == 0) {
        return;
    }
    if (func_00197E40_x00199218(a0) != 0) {
        return;
    }
    func_00199818_x00199218(a0, 0x2F, 0);
    if (*(s32 *)(o + 0xDA8) == 0) {
        func_00199818_x00199218(a0, 5, 0);
    }
    if (*(s32 *)(o + 0xDAC) == 0) {
        func_00199818_x00199218(a0, 6, 0);
    }
    *(SfdW3_x00199218 *)(a0 + 0x31EC) = *src;
    func_0019C040_x00199218(a0, 0xD);
}
s32 func_0018D870_x00199310() __asm__("func_0018D870");
s32 func_0018D650_x00199310() __asm__("func_0018D650");
s32 func_00199610_x00199310(void *) __asm__("func_00199610");
s32 func_00199310_x00199310(u8 *arg0, s32 arg1) __asm__("func_00199310");
s32 func_00199310_x00199310(u8 *arg0, s32 arg1)
{
  s32 r;
  u8 *p;
  r = func_0018D870_x00199310(arg0, arg1);
  if (r != 0)
  {
    return func_0018D650_x00199310(0, 0xFF000159);
  }
  p = *((u8 **) (arg0 + 0x31E8));
  if (p == 0)
  {
    return r;
  }
  *((s32 *) (p + 0xDB4)) = arg1;
  func_00199610_x00199310(arg0);
  r = 0;
  return r;
}
void func_00199610_x00199380(s32) __asm__("func_00199610");
s32 func_00199380_x00199380(s32 a0, s32 a1, s32 a2) __asm__("func_00199380");
s32 func_00199380_x00199380(s32 a0, s32 a1, s32 a2)
{
    s32 p;

    if (func_0018D870(a0) != 0) {
        return func_0018D650(0, 0xFF00015A);
    }
    p = *(s32 *)(a0 + 0x31E8);
    if (p == 0) {
        return 0;
    }
    *(s32 *)(p + 0xDB8) = a1;
    *(s32 *)(p + 0xDBC) = a2;
    func_00199610_x00199380(a0);
    return 0;
}
s32 func_0018D870_x00199408() __asm__("func_0018D870");
s32 func_0018D650_x00199408() __asm__("func_0018D650");
s32 func_00199610_x00199408(void *) __asm__("func_00199610");
s32 func_00199408_x00199408(u8 *arg0, s32 arg1) __asm__("func_00199408");
s32 func_00199408_x00199408(u8 *arg0, s32 arg1)
{
  s32 r;
  u8 *p;
  r = func_0018D870_x00199408(arg0, arg1);
  if (r != 0)
  {
    return func_0018D650_x00199408(0, 0xFF00015B);
  }
  p = *((u8 **) (arg0 + 0x31E8));
  if (p == 0)
  {
    return r;
  }
  *((s32 *) (p + 0xDC0)) = arg1;
  func_00199610_x00199408(arg0);
  r = 0;
  return r;
}
void func_00199478(u8 *arg0, s32 arg1) {
    u8 *temp_a0;

    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF00015C);
        return;
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (temp_a0 != NULL) {
        *(s32 *)((u8 *)temp_a0 + 0xDC4) = arg1;
    }
}
s32 func_0018B840_x001994D8(u8 *) __asm__("func_0018B840");
s32 func_001995C8_x001994D8(u8 *) __asm__("func_001995C8");
void func_00199610_x001994D8(u8 *) __asm__("func_00199610");
void func_001994D8_x001994D8(u8 *a0) __asm__("func_001994D8");
void func_001994D8_x001994D8(u8 *a0)
{
    s32 *q = (s32 *)(a0 + 0xD54);
    s32 *r1 = (s32 *)(a0 + 0x31EC);
    u8 *o = *(u8 **)(a0 + 0x31E8);
    s32 flag;
    s32 n;
    s32 v;

    if (func_0018B840_x001994D8(a0) != 0) {
        return;
    }
    flag = 0;
    if (*(s32 *)(o + 0xD9C) <= 0) {
        if (r1[1] == -3) {
            n = 0;
        } else {
            n = *(s32 *)(o + 0xDC4);
        }
        if (n >= 0) {
            v = func_001995C8_x001994D8(a0);
            if (v != -1) {
                flag = 1;
                *(s32 *)(o + 0xD9C) = n + v;
            }
        }
    }
    if (*(s32 *)(o + 0xDA0) <= 0 && q[9] > 0) {
        *(s32 *)(o + 0xDA0) = q[9];
        flag = 1;
        *(s32 *)(o + 0xDA4) = q[10];
    }
    if (flag == 0) {
        return;
    }
    func_00199610_x001994D8(a0);
}
s32 func_001995C8_x001995C8(s32 arg0) __asm__("func_001995C8");
s32 func_001995C8_x001995C8(s32 arg0)
{
  int new_var3;
  s32 temp_v0;
  int new_var2;
  u8 *new_var;
  u8 *temp_a1;
  temp_a1 = arg0 + 0x1BE0;
  new_var = (u8 *) (temp_a1 + ((*((s32 *) (((u8 *) (arg0 + (new_var2 = (*((s32 *) (((u8 *) temp_a1) + 0x14))) * 0x74))) + 0x12D0))) * 0x44));
  temp_v0 = *((s32 *) (new_var + 0x20));
  new_var3 = 1;
  return (temp_v0 < 0) ? (-new_var3) : (temp_v0);
}
s32 func_0017EE78_x00199610(s32, s32, s32) __asm__("func_0017EE78");
unsigned long long func_00199610_x00199610(u8 *arg0) __asm__("func_00199610");
unsigned long long func_00199610_x00199610(u8 *arg0)
{
  s32 var_a0;
  s32 var_a1;
  s32 var_a2;
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x31E8));
  var_v0 = *((s32 *) (((u8 *) temp_s0) + 0xDC0));
  if (var_v0 <= 0)
  {
    var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xDB4));
    var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDB8));
    var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDBC));
    if ((var_a0 <= 0) || (var_a2 <= 0))
    {
      var_v0 = *((s32 *) (((u8 *) temp_s0) + 4));
      if (var_v0 <= 0)
      {
        if (var_a0 <= 0)
        {
          var_a0 = *((s32 *) (((u8 *) temp_s0) + 0xD9C));
        }
        if (var_a2 <= 0)
        {
          var_a2 = *((s32 *) (((u8 *) temp_s0) + 0xDA0));
          var_a1 = *((s32 *) (((u8 *) temp_s0) + 0xDA4));
        }
        if ((var_a0 > 0) && (var_a2 > 0))
        {
          goto block_10;
        }
      }
    }
    else
    {
      block_10:
      var_v0 = func_0017EE78_x00199610(var_a0, var_a1, var_a2);

    }
  }
  *((s32 *) (((u8 *) temp_s0) + 0xD98)) = var_v0;
}
void func_00199698(void) {
    func_001976B8();
}
s32 func_001996B0(u8 *arg0) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000111);
    }
    return *(s32 *)((u8 *)arg0 + 0x48);
}
struct SfdSj_x001996F0_____________;
struct SfdRecSlot_x001996F0_____________;
struct SfdRec_x001996F0_____________;
struct SfdMpvCond_x001996F0_____________;
struct SfdPlanes_x001996F0_____________;
struct SfdFrameInfo_x001996F0_____________;
struct SfdPly_x001996F0_____________;
typedef int (*SfdTimeFn_x001996F0_____________)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x001996F0_____________ {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001996F0_____________;
typedef struct SfdTimeRec_x001996F0_____________ {
    int valid;
    SfdTimeCode_x001996F0_____________ tc;
    int time;
    int unit;
} SfdTimeRec_x001996F0_____________;
typedef struct SfdTst_x001996F0_____________ {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x001996F0_____________;
typedef struct SfdSyncTally_x001996F0_____________ {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x001996F0_____________;
typedef struct SfdSyncQueue_x001996F0_____________ {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x001996F0_____________;
typedef struct SfdFieldEntry_x001996F0_____________ {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x001996F0_____________;
typedef struct SfdPtsm_x001996F0_____________ {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x001996F0_____________;
typedef struct SfdHdrAudio_x001996F0_____________ {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001996F0_____________;
typedef struct SfdHdrMux_x001996F0_____________ {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001996F0_____________;
typedef struct SfdHdrVideo_x001996F0_____________ {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001996F0_____________;
typedef struct SfdHdrInf_x001996F0_____________ {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001996F0_____________ mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001996F0_____________ audio;
    SfdHdrVideo_x001996F0_____________ video;
    int size;
    char data[2048];
} SfdHdrInf_x001996F0_____________;
typedef struct SfdMvInf_x001996F0_____________ {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x001996F0_____________;
typedef struct SfdPlyInf_x001996F0_____________ {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x001996F0_____________;
typedef void (*SfdErrFn_x001996F0_____________)(void *obj, int code);
typedef struct SfdErrInf_x001996F0_____________ {
    SfdErrFn_x001996F0_____________ func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x001996F0_____________;
typedef int (*SfdExtClockFn_x001996F0_____________)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x001996F0_____________)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x001996F0_____________ {
    SfdTimeFn_x001996F0_____________ timefn[6];
    SfdIsSkipFn_x001996F0_____________ isSkipFn;
    SfdTimeCode_x001996F0_____________ tc;
    SfdTimeRec_x001996F0_____________ state;
    SfdTimeRec_x001996F0_____________ best;
    SfdTimeRec_x001996F0_____________ tot;
    SfdTimeRec_x001996F0_____________ cur;
    SfdTimeRec_x001996F0_____________ latest;
    SfdTimeRec_x001996F0_____________ vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x001996F0_____________ tally;
    SfdSyncQueue_x001996F0_____________ queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x001996F0_____________ clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x001996F0_____________ tst;
    SfdFieldEntry_x001996F0_____________ fields[64];
    SfdPtsm_x001996F0_____________ ptsm;
    char pad1468[36];
} SfdTim_x001996F0_____________;
enum {
    SFD_COND_VIDEO_x001996F0_____________ = 5,
    SFD_COND_AUDIO_x001996F0_____________ = 6,
    SFD_COND_KEEPSUP_x001996F0_____________ = 8,
    SFD_COND_SYNCMODE_x001996F0_____________ = 15,
    SFD_COND_ETIME_x001996F0_____________ = 20,
    SFD_COND_ETUNIT_x001996F0_____________ = 21,
    SFD_COND_LNKSTM_x001996F0_____________ = 49,
    SFD_COND_SUPPLY_END_x001996F0_____________ = 56,
    SFD_COND_DECODE_END_x001996F0_____________ = 57,
    SFD_COND_DEMUX_SPLIT_x001996F0_____________ = 59,
    SFD_COND_VIDEO_AUTO_OFF_x001996F0_____________ = 79,
    SFD_COND_AUDIO_AUTO_OFF_x001996F0_____________ = 80,
    SFD_COND_SYSHD_FN_x001996F0_____________ = 85,
    SFD_COND_SYSHD_FN_OBJ_x001996F0_____________ = 86,
    SFD_COND_NUM_x001996F0_____________ = 100
};
typedef enum SfdBufFmt_x001996F0_____________ {
    SFD_BUFFMT_0_x001996F0_____________ = 0
} SfdBufFmt_x001996F0_____________;
typedef enum SfdBufId_x001996F0_____________ {
    SFD_BUF_NONE_x001996F0_____________ = 8
} SfdBufId_x001996F0_____________;
typedef struct SfdCrePrm_x001996F0_____________ {
    struct SfdTrnConfig_x001996F0_____________ *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x001996F0_____________ bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x001996F0_____________;
typedef struct SfdItem_x001996F0_____________ {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x001996F0_____________;
typedef struct SfdRing_x001996F0_____________ {
    SfdItem_x001996F0_____________ *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x001996F0_____________;
typedef struct SfdBufInf_x001996F0_____________ {
    char *data;
    struct SfdSj_x001996F0_____________ *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x001996F0_____________;
typedef struct SfdBufCur_x001996F0_____________ {
    char *pos;
    int len;
} SfdBufCur_x001996F0_____________;
typedef struct SfdBufDlm_x001996F0_____________ {
    char *pos;
    char *end;
} SfdBufDlm_x001996F0_____________;
typedef struct SfdBufRing_x001996F0_____________ {
    SfdBufInf_x001996F0_____________ sup;
    SfdBufDlm_x001996F0_____________ dlm;
    int wtot;
    int rtot;
    SfdRing_x001996F0_____________ ptsque;
} SfdBufRing_x001996F0_____________;
typedef struct SfdBufAring_x001996F0_____________ {
    SfdBufInf_x001996F0_____________ sup;
    SfdBufCur_x001996F0_____________ ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x001996F0_____________;
typedef struct SfdUoch_x001996F0_____________ {
    struct SfdSj_x001996F0_____________ *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x001996F0_____________;
typedef struct SfdBufEnt_x001996F0_____________ {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x001996F0_____________ ring;
        SfdBufAring_x001996F0_____________ aring;
        SfdBufInf_x001996F0_____________ vfrm;
        SfdUoch_x001996F0_____________ uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x001996F0_____________;
typedef int (*SfdTrnFn_x001996F0_____________)();
typedef struct SfdTrnModules_x001996F0_____________ {
    SfdTrnFn_x001996F0_____________ *fns[15];
} SfdTrnModules_x001996F0_____________;
typedef struct SfdTrnConfig_x001996F0_____________ {
    SfdTrnFn_x001996F0_____________ *fns[9];
} SfdTrnConfig_x001996F0_____________;
typedef struct SfdInitPrm_x001996F0_____________ {
    SfdTrnModules_x001996F0_____________ *modules;
    int vrate;
} SfdInitPrm_x001996F0_____________;
typedef struct SfdMpsPrm_x001996F0_____________ {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x001996F0_____________ *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x001996F0_____________;
typedef struct SfdAdxCfg_x001996F0_____________ {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x001996F0_____________;
typedef void (*SfdAdxStep_x001996F0_____________)(struct SfdPly_x001996F0_____________ *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x001996F0_____________ {
    void *adxt;
    void *sj;
    SfdAdxCfg_x001996F0_____________ cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x001996F0_____________ step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x001996F0_____________;
typedef struct SfdAoap_x001996F0_____________ {
    int rna;
    void (*setOutPan)(struct SfdPly_x001996F0_____________ *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x001996F0_____________ *h, int ch);
    void (*setOutVol)(struct SfdPly_x001996F0_____________ *h, int vol);
    int (*getOutVol)(struct SfdPly_x001996F0_____________ *h);
    void (*setSpeed)(struct SfdPly_x001996F0_____________ *h, int speed);
} SfdAoap_x001996F0_____________;
typedef struct SfainfOut_x001996F0_____________ {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x001996F0_____________;
typedef struct SfainfList_x001996F0_____________ {
    int nout;
    SfainfOut_x001996F0_____________ out[3];
} SfainfList_x001996F0_____________;
typedef struct SfdTrnSlot_x001996F0_____________ {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x001996F0_____________ *mps;
        struct SfdMpv_x001996F0_____________ *mpv;
        SfdAdxCtx_x001996F0_____________ *adxt;
        SfdAoap_x001996F0_____________ *aoap;
        SfainfList_x001996F0_____________ *uo;
    } hn;
    SfdTrnFn_x001996F0_____________ *fns;
    SfdBufId_x001996F0_____________ bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x001996F0_____________;
typedef struct SfdTsum_x001996F0_____________ {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x001996F0_____________;
typedef struct SfdTmrInf_x001996F0_____________ {
    SfdTsum_x001996F0_____________ tsum[6];
} SfdTmrInf_x001996F0_____________;
typedef struct SfdTimLib_x001996F0_____________ {
    int vcount;
    int f4;
    int vrate;
} SfdTimLib_x001996F0_____________;
typedef struct SfdSvrCnt_x001996F0_____________ {
    int cnt;
    int busy;
} SfdSvrCnt_x001996F0_____________;
typedef struct SfdLibInf_x001996F0_____________ {
    int cond[SFD_COND_NUM_x001996F0_____________];
    SfdInitPrm_x001996F0_____________ prm;
    int sysStat;
    SfdErrInf_x001996F0_____________ err;
    SfdTimLib_x001996F0_____________ tim;
    int buf;
    SfdTrnModules_x001996F0_____________ trn;
    SfdSvrCnt_x001996F0_____________ svr;
    struct SfdPly_x001996F0_____________ *hn[8];
} SfdLibInf_x001996F0_____________;
extern SfdLibInf_x001996F0_____________ sfd_lib_x001996F0_____________ __asm__("D_004268E0");
void SFSET_SetCond_x001996F0_____________(void *sfd, int index, int value) __asm__("func_00199818");
int sfd_ReportError_x001996F0_____________(void *sfd, int code) __asm__("func_0018D650");
int SFLIB_CheckHn_x001996F0_____________(void *sfd) __asm__("func_0018D870");
typedef struct SfdSj_x001996F0_____________ SfdSj_x001996F0_____________;
typedef struct SfdSjChunk_x001996F0_____________ {
    char *data;
    int len;
} SfdSjChunk_x001996F0_____________;
typedef struct SfdSjVtbl_x001996F0_____________ {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001996F0_____________ *sj);
    int (*getUuid)(SfdSj_x001996F0_____________ *sj);
    void (*reset)(SfdSj_x001996F0_____________ *sj);
    void (*getChunk)(SfdSj_x001996F0_____________ *sj, int id, int n, SfdSjChunk_x001996F0_____________ *ck);
    void (*ungetChunk)(SfdSj_x001996F0_____________ *sj, int id, SfdSjChunk_x001996F0_____________ *ck);
    void (*putChunk)(SfdSj_x001996F0_____________ *sj, int id, SfdSjChunk_x001996F0_____________ *ck);
    int (*getNumData)(SfdSj_x001996F0_____________ *sj, int id);
} SfdSjVtbl_x001996F0_____________;
struct SfdSj_x001996F0_____________ {
    SfdSjVtbl_x001996F0_____________ *vtbl;
};
struct SfdSj_x001996F0_____________;
typedef struct M2vErrInf_x001996F0_____________ {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001996F0_____________;
typedef struct Mpeg2Ext_x001996F0_____________ {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001996F0_____________;
typedef enum M2vFrameRate_x001996F0_____________ {
    M2V_FRAME_RATE_FORBIDDEN_x001996F0_____________ = 0
} M2vFrameRate_x001996F0_____________;
typedef enum M2vPicType_x001996F0_____________ {
    M2V_PICTYPE_I_x001996F0_____________ = 1,
    M2V_PICTYPE_P_x001996F0_____________ = 2,
    M2V_PICTYPE_B_x001996F0_____________ = 3,
    M2V_PICTYPE_D_x001996F0_____________ = 4
} M2vPicType_x001996F0_____________;
typedef enum M2vPicStruct_x001996F0_____________ {
    M2V_PICSTRUCT_TOP_FIELD_x001996F0_____________ = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001996F0_____________ = 2,
    M2V_PICSTRUCT_FRAME_x001996F0_____________ = 3
} M2vPicStruct_x001996F0_____________;
typedef enum M2vPicAtrF64_x001996F0_____________ {
    M2V_PICATR_F64_0_x001996F0_____________ = 0
} M2vPicAtrF64_x001996F0_____________;
typedef struct M2vPicAtr_x001996F0_____________ {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001996F0_____________ frame_rate_code;
    int temporal_reference;
    M2vPicType_x001996F0_____________ picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001996F0_____________ picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001996F0_____________ f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001996F0_____________;
typedef void (*M2vUsrDatFn_x001996F0_____________)(void *obj, int level);
typedef struct M2vUsrSj_x001996F0_____________ {
    struct SfdSj_x001996F0_____________ *sj;
    M2vUsrDatFn_x001996F0_____________ fn;
    void *obj;
} M2vUsrSj_x001996F0_____________;
typedef struct M2vPicUsr_x001996F0_____________ {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001996F0_____________;
typedef void (*M2vCondFn_x001996F0_____________)();
typedef struct M2vObj_x001996F0_____________ {
    int stat;
    M2vErrInf_x001996F0_____________ err;
    M2vCondFn_x001996F0_____________ cond[16];
    M2vPicAtr_x001996F0_____________ picatr;
    char pad216[64];
    M2vUsrSj_x001996F0_____________ usrsj[4];
    M2vPicUsr_x001996F0_____________ picusr;
    char pad340[12];
    Mpeg2Ext_x001996F0_____________ ext;
    char pad1656[8];
} M2vObj_x001996F0_____________;
extern void M2V_SetErrFunc_x001996F0_____________(M2vObj_x001996F0_____________ *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x001996F0_____________ {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001996F0_____________;
typedef struct sceMpeg_x001996F0_____________ {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x001996F0_____________ *sys;
} sceMpeg_x001996F0_____________;
typedef enum {
    sceMpegCbError_x001996F0_____________,
    sceMpegCbNodata_x001996F0_____________,
    sceMpegCbStopDMA_x001996F0_____________,
    sceMpegCbRestartDMA_x001996F0_____________,
    sceMpegCbBackground_x001996F0_____________,
    sceMpegCbTimeStamp_x001996F0_____________,
    sceMpegCbStr_x001996F0_____________,
    sceMpegCbNum_x001996F0_____________
} sceMpegCbType_x001996F0_____________;
typedef struct {
    sceMpegCbType_x001996F0_____________ type;
    char *errMessage;
} sceMpegCbDataError_x001996F0_____________;
typedef struct {
    sceMpegCbType_x001996F0_____________ type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x001996F0_____________;
typedef struct {
    sceMpegCbType_x001996F0_____________ type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x001996F0_____________;
typedef union {
    sceMpegCbType_x001996F0_____________ type;
    sceMpegCbDataError_x001996F0_____________ error;
    sceMpegCbDataTimeStamp_x001996F0_____________ ts;
    sceMpegCbDataStr_x001996F0_____________ str;
} sceMpegCbData_x001996F0_____________;
typedef int (*sceMpegCallback_x001996F0_____________)(sceMpeg_x001996F0_____________ *mp, sceMpegCbData_x001996F0_____________ *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x001996F0_____________ func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x001996F0_____________;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x001996F0_____________;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x001996F0_____________;
typedef struct {
    _sceMpegPicture_x001996F0_____________ *ref_image;
    _sceMpegPicture_x001996F0_____________ *prev_image;
    _sceMpegPicture_x001996F0_____________ *decode;
    _sceMpegPicture_x001996F0_____________ *image;
} _sceMpegPictureSlot_x001996F0_____________;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x001996F0_____________;
typedef void (*_sceMpegMcKernel_x001996F0_____________)(_sceMpegMcFetch_x001996F0_____________ *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x001996F0_____________ luma_kernel[4];
    _sceMpegMcKernel_x001996F0_____________ chroma_kernel[4];
    _sceMpegMcFetch_x001996F0_____________ luma[4];
    _sceMpegMcFetch_x001996F0_____________ chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x001996F0_____________;
typedef struct _sceMpegDecoder_x001996F0_____________ {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x001996F0_____________ callbacks[sceMpegCbNum_x001996F0_____________];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x001996F0_____________ ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x001996F0_____________ alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x001996F0_____________ slots[3];
    _sceMpegPicture_x001996F0_____________ pictures[9];
    _sceMpegSprBuffer_x001996F0_____________ spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x001996F0_____________ *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x001996F0_____________;
typedef struct SfdPlanes_x001996F0_____________ {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x001996F0_____________;
typedef struct SfdUserData_x001996F0_____________ {
    char data[512];
    int size;
} SfdUserData_x001996F0_____________;
typedef struct SfdRecVideo_x001996F0_____________ {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001996F0_____________ stamp;
    SfdUserData_x001996F0_____________ user;
} SfdRecVideo_x001996F0_____________;
typedef struct SfdSlot_x001996F0_____________ {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x001996F0_____________ stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001996F0_____________ *blob;
    M2vPicAtr_x001996F0_____________ info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x001996F0_____________;
typedef struct SfdBufPool_x001996F0_____________ {
    char *base;
    int count;
    int size;
    SfdSjChunk_x001996F0_____________ slot[18];
} SfdBufPool_x001996F0_____________;
typedef struct SfdMpvCond_x001996F0_____________ {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x001996F0_____________;
typedef struct SfdMpvWorkBufs_x001996F0_____________ {
    int w[2];
} SfdMpvWorkBufs_x001996F0_____________;
typedef struct SfdMpvFrameBufs_x001996F0_____________ {
    int w[16];
} SfdMpvFrameBufs_x001996F0_____________;
typedef struct SfdIpuEntry_x001996F0_____________ {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001996F0_____________;
typedef struct SfdDmaTag_x001996F0_____________ {
    long long tag;
    long long pad;
} SfdDmaTag_x001996F0_____________;
typedef struct SfdIpuStream_x001996F0_____________ {
    void *base;
    SfdDmaTag_x001996F0_____________ *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001996F0_____________ *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001996F0_____________;
typedef struct SfdIpuCtl_x001996F0_____________ {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x001996F0_____________ mpeg;
    SfdIpuStream_x001996F0_____________ stream;
    sceMpegCbDataError_x001996F0_____________ error;
} SfdIpuCtl_x001996F0_____________;
typedef struct SfdPtsComp_x001996F0_____________ {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x001996F0_____________ ptsent;
} SfdPtsComp_x001996F0_____________;
typedef struct SfdMpv_x001996F0_____________ {
    void *handle;
    SfdMpvCond_x001996F0_____________ cond;
    SfdMpvWorkBufs_x001996F0_____________ work;
    SfdMpvFrameBufs_x001996F0_____________ bufs;
    SfdSlot_x001996F0_____________ *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x001996F0_____________ pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x001996F0_____________ ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x001996F0_____________ planes[2];
    SfdSlot_x001996F0_____________ *first;
    SfdSlot_x001996F0_____________ *second;
    SfdSlot_x001996F0_____________ *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x001996F0_____________ slots[16];
    SfdBufPool_x001996F0_____________ pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x001996F0_____________ ipu;
} SfdMpv_x001996F0_____________;
typedef enum SfdPicType_x001996F0_____________ {
    SFD_PICTYPE_I_x001996F0_____________ = 1,
    SFD_PICTYPE_P_x001996F0_____________ = 2,
    SFD_PICTYPE_B_x001996F0_____________ = 3
} SfdPicType_x001996F0_____________;
typedef enum SfdFrmInfF60_x001996F0_____________ {
    SFD_FRMINF_F60_0_x001996F0_____________ = 0
} SfdFrmInfF60_x001996F0_____________;
typedef struct SfdFrameDetail_x001996F0_____________ {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x001996F0_____________;
typedef struct SfdFrameInfo_x001996F0_____________ {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x001996F0_____________ picType;
    int time;
    int unit;
    SfdBufFmt_x001996F0_____________ bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001996F0_____________ *picUsr;
    SfdFrmInfF60_x001996F0_____________ f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x001996F0_____________ detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x001996F0_____________;
typedef struct SfdVfrm_x001996F0_____________ {
    int used;
    int f4;
    SfdFrameInfo_x001996F0_____________ inf;
} SfdVfrm_x001996F0_____________;
typedef struct SfdPly_x001996F0_____________ SfdPly_x001996F0_____________;
typedef struct SfdRec_x001996F0_____________ SfdRec_x001996F0_____________;
typedef struct SfdRecSub_x001996F0_____________ {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001996F0_____________;
typedef struct SfdRecSlot_x001996F0_____________ {
    SfdRec_x001996F0_____________ *rec;
    SfdRecSub_x001996F0_____________ sub;
} SfdRecSlot_x001996F0_____________;
typedef struct SfdSysHd_x001996F0_____________ {
    char data[2][176];
    int len[2];
} SfdSysHd_x001996F0_____________;
typedef struct SfdRecSys_x001996F0_____________ {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001996F0_____________ syshd;
} SfdRecSys_x001996F0_____________;
typedef struct SfdRecAudio_x001996F0_____________ {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001996F0_____________;
struct SfdRec_x001996F0_____________ {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001996F0_____________ hdrInf;
    SfdRecSys_x001996F0_____________ sys;
    char pad2616[152];
    SfdRecVideo_x001996F0_____________ video;
    SfdRecAudio_x001996F0_____________ audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x001996F0_____________ {
    SfdCrePrm_x001996F0_____________ cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x001996F0_____________ hdr;
    SfdMvInf_x001996F0_____________ mvInf;
    char pad2380[4];
    SfdPlyInf_x001996F0_____________ plyInf;
    SfdErrInf_x001996F0_____________ err;
    int cond[SFD_COND_NUM_x001996F0_____________];
    int cond2[SFD_COND_NUM_x001996F0_____________];
    char pad3364[4];
    SfdTim_x001996F0_____________ tim;
    SfdBufEnt_x001996F0_____________ buf[8];
    SfdVfrm_x001996F0_____________ vfrm[16];
    SfdTrnSlot_x001996F0_____________ trn[9];
    char pad8588[4];
    SfdMpsPrm_x001996F0_____________ mps;
    char pad8944[176];
    SfdMpv_x001996F0_____________ mpv;
    SfdAdxCtx_x001996F0_____________ adxt;
    char pad13680[100];
    SfdAoap_x001996F0_____________ aoap;
    char pad13804[4];
    SfainfList_x001996F0_____________ uo;
    char pad13860[4];
    SfdRecSlot_x001996F0_____________ see;
    SfdTmrInf_x001996F0_____________ tmr;
};
void sfset_SetCondAll_x001996F0_____________(int index, int value) __asm__("func_001997A8");
void sfset_SetUsrCond_x001996F0_____________(SfdPly_x001996F0_____________ *hn, int index, int value) __asm__("func_00199868");
void sfset_SetCondAll_x001996F0_____________(int index, int value) __asm__("func_001997A8");
void SFSET_SetCond_x001996F0_____________(void *sfd, int index, int value) __asm__("func_00199818");
void sfset_SetUsrCond_x001996F0_____________(SfdPly_x001996F0_____________ *hn, int index, int value) __asm__("func_00199868");
int func_001996F0_x001996F0_____________(void *sfd, int index, int value) __asm__("func_001996F0");
/* SFD_SetCond: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdcond.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001996F0_x001996F0_____________(void *sfd, int index, int value)
{
    SfdPly_x001996F0_____________ *hn = sfd;
    if (hn == 0) {
        sfset_SetCondAll_x001996F0_____________(index, value);
        sfd_lib_x001996F0_____________.cond[index] = value;
    } else {
        if (SFLIB_CheckHn_x001996F0_____________(hn) != 0) {
            return sfd_ReportError_x001996F0_____________(0, 0xFF000112);
        }
        SFSET_SetCond_x001996F0_____________(hn, index, value);
        sfset_SetUsrCond_x001996F0_____________(hn, index, value);
    }
    return 0;
}
s32 func_00199818_x001997A8(s32, s32, s32) __asm__("func_00199818");
extern s32 D_00426AE4_x001997A8 __asm__("D_00426AE4");
void func_001997A8_x001997A8(s32 arg0, s32 arg1) __asm__("func_001997A8");
void func_001997A8_x001997A8(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 7;
    var_s1 = &D_00426AE4_x001997A8;
    do {
        temp_v0 = *var_s1;
        var_s1 += 1;
        if (temp_v0 != 0) {
            func_00199818_x001997A8(temp_v0, arg0, arg1);
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
}
void func_00199818(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0) = arg2;
    }
}
void func_00199868(s32 arg0, s32 arg1, s32 arg2) {
    if (func_001998B8() != 0) {
        *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0xB30) = arg2;
    }
}
extern int Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(int, int) __asm__("func_0019C188");
int func_001998B8_x001998B8(char *a0, int a1, int a2) __asm__("func_001998B8");
/* sfset_IsCondValid: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001998B8_x001998B8(char *a0, int a1, int a2)
{
    if (a1 == 6 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 3) == 0)
            return 0;
    }
    if (a1 == 5 && a2 == 1) {
        if (Obj35C0_IsIndexedSet_1F3C_C380_x001998B8(a0, 2) == 0)
            return 0;
    }
    return 1;
}
typedef unsigned char Uint8_x00199940;
typedef signed char Sint8_x00199940;
typedef signed short Sint16_x00199940;
typedef unsigned int Uint32_x00199940;
typedef signed int Sint32_x00199940;
typedef signed long long Sint64_x00199940;
typedef char Char8_x00199940;
typedef struct SJ_OBJ_x00199940 *SJ_x00199940;
typedef struct {
        Uint8_x00199940 *data;
        Sint32_x00199940 len;
} SJCK_x00199940;
typedef struct {
        Uint8_x00199940 data[16];
} SJUUID_x00199940;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00199940 sj);
        const SJUUID_x00199940 *(*GetUuid)(SJ_x00199940 sj);
        void (*Reset)(SJ_x00199940 sj);
        void (*GetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, Sint32_x00199940 nbyte, SJCK_x00199940 *ck);
        void (*UngetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, SJCK_x00199940 *ck);
        void (*PutChunk)(SJ_x00199940 sj, Sint32_x00199940 id, SJCK_x00199940 *ck);
        Sint32_x00199940 (*GetNumData)(SJ_x00199940 sj, Sint32_x00199940 id);
        Sint32_x00199940 (*IsGetChunk)(SJ_x00199940 sj, Sint32_x00199940 id, Sint32_x00199940 nbyte, Sint32_x00199940 *rbyte);
        void (*EntryErrFunc)(SJ_x00199940 sj, void (*func)(void *obj, Char8_x00199940 *msg), void *obj);
} SJ_IF_x00199940;
struct SJ_OBJ_x00199940 {
        SJ_IF_x00199940 *vtbl;
};
typedef struct SFD_OBJ_x00199940 *SFD_x00199940;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x00199940 rsv1;
        Sint32_x00199940 rsv2;
} SFUO_CH_x00199940;
typedef struct {
        Sint32_x00199940 nch;
        SFUO_CH_x00199940 ch[3];
} SFUO_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Sint32_x00199940 (*SetOutPan)(SFD_x00199940 sfd, Sint32_x00199940 ch, Sint32_x00199940 pan);
        Sint32_x00199940 (*GetOutPan)(SFD_x00199940 sfd, Sint32_x00199940 ch);
        Sint32_x00199940 (*SetOutVol)(SFD_x00199940 sfd, Sint32_x00199940 vol);
        Sint32_x00199940 (*GetOutVol)(SFD_x00199940 sfd);
        void (*SetSpeed)(SFD_x00199940 sfd, Sint32_x00199940 speed);
        Sint32_x00199940 x18;
} SFAOAP_x00199940;
typedef struct {
        Uint8_x00199940 pad0[0xB8];
        Sint32_x00199940 tottime;
        Sint32_x00199940 tunit;
        Uint8_x00199940 padc0[0x150 - 0xC0];
        Sint64_x00199940 scr_base;
        Sint64_x00199940 scr_ofst;
        Sint32_x00199940 pad160;
        Sint32_x00199940 ctime;
        Sint32_x00199940 ctime_idx;
        Sint32_x00199940 ctime_que[32];
        Sint32_x00199940 tot_last;
        Sint32_x00199940 pad1F0;
        Sint32_x00199940 que_wr;
        Sint32_x00199940 que_rd;
        Sint32_x00199940 tot_que[32];
} SFCON_x00199940;
typedef struct {
        Sint32_x00199940 type;
        Sint32_x00199940 drop;
        Sint32_x00199940 hour;
        Sint32_x00199940 min;
        Sint32_x00199940 sec;
        Sint32_x00199940 frm;
        Sint32_x00199940 frm2;
        Sint16_x00199940 x1c;
        Sint16_x00199940 field;
} SFTIM_TC_x00199940;
typedef struct {
        Sint32_x00199940 valid;
        SFTIM_TC_x00199940 tc;
        Sint32_x00199940 val;
        Sint32_x00199940 unit;
} SFTIM_TTU_x00199940;
typedef struct {
        Sint64_x00199940 pts;
        Uint32_x00199940 pos;
        Uint32_x00199940 len;
} SFPTS_ENT_x00199940;
typedef struct {
        SFPTS_ENT_x00199940 *ent;
        Sint32_x00199940 num;
        Sint32_x00199940 cnt;
        Sint32_x00199940 wr;
        Sint32_x00199940 rd;
} SFPTS_QUE_x00199940;
typedef struct {
        Sint32_x00199940 raw[0x20];
} SFD_VFRM_INF_x00199940;
typedef struct {
        void *frm;
        Sint32_x00199940 x04;
        SFD_VFRM_INF_x00199940 inf;
} SFD_VFRM_x00199940;
typedef struct {
        Sint32_x00199940 kind;
        SJ_x00199940 sj;
        Uint32_x00199940 ofst;
        Sint32_x00199940 size;
        Sint32_x00199940 xsize;
        Sint32_x00199940 x14;
} SFBUF_SUP_x00199940;
typedef struct {
        SFBUF_SUP_x00199940 sup;
        Uint8_x00199940 *dlm_pos;
        Sint32_x00199940 dlm_len;
        Sint32_x00199940 wtot;
        Sint32_x00199940 rtot;
        SFPTS_QUE_x00199940 ptsque;
} SFBUF_RING_x00199940;
typedef struct {
        Sint32_x00199940 mode;
        Sint32_x00199940 used;
        Sint32_x00199940 prepflg;
        Sint32_x00199940 termflg;
        union {
                SFBUF_RING_x00199940 ring;
                struct {
                        Uint32_x00199940 adr;
                        Sint32_x00199940 size;
                        Sint32_x00199940 x18;
                        Sint32_x00199940 x1c;
                        SFD_VFRM_x00199940 *vfrm;
                } vfrm;
                struct {
                        Uint32_x00199940 adr;
                        Sint32_x00199940 size;
                        Sint32_x00199940 rsv[7];
                        Sint32_x00199940 rsv2[3];
                } aout;
                SFUO_CH_x00199940 uoch[3];
        } u;
        Sint32_x00199940 in_tr;
        Sint32_x00199940 out_tr;
        Sint32_x00199940 rsv[8];
} SFBUF_WORK_x00199940;
typedef struct {
        Sint32_x00199940 (*Init)();
        Sint32_x00199940 (*Finish)();
        Sint32_x00199940 (*ExecServer)();
        Sint32_x00199940 (*Create)();
        Sint32_x00199940 (*Destroy)();
        Sint32_x00199940 (*Standby)();
        Sint32_x00199940 (*Start)();
        Sint32_x00199940 (*Stop)();
        Sint32_x00199940 (*Pause)();
        Sint32_x00199940 (*GetWrite)();
        Sint32_x00199940 (*AddWrite)();
        Sint32_x00199940 (*GetRead)();
        Sint32_x00199940 (*AddRead)();
        Sint32_x00199940 (*Seek)();
} SFD_TR_IF_x00199940;
typedef Sint32_x00199940 (*SFD_TR_FUNC_x00199940)();
typedef struct {
        Sint32_x00199940 prepflg;
        Sint32_x00199940 termflg;
        void *hn;
        SFD_TR_FUNC_x00199940 *trif;
        Sint32_x00199940 bufin;
        Sint32_x00199940 bufout;
        Sint32_x00199940 bufout2;
        Sint32_x00199940 bufout3;
        Sint32_x00199940 x20;
        Uint8_x00199940 pad24[0x44 - 0x24];
} SFD_TR_x00199940;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x00199940 cwidth;
        Sint16_x00199940 ywidth;
} SFMPV_PLANE_x00199940;
typedef struct {
        void *buf;
        Sint32_x00199940 len;
} SFMPV_PICUSR_x00199940;
typedef struct {
        Sint32_x00199940 stat;
        Sint32_x00199940 lock;
        void *buf;
        SFTIM_TTU_x00199940 ttu;
        Sint32_x00199940 ftime;
        Sint32_x00199940 tunit;
        Sint32_x00199940 ndct;
        Sint32_x00199940 nbyte;
        Sint32_x00199940 gopno;
        Sint32_x00199940 x4c;
        Sint32_x00199940 x50;
        SFMPV_PICUSR_x00199940 *picusr;
        Sint32_x00199940 pa_width;
        Sint32_x00199940 pa_height;
        Sint32_x00199940 pa_mb_width;
        Sint32_x00199940 pa_mb_height;
        Sint32_x00199940 pa_frame_rate;
        Sint32_x00199940 tmpref;
        Sint32_x00199940 pa_pic_type;
        Sint32_x00199940 pa_tc_drop;
        Sint32_x00199940 pa_tc_hour;
        Sint32_x00199940 pa_tc_min;
        Sint32_x00199940 pa_tc_sec;
        Sint32_x00199940 pa_tc_pic;
        Sint32_x00199940 x88;
        Sint32_x00199940 x8c;
        Sint32_x00199940 pa_x90[3];
        Sint32_x00199940 pa_x9c[3];
        Sint16_x00199940 pa_xa8;
        Sint16_x00199940 pa_xaa;
        Sint8_x00199940 pa_xac;
        Sint8_x00199940 pa_xad;
        Sint8_x00199940 pa_xae;
        Sint8_x00199940 pa_xaf;
        Sint8_x00199940 pa_xb0;
        Sint8_x00199940 pa_xb1;
        Sint8_x00199940 pa_xb2;
        Sint8_x00199940 pa_xb3;
        Sint8_x00199940 pa_xb4;
        Sint8_x00199940 pa_xb5;
        Sint8_x00199940 pa_xb6;
        Sint8_x00199940 pa_xb7;
        Sint8_x00199940 pa_xb8;
        Sint8_x00199940 pa_xb9;
        Sint8_x00199940 pa_xba;
        Sint8_x00199940 pa_xbb;
        Sint8_x00199940 pa_xbc;
        Uint8_x00199940 padbd[0xD8 - 0xBD];
        Sint64_x00199940 pts;
} SFMPV_FRM_x00199940;
typedef struct {
        Sint32_x00199940 cwidth;
        Sint32_x00199940 cheight;
        Sint32_x00199940 width;
        Sint32_x00199940 height;
        Sint32_x00199940 x10;
        Sint32_x00199940 max_width;
        Sint32_x00199940 max_height;
        Sint32_x00199940 nfrm;
        Sint32_x00199940 x20;
} SFMPV_PARA_x00199940;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x00199940 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x00199940 *curfrm;
        Sint32_x00199940 picstat;
        Sint32_x00199940 dlmmask;
        Sint32_x00199940 termflg;
        Sint32_x00199940 gopstat;
        Sint32_x00199940 nskip;
        Sint32_x00199940 nconcat;
        Uint8_x00199940 picatr[0x80];
        Sint32_x00199940 last_ngop;
        Sint32_x00199940 newgop;
        Sint32_x00199940 vbvsiz;
        Sint32_x00199940 pts_tmpref;
        Sint32_x00199940 pts_ofst;
        Sint32_x00199940 pts_max;
        Sint32_x00199940 pad124;
        SFPTS_ENT_x00199940 ptsent;
        Sint32_x00199940 refidx[2];
        SFMPV_PLANE_x00199940 rfbuf[2];
        SFMPV_FRM_x00199940 *ref[2];
        SFMPV_FRM_x00199940 *pendfrm;
        Sint32_x00199940 skipret;
        Sint32_x00199940 dlmwait;
        Sint32_x00199940 tmpref_adj;
        Sint32_x00199940 nfrm;
        Sint32_x00199940 pad17c;
        SFMPV_FRM_x00199940 frm[16];
        void *picusr_buf;
        Sint32_x00199940 picusr_num;
        Sint32_x00199940 picusr_siz;
        Uint8_x00199940 *picusr_dat;
        Sint32_x00199940 picusr_len;
        SFMPV_PICUSR_x00199940 picusr[16];
        Sint32_x00199940 pad1014;
        Sint64_x00199940 pts;
} SFMPV_WORK_x00199940;
typedef struct {
        Sint32_x00199940 raw[0x2A];
} SFD_PLYINF_x00199940 __attribute__((aligned(8)));
typedef struct {
        SFD_TR_IF_x00199940 *tbl[15];
} SFTRN_TRIF_TBL_x00199940;
typedef struct {
        void (*fn)(void *obj, Sint32_x00199940 code);
        void *obj;
        Sint32_x00199940 code;
        Sint32_x00199940 x0c;
        Sint32_x00199940 x10;
} SFLIB_ERRINF_x00199940;
typedef struct {
        Sint32_x00199940 codec;
        Sint32_x00199940 layer;
        Sint32_x00199940 chnum;
        Sint32_x00199940 smphz;
} SFHDS_AUD_x00199940;
typedef struct {
        Sint32_x00199940 codec;
        Sint32_x00199940 bitrate;
        Sint32_x00199940 picw;
        Sint32_x00199940 pich;
        Sint32_x00199940 picrate;
        Sint32_x00199940 ftr_eff;
        Sint32_x00199940 ftr_coltype;
        Sint32_x00199940 ftr_pictype;
        Sint32_x00199940 ftr_fixflg;
        Sint32_x00199940 ftr_shcfixflg;
        Sint32_x00199940 ftr_expand;
        Sint32_x00199940 ftr_gopn;
        Sint32_x00199940 ftr_gopm;
} SFHDS_VID_x00199940;
typedef struct {
        Sint32_x00199940 valid;
        Sint32_x00199940 ver_major;
        Sint32_x00199940 ver_minor;
        Sint32_x00199940 byterate;
        Sint32_x00199940 hdrsiz;
        Sint32_x00199940 packtype;
        Sint32_x00199940 pketsizlen;
        Sint32_x00199940 packsiz;
        Sint32_x00199940 numelem_tot;
        Sint32_x00199940 numelem_aud;
        Sint32_x00199940 numelem_vid;
        Sint32_x00199940 numelem_prv;
        Sint32_x00199940 maxplylen_aud;
        Sint32_x00199940 maxplylen_vid;
        Sint32_x00199940 maxfrmnum;
        Sint32_x00199940 stmid_prv1;
        Sint32_x00199940 stmid_prv2;
        Sint32_x00199940 stmid_aud;
        Sint32_x00199940 stmid_vid;
        SFHDS_AUD_x00199940 aud;
        SFHDS_VID_x00199940 vid;
        Sint32_x00199940 rawsiz;
        Uint8_x00199940 raw[0x800];
} SFHDS_FHD_x00199940;
typedef struct {
        Uint8_x00199940 data[2][0xB0];
        Sint32_x00199940 len[2];
} SFSEE_SYSHD_x00199940;
typedef struct {
        Sint32_x00199940 analyzed;
        Sint32_x00199940 ncount;
        Sint32_x00199940 tscale;
        Sint32_x00199940 nvid;
        Sint32_x00199940 naud;
        Sint32_x00199940 pad14;
        Sint64_x00199940 scr_base;
        Sint64_x00199940 pts_min;
        Sint32_x00199940 stmid_vid;
        Sint32_x00199940 stmid_aud;
        SFSEE_SYSHD_x00199940 syshd;
} SFSEE_SHDR_x00199940;
typedef struct {
        Sint32_x00199940 analyzed;
        Sint32_x00199940 ncount;
        Sint32_x00199940 tscale;
        SFHDS_FHD_x00199940 fhd;
        SFSEE_SHDR_x00199940 shdr;
        Uint8_x00199940 pada38[0xAD0 - 0xA38];
        Sint32_x00199940 a1hdr;
        Sint32_x00199940 a1ncount;
        Sint32_x00199940 a1tscale;
        Uint8_x00199940 padadc[0xD0C - 0xADC];
        Sint32_x00199940 a2hdr;
        Sint32_x00199940 a2ncount;
        Sint32_x00199940 a2tscale;
        Uint8_x00199940 padd18[0xDA8 - 0xD18];
        Sint32_x00199940 rate;
        Sint32_x00199940 fsize_est;
        Sint32_x00199940 tot_est;
        Sint32_x00199940 tunit_est;
        Sint32_x00199940 av_a;
        Sint32_x00199940 av_b;
        Sint32_x00199940 paddc0;
        Sint32_x00199940 fsize;
        Sint32_x00199940 tottime;
        Sint32_x00199940 tunit;
        Sint32_x00199940 byterate;
        Sint32_x00199940 seekpos;
} SFSEE_WORK_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Sint32_x00199940 pos;
        Sint32_x00199940 x08;
} SFSEE_REQ_x00199940;
typedef struct {
        Sint32_x00199940 bsize;
        Sint32_x00199940 xsize;
        void *buf;
        Sint32_x00199940 maxnch;
        Sint32_x00199940 x10;
        Sint32_x00199940 worksize;
        void *work;
} SFADXT_PARA_x00199940;
typedef struct {
        void *adxt;
        SJ_x00199940 sj;
        SFADXT_PARA_x00199940 para;
        Sint32_x00199940 tcount;
        Sint32_x00199940 tunit;
        Sint32_x00199940 pause;
        Sint32_x00199940 discard;
        Sint32_x00199940 seekflg;
        Sint32_x00199940 smplofst;
        void (*func)(SFD_x00199940 sfd, Uint8_x00199940 *data, Sint32_x00199940 len, Sint32_x00199940 *nbyte);
        Sint32_x00199940 x40;
        Sint32_x00199940 svrfreq;
        Sint32_x00199940 totbyte;
        Sint32_x00199940 x4c;
} SFADXT_WORK_x00199940;
typedef struct {
        SFSEE_WORK_x00199940 *wk;
        SFSEE_REQ_x00199940 req;
} SFSEE_HN_x00199940;
typedef struct {
        Sint32_x00199940 x00;
        Uint32_x00199940 adr;
        Sint32_x00199940 size[7];
        Sint32_x00199940 x24;
        Sint32_x00199940 unit;
        Sint32_x00199940 x2c;
        Sint32_x00199940 x30;
        Sint32_x00199940 x34;
        Sint32_x00199940 x38;
        void *hnwork;
        Sint32_x00199940 hnwksiz;
} SFD_CREPRM_x00199940;
typedef struct {
        void *x00;
        Sint32_x00199940 x04;
        Sint32_x00199940 x08;
} SFPLY_PTSM_x00199940;
typedef struct {
        Sint64_x00199940 sum;
        Sint64_x00199940 min;
        Sint64_x00199940 max;
        Sint32_x00199940 cnt;
} SFTMR_TSUM_x00199940;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x00199940 nvid;
        Sint32_x00199940 naud;
        Sint32_x00199940 x0c;
        Sint64_x00199940 pts_min;
        Sint64_x00199940 pts_min2;
        Sint32_x00199940 concat_cnt;
        Sint32_x00199940 last_vid;
        Sint32_x00199940 last_aud;
        Sint32_x00199940 first_vid;
        Sint32_x00199940 first_aud;
        Sint32_x00199940 cur_vid;
        Sint32_x00199940 cur_aud;
        Sint32_x00199940 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x00199940 stmid);
        void *outobj;
        Sint32_x00199940 skip;
        Sint32_x00199940 x15c;
        Sint32_x00199940 x160;
        Sint32_x00199940 x164;
} SFMPS_WORK_x00199940;
typedef struct SFD_OBJ_x00199940 {
        SFD_CREPRM_x00199940 prm;
        Sint32_x00199940 chg_flg;
        Sint32_x00199940 stat;
        Sint32_x00199940 req;
        Sint32_x00199940 pause_sw;
        Sint32_x00199940 pause_cnt;
        Uint8_x00199940 pad58[0x74 - 0x58];
        Sint32_x00199940 pad74;
        SFHDS_FHD_x00199940 fhd;
        Sint32_x00199940 x90c;
        Sint32_x00199940 x910;
        Sint32_x00199940 x914;
        Sint32_x00199940 x918;
        Sint32_x00199940 x91c;
        Sint32_x00199940 picrate;
        Sint32_x00199940 x924;
        Sint32_x00199940 x928;
        Sint32_x00199940 x92c;
        Sint32_x00199940 numelem_aud;
        Sint32_x00199940 numelem_vid;
        Sint32_x00199940 numelem_prv;
        Sint32_x00199940 x93c;
        Sint32_x00199940 x940;
        Sint32_x00199940 x944;
        Sint32_x00199940 x948;
        Sint32_x00199940 x94c;
        SFD_PLYINF_x00199940 plyinf;
        SFLIB_ERRINF_x00199940 err;
        Sint32_x00199940 cond[100];
        Sint32_x00199940 cond_def[100];
        Uint8_x00199940 padD24[4];
        SFCON_x00199940 con;
        Uint8_x00199940 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x00199940))];
        Uint8_x00199940 tst[0x1C0];
        Uint8_x00199940 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x00199940 ptsm;
        Uint8_x00199940 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x00199940 buf[8];
        SFD_VFRM_x00199940 vfrm[16];
        SFD_TR_x00199940 tr[9];
        Sint32_x00199940 pad218c;
        SFMPS_WORK_x00199940 mps;
        Uint8_x00199940 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x00199940 mpv;
        SFADXT_WORK_x00199940 adxt;
        Uint8_x00199940 pad3410[0x3474 - 0x3410];
        SFAOAP_x00199940 aoap;
        SFUO_x00199940 uo_tbl;
        Sint32_x00199940 pad34c4;
        SFSEE_HN_x00199940 see;
        SFTMR_TSUM_x00199940 tsum[6];
} SFD_OBJ_x00199940;
typedef struct {
        Sint32_x00199940 cond[100];
        SFTRN_TRIF_TBL_x00199940 *trif_tbl;
        Sint32_x00199940 prm1;
        Sint32_x00199940 x198;
        SFLIB_ERRINF_x00199940 err;
        Uint8_x00199940 tim[0xC];
        Sint32_x00199940 buf;
        SFTRN_TRIF_TBL_x00199940 trif;
        Sint32_x00199940 x1fc;
        Sint32_x00199940 x200;
        SFD_x00199940 hn[8];
        Sint32_x00199940 x224;
} SFLIB_WORK_x00199940;
extern SFLIB_WORK_x00199940 SFLIB_libwork_x00199940 __asm__("D_004268E0");
Sint32_x00199940 SFLIB_SetErr_x00199940(SFD_x00199940 sfd, Sint32_x00199940 code) __asm__("func_0018D650");
Sint32_x00199940 SFLIB_CheckHn_x00199940(SFD_x00199940 sfd) __asm__("func_0018D870");
Sint32_x00199940 SFSET_GetCond_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id) __asm__("func_001999E0");
Sint32_x00199940 SFSET_GetCond_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id) __asm__("func_001999E0");
Sint32_x00199940 func_00199940_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id, Sint32_x00199940 *val) __asm__("func_00199940");
/* SFD_GetCond: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_set.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00199940 func_00199940_x00199940(SFD_x00199940 sfd, Sint32_x00199940 id, Sint32_x00199940 *val)
{
        if (sfd == 0) {
                *val = SFLIB_libwork_x00199940.cond[id];
        } else {
                if (SFLIB_CheckHn_x00199940(sfd) != 0) {
                        return SFLIB_SetErr_x00199940(0, 0xFF000113);
                }
                *val = SFSET_GetCond_x00199940(sfd, id);
        }
        return 0;
}
s32 func_001999E0(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x9A0);
}
struct SfdSj_x001999F0;
struct SfdRecSlot_x001999F0;
struct SfdRec_x001999F0;
struct SfdMpvCond_x001999F0;
struct SfdPlanes_x001999F0;
struct SfdFrameInfo_x001999F0;
struct SfdPly_x001999F0;
typedef int (*SfdTimeFn_x001999F0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x001999F0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x001999F0;
typedef struct SfdTimeRec_x001999F0 {
    int valid;
    SfdTimeCode_x001999F0 tc;
    int time;
    int unit;
} SfdTimeRec_x001999F0;
typedef struct SfdTst_x001999F0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x001999F0;
typedef struct SfdSyncTally_x001999F0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x001999F0;
typedef struct SfdSyncQueue_x001999F0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x001999F0;
typedef struct SfdFieldEntry_x001999F0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x001999F0;
typedef struct SfdPtsm_x001999F0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x001999F0;
typedef struct SfdHdrAudio_x001999F0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x001999F0;
typedef struct SfdHdrMux_x001999F0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x001999F0;
typedef struct SfdHdrVideo_x001999F0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x001999F0;
typedef struct SfdHdrInf_x001999F0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x001999F0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x001999F0 audio;
    SfdHdrVideo_x001999F0 video;
    int size;
    char data[2048];
} SfdHdrInf_x001999F0;
typedef struct SfdMvInf_x001999F0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x001999F0;
typedef struct SfdPlyInf_x001999F0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x001999F0;
typedef void (*SfdErrFn_x001999F0)(void *obj, int code);
typedef struct SfdErrInf_x001999F0 {
    SfdErrFn_x001999F0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x001999F0;
typedef int (*SfdExtClockFn_x001999F0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x001999F0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x001999F0 {
    SfdTimeFn_x001999F0 timefn[6];
    SfdIsSkipFn_x001999F0 isSkipFn;
    SfdTimeCode_x001999F0 tc;
    SfdTimeRec_x001999F0 state;
    SfdTimeRec_x001999F0 best;
    SfdTimeRec_x001999F0 tot;
    SfdTimeRec_x001999F0 cur;
    SfdTimeRec_x001999F0 latest;
    SfdTimeRec_x001999F0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x001999F0 tally;
    SfdSyncQueue_x001999F0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x001999F0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x001999F0 tst;
    SfdFieldEntry_x001999F0 fields[64];
    SfdPtsm_x001999F0 ptsm;
    char pad1468[36];
} SfdTim_x001999F0;
enum {
    SFD_COND_VIDEO_x001999F0 = 5,
    SFD_COND_AUDIO_x001999F0 = 6,
    SFD_COND_KEEPSUP_x001999F0 = 8,
    SFD_COND_SYNCMODE_x001999F0 = 15,
    SFD_COND_ETIME_x001999F0 = 20,
    SFD_COND_ETUNIT_x001999F0 = 21,
    SFD_COND_LNKSTM_x001999F0 = 49,
    SFD_COND_SUPPLY_END_x001999F0 = 56,
    SFD_COND_DECODE_END_x001999F0 = 57,
    SFD_COND_DEMUX_SPLIT_x001999F0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x001999F0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x001999F0 = 80,
    SFD_COND_SYSHD_FN_x001999F0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x001999F0 = 86,
    SFD_COND_NUM_x001999F0 = 100
};
typedef enum SfdBufFmt_x001999F0 {
    SFD_BUFFMT_0_x001999F0 = 0
} SfdBufFmt_x001999F0;
typedef enum SfdBufId_x001999F0 {
    SFD_BUF_NONE_x001999F0 = 8
} SfdBufId_x001999F0;
typedef struct SfdCrePrm_x001999F0 {
    struct SfdTrnConfig_x001999F0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x001999F0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x001999F0;
typedef struct SfdItem_x001999F0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x001999F0;
typedef struct SfdRing_x001999F0 {
    SfdItem_x001999F0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x001999F0;
typedef struct SfdBufInf_x001999F0 {
    char *data;
    struct SfdSj_x001999F0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x001999F0;
typedef struct SfdBufCur_x001999F0 {
    char *pos;
    int len;
} SfdBufCur_x001999F0;
typedef struct SfdBufDlm_x001999F0 {
    char *pos;
    char *end;
} SfdBufDlm_x001999F0;
typedef struct SfdBufRing_x001999F0 {
    SfdBufInf_x001999F0 sup;
    SfdBufDlm_x001999F0 dlm;
    int wtot;
    int rtot;
    SfdRing_x001999F0 ptsque;
} SfdBufRing_x001999F0;
typedef struct SfdBufAring_x001999F0 {
    SfdBufInf_x001999F0 sup;
    SfdBufCur_x001999F0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x001999F0;
typedef struct SfdUoch_x001999F0 {
    struct SfdSj_x001999F0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x001999F0;
typedef struct SfdBufEnt_x001999F0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x001999F0 ring;
        SfdBufAring_x001999F0 aring;
        SfdBufInf_x001999F0 vfrm;
        SfdUoch_x001999F0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x001999F0;
typedef int (*SfdTrnFn_x001999F0)();
typedef struct SfdTrnConfig_x001999F0 {
    SfdTrnFn_x001999F0 *fns[9];
} SfdTrnConfig_x001999F0;
typedef struct SfdMpsPrm_x001999F0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x001999F0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x001999F0;
typedef struct SfdAdxCfg_x001999F0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x001999F0;
typedef void (*SfdAdxStep_x001999F0)(struct SfdPly_x001999F0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x001999F0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x001999F0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x001999F0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x001999F0;
typedef struct SfdAoap_x001999F0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x001999F0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x001999F0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x001999F0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x001999F0 *h);
    void (*setSpeed)(struct SfdPly_x001999F0 *h, int speed);
} SfdAoap_x001999F0;
typedef struct SfainfOut_x001999F0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x001999F0;
typedef struct SfainfList_x001999F0 {
    int nout;
    SfainfOut_x001999F0 out[3];
} SfainfList_x001999F0;
typedef struct SfdTrnSlot_x001999F0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x001999F0 *mps;
        struct SfdMpv_x001999F0 *mpv;
        SfdAdxCtx_x001999F0 *adxt;
        SfdAoap_x001999F0 *aoap;
        SfainfList_x001999F0 *uo;
    } hn;
    SfdTrnFn_x001999F0 *fns;
    SfdBufId_x001999F0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x001999F0;
typedef struct SfdTsum_x001999F0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x001999F0;
typedef struct SfdTmrInf_x001999F0 {
    SfdTsum_x001999F0 tsum[6];
} SfdTmrInf_x001999F0;
int sfd_ReportError_x001999F0(void *sfd, int code) __asm__("func_0018D650");
int SFLIB_CheckHn_x001999F0(void *sfd) __asm__("func_0018D870");
typedef struct SfdSj_x001999F0 SfdSj_x001999F0;
typedef struct SfdSjChunk_x001999F0 {
    char *data;
    int len;
} SfdSjChunk_x001999F0;
typedef struct SfdSjVtbl_x001999F0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001999F0 *sj);
    int (*getUuid)(SfdSj_x001999F0 *sj);
    void (*reset)(SfdSj_x001999F0 *sj);
    void (*getChunk)(SfdSj_x001999F0 *sj, int id, int n, SfdSjChunk_x001999F0 *ck);
    void (*ungetChunk)(SfdSj_x001999F0 *sj, int id, SfdSjChunk_x001999F0 *ck);
    void (*putChunk)(SfdSj_x001999F0 *sj, int id, SfdSjChunk_x001999F0 *ck);
    int (*getNumData)(SfdSj_x001999F0 *sj, int id);
} SfdSjVtbl_x001999F0;
struct SfdSj_x001999F0 {
    SfdSjVtbl_x001999F0 *vtbl;
};
struct SfdSj_x001999F0;
typedef struct M2vErrInf_x001999F0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001999F0;
typedef struct Mpeg2Ext_x001999F0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001999F0;
typedef enum M2vFrameRate_x001999F0 {
    M2V_FRAME_RATE_FORBIDDEN_x001999F0 = 0
} M2vFrameRate_x001999F0;
typedef enum M2vPicType_x001999F0 {
    M2V_PICTYPE_I_x001999F0 = 1,
    M2V_PICTYPE_P_x001999F0 = 2,
    M2V_PICTYPE_B_x001999F0 = 3,
    M2V_PICTYPE_D_x001999F0 = 4
} M2vPicType_x001999F0;
typedef enum M2vPicStruct_x001999F0 {
    M2V_PICSTRUCT_TOP_FIELD_x001999F0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001999F0 = 2,
    M2V_PICSTRUCT_FRAME_x001999F0 = 3
} M2vPicStruct_x001999F0;
typedef enum M2vPicAtrF64_x001999F0 {
    M2V_PICATR_F64_0_x001999F0 = 0
} M2vPicAtrF64_x001999F0;
typedef struct M2vPicAtr_x001999F0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001999F0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x001999F0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001999F0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001999F0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001999F0;
typedef void (*M2vUsrDatFn_x001999F0)(void *obj, int level);
typedef struct M2vUsrSj_x001999F0 {
    struct SfdSj_x001999F0 *sj;
    M2vUsrDatFn_x001999F0 fn;
    void *obj;
} M2vUsrSj_x001999F0;
typedef struct M2vPicUsr_x001999F0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001999F0;
typedef void (*M2vCondFn_x001999F0)();
typedef struct M2vObj_x001999F0 {
    int stat;
    M2vErrInf_x001999F0 err;
    M2vCondFn_x001999F0 cond[16];
    M2vPicAtr_x001999F0 picatr;
    char pad216[64];
    M2vUsrSj_x001999F0 usrsj[4];
    M2vPicUsr_x001999F0 picusr;
    char pad340[12];
    Mpeg2Ext_x001999F0 ext;
    char pad1656[8];
} M2vObj_x001999F0;
extern void M2V_SetErrFunc_x001999F0(M2vObj_x001999F0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x001999F0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x001999F0;
typedef struct sceMpeg_x001999F0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x001999F0 *sys;
} sceMpeg_x001999F0;
typedef enum {
    sceMpegCbError_x001999F0,
    sceMpegCbNodata_x001999F0,
    sceMpegCbStopDMA_x001999F0,
    sceMpegCbRestartDMA_x001999F0,
    sceMpegCbBackground_x001999F0,
    sceMpegCbTimeStamp_x001999F0,
    sceMpegCbStr_x001999F0,
    sceMpegCbNum_x001999F0
} sceMpegCbType_x001999F0;
typedef struct {
    sceMpegCbType_x001999F0 type;
    char *errMessage;
} sceMpegCbDataError_x001999F0;
typedef struct {
    sceMpegCbType_x001999F0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x001999F0;
typedef struct {
    sceMpegCbType_x001999F0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x001999F0;
typedef union {
    sceMpegCbType_x001999F0 type;
    sceMpegCbDataError_x001999F0 error;
    sceMpegCbDataTimeStamp_x001999F0 ts;
    sceMpegCbDataStr_x001999F0 str;
} sceMpegCbData_x001999F0;
typedef int (*sceMpegCallback_x001999F0)(sceMpeg_x001999F0 *mp, sceMpegCbData_x001999F0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x001999F0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x001999F0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x001999F0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x001999F0;
typedef struct {
    _sceMpegPicture_x001999F0 *ref_image;
    _sceMpegPicture_x001999F0 *prev_image;
    _sceMpegPicture_x001999F0 *decode;
    _sceMpegPicture_x001999F0 *image;
} _sceMpegPictureSlot_x001999F0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x001999F0;
typedef void (*_sceMpegMcKernel_x001999F0)(_sceMpegMcFetch_x001999F0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x001999F0 luma_kernel[4];
    _sceMpegMcKernel_x001999F0 chroma_kernel[4];
    _sceMpegMcFetch_x001999F0 luma[4];
    _sceMpegMcFetch_x001999F0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x001999F0;
typedef struct _sceMpegDecoder_x001999F0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x001999F0 callbacks[sceMpegCbNum_x001999F0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x001999F0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x001999F0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x001999F0 slots[3];
    _sceMpegPicture_x001999F0 pictures[9];
    _sceMpegSprBuffer_x001999F0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x001999F0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x001999F0;
typedef struct SfdPlanes_x001999F0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x001999F0;
typedef struct SfdUserData_x001999F0 {
    char data[512];
    int size;
} SfdUserData_x001999F0;
typedef struct SfdRecVideo_x001999F0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x001999F0 stamp;
    SfdUserData_x001999F0 user;
} SfdRecVideo_x001999F0;
typedef struct SfdSlot_x001999F0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x001999F0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001999F0 *blob;
    M2vPicAtr_x001999F0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x001999F0;
typedef struct SfdBufPool_x001999F0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x001999F0 slot[18];
} SfdBufPool_x001999F0;
typedef struct SfdMpvCond_x001999F0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x001999F0;
typedef struct SfdMpvWorkBufs_x001999F0 {
    int w[2];
} SfdMpvWorkBufs_x001999F0;
typedef struct SfdMpvFrameBufs_x001999F0 {
    int w[16];
} SfdMpvFrameBufs_x001999F0;
typedef struct SfdIpuEntry_x001999F0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x001999F0;
typedef struct SfdDmaTag_x001999F0 {
    long long tag;
    long long pad;
} SfdDmaTag_x001999F0;
typedef struct SfdIpuStream_x001999F0 {
    void *base;
    SfdDmaTag_x001999F0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x001999F0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x001999F0;
typedef struct SfdIpuCtl_x001999F0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x001999F0 mpeg;
    SfdIpuStream_x001999F0 stream;
    sceMpegCbDataError_x001999F0 error;
} SfdIpuCtl_x001999F0;
typedef struct SfdPtsComp_x001999F0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x001999F0 ptsent;
} SfdPtsComp_x001999F0;
typedef struct SfdMpv_x001999F0 {
    void *handle;
    SfdMpvCond_x001999F0 cond;
    SfdMpvWorkBufs_x001999F0 work;
    SfdMpvFrameBufs_x001999F0 bufs;
    SfdSlot_x001999F0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x001999F0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x001999F0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x001999F0 planes[2];
    SfdSlot_x001999F0 *first;
    SfdSlot_x001999F0 *second;
    SfdSlot_x001999F0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x001999F0 slots[16];
    SfdBufPool_x001999F0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x001999F0 ipu;
} SfdMpv_x001999F0;
typedef enum SfdPicType_x001999F0 {
    SFD_PICTYPE_I_x001999F0 = 1,
    SFD_PICTYPE_P_x001999F0 = 2,
    SFD_PICTYPE_B_x001999F0 = 3
} SfdPicType_x001999F0;
typedef enum SfdFrmInfF60_x001999F0 {
    SFD_FRMINF_F60_0_x001999F0 = 0
} SfdFrmInfF60_x001999F0;
typedef struct SfdFrameDetail_x001999F0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x001999F0;
typedef struct SfdFrameInfo_x001999F0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x001999F0 picType;
    int time;
    int unit;
    SfdBufFmt_x001999F0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x001999F0 *picUsr;
    SfdFrmInfF60_x001999F0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x001999F0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x001999F0;
typedef struct SfdVfrm_x001999F0 {
    int used;
    int f4;
    SfdFrameInfo_x001999F0 inf;
} SfdVfrm_x001999F0;
typedef struct SfdPly_x001999F0 SfdPly_x001999F0;
typedef struct SfdRec_x001999F0 SfdRec_x001999F0;
typedef struct SfdRecSub_x001999F0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x001999F0;
typedef struct SfdRecSlot_x001999F0 {
    SfdRec_x001999F0 *rec;
    SfdRecSub_x001999F0 sub;
} SfdRecSlot_x001999F0;
typedef struct SfdSysHd_x001999F0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x001999F0;
typedef struct SfdRecSys_x001999F0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x001999F0 syshd;
} SfdRecSys_x001999F0;
typedef struct SfdRecAudio_x001999F0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x001999F0;
struct SfdRec_x001999F0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x001999F0 hdrInf;
    SfdRecSys_x001999F0 sys;
    char pad2616[152];
    SfdRecVideo_x001999F0 video;
    SfdRecAudio_x001999F0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x001999F0 {
    SfdCrePrm_x001999F0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x001999F0 hdr;
    SfdMvInf_x001999F0 mvInf;
    char pad2380[4];
    SfdPlyInf_x001999F0 plyInf;
    SfdErrInf_x001999F0 err;
    int cond[SFD_COND_NUM_x001999F0];
    int cond2[SFD_COND_NUM_x001999F0];
    char pad3364[4];
    SfdTim_x001999F0 tim;
    SfdBufEnt_x001999F0 buf[8];
    SfdVfrm_x001999F0 vfrm[16];
    SfdTrnSlot_x001999F0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x001999F0 mps;
    char pad8944[176];
    SfdMpv_x001999F0 mpv;
    SfdAdxCtx_x001999F0 adxt;
    char pad13680[100];
    SfdAoap_x001999F0 aoap;
    char pad13804[4];
    SfainfList_x001999F0 uo;
    char pad13860[4];
    SfdRecSlot_x001999F0 see;
    SfdTmrInf_x001999F0 tmr;
};
int func_001999F0_x001999F0(void *sfd, SfdMvInf_x001999F0 *out) __asm__("func_001999F0");
/* SFD_GetMvInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdcond.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001999F0_x001999F0(void *sfd, SfdMvInf_x001999F0 *out)
{
    SfdPly_x001999F0 *hn = sfd;
    int r = SFLIB_CheckHn_x001999F0(hn);
    if (r != 0) {
        return sfd_ReportError_x001999F0(0, 0xFF000114);
    }
    *out = hn->mvInf;
    return r;
}
typedef unsigned char u8_x00199AC8;
typedef signed int s32_x00199AC8;
typedef unsigned int u32_x00199AC8;
struct fn_12_2D58C_Copy64_x00199AC8 { u32_x00199AC8 a[16]; };
extern s32_x00199AC8 fn_12_24990_x00199AC8(u32_x00199AC8) __asm__("func_0018D870");
extern s32_x00199AC8 fn_12_24A88_x00199AC8(void *, s32_x00199AC8) __asm__("func_0018D650");
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) __asm__("func_00199AC8");
/* fn_12_2D58C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2D58C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
s32_x00199AC8 func_00199AC8_x00199AC8(u32_x00199AC8 arg0, u32_x00199AC8 arg1) {
    s32_x00199AC8 t0;
    t0 = fn_12_24990_x00199AC8(arg0);
    if (t0 != 0) {
    return fn_12_24A88_x00199AC8(0, 0xFF000000 + 281);
    }
    *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg1 + 0) = *(struct fn_12_2D58C_Copy64_x00199AC8 *)((u8_x00199AC8 *)arg0 + 2380);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199BA0);
s32 func_0018D650_x00199CA8(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00199CA8() __asm__("func_0018D870");
s32 func_00199D28_x00199CA8(s32, s32, s32) __asm__("func_00199D28");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00199CA8");
s32 func_00199CA8_x00199CA8(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0018D870_x00199CA8() != 0) {
        return func_0018D650_x00199CA8(0, 0xFF000117, arg2);
    }
    func_00199D28_x00199CA8(arg0, arg1, arg2);
    return 0;
}
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_00199D28");
void func_00199D28_x00199D28(s32 arg0, s32 arg1, s32 *arg2) {
    s32 *temp_v0;

    temp_v0 = *(s32 **)((u8 *)((arg1 * 0x44) + arg0) + 0x1BE8);
    if (temp_v0 == NULL) {
        goto block_2;
    }
    goto block_5;
block_2:
    *arg2 = 0;
    return;
block_5:
    *arg2 = *temp_v0;
    return;
}
s32 func_00199D58(u8 *arg0, u8 **arg1, s32 *arg2) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00011C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        *arg1 = arg0 + 0x10C;
        *arg2 = *(s32 *)((u8 *)arg0 + 0x108);
    } else {
        *arg1 = NULL;
        *arg2 = 0;
    }
    return 0;
}
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1) __asm__("func_00199DF0");
void func_00199DF0_x00199DF0(u8 *arg0, s32 arg1)
{
 do { *((s32 *) (((u8 *) arg0) + 0)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = 0; } while (0);
}
void func_00199E00(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_00199E08);
void func_0019A010(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0) = 0;
    func_0019A058(arg0 + 4);
    *(s32 *)((u8 *)arg0 + 0x24) = arg1;
    *(s32 *)((u8 *)arg0 + 0x28) = 1;
}
void func_0019A058_x0019A058(u8 *arg0) __asm__("func_0019A058");
void func_0019A058_x0019A058(u8 *arg0)
{
  *((s16 *) (((u8 *) arg0) + 0x1E)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0xC)) = 0; *((s32 *) (((u8 *) arg0) + 0x10)) = 0; *((s32 *) (((u8 *) arg0) + 0x14)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x1C)) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A080);
s32 func_0019A120_x0019A120(u8 *p, s32 t) __asm__("func_0019A120");
s32 func_0019A120_x0019A120(u8 *p, s32 t)
{
    s32 base = *(s32 *)(p + 0x288);
    s32 a = base + *(s32 *)(p + 0x28C);
    s32 b = base + *(s32 *)(p + 0x290);
    s32 r;
    if (t < a) {
        r = a;
    } else if (t < b) {
        r = b;
    } else {
        r = 0x7FFFFFFF;
    }
    return r;
}
s32 func_0019A1C8_x0019A160(s32) __asm__("func_0019A1C8");
extern s32 D_00426A90_x0019A160 __asm__("D_00426A90");
void func_0019A160_x0019A160(void) __asm__("func_0019A160");
void func_0019A160_x0019A160(void)
{
  s32 *var_s0;
  s32 temp_v0;
  s32 var_s1;
  s32 *new_var;
  var_s1 = 7;
  new_var = &D_00426A90_x0019A160;
  var_s0 = (s32 *)((u8 *)new_var + 0x54);
  D_00426A90_x0019A160 += 1;
  do
  {
    temp_v0 = *var_s0;
    var_s0 += 1;
    if (temp_v0 != 0)
    {
      func_0019A1C8_x0019A160(temp_v0);
    }
    var_s1 -= 1;
  }
  while (var_s1 >= 0);
}
void func_0019A1C8(s32 arg0) {
    func_0019A218();
    if (func_001999E0(arg0, 0x47) == 1) {
        func_0019AD80(arg0);
    }
}
s32 func_0019A288_x0019A218() __asm__("func_0019A288");
s32 func_0019A2C0_x0019A218(s32, void *) __asm__("func_0019A2C0");
void func_0019A218_x0019A218(s32 arg0) __asm__("func_0019A218");
void func_0019A218_x0019A218(s32 arg0)
{
  u8 *temp_s1;
  temp_s1 = arg0 + 0xCC0;
  if (func_0019A288_x0019A218(arg0) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x29C)) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x29C))) + (*((s32 *) (((u8 *) temp_s1) + 0x2A0))));
  }
  if (func_0019A2C0_x0019A218(arg0, temp_s1) != 0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x2C0)) = (s32) ((*((s32 *) (((u8 *) temp_s1) + 0x2C0))) + (*((s32 *) (((u8 *) temp_s1) + 0x2A0))));
    asm __volatile__("");
  }
}
s32 func_0019A288_x0019A288(u8 *p) __asm__("func_0019A288");
s32 func_0019A288_x0019A288(u8 *p)
{
    u8 *q = p + 0x94C;
    if (*(s32 *)(p + 0x48) != 4) {
        return 0;
    }
    if (*(s32 *)(p + 0x50) != 0) {
        return 0;
    }
    return *(s32 *)(q + 0x1C) == 0;
}
s32 func_0019A2C0_x0019A2C0(u8 *a0, u8 *a1, s32 a2) __asm__("func_0019A2C0");
s32 func_0019A2C0_x0019A2C0(u8 *a0, u8 *a1, s32 a2)
{
    u8 *p2;
    s32 z;
    u8 *p;

    if (*(s32 *)(p2 = a1 + 0x2C0) == -1) {
        z = 0;
        if (a1) {
            return z;
        } else {
            return 0;
        }
    }
    p = a0 + 0x4C;
    return *(s32 *)p == 4;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A2E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A330);
s32 func_0018D650_x0019A3C8(s32, s32) __asm__("func_0018D650");
s32 func_0019A408_x0019A3C8() __asm__("func_0019A408");
s32 func_0019A3C8_x0019A3C8(s32 arg0) __asm__("func_0019A3C8");
s32 func_0019A3C8_x0019A3C8(s32 arg0)
{
  s32 var_v0;
  s32 new_var;
  var_v0 = func_0019A408_x0019A3C8(arg0);
  if (var_v0 != 0)
  {
    func_0018D650_x0019A3C8(arg0, 0xFF000222);
    var_v0 = 1;
  }
  if (var_v0)
  {
    new_var = var_v0;
    return new_var;
  }
  else
  {
    return var_v0;
  }
}
s32 func_001999E0_x0019A408(s32, s32) __asm__("func_001999E0");
void func_0019A330_x0019A408(s32, s32, s32 *, s32 *) __asm__("func_0019A330");
s32 func_0019A408_x0019A408(s32 a0) __asm__("func_0019A408");
s32 func_0019A408_x0019A408(s32 a0)
{
    s32 n, x, y;

    if (func_001999E0_x0019A408(a0, 6) == 0) {
        return 0;
    }
    n = func_001999E0_x0019A408(a0, 0x33);
    if (n == 0) {
        return 0;
    }
    func_0019A330_x0019A408(a0, a0 + 0xCC0, &x, &y);
    return n < x / y;
}
typedef signed int s32_x0019A488;
typedef unsigned char u8_x0019A488;
typedef struct { u8_x0019A488 pad[0x150]; s32_x0019A488 field150; } Obj_x0019A488;
extern s32_x0019A488 D_00426B28_x0019A488 __asm__("D_00426B28");
extern s32_x0019A488 D_00426B2C_x0019A488 __asm__("D_00426B2C");
s32_x0019A488 func_0017EE78_x0019A488(s32_x0019A488 a, s32_x0019A488 b, s32_x0019A488 c) __asm__("func_0017EE78");
s32_x0019A488 func_0019A488_x0019A488(Obj_x0019A488 *p, s32_x0019A488 a1) __asm__("func_0019A488");
s32_x0019A488 func_0019A488_x0019A488(Obj_x0019A488 *p, s32_x0019A488 a1) {
    s32_x0019A488 r;

    if (p->field150 < 0) {
        return -1;
    }
    r = func_0017EE78_x0019A488(p->field150, a1, 0x57E4);
    D_00426B28_x0019A488 = p->field150;
    D_00426B2C_x0019A488 = r;
    return r;
}
int UTY_MulDiv_x0019A4D8(int a, int b, int c) __asm__("func_0017EE78");
typedef int (*SfdTimeFn_x0019A4D8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019A4D8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019A4D8;
typedef struct SfdTimeRec_x0019A4D8 {
    int valid;
    SfdTimeCode_x0019A4D8 tc;
    int time;
    int unit;
} SfdTimeRec_x0019A4D8;
typedef struct SfdTst_x0019A4D8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019A4D8;
typedef struct SfdSyncTally_x0019A4D8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019A4D8;
typedef struct SfdSyncQueue_x0019A4D8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019A4D8;
typedef struct SfdFieldEntry_x0019A4D8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019A4D8;
typedef struct SfdPtsm_x0019A4D8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019A4D8;
typedef int (*SfdExtClockFn_x0019A4D8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019A4D8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019A4D8 {
    SfdTimeFn_x0019A4D8 timefn[6];
    SfdIsSkipFn_x0019A4D8 isSkipFn;
    SfdTimeCode_x0019A4D8 tc;
    SfdTimeRec_x0019A4D8 state;
    SfdTimeRec_x0019A4D8 best;
    SfdTimeRec_x0019A4D8 tot;
    SfdTimeRec_x0019A4D8 cur;
    SfdTimeRec_x0019A4D8 latest;
    SfdTimeRec_x0019A4D8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019A4D8 tally;
    SfdSyncQueue_x0019A4D8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019A4D8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019A4D8 tst;
    SfdFieldEntry_x0019A4D8 fields[64];
    SfdPtsm_x0019A4D8 ptsm;
    char pad1468[36];
} SfdTim_x0019A4D8;
extern int sftim_v_time_x0019A4D8 __asm__("D_00426B30");
extern int sftim_v_sample_x0019A4D8 __asm__("D_00426B34");
int func_0019A4D8_x0019A4D8(SfdTim_x0019A4D8 *tim, int scale, int *valid) __asm__("func_0019A4D8");
/* SFTIM_GetVideoStartSample: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019A4D8_x0019A4D8(SfdTim_x0019A4D8 *tim, int scale, int *valid)
{
    SfdTimeRec_x0019A4D8 *rec = &tim->vofst;
    SfdTimeRec_x0019A4D8 *fallback = &tim->latest;
    int time;
    int unit;
    int result;
    int ok = rec->valid;
    *valid = ok;
    if (ok != 0) {
        time = rec->time;
        unit = rec->unit;
    } else if (fallback->time >= 0) {
        time = fallback->time;
        unit = fallback->unit;
    } else {
        return -1;
    }
    result = UTY_MulDiv_x0019A4D8(time, scale, unit);
    sftim_v_time_x0019A4D8 = time;
    sftim_v_sample_x0019A4D8 = result;
    return result;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_0019A4D8_0_xxxx;
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019A550");
void func_0019A550_x0019A550(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  u8 *new_var;
 do { *((s32 *) (((u8 *) arg0) + 0x148)) = arg2; new_var = arg0; } while (0);
  new_var2 = ((u8 *) new_var) + 0x144;
  *((s32 *) new_var2) = arg1;
}
typedef unsigned char Uint8_x0019A560;
typedef signed char Sint8_x0019A560;
typedef signed short Sint16_x0019A560;
typedef unsigned int Uint32_x0019A560;
typedef signed int Sint32_x0019A560;
typedef signed long long Sint64_x0019A560;
typedef char Char8_x0019A560;
typedef struct SJ_OBJ_x0019A560 *SJ_x0019A560;
typedef struct {
        Uint8_x0019A560 *data;
        Sint32_x0019A560 len;
} SJCK_x0019A560;
typedef struct {
        Uint8_x0019A560 data[16];
} SJUUID_x0019A560;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019A560 sj);
        const SJUUID_x0019A560 *(*GetUuid)(SJ_x0019A560 sj);
        void (*Reset)(SJ_x0019A560 sj);
        void (*GetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, Sint32_x0019A560 nbyte, SJCK_x0019A560 *ck);
        void (*UngetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, SJCK_x0019A560 *ck);
        void (*PutChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, SJCK_x0019A560 *ck);
        Sint32_x0019A560 (*GetNumData)(SJ_x0019A560 sj, Sint32_x0019A560 id);
        Sint32_x0019A560 (*IsGetChunk)(SJ_x0019A560 sj, Sint32_x0019A560 id, Sint32_x0019A560 nbyte, Sint32_x0019A560 *rbyte);
        void (*EntryErrFunc)(SJ_x0019A560 sj, void (*func)(void *obj, Char8_x0019A560 *msg), void *obj);
} SJ_IF_x0019A560;
struct SJ_OBJ_x0019A560 {
        SJ_IF_x0019A560 *vtbl;
};
typedef struct SFD_OBJ_x0019A560 *SFD_x0019A560;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019A560 rsv1;
        Sint32_x0019A560 rsv2;
} SFUO_CH_x0019A560;
typedef struct {
        Sint32_x0019A560 nch;
        SFUO_CH_x0019A560 ch[3];
} SFUO_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Sint32_x0019A560 (*SetOutPan)(SFD_x0019A560 sfd, Sint32_x0019A560 ch, Sint32_x0019A560 pan);
        Sint32_x0019A560 (*GetOutPan)(SFD_x0019A560 sfd, Sint32_x0019A560 ch);
        Sint32_x0019A560 (*SetOutVol)(SFD_x0019A560 sfd, Sint32_x0019A560 vol);
        Sint32_x0019A560 (*GetOutVol)(SFD_x0019A560 sfd);
        void (*SetSpeed)(SFD_x0019A560 sfd, Sint32_x0019A560 speed);
        Sint32_x0019A560 x18;
} SFAOAP_x0019A560;
typedef struct {
        Uint8_x0019A560 pad0[0xB8];
        Sint32_x0019A560 tottime;
        Sint32_x0019A560 tunit;
        Uint8_x0019A560 padc0[0x150 - 0xC0];
        Sint64_x0019A560 scr_base;
        Sint64_x0019A560 scr_ofst;
        Sint32_x0019A560 pad160;
        Sint32_x0019A560 ctime;
        Sint32_x0019A560 ctime_idx;
        Sint32_x0019A560 ctime_que[32];
        Sint32_x0019A560 tot_last;
        Sint32_x0019A560 pad1F0;
        Sint32_x0019A560 que_wr;
        Sint32_x0019A560 que_rd;
        Sint32_x0019A560 tot_que[32];
} SFCON_x0019A560;
typedef struct {
        Sint32_x0019A560 type;
        Sint32_x0019A560 drop;
        Sint32_x0019A560 hour;
        Sint32_x0019A560 min;
        Sint32_x0019A560 sec;
        Sint32_x0019A560 frm;
        Sint32_x0019A560 frm2;
        Sint16_x0019A560 x1c;
        Sint16_x0019A560 field;
} SFTIM_TC_x0019A560;
typedef struct {
        Sint32_x0019A560 valid;
        SFTIM_TC_x0019A560 tc;
        Sint32_x0019A560 val;
        Sint32_x0019A560 unit;
} SFTIM_TTU_x0019A560;
typedef struct {
        Sint64_x0019A560 pts;
        Uint32_x0019A560 pos;
        Uint32_x0019A560 len;
} SFPTS_ENT_x0019A560;
typedef struct {
        SFPTS_ENT_x0019A560 *ent;
        Sint32_x0019A560 num;
        Sint32_x0019A560 cnt;
        Sint32_x0019A560 wr;
        Sint32_x0019A560 rd;
} SFPTS_QUE_x0019A560;
typedef struct {
        Sint32_x0019A560 raw[0x20];
} SFD_VFRM_INF_x0019A560;
typedef struct {
        void *frm;
        Sint32_x0019A560 x04;
        SFD_VFRM_INF_x0019A560 inf;
} SFD_VFRM_x0019A560;
typedef struct {
        Sint32_x0019A560 kind;
        SJ_x0019A560 sj;
        Uint32_x0019A560 ofst;
        Sint32_x0019A560 size;
        Sint32_x0019A560 xsize;
        Sint32_x0019A560 x14;
} SFBUF_SUP_x0019A560;
typedef struct {
        SFBUF_SUP_x0019A560 sup;
        Uint8_x0019A560 *dlm_pos;
        Sint32_x0019A560 dlm_len;
        Sint32_x0019A560 wtot;
        Sint32_x0019A560 rtot;
        SFPTS_QUE_x0019A560 ptsque;
} SFBUF_RING_x0019A560;
typedef struct {
        Sint32_x0019A560 mode;
        Sint32_x0019A560 used;
        Sint32_x0019A560 prepflg;
        Sint32_x0019A560 termflg;
        union {
                SFBUF_RING_x0019A560 ring;
                struct {
                        Uint32_x0019A560 adr;
                        Sint32_x0019A560 size;
                        Sint32_x0019A560 x18;
                        Sint32_x0019A560 x1c;
                        SFD_VFRM_x0019A560 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019A560 adr;
                        Sint32_x0019A560 size;
                        Sint32_x0019A560 rsv[7];
                        Sint32_x0019A560 rsv2[3];
                } aout;
                SFUO_CH_x0019A560 uoch[3];
        } u;
        Sint32_x0019A560 in_tr;
        Sint32_x0019A560 out_tr;
        Sint32_x0019A560 rsv[8];
} SFBUF_WORK_x0019A560;
typedef Sint32_x0019A560 (*SFD_TR_FUNC_x0019A560)();
typedef struct {
        Sint32_x0019A560 prepflg;
        Sint32_x0019A560 termflg;
        void *hn;
        SFD_TR_FUNC_x0019A560 *trif;
        Sint32_x0019A560 bufin;
        Sint32_x0019A560 bufout;
        Sint32_x0019A560 bufout2;
        Sint32_x0019A560 bufout3;
        Sint32_x0019A560 x20;
        Uint8_x0019A560 pad24[0x44 - 0x24];
} SFD_TR_x0019A560;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019A560 cwidth;
        Sint16_x0019A560 ywidth;
} SFMPV_PLANE_x0019A560;
typedef struct {
        void *buf;
        Sint32_x0019A560 len;
} SFMPV_PICUSR_x0019A560;
typedef struct {
        Sint32_x0019A560 stat;
        Sint32_x0019A560 lock;
        void *buf;
        SFTIM_TTU_x0019A560 ttu;
        Sint32_x0019A560 ftime;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 ndct;
        Sint32_x0019A560 nbyte;
        Sint32_x0019A560 gopno;
        Sint32_x0019A560 x4c;
        Sint32_x0019A560 x50;
        SFMPV_PICUSR_x0019A560 *picusr;
        Sint32_x0019A560 pa_width;
        Sint32_x0019A560 pa_height;
        Sint32_x0019A560 pa_mb_width;
        Sint32_x0019A560 pa_mb_height;
        Sint32_x0019A560 pa_frame_rate;
        Sint32_x0019A560 tmpref;
        Sint32_x0019A560 pa_pic_type;
        Sint32_x0019A560 pa_tc_drop;
        Sint32_x0019A560 pa_tc_hour;
        Sint32_x0019A560 pa_tc_min;
        Sint32_x0019A560 pa_tc_sec;
        Sint32_x0019A560 pa_tc_pic;
        Sint32_x0019A560 x88;
        Sint32_x0019A560 x8c;
        Sint32_x0019A560 pa_x90[3];
        Sint32_x0019A560 pa_x9c[3];
        Sint16_x0019A560 pa_xa8;
        Sint16_x0019A560 pa_xaa;
        Sint8_x0019A560 pa_xac;
        Sint8_x0019A560 pa_xad;
        Sint8_x0019A560 pa_xae;
        Sint8_x0019A560 pa_xaf;
        Sint8_x0019A560 pa_xb0;
        Sint8_x0019A560 pa_xb1;
        Sint8_x0019A560 pa_xb2;
        Sint8_x0019A560 pa_xb3;
        Sint8_x0019A560 pa_xb4;
        Sint8_x0019A560 pa_xb5;
        Sint8_x0019A560 pa_xb6;
        Sint8_x0019A560 pa_xb7;
        Sint8_x0019A560 pa_xb8;
        Sint8_x0019A560 pa_xb9;
        Sint8_x0019A560 pa_xba;
        Sint8_x0019A560 pa_xbb;
        Sint8_x0019A560 pa_xbc;
        Uint8_x0019A560 padbd[0xD8 - 0xBD];
        Sint64_x0019A560 pts;
} SFMPV_FRM_x0019A560;
typedef struct {
        Sint32_x0019A560 cwidth;
        Sint32_x0019A560 cheight;
        Sint32_x0019A560 width;
        Sint32_x0019A560 height;
        Sint32_x0019A560 x10;
        Sint32_x0019A560 max_width;
        Sint32_x0019A560 max_height;
        Sint32_x0019A560 nfrm;
        Sint32_x0019A560 x20;
} SFMPV_PARA_x0019A560;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019A560 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019A560 *curfrm;
        Sint32_x0019A560 picstat;
        Sint32_x0019A560 dlmmask;
        Sint32_x0019A560 termflg;
        Sint32_x0019A560 gopstat;
        Sint32_x0019A560 nskip;
        Sint32_x0019A560 nconcat;
        Uint8_x0019A560 picatr[0x80];
        Sint32_x0019A560 last_ngop;
        Sint32_x0019A560 newgop;
        Sint32_x0019A560 vbvsiz;
        Sint32_x0019A560 pts_tmpref;
        Sint32_x0019A560 pts_ofst;
        Sint32_x0019A560 pts_max;
        Sint32_x0019A560 pad124;
        SFPTS_ENT_x0019A560 ptsent;
        Sint32_x0019A560 refidx[2];
        SFMPV_PLANE_x0019A560 rfbuf[2];
        SFMPV_FRM_x0019A560 *ref[2];
        SFMPV_FRM_x0019A560 *pendfrm;
        Sint32_x0019A560 skipret;
        Sint32_x0019A560 dlmwait;
        Sint32_x0019A560 tmpref_adj;
        Sint32_x0019A560 nfrm;
        Sint32_x0019A560 pad17c;
        SFMPV_FRM_x0019A560 frm[16];
        void *picusr_buf;
        Sint32_x0019A560 picusr_num;
        Sint32_x0019A560 picusr_siz;
        Uint8_x0019A560 *picusr_dat;
        Sint32_x0019A560 picusr_len;
        SFMPV_PICUSR_x0019A560 picusr[16];
        Sint32_x0019A560 pad1014;
        Sint64_x0019A560 pts;
} SFMPV_WORK_x0019A560;
typedef struct {
        Sint32_x0019A560 raw[0x2A];
} SFD_PLYINF_x0019A560 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019A560 code);
        void *obj;
        Sint32_x0019A560 code;
        Sint32_x0019A560 x0c;
        Sint32_x0019A560 x10;
} SFLIB_ERRINF_x0019A560;
typedef struct {
        Sint32_x0019A560 codec;
        Sint32_x0019A560 layer;
        Sint32_x0019A560 chnum;
        Sint32_x0019A560 smphz;
} SFHDS_AUD_x0019A560;
typedef struct {
        Sint32_x0019A560 codec;
        Sint32_x0019A560 bitrate;
        Sint32_x0019A560 picw;
        Sint32_x0019A560 pich;
        Sint32_x0019A560 picrate;
        Sint32_x0019A560 ftr_eff;
        Sint32_x0019A560 ftr_coltype;
        Sint32_x0019A560 ftr_pictype;
        Sint32_x0019A560 ftr_fixflg;
        Sint32_x0019A560 ftr_shcfixflg;
        Sint32_x0019A560 ftr_expand;
        Sint32_x0019A560 ftr_gopn;
        Sint32_x0019A560 ftr_gopm;
} SFHDS_VID_x0019A560;
typedef struct {
        Sint32_x0019A560 valid;
        Sint32_x0019A560 ver_major;
        Sint32_x0019A560 ver_minor;
        Sint32_x0019A560 byterate;
        Sint32_x0019A560 hdrsiz;
        Sint32_x0019A560 packtype;
        Sint32_x0019A560 pketsizlen;
        Sint32_x0019A560 packsiz;
        Sint32_x0019A560 numelem_tot;
        Sint32_x0019A560 numelem_aud;
        Sint32_x0019A560 numelem_vid;
        Sint32_x0019A560 numelem_prv;
        Sint32_x0019A560 maxplylen_aud;
        Sint32_x0019A560 maxplylen_vid;
        Sint32_x0019A560 maxfrmnum;
        Sint32_x0019A560 stmid_prv1;
        Sint32_x0019A560 stmid_prv2;
        Sint32_x0019A560 stmid_aud;
        Sint32_x0019A560 stmid_vid;
        SFHDS_AUD_x0019A560 aud;
        SFHDS_VID_x0019A560 vid;
        Sint32_x0019A560 rawsiz;
        Uint8_x0019A560 raw[0x800];
} SFHDS_FHD_x0019A560;
typedef struct {
        Uint8_x0019A560 data[2][0xB0];
        Sint32_x0019A560 len[2];
} SFSEE_SYSHD_x0019A560;
typedef struct {
        Sint32_x0019A560 analyzed;
        Sint32_x0019A560 ncount;
        Sint32_x0019A560 tscale;
        Sint32_x0019A560 nvid;
        Sint32_x0019A560 naud;
        Sint32_x0019A560 pad14;
        Sint64_x0019A560 scr_base;
        Sint64_x0019A560 pts_min;
        Sint32_x0019A560 stmid_vid;
        Sint32_x0019A560 stmid_aud;
        SFSEE_SYSHD_x0019A560 syshd;
} SFSEE_SHDR_x0019A560;
typedef struct {
        Sint32_x0019A560 analyzed;
        Sint32_x0019A560 ncount;
        Sint32_x0019A560 tscale;
        SFHDS_FHD_x0019A560 fhd;
        SFSEE_SHDR_x0019A560 shdr;
        Uint8_x0019A560 pada38[0xAD0 - 0xA38];
        Sint32_x0019A560 a1hdr;
        Sint32_x0019A560 a1ncount;
        Sint32_x0019A560 a1tscale;
        Uint8_x0019A560 padadc[0xD0C - 0xADC];
        Sint32_x0019A560 a2hdr;
        Sint32_x0019A560 a2ncount;
        Sint32_x0019A560 a2tscale;
        Uint8_x0019A560 padd18[0xDA8 - 0xD18];
        Sint32_x0019A560 rate;
        Sint32_x0019A560 fsize_est;
        Sint32_x0019A560 tot_est;
        Sint32_x0019A560 tunit_est;
        Sint32_x0019A560 av_a;
        Sint32_x0019A560 av_b;
        Sint32_x0019A560 paddc0;
        Sint32_x0019A560 fsize;
        Sint32_x0019A560 tottime;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 byterate;
        Sint32_x0019A560 seekpos;
} SFSEE_WORK_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Sint32_x0019A560 pos;
        Sint32_x0019A560 x08;
} SFSEE_REQ_x0019A560;
typedef struct {
        Sint32_x0019A560 bsize;
        Sint32_x0019A560 xsize;
        void *buf;
        Sint32_x0019A560 maxnch;
        Sint32_x0019A560 x10;
        Sint32_x0019A560 worksize;
        void *work;
} SFADXT_PARA_x0019A560;
typedef struct {
        void *adxt;
        SJ_x0019A560 sj;
        SFADXT_PARA_x0019A560 para;
        Sint32_x0019A560 tcount;
        Sint32_x0019A560 tunit;
        Sint32_x0019A560 pause;
        Sint32_x0019A560 discard;
        Sint32_x0019A560 seekflg;
        Sint32_x0019A560 smplofst;
        void (*func)(SFD_x0019A560 sfd, Uint8_x0019A560 *data, Sint32_x0019A560 len, Sint32_x0019A560 *nbyte);
        Sint32_x0019A560 x40;
        Sint32_x0019A560 svrfreq;
        Sint32_x0019A560 totbyte;
        Sint32_x0019A560 x4c;
} SFADXT_WORK_x0019A560;
typedef struct {
        SFSEE_WORK_x0019A560 *wk;
        SFSEE_REQ_x0019A560 req;
} SFSEE_HN_x0019A560;
typedef struct {
        Sint32_x0019A560 x00;
        Uint32_x0019A560 adr;
        Sint32_x0019A560 size[7];
        Sint32_x0019A560 x24;
        Sint32_x0019A560 unit;
        Sint32_x0019A560 x2c;
        Sint32_x0019A560 x30;
        Sint32_x0019A560 x34;
        Sint32_x0019A560 x38;
        void *hnwork;
        Sint32_x0019A560 hnwksiz;
} SFD_CREPRM_x0019A560;
typedef struct {
        void *x00;
        Sint32_x0019A560 x04;
        Sint32_x0019A560 x08;
} SFPLY_PTSM_x0019A560;
typedef struct {
        Sint64_x0019A560 sum;
        Sint64_x0019A560 min;
        Sint64_x0019A560 max;
        Sint32_x0019A560 cnt;
} SFTMR_TSUM_x0019A560;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019A560 nvid;
        Sint32_x0019A560 naud;
        Sint32_x0019A560 x0c;
        Sint64_x0019A560 pts_min;
        Sint64_x0019A560 pts_min2;
        Sint32_x0019A560 concat_cnt;
        Sint32_x0019A560 last_vid;
        Sint32_x0019A560 last_aud;
        Sint32_x0019A560 first_vid;
        Sint32_x0019A560 first_aud;
        Sint32_x0019A560 cur_vid;
        Sint32_x0019A560 cur_aud;
        Sint32_x0019A560 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019A560 stmid);
        void *outobj;
        Sint32_x0019A560 skip;
        Sint32_x0019A560 x15c;
        Sint32_x0019A560 x160;
        Sint32_x0019A560 x164;
} SFMPS_WORK_x0019A560;
typedef struct SFD_OBJ_x0019A560 {
        SFD_CREPRM_x0019A560 prm;
        Sint32_x0019A560 chg_flg;
        Sint32_x0019A560 stat;
        Sint32_x0019A560 req;
        Sint32_x0019A560 pause_sw;
        Sint32_x0019A560 pause_cnt;
        Uint8_x0019A560 pad58[0x74 - 0x58];
        Sint32_x0019A560 pad74;
        SFHDS_FHD_x0019A560 fhd;
        Sint32_x0019A560 x90c;
        Sint32_x0019A560 x910;
        Sint32_x0019A560 x914;
        Sint32_x0019A560 x918;
        Sint32_x0019A560 x91c;
        Sint32_x0019A560 picrate;
        Sint32_x0019A560 x924;
        Sint32_x0019A560 x928;
        Sint32_x0019A560 x92c;
        Sint32_x0019A560 numelem_aud;
        Sint32_x0019A560 numelem_vid;
        Sint32_x0019A560 numelem_prv;
        Sint32_x0019A560 x93c;
        Sint32_x0019A560 x940;
        Sint32_x0019A560 x944;
        Sint32_x0019A560 x948;
        Sint32_x0019A560 x94c;
        SFD_PLYINF_x0019A560 plyinf;
        SFLIB_ERRINF_x0019A560 err;
        Sint32_x0019A560 cond[100];
        Sint32_x0019A560 cond_def[100];
        Uint8_x0019A560 padD24[4];
        SFCON_x0019A560 con;
        Uint8_x0019A560 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019A560))];
        Uint8_x0019A560 tst[0x1C0];
        Uint8_x0019A560 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019A560 ptsm;
        Uint8_x0019A560 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019A560 buf[8];
        SFD_VFRM_x0019A560 vfrm[16];
        SFD_TR_x0019A560 tr[9];
        Sint32_x0019A560 pad218c;
        SFMPS_WORK_x0019A560 mps;
        Uint8_x0019A560 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019A560 mpv;
        SFADXT_WORK_x0019A560 adxt;
        Uint8_x0019A560 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019A560 aoap;
        SFUO_x0019A560 uo_tbl;
        Sint32_x0019A560 pad34c4;
        SFSEE_HN_x0019A560 see;
        SFTMR_TSUM_x0019A560 tsum[6];
} SFD_OBJ_x0019A560;
Sint32_x0019A560 SFLIB_SetErr_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 code) __asm__("func_0018D650");
Sint32_x0019A560 SFLIB_CheckHn_x0019A560(SFD_x0019A560 sfd) __asm__("func_0018D870");
Sint32_x0019A560 SFTIM_GetTimeSub_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale) __asm__("func_0019A5D8");
Sint32_x0019A560 func_0019A560_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale) __asm__("func_0019A560");
/* SFD_GetTime: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019A560 func_0019A560_x0019A560(SFD_x0019A560 sfd, Sint32_x0019A560 *ncount, Sint32_x0019A560 *tscale)
{
        if (SFLIB_CheckHn_x0019A560(sfd) != 0) {
                return SFLIB_SetErr_x0019A560(0, 0xFF000121);
        }
        return SFTIM_GetTimeSub_x0019A560(sfd, ncount, tscale);
}
s32 func_0017EE78_x0019A5D8(s32, s32, s32) __asm__("func_0017EE78");
s32 func_0019A700_x0019A5D8() __asm__("func_0019A700");
s32 func_0019A5D8_x0019A5D8(u8 *arg0, s32 *arg1, s32 *arg2) __asm__("func_0019A5D8");
s32 func_0019A5D8_x0019A5D8(u8 *arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_a1;
  s32 var_v0;
  u8 *temp_s1;
  u8 *temp_s3;
  temp_s1 = arg0 + 0xDD8;
  temp_s3 = arg0 + 0xCC0;
  var_v0 = func_0019A700_x0019A5D8(arg0, arg1, arg2);
  temp_a1 = *arg2;
  if (temp_a1 != 1)
  {
    if (!(temp_a1 != (*((s32 *) (((u8 *) temp_s3) + 0x148)))))
    {
      *arg1 += *((s32 *) (((u8 *) temp_s3) + 0x144));
    }
    else
      if ((*((s32 *) (((u8 *) arg0) + 0xDD8))) != 0)
    {
      *arg1 += func_0017EE78_x0019A5D8(*((s32 *) (((u8 *) temp_s1) + 0x24)), temp_a1, *((s32 *) (((u8 *) temp_s1) + 0x28)));
    }
    return var_v0;
  }
}
struct SfdSj_x0019A688;
struct SfdRecSlot_x0019A688;
struct SfdRec_x0019A688;
struct SfdMpvCond_x0019A688;
struct SfdPlanes_x0019A688;
struct SfdFrameInfo_x0019A688;
struct SfdPly_x0019A688;
typedef int (*SfdTimeFn_x0019A688)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019A688 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019A688;
typedef struct SfdTimeRec_x0019A688 {
    int valid;
    SfdTimeCode_x0019A688 tc;
    int time;
    int unit;
} SfdTimeRec_x0019A688;
typedef struct SfdTst_x0019A688 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019A688;
typedef struct SfdSyncTally_x0019A688 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019A688;
typedef struct SfdSyncQueue_x0019A688 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019A688;
typedef struct SfdFieldEntry_x0019A688 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019A688;
typedef struct SfdPtsm_x0019A688 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019A688;
typedef struct SfdHdrAudio_x0019A688 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0019A688;
typedef struct SfdHdrMux_x0019A688 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0019A688;
typedef struct SfdHdrVideo_x0019A688 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0019A688;
typedef struct SfdHdrInf_x0019A688 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0019A688 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0019A688 audio;
    SfdHdrVideo_x0019A688 video;
    int size;
    char data[2048];
} SfdHdrInf_x0019A688;
typedef struct SfdMvInf_x0019A688 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0019A688;
typedef struct SfdPlyInf_x0019A688 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0019A688;
typedef void (*SfdErrFn_x0019A688)(void *obj, int code);
typedef struct SfdErrInf_x0019A688 {
    SfdErrFn_x0019A688 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0019A688;
typedef int (*SfdExtClockFn_x0019A688)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019A688)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019A688 {
    SfdTimeFn_x0019A688 timefn[6];
    SfdIsSkipFn_x0019A688 isSkipFn;
    SfdTimeCode_x0019A688 tc;
    SfdTimeRec_x0019A688 state;
    SfdTimeRec_x0019A688 best;
    SfdTimeRec_x0019A688 tot;
    SfdTimeRec_x0019A688 cur;
    SfdTimeRec_x0019A688 latest;
    SfdTimeRec_x0019A688 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019A688 tally;
    SfdSyncQueue_x0019A688 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019A688 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019A688 tst;
    SfdFieldEntry_x0019A688 fields[64];
    SfdPtsm_x0019A688 ptsm;
    char pad1468[36];
} SfdTim_x0019A688;
enum {
    SFD_COND_VIDEO_x0019A688 = 5,
    SFD_COND_AUDIO_x0019A688 = 6,
    SFD_COND_KEEPSUP_x0019A688 = 8,
    SFD_COND_SYNCMODE_x0019A688 = 15,
    SFD_COND_ETIME_x0019A688 = 20,
    SFD_COND_ETUNIT_x0019A688 = 21,
    SFD_COND_LNKSTM_x0019A688 = 49,
    SFD_COND_SUPPLY_END_x0019A688 = 56,
    SFD_COND_DECODE_END_x0019A688 = 57,
    SFD_COND_DEMUX_SPLIT_x0019A688 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0019A688 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0019A688 = 80,
    SFD_COND_SYSHD_FN_x0019A688 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0019A688 = 86,
    SFD_COND_NUM_x0019A688 = 100
};
typedef enum SfdBufFmt_x0019A688 {
    SFD_BUFFMT_0_x0019A688 = 0
} SfdBufFmt_x0019A688;
typedef enum SfdBufId_x0019A688 {
    SFD_BUF_NONE_x0019A688 = 8
} SfdBufId_x0019A688;
typedef struct SfdCrePrm_x0019A688 {
    struct SfdTrnConfig_x0019A688 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0019A688 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0019A688;
typedef struct SfdItem_x0019A688 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0019A688;
typedef struct SfdRing_x0019A688 {
    SfdItem_x0019A688 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0019A688;
typedef struct SfdBufInf_x0019A688 {
    char *data;
    struct SfdSj_x0019A688 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0019A688;
typedef struct SfdBufCur_x0019A688 {
    char *pos;
    int len;
} SfdBufCur_x0019A688;
typedef struct SfdBufDlm_x0019A688 {
    char *pos;
    char *end;
} SfdBufDlm_x0019A688;
typedef struct SfdBufRing_x0019A688 {
    SfdBufInf_x0019A688 sup;
    SfdBufDlm_x0019A688 dlm;
    int wtot;
    int rtot;
    SfdRing_x0019A688 ptsque;
} SfdBufRing_x0019A688;
typedef struct SfdBufAring_x0019A688 {
    SfdBufInf_x0019A688 sup;
    SfdBufCur_x0019A688 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0019A688;
typedef struct SfdUoch_x0019A688 {
    struct SfdSj_x0019A688 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0019A688;
typedef struct SfdBufEnt_x0019A688 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0019A688 ring;
        SfdBufAring_x0019A688 aring;
        SfdBufInf_x0019A688 vfrm;
        SfdUoch_x0019A688 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0019A688;
typedef int (*SfdTrnFn_x0019A688)();
typedef struct SfdTrnConfig_x0019A688 {
    SfdTrnFn_x0019A688 *fns[9];
} SfdTrnConfig_x0019A688;
typedef struct SfdMpsPrm_x0019A688 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0019A688 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0019A688;
typedef struct SfdAdxCfg_x0019A688 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0019A688;
typedef void (*SfdAdxStep_x0019A688)(struct SfdPly_x0019A688 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0019A688 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0019A688 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0019A688 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0019A688;
typedef struct SfdAoap_x0019A688 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0019A688 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0019A688 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0019A688 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0019A688 *h);
    void (*setSpeed)(struct SfdPly_x0019A688 *h, int speed);
} SfdAoap_x0019A688;
typedef struct SfainfOut_x0019A688 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019A688;
typedef struct SfainfList_x0019A688 {
    int nout;
    SfainfOut_x0019A688 out[3];
} SfainfList_x0019A688;
typedef struct SfdTrnSlot_x0019A688 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0019A688 *mps;
        struct SfdMpv_x0019A688 *mpv;
        SfdAdxCtx_x0019A688 *adxt;
        SfdAoap_x0019A688 *aoap;
        SfainfList_x0019A688 *uo;
    } hn;
    SfdTrnFn_x0019A688 *fns;
    SfdBufId_x0019A688 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0019A688;
typedef struct SfdTsum_x0019A688 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0019A688;
typedef struct SfdTmrInf_x0019A688 {
    SfdTsum_x0019A688 tsum[6];
} SfdTmrInf_x0019A688;
int sfd_ReportError_x0019A688(void *sfd, int code) __asm__("func_0018D650");
int SFLIB_CheckHn_x0019A688(void *sfd) __asm__("func_0018D870");
typedef struct SfdSj_x0019A688 SfdSj_x0019A688;
typedef struct SfdSjChunk_x0019A688 {
    char *data;
    int len;
} SfdSjChunk_x0019A688;
typedef struct SfdSjVtbl_x0019A688 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0019A688 *sj);
    int (*getUuid)(SfdSj_x0019A688 *sj);
    void (*reset)(SfdSj_x0019A688 *sj);
    void (*getChunk)(SfdSj_x0019A688 *sj, int id, int n, SfdSjChunk_x0019A688 *ck);
    void (*ungetChunk)(SfdSj_x0019A688 *sj, int id, SfdSjChunk_x0019A688 *ck);
    void (*putChunk)(SfdSj_x0019A688 *sj, int id, SfdSjChunk_x0019A688 *ck);
    int (*getNumData)(SfdSj_x0019A688 *sj, int id);
} SfdSjVtbl_x0019A688;
struct SfdSj_x0019A688 {
    SfdSjVtbl_x0019A688 *vtbl;
};
struct SfdSj_x0019A688;
typedef struct M2vErrInf_x0019A688 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0019A688;
typedef struct Mpeg2Ext_x0019A688 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0019A688;
typedef enum M2vFrameRate_x0019A688 {
    M2V_FRAME_RATE_FORBIDDEN_x0019A688 = 0
} M2vFrameRate_x0019A688;
typedef enum M2vPicType_x0019A688 {
    M2V_PICTYPE_I_x0019A688 = 1,
    M2V_PICTYPE_P_x0019A688 = 2,
    M2V_PICTYPE_B_x0019A688 = 3,
    M2V_PICTYPE_D_x0019A688 = 4
} M2vPicType_x0019A688;
typedef enum M2vPicStruct_x0019A688 {
    M2V_PICSTRUCT_TOP_FIELD_x0019A688 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0019A688 = 2,
    M2V_PICSTRUCT_FRAME_x0019A688 = 3
} M2vPicStruct_x0019A688;
typedef enum M2vPicAtrF64_x0019A688 {
    M2V_PICATR_F64_0_x0019A688 = 0
} M2vPicAtrF64_x0019A688;
typedef struct M2vPicAtr_x0019A688 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0019A688 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0019A688 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0019A688 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0019A688 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0019A688;
typedef void (*M2vUsrDatFn_x0019A688)(void *obj, int level);
typedef struct M2vUsrSj_x0019A688 {
    struct SfdSj_x0019A688 *sj;
    M2vUsrDatFn_x0019A688 fn;
    void *obj;
} M2vUsrSj_x0019A688;
typedef struct M2vPicUsr_x0019A688 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0019A688;
typedef void (*M2vCondFn_x0019A688)();
typedef struct M2vObj_x0019A688 {
    int stat;
    M2vErrInf_x0019A688 err;
    M2vCondFn_x0019A688 cond[16];
    M2vPicAtr_x0019A688 picatr;
    char pad216[64];
    M2vUsrSj_x0019A688 usrsj[4];
    M2vPicUsr_x0019A688 picusr;
    char pad340[12];
    Mpeg2Ext_x0019A688 ext;
    char pad1656[8];
} M2vObj_x0019A688;
extern void M2V_SetErrFunc_x0019A688(M2vObj_x0019A688 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0019A688 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0019A688;
typedef struct sceMpeg_x0019A688 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0019A688 *sys;
} sceMpeg_x0019A688;
typedef enum {
    sceMpegCbError_x0019A688,
    sceMpegCbNodata_x0019A688,
    sceMpegCbStopDMA_x0019A688,
    sceMpegCbRestartDMA_x0019A688,
    sceMpegCbBackground_x0019A688,
    sceMpegCbTimeStamp_x0019A688,
    sceMpegCbStr_x0019A688,
    sceMpegCbNum_x0019A688
} sceMpegCbType_x0019A688;
typedef struct {
    sceMpegCbType_x0019A688 type;
    char *errMessage;
} sceMpegCbDataError_x0019A688;
typedef struct {
    sceMpegCbType_x0019A688 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0019A688;
typedef struct {
    sceMpegCbType_x0019A688 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0019A688;
typedef union {
    sceMpegCbType_x0019A688 type;
    sceMpegCbDataError_x0019A688 error;
    sceMpegCbDataTimeStamp_x0019A688 ts;
    sceMpegCbDataStr_x0019A688 str;
} sceMpegCbData_x0019A688;
typedef int (*sceMpegCallback_x0019A688)(sceMpeg_x0019A688 *mp, sceMpegCbData_x0019A688 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0019A688 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0019A688;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0019A688;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0019A688;
typedef struct {
    _sceMpegPicture_x0019A688 *ref_image;
    _sceMpegPicture_x0019A688 *prev_image;
    _sceMpegPicture_x0019A688 *decode;
    _sceMpegPicture_x0019A688 *image;
} _sceMpegPictureSlot_x0019A688;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0019A688;
typedef void (*_sceMpegMcKernel_x0019A688)(_sceMpegMcFetch_x0019A688 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0019A688 luma_kernel[4];
    _sceMpegMcKernel_x0019A688 chroma_kernel[4];
    _sceMpegMcFetch_x0019A688 luma[4];
    _sceMpegMcFetch_x0019A688 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0019A688;
typedef struct _sceMpegDecoder_x0019A688 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0019A688 callbacks[sceMpegCbNum_x0019A688];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0019A688 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0019A688 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0019A688 slots[3];
    _sceMpegPicture_x0019A688 pictures[9];
    _sceMpegSprBuffer_x0019A688 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0019A688 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0019A688;
typedef struct SfdPlanes_x0019A688 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0019A688;
typedef struct SfdUserData_x0019A688 {
    char data[512];
    int size;
} SfdUserData_x0019A688;
typedef struct SfdRecVideo_x0019A688 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0019A688 stamp;
    SfdUserData_x0019A688 user;
} SfdRecVideo_x0019A688;
typedef struct SfdSlot_x0019A688 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0019A688 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019A688 *blob;
    M2vPicAtr_x0019A688 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0019A688;
typedef struct SfdBufPool_x0019A688 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0019A688 slot[18];
} SfdBufPool_x0019A688;
typedef struct SfdMpvCond_x0019A688 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0019A688;
typedef struct SfdMpvWorkBufs_x0019A688 {
    int w[2];
} SfdMpvWorkBufs_x0019A688;
typedef struct SfdMpvFrameBufs_x0019A688 {
    int w[16];
} SfdMpvFrameBufs_x0019A688;
typedef struct SfdIpuEntry_x0019A688 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0019A688;
typedef struct SfdDmaTag_x0019A688 {
    long long tag;
    long long pad;
} SfdDmaTag_x0019A688;
typedef struct SfdIpuStream_x0019A688 {
    void *base;
    SfdDmaTag_x0019A688 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0019A688 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0019A688;
typedef struct SfdIpuCtl_x0019A688 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0019A688 mpeg;
    SfdIpuStream_x0019A688 stream;
    sceMpegCbDataError_x0019A688 error;
} SfdIpuCtl_x0019A688;
typedef struct SfdPtsComp_x0019A688 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0019A688 ptsent;
} SfdPtsComp_x0019A688;
typedef struct SfdMpv_x0019A688 {
    void *handle;
    SfdMpvCond_x0019A688 cond;
    SfdMpvWorkBufs_x0019A688 work;
    SfdMpvFrameBufs_x0019A688 bufs;
    SfdSlot_x0019A688 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0019A688 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0019A688 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0019A688 planes[2];
    SfdSlot_x0019A688 *first;
    SfdSlot_x0019A688 *second;
    SfdSlot_x0019A688 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0019A688 slots[16];
    SfdBufPool_x0019A688 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0019A688 ipu;
} SfdMpv_x0019A688;
typedef enum SfdPicType_x0019A688 {
    SFD_PICTYPE_I_x0019A688 = 1,
    SFD_PICTYPE_P_x0019A688 = 2,
    SFD_PICTYPE_B_x0019A688 = 3
} SfdPicType_x0019A688;
typedef enum SfdFrmInfF60_x0019A688 {
    SFD_FRMINF_F60_0_x0019A688 = 0
} SfdFrmInfF60_x0019A688;
typedef struct SfdFrameDetail_x0019A688 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0019A688;
typedef struct SfdFrameInfo_x0019A688 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0019A688 picType;
    int time;
    int unit;
    SfdBufFmt_x0019A688 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019A688 *picUsr;
    SfdFrmInfF60_x0019A688 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0019A688 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0019A688;
typedef struct SfdVfrm_x0019A688 {
    int used;
    int f4;
    SfdFrameInfo_x0019A688 inf;
} SfdVfrm_x0019A688;
typedef struct SfdPly_x0019A688 SfdPly_x0019A688;
typedef struct SfdRec_x0019A688 SfdRec_x0019A688;
typedef struct SfdRecSub_x0019A688 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0019A688;
typedef struct SfdRecSlot_x0019A688 {
    SfdRec_x0019A688 *rec;
    SfdRecSub_x0019A688 sub;
} SfdRecSlot_x0019A688;
typedef struct SfdSysHd_x0019A688 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0019A688;
typedef struct SfdRecSys_x0019A688 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0019A688 syshd;
} SfdRecSys_x0019A688;
typedef struct SfdRecAudio_x0019A688 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0019A688;
struct SfdRec_x0019A688 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0019A688 hdrInf;
    SfdRecSys_x0019A688 sys;
    char pad2616[152];
    SfdRecVideo_x0019A688 video;
    SfdRecAudio_x0019A688 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0019A688 {
    SfdCrePrm_x0019A688 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0019A688 hdr;
    SfdMvInf_x0019A688 mvInf;
    char pad2380[4];
    SfdPlyInf_x0019A688 plyInf;
    SfdErrInf_x0019A688 err;
    int cond[SFD_COND_NUM_x0019A688];
    int cond2[SFD_COND_NUM_x0019A688];
    char pad3364[4];
    SfdTim_x0019A688 tim;
    SfdBufEnt_x0019A688 buf[8];
    SfdVfrm_x0019A688 vfrm[16];
    SfdTrnSlot_x0019A688 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0019A688 mps;
    char pad8944[176];
    SfdMpv_x0019A688 mpv;
    SfdAdxCtx_x0019A688 adxt;
    char pad13680[100];
    SfdAoap_x0019A688 aoap;
    char pad13804[4];
    SfainfList_x0019A688 uo;
    char pad13860[4];
    SfdRecSlot_x0019A688 see;
    SfdTmrInf_x0019A688 tmr;
};
int sfdtim_GetTimeAfterSeek_x0019A688() __asm__("func_0019A700");
int sfdtim_GetTimeAfterSeek_x0019A688(SfdPly_x0019A688 *hn, int *time, int *unit) __asm__("func_0019A700");
int func_0019A688_x0019A688(SfdPly_x0019A688 *hn, int *time, int *unit) __asm__("func_0019A688");
/* SFD_GetTimeAfterSeek: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019A688_x0019A688(SfdPly_x0019A688 *hn, int *time, int *unit)
{
    if (SFLIB_CheckHn_x0019A688(hn) != 0) {
        return sfd_ReportError_x0019A688(0, 0xFF000127);
    }
    return sfdtim_GetTimeAfterSeek_x0019A688(hn, time, unit);
}
void func_0019A700(void) {
    func_0019A718();
}
s32 func_0019A718(s32 arg0, s32 *arg1, s32 *arg2) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0xCC0;
    *arg1 = *(s32 *)((u8 *)temp_a0 + 0x280);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0x284);
    return 0;
}
struct SfdSj_x0019A738;
struct SfdRecSlot_x0019A738;
struct SfdRec_x0019A738;
struct SfdMpvCond_x0019A738;
struct SfdPlanes_x0019A738;
struct SfdFrameInfo_x0019A738;
struct SfdPly_x0019A738;
typedef int (*SfdTimeFn_x0019A738)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019A738 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019A738;
typedef struct SfdTimeRec_x0019A738 {
    int valid;
    SfdTimeCode_x0019A738 tc;
    int time;
    int unit;
} SfdTimeRec_x0019A738;
typedef struct SfdTst_x0019A738 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019A738;
typedef struct SfdSyncTally_x0019A738 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019A738;
typedef struct SfdSyncQueue_x0019A738 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019A738;
typedef struct SfdFieldEntry_x0019A738 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019A738;
typedef struct SfdPtsm_x0019A738 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019A738;
typedef struct SfdHdrAudio_x0019A738 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0019A738;
typedef struct SfdHdrMux_x0019A738 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0019A738;
typedef struct SfdHdrVideo_x0019A738 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0019A738;
typedef struct SfdHdrInf_x0019A738 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0019A738 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0019A738 audio;
    SfdHdrVideo_x0019A738 video;
    int size;
    char data[2048];
} SfdHdrInf_x0019A738;
typedef struct SfdMvInf_x0019A738 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0019A738;
typedef struct SfdPlyInf_x0019A738 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0019A738;
typedef void (*SfdErrFn_x0019A738)(void *obj, int code);
typedef struct SfdErrInf_x0019A738 {
    SfdErrFn_x0019A738 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0019A738;
typedef int (*SfdExtClockFn_x0019A738)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019A738)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019A738 {
    SfdTimeFn_x0019A738 timefn[6];
    SfdIsSkipFn_x0019A738 isSkipFn;
    SfdTimeCode_x0019A738 tc;
    SfdTimeRec_x0019A738 state;
    SfdTimeRec_x0019A738 best;
    SfdTimeRec_x0019A738 tot;
    SfdTimeRec_x0019A738 cur;
    SfdTimeRec_x0019A738 latest;
    SfdTimeRec_x0019A738 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019A738 tally;
    SfdSyncQueue_x0019A738 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019A738 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019A738 tst;
    SfdFieldEntry_x0019A738 fields[64];
    SfdPtsm_x0019A738 ptsm;
    char pad1468[36];
} SfdTim_x0019A738;
enum {
    SFD_COND_VIDEO_x0019A738 = 5,
    SFD_COND_AUDIO_x0019A738 = 6,
    SFD_COND_KEEPSUP_x0019A738 = 8,
    SFD_COND_SYNCMODE_x0019A738 = 15,
    SFD_COND_ETIME_x0019A738 = 20,
    SFD_COND_ETUNIT_x0019A738 = 21,
    SFD_COND_LNKSTM_x0019A738 = 49,
    SFD_COND_SUPPLY_END_x0019A738 = 56,
    SFD_COND_DECODE_END_x0019A738 = 57,
    SFD_COND_DEMUX_SPLIT_x0019A738 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0019A738 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0019A738 = 80,
    SFD_COND_SYSHD_FN_x0019A738 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0019A738 = 86,
    SFD_COND_NUM_x0019A738 = 100
};
typedef enum SfdBufFmt_x0019A738 {
    SFD_BUFFMT_0_x0019A738 = 0
} SfdBufFmt_x0019A738;
typedef enum SfdBufId_x0019A738 {
    SFD_BUF_NONE_x0019A738 = 8
} SfdBufId_x0019A738;
typedef struct SfdCrePrm_x0019A738 {
    struct SfdTrnConfig_x0019A738 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0019A738 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0019A738;
typedef struct SfdItem_x0019A738 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0019A738;
typedef struct SfdRing_x0019A738 {
    SfdItem_x0019A738 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0019A738;
typedef struct SfdBufInf_x0019A738 {
    char *data;
    struct SfdSj_x0019A738 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0019A738;
typedef struct SfdBufCur_x0019A738 {
    char *pos;
    int len;
} SfdBufCur_x0019A738;
typedef struct SfdBufDlm_x0019A738 {
    char *pos;
    char *end;
} SfdBufDlm_x0019A738;
typedef struct SfdBufRing_x0019A738 {
    SfdBufInf_x0019A738 sup;
    SfdBufDlm_x0019A738 dlm;
    int wtot;
    int rtot;
    SfdRing_x0019A738 ptsque;
} SfdBufRing_x0019A738;
typedef struct SfdBufAring_x0019A738 {
    SfdBufInf_x0019A738 sup;
    SfdBufCur_x0019A738 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0019A738;
typedef struct SfdUoch_x0019A738 {
    struct SfdSj_x0019A738 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0019A738;
typedef struct SfdBufEnt_x0019A738 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0019A738 ring;
        SfdBufAring_x0019A738 aring;
        SfdBufInf_x0019A738 vfrm;
        SfdUoch_x0019A738 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0019A738;
typedef int (*SfdTrnFn_x0019A738)();
typedef struct SfdTrnConfig_x0019A738 {
    SfdTrnFn_x0019A738 *fns[9];
} SfdTrnConfig_x0019A738;
typedef struct SfdMpsPrm_x0019A738 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0019A738 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0019A738;
typedef struct SfdAdxCfg_x0019A738 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0019A738;
typedef void (*SfdAdxStep_x0019A738)(struct SfdPly_x0019A738 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0019A738 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0019A738 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0019A738 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0019A738;
typedef struct SfdAoap_x0019A738 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0019A738 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0019A738 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0019A738 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0019A738 *h);
    void (*setSpeed)(struct SfdPly_x0019A738 *h, int speed);
} SfdAoap_x0019A738;
typedef struct SfainfOut_x0019A738 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019A738;
typedef struct SfainfList_x0019A738 {
    int nout;
    SfainfOut_x0019A738 out[3];
} SfainfList_x0019A738;
typedef struct SfdTrnSlot_x0019A738 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0019A738 *mps;
        struct SfdMpv_x0019A738 *mpv;
        SfdAdxCtx_x0019A738 *adxt;
        SfdAoap_x0019A738 *aoap;
        SfainfList_x0019A738 *uo;
    } hn;
    SfdTrnFn_x0019A738 *fns;
    SfdBufId_x0019A738 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0019A738;
typedef struct SfdTsum_x0019A738 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0019A738;
typedef struct SfdTmrInf_x0019A738 {
    SfdTsum_x0019A738 tsum[6];
} SfdTmrInf_x0019A738;
int sfd_ReportError_x0019A738(void *sfd, int code) __asm__("func_0018D650");
int SFLIB_CheckHn_x0019A738(void *sfd) __asm__("func_0018D870");
typedef struct SfdSj_x0019A738 SfdSj_x0019A738;
typedef struct SfdSjChunk_x0019A738 {
    char *data;
    int len;
} SfdSjChunk_x0019A738;
typedef struct SfdSjVtbl_x0019A738 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0019A738 *sj);
    int (*getUuid)(SfdSj_x0019A738 *sj);
    void (*reset)(SfdSj_x0019A738 *sj);
    void (*getChunk)(SfdSj_x0019A738 *sj, int id, int n, SfdSjChunk_x0019A738 *ck);
    void (*ungetChunk)(SfdSj_x0019A738 *sj, int id, SfdSjChunk_x0019A738 *ck);
    void (*putChunk)(SfdSj_x0019A738 *sj, int id, SfdSjChunk_x0019A738 *ck);
    int (*getNumData)(SfdSj_x0019A738 *sj, int id);
} SfdSjVtbl_x0019A738;
struct SfdSj_x0019A738 {
    SfdSjVtbl_x0019A738 *vtbl;
};
struct SfdSj_x0019A738;
typedef struct M2vErrInf_x0019A738 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0019A738;
typedef struct Mpeg2Ext_x0019A738 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0019A738;
typedef enum M2vFrameRate_x0019A738 {
    M2V_FRAME_RATE_FORBIDDEN_x0019A738 = 0
} M2vFrameRate_x0019A738;
typedef enum M2vPicType_x0019A738 {
    M2V_PICTYPE_I_x0019A738 = 1,
    M2V_PICTYPE_P_x0019A738 = 2,
    M2V_PICTYPE_B_x0019A738 = 3,
    M2V_PICTYPE_D_x0019A738 = 4
} M2vPicType_x0019A738;
typedef enum M2vPicStruct_x0019A738 {
    M2V_PICSTRUCT_TOP_FIELD_x0019A738 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0019A738 = 2,
    M2V_PICSTRUCT_FRAME_x0019A738 = 3
} M2vPicStruct_x0019A738;
typedef enum M2vPicAtrF64_x0019A738 {
    M2V_PICATR_F64_0_x0019A738 = 0
} M2vPicAtrF64_x0019A738;
typedef struct M2vPicAtr_x0019A738 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0019A738 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0019A738 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0019A738 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0019A738 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0019A738;
typedef void (*M2vUsrDatFn_x0019A738)(void *obj, int level);
typedef struct M2vUsrSj_x0019A738 {
    struct SfdSj_x0019A738 *sj;
    M2vUsrDatFn_x0019A738 fn;
    void *obj;
} M2vUsrSj_x0019A738;
typedef struct M2vPicUsr_x0019A738 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0019A738;
typedef void (*M2vCondFn_x0019A738)();
typedef struct M2vObj_x0019A738 {
    int stat;
    M2vErrInf_x0019A738 err;
    M2vCondFn_x0019A738 cond[16];
    M2vPicAtr_x0019A738 picatr;
    char pad216[64];
    M2vUsrSj_x0019A738 usrsj[4];
    M2vPicUsr_x0019A738 picusr;
    char pad340[12];
    Mpeg2Ext_x0019A738 ext;
    char pad1656[8];
} M2vObj_x0019A738;
extern void M2V_SetErrFunc_x0019A738(M2vObj_x0019A738 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0019A738 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0019A738;
typedef struct sceMpeg_x0019A738 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0019A738 *sys;
} sceMpeg_x0019A738;
typedef enum {
    sceMpegCbError_x0019A738,
    sceMpegCbNodata_x0019A738,
    sceMpegCbStopDMA_x0019A738,
    sceMpegCbRestartDMA_x0019A738,
    sceMpegCbBackground_x0019A738,
    sceMpegCbTimeStamp_x0019A738,
    sceMpegCbStr_x0019A738,
    sceMpegCbNum_x0019A738
} sceMpegCbType_x0019A738;
typedef struct {
    sceMpegCbType_x0019A738 type;
    char *errMessage;
} sceMpegCbDataError_x0019A738;
typedef struct {
    sceMpegCbType_x0019A738 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0019A738;
typedef struct {
    sceMpegCbType_x0019A738 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0019A738;
typedef union {
    sceMpegCbType_x0019A738 type;
    sceMpegCbDataError_x0019A738 error;
    sceMpegCbDataTimeStamp_x0019A738 ts;
    sceMpegCbDataStr_x0019A738 str;
} sceMpegCbData_x0019A738;
typedef int (*sceMpegCallback_x0019A738)(sceMpeg_x0019A738 *mp, sceMpegCbData_x0019A738 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0019A738 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0019A738;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0019A738;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0019A738;
typedef struct {
    _sceMpegPicture_x0019A738 *ref_image;
    _sceMpegPicture_x0019A738 *prev_image;
    _sceMpegPicture_x0019A738 *decode;
    _sceMpegPicture_x0019A738 *image;
} _sceMpegPictureSlot_x0019A738;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0019A738;
typedef void (*_sceMpegMcKernel_x0019A738)(_sceMpegMcFetch_x0019A738 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0019A738 luma_kernel[4];
    _sceMpegMcKernel_x0019A738 chroma_kernel[4];
    _sceMpegMcFetch_x0019A738 luma[4];
    _sceMpegMcFetch_x0019A738 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0019A738;
typedef struct _sceMpegDecoder_x0019A738 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0019A738 callbacks[sceMpegCbNum_x0019A738];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0019A738 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0019A738 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0019A738 slots[3];
    _sceMpegPicture_x0019A738 pictures[9];
    _sceMpegSprBuffer_x0019A738 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0019A738 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0019A738;
typedef struct SfdPlanes_x0019A738 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0019A738;
typedef struct SfdUserData_x0019A738 {
    char data[512];
    int size;
} SfdUserData_x0019A738;
typedef struct SfdRecVideo_x0019A738 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0019A738 stamp;
    SfdUserData_x0019A738 user;
} SfdRecVideo_x0019A738;
typedef struct SfdSlot_x0019A738 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0019A738 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019A738 *blob;
    M2vPicAtr_x0019A738 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0019A738;
typedef struct SfdBufPool_x0019A738 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0019A738 slot[18];
} SfdBufPool_x0019A738;
typedef struct SfdMpvCond_x0019A738 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0019A738;
typedef struct SfdMpvWorkBufs_x0019A738 {
    int w[2];
} SfdMpvWorkBufs_x0019A738;
typedef struct SfdMpvFrameBufs_x0019A738 {
    int w[16];
} SfdMpvFrameBufs_x0019A738;
typedef struct SfdIpuEntry_x0019A738 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0019A738;
typedef struct SfdDmaTag_x0019A738 {
    long long tag;
    long long pad;
} SfdDmaTag_x0019A738;
typedef struct SfdIpuStream_x0019A738 {
    void *base;
    SfdDmaTag_x0019A738 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0019A738 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0019A738;
typedef struct SfdIpuCtl_x0019A738 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0019A738 mpeg;
    SfdIpuStream_x0019A738 stream;
    sceMpegCbDataError_x0019A738 error;
} SfdIpuCtl_x0019A738;
typedef struct SfdPtsComp_x0019A738 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0019A738 ptsent;
} SfdPtsComp_x0019A738;
typedef struct SfdMpv_x0019A738 {
    void *handle;
    SfdMpvCond_x0019A738 cond;
    SfdMpvWorkBufs_x0019A738 work;
    SfdMpvFrameBufs_x0019A738 bufs;
    SfdSlot_x0019A738 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0019A738 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0019A738 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0019A738 planes[2];
    SfdSlot_x0019A738 *first;
    SfdSlot_x0019A738 *second;
    SfdSlot_x0019A738 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0019A738 slots[16];
    SfdBufPool_x0019A738 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0019A738 ipu;
} SfdMpv_x0019A738;
typedef enum SfdPicType_x0019A738 {
    SFD_PICTYPE_I_x0019A738 = 1,
    SFD_PICTYPE_P_x0019A738 = 2,
    SFD_PICTYPE_B_x0019A738 = 3
} SfdPicType_x0019A738;
typedef enum SfdFrmInfF60_x0019A738 {
    SFD_FRMINF_F60_0_x0019A738 = 0
} SfdFrmInfF60_x0019A738;
typedef struct SfdFrameDetail_x0019A738 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0019A738;
typedef struct SfdFrameInfo_x0019A738 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0019A738 picType;
    int time;
    int unit;
    SfdBufFmt_x0019A738 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019A738 *picUsr;
    SfdFrmInfF60_x0019A738 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0019A738 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0019A738;
typedef struct SfdVfrm_x0019A738 {
    int used;
    int f4;
    SfdFrameInfo_x0019A738 inf;
} SfdVfrm_x0019A738;
typedef struct SfdPly_x0019A738 SfdPly_x0019A738;
typedef struct SfdRec_x0019A738 SfdRec_x0019A738;
typedef struct SfdRecSub_x0019A738 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0019A738;
typedef struct SfdRecSlot_x0019A738 {
    SfdRec_x0019A738 *rec;
    SfdRecSub_x0019A738 sub;
} SfdRecSlot_x0019A738;
typedef struct SfdSysHd_x0019A738 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0019A738;
typedef struct SfdRecSys_x0019A738 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0019A738 syshd;
} SfdRecSys_x0019A738;
typedef struct SfdRecAudio_x0019A738 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0019A738;
struct SfdRec_x0019A738 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0019A738 hdrInf;
    SfdRecSys_x0019A738 sys;
    char pad2616[152];
    SfdRecVideo_x0019A738 video;
    SfdRecAudio_x0019A738 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0019A738 {
    SfdCrePrm_x0019A738 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0019A738 hdr;
    SfdMvInf_x0019A738 mvInf;
    char pad2380[4];
    SfdPlyInf_x0019A738 plyInf;
    SfdErrInf_x0019A738 err;
    int cond[SFD_COND_NUM_x0019A738];
    int cond2[SFD_COND_NUM_x0019A738];
    char pad3364[4];
    SfdTim_x0019A738 tim;
    SfdBufEnt_x0019A738 buf[8];
    SfdVfrm_x0019A738 vfrm[16];
    SfdTrnSlot_x0019A738 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0019A738 mps;
    char pad8944[176];
    SfdMpv_x0019A738 mpv;
    SfdAdxCtx_x0019A738 adxt;
    char pad13680[100];
    SfdAoap_x0019A738 aoap;
    char pad13804[4];
    SfainfList_x0019A738 uo;
    char pad13860[4];
    SfdRecSlot_x0019A738 see;
    SfdTmrInf_x0019A738 tmr;
};
int SFTIM_GetNowTime_x0019A738(SfdPly_x0019A738 *hn, int *time, int *unit) __asm__("func_0019A7B0");
int SFTIM_GetNowTime_x0019A738(SfdPly_x0019A738 *hn, int *time, int *unit) __asm__("func_0019A7B0");
int func_0019A738_x0019A738(SfdPly_x0019A738 *hn, int *time, int *unit) __asm__("func_0019A738");
/* SFD_GetNowTime: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019A738_x0019A738(SfdPly_x0019A738 *hn, int *time, int *unit)
{
    if (SFLIB_CheckHn_x0019A738(hn) != 0) {
        return sfd_ReportError_x0019A738(0, 0xFF000128);
    }
    return SFTIM_GetNowTime_x0019A738(hn, time, unit);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A7B0);
s32 func_0019AA08_x0019A848() __asm__("func_0019AA08");
s32 func_0019A848_x0019A848(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0019A848");
s32 func_0019A848_x0019A848(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 var_v0;
  var_v0 = func_0019AA08_x0019A848(arg0, arg1, arg2);
  if (var_v0 != 0)
  {
    *arg1 = (var_v0 = -2);
    var_v0 = 0;
    *arg2 = 1;
    return var_v0;
  }
}
s32 func_0019AA08_x0019A890() __asm__("func_0019AA08");
extern s32 D_00426A98_x0019A890 __asm__("D_00426A98");
s32 func_0019A890_x0019A890(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0019A890");
s32 func_0019A890_x0019A890(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 var_v0;
  int new_var;
  var_v0 = func_0019AA08_x0019A890(arg0, arg1, arg2);
  new_var = arg0 + 0xCC0;
  ;
  if (var_v0 != 0)
  {
    *arg1 = *((s32 *) (((u8 *) new_var) + 0x29C));
    *arg2 = D_00426A98_x0019A890;
    return 0;
  }
}
s32 func_0019A8F0(void) {
    func_0019AA08();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019A910);
s32 func_0019AA08(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x48);
    if ((temp_v1 != 4) && (temp_v1 != -4) && (temp_v1 != 6) && (temp_v1 != -6)) {
        *arg1 = -1;
        *arg2 = 1;
        return 0;
    }
    return 1;
}
s32 func_0018D870_x0019AA58(u8 *) __asm__("func_0018D870");
s32 func_0018D650_x0019AA58(u8 *, s32) __asm__("func_0018D650");
s32 func_0019AA58_x0019AA58(u8 *a0) __asm__("func_0019AA58");
s32 func_0019AA58_x0019AA58(u8 *a0)
{
    u8 *p;
    s32 r = func_0018D870_x0019AA58(a0);
    if (r != 0) {
        return func_0018D650_x0019AA58(0, 0xFF000122);
    }
    p = a0 + 0xCC0;
    (*(s32 *)(p + 0x298))++;
    *(s32 *)(a0 + 0x44) = 1;
    return r;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_0019AA58_0_xxxx;
s32 func_0018D650_x0019AAB8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AAB8() __asm__("func_0018D870");
unsigned int func_0019AAB8_x0019AAB8(u8 *arg0, s32 arg1) __asm__("func_0019AAB8");
unsigned int func_0019AAB8_x0019AAB8(u8 *arg0, s32 arg1) {
  if (func_0018D870_x0019AAB8(arg0) != 0)
  {
    func_0018D650_x0019AAB8(0, 0xFF000124);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0xCD8)) = arg1;
}
void func_0019AB10(void) {
    func_00172A40();
}
s32 func_0018D650_x0019AB28(s32, s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AB28() __asm__("func_0018D870");
s32 func_00199818_x0019AB28(s32, s32, s32) __asm__("func_00199818");
s32 func_0019AE00_x0019AB28(s32, s32, s32) __asm__("func_0019AE00");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) __asm__("func_0019AB28");
s32 func_0019AB28_x0019AB28(s32 arg0, s32 arg1) {
    if (func_0018D870_x0019AB28() != 0) {
        return func_0018D650_x0019AB28(0, 0xFF000123, 4);
    }
    func_0019AE00_x0019AB28(arg0, arg1, 4);
    func_00199818_x0019AB28(arg0, 0xF, 4);
    return 0;
}
s32 func_0018D650_x0019ABA0(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019ABA0() __asm__("func_0018D870");
s32 func_00199818_x0019ABA0(s32, s32, s32) __asm__("func_00199818");
s32 func_0019ABA0_x0019ABA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019ABA0");
s32 func_0019ABA0_x0019ABA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  volatile s32 *temp_s0;
  if (func_0018D870_x0019ABA0() != 0)
  {
    return func_0018D650_x0019ABA0(0, 0xFF000129);
  }
  temp_s0 = (volatile s32 *) (((u8 *) arg0) + 0xCC0);
  if (arg1 != 0)
  {
    temp_s0[0xB7] = arg3;
    temp_s0[0xB2] = arg1;
    temp_s0[0xB6] = arg2;
    func_00199818_x0019ABA0(arg0, 0xF, 5);
    func_00199818_x0019ABA0(arg0, 0x47, 0);
  }
  else
  {
    func_00199818_x0019ABA0(arg0, 0x47, 1);
    func_00199818_x0019ABA0(arg0, 0xF, 1);
    temp_s0[0xB7] = arg3;
    temp_s0[0xB6] = arg2;
    temp_s0[0xB2] = 0;
  }
  return 0;
}
struct SfdSj_x0019AC90;
struct SfdRecSlot_x0019AC90;
struct SfdRec_x0019AC90;
struct SfdMpvCond_x0019AC90;
struct SfdPlanes_x0019AC90;
struct SfdFrameInfo_x0019AC90;
struct SfdPly_x0019AC90;
typedef int (*SfdTimeFn_x0019AC90)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019AC90 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019AC90;
typedef struct SfdTimeRec_x0019AC90 {
    int valid;
    SfdTimeCode_x0019AC90 tc;
    int time;
    int unit;
} SfdTimeRec_x0019AC90;
typedef struct SfdTst_x0019AC90 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019AC90;
typedef struct SfdSyncTally_x0019AC90 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019AC90;
typedef struct SfdSyncQueue_x0019AC90 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019AC90;
typedef struct SfdFieldEntry_x0019AC90 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019AC90;
typedef struct SfdPtsm_x0019AC90 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019AC90;
typedef struct SfdHdrAudio_x0019AC90 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0019AC90;
typedef struct SfdHdrMux_x0019AC90 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0019AC90;
typedef struct SfdHdrVideo_x0019AC90 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0019AC90;
typedef struct SfdHdrInf_x0019AC90 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0019AC90 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0019AC90 audio;
    SfdHdrVideo_x0019AC90 video;
    int size;
    char data[2048];
} SfdHdrInf_x0019AC90;
typedef struct SfdMvInf_x0019AC90 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0019AC90;
typedef struct SfdPlyInf_x0019AC90 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0019AC90;
typedef void (*SfdErrFn_x0019AC90)(void *obj, int code);
typedef struct SfdErrInf_x0019AC90 {
    SfdErrFn_x0019AC90 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0019AC90;
typedef int (*SfdExtClockFn_x0019AC90)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019AC90)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019AC90 {
    SfdTimeFn_x0019AC90 timefn[6];
    SfdIsSkipFn_x0019AC90 isSkipFn;
    SfdTimeCode_x0019AC90 tc;
    SfdTimeRec_x0019AC90 state;
    SfdTimeRec_x0019AC90 best;
    SfdTimeRec_x0019AC90 tot;
    SfdTimeRec_x0019AC90 cur;
    SfdTimeRec_x0019AC90 latest;
    SfdTimeRec_x0019AC90 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019AC90 tally;
    SfdSyncQueue_x0019AC90 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019AC90 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019AC90 tst;
    SfdFieldEntry_x0019AC90 fields[64];
    SfdPtsm_x0019AC90 ptsm;
    char pad1468[36];
} SfdTim_x0019AC90;
enum {
    SFD_COND_VIDEO_x0019AC90 = 5,
    SFD_COND_AUDIO_x0019AC90 = 6,
    SFD_COND_KEEPSUP_x0019AC90 = 8,
    SFD_COND_SYNCMODE_x0019AC90 = 15,
    SFD_COND_ETIME_x0019AC90 = 20,
    SFD_COND_ETUNIT_x0019AC90 = 21,
    SFD_COND_LNKSTM_x0019AC90 = 49,
    SFD_COND_SUPPLY_END_x0019AC90 = 56,
    SFD_COND_DECODE_END_x0019AC90 = 57,
    SFD_COND_DEMUX_SPLIT_x0019AC90 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0019AC90 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0019AC90 = 80,
    SFD_COND_SYSHD_FN_x0019AC90 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0019AC90 = 86,
    SFD_COND_NUM_x0019AC90 = 100
};
typedef enum SfdBufFmt_x0019AC90 {
    SFD_BUFFMT_0_x0019AC90 = 0
} SfdBufFmt_x0019AC90;
typedef enum SfdBufId_x0019AC90 {
    SFD_BUF_NONE_x0019AC90 = 8
} SfdBufId_x0019AC90;
typedef struct SfdCrePrm_x0019AC90 {
    struct SfdTrnConfig_x0019AC90 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0019AC90 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0019AC90;
typedef struct SfdItem_x0019AC90 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0019AC90;
typedef struct SfdRing_x0019AC90 {
    SfdItem_x0019AC90 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0019AC90;
typedef struct SfdBufInf_x0019AC90 {
    char *data;
    struct SfdSj_x0019AC90 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0019AC90;
typedef struct SfdBufCur_x0019AC90 {
    char *pos;
    int len;
} SfdBufCur_x0019AC90;
typedef struct SfdBufDlm_x0019AC90 {
    char *pos;
    char *end;
} SfdBufDlm_x0019AC90;
typedef struct SfdBufRing_x0019AC90 {
    SfdBufInf_x0019AC90 sup;
    SfdBufDlm_x0019AC90 dlm;
    int wtot;
    int rtot;
    SfdRing_x0019AC90 ptsque;
} SfdBufRing_x0019AC90;
typedef struct SfdBufAring_x0019AC90 {
    SfdBufInf_x0019AC90 sup;
    SfdBufCur_x0019AC90 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0019AC90;
typedef struct SfdUoch_x0019AC90 {
    struct SfdSj_x0019AC90 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0019AC90;
typedef struct SfdBufEnt_x0019AC90 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0019AC90 ring;
        SfdBufAring_x0019AC90 aring;
        SfdBufInf_x0019AC90 vfrm;
        SfdUoch_x0019AC90 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0019AC90;
typedef int (*SfdTrnFn_x0019AC90)();
typedef struct SfdTrnModules_x0019AC90 {
    SfdTrnFn_x0019AC90 *fns[15];
} SfdTrnModules_x0019AC90;
typedef struct SfdTrnConfig_x0019AC90 {
    SfdTrnFn_x0019AC90 *fns[9];
} SfdTrnConfig_x0019AC90;
typedef struct SfdInitPrm_x0019AC90 {
    SfdTrnModules_x0019AC90 *modules;
    int vrate;
} SfdInitPrm_x0019AC90;
typedef struct SfdMpsPrm_x0019AC90 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0019AC90 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0019AC90;
typedef struct SfdAdxCfg_x0019AC90 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0019AC90;
typedef void (*SfdAdxStep_x0019AC90)(struct SfdPly_x0019AC90 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0019AC90 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0019AC90 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0019AC90 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0019AC90;
typedef struct SfdAoap_x0019AC90 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0019AC90 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0019AC90 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0019AC90 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0019AC90 *h);
    void (*setSpeed)(struct SfdPly_x0019AC90 *h, int speed);
} SfdAoap_x0019AC90;
typedef struct SfainfOut_x0019AC90 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019AC90;
typedef struct SfainfList_x0019AC90 {
    int nout;
    SfainfOut_x0019AC90 out[3];
} SfainfList_x0019AC90;
typedef struct SfdTrnSlot_x0019AC90 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0019AC90 *mps;
        struct SfdMpv_x0019AC90 *mpv;
        SfdAdxCtx_x0019AC90 *adxt;
        SfdAoap_x0019AC90 *aoap;
        SfainfList_x0019AC90 *uo;
    } hn;
    SfdTrnFn_x0019AC90 *fns;
    SfdBufId_x0019AC90 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0019AC90;
typedef struct SfdTsum_x0019AC90 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0019AC90;
typedef struct SfdTmrInf_x0019AC90 {
    SfdTsum_x0019AC90 tsum[6];
} SfdTmrInf_x0019AC90;
typedef struct SfdTimLib_x0019AC90 {
    int vcount;
    int f4;
    int vrate;
} SfdTimLib_x0019AC90;
typedef struct SfdSvrCnt_x0019AC90 {
    int cnt;
    int busy;
} SfdSvrCnt_x0019AC90;
typedef struct SfdLibInf_x0019AC90 {
    int cond[SFD_COND_NUM_x0019AC90];
    SfdInitPrm_x0019AC90 prm;
    int sysStat;
    SfdErrInf_x0019AC90 err;
    SfdTimLib_x0019AC90 tim;
    int buf;
    SfdTrnModules_x0019AC90 trn;
    SfdSvrCnt_x0019AC90 svr;
    struct SfdPly_x0019AC90 *hn[8];
} SfdLibInf_x0019AC90;
extern SfdLibInf_x0019AC90 sfd_lib_x0019AC90 __asm__("D_004268E0");
typedef struct SfdSj_x0019AC90 SfdSj_x0019AC90;
typedef struct SfdSjChunk_x0019AC90 {
    char *data;
    int len;
} SfdSjChunk_x0019AC90;
typedef struct SfdSjVtbl_x0019AC90 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0019AC90 *sj);
    int (*getUuid)(SfdSj_x0019AC90 *sj);
    void (*reset)(SfdSj_x0019AC90 *sj);
    void (*getChunk)(SfdSj_x0019AC90 *sj, int id, int n, SfdSjChunk_x0019AC90 *ck);
    void (*ungetChunk)(SfdSj_x0019AC90 *sj, int id, SfdSjChunk_x0019AC90 *ck);
    void (*putChunk)(SfdSj_x0019AC90 *sj, int id, SfdSjChunk_x0019AC90 *ck);
    int (*getNumData)(SfdSj_x0019AC90 *sj, int id);
} SfdSjVtbl_x0019AC90;
struct SfdSj_x0019AC90 {
    SfdSjVtbl_x0019AC90 *vtbl;
};
struct SfdSj_x0019AC90;
typedef struct M2vErrInf_x0019AC90 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0019AC90;
typedef struct Mpeg2Ext_x0019AC90 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0019AC90;
typedef enum M2vFrameRate_x0019AC90 {
    M2V_FRAME_RATE_FORBIDDEN_x0019AC90 = 0
} M2vFrameRate_x0019AC90;
typedef enum M2vPicType_x0019AC90 {
    M2V_PICTYPE_I_x0019AC90 = 1,
    M2V_PICTYPE_P_x0019AC90 = 2,
    M2V_PICTYPE_B_x0019AC90 = 3,
    M2V_PICTYPE_D_x0019AC90 = 4
} M2vPicType_x0019AC90;
typedef enum M2vPicStruct_x0019AC90 {
    M2V_PICSTRUCT_TOP_FIELD_x0019AC90 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0019AC90 = 2,
    M2V_PICSTRUCT_FRAME_x0019AC90 = 3
} M2vPicStruct_x0019AC90;
typedef enum M2vPicAtrF64_x0019AC90 {
    M2V_PICATR_F64_0_x0019AC90 = 0
} M2vPicAtrF64_x0019AC90;
typedef struct M2vPicAtr_x0019AC90 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0019AC90 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0019AC90 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0019AC90 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0019AC90 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0019AC90;
typedef void (*M2vUsrDatFn_x0019AC90)(void *obj, int level);
typedef struct M2vUsrSj_x0019AC90 {
    struct SfdSj_x0019AC90 *sj;
    M2vUsrDatFn_x0019AC90 fn;
    void *obj;
} M2vUsrSj_x0019AC90;
typedef struct M2vPicUsr_x0019AC90 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0019AC90;
typedef void (*M2vCondFn_x0019AC90)();
typedef struct M2vObj_x0019AC90 {
    int stat;
    M2vErrInf_x0019AC90 err;
    M2vCondFn_x0019AC90 cond[16];
    M2vPicAtr_x0019AC90 picatr;
    char pad216[64];
    M2vUsrSj_x0019AC90 usrsj[4];
    M2vPicUsr_x0019AC90 picusr;
    char pad340[12];
    Mpeg2Ext_x0019AC90 ext;
    char pad1656[8];
} M2vObj_x0019AC90;
extern void M2V_SetErrFunc_x0019AC90(M2vObj_x0019AC90 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0019AC90 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0019AC90;
typedef struct sceMpeg_x0019AC90 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0019AC90 *sys;
} sceMpeg_x0019AC90;
typedef enum {
    sceMpegCbError_x0019AC90,
    sceMpegCbNodata_x0019AC90,
    sceMpegCbStopDMA_x0019AC90,
    sceMpegCbRestartDMA_x0019AC90,
    sceMpegCbBackground_x0019AC90,
    sceMpegCbTimeStamp_x0019AC90,
    sceMpegCbStr_x0019AC90,
    sceMpegCbNum_x0019AC90
} sceMpegCbType_x0019AC90;
typedef struct {
    sceMpegCbType_x0019AC90 type;
    char *errMessage;
} sceMpegCbDataError_x0019AC90;
typedef struct {
    sceMpegCbType_x0019AC90 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0019AC90;
typedef struct {
    sceMpegCbType_x0019AC90 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0019AC90;
typedef union {
    sceMpegCbType_x0019AC90 type;
    sceMpegCbDataError_x0019AC90 error;
    sceMpegCbDataTimeStamp_x0019AC90 ts;
    sceMpegCbDataStr_x0019AC90 str;
} sceMpegCbData_x0019AC90;
typedef int (*sceMpegCallback_x0019AC90)(sceMpeg_x0019AC90 *mp, sceMpegCbData_x0019AC90 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0019AC90 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0019AC90;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0019AC90;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0019AC90;
typedef struct {
    _sceMpegPicture_x0019AC90 *ref_image;
    _sceMpegPicture_x0019AC90 *prev_image;
    _sceMpegPicture_x0019AC90 *decode;
    _sceMpegPicture_x0019AC90 *image;
} _sceMpegPictureSlot_x0019AC90;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0019AC90;
typedef void (*_sceMpegMcKernel_x0019AC90)(_sceMpegMcFetch_x0019AC90 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0019AC90 luma_kernel[4];
    _sceMpegMcKernel_x0019AC90 chroma_kernel[4];
    _sceMpegMcFetch_x0019AC90 luma[4];
    _sceMpegMcFetch_x0019AC90 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0019AC90;
typedef struct _sceMpegDecoder_x0019AC90 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0019AC90 callbacks[sceMpegCbNum_x0019AC90];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0019AC90 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0019AC90 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0019AC90 slots[3];
    _sceMpegPicture_x0019AC90 pictures[9];
    _sceMpegSprBuffer_x0019AC90 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0019AC90 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0019AC90;
typedef struct SfdPlanes_x0019AC90 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0019AC90;
typedef struct SfdUserData_x0019AC90 {
    char data[512];
    int size;
} SfdUserData_x0019AC90;
typedef struct SfdRecVideo_x0019AC90 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0019AC90 stamp;
    SfdUserData_x0019AC90 user;
} SfdRecVideo_x0019AC90;
typedef struct SfdSlot_x0019AC90 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0019AC90 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019AC90 *blob;
    M2vPicAtr_x0019AC90 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0019AC90;
typedef struct SfdBufPool_x0019AC90 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0019AC90 slot[18];
} SfdBufPool_x0019AC90;
typedef struct SfdMpvCond_x0019AC90 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0019AC90;
typedef struct SfdMpvWorkBufs_x0019AC90 {
    int w[2];
} SfdMpvWorkBufs_x0019AC90;
typedef struct SfdMpvFrameBufs_x0019AC90 {
    int w[16];
} SfdMpvFrameBufs_x0019AC90;
typedef struct SfdIpuEntry_x0019AC90 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0019AC90;
typedef struct SfdDmaTag_x0019AC90 {
    long long tag;
    long long pad;
} SfdDmaTag_x0019AC90;
typedef struct SfdIpuStream_x0019AC90 {
    void *base;
    SfdDmaTag_x0019AC90 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0019AC90 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0019AC90;
typedef struct SfdIpuCtl_x0019AC90 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0019AC90 mpeg;
    SfdIpuStream_x0019AC90 stream;
    sceMpegCbDataError_x0019AC90 error;
} SfdIpuCtl_x0019AC90;
typedef struct SfdPtsComp_x0019AC90 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0019AC90 ptsent;
} SfdPtsComp_x0019AC90;
typedef struct SfdMpv_x0019AC90 {
    void *handle;
    SfdMpvCond_x0019AC90 cond;
    SfdMpvWorkBufs_x0019AC90 work;
    SfdMpvFrameBufs_x0019AC90 bufs;
    SfdSlot_x0019AC90 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0019AC90 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0019AC90 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0019AC90 planes[2];
    SfdSlot_x0019AC90 *first;
    SfdSlot_x0019AC90 *second;
    SfdSlot_x0019AC90 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0019AC90 slots[16];
    SfdBufPool_x0019AC90 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0019AC90 ipu;
} SfdMpv_x0019AC90;
typedef enum SfdPicType_x0019AC90 {
    SFD_PICTYPE_I_x0019AC90 = 1,
    SFD_PICTYPE_P_x0019AC90 = 2,
    SFD_PICTYPE_B_x0019AC90 = 3
} SfdPicType_x0019AC90;
typedef enum SfdFrmInfF60_x0019AC90 {
    SFD_FRMINF_F60_0_x0019AC90 = 0
} SfdFrmInfF60_x0019AC90;
typedef struct SfdFrameDetail_x0019AC90 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0019AC90;
typedef struct SfdFrameInfo_x0019AC90 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0019AC90 picType;
    int time;
    int unit;
    SfdBufFmt_x0019AC90 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019AC90 *picUsr;
    SfdFrmInfF60_x0019AC90 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0019AC90 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0019AC90;
typedef struct SfdVfrm_x0019AC90 {
    int used;
    int f4;
    SfdFrameInfo_x0019AC90 inf;
} SfdVfrm_x0019AC90;
typedef struct SfdPly_x0019AC90 SfdPly_x0019AC90;
typedef struct SfdRec_x0019AC90 SfdRec_x0019AC90;
typedef struct SfdRecSub_x0019AC90 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0019AC90;
typedef struct SfdRecSlot_x0019AC90 {
    SfdRec_x0019AC90 *rec;
    SfdRecSub_x0019AC90 sub;
} SfdRecSlot_x0019AC90;
typedef struct SfdSysHd_x0019AC90 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0019AC90;
typedef struct SfdRecSys_x0019AC90 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0019AC90 syshd;
} SfdRecSys_x0019AC90;
typedef struct SfdRecAudio_x0019AC90 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0019AC90;
struct SfdRec_x0019AC90 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0019AC90 hdrInf;
    SfdRecSys_x0019AC90 sys;
    char pad2616[152];
    SfdRecVideo_x0019AC90 video;
    SfdRecAudio_x0019AC90 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0019AC90 {
    SfdCrePrm_x0019AC90 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0019AC90 hdr;
    SfdMvInf_x0019AC90 mvInf;
    char pad2380[4];
    SfdPlyInf_x0019AC90 plyInf;
    SfdErrInf_x0019AC90 err;
    int cond[SFD_COND_NUM_x0019AC90];
    int cond2[SFD_COND_NUM_x0019AC90];
    char pad3364[4];
    SfdTim_x0019AC90 tim;
    SfdBufEnt_x0019AC90 buf[8];
    SfdVfrm_x0019AC90 vfrm[16];
    SfdTrnSlot_x0019AC90 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0019AC90 mps;
    char pad8944[176];
    SfdMpv_x0019AC90 mpv;
    SfdAdxCtx_x0019AC90 adxt;
    char pad13680[100];
    SfdAoap_x0019AC90 aoap;
    char pad13804[4];
    SfainfList_x0019AC90 uo;
    char pad13860[4];
    SfdRecSlot_x0019AC90 see;
    SfdTmrInf_x0019AC90 tmr;
};
int sftim_UpdateTimeHn_x0019AC90(SfdPly_x0019AC90 *hn) __asm__("func_0019AD18");
int sftim_UpdateTimeHn_x0019AC90(SfdPly_x0019AC90 *hn) __asm__("func_0019AD18");
int func_0019AC90_x0019AC90(void *sfd) __asm__("func_0019AC90");
/* SFD_UpdateTime: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019AC90_x0019AC90(void *sfd)
{
    SfdPly_x0019AC90 *hn = sfd;
    int result;
    int status;
    int i;
    if (hn == 0) {
        SfdPly_x0019AC90 **slots = sfd_lib_x0019AC90.hn;
        result = 0;
        for (i = 0; i < 8; i++) {
            if (slots[i] != 0) {
                status = sftim_UpdateTimeHn_x0019AC90(slots[i]);
                if (status != 0) {
                    result = status;
                }
            }
        }
        return result;
    }
    return sftim_UpdateTimeHn_x0019AC90(hn);
}
s32 func_0018D650_x0019AD18(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019AD18() __asm__("func_0018D870");
s32 func_001999E0_x0019AD18(s32, s32) __asm__("func_001999E0");
s32 func_0019AD80_x0019AD18(s32) __asm__("func_0019AD80");
s32 func_0019AD18_x0019AD18(s32 arg0) __asm__("func_0019AD18");
s32 func_0019AD18_x0019AD18(s32 arg0)
{
  if (func_0018D870_x0019AD18(arg0) != 0)
  {
    return func_0018D650_x0019AD18(0, 0xFF00012A);
  }
  if (func_001999E0_x0019AD18(arg0, 0x47) != 1)
  {
    func_0019AD80_x0019AD18(arg0);
  }
 do { return 0; } while (0);
}
typedef struct { u8 pad[0x280]; s32 x; s32 y; } SfdCC0_x0019AD80_x0019AD80;
void func_0019A7B0_x0019AD80(s32, s32 *, s32 *) __asm__("func_0019A7B0");
void func_0019A2E8_x0019AD80(s32, SfdCC0_x0019AD80_x0019AD80 *) __asm__("func_0019A2E8");
void func_0019AD80_x0019AD80(s32 a0) __asm__("func_0019AD80");
void func_0019AD80_x0019AD80(s32 a0)
{
    SfdCC0_x0019AD80_x0019AD80 *h = (SfdCC0_x0019AD80_x0019AD80 *)(a0 + 0xCC0);
    s32 x, y;

    func_0019A7B0_x0019AD80(a0, &x, &y);
    if (h->x != x || h->y != y) {
        func_0019A2E8_x0019AD80(a0, h);
        h->x = x;
        h->y = y;
    }
    *(s32 *)(a0 + 0x44) = 1;
}
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019AE00");
void func_0019AE00_x0019AE00(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  new_var = arg0 + (arg2 * 4);
  *((s32 *) (((u8 *) new_var) + 0xCC0)) = arg1;
}
typedef unsigned char Uint8_x0019AE10;
typedef signed char Sint8_x0019AE10;
typedef signed short Sint16_x0019AE10;
typedef unsigned int Uint32_x0019AE10;
typedef signed int Sint32_x0019AE10;
typedef signed long long Sint64_x0019AE10;
typedef char Char8_x0019AE10;
typedef struct SJ_OBJ_x0019AE10 *SJ_x0019AE10;
typedef struct {
        Uint8_x0019AE10 *data;
        Sint32_x0019AE10 len;
} SJCK_x0019AE10;
typedef struct {
        Uint8_x0019AE10 data[16];
} SJUUID_x0019AE10;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019AE10 sj);
        const SJUUID_x0019AE10 *(*GetUuid)(SJ_x0019AE10 sj);
        void (*Reset)(SJ_x0019AE10 sj);
        void (*GetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, Sint32_x0019AE10 nbyte, SJCK_x0019AE10 *ck);
        void (*UngetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, SJCK_x0019AE10 *ck);
        void (*PutChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, SJCK_x0019AE10 *ck);
        Sint32_x0019AE10 (*GetNumData)(SJ_x0019AE10 sj, Sint32_x0019AE10 id);
        Sint32_x0019AE10 (*IsGetChunk)(SJ_x0019AE10 sj, Sint32_x0019AE10 id, Sint32_x0019AE10 nbyte, Sint32_x0019AE10 *rbyte);
        void (*EntryErrFunc)(SJ_x0019AE10 sj, void (*func)(void *obj, Char8_x0019AE10 *msg), void *obj);
} SJ_IF_x0019AE10;
struct SJ_OBJ_x0019AE10 {
        SJ_IF_x0019AE10 *vtbl;
};
typedef struct SFD_OBJ_x0019AE10 *SFD_x0019AE10;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019AE10 rsv1;
        Sint32_x0019AE10 rsv2;
} SFUO_CH_x0019AE10;
typedef struct {
        Sint32_x0019AE10 nch;
        SFUO_CH_x0019AE10 ch[3];
} SFUO_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Sint32_x0019AE10 (*SetOutPan)(SFD_x0019AE10 sfd, Sint32_x0019AE10 ch, Sint32_x0019AE10 pan);
        Sint32_x0019AE10 (*GetOutPan)(SFD_x0019AE10 sfd, Sint32_x0019AE10 ch);
        Sint32_x0019AE10 (*SetOutVol)(SFD_x0019AE10 sfd, Sint32_x0019AE10 vol);
        Sint32_x0019AE10 (*GetOutVol)(SFD_x0019AE10 sfd);
        void (*SetSpeed)(SFD_x0019AE10 sfd, Sint32_x0019AE10 speed);
        Sint32_x0019AE10 x18;
} SFAOAP_x0019AE10;
typedef struct {
        Uint8_x0019AE10 pad0[0xB8];
        Sint32_x0019AE10 tottime;
        Sint32_x0019AE10 tunit;
        Uint8_x0019AE10 padc0[0x150 - 0xC0];
        Sint64_x0019AE10 scr_base;
        Sint64_x0019AE10 scr_ofst;
        Sint32_x0019AE10 pad160;
        Sint32_x0019AE10 ctime;
        Sint32_x0019AE10 ctime_idx;
        Sint32_x0019AE10 ctime_que[32];
        Sint32_x0019AE10 tot_last;
        Sint32_x0019AE10 pad1F0;
        Sint32_x0019AE10 que_wr;
        Sint32_x0019AE10 que_rd;
        Sint32_x0019AE10 tot_que[32];
} SFCON_x0019AE10;
typedef struct {
        Sint32_x0019AE10 type;
        Sint32_x0019AE10 drop;
        Sint32_x0019AE10 hour;
        Sint32_x0019AE10 min;
        Sint32_x0019AE10 sec;
        Sint32_x0019AE10 frm;
        Sint32_x0019AE10 frm2;
        Sint16_x0019AE10 x1c;
        Sint16_x0019AE10 field;
} SFTIM_TC_x0019AE10;
typedef struct {
        Sint32_x0019AE10 valid;
        SFTIM_TC_x0019AE10 tc;
        Sint32_x0019AE10 val;
        Sint32_x0019AE10 unit;
} SFTIM_TTU_x0019AE10;
extern const Sint32_x0019AE10 SFTIM_prate_x0019AE10[9] __asm__("D_00467730");
typedef struct {
        Sint64_x0019AE10 pts;
        Uint32_x0019AE10 pos;
        Uint32_x0019AE10 len;
} SFPTS_ENT_x0019AE10;
typedef struct {
        SFPTS_ENT_x0019AE10 *ent;
        Sint32_x0019AE10 num;
        Sint32_x0019AE10 cnt;
        Sint32_x0019AE10 wr;
        Sint32_x0019AE10 rd;
} SFPTS_QUE_x0019AE10;
typedef struct {
        Sint32_x0019AE10 raw[0x20];
} SFD_VFRM_INF_x0019AE10;
typedef struct {
        void *frm;
        Sint32_x0019AE10 x04;
        SFD_VFRM_INF_x0019AE10 inf;
} SFD_VFRM_x0019AE10;
typedef struct {
        Sint32_x0019AE10 kind;
        SJ_x0019AE10 sj;
        Uint32_x0019AE10 ofst;
        Sint32_x0019AE10 size;
        Sint32_x0019AE10 xsize;
        Sint32_x0019AE10 x14;
} SFBUF_SUP_x0019AE10;
typedef struct {
        SFBUF_SUP_x0019AE10 sup;
        Uint8_x0019AE10 *dlm_pos;
        Sint32_x0019AE10 dlm_len;
        Sint32_x0019AE10 wtot;
        Sint32_x0019AE10 rtot;
        SFPTS_QUE_x0019AE10 ptsque;
} SFBUF_RING_x0019AE10;
typedef struct {
        Sint32_x0019AE10 mode;
        Sint32_x0019AE10 used;
        Sint32_x0019AE10 prepflg;
        Sint32_x0019AE10 termflg;
        union {
                SFBUF_RING_x0019AE10 ring;
                struct {
                        Uint32_x0019AE10 adr;
                        Sint32_x0019AE10 size;
                        Sint32_x0019AE10 x18;
                        Sint32_x0019AE10 x1c;
                        SFD_VFRM_x0019AE10 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019AE10 adr;
                        Sint32_x0019AE10 size;
                        Sint32_x0019AE10 rsv[7];
                        Sint32_x0019AE10 rsv2[3];
                } aout;
                SFUO_CH_x0019AE10 uoch[3];
        } u;
        Sint32_x0019AE10 in_tr;
        Sint32_x0019AE10 out_tr;
        Sint32_x0019AE10 rsv[8];
} SFBUF_WORK_x0019AE10;
typedef Sint32_x0019AE10 (*SFD_TR_FUNC_x0019AE10)();
typedef struct {
        Sint32_x0019AE10 prepflg;
        Sint32_x0019AE10 termflg;
        void *hn;
        SFD_TR_FUNC_x0019AE10 *trif;
        Sint32_x0019AE10 bufin;
        Sint32_x0019AE10 bufout;
        Sint32_x0019AE10 bufout2;
        Sint32_x0019AE10 bufout3;
        Sint32_x0019AE10 x20;
        Uint8_x0019AE10 pad24[0x44 - 0x24];
} SFD_TR_x0019AE10;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019AE10 cwidth;
        Sint16_x0019AE10 ywidth;
} SFMPV_PLANE_x0019AE10;
typedef struct {
        void *buf;
        Sint32_x0019AE10 len;
} SFMPV_PICUSR_x0019AE10;
typedef struct {
        Sint32_x0019AE10 stat;
        Sint32_x0019AE10 lock;
        void *buf;
        SFTIM_TTU_x0019AE10 ttu;
        Sint32_x0019AE10 ftime;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 ndct;
        Sint32_x0019AE10 nbyte;
        Sint32_x0019AE10 gopno;
        Sint32_x0019AE10 x4c;
        Sint32_x0019AE10 x50;
        SFMPV_PICUSR_x0019AE10 *picusr;
        Sint32_x0019AE10 pa_width;
        Sint32_x0019AE10 pa_height;
        Sint32_x0019AE10 pa_mb_width;
        Sint32_x0019AE10 pa_mb_height;
        Sint32_x0019AE10 pa_frame_rate;
        Sint32_x0019AE10 tmpref;
        Sint32_x0019AE10 pa_pic_type;
        Sint32_x0019AE10 pa_tc_drop;
        Sint32_x0019AE10 pa_tc_hour;
        Sint32_x0019AE10 pa_tc_min;
        Sint32_x0019AE10 pa_tc_sec;
        Sint32_x0019AE10 pa_tc_pic;
        Sint32_x0019AE10 x88;
        Sint32_x0019AE10 x8c;
        Sint32_x0019AE10 pa_x90[3];
        Sint32_x0019AE10 pa_x9c[3];
        Sint16_x0019AE10 pa_xa8;
        Sint16_x0019AE10 pa_xaa;
        Sint8_x0019AE10 pa_xac;
        Sint8_x0019AE10 pa_xad;
        Sint8_x0019AE10 pa_xae;
        Sint8_x0019AE10 pa_xaf;
        Sint8_x0019AE10 pa_xb0;
        Sint8_x0019AE10 pa_xb1;
        Sint8_x0019AE10 pa_xb2;
        Sint8_x0019AE10 pa_xb3;
        Sint8_x0019AE10 pa_xb4;
        Sint8_x0019AE10 pa_xb5;
        Sint8_x0019AE10 pa_xb6;
        Sint8_x0019AE10 pa_xb7;
        Sint8_x0019AE10 pa_xb8;
        Sint8_x0019AE10 pa_xb9;
        Sint8_x0019AE10 pa_xba;
        Sint8_x0019AE10 pa_xbb;
        Sint8_x0019AE10 pa_xbc;
        Uint8_x0019AE10 padbd[0xD8 - 0xBD];
        Sint64_x0019AE10 pts;
} SFMPV_FRM_x0019AE10;
typedef struct {
        Sint32_x0019AE10 cwidth;
        Sint32_x0019AE10 cheight;
        Sint32_x0019AE10 width;
        Sint32_x0019AE10 height;
        Sint32_x0019AE10 x10;
        Sint32_x0019AE10 max_width;
        Sint32_x0019AE10 max_height;
        Sint32_x0019AE10 nfrm;
        Sint32_x0019AE10 x20;
} SFMPV_PARA_x0019AE10;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019AE10 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019AE10 *curfrm;
        Sint32_x0019AE10 picstat;
        Sint32_x0019AE10 dlmmask;
        Sint32_x0019AE10 termflg;
        Sint32_x0019AE10 gopstat;
        Sint32_x0019AE10 nskip;
        Sint32_x0019AE10 nconcat;
        Uint8_x0019AE10 picatr[0x80];
        Sint32_x0019AE10 last_ngop;
        Sint32_x0019AE10 newgop;
        Sint32_x0019AE10 vbvsiz;
        Sint32_x0019AE10 pts_tmpref;
        Sint32_x0019AE10 pts_ofst;
        Sint32_x0019AE10 pts_max;
        Sint32_x0019AE10 pad124;
        SFPTS_ENT_x0019AE10 ptsent;
        Sint32_x0019AE10 refidx[2];
        SFMPV_PLANE_x0019AE10 rfbuf[2];
        SFMPV_FRM_x0019AE10 *ref[2];
        SFMPV_FRM_x0019AE10 *pendfrm;
        Sint32_x0019AE10 skipret;
        Sint32_x0019AE10 dlmwait;
        Sint32_x0019AE10 tmpref_adj;
        Sint32_x0019AE10 nfrm;
        Sint32_x0019AE10 pad17c;
        SFMPV_FRM_x0019AE10 frm[16];
        void *picusr_buf;
        Sint32_x0019AE10 picusr_num;
        Sint32_x0019AE10 picusr_siz;
        Uint8_x0019AE10 *picusr_dat;
        Sint32_x0019AE10 picusr_len;
        SFMPV_PICUSR_x0019AE10 picusr[16];
        Sint32_x0019AE10 pad1014;
        Sint64_x0019AE10 pts;
} SFMPV_WORK_x0019AE10;
typedef struct {
        Sint32_x0019AE10 raw[0x2A];
} SFD_PLYINF_x0019AE10 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019AE10 code);
        void *obj;
        Sint32_x0019AE10 code;
        Sint32_x0019AE10 x0c;
        Sint32_x0019AE10 x10;
} SFLIB_ERRINF_x0019AE10;
typedef struct {
        Sint32_x0019AE10 codec;
        Sint32_x0019AE10 layer;
        Sint32_x0019AE10 chnum;
        Sint32_x0019AE10 smphz;
} SFHDS_AUD_x0019AE10;
typedef struct {
        Sint32_x0019AE10 codec;
        Sint32_x0019AE10 bitrate;
        Sint32_x0019AE10 picw;
        Sint32_x0019AE10 pich;
        Sint32_x0019AE10 picrate;
        Sint32_x0019AE10 ftr_eff;
        Sint32_x0019AE10 ftr_coltype;
        Sint32_x0019AE10 ftr_pictype;
        Sint32_x0019AE10 ftr_fixflg;
        Sint32_x0019AE10 ftr_shcfixflg;
        Sint32_x0019AE10 ftr_expand;
        Sint32_x0019AE10 ftr_gopn;
        Sint32_x0019AE10 ftr_gopm;
} SFHDS_VID_x0019AE10;
typedef struct {
        Sint32_x0019AE10 valid;
        Sint32_x0019AE10 ver_major;
        Sint32_x0019AE10 ver_minor;
        Sint32_x0019AE10 byterate;
        Sint32_x0019AE10 hdrsiz;
        Sint32_x0019AE10 packtype;
        Sint32_x0019AE10 pketsizlen;
        Sint32_x0019AE10 packsiz;
        Sint32_x0019AE10 numelem_tot;
        Sint32_x0019AE10 numelem_aud;
        Sint32_x0019AE10 numelem_vid;
        Sint32_x0019AE10 numelem_prv;
        Sint32_x0019AE10 maxplylen_aud;
        Sint32_x0019AE10 maxplylen_vid;
        Sint32_x0019AE10 maxfrmnum;
        Sint32_x0019AE10 stmid_prv1;
        Sint32_x0019AE10 stmid_prv2;
        Sint32_x0019AE10 stmid_aud;
        Sint32_x0019AE10 stmid_vid;
        SFHDS_AUD_x0019AE10 aud;
        SFHDS_VID_x0019AE10 vid;
        Sint32_x0019AE10 rawsiz;
        Uint8_x0019AE10 raw[0x800];
} SFHDS_FHD_x0019AE10;
typedef struct {
        Uint8_x0019AE10 data[2][0xB0];
        Sint32_x0019AE10 len[2];
} SFSEE_SYSHD_x0019AE10;
typedef struct {
        Sint32_x0019AE10 analyzed;
        Sint32_x0019AE10 ncount;
        Sint32_x0019AE10 tscale;
        Sint32_x0019AE10 nvid;
        Sint32_x0019AE10 naud;
        Sint32_x0019AE10 pad14;
        Sint64_x0019AE10 scr_base;
        Sint64_x0019AE10 pts_min;
        Sint32_x0019AE10 stmid_vid;
        Sint32_x0019AE10 stmid_aud;
        SFSEE_SYSHD_x0019AE10 syshd;
} SFSEE_SHDR_x0019AE10;
typedef struct {
        Sint32_x0019AE10 analyzed;
        Sint32_x0019AE10 ncount;
        Sint32_x0019AE10 tscale;
        SFHDS_FHD_x0019AE10 fhd;
        SFSEE_SHDR_x0019AE10 shdr;
        Uint8_x0019AE10 pada38[0xAD0 - 0xA38];
        Sint32_x0019AE10 a1hdr;
        Sint32_x0019AE10 a1ncount;
        Sint32_x0019AE10 a1tscale;
        Uint8_x0019AE10 padadc[0xD0C - 0xADC];
        Sint32_x0019AE10 a2hdr;
        Sint32_x0019AE10 a2ncount;
        Sint32_x0019AE10 a2tscale;
        Uint8_x0019AE10 padd18[0xDA8 - 0xD18];
        Sint32_x0019AE10 rate;
        Sint32_x0019AE10 fsize_est;
        Sint32_x0019AE10 tot_est;
        Sint32_x0019AE10 tunit_est;
        Sint32_x0019AE10 av_a;
        Sint32_x0019AE10 av_b;
        Sint32_x0019AE10 paddc0;
        Sint32_x0019AE10 fsize;
        Sint32_x0019AE10 tottime;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 byterate;
        Sint32_x0019AE10 seekpos;
} SFSEE_WORK_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Sint32_x0019AE10 pos;
        Sint32_x0019AE10 x08;
} SFSEE_REQ_x0019AE10;
typedef struct {
        Sint32_x0019AE10 bsize;
        Sint32_x0019AE10 xsize;
        void *buf;
        Sint32_x0019AE10 maxnch;
        Sint32_x0019AE10 x10;
        Sint32_x0019AE10 worksize;
        void *work;
} SFADXT_PARA_x0019AE10;
typedef struct {
        void *adxt;
        SJ_x0019AE10 sj;
        SFADXT_PARA_x0019AE10 para;
        Sint32_x0019AE10 tcount;
        Sint32_x0019AE10 tunit;
        Sint32_x0019AE10 pause;
        Sint32_x0019AE10 discard;
        Sint32_x0019AE10 seekflg;
        Sint32_x0019AE10 smplofst;
        void (*func)(SFD_x0019AE10 sfd, Uint8_x0019AE10 *data, Sint32_x0019AE10 len, Sint32_x0019AE10 *nbyte);
        Sint32_x0019AE10 x40;
        Sint32_x0019AE10 svrfreq;
        Sint32_x0019AE10 totbyte;
        Sint32_x0019AE10 x4c;
} SFADXT_WORK_x0019AE10;
typedef struct {
        SFSEE_WORK_x0019AE10 *wk;
        SFSEE_REQ_x0019AE10 req;
} SFSEE_HN_x0019AE10;
typedef struct {
        Sint32_x0019AE10 x00;
        Uint32_x0019AE10 adr;
        Sint32_x0019AE10 size[7];
        Sint32_x0019AE10 x24;
        Sint32_x0019AE10 unit;
        Sint32_x0019AE10 x2c;
        Sint32_x0019AE10 x30;
        Sint32_x0019AE10 x34;
        Sint32_x0019AE10 x38;
        void *hnwork;
        Sint32_x0019AE10 hnwksiz;
} SFD_CREPRM_x0019AE10;
typedef struct {
        void *x00;
        Sint32_x0019AE10 x04;
        Sint32_x0019AE10 x08;
} SFPLY_PTSM_x0019AE10;
typedef struct {
        Sint64_x0019AE10 sum;
        Sint64_x0019AE10 min;
        Sint64_x0019AE10 max;
        Sint32_x0019AE10 cnt;
} SFTMR_TSUM_x0019AE10;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019AE10 nvid;
        Sint32_x0019AE10 naud;
        Sint32_x0019AE10 x0c;
        Sint64_x0019AE10 pts_min;
        Sint64_x0019AE10 pts_min2;
        Sint32_x0019AE10 concat_cnt;
        Sint32_x0019AE10 last_vid;
        Sint32_x0019AE10 last_aud;
        Sint32_x0019AE10 first_vid;
        Sint32_x0019AE10 first_aud;
        Sint32_x0019AE10 cur_vid;
        Sint32_x0019AE10 cur_aud;
        Sint32_x0019AE10 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019AE10 stmid);
        void *outobj;
        Sint32_x0019AE10 skip;
        Sint32_x0019AE10 x15c;
        Sint32_x0019AE10 x160;
        Sint32_x0019AE10 x164;
} SFMPS_WORK_x0019AE10;
typedef struct SFD_OBJ_x0019AE10 {
        SFD_CREPRM_x0019AE10 prm;
        Sint32_x0019AE10 chg_flg;
        Sint32_x0019AE10 stat;
        Sint32_x0019AE10 req;
        Sint32_x0019AE10 pause_sw;
        Sint32_x0019AE10 pause_cnt;
        Uint8_x0019AE10 pad58[0x74 - 0x58];
        Sint32_x0019AE10 pad74;
        SFHDS_FHD_x0019AE10 fhd;
        Sint32_x0019AE10 x90c;
        Sint32_x0019AE10 x910;
        Sint32_x0019AE10 x914;
        Sint32_x0019AE10 x918;
        Sint32_x0019AE10 x91c;
        Sint32_x0019AE10 picrate;
        Sint32_x0019AE10 x924;
        Sint32_x0019AE10 x928;
        Sint32_x0019AE10 x92c;
        Sint32_x0019AE10 numelem_aud;
        Sint32_x0019AE10 numelem_vid;
        Sint32_x0019AE10 numelem_prv;
        Sint32_x0019AE10 x93c;
        Sint32_x0019AE10 x940;
        Sint32_x0019AE10 x944;
        Sint32_x0019AE10 x948;
        Sint32_x0019AE10 x94c;
        SFD_PLYINF_x0019AE10 plyinf;
        SFLIB_ERRINF_x0019AE10 err;
        Sint32_x0019AE10 cond[100];
        Sint32_x0019AE10 cond_def[100];
        Uint8_x0019AE10 padD24[4];
        SFCON_x0019AE10 con;
        Uint8_x0019AE10 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019AE10))];
        Uint8_x0019AE10 tst[0x1C0];
        Uint8_x0019AE10 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019AE10 ptsm;
        Uint8_x0019AE10 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019AE10 buf[8];
        SFD_VFRM_x0019AE10 vfrm[16];
        SFD_TR_x0019AE10 tr[9];
        Sint32_x0019AE10 pad218c;
        SFMPS_WORK_x0019AE10 mps;
        Uint8_x0019AE10 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019AE10 mpv;
        SFADXT_WORK_x0019AE10 adxt;
        Uint8_x0019AE10 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019AE10 aoap;
        SFUO_x0019AE10 uo_tbl;
        Sint32_x0019AE10 pad34c4;
        SFSEE_HN_x0019AE10 see;
        SFTMR_TSUM_x0019AE10 tsum[6];
} SFD_OBJ_x0019AE10;
Sint32_x0019AE10 SFLIB_SetErr_x0019AE10(SFD_x0019AE10 sfd, Sint32_x0019AE10 code) __asm__("func_0018D650");
typedef void (*SFTIM_TC2TIME_FN_x0019AE10)(Sint32_x0019AE10 prate, SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale);
extern const Sint32_x0019AE10 SFTIM_prate_x0019AE10[9] __asm__("D_00467730");
extern const SFTIM_TC2TIME_FN_x0019AE10 sftim_tc2time_x0019AE10[9][2] __asm__("D_00467758");
void func_0019AE10_x0019AE10(SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale) __asm__("func_0019AE10");
/* SFTIM_Tc2Time: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019AE10_x0019AE10(SFTIM_TC_x0019AE10 *tc, Sint32_x0019AE10 *ncount, Sint32_x0019AE10 *tscale)
{
        SFTIM_TC2TIME_FN_x0019AE10 fn;
        Sint32_x0019AE10 prate;
        prate = SFTIM_prate_x0019AE10[tc->type];
        fn = sftim_tc2time_x0019AE10[tc->type][tc->drop];
        if (fn == 0) {
                SFLIB_SetErr_x0019AE10(0, 0xFF000221);
                *ncount = 0;
                *tscale = 1;
                return;
        }
        fn(prate, tc, ncount, tscale);
}
typedef struct SfdTimeCode_x0019AEB0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019AEB0;
void func_0019AEB0_x0019AEB0(unsigned int rate, SfdTimeCode_x0019AEB0 *tc, int *ticks, int *out_rate) __asm__("func_0019AEB0");
/* sftim_Tc2TimeN: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019AEB0_x0019AEB0(unsigned int rate, SfdTimeCode_x0019AEB0 *tc, int *ticks, int *out_rate)
{
    int hours = tc->hour * rate;
    int minutes = tc->minute * rate;
    int frames = tc->frame + tc->add;
    *ticks = tc->second * rate + tc->field * 500 + (hours * 3600 + minutes * 60 + frames * 1000);
    *out_rate = rate;
}
s32 func_0019AEB0_x0019AF40(s32) __asm__("func_0019AEB0");
void func_0019AF40_x0019AF40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AF40");
void func_0019AF40_x0019AF40(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AF40(0x5DC0);
    *arg3 = arg0;
}
s32 func_0019AEB0_x0019AF78(s32) __asm__("func_0019AEB0");
void func_0019AF78_x0019AF78(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AF78");
void func_0019AF78_x0019AF78(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AF78(0x7530);
    *arg3 = arg0;
}
s32 func_0019AEB0_x0019AFB0(s32) __asm__("func_0019AEB0");
void func_0019AFB0_x0019AFB0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019AFB0");
void func_0019AFB0_x0019AFB0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    func_0019AEB0_x0019AFB0(0xEA60);
    *arg3 = arg0;
}
typedef struct SfdTimeCode_x0019AFE8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019AFE8;
void func_0019AFE8_x0019AFE8(int rate, SfdTimeCode_x0019AFE8 *tc, int *ticks, int *out_rate) __asm__("func_0019AFE8");
/* sftim_Tc2Time23D: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019AFE8_x0019AFE8(int rate, SfdTimeCode_x0019AFE8 *tc, int *ticks, int *out_rate)
{
    int m, days, secs, rest;
    m = tc->minute;
    secs = tc->hour * 86292 + m * 1438;
    rest = tc->frame + tc->add;
    days = (tc->second * 12 + m / 10) * 2;
    *ticks = (days + secs + rest) * 1000 + tc->field * 500;
    *out_rate = rate;
}
typedef struct SfdTimeCode_x0019B088 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019B088;
void func_0019B088_x0019B088(int rate, SfdTimeCode_x0019B088 *tc, int *ticks, int *out_rate) __asm__("func_0019B088");
/* sftim_Tc2Time29D: from https://github.com/crashbashash/DW4_Decomp (src/cri/sftim.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019B088_x0019B088(int rate, SfdTimeCode_x0019B088 *tc, int *ticks, int *out_rate)
{
    int m, days, secs, rest;
    m = tc->minute;
    secs = tc->hour * 107892 + m * 1798;
    rest = tc->frame + tc->add;
    days = (tc->second * 15 + m / 10) * 2;
    *ticks = (days + secs + rest) * 1000 + tc->field * 500;
    *out_rate = rate;
}
typedef struct SfdTimeCode_x0019B120 { int rate; int drop; int hour; int minute; int second; int frame; int add; short repeat; short field; } SfdTimeCode_x0019B120;
void func_0019B120_x0019B120(int rate, SfdTimeCode_x0019B120 *tc, int *ticks, int *out_rate) __asm__("func_0019B120");
void func_0019B120_x0019B120(int rate, SfdTimeCode_x0019B120 *tc, int *ticks, int *out_rate)
{
    int frames = tc->frame + tc->add;
    int minute = tc->minute;
    int second = tc->second;
    int hour = tc->hour;
    int field = tc->field;
    int fromSeconds = (second * 30 + minute / 10) * 2;
    int fromHoursMinutes = hour * 215892 + minute * 3598;
    *ticks = (fromSeconds + fromHoursMinutes + frames) * 1000 + field * 500;
    *out_rate = rate;
}
extern void func_0035B5B8_x0019B1C8(void *, int *, int *) __asm__("func_0019B2E0");
extern void func_0035B500_x0019B1C8(void *, int, int) __asm__("func_0019B228");
extern void func_0035B568_x0019B1C8(void *, int, int) __asm__("func_0019B290");
void func_0019B1C8_x0019B1C8(void *a0, int a1) __asm__("func_0019B1C8");
/* func_0035B4A0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00323a00.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019B1C8_x0019B1C8(void *a0, int a1) {
    void *s0;
    int tmp0;
    int tmp1;
    s0 = a0;
    if ((unsigned int)a1 < 2) return;
    if (a1 != 2) return;
    func_0035B5B8_x0019B1C8(s0, &tmp0, &tmp1);
    func_0035B500_x0019B1C8(s0, tmp0, tmp1);
    func_0035B568_x0019B1C8(s0, tmp0, tmp1);
}
s32 func_0017EE78_x0019B228() __asm__("func_0017EE78");
s32 func_0018D908_x0019B228() __asm__("func_0018D908");
s32 func_0018D920_x0019B228() __asm__("func_0018D920");
extern s32 D_00426A98_x0019B228 __asm__("D_00426A98");
void func_0019B228_x0019B228(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019B228");
void func_0019B228_x0019B228(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp[8];
    s32 temp_s1;
    u8 *temp_s0;

    temp_s0 = arg0 + 0xCC0;
    temp_s1 = func_0017EE78_x0019B228(D_00426A98_x0019B228, arg1, arg2);
    func_0018D908_x0019B228(sp);
    *(volatile s32 *)((u8 *)temp_s0 + 0x29C) = *(volatile s32 *)((u8 *)temp_s0 + 0x29C) + temp_s1;
    *(volatile s32 *)((u8 *)temp_s0 + 0x2C0) = *(volatile s32 *)((u8 *)temp_s0 + 0x2C0) + temp_s1;
    func_0018D920_x0019B228(sp);
}
s32 func_0017EE78_x0019B290(s32) __asm__("func_0017EE78");
void func_0018D908_x0019B290(s32 *) __asm__("func_0018D908");
void func_0018D920_x0019B290(s32 *) __asm__("func_0018D920");
void func_0019B290_x0019B290(u8 *a0) __asm__("func_0019B290");
void func_0019B290_x0019B290(u8 *a0)
{
    u8 *p = a0 + 0xCC0;
    s32 buf[4];
    s32 n = func_0017EE78_x0019B290(*(s32 *)(p + 0x2D4));
    func_0018D908_x0019B290(buf);
    *(s32 *)(p + 0x2D0) += n;
    func_0018D920_x0019B290(buf);
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_0019B290_0_xxxx;
typedef unsigned char u8_x0019B2E0;
typedef struct SfdPlaybackSettings_x0019B2E0 {
    u8_x0019B2E0 unknown_00[0x14];
    int frame_rate_code;
} SfdPlaybackSettings_x0019B2E0;
typedef struct SfdHandle_x0019B2E0 {
    u8_x0019B2E0 unknown_0000[0x44];
    int field_0044;
    int playback_state;
    u8_x0019B2E0 unknown_004C[0x8C0];
    SfdPlaybackSettings_x0019B2E0 playback_settings;
} SfdHandle_x0019B2E0;
extern const int lbl_12_rodata_E10_x0019B2E0[9] __asm__("D_00467730");
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) __asm__("func_0019B2E0");
/* SFTIM_GetTimeOneFrmVideo: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/SFTIM_GetTimeOneFrmVideo.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0019B2E0_x0019B2E0(SfdHandle_x0019B2E0 *handle, int *value, int *scale) {
    int code = handle->playback_settings.frame_rate_code;
    if (code == 0) {
        *value = 0;
        *scale = 29970;
    } else {
        *value = 1000;
        *scale = lbl_12_rodata_E10_x0019B2E0[code];
    }
}
typedef unsigned char Uint8_x0019B320;
typedef signed char Sint8_x0019B320;
typedef signed short Sint16_x0019B320;
typedef unsigned int Uint32_x0019B320;
typedef signed int Sint32_x0019B320;
typedef signed long long Sint64_x0019B320;
typedef char Char8_x0019B320;
typedef struct SJ_OBJ_x0019B320 *SJ_x0019B320;
typedef struct {
        Uint8_x0019B320 *data;
        Sint32_x0019B320 len;
} SJCK_x0019B320;
typedef struct {
        Uint8_x0019B320 data[16];
} SJUUID_x0019B320;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0019B320 sj);
        const SJUUID_x0019B320 *(*GetUuid)(SJ_x0019B320 sj);
        void (*Reset)(SJ_x0019B320 sj);
        void (*GetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, Sint32_x0019B320 nbyte, SJCK_x0019B320 *ck);
        void (*UngetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, SJCK_x0019B320 *ck);
        void (*PutChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, SJCK_x0019B320 *ck);
        Sint32_x0019B320 (*GetNumData)(SJ_x0019B320 sj, Sint32_x0019B320 id);
        Sint32_x0019B320 (*IsGetChunk)(SJ_x0019B320 sj, Sint32_x0019B320 id, Sint32_x0019B320 nbyte, Sint32_x0019B320 *rbyte);
        void (*EntryErrFunc)(SJ_x0019B320 sj, void (*func)(void *obj, Char8_x0019B320 *msg), void *obj);
} SJ_IF_x0019B320;
struct SJ_OBJ_x0019B320 {
        SJ_IF_x0019B320 *vtbl;
};
typedef struct SFD_OBJ_x0019B320 *SFD_x0019B320;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0019B320 rsv1;
        Sint32_x0019B320 rsv2;
} SFUO_CH_x0019B320;
typedef struct {
        Sint32_x0019B320 nch;
        SFUO_CH_x0019B320 ch[3];
} SFUO_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Sint32_x0019B320 (*SetOutPan)(SFD_x0019B320 sfd, Sint32_x0019B320 ch, Sint32_x0019B320 pan);
        Sint32_x0019B320 (*GetOutPan)(SFD_x0019B320 sfd, Sint32_x0019B320 ch);
        Sint32_x0019B320 (*SetOutVol)(SFD_x0019B320 sfd, Sint32_x0019B320 vol);
        Sint32_x0019B320 (*GetOutVol)(SFD_x0019B320 sfd);
        void (*SetSpeed)(SFD_x0019B320 sfd, Sint32_x0019B320 speed);
        Sint32_x0019B320 x18;
} SFAOAP_x0019B320;
typedef struct {
        Uint8_x0019B320 pad0[0xB8];
        Sint32_x0019B320 tottime;
        Sint32_x0019B320 tunit;
        Uint8_x0019B320 padc0[0x150 - 0xC0];
        Sint64_x0019B320 scr_base;
        Sint64_x0019B320 scr_ofst;
        Sint32_x0019B320 pad160;
        Sint32_x0019B320 ctime;
        Sint32_x0019B320 ctime_idx;
        Sint32_x0019B320 ctime_que[32];
        Sint32_x0019B320 tot_last;
        Sint32_x0019B320 pad1F0;
        Sint32_x0019B320 que_wr;
        Sint32_x0019B320 que_rd;
        Sint32_x0019B320 tot_que[32];
} SFCON_x0019B320;
typedef struct {
        Sint32_x0019B320 type;
        Sint32_x0019B320 drop;
        Sint32_x0019B320 hour;
        Sint32_x0019B320 min;
        Sint32_x0019B320 sec;
        Sint32_x0019B320 frm;
        Sint32_x0019B320 frm2;
        Sint16_x0019B320 x1c;
        Sint16_x0019B320 field;
} SFTIM_TC_x0019B320;
typedef struct {
        Sint32_x0019B320 valid;
        SFTIM_TC_x0019B320 tc;
        Sint32_x0019B320 val;
        Sint32_x0019B320 unit;
} SFTIM_TTU_x0019B320;
extern const Sint32_x0019B320 SFTIM_prate_x0019B320[9] __asm__("D_00467730");
typedef struct {
        Sint64_x0019B320 pts;
        Uint32_x0019B320 pos;
        Uint32_x0019B320 len;
} SFPTS_ENT_x0019B320;
typedef struct {
        SFPTS_ENT_x0019B320 *ent;
        Sint32_x0019B320 num;
        Sint32_x0019B320 cnt;
        Sint32_x0019B320 wr;
        Sint32_x0019B320 rd;
} SFPTS_QUE_x0019B320;
typedef struct {
        Sint32_x0019B320 raw[0x20];
} SFD_VFRM_INF_x0019B320;
typedef struct {
        void *frm;
        Sint32_x0019B320 x04;
        SFD_VFRM_INF_x0019B320 inf;
} SFD_VFRM_x0019B320;
typedef struct {
        Sint32_x0019B320 kind;
        SJ_x0019B320 sj;
        Uint32_x0019B320 ofst;
        Sint32_x0019B320 size;
        Sint32_x0019B320 xsize;
        Sint32_x0019B320 x14;
} SFBUF_SUP_x0019B320;
typedef struct {
        SFBUF_SUP_x0019B320 sup;
        Uint8_x0019B320 *dlm_pos;
        Sint32_x0019B320 dlm_len;
        Sint32_x0019B320 wtot;
        Sint32_x0019B320 rtot;
        SFPTS_QUE_x0019B320 ptsque;
} SFBUF_RING_x0019B320;
typedef struct {
        Sint32_x0019B320 mode;
        Sint32_x0019B320 used;
        Sint32_x0019B320 prepflg;
        Sint32_x0019B320 termflg;
        union {
                SFBUF_RING_x0019B320 ring;
                struct {
                        Uint32_x0019B320 adr;
                        Sint32_x0019B320 size;
                        Sint32_x0019B320 x18;
                        Sint32_x0019B320 x1c;
                        SFD_VFRM_x0019B320 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0019B320 adr;
                        Sint32_x0019B320 size;
                        Sint32_x0019B320 rsv[7];
                        Sint32_x0019B320 rsv2[3];
                } aout;
                SFUO_CH_x0019B320 uoch[3];
        } u;
        Sint32_x0019B320 in_tr;
        Sint32_x0019B320 out_tr;
        Sint32_x0019B320 rsv[8];
} SFBUF_WORK_x0019B320;
typedef Sint32_x0019B320 (*SFD_TR_FUNC_x0019B320)();
typedef struct {
        Sint32_x0019B320 prepflg;
        Sint32_x0019B320 termflg;
        void *hn;
        SFD_TR_FUNC_x0019B320 *trif;
        Sint32_x0019B320 bufin;
        Sint32_x0019B320 bufout;
        Sint32_x0019B320 bufout2;
        Sint32_x0019B320 bufout3;
        Sint32_x0019B320 x20;
        Uint8_x0019B320 pad24[0x44 - 0x24];
} SFD_TR_x0019B320;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0019B320 cwidth;
        Sint16_x0019B320 ywidth;
} SFMPV_PLANE_x0019B320;
typedef struct {
        void *buf;
        Sint32_x0019B320 len;
} SFMPV_PICUSR_x0019B320;
typedef struct {
        Sint32_x0019B320 stat;
        Sint32_x0019B320 lock;
        void *buf;
        SFTIM_TTU_x0019B320 ttu;
        Sint32_x0019B320 ftime;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 ndct;
        Sint32_x0019B320 nbyte;
        Sint32_x0019B320 gopno;
        Sint32_x0019B320 x4c;
        Sint32_x0019B320 x50;
        SFMPV_PICUSR_x0019B320 *picusr;
        Sint32_x0019B320 pa_width;
        Sint32_x0019B320 pa_height;
        Sint32_x0019B320 pa_mb_width;
        Sint32_x0019B320 pa_mb_height;
        Sint32_x0019B320 pa_frame_rate;
        Sint32_x0019B320 tmpref;
        Sint32_x0019B320 pa_pic_type;
        Sint32_x0019B320 pa_tc_drop;
        Sint32_x0019B320 pa_tc_hour;
        Sint32_x0019B320 pa_tc_min;
        Sint32_x0019B320 pa_tc_sec;
        Sint32_x0019B320 pa_tc_pic;
        Sint32_x0019B320 x88;
        Sint32_x0019B320 x8c;
        Sint32_x0019B320 pa_x90[3];
        Sint32_x0019B320 pa_x9c[3];
        Sint16_x0019B320 pa_xa8;
        Sint16_x0019B320 pa_xaa;
        Sint8_x0019B320 pa_xac;
        Sint8_x0019B320 pa_xad;
        Sint8_x0019B320 pa_xae;
        Sint8_x0019B320 pa_xaf;
        Sint8_x0019B320 pa_xb0;
        Sint8_x0019B320 pa_xb1;
        Sint8_x0019B320 pa_xb2;
        Sint8_x0019B320 pa_xb3;
        Sint8_x0019B320 pa_xb4;
        Sint8_x0019B320 pa_xb5;
        Sint8_x0019B320 pa_xb6;
        Sint8_x0019B320 pa_xb7;
        Sint8_x0019B320 pa_xb8;
        Sint8_x0019B320 pa_xb9;
        Sint8_x0019B320 pa_xba;
        Sint8_x0019B320 pa_xbb;
        Sint8_x0019B320 pa_xbc;
        Uint8_x0019B320 padbd[0xD8 - 0xBD];
        Sint64_x0019B320 pts;
} SFMPV_FRM_x0019B320;
typedef struct {
        Sint32_x0019B320 cwidth;
        Sint32_x0019B320 cheight;
        Sint32_x0019B320 width;
        Sint32_x0019B320 height;
        Sint32_x0019B320 x10;
        Sint32_x0019B320 max_width;
        Sint32_x0019B320 max_height;
        Sint32_x0019B320 nfrm;
        Sint32_x0019B320 x20;
} SFMPV_PARA_x0019B320;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0019B320 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0019B320 *curfrm;
        Sint32_x0019B320 picstat;
        Sint32_x0019B320 dlmmask;
        Sint32_x0019B320 termflg;
        Sint32_x0019B320 gopstat;
        Sint32_x0019B320 nskip;
        Sint32_x0019B320 nconcat;
        Uint8_x0019B320 picatr[0x80];
        Sint32_x0019B320 last_ngop;
        Sint32_x0019B320 newgop;
        Sint32_x0019B320 vbvsiz;
        Sint32_x0019B320 pts_tmpref;
        Sint32_x0019B320 pts_ofst;
        Sint32_x0019B320 pts_max;
        Sint32_x0019B320 pad124;
        SFPTS_ENT_x0019B320 ptsent;
        Sint32_x0019B320 refidx[2];
        SFMPV_PLANE_x0019B320 rfbuf[2];
        SFMPV_FRM_x0019B320 *ref[2];
        SFMPV_FRM_x0019B320 *pendfrm;
        Sint32_x0019B320 skipret;
        Sint32_x0019B320 dlmwait;
        Sint32_x0019B320 tmpref_adj;
        Sint32_x0019B320 nfrm;
        Sint32_x0019B320 pad17c;
        SFMPV_FRM_x0019B320 frm[16];
        void *picusr_buf;
        Sint32_x0019B320 picusr_num;
        Sint32_x0019B320 picusr_siz;
        Uint8_x0019B320 *picusr_dat;
        Sint32_x0019B320 picusr_len;
        SFMPV_PICUSR_x0019B320 picusr[16];
        Sint32_x0019B320 pad1014;
        Sint64_x0019B320 pts;
} SFMPV_WORK_x0019B320;
typedef struct {
        Sint32_x0019B320 raw[0x2A];
} SFD_PLYINF_x0019B320 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0019B320 code);
        void *obj;
        Sint32_x0019B320 code;
        Sint32_x0019B320 x0c;
        Sint32_x0019B320 x10;
} SFLIB_ERRINF_x0019B320;
typedef struct {
        Sint32_x0019B320 codec;
        Sint32_x0019B320 layer;
        Sint32_x0019B320 chnum;
        Sint32_x0019B320 smphz;
} SFHDS_AUD_x0019B320;
typedef struct {
        Sint32_x0019B320 codec;
        Sint32_x0019B320 bitrate;
        Sint32_x0019B320 picw;
        Sint32_x0019B320 pich;
        Sint32_x0019B320 picrate;
        Sint32_x0019B320 ftr_eff;
        Sint32_x0019B320 ftr_coltype;
        Sint32_x0019B320 ftr_pictype;
        Sint32_x0019B320 ftr_fixflg;
        Sint32_x0019B320 ftr_shcfixflg;
        Sint32_x0019B320 ftr_expand;
        Sint32_x0019B320 ftr_gopn;
        Sint32_x0019B320 ftr_gopm;
} SFHDS_VID_x0019B320;
typedef struct {
        Sint32_x0019B320 valid;
        Sint32_x0019B320 ver_major;
        Sint32_x0019B320 ver_minor;
        Sint32_x0019B320 byterate;
        Sint32_x0019B320 hdrsiz;
        Sint32_x0019B320 packtype;
        Sint32_x0019B320 pketsizlen;
        Sint32_x0019B320 packsiz;
        Sint32_x0019B320 numelem_tot;
        Sint32_x0019B320 numelem_aud;
        Sint32_x0019B320 numelem_vid;
        Sint32_x0019B320 numelem_prv;
        Sint32_x0019B320 maxplylen_aud;
        Sint32_x0019B320 maxplylen_vid;
        Sint32_x0019B320 maxfrmnum;
        Sint32_x0019B320 stmid_prv1;
        Sint32_x0019B320 stmid_prv2;
        Sint32_x0019B320 stmid_aud;
        Sint32_x0019B320 stmid_vid;
        SFHDS_AUD_x0019B320 aud;
        SFHDS_VID_x0019B320 vid;
        Sint32_x0019B320 rawsiz;
        Uint8_x0019B320 raw[0x800];
} SFHDS_FHD_x0019B320;
typedef struct {
        Uint8_x0019B320 data[2][0xB0];
        Sint32_x0019B320 len[2];
} SFSEE_SYSHD_x0019B320;
typedef struct {
        Sint32_x0019B320 analyzed;
        Sint32_x0019B320 ncount;
        Sint32_x0019B320 tscale;
        Sint32_x0019B320 nvid;
        Sint32_x0019B320 naud;
        Sint32_x0019B320 pad14;
        Sint64_x0019B320 scr_base;
        Sint64_x0019B320 pts_min;
        Sint32_x0019B320 stmid_vid;
        Sint32_x0019B320 stmid_aud;
        SFSEE_SYSHD_x0019B320 syshd;
} SFSEE_SHDR_x0019B320;
typedef struct {
        Sint32_x0019B320 analyzed;
        Sint32_x0019B320 ncount;
        Sint32_x0019B320 tscale;
        SFHDS_FHD_x0019B320 fhd;
        SFSEE_SHDR_x0019B320 shdr;
        Uint8_x0019B320 pada38[0xAD0 - 0xA38];
        Sint32_x0019B320 a1hdr;
        Sint32_x0019B320 a1ncount;
        Sint32_x0019B320 a1tscale;
        Uint8_x0019B320 padadc[0xD0C - 0xADC];
        Sint32_x0019B320 a2hdr;
        Sint32_x0019B320 a2ncount;
        Sint32_x0019B320 a2tscale;
        Uint8_x0019B320 padd18[0xDA8 - 0xD18];
        Sint32_x0019B320 rate;
        Sint32_x0019B320 fsize_est;
        Sint32_x0019B320 tot_est;
        Sint32_x0019B320 tunit_est;
        Sint32_x0019B320 av_a;
        Sint32_x0019B320 av_b;
        Sint32_x0019B320 paddc0;
        Sint32_x0019B320 fsize;
        Sint32_x0019B320 tottime;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 byterate;
        Sint32_x0019B320 seekpos;
} SFSEE_WORK_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Sint32_x0019B320 pos;
        Sint32_x0019B320 x08;
} SFSEE_REQ_x0019B320;
typedef struct {
        Sint32_x0019B320 bsize;
        Sint32_x0019B320 xsize;
        void *buf;
        Sint32_x0019B320 maxnch;
        Sint32_x0019B320 x10;
        Sint32_x0019B320 worksize;
        void *work;
} SFADXT_PARA_x0019B320;
typedef struct {
        void *adxt;
        SJ_x0019B320 sj;
        SFADXT_PARA_x0019B320 para;
        Sint32_x0019B320 tcount;
        Sint32_x0019B320 tunit;
        Sint32_x0019B320 pause;
        Sint32_x0019B320 discard;
        Sint32_x0019B320 seekflg;
        Sint32_x0019B320 smplofst;
        void (*func)(SFD_x0019B320 sfd, Uint8_x0019B320 *data, Sint32_x0019B320 len, Sint32_x0019B320 *nbyte);
        Sint32_x0019B320 x40;
        Sint32_x0019B320 svrfreq;
        Sint32_x0019B320 totbyte;
        Sint32_x0019B320 x4c;
} SFADXT_WORK_x0019B320;
typedef struct {
        SFSEE_WORK_x0019B320 *wk;
        SFSEE_REQ_x0019B320 req;
} SFSEE_HN_x0019B320;
typedef struct {
        Sint32_x0019B320 x00;
        Uint32_x0019B320 adr;
        Sint32_x0019B320 size[7];
        Sint32_x0019B320 x24;
        Sint32_x0019B320 unit;
        Sint32_x0019B320 x2c;
        Sint32_x0019B320 x30;
        Sint32_x0019B320 x34;
        Sint32_x0019B320 x38;
        void *hnwork;
        Sint32_x0019B320 hnwksiz;
} SFD_CREPRM_x0019B320;
typedef struct {
        void *x00;
        Sint32_x0019B320 x04;
        Sint32_x0019B320 x08;
} SFPLY_PTSM_x0019B320;
typedef struct {
        Sint64_x0019B320 sum;
        Sint64_x0019B320 min;
        Sint64_x0019B320 max;
        Sint32_x0019B320 cnt;
} SFTMR_TSUM_x0019B320;
typedef struct {
        struct MPS_OBJ *mps;
        Sint32_x0019B320 nvid;
        Sint32_x0019B320 naud;
        Sint32_x0019B320 x0c;
        Sint64_x0019B320 pts_min;
        Sint64_x0019B320 pts_min2;
        Sint32_x0019B320 concat_cnt;
        Sint32_x0019B320 last_vid;
        Sint32_x0019B320 last_aud;
        Sint32_x0019B320 first_vid;
        Sint32_x0019B320 first_aud;
        Sint32_x0019B320 cur_vid;
        Sint32_x0019B320 cur_aud;
        Sint32_x0019B320 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0019B320 stmid);
        void *outobj;
        Sint32_x0019B320 skip;
        Sint32_x0019B320 x15c;
        Sint32_x0019B320 x160;
        Sint32_x0019B320 x164;
} SFMPS_WORK_x0019B320;
typedef struct SFD_OBJ_x0019B320 {
        SFD_CREPRM_x0019B320 prm;
        Sint32_x0019B320 chg_flg;
        Sint32_x0019B320 stat;
        Sint32_x0019B320 req;
        Sint32_x0019B320 pause_sw;
        Sint32_x0019B320 pause_cnt;
        Uint8_x0019B320 pad58[0x74 - 0x58];
        Sint32_x0019B320 pad74;
        SFHDS_FHD_x0019B320 fhd;
        Sint32_x0019B320 x90c;
        Sint32_x0019B320 x910;
        Sint32_x0019B320 x914;
        Sint32_x0019B320 x918;
        Sint32_x0019B320 x91c;
        Sint32_x0019B320 picrate;
        Sint32_x0019B320 x924;
        Sint32_x0019B320 x928;
        Sint32_x0019B320 x92c;
        Sint32_x0019B320 numelem_aud;
        Sint32_x0019B320 numelem_vid;
        Sint32_x0019B320 numelem_prv;
        Sint32_x0019B320 x93c;
        Sint32_x0019B320 x940;
        Sint32_x0019B320 x944;
        Sint32_x0019B320 x948;
        Sint32_x0019B320 x94c;
        SFD_PLYINF_x0019B320 plyinf;
        SFLIB_ERRINF_x0019B320 err;
        Sint32_x0019B320 cond[100];
        Sint32_x0019B320 cond_def[100];
        Uint8_x0019B320 padD24[4];
        SFCON_x0019B320 con;
        Uint8_x0019B320 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0019B320))];
        Uint8_x0019B320 tst[0x1C0];
        Uint8_x0019B320 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0019B320 ptsm;
        Uint8_x0019B320 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0019B320 buf[8];
        SFD_VFRM_x0019B320 vfrm[16];
        SFD_TR_x0019B320 tr[9];
        Sint32_x0019B320 pad218c;
        SFMPS_WORK_x0019B320 mps;
        Uint8_x0019B320 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0019B320 mpv;
        SFADXT_WORK_x0019B320 adxt;
        Uint8_x0019B320 pad3410[0x3474 - 0x3410];
        SFAOAP_x0019B320 aoap;
        SFUO_x0019B320 uo_tbl;
        Sint32_x0019B320 pad34c4;
        SFSEE_HN_x0019B320 see;
        SFTMR_TSUM_x0019B320 tsum[6];
} SFD_OBJ_x0019B320;
Sint32_x0019B320 SFLIB_SetErr_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 code) __asm__("func_0018D650");
Sint32_x0019B320 SFLIB_CheckHn_x0019B320(SFD_x0019B320 sfd) __asm__("func_0018D870");
extern const Sint32_x0019B320 SFTIM_prate_x0019B320[9] __asm__("D_00467730");
Sint32_x0019B320 func_0019B320_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 *fps) __asm__("func_0019B320");
/* SFD_GetFps: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_tim.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019B320 func_0019B320_x0019B320(SFD_x0019B320 sfd, Sint32_x0019B320 *fps)
{
        *fps = -1;
        if (SFLIB_CheckHn_x0019B320(sfd) != 0) {
                return SFLIB_SetErr_x0019B320(0, 0xFF00011B);
        }
        if (sfd->picrate == 0) {
                return 0;
        }
        *fps = SFTIM_prate_x0019B320[sfd->picrate];
        return 0;
}
s32 func_0017EE78_x0019B398(s32, s32, s32) __asm__("func_0017EE78");
s32 func_0018D650_x0019B398(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x0019B398() __asm__("func_0018D870");
extern s32 D_00467730_x0019B398 __asm__("D_00467730");
s32 func_0019B398_x0019B398(u8 *arg0, s32 *arg1) __asm__("func_0019B398");
s32 func_0019B398_x0019B398(u8 *arg0, s32 *arg1)
{
  u8 *new_var;
  s32 temp_v1;
  int new_var2;
  s32 var_v0;
  *arg1 = -1;
  var_v0 = func_0018D870_x0019B398(arg0);
  new_var2 = var_v0 != 0;
  if (new_var2)
  {
    return func_0018D650_x0019B398(0, 0xFF000118);
  }
  new_var = (u8 *) (arg0 + 0xCC0);
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x920));
  if (temp_v1 != 0)
  {
 do { *arg1 = func_0017EE78_x0019B398(*(&D_00467730_x0019B398 + temp_v1), *((s32 *) (new_var + 0x2A0)), 0x3E8); } while (0);
    var_v0 = 0;
  }
  return var_v0;
}
typedef unsigned char u8_x0019B428;
typedef signed int s32_x0019B428;
typedef struct MovieEntry_x0019B428 {
    u8_x0019B428 pad_0[0x14];
    s32_x0019B428 value_14;
    s32_x0019B428 value_18;
} MovieEntry_x0019B428;
extern int fn_12_2DEB0_x0019B428(void *arg0, s32_x0019B428 value_14, s32_x0019B428 value_18) __asm__("func_0019B460");
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) __asm__("func_0019B428");
/* fn_12_2DEF0: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2DEF0.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0019B428_x0019B428(void *arg0, MovieEntry_x0019B428 *entry) {
    if (entry == 0) {
        return 0;
    }
    return fn_12_2DEB0_x0019B428(arg0, entry->value_14, entry->value_18);
}
void func_0019B5E8_x0019B460(u8 *, s32, s32, s32 *, s32) __asm__("func_0019B5E8");
s32 func_0019B460_x0019B460(u8 *p, s32 a1, s32 a2) __asm__("func_0019B460");
s32 func_0019B460_x0019B460(u8 *p, s32 a1, s32 a2)
{
    s32 buf[4];
    u8 *q = p + 0x9A0;
    if (*(s32 *)(q + 0x38) != 0) {
        return 1;
    }
    func_0019B5E8_x0019B460(p, a1, a2, buf, *(s32 *)(q + 0xB0));
    return buf[0];
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B498);
typedef struct { u8 pad[0x38]; s32 f38; u8 pad2[0x78]; s32 fB4; } Sfd9A0_x0019B520_x0019B520;
void func_0019B5E8_x0019B520(s32, s32, s32, s32 *, s32) __asm__("func_0019B5E8");
s32 func_0019B520_x0019B520(s32 a0, s32 a1, s32 a2, s32 *a3) __asm__("func_0019B520");
s32 func_0019B520_x0019B520(s32 a0, s32 a1, s32 a2, s32 *a3)
{
    Sfd9A0_x0019B520_x0019B520 *h;
    s32 r;

    *a3 = 0;
    r = func_0018D870(a0);
    h = (Sfd9A0_x0019B520_x0019B520 *)(a0 + 0x9A0);
    if (r != 0) {
        return func_0018D650(0, 0xFF000126);
    }
    if (h->f38 == 0) {
        *a3 = 1;
        return 0;
    }
    if (*(s32 *)(a0 + 0x4C) != 4) {
        *a3 = 0;
        return 0;
    }
    func_0019B5E8_x0019B520(a0, a1, a2, a3, h->fB4);
    return 0;
}
extern s32 D_00426A90_x0019B5E8[] __asm__("D_00426A90");
void func_0019A718_x0019B5E8(void *, s32 *, s32 *) __asm__("func_0019A718");
void func_0019B738_x0019B5E8(void *, s32, s32, s32 *) __asm__("func_0019B738");
void func_0019B7B0_x0019B5E8(void *, s32 *, float, float) __asm__("func_0019B7B0");
void func_0019B5E8_x0019B5E8(u8 *a0, s32 a1, s32 a2, s32 *a3, s32 a4) __asm__("func_0019B5E8");
void func_0019B5E8_x0019B5E8(u8 *a0, s32 a1, s32 a2, s32 *a3, s32 a4)
{
    s32 *d;
    s32 b0;
    s32 b1;
    s32 k;
    float x;
    float y;

    d = D_00426A90_x0019B5E8;
    func_0019A718_x0019B5E8(a0, &b0, &b1);
    k = b1 * a4;
    if (b1 == 1) {
        if (b0 == -2) {
            *a3 = 1;
            return;
        }
        func_0019B738_x0019B5E8(a0, a1, a2, a3);
        return;
    }
    x = (float)a1 * 10000.0f / (float)a2;
    b0 += k / d[2];
    y = (float)b0 * 10000.0f / (float)b1;
    if (*(s32 *)(a0 + 0x9DC) != 1) {
        func_0019B7B0_x0019B5E8(a0, a3, x, y);
        return;
    }
    if (x <= y) {
        *a3 = 1;
    } else {
        *a3 = 0;
    }
}
s32 func_00172A40_x0019B738(s32, s32, s32, s32) __asm__("func_00172A40");
extern s32 D_00426A90_x0019B738[] __asm__("D_00426A90");
void func_0019B738_x0019B738(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) __asm__("func_0019B738");
void func_0019B738_x0019B738(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3)
{
    s32 *g = D_00426A90_x0019B738;
    u8 *t = arg0 + 0xCC0;
    if (*(s32 *)(t + 0x2C0) < 0) {
        *(s32 *)(t + 0x2C0) = 0;
        *arg3 = 1;
        return;
    }
    if (func_00172A40_x0019B738(arg1, arg2, *(volatile s32 *)(t + 0x2C0), g[2]) != 0) {
        *arg3 = 1;
        return;
    }
    *arg3 = 0;
}
void func_0019B7B0(u8 *arg0, s32 *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    s32 var_t0;
    s32 var_v0;
    u8 *temp_a2;

    temp_f1 = (f32) *(s32 *)((u8 *)arg0 + 0xA58);
    temp_a2 = arg0 + 0xCC0;
    if ((fparg1 + temp_f1) < fparg0) {
        *arg1 = 0;
        return;
    }
    if (fparg0 <= (fparg1 - temp_f1)) {
        *arg1 = 1;
        if ((*(f32 *)((u8 *)temp_a2 + 0x2BC) != fparg0) && (*(f32 *)((u8 *)temp_a2 + 0x2B4) != fparg0)) {
            *(f32 *)((u8 *)temp_a2 + 0x2B4) = fparg0;
            *(s32 *)((u8 *)temp_a2 + 0x2B0) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x2B0) + 1);
        }
    } else {
        var_t0 = 0;
        if ((D_00426A98 == 0xEA24) && (*(s32 *)((u8 *)arg0 + 0x920) < 3)) {
            var_t0 = *(s32 *)((u8 *)temp_a2 + 0x2A0) == 0x3E8;
        }
        if (var_t0 >= *(s32 *)((u8 *)temp_a2 + 0x2B0)) {
            var_v0 = *(s32 *)((u8 *)temp_a2 + 0x2B8);
            goto block_16;
        }
        var_v0 = 1;
        if (fparg1 < fparg0) {
            *arg1 = 0;
        } else {
block_16:
            *arg1 = var_v0;
        }
        *(s32 *)((u8 *)temp_a2 + 0x2B0) = 0;
        *(f32 *)((u8 *)temp_a2 + 0x2BC) = fparg0;
        *(s32 *)((u8 *)temp_a2 + 0x2B8) = (s32) *arg1;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019B8A0);
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) __asm__("func_0019B938");
void func_0019B938_x0019B938(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xF60) = arg1;
}
s32 func_0019B940(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xF60);
}
void func_0019B948_x0019B948(u8 *arg0) __asm__("func_0019B948");
void func_0019B948_x0019B948(u8 *arg0)
{
  *((s64 *) (((u8 *) arg0) + 0)) = (*((s32 *) (((u8 *) arg0) + 0x18)) = 0);
  *((s64 *) (((u8 *) arg0) + 0x10)) = 0;
  *((u64 *) (((u8 *) arg0) + 8)) = (u64) ((-((unsigned long long) 1U)) >> 1);
}
void func_0019B968_x0019B968(u8 *arg0, s64 arg1) __asm__("func_0019B968");
void func_0019B968_x0019B968(u8 *arg0, s64 arg1)
{
  s64 temp_a3;
  s64 temp_t0;
  temp_a3 = *((s64 *) (((u8 *) arg0) + 8));
  temp_t0 = *((s64 *) (((u8 *) arg0) + 0x10));
  *((s64 *) (((u8 *) arg0) + 0)) = (s64) ((*((s64 *) (((u8 *) arg0) + 0))) + arg1);
  *((s64 *) (((u8 *) arg0) + 8)) = (s64) ((arg1 < (*((s64 *) (((u8 *) arg0) + 8)))) ? (arg1) : (temp_a3));
  *((s64 *) (((u8 *) arg0) + 0x10)) = (s64) (((*((s64 *) (((u8 *) arg0) + 0x10))) < arg1) ? (arg1) : (*((s64 *) (((u8 *) arg0) + 0x10))));
  *((s32 *) (((u8 *) arg0) + 0x18)) = (*((s32 *) (((u8 *) arg0) + 0x18))) + 1;
}
typedef signed long Sint32_x0019B9A8;
typedef Sint32_x0019B9A8 (*SFD_TR_FUNC_x0019B9A8)();
typedef struct {
    SFD_TR_FUNC_x0019B9A8 functions[14];
} SFD_TR_IF_x0019B9A8;
typedef struct {
    const SFD_TR_IF_x0019B9A8 *tbl[15];
} SFTRN_TRIF_TBL_x0019B9A8;
Sint32_x0019B9A8 sftrn_CallInit_x0019B9A8(const SFD_TR_IF_x0019B9A8 **p, Sint32_x0019B9A8 ret) __asm__("func_0019BA58");
Sint32_x0019B9A8 func_0019B9A8_x0019B9A8(SFTRN_TRIF_TBL_x0019B9A8 *dst, SFTRN_TRIF_TBL_x0019B9A8 *src) __asm__("func_0019B9A8");
/* SFTRN_Init: from https://github.com/dev-camo/shadow-decomp (src/CRI/sfd_trn.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0019B9A8 func_0019B9A8_x0019B9A8(SFTRN_TRIF_TBL_x0019B9A8 *dst, SFTRN_TRIF_TBL_x0019B9A8 *src) {
    Sint32_x0019B9A8 ret;
    ret = 0;
    *dst = *src;
    ret = sftrn_CallInit_x0019B9A8(src->tbl, ret);
    return ret;
}
typedef struct cVec_x0019BA40 {
    float x, y, z, w_x0019BA40;
} cVec_x0019BA40;
typedef struct cBox_x0019BA40 {
    float center[3];
    float half[3];
} cBox_x0019BA40;
typedef struct cMeshInfo_x0019BA40 {
    int dataOfs;
    char unk04[4];
    long name_x0019BA40;
    char unk10[0x24];
    unsigned int flags_x0019BA40;
    char unk38[0xB];
    unsigned char layer;
    char unk44[0x14];
    unsigned char alpha;
} cMeshInfo_x0019BA40;
typedef struct cMeshData_x0019BA40 {
    char unk00[8];
    unsigned short num;
} cMeshData_x0019BA40;
typedef struct cModelNode_x0019BA40 {
    char packet[2][0xB0];
    char unk160[0x220];
    unsigned int dispFlags;
    unsigned char unk384;
    char unk385;
    unsigned char meshNum;
    char unk387;
    struct cMeshData_x0019BA40 *data;
    float uvScroll[2];
    char unk394[0xC];
    float color[3];
    float alpha;
    char unk3B0[0x50];
    int unk400;
    struct cModelNode_x0019BA40 *next;
    int pktBuf;
    unsigned char layer;
    char unk40D[0x3];
    unsigned int tag;
    cMeshInfo_x0019BA40 *info;
} cModelNode_x0019BA40;
typedef struct cVtEnt_x0019BA40 {
    short delta;
    short index;
    void *pfn;
} cVtEnt_x0019BA40;
struct cParts_x0019BA40;
typedef struct cParts_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8];
} cParts_x0019BA40;
typedef struct SEQ_DATA_HEADER_1_x0019BA40 {
    char magic[4];
    char unk04[0x10];
    unsigned short entryOfs;
    unsigned short entryNum;
} SEQ_DATA_HEADER_1_x0019BA40;
typedef struct cSeqEffect_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char id;
    char unk02[2];
    int handle;
    unsigned char part;
    unsigned char flags_x0019BA40;
    char unk0A[2];
} cSeqEffect_x0019BA40;
typedef struct cGameObj_x0019BA40 cGameObj_x0019BA40;
struct cGameObj_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
};
typedef char cGameObj_chk_mtx[((int)&((struct cGameObj_x0019BA40 *)0)->mtx_x0019BA40) == 0x80 ? 1 : -1];
typedef char cGameObj_chk_pos[((int)&((struct cGameObj_x0019BA40 *)0)->pos_x0019BA40) == 0xF0 ? 1 : -1];
typedef char cGameObj_chk_rot[((int)&((struct cGameObj_x0019BA40 *)0)->rot_x0019BA40) == 0x100 ? 1 : -1];
typedef char cGameObj_chk_anim[((int)&((struct cGameObj_x0019BA40 *)0)->tint.w_x0019BA40) == 0x24C ? 1 : -1];
typedef char cGameObj_chk_vt[((int)&((struct cGameObj_x0019BA40 *)0)->vtable_x0019BA40) == 0x214 ? 1 : -1];
typedef char cGameObj_chk_step[((int)&((struct cGameObj_x0019BA40 *)0)->step_x0019BA40) == 0x2F6 ? 1 : -1];
typedef char cGameObj_chk_posA[((int)&((struct cGameObj_x0019BA40 *)0)->posA_x0019BA40) == 0x490 ? 1 : -1];
typedef char cGameObj_chk_stored[((int)&((struct cGameObj_x0019BA40 *)0)->stored_x0019BA40) == 0x520 ? 1 : -1];
typedef char cGameObj_chk_motion[((int)&((struct cGameObj_x0019BA40 *)0)->seqFlags_x0019BA40) == 0x3AC ? 1 : -1];
typedef char cGameObj_chk_hp[((int)&((struct cGameObj_x0019BA40 *)0)->hp_x0019BA40) == 0x54A ? 1 : -1];
typedef char cGameObj_chk_kind[((int)&((struct cGameObj_x0019BA40 *)0)->kindName_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cGameObj_chk_emno[((int)&((struct cGameObj_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cGameObj_chk_eff[((int)&((struct cGameObj_x0019BA40 *)0)->seqData_x0019BA40) == 0x42C ? 1 : -1];
typedef char cGameObj_chk_effno[((int)&((struct cGameObj_x0019BA40 *)0)->effNo_x0019BA40) == 0x570 ? 1 : -1];
typedef char cGameObj_chk_scr[((int)&((struct cGameObj_x0019BA40 *)0)->scrFlags_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cGameObj_chk_scale[((int)&((struct cGameObj_x0019BA40 *)0)->scale_x0019BA40) == 0x110 ? 1 : -1];
typedef char cGameObj_chk_child[((int)&((struct cGameObj_x0019BA40 *)0)->children_x0019BA40) == 0x278 ? 1 : -1];
typedef char cGameObj_chk_childn[((int)&((struct cGameObj_x0019BA40 *)0)->partNum_x0019BA40) == 0x2B4 ? 1 : -1];
typedef char cGameObj_chk_ik[((int)&((struct cGameObj_x0019BA40 *)0)->ik_x0019BA40) == 0x448 ? 1 : -1];
typedef char cGameObj_chk_drop[((int)&((struct cGameObj_x0019BA40 *)0)->dropItem_x0019BA40) == 0x560 ? 1 : -1];
typedef char cGameObj_chk_rate[((int)&((struct cGameObj_x0019BA40 *)0)->speedRate_x0019BA40) == 0x5A8 ? 1 : -1];
typedef char cGameObj_chk_ground[((int)&((struct cGameObj_x0019BA40 *)0)->groundKind_x0019BA40) == 0x474 ? 1 : -1];
typedef char cGameObj_chk_frame[((int)&((struct cGameObj_x0019BA40 *)0)->motionFrame_x0019BA40) == 0x430 ? 1 : -1];
typedef char cGameObj_chk_name[((int)&((struct cGameObj_x0019BA40 *)0)->name_x0019BA40) == 0x538 ? 1 : -1];
typedef char cGameObj_chk_size[sizeof(struct cGameObj_x0019BA40) == 0x5B0 ? 1 : -1];
typedef struct cOmBase_x0019BA40 {
    float mtxLocal[16]; float mtxBind[16]; float mtx_x0019BA40[16]; cVec_x0019BA40 invPos; cVec_x0019BA40 *anchor; char unk0D4[0xC]; cVec_x0019BA40 trans; cVec_x0019BA40 *pos_x0019BA40; char unk0F4[0xC]; cVec_x0019BA40 rot_x0019BA40; cVec_x0019BA40 scale_x0019BA40; cVec_x0019BA40 scaleCalc; cVec_x0019BA40 rotAdd; unsigned char rotOrder; char unk141[3]; struct cParts_x0019BA40 *next; struct cParts_x0019BA40 *parent; struct cParts_x0019BA40 *link; char unk150[0x4]; int partFlags; char unk158[0xBC]; cVtEnt_x0019BA40 *vtable_x0019BA40; char unk218[0x8]; char *packet[2]; char *tailPacket[2]; char *partPacket[2]; char *alloc; char unk23C[0x4]; cVec_x0019BA40 tint; int objFlags_x0019BA40; int texFlags; int unk258; cModelNode_x0019BA40 *meshHead; cBox_x0019BA40 box; struct cOmBase_x0019BA40 **children_x0019BA40; float blend; char *script; int texSet; int unk288; char *extraPacket[2][2]; char *extraPacketB[2][2]; short id; short life; unsigned char fadeLen; unsigned char meshNum; unsigned short endTime; unsigned char partNum_x0019BA40; signed char depthBias; unsigned char alphaA; unsigned char alphaB; float fadeIn; unsigned char alphaC; char unk2BD; unsigned char layerForce; char unk2BF[0x1]; int drawKind; int drawPrio; void *arena; unsigned char lightOwner; unsigned char lightSlot[3]; unsigned int actorGroup; unsigned char texSlot[0x10]; char unk2E4[0xC]; unsigned int unk2F0; unsigned char mode; unsigned char phase; unsigned char step_x0019BA40; unsigned char stepArg; char unk2F8[0x4]; unsigned char unk2FC; char unk2FD[0x1]; unsigned short actorId; char unk300[0x4]; char *pack; char unk308[0x8]; cVec_x0019BA40 unk310; cVec_x0019BA40 unk320; cVec_x0019BA40 nullSpeed; float quat[4]; char unk350[0x10]; cVec_x0019BA40 nullRotSpeed; char unk370[0x10]; char unk380[0x10]; char unk390[0x10]; char unk3A0[0xC]; unsigned short seqFlags_x0019BA40; unsigned short seqEffectNum; cSeqEffect_x0019BA40 seqEffect[8]; char unk410[0x10]; char unk420[0x8]; char *motion; struct SEQ_DATA_HEADER_1_x0019BA40 *seqData_x0019BA40; float motionFrame_x0019BA40; unsigned short motionFlags; unsigned char seqSkip; char unk437[0x1]; float blendLeft; float blendLen; float motionRate; float motionStep; char ik_x0019BA40[0x4]; void *shadowData; char *kageWork; char unk454[0xC]; cVec_x0019BA40 kageHit; float kageHitY; int groundKind_x0019BA40; char unk478[0x8]; cVec_x0019BA40 unk480; cVec_x0019BA40 posA_x0019BA40; int unk4A0; int unk4A4; int kageFlags; const char *kindName_x0019BA40; int unk4B0; int unk4B4; float turnRate; char unk4BC[0x4]; cVec_x0019BA40 turnTarget; char unk4D0[0x520 - 0x4D0]; cVec_x0019BA40 stored_x0019BA40; unsigned char storedWait; signed char unk531; char unk532[0x538 - 0x532]; long name_x0019BA40; long modelHandle; short hpMax; short hp_x0019BA40; float hitFlash; cVec_x0019BA40 vel; int dropItem_x0019BA40; int emNo_x0019BA40; short unk568; short unk56A; char unk56C[0x570 - 0x56C]; short effNo_x0019BA40; short pad572; int effArg; char unk578[0x580 - 0x578]; cVec_x0019BA40 unk580; cVec_x0019BA40 unk590; int scrFlags_x0019BA40; char unk5A4[4]; float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x4];
    int flags0;
    int hitFlags;
    int flags2;
    char unk5BC[0x4];
    cVec_x0019BA40 knock;
    cVec_x0019BA40 posB;
} cOmBase_x0019BA40;
typedef char cOmBase_size_check[(sizeof(cOmBase_x0019BA40) == 0x5E0) ? 1 : -1];
typedef struct cCoreSaveCombo_x0019BA40 {
    int id[6];
    char lv[6];
    char pad1E[2];
    int max;
} cCoreSaveCombo_x0019BA40;
typedef struct cCoreSaveSpawn_x0019BA40 {
    unsigned char kind_x0019BA40;
    unsigned char sub;
    unsigned short angle;
    float pos_x0019BA40[4];
    int param;
} cCoreSaveSpawn_x0019BA40;
typedef struct cCoreSaveItem_x0019BA40 {
    unsigned short stage;
    unsigned short kind_x0019BA40;
    unsigned char flag;
    signed char yaw;
    unsigned short serial;
    short pos_x0019BA40[3];
    unsigned short extra;
} cCoreSaveItem_x0019BA40;
typedef struct cCoreSaveData_x0019BA40 {
    int worldTime;
    int worldTimeB;
    unsigned int counter08;
    unsigned short saveStageA;
    unsigned short saveStageB;
    unsigned short clearNum;
    unsigned short continueNum;
    unsigned int flags_x0019BA40;
    char unk18[4];
    short levelPoint;
    char levelDownGrace;
    char difficulty;
    int gold;
    int addGoldNum;
    int addGold[16];
    int keyCardNum;
    int keyNum;
    int upgradeLv[4];
    int vitalMax;
    int vital;
    unsigned short counter88;
    unsigned char comboST;
    char unk8B;
    short killEmNum[5];
    unsigned short killNpcNum;
    unsigned char reelSlot[10];
    char unkA2[2];
    unsigned int clearStageMask;
    unsigned char godItem[6];
    unsigned char costumeNo;
    unsigned char prevCostumeNo;
    char skill[0x80];
    unsigned int godReel;
    unsigned char stock[0x20];
    unsigned char vitalItemNum;
    unsigned char tensionItemNum;
    unsigned char reelItemNum;
    unsigned char paper;
    cCoreSaveSpawn_x0019BA40 spawn;
    int worldToggle;
    int worldActive;
    int savedToggle;
    int unk17C;
    char unk180[0x30];
    cCoreSaveCombo_x0019BA40 combo[6];
    unsigned short itemNum;
    cCoreSaveItem_x0019BA40 item[0x80];
    char unkA8A[0x102];
    unsigned int unkB8C;
    unsigned int eventFlags;
    int casinoTicketNum;
    unsigned int fightingRingClear[4];
    int fightingRingEmListNo;
    short allKillEmNum[5];
    unsigned short allKillNpcNum;
    unsigned short allContinueNum;
    unsigned short stateBits;
    unsigned int allStageTime;
    int oliviaCostumeNo;
    char unkBC4[0x8DC];
} cCoreSaveData_x0019BA40;
typedef char cCoreSaveData_size_check[sizeof(cCoreSaveData_x0019BA40) == 0x14A0 ? 1 : -1];
typedef struct cCoreSave_x0019BA40 {
    cCoreSaveData_x0019BA40 *data;
} cCoreSave_x0019BA40;
void cCoreSave_setGameLevel_x0019BA40(cCoreSave_x0019BA40 *self, int level) __asm__("func_0019BA58");
typedef struct cOmbb_x0019BA40 {
    cOmBase_x0019BA40 base;
    char unk5E0[0x20];
    unsigned char fireLit;
    unsigned char bombKind;
    char unk602[2];
    float countdown;
    int hissSe;
} cOmbb_x0019BA40;
typedef struct cEmActorVt_x0019BA40 {
    char unk00[0x60];
    short suspendDelta;
    short pad62;
    void (*suspend)(void *self, int flag);
    char unk68[8];
    short setPosDelta;
    short pad72;
    void (*setPos)(void *self, int pos_x0019BA40);
    short setScaleDelta;
    short pad7A;
    void (*setScale)(void *self, void *scale_x0019BA40);
    char unk80[0x98 - 0x80];
    short entryDelta;
    short pad9A;
    int (*entry_x0019BA40)(void *self, void *data, void *parent);
    char unkA0[0xD8 - 0xA0];
    short startDelta;
    short padDA;
    void (*startAction)(void *self);
} cEmActorVt_x0019BA40;
typedef struct cEmActor_x0019BA40 {
    char unk000[0xF0];
    struct cVec_x0019BA40 *pos_x0019BA40;
    char unk0F4[0x100 - 0xF4];
    float rot_x0019BA40[3];
    char unk10C[0x214 - 0x10C];
    cEmActorVt_x0019BA40 *vt;
    char unk218[0x250 - 0x218];
    int objFlags_x0019BA40;
    char unk254[0x2FE - 0x254];
    unsigned short actorId;
    char unk300[0x4AC - 0x300];
    int kind_x0019BA40;
    char unk4B0[0x548 - 0x4B0];
    short vitalMax;
    short vital;
    char unk54C[0x560 - 0x54C];
    int dropItem_x0019BA40;
    int emNo_x0019BA40;
    char unk568[0x5A0 - 0x568];
    int scrFlags_x0019BA40;
    char unk5A4[4];
    float speedRate_x0019BA40;
    char unk5AC_x0019BA40[0x640 - 0x5AC];
    unsigned short entryNo_x0019BA40;
} cEmActor_x0019BA40;
typedef char cEmActor_chk_flags[((int)&((cEmActor_x0019BA40 *)0)->objFlags_x0019BA40) == 0x250 ? 1 : -1];
typedef char cEmActor_chk_kind[((int)&((cEmActor_x0019BA40 *)0)->kind_x0019BA40) == 0x4AC ? 1 : -1];
typedef char cEmActor_chk_emno[((int)&((cEmActor_x0019BA40 *)0)->emNo_x0019BA40) == 0x564 ? 1 : -1];
typedef char cEmActor_chk_entry[((int)&((cEmActor_x0019BA40 *)0)->entryNo_x0019BA40) == 0x640 ? 1 : -1];
typedef char cEmActorVt_chk_entry[(int)&((cEmActorVt_x0019BA40 *)0)->entry_x0019BA40 == 0x9C ? 1 : -1];
typedef struct SET_EM_DATA_x0019BA40 {
    int objId;
    char unk04[0xC];
    cVec_x0019BA40 pos_x0019BA40;
    float rot_x0019BA40;
    unsigned int flags_x0019BA40;
    int seBank;
    int seNo;
    unsigned char appPattern;
    unsigned char entryNo_x0019BA40;
} SET_EM_DATA_x0019BA40;
typedef struct cEmSlot_x0019BA40 {
    struct cEmSlot_x0019BA40 *prev;
    struct cEmSlot_x0019BA40 *next;
    cEmActor_x0019BA40 *em;
    int kind_x0019BA40;
    unsigned char used;
    char unk11[3];
} cEmSlot_x0019BA40;
typedef struct cEmList_x0019BA40 {
    cEmSlot_x0019BA40 *top_x0019BA40;
    cEmSlot_x0019BA40 *last;
} cEmList_x0019BA40;
typedef struct cEmManage_x0019BA40 {
    cEmSlot_x0019BA40 slot[64];
    cEmList_x0019BA40 list;
    int emNum;
    int kindNum;
    int unk510;
    int slotWait;
    unsigned char darkWorld;
    char unk519[7];
    cVec_x0019BA40 unk520_x0019BA40;
    int unk530;
    char unk534[4];
    signed char bigHitEffWait_x0019BA40;
    signed char unk539;
    signed char unk53A;
    signed char plBombHit;
    signed char plCatched;
    signed char plSorry;
    signed char unk53E;
    unsigned char unk53F;
    signed char unk540;
    signed char unk541;
    short unk542;
    float unk544;
    float speedRate_x0019BA40;
    int unk54C;
    int turnBehind_x0019BA40;
    int turnPlus;
    int turnMinus;
    int nextNo_x0019BA40;
    cEmActor_x0019BA40 *unk560[5];
    cEmActor_x0019BA40 *specialEm_x0019BA40[5];
    cEmActor_x0019BA40 *unk588[4];
    char unk598[8];
    unsigned char unk5A0_x0019BA40;
    unsigned char unk5A1;
    unsigned char unk5A2;
    unsigned char unk5A3;
    unsigned char unk5A4;
    unsigned char unk5A5;
    char unk5A6[6];
    cOmbb_x0019BA40 *unk5AC_x0019BA40[2];
    char unk5B4;
    unsigned char unk5B5_x0019BA40;
} cEmManage_x0019BA40;
typedef char SET_EM_DATA_chk_size[sizeof(SET_EM_DATA_x0019BA40) == 0x34 ? 1 : -1];
typedef char SET_EM_DATA_chk_pos[(int)&((SET_EM_DATA_x0019BA40 *)0)->pos_x0019BA40 == 0x10 ? 1 : -1];
typedef char SET_EM_DATA_chk_flags[(int)&((SET_EM_DATA_x0019BA40 *)0)->flags_x0019BA40 == 0x24 ? 1 : -1];
typedef char cEmSlot_chk_size[sizeof(cEmSlot_x0019BA40) == 0x14 ? 1 : -1];
typedef char cEmManage_chk_top[((int)&((cEmManage_x0019BA40 *)0)->list.top_x0019BA40) == 0x500 ? 1 : -1];
typedef char cEmManage_chk_vec[((int)&((cEmManage_x0019BA40 *)0)->unk520_x0019BA40) == 0x520 ? 1 : -1];
typedef char cEmManage_chk_wait[((int)&((cEmManage_x0019BA40 *)0)->bigHitEffWait_x0019BA40) == 0x538 ? 1 : -1];
typedef char cEmManage_chk_rate[((int)&((cEmManage_x0019BA40 *)0)->speedRate_x0019BA40) == 0x548 ? 1 : -1];
typedef char cEmManage_chk_turn[((int)&((cEmManage_x0019BA40 *)0)->turnBehind_x0019BA40) == 0x550 ? 1 : -1];
typedef char cEmManage_chk_no[((int)&((cEmManage_x0019BA40 *)0)->nextNo_x0019BA40) == 0x55C ? 1 : -1];
typedef char cEmManage_chk_special[((int)&((cEmManage_x0019BA40 *)0)->specialEm_x0019BA40) == 0x574 ? 1 : -1];
typedef char cEmManage_chk_flags[((int)&((cEmManage_x0019BA40 *)0)->unk5A0_x0019BA40) == 0x5A0 ? 1 : -1];
typedef char cEmManage_chk_5ac[((int)&((cEmManage_x0019BA40 *)0)->unk5AC_x0019BA40) == 0x5AC ? 1 : -1];
typedef char cEmManage_chk_5b5[((int)&((cEmManage_x0019BA40 *)0)->unk5B5_x0019BA40) == 0x5B5 ? 1 : -1];
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) __asm__("func_0019BA40");
/* cCoreSave_setGameLevel1_1F9AD0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/001b5160.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019BA40_x0019BA40(cCoreSave_x0019BA40 *self) { cCoreSave_setGameLevel_x0019BA40(self, 1); }
typedef int (*SfdTrnFn_x0019BA58)();
typedef struct SfdTrnModules_x0019BA58 {
    SfdTrnFn_x0019BA58 *fns[15];
} SfdTrnModules_x0019BA58;
int func_0019BA58_x0019BA58(SfdTrnModules_x0019BA58 *modules, int k) __asm__("func_0019BA58");
/* sftrn_CallTrEntry: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdtrn.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019BA58_x0019BA58(SfdTrnModules_x0019BA58 *modules, int k)
{
    SfdTrnFn_x0019BA58 **tbl = modules->fns;
    int i;
    int r = 0;
    for (i = 0; i < 15; i++) {
        SfdTrnFn_x0019BA58 *t = *tbl++;
        if (t == 0) break;
        r = t[k](0, 0, 0, 0);
        if (r != 0) break;
    }
    return r;
}
struct SfdSj_x0019BAD8;
struct SfdRecSlot_x0019BAD8;
struct SfdRec_x0019BAD8;
struct SfdMpvCond_x0019BAD8;
struct SfdPlanes_x0019BAD8;
struct SfdFrameInfo_x0019BAD8;
struct SfdPly_x0019BAD8;
typedef int (*SfdTimeFn_x0019BAD8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019BAD8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019BAD8;
typedef struct SfdTimeRec_x0019BAD8 {
    int valid;
    SfdTimeCode_x0019BAD8 tc;
    int time;
    int unit;
} SfdTimeRec_x0019BAD8;
typedef struct SfdTst_x0019BAD8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019BAD8;
typedef struct SfdSyncTally_x0019BAD8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019BAD8;
typedef struct SfdSyncQueue_x0019BAD8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019BAD8;
typedef struct SfdFieldEntry_x0019BAD8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019BAD8;
typedef struct SfdPtsm_x0019BAD8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019BAD8;
typedef struct SfdHdrAudio_x0019BAD8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0019BAD8;
typedef struct SfdHdrMux_x0019BAD8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0019BAD8;
typedef struct SfdHdrVideo_x0019BAD8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0019BAD8;
typedef struct SfdHdrInf_x0019BAD8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0019BAD8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0019BAD8 audio;
    SfdHdrVideo_x0019BAD8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0019BAD8;
typedef struct SfdMvInf_x0019BAD8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0019BAD8;
typedef struct SfdPlyInf_x0019BAD8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0019BAD8;
typedef void (*SfdErrFn_x0019BAD8)(void *obj, int code);
typedef struct SfdErrInf_x0019BAD8 {
    SfdErrFn_x0019BAD8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0019BAD8;
typedef int (*SfdExtClockFn_x0019BAD8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019BAD8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019BAD8 {
    SfdTimeFn_x0019BAD8 timefn[6];
    SfdIsSkipFn_x0019BAD8 isSkipFn;
    SfdTimeCode_x0019BAD8 tc;
    SfdTimeRec_x0019BAD8 state;
    SfdTimeRec_x0019BAD8 best;
    SfdTimeRec_x0019BAD8 tot;
    SfdTimeRec_x0019BAD8 cur;
    SfdTimeRec_x0019BAD8 latest;
    SfdTimeRec_x0019BAD8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019BAD8 tally;
    SfdSyncQueue_x0019BAD8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019BAD8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019BAD8 tst;
    SfdFieldEntry_x0019BAD8 fields[64];
    SfdPtsm_x0019BAD8 ptsm;
    char pad1468[36];
} SfdTim_x0019BAD8;
enum {
    SFD_COND_VIDEO_x0019BAD8 = 5,
    SFD_COND_AUDIO_x0019BAD8 = 6,
    SFD_COND_KEEPSUP_x0019BAD8 = 8,
    SFD_COND_SYNCMODE_x0019BAD8 = 15,
    SFD_COND_ETIME_x0019BAD8 = 20,
    SFD_COND_ETUNIT_x0019BAD8 = 21,
    SFD_COND_LNKSTM_x0019BAD8 = 49,
    SFD_COND_SUPPLY_END_x0019BAD8 = 56,
    SFD_COND_DECODE_END_x0019BAD8 = 57,
    SFD_COND_DEMUX_SPLIT_x0019BAD8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0019BAD8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0019BAD8 = 80,
    SFD_COND_SYSHD_FN_x0019BAD8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0019BAD8 = 86,
    SFD_COND_NUM_x0019BAD8 = 100
};
typedef enum SfdBufFmt_x0019BAD8 {
    SFD_BUFFMT_0_x0019BAD8 = 0
} SfdBufFmt_x0019BAD8;
typedef enum SfdBufId_x0019BAD8 {
    SFD_BUF_NONE_x0019BAD8 = 8
} SfdBufId_x0019BAD8;
typedef struct SfdCrePrm_x0019BAD8 {
    struct SfdTrnConfig_x0019BAD8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0019BAD8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0019BAD8;
typedef struct SfdItem_x0019BAD8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0019BAD8;
typedef struct SfdRing_x0019BAD8 {
    SfdItem_x0019BAD8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0019BAD8;
typedef struct SfdBufInf_x0019BAD8 {
    char *data;
    struct SfdSj_x0019BAD8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0019BAD8;
typedef struct SfdBufCur_x0019BAD8 {
    char *pos;
    int len;
} SfdBufCur_x0019BAD8;
typedef struct SfdBufDlm_x0019BAD8 {
    char *pos;
    char *end;
} SfdBufDlm_x0019BAD8;
typedef struct SfdBufRing_x0019BAD8 {
    SfdBufInf_x0019BAD8 sup;
    SfdBufDlm_x0019BAD8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0019BAD8 ptsque;
} SfdBufRing_x0019BAD8;
typedef struct SfdBufAring_x0019BAD8 {
    SfdBufInf_x0019BAD8 sup;
    SfdBufCur_x0019BAD8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0019BAD8;
typedef struct SfdUoch_x0019BAD8 {
    struct SfdSj_x0019BAD8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0019BAD8;
typedef struct SfdBufEnt_x0019BAD8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0019BAD8 ring;
        SfdBufAring_x0019BAD8 aring;
        SfdBufInf_x0019BAD8 vfrm;
        SfdUoch_x0019BAD8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0019BAD8;
typedef int (*SfdTrnFn_x0019BAD8)();
typedef struct SfdTrnConfig_x0019BAD8 {
    SfdTrnFn_x0019BAD8 *fns[9];
} SfdTrnConfig_x0019BAD8;
typedef struct SfdMpsPrm_x0019BAD8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0019BAD8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0019BAD8;
typedef struct SfdAdxCfg_x0019BAD8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0019BAD8;
typedef void (*SfdAdxStep_x0019BAD8)(struct SfdPly_x0019BAD8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0019BAD8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0019BAD8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0019BAD8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0019BAD8;
typedef struct SfdAoap_x0019BAD8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0019BAD8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0019BAD8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0019BAD8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0019BAD8 *h);
    void (*setSpeed)(struct SfdPly_x0019BAD8 *h, int speed);
} SfdAoap_x0019BAD8;
typedef struct SfainfOut_x0019BAD8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019BAD8;
typedef struct SfainfList_x0019BAD8 {
    int nout;
    SfainfOut_x0019BAD8 out[3];
} SfainfList_x0019BAD8;
typedef struct SfdTrnSlot_x0019BAD8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0019BAD8 *mps;
        struct SfdMpv_x0019BAD8 *mpv;
        SfdAdxCtx_x0019BAD8 *adxt;
        SfdAoap_x0019BAD8 *aoap;
        SfainfList_x0019BAD8 *uo;
    } hn;
    SfdTrnFn_x0019BAD8 *fns;
    SfdBufId_x0019BAD8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0019BAD8;
typedef struct SfdTsum_x0019BAD8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0019BAD8;
typedef struct SfdTmrInf_x0019BAD8 {
    SfdTsum_x0019BAD8 tsum[6];
} SfdTmrInf_x0019BAD8;
int sfd_ReportError_x0019BAD8(void *sfd, int code) __asm__("func_0018D650");
typedef struct SfdSj_x0019BAD8 SfdSj_x0019BAD8;
typedef struct SfdSjChunk_x0019BAD8 {
    char *data;
    int len;
} SfdSjChunk_x0019BAD8;
typedef struct SfdSjVtbl_x0019BAD8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0019BAD8 *sj);
    int (*getUuid)(SfdSj_x0019BAD8 *sj);
    void (*reset)(SfdSj_x0019BAD8 *sj);
    void (*getChunk)(SfdSj_x0019BAD8 *sj, int id, int n, SfdSjChunk_x0019BAD8 *ck);
    void (*ungetChunk)(SfdSj_x0019BAD8 *sj, int id, SfdSjChunk_x0019BAD8 *ck);
    void (*putChunk)(SfdSj_x0019BAD8 *sj, int id, SfdSjChunk_x0019BAD8 *ck);
    int (*getNumData)(SfdSj_x0019BAD8 *sj, int id);
} SfdSjVtbl_x0019BAD8;
struct SfdSj_x0019BAD8 {
    SfdSjVtbl_x0019BAD8 *vtbl;
};
struct SfdSj_x0019BAD8;
typedef struct M2vErrInf_x0019BAD8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0019BAD8;
typedef struct Mpeg2Ext_x0019BAD8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0019BAD8;
typedef enum M2vFrameRate_x0019BAD8 {
    M2V_FRAME_RATE_FORBIDDEN_x0019BAD8 = 0
} M2vFrameRate_x0019BAD8;
typedef enum M2vPicType_x0019BAD8 {
    M2V_PICTYPE_I_x0019BAD8 = 1,
    M2V_PICTYPE_P_x0019BAD8 = 2,
    M2V_PICTYPE_B_x0019BAD8 = 3,
    M2V_PICTYPE_D_x0019BAD8 = 4
} M2vPicType_x0019BAD8;
typedef enum M2vPicStruct_x0019BAD8 {
    M2V_PICSTRUCT_TOP_FIELD_x0019BAD8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0019BAD8 = 2,
    M2V_PICSTRUCT_FRAME_x0019BAD8 = 3
} M2vPicStruct_x0019BAD8;
typedef enum M2vPicAtrF64_x0019BAD8 {
    M2V_PICATR_F64_0_x0019BAD8 = 0
} M2vPicAtrF64_x0019BAD8;
typedef struct M2vPicAtr_x0019BAD8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0019BAD8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0019BAD8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0019BAD8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0019BAD8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0019BAD8;
typedef void (*M2vUsrDatFn_x0019BAD8)(void *obj, int level);
typedef struct M2vUsrSj_x0019BAD8 {
    struct SfdSj_x0019BAD8 *sj;
    M2vUsrDatFn_x0019BAD8 fn;
    void *obj;
} M2vUsrSj_x0019BAD8;
typedef struct M2vPicUsr_x0019BAD8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0019BAD8;
typedef void (*M2vCondFn_x0019BAD8)();
typedef struct M2vObj_x0019BAD8 {
    int stat;
    M2vErrInf_x0019BAD8 err;
    M2vCondFn_x0019BAD8 cond[16];
    M2vPicAtr_x0019BAD8 picatr;
    char pad216[64];
    M2vUsrSj_x0019BAD8 usrsj[4];
    M2vPicUsr_x0019BAD8 picusr;
    char pad340[12];
    Mpeg2Ext_x0019BAD8 ext;
    char pad1656[8];
} M2vObj_x0019BAD8;
extern void M2V_SetErrFunc_x0019BAD8(M2vObj_x0019BAD8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0019BAD8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0019BAD8;
typedef struct sceMpeg_x0019BAD8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0019BAD8 *sys;
} sceMpeg_x0019BAD8;
typedef enum {
    sceMpegCbError_x0019BAD8,
    sceMpegCbNodata_x0019BAD8,
    sceMpegCbStopDMA_x0019BAD8,
    sceMpegCbRestartDMA_x0019BAD8,
    sceMpegCbBackground_x0019BAD8,
    sceMpegCbTimeStamp_x0019BAD8,
    sceMpegCbStr_x0019BAD8,
    sceMpegCbNum_x0019BAD8
} sceMpegCbType_x0019BAD8;
typedef struct {
    sceMpegCbType_x0019BAD8 type;
    char *errMessage;
} sceMpegCbDataError_x0019BAD8;
typedef struct {
    sceMpegCbType_x0019BAD8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0019BAD8;
typedef struct {
    sceMpegCbType_x0019BAD8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0019BAD8;
typedef union {
    sceMpegCbType_x0019BAD8 type;
    sceMpegCbDataError_x0019BAD8 error;
    sceMpegCbDataTimeStamp_x0019BAD8 ts;
    sceMpegCbDataStr_x0019BAD8 str;
} sceMpegCbData_x0019BAD8;
typedef int (*sceMpegCallback_x0019BAD8)(sceMpeg_x0019BAD8 *mp, sceMpegCbData_x0019BAD8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0019BAD8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0019BAD8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0019BAD8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0019BAD8;
typedef struct {
    _sceMpegPicture_x0019BAD8 *ref_image;
    _sceMpegPicture_x0019BAD8 *prev_image;
    _sceMpegPicture_x0019BAD8 *decode;
    _sceMpegPicture_x0019BAD8 *image;
} _sceMpegPictureSlot_x0019BAD8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0019BAD8;
typedef void (*_sceMpegMcKernel_x0019BAD8)(_sceMpegMcFetch_x0019BAD8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0019BAD8 luma_kernel[4];
    _sceMpegMcKernel_x0019BAD8 chroma_kernel[4];
    _sceMpegMcFetch_x0019BAD8 luma[4];
    _sceMpegMcFetch_x0019BAD8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0019BAD8;
typedef struct _sceMpegDecoder_x0019BAD8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0019BAD8 callbacks[sceMpegCbNum_x0019BAD8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0019BAD8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0019BAD8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0019BAD8 slots[3];
    _sceMpegPicture_x0019BAD8 pictures[9];
    _sceMpegSprBuffer_x0019BAD8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0019BAD8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0019BAD8;
typedef struct SfdPlanes_x0019BAD8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0019BAD8;
typedef struct SfdUserData_x0019BAD8 {
    char data[512];
    int size;
} SfdUserData_x0019BAD8;
typedef struct SfdRecVideo_x0019BAD8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0019BAD8 stamp;
    SfdUserData_x0019BAD8 user;
} SfdRecVideo_x0019BAD8;
typedef struct SfdSlot_x0019BAD8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0019BAD8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019BAD8 *blob;
    M2vPicAtr_x0019BAD8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0019BAD8;
typedef struct SfdBufPool_x0019BAD8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0019BAD8 slot[18];
} SfdBufPool_x0019BAD8;
typedef struct SfdMpvCond_x0019BAD8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0019BAD8;
typedef struct SfdMpvWorkBufs_x0019BAD8 {
    int w[2];
} SfdMpvWorkBufs_x0019BAD8;
typedef struct SfdMpvFrameBufs_x0019BAD8 {
    int w[16];
} SfdMpvFrameBufs_x0019BAD8;
typedef struct SfdIpuEntry_x0019BAD8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0019BAD8;
typedef struct SfdDmaTag_x0019BAD8 {
    long long tag;
    long long pad;
} SfdDmaTag_x0019BAD8;
typedef struct SfdIpuStream_x0019BAD8 {
    void *base;
    SfdDmaTag_x0019BAD8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0019BAD8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0019BAD8;
typedef struct SfdIpuCtl_x0019BAD8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0019BAD8 mpeg;
    SfdIpuStream_x0019BAD8 stream;
    sceMpegCbDataError_x0019BAD8 error;
} SfdIpuCtl_x0019BAD8;
typedef struct SfdPtsComp_x0019BAD8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0019BAD8 ptsent;
} SfdPtsComp_x0019BAD8;
typedef struct SfdMpv_x0019BAD8 {
    void *handle;
    SfdMpvCond_x0019BAD8 cond;
    SfdMpvWorkBufs_x0019BAD8 work;
    SfdMpvFrameBufs_x0019BAD8 bufs;
    SfdSlot_x0019BAD8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0019BAD8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0019BAD8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0019BAD8 planes[2];
    SfdSlot_x0019BAD8 *first;
    SfdSlot_x0019BAD8 *second;
    SfdSlot_x0019BAD8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0019BAD8 slots[16];
    SfdBufPool_x0019BAD8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0019BAD8 ipu;
} SfdMpv_x0019BAD8;
typedef enum SfdPicType_x0019BAD8 {
    SFD_PICTYPE_I_x0019BAD8 = 1,
    SFD_PICTYPE_P_x0019BAD8 = 2,
    SFD_PICTYPE_B_x0019BAD8 = 3
} SfdPicType_x0019BAD8;
typedef enum SfdFrmInfF60_x0019BAD8 {
    SFD_FRMINF_F60_0_x0019BAD8 = 0
} SfdFrmInfF60_x0019BAD8;
typedef struct SfdFrameDetail_x0019BAD8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0019BAD8;
typedef struct SfdFrameInfo_x0019BAD8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0019BAD8 picType;
    int time;
    int unit;
    SfdBufFmt_x0019BAD8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019BAD8 *picUsr;
    SfdFrmInfF60_x0019BAD8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0019BAD8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0019BAD8;
typedef struct SfdVfrm_x0019BAD8 {
    int used;
    int f4;
    SfdFrameInfo_x0019BAD8 inf;
} SfdVfrm_x0019BAD8;
typedef struct SfdPly_x0019BAD8 SfdPly_x0019BAD8;
typedef struct SfdRec_x0019BAD8 SfdRec_x0019BAD8;
typedef struct SfdRecSub_x0019BAD8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0019BAD8;
typedef struct SfdRecSlot_x0019BAD8 {
    SfdRec_x0019BAD8 *rec;
    SfdRecSub_x0019BAD8 sub;
} SfdRecSlot_x0019BAD8;
typedef struct SfdSysHd_x0019BAD8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0019BAD8;
typedef struct SfdRecSys_x0019BAD8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0019BAD8 syshd;
} SfdRecSys_x0019BAD8;
typedef struct SfdRecAudio_x0019BAD8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0019BAD8;
struct SfdRec_x0019BAD8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0019BAD8 hdrInf;
    SfdRecSys_x0019BAD8 sys;
    char pad2616[152];
    SfdRecVideo_x0019BAD8 video;
    SfdRecAudio_x0019BAD8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0019BAD8 {
    SfdCrePrm_x0019BAD8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0019BAD8 hdr;
    SfdMvInf_x0019BAD8 mvInf;
    char pad2380[4];
    SfdPlyInf_x0019BAD8 plyInf;
    SfdErrInf_x0019BAD8 err;
    int cond[SFD_COND_NUM_x0019BAD8];
    int cond2[SFD_COND_NUM_x0019BAD8];
    char pad3364[4];
    SfdTim_x0019BAD8 tim;
    SfdBufEnt_x0019BAD8 buf[8];
    SfdVfrm_x0019BAD8 vfrm[16];
    SfdTrnSlot_x0019BAD8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0019BAD8 mps;
    char pad8944[176];
    SfdMpv_x0019BAD8 mpv;
    SfdAdxCtx_x0019BAD8 adxt;
    char pad13680[100];
    SfdAoap_x0019BAD8 aoap;
    char pad13804[4];
    SfainfList_x0019BAD8 uo;
    char pad13860[4];
    SfdRecSlot_x0019BAD8 see;
    SfdTmrInf_x0019BAD8 tmr;
};
void sftrn_InitTrData_x0019BAD8(SfdTrnSlot_x0019BAD8 *slot, SfdTrnFn_x0019BAD8 *fns) __asm__("func_0019BB90");
int sftrn_BuildAll_x0019BAD8(SfdPly_x0019BAD8 *hn, SfdTrnConfig_x0019BAD8 *config) __asm__("func_0019BBD8");
void sftrn_InitTrData_x0019BAD8(SfdTrnSlot_x0019BAD8 *slot, SfdTrnFn_x0019BAD8 *fns) __asm__("func_0019BB90");
int sftrn_BuildAll_x0019BAD8(SfdPly_x0019BAD8 *hn, SfdTrnConfig_x0019BAD8 *config) __asm__("func_0019BBD8");
void func_0019BAD8_x0019BAD8(void *sfd, SfdTrnSlot_x0019BAD8 *s, SfdCrePrm_x0019BAD8 *prm, int arg) __asm__("func_0019BAD8");
/* SFTRN_InitHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdtrn.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019BAD8_x0019BAD8(void *sfd, SfdTrnSlot_x0019BAD8 *s, SfdCrePrm_x0019BAD8 *prm, int arg)
{
    SfdPly_x0019BAD8 *hn = sfd;
    SfdTrnConfig_x0019BAD8 *config = prm->trnConfig;
    int i;
    for (i = 0; i < 9; i++) {
        s[i].hn.obj = 0;
        sftrn_InitTrData_x0019BAD8(&s[i], config->fns[i]);
    }
    if (sftrn_BuildAll_x0019BAD8(hn, config) != 0) {
        sfd_ReportError_x0019BAD8(hn, 0xFF000302);
    }
}
void func_0019BB90_x0019BB90(u8 *arg0, s32 arg1) __asm__("func_0019BB90");
void func_0019BB90_x0019BB90(u8 *arg0, s32 arg1) {
    s32 *var_v0;
    s32 var_v1;

    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    var_v1 = 2;
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = 8;
    var_v0 = arg0 + 0x1C;
    do {
        var_v1 -= 1;
        *var_v0 = 8;
        var_v0 -= 1;
    } while (var_v1 >= 0);
    *(s32 *)((u8 *)arg0 + 0x20) = -1;
}
void func_0019BF48_x0019BBD8(u8 *, s32, s32) __asm__("func_0019BF48");
void func_0019BCF8_x0019BBD8(u8 *, s32 *) __asm__("func_0019BCF8");
void func_0019BDE8_x0019BBD8(u8 *, s32 *) __asm__("func_0019BDE8");
void func_0019BE88_x0019BBD8(u8 *, s32 *) __asm__("func_0019BE88");
void func_0019BF28_x0019BBD8(u8 *, s32 *) __asm__("func_0019BF28");
void func_00199818_x0019BBD8(u8 *, s32, s32) __asm__("func_00199818");
s32 func_0019BBD8_x0019BBD8(u8 *a0, s32 *cfg) __asm__("func_0019BBD8");
s32 func_0019BBD8_x0019BBD8(u8 *a0, s32 *cfg)
{
    if (cfg[1] != 0) {
        func_0019BF48_x0019BBD8(a0, 0, 0);
        func_0019BCF8_x0019BBD8(a0, cfg);
    } else if (cfg[2] != 0) {
        func_0019BF48_x0019BBD8(a0, 0, 1);
        func_0019BDE8_x0019BBD8(a0, cfg);
        func_00199818_x0019BBD8(a0, 6, 0);
        *(s32 *)(a0 + 0xB48) = 0;
    } else if (cfg[3] != 0) {
        func_0019BF48_x0019BBD8(a0, 0, 2);
        func_0019BE88_x0019BBD8(a0, cfg);
        func_00199818_x0019BBD8(a0, 5, 0);
        *(s32 *)(a0 + 0xB44) = 0;
    } else if (cfg[8] != 0) {
        func_0019BF48_x0019BBD8(a0, 0, 7);
        func_0019BF28_x0019BBD8(a0, cfg);
        func_00199818_x0019BBD8(a0, 6, 0);
        func_00199818_x0019BBD8(a0, 5, 0);
        *(s32 *)(a0 + 0xB48) = 0;
        *(s32 *)(a0 + 0xB44) = 0;
    } else {
        return -1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019BCF8);
s32 func_0019BF48_x0019BDE8() __asm__("func_0019BF48");
s32 func_0019C008_x0019BDE8() __asm__("func_0019C008");
void func_0019BDE8_x0019BDE8(s32 arg0, u8 *arg1) __asm__("func_0019BDE8");
void func_0019BDE8_x0019BDE8(s32 arg0, u8 *arg1) {
    func_0019C008_x0019BDE8(arg0, 1, 2);
    func_0019BF48_x0019BDE8(arg0, 2, 3);
    if (*(s32 *)((u8 *)arg1 + 0x10) != 0) {
        func_0019C008_x0019BDE8(arg0, 3, 4);
        func_0019BF48_x0019BDE8(arg0, 4, 5);
        func_0019C008_x0019BDE8(arg0, 5, 6);
        return;
    }
    func_0019C008_x0019BDE8(arg0, 3, 6);
}
s32 func_0019BF48_x0019BE88() __asm__("func_0019BF48");
s32 func_0019C008_x0019BE88() __asm__("func_0019C008");
void func_0019BE88_x0019BE88(s32 arg0, u8 *arg1) __asm__("func_0019BE88");
void func_0019BE88_x0019BE88(s32 arg0, u8 *arg1) {
    func_0019C008_x0019BE88(arg0, 2, 3);
    func_0019BF48_x0019BE88(arg0, 3, 4);
    if (*(s32 *)((u8 *)arg1 + 0x14) != 0) {
        func_0019C008_x0019BE88(arg0, 4, 5);
        func_0019BF48_x0019BE88(arg0, 5, 6);
        func_0019C008_x0019BE88(arg0, 6, 7);
        return;
    }
    func_0019C008_x0019BE88(arg0, 4, 7);
}
s32 func_0019C008_x0019BF28() __asm__("func_0019C008");
void func_0019BF28_x0019BF28(s32 arg0) __asm__("func_0019BF28");
void func_0019BF28_x0019BF28(s32 arg0) {
    func_0019C008_x0019BF28(arg0, 7, 8);
}
s32 func_0019BFC8_x0019BF48() __asm__("func_0019BFC8");
void func_0019BF48_x0019BF48(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF48");
void func_0019BF48_x0019BF48(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF48(arg0, arg1, 0, arg2);
}
s32 func_0019BFC8_x0019BF68() __asm__("func_0019BFC8");
void func_0019BF68_x0019BF68(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF68");
void func_0019BF68_x0019BF68(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF68(arg0, arg1, 0, arg2);
}
s32 func_0019BFC8_x0019BF88() __asm__("func_0019BFC8");
void func_0019BF88_x0019BF88(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BF88");
void func_0019BF88_x0019BF88(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BF88(arg0, arg1, 1, arg2);
}
s32 func_0019BFC8_x0019BFA8() __asm__("func_0019BFC8");
void func_0019BFA8_x0019BFA8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019BFA8");
void func_0019BFA8_x0019BFA8(s32 arg0, s32 arg1, s32 arg2) {
    func_0019BFC8_x0019BFA8(arg0, arg1, 2, arg2);
}
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019BFC8");
void func_0019BFC8_x0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  int new_var;
  s32 new_var2;
  int new_var4;
  s32 *new_var3;
  new_var3 = &arg3;
  new_var4 = arg1 * 0x44;
  *((s32 *) (((u8 *) ((arg2 * 4) + (arg0 + new_var4))) + 0x1BF4)) = *new_var3;
  new_var2 = arg3;
  new_var = arg0 + (new_var2 * 0x74);
  *((s32 *) (((u8 *) new_var) + 0x12CC)) = arg1;
}
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C008");
void func_0019C008_x0019C008(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  int new_var2;
  *((s32 *) (((u8 *) (arg0 + (arg2 * (new_var2 = 0x44)))) + 0x1BF0)) = arg1;
  *((s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + (new_var = 0x12D0))) = arg2;
}
typedef s32 (*SfdFn_x0019C040_x0019C040)(s32, s32, s32, s32);
typedef struct { s32 pad[3]; SfdFn_x0019C040_x0019C040 *fns; u8 pad2[0x34]; } SfdMod_x0019C040_x0019C040;
s32 func_0019C040_x0019C040(s32 a0, s32 a1) __asm__("func_0019C040");
s32 func_0019C040_x0019C040(s32 a0, s32 a1)
{
    SfdMod_x0019C040_x0019C040 *m = (SfdMod_x0019C040_x0019C040 *)(a0 + 0x1BE0);
    SfdFn_x0019C040_x0019C040 *fns;
    s32 r = 0;
    s32 i;

    for (i = 0; i < 9; i++) {
        fns = m->fns;
        m++;
        if (fns != 0) {
            r = fns[a1](a0, 0, 0, 0);
            if (r != 0) {
                break;
            }
        }
    }
    return r;
}
s32 func_0019C0D8_x0019C0D8(u8 *p, s32 i, s32 j, s32 a3, s32 t0) __asm__("func_0019C0D8");
s32 func_0019C0D8_x0019C0D8(u8 *p, s32 i, s32 j, s32 a3, s32 t0)
{
    u8 *e;
    s32 (**tbl)(u8 *, s32, s32, s32);

    e = p + i * 0x44;
    tbl = *(s32 (***)(u8 *, s32, s32, s32))(e + 0x1BEC);
    if (tbl == 0) {
        return 0;
    }
    return tbl[j](p, a3, t0, 0);
}
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C128");
unsigned int func_0019C128_x0019C128(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var;
  *((s32 *) (((u8 *) (new_var = arg0 + (arg1 * 0x44))) + 0x1BE0)) = arg2;
}
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1) __asm__("func_0019C140");
s32 func_0019C140_x0019C140(s32 arg0, s32 arg1)
{
  int new_var;
  new_var = arg0 + (arg1 * 0x44);
  return *((s32 *) (((u8 *) new_var) + 0x1BE0));
}
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019C158");
void func_0019C158_x0019C158(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4);
  *new_var = arg2;
}
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1) __asm__("func_0019C170");
s32 func_0019C170_x0019C170(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BE4;
  return *((s32 *) new_var);
}
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1) __asm__("func_0019C188");
s32 func_0019C188_x0019C188(s32 arg0, s32 arg1)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x44))) + 0x1BEC;
  return (*((s32 *) new_var)) != 0;
}
typedef unsigned int size_t_x0019C1A8;
void *memset_x0019C1A8(void *, int, size_t_x0019C1A8) __asm__("memset");
typedef struct SfdTst_x0019C1A8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019C1A8;
void sftst_ResetHist_x0019C1A8(SfdTst_x0019C1A8 *tst) __asm__("func_0019C288");
void sftst_DebInit_x0019C1A8(void) __asm__("func_0019C938");
void sftst_ResetHist_x0019C1A8(SfdTst_x0019C1A8 *tst) __asm__("func_0019C288");
void sftst_DebInit_x0019C1A8(void) __asm__("func_0019C938");
void func_0019C1A8_x0019C1A8(SfdTst_x0019C1A8 *p) __asm__("func_0019C1A8");
/* SFTST_Create: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdtst.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019C1A8_x0019C1A8(SfdTst_x0019C1A8 *p)
{
    memset_x0019C1A8(p, 0, 0x1C0);
    p->f0 = 1;
    p->pastat = 0;
    p->adjmode = 0;
    p->paused = 1;
    p->count = 10;
    sftst_ResetHist_x0019C1A8(p);
    p->master_time = 0;
    p->f272 = 1;
    p->help_time = 0;
    p->help_unit = 1;
    p->out_time = 0;
    p->f304 = 1;
    p->f312 = 0x412B;
    p->f320 = 1000000;
    p->f328 = 200000;
    p->f336 = 1000000;
    p->f344 = 0;
    p->f352 = 1000000;
    p->f360 = 0;
    p->f368 = 1000000;
    p->f376 = -1;
    p->f384 = 0;
    p->mt_max = 0;
    p->adj_limit = 0;
    p->adj_front = 0;
    p->adj_rear = 0;
    p->resethist = 0;
    p->excesserr = 0;
    p->movave_1st = 0;
    p->movave_2nd = 0;
    p->diff_l_max = 0;
    p->diff_l_min = 0;
    p->diff_a_max = 0;
    p->diff_a_min = 0;
    sftst_DebInit_x0019C1A8();
}
void func_0019C288(u8 *arg0) {
    memset(arg0 + 0x18, 0, 0xF0);
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x19C) = (s32) (*(s32 *)((u8 *)arg0 + 0x19C) + 1);
}
void func_0019C2C8(s32 *arg0, s32 arg1) {
    *arg0 = arg1;
}
void func_0019C2D0(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x138) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x140) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C2E8(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x148) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x150) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C300(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x158) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x160) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C318(u8 *arg0, u8 *arg1) {
    *(s64 *)((u8 *)arg0 + 0x168) = (s64) *(s64 *)((u8 *)arg1 + 0);
    *(s64 *)((u8 *)arg0 + 0x170) = (s64) *(s64 *)((u8 *)arg1 + 8);
}
void func_0019C330(u8 *arg0, s32 arg1) {
    if (arg1 > 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = arg1;
    }
}
void func_0019C340(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
}
void func_0019C348(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
}
extern long long func_0031DE10_x0019C350(long long, long long) __asm__("__muldi3");
extern long long func_003B7FE0_x0019C350(long long, long long) __asm__("func_0011F758");
void func_0019C350_x0019C350(char *a0, char *a1) __asm__("func_0019C350");
/* func_0035C548: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003264c8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C350_x0019C350(char *a0, char *a1) {
    long long r, r2;
    if (*(int *)(a0 + 0xC) == 0) {
        r = func_0031DE10_x0019C350(*(long long *)(a0 + 0x130), *(long long *)(a1));
        r2 = func_003B7FE0_x0019C350(r, *(long long *)(a1 + 8));
        *(long long *)(a0 + 0x128) += r2;
    }
}
typedef struct SfdRatio_x0019C3A8 {
    long long num;
    long long den;
} SfdRatio_x0019C3A8;
typedef struct SfdTst_x0019C3A8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019C3A8;
extern SfdTst_x0019C3A8 *sftst_last_x0019C3A8 __asm__("D_00426B40");
void sftst_ResetHist_x0019C3A8(SfdTst_x0019C3A8 *tst) __asm__("func_0019C288");
int sftst_UpdateMovAve_x0019C3A8(SfdTst_x0019C3A8 *tst, int value) __asm__("func_0019C810");
void sftst_ModifyHist_x0019C3A8(SfdTst_x0019C3A8 *tst, int delta) __asm__("func_0019C870");
void sftst_DebWrite_x0019C3A8(SfdTst_x0019C3A8 *tst) __asm__("func_0019CA98");
void sftst_ResetHist_x0019C3A8(SfdTst_x0019C3A8 *tst) __asm__("func_0019C288");
int sftst_UpdateMovAve_x0019C3A8(SfdTst_x0019C3A8 *tst, int value) __asm__("func_0019C810");
void sftst_ModifyHist_x0019C3A8(SfdTst_x0019C3A8 *tst, int delta) __asm__("func_0019C870");
void sftst_DebWrite_x0019C3A8(SfdTst_x0019C3A8 *tst) __asm__("func_0019CA98");
void sftst_ResetHist_x0019C3A8(SfdTst_x0019C3A8 *tst) __attribute__((weak, section(".b3stub")));
void sftst_ResetHist_x0019C3A8(SfdTst_x0019C3A8 *tst) {}
void func_0019C3A8_x0019C3A8(SfdTst_x0019C3A8 *tst, SfdRatio_x0019C3A8 *mt, SfdRatio_x0019C3A8 *hlp, SfdRatio_x0019C3A8 *out) __asm__("func_0019C3A8");
/* SFTST_Calc: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdtst.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019C3A8_x0019C3A8(SfdTst_x0019C3A8 *tst, SfdRatio_x0019C3A8 *mt, SfdRatio_x0019C3A8 *hlp, SfdRatio_x0019C3A8 *out)
{
    long adj;
    long est;
    long excess;
    long ave;
    long tol;
    long q;
    long step;
    long t;
    int d;
    if (hlp->den == 1 || tst->f0 == 0) {
        *out = *mt;
        return;
    }
    mt->num = (tst->mt_max > mt->num) ? tst->mt_max : mt->num;
    if (tst->pastat == 1) {
        tst->adjmode = 0;
    } else if (tst->adjmode == 0) {
        if (mt->num > tst->mt_max) {
            tst->adjmode = 1;
            if (tst->f376 == -1) {
                adj = mt->den * tst->f344 / tst->f352;
            } else {
                adj = mt->den * tst->f360 / tst->f368;
            }
            tst->f376 = hlp->num;
            tst->f384 = mt->num + adj;
            sftst_ResetHist_x0019C3A8(tst);
        } else if (tst->paused == 0) {
            tst->adjmode = 1;
        }
    }
    tst->mt_max = (tst->mt_max > mt->num) ? tst->mt_max : mt->num;
    if (tst->f376 != -1) {
        est = tst->f384 + mt->den * (hlp->num - tst->f376) / hlp->den;
    } else {
        est = 0;
    }
    if (tst->adjmode == 0) {
        if (tst->mt_max < est) {
            if (tst->paused != 0) {
                tst->f376 = hlp->num;
                tst->f384 = tst->mt_max;
            } else {
                tst->f376 = hlp->num;
                tst->f384 = tst->out_time;
            }
            tst->adj_limit++;
        }
    } else if (tst->paused == 1) {
        excess = mt->den * tst->f328 / tst->f336;
        if (excess < ((mt->num - est < 0) ? -(mt->num - est) : mt->num - est)) {
            tst->f376 = hlp->num;
            tst->f384 = mt->num;
            sftst_ResetHist_x0019C3A8(tst);
            tst->excesserr++;
        } else {
            ave = sftst_UpdateMovAve_x0019C3A8(tst, (int)(mt->num - est));
            tol = mt->den * tst->f312 / tst->f320;
            if (tol < ((ave < 0) ? -ave : ave)) {
                if (tol < ave) {
                    q = ave * 2 / tol - 1;
                    tst->adj_front += (int)q;
                } else {
                    q = ave * 2 / tol + 1;
                    tst->adj_rear -= (int)q;
                }
                step = q * tol / 2;
                tst->f376 = hlp->num;
                tst->f384 = est + step;
                sftst_ModifyHist_x0019C3A8(tst, (int)step);
            }
        }
    }
    if (tst->f376 != -1) {
        t = tst->f384 + mt->den * (hlp->num - tst->f376) / hlp->den;
    } else {
        t = 0;
    }
    out->num = t;
    out->den = mt->den;
    if (out->num < tst->out_time) {
        out->num = tst->out_time;
        out->den = tst->f304;
    }
    tst->master_time = mt->num;
    tst->f272 = mt->den;
    tst->help_time = hlp->num;
    tst->help_unit = hlp->den;
    tst->out_time = out->num;
    tst->f304 = out->den;
    d = (int)(mt->num - out->num);
    if (tst->adjmode == 0) {
        tst->diff_l_max = (tst->diff_l_max > d) ? tst->diff_l_max : d;
        tst->diff_l_min = (tst->diff_l_min < d) ? tst->diff_l_min : d;
    } else {
        tst->diff_a_max = (tst->diff_a_max > d) ? tst->diff_a_max : d;
        tst->diff_a_min = (tst->diff_a_min < d) ? tst->diff_a_min : d;
    }
    sftst_last_x0019C3A8 = tst;
    sftst_DebWrite_x0019C3A8(tst);
}
typedef struct SfdTst_x0019C810 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019C810;
int sftst_CalcMovAve_x0019C810(SfdTst_x0019C810 *tst) __asm__("func_0019C8D0");
int sftst_CalcMovAve_x0019C810(SfdTst_x0019C810 *tst) __asm__("func_0019C8D0");
int func_0019C810_x0019C810(SfdTst_x0019C810 *tst, int value) __asm__("func_0019C810");
/* sftst_UpdateMovAve: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdtst.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019C810_x0019C810(SfdTst_x0019C810 *tst, int value)
{
    int *pos = &tst->pos;
    int p = *pos;
    int average;
    tst->values[p % tst->count] = value;
    *pos = p + 1;
    average = sftst_CalcMovAve_x0019C810(tst);
    tst->movave_1st = average;
    tst->movave_2nd = average;
    return average;
}
s32 func_0019C8D0_x0019C870(void *) __asm__("func_0019C8D0");
void func_0019C870_x0019C870(u8 *arg0, s32 arg1) __asm__("func_0019C870");
void func_0019C870_x0019C870(u8 *arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) > 0) {
        var_v1 = arg0 + 0x18;
        do {
            var_a0 += 1;
            *var_v1 -= arg1;
            var_v1 += 1;
        } while (var_a0 < *(s32 *)((u8 *)arg0 + 0x10));
    }
    *(s32 *)((u8 *)arg0 + 0x1A8) = func_0019C8D0_x0019C870(arg0);
}
s32 func_0019C8D0_x0019C8D0(u8 *arg0) __asm__("func_0019C8D0");
s32 func_0019C8D0_x0019C8D0(u8 *arg0) {
    s32 *var_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x10);
    var_a2 = 0;
    if (temp_a1 > 0) {
        var_a0 = arg0 + 0x18;
        var_v1 = temp_a1;
        do {
            temp_v0 = *var_a0;
            var_a0 += 1;
            var_v1 -= 1;
            var_a2 += temp_v0;
        } while (var_v1 != 0);
    }
    return var_a2 / temp_a1;
}
void func_0019C920(s32 arg0, s32 arg1) {
    D_00426B3C = arg0;
    D_00426B38 = arg1;
}
extern char D_00459990_x0019C938[] __asm__("D_004677A0");
extern int D_003EE320_x0019C938 __asm__("D_00426B3C");
extern int D_003EE31C_x0019C938 __asm__("D_00426B38");
extern int D_003EE328_x0019C938 __asm__("D_00426B44");
extern int D_003EE32C_x0019C938 __asm__("D_00426B48");
extern void func_003A52F0_x0019C938(int a0, int a1, int a2) __asm__("memset");
extern void func_003A57C4_x0019C938(int a0, char *a1) __asm__("func_00127A88");
extern int strlen_x0019C938(const char *s) __asm__("func_00127BA0");
struct S35CB20_x0019C938 { char b[0x112]; };
void func_0019C938_x0019C938(void) __asm__("func_0019C938");
/* func_0035CB20: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035cb20.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019C938_x0019C938(void) {
    struct S35CB20_x0019C938 buf = *(struct S35CB20_x0019C938 *)D_00459990_x0019C938;
    if (D_003EE320_x0019C938 != 0) {
        func_003A52F0_x0019C938(D_003EE320_x0019C938, 0, D_003EE31C_x0019C938);
        D_003EE328_x0019C938 = D_003EE320_x0019C938;
        func_003A57C4_x0019C938(D_003EE320_x0019C938, buf.b);
        D_003EE328_x0019C938 = D_003EE328_x0019C938 + strlen_x0019C938(buf.b);
        D_003EE32C_x0019C938 = D_003EE328_x0019C938;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd_00194D48", func_0019CA98);
typedef struct { s32 a; s32 b[3]; } E16_x0019CCD0;
s32 func_0018D870_x0019CCD0(void *) __asm__("func_0018D870");
s32 func_0018D650_x0019CCD0(void *, s32) __asm__("func_0018D650");
void func_0019D148_x0019CCD0(void *, s32, s32, s32, s32) __asm__("func_0019D148");
void func_0018A9B0_x0019CCD0(void *, s32, s32, void *) __asm__("func_0018A9B0");
s32 func_0019CCD0_x0019CCD0(u8 *a0, unsigned int a1, s32 a2, s32 a3, s32 a4) __asm__("func_0019CCD0");
s32 func_0019CCD0_x0019CCD0(u8 *a0, unsigned int a1, s32 a2, s32 a3, s32 a4)
{
  s32 *s;
  s32 k;
  E16_x0019CCD0 *t;
  s32 new_var;
  s32 *e;
  new_var = func_0018D870_x0019CCD0(a0);
  s = (s32 *) (a0 + 0x1E00);
  if (new_var)
  {
    return func_0018D650_x0019CCD0(0, 0xFF000192);
  }
  k = s[4];
  t = (E16_x0019CCD0 *) s[2];
  if (k == 8)
  {
    return func_0018D650_x0019CCD0(a0, 0xFF000602);
  }
  e = t[a1].b;
  func_0019D148_x0019CCD0(e, a2, 0, a3, a4);
  func_0018A9B0_x0019CCD0(a0, k, a1, e);
  return 0;
}
typedef struct { s32 f0; u8 body[0xC]; } SfdE16_x0019CDF8;
s32 func_0018D870_x0019CDF8(u8 *) __asm__("func_0018D870");
s32 func_0018D650_x0019CDF8(u8 *, s32) __asm__("func_0018D650");
void func_0019D148_x0019CDF8(u8 *, s32, s32, s32, s32) __asm__("func_0019D148");
void func_0018A9B0_x0019CDF8(u8 *, s32, s32, u8 *) __asm__("func_0018A9B0");
s32 func_0019CDF8_x0019CDF8(u8 *a0, s32 idx, s32 a2, s32 a3) __asm__("func_0019CDF8");
s32 func_0019CDF8_x0019CDF8(u8 *a0, s32 idx, s32 a2, s32 a3)
{
    u8 *p = a0 + 0x1E00;
    s32 n;
    SfdE16_x0019CDF8 *base;
    u8 *e;

    if (func_0018D870_x0019CDF8(a0) != 0) {
        return func_0018D650_x0019CDF8(0, 0xFF000191);
    }
    n = *(s32 *)(p + 0x10);
    base = *(SfdE16_x0019CDF8 **)(p + 8);
    if (n == 8) {
        return func_0018D650_x0019CDF8(a0, 0xFF000602);
    }
    e = base[idx].body;
    func_0019D148_x0019CDF8(e, a2, a3, 0, 0);
    func_0018A9B0_x0019CDF8(a0, n, idx, e);
    return 0;
}
s32 func_0019CF08(void) {
    return 0;
}
s32 func_0019CF10(void) {
    return 0;
}
s32 func_0019CF18(s32 arg0) {
    s32 temp_s0;

    func_0019CF60();
    temp_s0 = func_0019D070(arg0);
    func_0019CFE8(arg0);
    return temp_s0;
}
s32 func_0018B770_x0019CF60() __asm__("func_0018B770");
s32 func_0019C158_x0019CF60() __asm__("func_0019C158");
s32 func_0019C170_x0019CF60() __asm__("func_0019C170");
s32 func_0019CFE0_x0019CF60() __asm__("func_0019CFE0");
void func_0019CF60_x0019CF60(u8 *arg0) __asm__("func_0019CF60");
void func_0019CF60_x0019CF60(u8 *arg0) {
    if ((func_0019C170_x0019CF60(arg0, 8) != 1) && (func_0018B770_x0019CF60(arg0, *(s32 *)((u8 *)arg0 + 0x1E10)) == 1) && (func_0019CFE0_x0019CF60(arg0) != 0)) {
        func_0019C158_x0019CF60(arg0, 8, 1);
    }
}
s32 func_0019CFE0(void) {
    return 1;
}
s32 func_0018B730_x0019CFE8() __asm__("func_0018B730");
s32 func_0019C128_x0019CFE8() __asm__("func_0019C128");
s32 func_0019C140_x0019CFE8() __asm__("func_0019C140");
s32 func_0019D068_x0019CFE8() __asm__("func_0019D068");
void func_0019CFE8_x0019CFE8(u8 *arg0) __asm__("func_0019CFE8");
void func_0019CFE8_x0019CFE8(u8 *arg0) {
    if ((func_0019C140_x0019CFE8(arg0, 8) != 1) && (func_0018B730_x0019CFE8(arg0, *(s32 *)((u8 *)arg0 + 0x1E10)) == 1) && (func_0019D068_x0019CFE8(arg0) != 0)) {
        func_0019C128_x0019CFE8(arg0, 8, 1);
    }
}
s32 func_0019D068(void) {
    return 1;
}
s32 func_0019D070_x0019D070(void) __asm__("func_0019D070");
s32 func_0019D070_x0019D070(void) {
    return 0;
}
s32 func_0019D0A8_x0019D078() __asm__("func_0019D0A8");
s32 func_0019D078_x0019D078(s32 arg0) __asm__("func_0019D078");
s32 func_0019D078_x0019D078(s32 arg0)
{
  s32 temp_a1;
  u8 *temp_v0;
  ;
  temp_v0 = arg0 + 0x1E00;
  *((s32 *) (((u8 *) temp_v0) + 8)) = arg0 + 0x31B0;
  func_0019D0A8_x0019D078(arg0, arg0 + 0x31B0, *((s32 *) (((u8 *) temp_v0) + 0x10)));
  return 0;
}
struct SfdSj_x0019D0A8;
struct SfdRecSlot_x0019D0A8;
struct SfdRec_x0019D0A8;
struct SfdMpvCond_x0019D0A8;
struct SfdPlanes_x0019D0A8;
struct SfdFrameInfo_x0019D0A8;
struct SfdPly_x0019D0A8;
typedef int (*SfdTimeFn_x0019D0A8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0019D0A8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0019D0A8;
typedef struct SfdTimeRec_x0019D0A8 {
    int valid;
    SfdTimeCode_x0019D0A8 tc;
    int time;
    int unit;
} SfdTimeRec_x0019D0A8;
typedef struct SfdTst_x0019D0A8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0019D0A8;
typedef struct SfdSyncTally_x0019D0A8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0019D0A8;
typedef struct SfdSyncQueue_x0019D0A8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0019D0A8;
typedef struct SfdFieldEntry_x0019D0A8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0019D0A8;
typedef struct SfdPtsm_x0019D0A8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0019D0A8;
typedef struct SfdHdrAudio_x0019D0A8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0019D0A8;
typedef struct SfdHdrMux_x0019D0A8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0019D0A8;
typedef struct SfdHdrVideo_x0019D0A8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0019D0A8;
typedef struct SfdHdrInf_x0019D0A8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0019D0A8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0019D0A8 audio;
    SfdHdrVideo_x0019D0A8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0019D0A8;
typedef struct SfdMvInf_x0019D0A8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0019D0A8;
typedef struct SfdPlyInf_x0019D0A8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0019D0A8;
typedef void (*SfdErrFn_x0019D0A8)(void *obj, int code);
typedef struct SfdErrInf_x0019D0A8 {
    SfdErrFn_x0019D0A8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0019D0A8;
typedef int (*SfdExtClockFn_x0019D0A8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0019D0A8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0019D0A8 {
    SfdTimeFn_x0019D0A8 timefn[6];
    SfdIsSkipFn_x0019D0A8 isSkipFn;
    SfdTimeCode_x0019D0A8 tc;
    SfdTimeRec_x0019D0A8 state;
    SfdTimeRec_x0019D0A8 best;
    SfdTimeRec_x0019D0A8 tot;
    SfdTimeRec_x0019D0A8 cur;
    SfdTimeRec_x0019D0A8 latest;
    SfdTimeRec_x0019D0A8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0019D0A8 tally;
    SfdSyncQueue_x0019D0A8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0019D0A8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0019D0A8 tst;
    SfdFieldEntry_x0019D0A8 fields[64];
    SfdPtsm_x0019D0A8 ptsm;
    char pad1468[36];
} SfdTim_x0019D0A8;
enum {
    SFD_COND_VIDEO_x0019D0A8 = 5,
    SFD_COND_AUDIO_x0019D0A8 = 6,
    SFD_COND_KEEPSUP_x0019D0A8 = 8,
    SFD_COND_SYNCMODE_x0019D0A8 = 15,
    SFD_COND_ETIME_x0019D0A8 = 20,
    SFD_COND_ETUNIT_x0019D0A8 = 21,
    SFD_COND_LNKSTM_x0019D0A8 = 49,
    SFD_COND_SUPPLY_END_x0019D0A8 = 56,
    SFD_COND_DECODE_END_x0019D0A8 = 57,
    SFD_COND_DEMUX_SPLIT_x0019D0A8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0019D0A8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0019D0A8 = 80,
    SFD_COND_SYSHD_FN_x0019D0A8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0019D0A8 = 86,
    SFD_COND_NUM_x0019D0A8 = 100
};
typedef enum SfdBufFmt_x0019D0A8 {
    SFD_BUFFMT_0_x0019D0A8 = 0
} SfdBufFmt_x0019D0A8;
typedef enum SfdBufId_x0019D0A8 {
    SFD_BUF_NONE_x0019D0A8 = 8
} SfdBufId_x0019D0A8;
typedef struct SfdCrePrm_x0019D0A8 {
    struct SfdTrnConfig_x0019D0A8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0019D0A8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0019D0A8;
typedef struct SfdItem_x0019D0A8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0019D0A8;
typedef struct SfdRing_x0019D0A8 {
    SfdItem_x0019D0A8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0019D0A8;
typedef struct SfdBufInf_x0019D0A8 {
    char *data;
    struct SfdSj_x0019D0A8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0019D0A8;
typedef struct SfdBufCur_x0019D0A8 {
    char *pos;
    int len;
} SfdBufCur_x0019D0A8;
typedef struct SfdBufDlm_x0019D0A8 {
    char *pos;
    char *end;
} SfdBufDlm_x0019D0A8;
typedef struct SfdBufRing_x0019D0A8 {
    SfdBufInf_x0019D0A8 sup;
    SfdBufDlm_x0019D0A8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0019D0A8 ptsque;
} SfdBufRing_x0019D0A8;
typedef struct SfdBufAring_x0019D0A8 {
    SfdBufInf_x0019D0A8 sup;
    SfdBufCur_x0019D0A8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0019D0A8;
typedef struct SfdUoch_x0019D0A8 {
    struct SfdSj_x0019D0A8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0019D0A8;
typedef struct SfdBufEnt_x0019D0A8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0019D0A8 ring;
        SfdBufAring_x0019D0A8 aring;
        SfdBufInf_x0019D0A8 vfrm;
        SfdUoch_x0019D0A8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0019D0A8;
typedef int (*SfdTrnFn_x0019D0A8)();
typedef struct SfdTrnConfig_x0019D0A8 {
    SfdTrnFn_x0019D0A8 *fns[9];
} SfdTrnConfig_x0019D0A8;
typedef struct SfdMpsPrm_x0019D0A8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0019D0A8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0019D0A8;
typedef struct SfdAdxCfg_x0019D0A8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0019D0A8;
typedef void (*SfdAdxStep_x0019D0A8)(struct SfdPly_x0019D0A8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0019D0A8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0019D0A8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0019D0A8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0019D0A8;
typedef struct SfdAoap_x0019D0A8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0019D0A8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0019D0A8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0019D0A8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0019D0A8 *h);
    void (*setSpeed)(struct SfdPly_x0019D0A8 *h, int speed);
} SfdAoap_x0019D0A8;
typedef struct SfainfOut_x0019D0A8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019D0A8;
typedef struct SfainfList_x0019D0A8 {
    int nout;
    SfainfOut_x0019D0A8 out[3];
} SfainfList_x0019D0A8;
typedef struct SfdTrnSlot_x0019D0A8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0019D0A8 *mps;
        struct SfdMpv_x0019D0A8 *mpv;
        SfdAdxCtx_x0019D0A8 *adxt;
        SfdAoap_x0019D0A8 *aoap;
        SfainfList_x0019D0A8 *uo;
    } hn;
    SfdTrnFn_x0019D0A8 *fns;
    SfdBufId_x0019D0A8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0019D0A8;
typedef struct SfdTsum_x0019D0A8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0019D0A8;
typedef struct SfdTmrInf_x0019D0A8 {
    SfdTsum_x0019D0A8 tsum[6];
} SfdTmrInf_x0019D0A8;
void SFBUF_SetUoch_x0019D0A8(void *sfd, int index, int slot, void *uoch) __asm__("func_0018A9B0");
typedef struct SfdSj_x0019D0A8 SfdSj_x0019D0A8;
typedef struct SfdSjChunk_x0019D0A8 {
    char *data;
    int len;
} SfdSjChunk_x0019D0A8;
typedef struct SfdSjVtbl_x0019D0A8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0019D0A8 *sj);
    int (*getUuid)(SfdSj_x0019D0A8 *sj);
    void (*reset)(SfdSj_x0019D0A8 *sj);
    void (*getChunk)(SfdSj_x0019D0A8 *sj, int id, int n, SfdSjChunk_x0019D0A8 *ck);
    void (*ungetChunk)(SfdSj_x0019D0A8 *sj, int id, SfdSjChunk_x0019D0A8 *ck);
    void (*putChunk)(SfdSj_x0019D0A8 *sj, int id, SfdSjChunk_x0019D0A8 *ck);
    int (*getNumData)(SfdSj_x0019D0A8 *sj, int id);
} SfdSjVtbl_x0019D0A8;
struct SfdSj_x0019D0A8 {
    SfdSjVtbl_x0019D0A8 *vtbl;
};
struct SfdSj_x0019D0A8;
typedef struct M2vErrInf_x0019D0A8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0019D0A8;
typedef struct Mpeg2Ext_x0019D0A8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0019D0A8;
typedef enum M2vFrameRate_x0019D0A8 {
    M2V_FRAME_RATE_FORBIDDEN_x0019D0A8 = 0
} M2vFrameRate_x0019D0A8;
typedef enum M2vPicType_x0019D0A8 {
    M2V_PICTYPE_I_x0019D0A8 = 1,
    M2V_PICTYPE_P_x0019D0A8 = 2,
    M2V_PICTYPE_B_x0019D0A8 = 3,
    M2V_PICTYPE_D_x0019D0A8 = 4
} M2vPicType_x0019D0A8;
typedef enum M2vPicStruct_x0019D0A8 {
    M2V_PICSTRUCT_TOP_FIELD_x0019D0A8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0019D0A8 = 2,
    M2V_PICSTRUCT_FRAME_x0019D0A8 = 3
} M2vPicStruct_x0019D0A8;
typedef enum M2vPicAtrF64_x0019D0A8 {
    M2V_PICATR_F64_0_x0019D0A8 = 0
} M2vPicAtrF64_x0019D0A8;
typedef struct M2vPicAtr_x0019D0A8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0019D0A8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0019D0A8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0019D0A8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0019D0A8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0019D0A8;
typedef void (*M2vUsrDatFn_x0019D0A8)(void *obj, int level);
typedef struct M2vUsrSj_x0019D0A8 {
    struct SfdSj_x0019D0A8 *sj;
    M2vUsrDatFn_x0019D0A8 fn;
    void *obj;
} M2vUsrSj_x0019D0A8;
typedef struct M2vPicUsr_x0019D0A8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0019D0A8;
typedef void (*M2vCondFn_x0019D0A8)();
typedef struct M2vObj_x0019D0A8 {
    int stat;
    M2vErrInf_x0019D0A8 err;
    M2vCondFn_x0019D0A8 cond[16];
    M2vPicAtr_x0019D0A8 picatr;
    char pad216[64];
    M2vUsrSj_x0019D0A8 usrsj[4];
    M2vPicUsr_x0019D0A8 picusr;
    char pad340[12];
    Mpeg2Ext_x0019D0A8 ext;
    char pad1656[8];
} M2vObj_x0019D0A8;
extern void M2V_SetErrFunc_x0019D0A8(M2vObj_x0019D0A8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0019D0A8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0019D0A8;
typedef struct sceMpeg_x0019D0A8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0019D0A8 *sys;
} sceMpeg_x0019D0A8;
typedef enum {
    sceMpegCbError_x0019D0A8,
    sceMpegCbNodata_x0019D0A8,
    sceMpegCbStopDMA_x0019D0A8,
    sceMpegCbRestartDMA_x0019D0A8,
    sceMpegCbBackground_x0019D0A8,
    sceMpegCbTimeStamp_x0019D0A8,
    sceMpegCbStr_x0019D0A8,
    sceMpegCbNum_x0019D0A8
} sceMpegCbType_x0019D0A8;
typedef struct {
    sceMpegCbType_x0019D0A8 type;
    char *errMessage;
} sceMpegCbDataError_x0019D0A8;
typedef struct {
    sceMpegCbType_x0019D0A8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0019D0A8;
typedef struct {
    sceMpegCbType_x0019D0A8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0019D0A8;
typedef union {
    sceMpegCbType_x0019D0A8 type;
    sceMpegCbDataError_x0019D0A8 error;
    sceMpegCbDataTimeStamp_x0019D0A8 ts;
    sceMpegCbDataStr_x0019D0A8 str;
} sceMpegCbData_x0019D0A8;
typedef int (*sceMpegCallback_x0019D0A8)(sceMpeg_x0019D0A8 *mp, sceMpegCbData_x0019D0A8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0019D0A8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0019D0A8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0019D0A8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0019D0A8;
typedef struct {
    _sceMpegPicture_x0019D0A8 *ref_image;
    _sceMpegPicture_x0019D0A8 *prev_image;
    _sceMpegPicture_x0019D0A8 *decode;
    _sceMpegPicture_x0019D0A8 *image;
} _sceMpegPictureSlot_x0019D0A8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0019D0A8;
typedef void (*_sceMpegMcKernel_x0019D0A8)(_sceMpegMcFetch_x0019D0A8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0019D0A8 luma_kernel[4];
    _sceMpegMcKernel_x0019D0A8 chroma_kernel[4];
    _sceMpegMcFetch_x0019D0A8 luma[4];
    _sceMpegMcFetch_x0019D0A8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0019D0A8;
typedef struct _sceMpegDecoder_x0019D0A8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0019D0A8 callbacks[sceMpegCbNum_x0019D0A8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0019D0A8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0019D0A8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0019D0A8 slots[3];
    _sceMpegPicture_x0019D0A8 pictures[9];
    _sceMpegSprBuffer_x0019D0A8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0019D0A8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0019D0A8;
typedef struct SfdPlanes_x0019D0A8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0019D0A8;
typedef struct SfdUserData_x0019D0A8 {
    char data[512];
    int size;
} SfdUserData_x0019D0A8;
typedef struct SfdRecVideo_x0019D0A8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0019D0A8 stamp;
    SfdUserData_x0019D0A8 user;
} SfdRecVideo_x0019D0A8;
typedef struct SfdSlot_x0019D0A8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0019D0A8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019D0A8 *blob;
    M2vPicAtr_x0019D0A8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0019D0A8;
typedef struct SfdBufPool_x0019D0A8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0019D0A8 slot[18];
} SfdBufPool_x0019D0A8;
typedef struct SfdMpvCond_x0019D0A8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0019D0A8;
typedef struct SfdMpvWorkBufs_x0019D0A8 {
    int w[2];
} SfdMpvWorkBufs_x0019D0A8;
typedef struct SfdMpvFrameBufs_x0019D0A8 {
    int w[16];
} SfdMpvFrameBufs_x0019D0A8;
typedef struct SfdIpuEntry_x0019D0A8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0019D0A8;
typedef struct SfdDmaTag_x0019D0A8 {
    long long tag;
    long long pad;
} SfdDmaTag_x0019D0A8;
typedef struct SfdIpuStream_x0019D0A8 {
    void *base;
    SfdDmaTag_x0019D0A8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0019D0A8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0019D0A8;
typedef struct SfdIpuCtl_x0019D0A8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0019D0A8 mpeg;
    SfdIpuStream_x0019D0A8 stream;
    sceMpegCbDataError_x0019D0A8 error;
} SfdIpuCtl_x0019D0A8;
typedef struct SfdPtsComp_x0019D0A8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0019D0A8 ptsent;
} SfdPtsComp_x0019D0A8;
typedef struct SfdMpv_x0019D0A8 {
    void *handle;
    SfdMpvCond_x0019D0A8 cond;
    SfdMpvWorkBufs_x0019D0A8 work;
    SfdMpvFrameBufs_x0019D0A8 bufs;
    SfdSlot_x0019D0A8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0019D0A8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0019D0A8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0019D0A8 planes[2];
    SfdSlot_x0019D0A8 *first;
    SfdSlot_x0019D0A8 *second;
    SfdSlot_x0019D0A8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0019D0A8 slots[16];
    SfdBufPool_x0019D0A8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0019D0A8 ipu;
} SfdMpv_x0019D0A8;
typedef enum SfdPicType_x0019D0A8 {
    SFD_PICTYPE_I_x0019D0A8 = 1,
    SFD_PICTYPE_P_x0019D0A8 = 2,
    SFD_PICTYPE_B_x0019D0A8 = 3
} SfdPicType_x0019D0A8;
typedef enum SfdFrmInfF60_x0019D0A8 {
    SFD_FRMINF_F60_0_x0019D0A8 = 0
} SfdFrmInfF60_x0019D0A8;
typedef struct SfdFrameDetail_x0019D0A8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0019D0A8;
typedef struct SfdFrameInfo_x0019D0A8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0019D0A8 picType;
    int time;
    int unit;
    SfdBufFmt_x0019D0A8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0019D0A8 *picUsr;
    SfdFrmInfF60_x0019D0A8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0019D0A8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0019D0A8;
typedef struct SfdVfrm_x0019D0A8 {
    int used;
    int f4;
    SfdFrameInfo_x0019D0A8 inf;
} SfdVfrm_x0019D0A8;
typedef struct SfdPly_x0019D0A8 SfdPly_x0019D0A8;
typedef struct SfdRec_x0019D0A8 SfdRec_x0019D0A8;
typedef struct SfdRecSub_x0019D0A8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0019D0A8;
typedef struct SfdRecSlot_x0019D0A8 {
    SfdRec_x0019D0A8 *rec;
    SfdRecSub_x0019D0A8 sub;
} SfdRecSlot_x0019D0A8;
typedef struct SfdSysHd_x0019D0A8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0019D0A8;
typedef struct SfdRecSys_x0019D0A8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0019D0A8 syshd;
} SfdRecSys_x0019D0A8;
typedef struct SfdRecAudio_x0019D0A8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0019D0A8;
struct SfdRec_x0019D0A8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0019D0A8 hdrInf;
    SfdRecSys_x0019D0A8 sys;
    char pad2616[152];
    SfdRecVideo_x0019D0A8 video;
    SfdRecAudio_x0019D0A8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0019D0A8 {
    SfdCrePrm_x0019D0A8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0019D0A8 hdr;
    SfdMvInf_x0019D0A8 mvInf;
    char pad2380[4];
    SfdPlyInf_x0019D0A8 plyInf;
    SfdErrInf_x0019D0A8 err;
    int cond[SFD_COND_NUM_x0019D0A8];
    int cond2[SFD_COND_NUM_x0019D0A8];
    char pad3364[4];
    SfdTim_x0019D0A8 tim;
    SfdBufEnt_x0019D0A8 buf[8];
    SfdVfrm_x0019D0A8 vfrm[16];
    SfdTrnSlot_x0019D0A8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0019D0A8 mps;
    char pad8944[176];
    SfdMpv_x0019D0A8 mpv;
    SfdAdxCtx_x0019D0A8 adxt;
    char pad13680[100];
    SfdAoap_x0019D0A8 aoap;
    char pad13804[4];
    SfainfList_x0019D0A8 uo;
    char pad13860[4];
    SfdRecSlot_x0019D0A8 see;
    SfdTmrInf_x0019D0A8 tmr;
};
void sfuo_InitUoch_x0019D0A8(SfainfOut_x0019D0A8 *out) __asm__("func_0019D120");
void sfuo_InitUoch_x0019D0A8(SfainfOut_x0019D0A8 *out) __asm__("func_0019D120");
void func_0019D0A8_x0019D0A8(SfdPly_x0019D0A8 *hn, SfainfList_x0019D0A8 *list, int from) __asm__("func_0019D0A8");
/* sfuo_InitInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdainf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019D0A8_x0019D0A8(SfdPly_x0019D0A8 *hn, SfainfList_x0019D0A8 *list, int from) {
    int i;
    list->nout = 0;
    for (i = 0; i < 3; i++) {
        sfuo_InitUoch_x0019D0A8(&list->out[i]);
        SFBUF_SetUoch_x0019D0A8(hn, from, i, &list->out[i]);
    }
}
typedef struct SfainfOut_x0019D120 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0019D120;
void sfuo_SetUoch_x0019D120(SfainfOut_x0019D120 *out, int kind, void *sj, void *buf, int size) __asm__("func_0019D148");
void sfuo_SetUoch_x0019D120(SfainfOut_x0019D120 *out, int kind, void *sj, void *buf, int size) __asm__("func_0019D148");
void func_0019D120_x0019D120(SfainfOut_x0019D120 *out) __asm__("func_0019D120");
/* sfuo_InitUoch: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdainf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019D120_x0019D120(SfainfOut_x0019D120 *out) {
    sfuo_SetUoch_x0019D120(out, 0, 0, 0, 0);
}
void func_0019D148_x0019D148(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4) __asm__("func_0019D148");
void func_0019D148_x0019D148(s32 *p, s32 a1, s32 a2, s32 a3, s32 a4) {
    p[0] = a1;
    p[1] = a2;
    p[2] = a3;
    p[3] = a4;
}
s32 func_0019D160(void) {
    return 0;
}
s32 func_0019D168(void) {
    return 0;
}
s32 func_0019D170(void) {
    return 0;
}
s32 func_0019D178(void) {
    return 0;
}
s32 func_0019D180(void) {
    return 0;
}
s32 func_0018D650_x0019D188() __asm__("func_0018D650");
void func_0019D188_x0019D188(s32 arg0) __asm__("func_0019D188");
void func_0019D188_x0019D188(s32 arg0) {
    func_0018D650_x0019D188(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1A8() __asm__("func_0018D650");
void func_0019D1A8_x0019D1A8(s32 arg0) __asm__("func_0019D1A8");
void func_0019D1A8_x0019D1A8(s32 arg0) {
    func_0018D650_x0019D1A8(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1C8() __asm__("func_0018D650");
void func_0019D1C8_x0019D1C8(s32 arg0) __asm__("func_0019D1C8");
void func_0019D1C8_x0019D1C8(s32 arg0) {
    func_0018D650_x0019D1C8(arg0, 0xFF000601);
}
s32 func_0018D650_x0019D1E8() __asm__("func_0018D650");
void func_0019D1E8_x0019D1E8(s32 arg0) __asm__("func_0019D1E8");
void func_0019D1E8_x0019D1E8(s32 arg0) {
    func_0018D650_x0019D1E8(arg0, 0xFF000601);
}
s32 func_0019D208(void) {
    return 0;
}
s32 func_0019D210(void) {
    return 0;
}
s32 func_0019D218(void) {
    return 0;
}
s32 func_001999E0_x0019D220() __asm__("func_001999E0");
s32 func_0019D278_x0019D220() __asm__("func_0019D278");
s32 func_0019D340_x0019D220() __asm__("func_0019D340");
s32 func_0019D3C8_x0019D220() __asm__("func_0019D3C8");
s32 func_0019D220_x0019D220(s32 arg0) __asm__("func_0019D220");
s32 func_0019D220_x0019D220(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0_x0019D220(arg0, 5);
    if (var_v0 != 0) {
        func_0019D278_x0019D220(arg0);
        temp_s0 = func_0019D3C8_x0019D220(arg0);
        func_0019D340_x0019D220(arg0);
        var_v0 = temp_s0;
    }
    return var_v0;
}
s32 func_0018B770_x0019D278() __asm__("func_0018B770");
s32 func_0019C158_x0019D278() __asm__("func_0019C158");
s32 func_0019C170_x0019D278() __asm__("func_0019C170");
s32 func_0019D2F8_x0019D278() __asm__("func_0019D2F8");
void func_0019D278_x0019D278(u8 *arg0) __asm__("func_0019D278");
void func_0019D278_x0019D278(u8 *arg0) {
    if ((func_0019C170_x0019D278(arg0, 6) != 1) && (func_0018B770_x0019D278(arg0, *(s32 *)((u8 *)arg0 + 0x1D88)) == 1) && (func_0019D2F8_x0019D278(arg0) != 0)) {
        func_0019C158_x0019D278(arg0, 6, 1);
    }
}
s32 func_001999E0_x0019D2F8() __asm__("func_001999E0");
s32 func_0019B8A0_x0019D2F8() __asm__("func_0019B8A0");
s32 func_0019D2F8_x0019D2F8(s32 arg0) __asm__("func_0019D2F8");
s32 func_0019D2F8_x0019D2F8(s32 arg0) {
    if (func_001999E0_x0019D2F8(arg0, 0xF) == 0) {
        return 1;
    }
    return func_0019B8A0_x0019D2F8(arg0) != 0;
}
s32 func_0018B730_x0019D340() __asm__("func_0018B730");
s32 func_0019C128_x0019D340() __asm__("func_0019C128");
s32 func_0019C140_x0019D340() __asm__("func_0019C140");
s32 func_0019D3C0_x0019D340() __asm__("func_0019D3C0");
void func_0019D340_x0019D340(u8 *arg0) __asm__("func_0019D340");
void func_0019D340_x0019D340(u8 *arg0) {
    if ((func_0019C140_x0019D340(arg0, 6) != 1) && (func_0018B730_x0019D340(arg0, *(s32 *)((u8 *)arg0 + 0x1D88)) == 1) && (func_0019D3C0_x0019D340(arg0) != 0)) {
        func_0019C128_x0019D340(arg0, 6, 1);
    }
}
s32 func_0019D3C0(void) {
    return 1;
}
s32 func_0019D3C8(void) {
    return 0;
}
s32 func_0019D3D0(void) {
    return 0;
}
s32 func_0019D3D8(void) {
    return 0;
}
s32 func_0019D3E0(void) {
    return 0;
}
s32 func_0019D3E8(void) {
    return 0;
}
s32 func_0019D3F0(void) {
    return 0;
}
s32 func_0019D3F8(void) {
    return 0;
}
s32 func_0018D650_x0019D400() __asm__("func_0018D650");
void func_0019D400_x0019D400(s32 arg0) __asm__("func_0019D400");
void func_0019D400_x0019D400(s32 arg0) {
    func_0018D650_x0019D400(arg0, 0xFF000701);
}
s32 func_0018D650_x0019D420() __asm__("func_0018D650");
void func_0019D420_x0019D420(s32 arg0) __asm__("func_0019D420");
void func_0019D420_x0019D420(s32 arg0) {
    func_0018D650_x0019D420(arg0, 0xFF000701);
}
s32 func_0018B648_x0019D440() __asm__("func_0018B648");
s32 func_0019B428_x0019D440() __asm__("func_0019B428");
s32 func_0019D440_x0019D440(u8 *arg0, s32 *arg1) __asm__("func_0019D440");
s32 func_0019D440_x0019D440(u8 *arg0, s32 *arg1) {
    s32 temp_v0;
    s32 var_v0;

    if ((u32) (*(s32 *)((u8 *)arg0 + 0x48) - 3) >= 2U) {
        *arg1 = 0;
        goto block_6;
    }
    var_v0 = func_0018B648_x0019D440(arg0, *(s32 *)((u8 *)arg0 + 0x1D88), arg1);
    if (var_v0 == 0) {
        temp_v0 = func_0019B428_x0019D440(arg0, *arg1);
        if (temp_v0 == 0) {
            *arg1 = 0;
            return temp_v0;
        }
block_6:
        var_v0 = 0;
        
        return var_v0;
    }
    return var_v0;
}
s32 func_0018B6A0_x0019D4B8() __asm__("func_0018B6A0");
void func_0019D4B8_x0019D4B8(u8 *arg0, s32 arg1) __asm__("func_0019D4B8");
void func_0019D4B8_x0019D4B8(u8 *arg0, s32 arg1) {
    func_0018B6A0_x0019D4B8(arg0, *(s32 *)((u8 *)arg0 + 0x1D88), arg1);
}
s32 func_0019D4D8(void) {
    return 0;
}
s32 *func_0019D4E0(void) {
    return &D_00467A00;
}
s32 func_0019D4F0(s32 arg0) {
    return arg0 == 2;
}
extern volatile int D_00766C9C_x0019D500 __asm__("D_00492A64");
extern volatile int *D_00766C88_x0019D500 __asm__("D_00492A50");
extern int D_00766C90_x0019D500 __asm__("D_00492A58");
extern int *Obj35D0_GetStringPtr_D00459BF0_x0019D500(void) __asm__("func_0019D4E0");
extern void initLibWork_x0019D500(int a0, int a1) __asm__("func_0019D720");
extern void Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(int *a0, int a1, int a2) __asm__("func_0019D6E0");
void func_0019D500_x0019D500(int a0, int a1) __asm__("func_0019D500");
/* func_0035D538: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019D500_x0019D500(int a0, int a1) {
    int t = D_00766C9C_x0019D500;
    if (t <= 0) {
        D_00766C9C_x0019D500 = t + 1;
        D_00766C88_x0019D500 = Obj35D0_GetStringPtr_D00459BF0_x0019D500();
        initLibWork_x0019D500(a0, a1);
        Obj35D0_SetFields_a1_Clear4_a2_D718_x0019D500(&D_00766C90_x0019D500, a0, a1);
    }
}
void func_0019D590(void) {
    s32 temp_v0;

    temp_v0 = D_00492A64 - 1;
    D_00492A64 = temp_v0;
    if (temp_v0 <= 0) {
        func_0019D6D0(&D_00492A58);
    }
}
typedef struct SfhHn_x0019D5D8 {
    int stat;
    struct SfhHdr_x0019D5D8 *hdr;
    unsigned int size;
    int version;
} SfhHn_x0019D5D8;
typedef struct SfhStr12_x0019D5D8 {
    char text[12];
} SfhStr12_x0019D5D8;
typedef struct SfhStr32_x0019D5D8 {
    char text[32];
} SfhStr32_x0019D5D8;
typedef struct SfhStr64_x0019D5D8 {
    char text[64];
} SfhStr64_x0019D5D8;
typedef struct SfhMagic_x0019D5D8 {
    char text[24];
    unsigned char major;
    unsigned char minor;
} SfhMagic_x0019D5D8;
typedef struct SfhSysInf_x0019D5D8 {
    int bitRate;
    unsigned char sysType;
    char pad5[3];
    short nStm;
    char pad10[2];
    int totalSize;
} SfhSysInf_x0019D5D8;
typedef struct SfhMuxInf_x0019D5D8 {
    unsigned char kind[4];
    int muxRate;
    int nFrm;
    int totalTime;
    int timeUnit;
    int extFirst;
    int extSecond;
} SfhMuxInf_x0019D5D8;
typedef struct SfhStm_x0019D5D8 {
    SfhStr12_x0019D5D8 name;
    SfhStr12_x0019D5D8 codecName;
    unsigned char id;
    char pad25[64 - 25];
} SfhStm_x0019D5D8;
typedef struct SfhHdr_x0019D5D8 {
    char pad0[32];
    SfhMagic_x0019D5D8 magic;
    char pad58[6];
    SfhStr12_x0019D5D8 date;
    SfhStr12_x0019D5D8 time;
    char pad88[8];
    SfhStr32_x0019D5D8 creator;
    SfhSysInf_x0019D5D8 sys;
    char pad144[32];
    SfhMuxInf_x0019D5D8 mux;
    char pad204[20];
    SfhStr64_x0019D5D8 comment;
    char pad288[96];
    SfhStm_x0019D5D8 stm[26];
} SfhHdr_x0019D5D8;
typedef struct SfhPool_x0019D5D8 {
    int maxHn;
    int nHn;
    SfhHn_x0019D5D8 *hns;
} SfhPool_x0019D5D8;
extern SfhPool_x0019D5D8 sfh_pool_x0019D5D8 __asm__("D_00492A58");
void setHnCreate_x0019D5D8(SfhHn_x0019D5D8 *hn, SfhHdr_x0019D5D8 *hdr, unsigned int size) __asm__("func_0019D708");
int isFreeObj_x0019D5D8(SfhHn_x0019D5D8 *hn) __asm__("func_0019D770");
void setHnCreate_x0019D5D8(SfhHn_x0019D5D8 *hn, SfhHdr_x0019D5D8 *hdr, unsigned int size) __asm__("func_0019D708");
int isFreeObj_x0019D5D8(SfhHn_x0019D5D8 *hn) __asm__("func_0019D770");
SfhHn_x0019D5D8 *func_0019D5D8_x0019D5D8(void *hdr, unsigned int size) __asm__("func_0019D5D8");
/* SFH_Create: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
SfhHn_x0019D5D8 *func_0019D5D8_x0019D5D8(void *hdr, unsigned int size) {
    SfhHn_x0019D5D8 *hn = 0;
    int maxHn = sfh_pool_x0019D5D8.maxHn;
    int nHn = sfh_pool_x0019D5D8.nHn;
    SfhHn_x0019D5D8 *hns = sfh_pool_x0019D5D8.hns;
    int i;
    if (nHn >= maxHn) {
        return 0;
    }
    for (i = 0; i < maxHn; i++) {
        hn = &hns[i];
        if (isFreeObj_x0019D5D8(hn)) {
            break;
        }
    }
    setHnCreate_x0019D5D8(hn, hdr, size);
    sfh_pool_x0019D5D8.nHn++;
    return hn;
}
s32 func_0019D6F0_x0019D6A0() __asm__("func_0019D6F0");
extern s32 D_00492A58_x0019D6A0 __asm__("D_00492A58");
void func_0019D6A0_x0019D6A0(void) __asm__("func_0019D6A0");
void func_0019D6A0_x0019D6A0(void)
{
  u8 *new_var2;
  s32 *new_var;
  func_0019D6F0_x0019D6A0();
  new_var2 = (u8 *) (&D_00492A58_x0019D6A0);
  new_var = &D_00492A58_x0019D6A0;
  *((s32 *) (new_var2 + 4)) = (s32) ((*((s32 *) (((u8 *) new_var) + 4))) - 1);
}
void func_0019D6D0_x0019D6D0(u8 *arg0) __asm__("func_0019D6D0");
void func_0019D6D0_x0019D6D0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
}
void func_0019D6E0(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
void func_0019D6F0_x0019D6F0(u8 *arg0) __asm__("func_0019D6F0");
void func_0019D6F0_x0019D6F0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 4)) = 0; *((s32 *) (((u8 *) arg0) + 8)) = 0; } while (0);
}
void func_0019D708_x0019D708(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019D708");
void func_0019D708_x0019D708(u8 *arg0, s32 arg1, s32 arg2)
{
 do { *((s32 *) (((u8 *) arg0) + 8)) = arg2; *((s32 *) (((u8 *) arg0) + 0)) = 1; } while (0);
  *((s32 *) (((u8 *) arg0) + 4)) = arg1;
}
s32 func_0019D6F0_x0019D720(s32) __asm__("func_0019D6F0");
void func_0019D720_x0019D720(s32 arg0, s32 arg1) __asm__("func_0019D720");
void func_0019D720_x0019D720(s32 arg0, s32 arg1)
{
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  if (arg0 > 0)
  {
    var_s1 = arg1;
    var_s0 = arg0;
    do
    {
      var_a0 = var_s1;
      var_s1 += 0x10;
      var_s0 -= 1;
      func_0019D6F0_x0019D720(var_a0);
      var_a0 = var_s1;
    }
    while (var_s0 != 0);
  }
}
s32 func_0019D770(s32 *arg0) {
    return *arg0 == 0;
}
s32 func_0019D780(u8 *arg0) {
    s32 temp_v0;
    s32 var_v0;

    var_v0 = func_0019D7C8();
    if ((var_v0 != 0) && ((temp_v0 = *(s32 *)((u8 *)arg0 + 0xC), (temp_v0 == 0x6B)) || (var_v0 = 0, ((temp_v0 < 0x6E) == 0)))) {
        var_v0 = 1;
    }
    return var_v0;
}
typedef unsigned char Uint8_x0019D7C8;
typedef signed int Sint32_x0019D7C8;
typedef Sint32_x0019D7C8 Bool_x0019D7C8;
typedef struct SFH_OBJ_x0019D7C8 *SFH_x0019D7C8;
typedef struct SFH_OBJ_x0019D7C8 {
        Sint32_x0019D7C8 stat;
        Uint8_x0019D7C8 *hdr;
        Sint32_x0019D7C8 size;
        Sint32_x0019D7C8 ver;
} SFH_OBJ_x0019D7C8;
Bool_x0019D7C8 func_0019D7C8_x0019D7C8(SFH_x0019D7C8 sfh) __asm__("func_0019D7C8");
/* sfh_IsValid: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D7C8 func_0019D7C8_x0019D7C8(SFH_x0019D7C8 sfh)
{
        Bool_x0019D7C8 ret;
        switch (sfh->stat) {
        case (-1):
        case 0:
        case 1:
                ret = 0;
                break;
        default:
                ret = 1;
                break;
        }
        return ret;
}
typedef struct SfhHn_x0019D7F0 {
    int stat;
    struct SfhHdr_x0019D7F0 *hdr;
    unsigned int size;
    int version;
} SfhHn_x0019D7F0;
int SFH_AnlyHdrToolVer_x0019D7F0(SfhHn_x0019D7F0 *hn, int *major, int *minor) __asm__("func_0019DBD8");
typedef unsigned int size_t_x0019D7F0;
int memcmp_x0019D7F0(const void *, const void *, size_t_x0019D7F0) __asm__("func_001256A8");
typedef struct SfhStr12_x0019D7F0 {
    char text[12];
} SfhStr12_x0019D7F0;
typedef struct SfhStr32_x0019D7F0 {
    char text[32];
} SfhStr32_x0019D7F0;
typedef struct SfhStr64_x0019D7F0 {
    char text[64];
} SfhStr64_x0019D7F0;
typedef struct SfhMagic_x0019D7F0 {
    char text[24];
    unsigned char major;
    unsigned char minor;
} SfhMagic_x0019D7F0;
typedef struct SfhSysInf_x0019D7F0 {
    int bitRate;
    unsigned char sysType;
    char pad5[3];
    short nStm;
    char pad10[2];
    int totalSize;
} SfhSysInf_x0019D7F0;
typedef struct SfhMuxInf_x0019D7F0 {
    unsigned char kind[4];
    int muxRate;
    int nFrm;
    int totalTime;
    int timeUnit;
    int extFirst;
    int extSecond;
} SfhMuxInf_x0019D7F0;
typedef struct SfhStm_x0019D7F0 {
    SfhStr12_x0019D7F0 name;
    SfhStr12_x0019D7F0 codecName;
    unsigned char id;
    char pad25[64 - 25];
} SfhStm_x0019D7F0;
typedef struct SfhHdr_x0019D7F0 {
    char pad0[32];
    SfhMagic_x0019D7F0 magic;
    char pad58[6];
    SfhStr12_x0019D7F0 date;
    SfhStr12_x0019D7F0 time;
    char pad88[8];
    SfhStr32_x0019D7F0 creator;
    SfhSysInf_x0019D7F0 sys;
    char pad144[32];
    SfhMuxInf_x0019D7F0 mux;
    char pad204[20];
    SfhStr64_x0019D7F0 comment;
    char pad288[96];
    SfhStm_x0019D7F0 stm[26];
} SfhHdr_x0019D7F0;
enum {
    SFH_STAT_FREE_x0019D7F0 = 0,
    SFH_STAT_INVALID_x0019D7F0 = -1,
    SFH_STAT_ANALYSED_x0019D7F0 = 2
};
int isFreeObj_x0019D7F0(SfhHn_x0019D7F0 *hn) __asm__("func_0019D770");
int SFH_AnlyHdrToolVer_x0019D7F0(SfhHn_x0019D7F0 *hn, int *major, int *minor) __asm__("func_0019DBD8");
int isFreeObj_x0019D7F0(SfhHn_x0019D7F0 *hn) __asm__("func_0019D770");
int SFH_AnlyHdrToolVer_x0019D7F0(SfhHn_x0019D7F0 *hn, int *major, int *minor) __asm__("func_0019DBD8");
extern char ext_str0_x0019D7F0[] __asm__("D_00467A38");
int func_0019D7F0_x0019D7F0(SfhHn_x0019D7F0 *hn, int *ok) __asm__("func_0019D7F0");
/* SFH_IsSfdHeader: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019D7F0_x0019D7F0(SfhHn_x0019D7F0 *hn, int *ok) {
    char *magic;
    int version[2];
    *ok = 0;
    magic = hn->hdr->magic.text;
    if (isFreeObj_x0019D7F0(hn) == 1) {
        return 0;
    }
    if (hn->size < 2048) {
        hn->stat = SFH_STAT_INVALID_x0019D7F0;
        return 0;
    }
    if (memcmp_x0019D7F0(magic, ext_str0_x0019D7F0, 24) != 0) {
        hn->stat = SFH_STAT_INVALID_x0019D7F0;
        return 0;
    }
    hn->stat = SFH_STAT_ANALYSED_x0019D7F0;
    if (SFH_AnlyHdrToolVer_x0019D7F0(hn, &version[0], &version[1]) == 0) {
        return 0;
    }
    hn->version = version[0] * 100 + version[1];
    *ok = 1;
    return 1;
}
typedef unsigned char Uint8_x0019D8E0;
typedef unsigned int Uint32_x0019D8E0;
typedef signed int Sint32_x0019D8E0;
typedef Sint32_x0019D8E0 Bool_x0019D8E0;
typedef struct SFH_OBJ_x0019D8E0 *SFH_x0019D8E0;
typedef struct SFH_OBJ_x0019D8E0 {
        Sint32_x0019D8E0 stat;
        Uint8_x0019D8E0 *hdr;
        Sint32_x0019D8E0 size;
        Sint32_x0019D8E0 ver;
} SFH_OBJ_x0019D8E0;
typedef struct {
        Uint8_x0019D8E0 pad0[0x18];
        Uint8_x0019D8E0 id;
        Uint8_x0019D8E0 codec;
        Uint8_x0019D8E0 aud_layer;
        Uint8_x0019D8E0 aud_chnum;
        Uint8_x0019D8E0 aud_smphz[4];
        Uint8_x0019D8E0 ftr_flag;
        Uint8_x0019D8E0 ftr_coltype;
        Uint8_x0019D8E0 ftr_pictype;
        Uint8_x0019D8E0 ftr_fixflg;
        Uint8_x0019D8E0 ftr_expand;
        Uint8_x0019D8E0 ftr_gopn;
        Uint8_x0019D8E0 ftr_gopm;
        Uint8_x0019D8E0 ftr_fxtype;
        Uint8_x0019D8E0 pad28[0x18];
} SFH_ELEM_x0019D8E0;
Bool_x0019D8E0 sfh_IsAnlyOk_x0019D8E0(SFH_x0019D8E0 sfh) __asm__("func_0019D780");
SFH_ELEM_x0019D8E0 *sfh_SearchElem_x0019D8E0(Uint8_x0019D8E0 *hdr, Uint32_x0019D8E0 id) __asm__("func_0019DA20");
Bool_x0019D8E0 func_0019D8E0_x0019D8E0(SFH_x0019D8E0 sfh, Uint8_x0019D8E0 id, Sint32_x0019D8E0 *flag) __asm__("func_0019D8E0");
/* SFH_IsExistStmId: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D8E0 func_0019D8E0_x0019D8E0(SFH_x0019D8E0 sfh, Uint8_x0019D8E0 id, Sint32_x0019D8E0 *flag)
{
        Uint8_x0019D8E0 *hdr;
        *flag = 0;
        hdr = sfh->hdr;
        if (!sfh_IsAnlyOk_x0019D8E0(sfh)) {
                return 0;
        }
        if (sfh_SearchElem_x0019D8E0(hdr, id) != 0) {
                *flag = 1;
        } else {
                *flag = 0;
        }
        return 1;
}
typedef unsigned char Uint8_x0019D950;
typedef unsigned int Uint32_x0019D950;
typedef signed int Sint32_x0019D950;
typedef Sint32_x0019D950 Bool_x0019D950;
typedef struct SFH_OBJ_x0019D950 *SFH_x0019D950;
typedef struct SFH_OBJ_x0019D950 {
        Sint32_x0019D950 stat;
        Uint8_x0019D950 *hdr;
        Sint32_x0019D950 size;
        Sint32_x0019D950 ver;
} SFH_OBJ_x0019D950;
typedef struct {
        Uint8_x0019D950 pad0[0x18];
        Uint8_x0019D950 id;
        Uint8_x0019D950 codec;
        Uint8_x0019D950 aud_layer;
        Uint8_x0019D950 aud_chnum;
        Uint8_x0019D950 aud_smphz[4];
        Uint8_x0019D950 ftr_flag;
        Uint8_x0019D950 ftr_coltype;
        Uint8_x0019D950 ftr_pictype;
        Uint8_x0019D950 ftr_fixflg;
        Uint8_x0019D950 ftr_expand;
        Uint8_x0019D950 ftr_gopn;
        Uint8_x0019D950 ftr_gopm;
        Uint8_x0019D950 ftr_fxtype;
        Uint8_x0019D950 pad28[0x18];
} SFH_ELEM_x0019D950;
SFH_ELEM_x0019D950 *sfh_GetElem_x0019D950(SFH_x0019D950 sfh, Uint32_x0019D950 id) __asm__("func_0019E240");
Uint32_x0019D950 sfh_GetStmType_x0019D950(Uint32_x0019D950 id) __asm__("func_0019EAC0");
Bool_x0019D950 sfh_IsEffFtrAud_x0019D950(Uint32_x0019D950 id, SFH_ELEM_x0019D950 *elem) __asm__("func_0019EA40");
Bool_x0019D950 sfh_IsEffFtrVid_x0019D950(Uint32_x0019D950 id, SFH_ELEM_x0019D950 *elem) __asm__("func_0019EA80");
Bool_x0019D950 func_0019D950_x0019D950(SFH_x0019D950 sfh, Uint8_x0019D950 id, Sint32_x0019D950 *flag) __asm__("func_0019D950");
/* SFH_IsEffFtrInf: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019D950 func_0019D950_x0019D950(SFH_x0019D950 sfh, Uint8_x0019D950 id, Sint32_x0019D950 *flag)
{
        SFH_ELEM_x0019D950 *elem;
        Sint32_x0019D950 ver = sfh->ver;
        Uint32_x0019D950 sid;
        if (ver < 110) {
                return 0;
        }
        sid = id;
        switch (sfh_GetStmType_x0019D950(sid)) {
        case 0xC0:
                elem = sfh_GetElem_x0019D950(sfh, sid);
                if (elem == 0) {
                        return 0;
                }
                *flag = sfh_IsEffFtrAud_x0019D950(sid, elem);
                break;
        case 0xE0:
                elem = sfh_GetElem_x0019D950(sfh, sid);
                if (elem == 0) {
                        return 0;
                }
                *flag = sfh_IsEffFtrVid_x0019D950(sid, elem);
                break;
        default:
                return 0;
        }
        return 1;
}
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) __asm__("func_0019DA20");
u8 *func_0019DA20_x0019DA20(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 var_v0;
    u8 *var_a3;
    u8 *var_v1;

    var_v1 = arg0 + 0x180;
    var_a3 = NULL;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
    var_a2 = 0;
    goto loop_4;
block_2:
    if (var_a2 >= 0x1A) {
        goto block_8;
    }
    var_v1 = arg0 + (var_a2 << 6) + 0x180;
    var_v0 = *(u8 *)((u8 *)var_v1 + 0x18);
loop_4:
    if (var_v0 == arg1) {
        goto block_6;
    }
    var_a2 += 1;
    goto block_2;
block_6:
    var_a3 = var_v1;
block_8:
    return var_a3;
}
typedef struct SfhHn_x0019DA68 {
    int stat;
    struct SfhHdr_x0019DA68 *hdr;
    unsigned int size;
    int version;
} SfhHn_x0019DA68;
typedef unsigned int size_t_x0019DA68;
void *memset_x0019DA68(void *, int, size_t_x0019DA68) __asm__("memset");
typedef struct SfhStr12_x0019DA68 {
    char text[12];
} SfhStr12_x0019DA68;
typedef struct SfhStr32_x0019DA68 {
    char text[32];
} SfhStr32_x0019DA68;
typedef struct SfhStr64_x0019DA68 {
    char text[64];
} SfhStr64_x0019DA68;
typedef struct SfhMagic_x0019DA68 {
    char text[24];
    unsigned char major;
    unsigned char minor;
} SfhMagic_x0019DA68;
typedef struct SfhSysInf_x0019DA68 {
    int bitRate;
    unsigned char sysType;
    char pad5[3];
    short nStm;
    char pad10[2];
    int totalSize;
} SfhSysInf_x0019DA68;
typedef struct SfhMuxInf_x0019DA68 {
    unsigned char kind[4];
    int muxRate;
    int nFrm;
    int totalTime;
    int timeUnit;
    int extFirst;
    int extSecond;
} SfhMuxInf_x0019DA68;
typedef struct SfhStm_x0019DA68 {
    SfhStr12_x0019DA68 name;
    SfhStr12_x0019DA68 codecName;
    unsigned char id;
    char pad25[64 - 25];
} SfhStm_x0019DA68;
typedef struct SfhHdr_x0019DA68 {
    char pad0[32];
    SfhMagic_x0019DA68 magic;
    char pad58[6];
    SfhStr12_x0019DA68 date;
    SfhStr12_x0019DA68 time;
    char pad88[8];
    SfhStr32_x0019DA68 creator;
    SfhSysInf_x0019DA68 sys;
    char pad144[32];
    SfhMuxInf_x0019DA68 mux;
    char pad204[20];
    SfhStr64_x0019DA68 comment;
    char pad288[96];
    SfhStm_x0019DA68 stm[26];
} SfhHdr_x0019DA68;
int isEffectiveVer_x0019DA68(SfhHn_x0019DA68 *hn) __asm__("func_0019D780");
int isEffectiveVer_x0019DA68(SfhHn_x0019DA68 *hn) __asm__("func_0019D780");
int func_0019DA68_x0019DA68(SfhHn_x0019DA68 *hn, char *out) __asm__("func_0019DA68");
/* SFH_AnlySfdFname: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019DA68_x0019DA68(SfhHn_x0019DA68 *hn, char *out) {
    SfhStr12_x0019DA68 *date = &hn->hdr->date;
    if (isEffectiveVer_x0019DA68(hn) == 0) {
        return 0;
    }
    memset_x0019DA68(out, 0, sizeof(SfhStr12_x0019DA68) + 1);
    *(SfhStr12_x0019DA68 *)out = *date;
    return 1;
}
typedef struct { u8 b[12]; } Sfh12_x0019DAD8_x0019DAD8;
s32 func_0019D780_x0019DAD8(s32) __asm__("func_0019D780");
s32 func_0019DAD8_x0019DAD8(s32 a0, Sfh12_x0019DAD8_x0019DAD8 *out) __asm__("func_0019DAD8");
s32 func_0019DAD8_x0019DAD8(s32 a0, Sfh12_x0019DAD8_x0019DAD8 *out)
{
    u8 *h = *(u8 **)(a0 + 4);

    if (func_0019D780_x0019DAD8(a0) == 0) {
        return 0;
    }
    memset(out, 0, 13);
    *out = *(Sfh12_x0019DAD8_x0019DAD8 *)(h + 0x4C);
    return 1;
}
typedef struct { u8 b[32]; } Sfh32_x0019DB48_x0019DB48;
s32 func_0019D7C8_x0019DB48(s32) __asm__("func_0019D7C8");
s32 func_0019DB48_x0019DB48(s32 a0, Sfh32_x0019DB48_x0019DB48 *out) __asm__("func_0019DB48");
s32 func_0019DB48_x0019DB48(s32 a0, Sfh32_x0019DB48_x0019DB48 *out)
{
    u8 *h = *(u8 **)(a0 + 4) + 0x60;

    if (func_0019D7C8_x0019DB48(a0) == 0) {
        return 0;
    }
    memset(out, 0, 0x21);
    *out = *(Sfh32_x0019DB48_x0019DB48 *)h;
    return 1;
}
s32 func_0019DB48_x0019DBD8() __asm__("func_0019DB48");
s32 func_0019DE18_x0019DBD8() __asm__("func_0019DE18");
s32 func_0019DBD8_x0019DBD8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019DBD8");
s32 func_0019DBD8_x0019DBD8(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp[40];
    s32 var_v0;

    var_v0 = func_0019DB48_x0019DBD8(arg0, sp);
    if (var_v0 != 0) {
        var_v0 = func_0019DE18_x0019DBD8(sp, arg1, arg2) != 0;
    }
    return var_v0;
}
typedef struct { u8 b[0x40]; } B64_x0019DC28;
s32 func_0019D780_x0019DC28(void *) __asm__("func_0019D780");
void *memset_x0019DC28(void *, int, unsigned int) __asm__("memset");
s32 func_0019DC28_x0019DC28(u8 *a0, u8 *a1) __asm__("func_0019DC28");
s32 func_0019DC28_x0019DC28(u8 *a0, u8 *a1)
{
    u8 *src;

    src = *(u8 **)(a0 + 4) + 0xE0;
    if (!func_0019D780_x0019DC28(a0)) {
        return 0;
    }
    memset_x0019DC28(a1, 0, 0x41);
    *(B64_x0019DC28 *)a1 = *(B64_x0019DC28 *)src;
    return 1;
}
s32 func_0019D780_x0019DCF8() __asm__("func_0019D780");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1) __asm__("func_0019DCF8");
s32 func_0019DCF8_x0019DCF8(u8 *arg0, s32 *arg1)
{
  s32 *temp_s0;
  s32 var_v0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DCF8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *temp_s0;
    return var_v0;
  }
}
s32 func_0019D780_x0019DD40() __asm__("func_0019D780");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1) __asm__("func_0019DD40");
s32 func_0019DD40_x0019DD40(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD40();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 4)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DD88() __asm__("func_0019D780");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1) __asm__("func_0019DD88");
s32 func_0019DD88_x0019DD88(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DD88();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((s16 *) (((u8 *) temp_s0) + 8)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DDD0() __asm__("func_0019D780");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1) __asm__("func_0019DDD0");
s32 func_0019DDD0_x0019DDD0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0x80;
  var_v0 = func_0019D780_x0019DDD0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
char *strstr_x0019DE18(const char *, const char *) __asm__("func_00128200");
char *convAsciiToDigit_x0019DE18(char *text, int *value) __asm__("func_0019DE78");
char *convAsciiToDigit_x0019DE18(char *text, int *value) __asm__("func_0019DE78");
extern char ext_str0_x0019DE18[] __asm__("D_00467A58");
int func_0019DE18_x0019DE18(char *text, int *major, int *minor) __asm__("func_0019DE18");
/* getToolVer: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019DE18_x0019DE18(char *text, int *major, int *minor) {
    char *found = strstr_x0019DE18(text, ext_str0_x0019DE18);
    if (found == 0) {
        return 0;
    }
    convAsciiToDigit_x0019DE18(convAsciiToDigit_x0019DE18(found + 4, major) + 1, minor);
    return 1;
}
char *func_0019DE78_x0019DE78(char *text, int *value) __asm__("func_0019DE78");
/* convAsciiToDigit: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_0019DE78_x0019DE78(char *text, int *value) {
    char c = *text;
    int number = 0;
    while (c != '.' && c != ' ' && c != '\0' && (unsigned int)(c - '0') < 10) {
        text++;
        number = number * 10 + c - '0';
        c = *text;
    }
    *value = number;
    return text;
}
s32 func_0019D780_x0019DF00() __asm__("func_0019D780");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1) __asm__("func_0019DF00");
s32 func_0019DF00_x0019DF00(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF00();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*temp_s0);
    return var_v0;
  }
}
s32 func_0019D780_x0019DF48() __asm__("func_0019D780");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1) __asm__("func_0019DF48");
s32 func_0019DF48_x0019DF48(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DF48();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 1)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DF90() __asm__("func_0019D780");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1) __asm__("func_0019DF90");
s32 func_0019DF90_x0019DF90(u8 *arg0, s32 *arg1)
{
  s32 *new_var;
  s32 var_v0;
  u8 *temp_s0;
  new_var = &(*((s32 *) (((u8 *) arg0) + 4)));
  temp_s0 = (*new_var) + 0xB0;
  var_v0 = func_0019D780_x0019DF90();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 2)));
    return var_v0;
  }
}
s32 func_0019D780_x0019DFD8() __asm__("func_0019D780");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1) __asm__("func_0019DFD8");
s32 func_0019DFD8_x0019DFD8(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019DFD8();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = (s32) (*((u8 *) (((u8 *) temp_s0) + 3)));
    return var_v0;
  }
}
typedef unsigned char u8_x0019E020;
typedef int s32_x0019E020;
s32_x0019E020 func_0019D780_x0019E020(void *arg0) __asm__("func_0019D780");
s32_x0019E020 func_0019E020_x0019E020(u8_x0019E020 *arg0, s32_x0019E020 *arg1) __asm__("func_0019E020");
s32_x0019E020 func_0019E020_x0019E020(u8_x0019E020 *arg0, s32_x0019E020 *arg1)
{
    u8_x0019E020 *base;

    base = *(u8_x0019E020 **)(arg0 + 4) + 0xB0;
    if (func_0019D780_x0019E020(arg0) == 0) {
        return 0;
    }
    if (*(s32_x0019E020 *)(arg0 + 0xC) < 0x6E) {
        return 0;
    }
    *arg1 = *(s32_x0019E020 *)(base + 4);
    return 1;
}
s32 func_0019D780_x0019E088() __asm__("func_0019D780");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1) __asm__("func_0019E088");
s32 func_0019E088_x0019E088(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E088();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 8));
    return var_v0;
  }
}
s32 func_0019D780_x0019E0D0() __asm__("func_0019D780");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1) __asm__("func_0019E0D0");
s32 func_0019E0D0_x0019E0D0(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E0D0();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    *arg1 = *((s32 *) (((u8 *) temp_s0) + 0xC));
    return var_v0;
  }
}
s32 func_0019D780_x0019E118() __asm__("func_0019D780");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1) __asm__("func_0019E118");
s32 func_0019E118_x0019E118(u8 *arg0, s32 *arg1)
{
  s32 var_v0;
  u8 *temp_s0;
  temp_s0 = (*((s32 *) (((u8 *) arg0) + 4))) + 0xB0;
  var_v0 = func_0019D780_x0019E118();
  if (var_v0 != 0)
  {
    var_v0 = 1;
    if (1)
    {
      *arg1 = *((s32 *) (((u8 *) temp_s0) + 0x10));
      return var_v0;
    }
  }
}
typedef struct { u8 b[12]; } Sfh12_x0019E160_x0019E160;
u8 *func_0019E240_x0019E160(s32, s32) __asm__("func_0019E240");
s32 func_0019E160_x0019E160(s32 a0, u8 a1, Sfh12_x0019E160_x0019E160 *out) __asm__("func_0019E160");
s32 func_0019E160_x0019E160(s32 a0, u8 a1, Sfh12_x0019E160_x0019E160 *out)
{
    u8 *h = func_0019E240_x0019E160(a0, a1);
    if (h == 0) {
        return 0;
    }
    memset(out, 0, 13);
    *out = *(Sfh12_x0019E160_x0019E160 *)(h + 0);
    return 1;
}
typedef struct { u8 b[12]; } Sfh12_x0019E1D0_x0019E1D0;
u8 *func_0019E240_x0019E1D0(s32, s32) __asm__("func_0019E240");
s32 func_0019E1D0_x0019E1D0(s32 a0, u8 a1, Sfh12_x0019E1D0_x0019E1D0 *out) __asm__("func_0019E1D0");
s32 func_0019E1D0_x0019E1D0(s32 a0, u8 a1, Sfh12_x0019E1D0_x0019E1D0 *out)
{
    u8 *h = func_0019E240_x0019E1D0(a0, a1);
    if (h == 0) {
        return 0;
    }
    memset(out, 0, 13);
    *out = *(Sfh12_x0019E1D0_x0019E1D0 *)(h + 0xC);
    return 1;
}
s32 func_0019D780_x0019E240() __asm__("func_0019D780");
s32 func_0019DA20_x0019E240(s32, s32) __asm__("func_0019DA20");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) __asm__("func_0019E240");
void func_0019E240_x0019E240(u8 *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    if (func_0019D780_x0019E240() != 0) {
        func_0019DA20_x0019E240(temp_s1, arg1);
    }
}
u8 *func_0019E240_x0019E298(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E298(s32) __asm__("func_0019EAC0");
s32 func_0019E298_x0019E298(s32 a0, u8 a1, s32 *out) __asm__("func_0019E298");
s32 func_0019E298_x0019E298(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E298(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E298(a1) != 0xC0) {
        return 0;
    }
    *out = h[0x19];
    return 1;
}
u8 *func_0019E240_x0019E300(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E300(s32) __asm__("func_0019EAC0");
s32 func_0019E300_x0019E300(s32 a0, u8 a1, s32 *out) __asm__("func_0019E300");
s32 func_0019E300_x0019E300(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E300(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E300(a1) != 0xC0) {
        return 0;
    }
    if (h[0x19] != 1) {
        return 0;
    }
    *out = h[0x1A];
    return 1;
}
u8 *func_0019E240_x0019E380(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E380(s32) __asm__("func_0019EAC0");
s32 func_0019E380_x0019E380(s32 a0, u8 a1, s32 *out) __asm__("func_0019E380");
s32 func_0019E380_x0019E380(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E380(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E380(a1) != 0xC0) {
        return 0;
    }
    *out = h[0x1B];
    return 1;
}
u8 *func_0019E240_x0019E3E8(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E3E8(s32) __asm__("func_0019EAC0");
s32 func_0019E3E8_x0019E3E8(s32 a0, u8 a1, s32 *out) __asm__("func_0019E3E8");
s32 func_0019E3E8_x0019E3E8(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E3E8(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E3E8(a1) != 0xC0) {
        return 0;
    }
    *out = *(s32 *)(h + 0x1C);
    return 1;
}
u8 *func_0019E240_x0019E450(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E450(s32) __asm__("func_0019EAC0");
s32 func_0019E450_x0019E450(s32 a0, u8 a1, s32 *out) __asm__("func_0019E450");
s32 func_0019E450_x0019E450(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E450(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E450(a1) != 0xE0) {
        return 0;
    }
    *out = h[0x19];
    return 1;
}
void *func_0019E240_x0019E4B8(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E4B8(s32) __asm__("func_0019EAC0");
s32 func_0019E4B8_x0019E4B8(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E4B8");
s32 func_0019E4B8_x0019E4B8(s32 arg0, s32 arg1, s32 *arg2)
{
    u8 *temp;
    u16 v;
    s32 c;
    c = arg1 & 0xFF;
    temp = func_0019E240_x0019E4B8(arg0, c);
    if (temp == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E4B8(c) != 0xE0) {
        return 0;
    }
    v = *(u16 *)(temp + 0x1A);
    *arg2 = (v == 0xFFFF) ? 0 : v;
    return 1;
}
u8 *func_0019E240_x0019E528(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E528(s32) __asm__("func_0019EAC0");
s32 func_0019E528_x0019E528(s32 a0, u8 a1, s32 *w, s32 *h) __asm__("func_0019E528");
s32 func_0019E528_x0019E528(s32 a0, u8 a1, s32 *w, s32 *h)
{
    u8 *e = func_0019E240_x0019E528(a0, a1);
    u8 *p;

    if (e == 0) {
        return 0;
    }
    if (func_0019EAC0_x0019E528(a1) != 0xE0) {
        return 0;
    }
    p = e + 0x1C;
    *w = p[0];
    *w = (*w << 4) | (p[1] >> 4);
    *h = p[1];
    *h = ((*h << 8) | p[2]) & 0xFFF;
    return 1;
}
s32 func_0019E240_x0019E5D0(s32, s32) __asm__("func_0019E240");
s32 func_0019EAC0_x0019E5D0(s32) __asm__("func_0019EAC0");
s32 func_0019E9D0_x0019E5D0(s32) __asm__("func_0019E9D0");
s32 func_0019E5D0_x0019E5D0(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E5D0");
s32 func_0019E5D0_x0019E5D0(s32 arg0, s32 arg1, s32 *arg2)
{
  u8 *p;
  u8 b;
  b = arg1;
  p = (u8 *) func_0019E240_x0019E5D0(arg0, b);
  if (p == 0)
  {
    return 0;
  }
  if (func_0019EAC0_x0019E5D0(b) != 0xE0)
  {
    return 0;
  }
  *arg2 = func_0019E9D0_x0019E5D0(p[0x1F]);
  return 1;
}
void * func_0019E240_x0019E640() __asm__("func_0019E240");
void * func_0019EA80_x0019E640() __asm__("func_0019EA80");
u8 *func_0019E640_x0019E640(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E640");
u8 *func_0019E640_x0019E640(s32 arg0, s32 arg1, s32 *arg2)
{
  void *new_var4;
  u8 *var_v0;
  void *new_var3;
  void *new_var;
  void *new_var2;
  s32 temp_s0;
  u8 *temp_s1;
  temp_s0 = arg1 & 0xFF;
  new_var2 = func_0019E240_x0019E640(arg0, temp_s0);
  var_v0 = new_var2;
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) 0))
  {
    new_var4 = func_0019EA80_x0019E640(temp_s0, temp_s1);
    new_var3 = new_var4;
    var_v0 = (new_var = new_var3);
 do { if (var_v0 != ((void *) 0)) { var_v0 = (u8 *) 1; temp_s1 = (u8 *) temp_s1; new_var = temp_s1; *arg2 = (s32) (*((u8 *) (new_var + 0x21))); return var_v0; } } while (0);
  }
}
void * func_0019E240_x0019E6A8() __asm__("func_0019E240");
void * func_0019EA80_x0019E6A8() __asm__("func_0019EA80");
u8 *func_0019E6A8_x0019E6A8(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E6A8");
u8 *func_0019E6A8_x0019E6A8(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  u8 *var_v0;
  temp_s0 = arg1 & 0xFF;
  var_v0 = func_0019E240_x0019E6A8(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) 0))
  {
    if (temp_s1)
    {
      var_v0 = func_0019EA80_x0019E6A8(temp_s0, temp_s1);
    }
    else
    {
      var_v0 = func_0019EA80_x0019E6A8(temp_s0, temp_s1);
    }
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (s32) (*((u8 *) (((u8 *) temp_s1) + 0x22)));
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E710() __asm__("func_0019E240");
void * func_0019EA80_x0019E710() __asm__("func_0019EA80");
u8 *func_0019E710_x0019E710(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E710");
u8 *func_0019E710_x0019E710(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  u8 *var_v0;
  int new_var;
  new_var = 0;
  temp_s0 = arg1;
  temp_s0 = temp_s0 & 0xFF;
  var_v0 = (temp_s1 = func_0019E240_x0019E710(arg0, temp_s0));
  if (temp_s1 != ((void *) new_var))
  {
    var_v0 = func_0019EA80_x0019E710(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (*((u8 *) (((u8 *) temp_s1) + 0x23))) & 1;
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E780() __asm__("func_0019E240");
void * func_0019EA80_x0019E780() __asm__("func_0019EA80");
u8 *func_0019E780_x0019E780(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E780");
u8 *func_0019E780_x0019E780(s32 arg0, s32 arg1, s32 *arg2)
{
  u8 *new_var;
  int new_var3;
  u8 *new_var2;
  s32 temp_s0;
  u8 *var_v0;
  u8 *temp_s1;
  temp_s0 = arg1 & 0xFF;
  var_v0 = func_0019E240_x0019E780(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != 0)
  {
    ;
    new_var3 = 0;
    if (func_0019EA80_x0019E780(temp_s0, temp_s1) != ((void *) 0))
    {
      new_var2 = (u8 *) temp_s1;
      ;
      *arg2 = (temp_s0 = ((*(new_var = &(*((u8 *) (new_var2 + 0x23))))) & 0x10) != new_var3);
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E7F0() __asm__("func_0019E240");
void * func_0019EA80_x0019E7F0() __asm__("func_0019EA80");
u8 *func_0019E7F0_x0019E7F0(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E7F0");
u8 *func_0019E7F0_x0019E7F0(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  u8 *temp_s1;
  void *new_var;
  u8 *var_v0;
  temp_s0 = 0xFF & arg1;
  new_var = func_0019E240_x0019E7F0(arg0, temp_s0);
  var_v0 = new_var;
  temp_s1 = var_v0;
  if (var_v0 != ((void *) 0))
  {
    var_v0 = func_0019EA80_x0019E7F0(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      ;
      *arg2 = (s32) (*((u8 *) (((u8 *) temp_s1) + 0x24)));
      return (u8 *) 1;
    }
  }
}
void * func_0019E240_x0019E858() __asm__("func_0019E240");
void * func_0019EA80_x0019E858() __asm__("func_0019EA80");
u8 *func_0019E858_x0019E858(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0019E858");
u8 *func_0019E858_x0019E858(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var;
  s32 new_var2;
  s32 temp_s0;
  u8 temp_v0;
  u8 *temp_s1;
  u8 *var_v0;
  temp_s0 = arg1 & 0xFF;
  new_var = 0;
  var_v0 = func_0019E240_x0019E858(arg0, temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) new_var))
  {
    var_v0 = func_0019EA80_x0019E858(temp_s0, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      temp_v0 = *((u8 *) (((u8 *) temp_s1) + 0x25));
      *arg2 = (s32) temp_v0;
      new_var2 = (s32) temp_v0;
      if (new_var2 >= 0x40)
      {
        *arg2 = -1;
      }
      var_v0 = (u8 *) 1;
    }
  }
  temp_s1 = var_v0;
  return temp_s1;
}
void *func_0019E240_x0019E8D0(s32, s32) __asm__("func_0019E240");
s32 func_0019EA80_x0019E8D0(s32, void *) __asm__("func_0019EA80");
s32 func_0019E8D0_x0019E8D0(s32 sfh, s32 c, s32 *out) __asm__("func_0019E8D0");
s32 func_0019E8D0_x0019E8D0(s32 sfh, s32 c, s32 *out)
{
    s32 id;
    u8 *elem;
    s32 v;

    id = c & 0xFF;
    elem = func_0019E240_x0019E8D0(sfh, id);
    if (elem == 0) {
        return 0;
    }
    if (func_0019EA80_x0019E8D0(id, elem) == 0) {
        return 0;
    }
    v = elem[0x26];
    *out = v;
    if (v >= 0x40) {
        *out = -1;
    }
    return 1;
}
u8 *func_0019E240_x0019E948(s32, s32) __asm__("func_0019E240");
s32 func_0019EA80_x0019E948(s32, u8 *) __asm__("func_0019EA80");
s32 func_0019E948_x0019E948(s32 a0, u8 a1, s32 *out) __asm__("func_0019E948");
s32 func_0019E948_x0019E948(s32 a0, u8 a1, s32 *out)
{
    u8 *h = func_0019E240_x0019E948(a0, a1);
    if (h == 0) {
        return 0;
    }
    if (func_0019EA80_x0019E948(a1, h) == 0) {
        return 0;
    }
    if (*(s32 *)(a0 + 0xC) < 0xD2) {
        return 0;
    }
    *out = h[0x27];
    return 1;
}
int func_0019E9D0_x0019E9D0(int code) __asm__("func_0019E9D0");
/* getPicRate: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019E9D0_x0019E9D0(int code) {
    switch (code) {
    case 1: return 23976;
    case 2: return 24000;
    case 3: return 25000;
    case 4: return 29970;
    case 5: return 30000;
    case 6: return 50000;
    case 7: return 59940;
    case 8: return 60000;
    }
    return 0;
}
__asm__("# rebind func_0019E9D0 0x0019E9D0");
typedef unsigned char Uint8_x0019EA40;
typedef unsigned int Uint32_x0019EA40;
typedef signed int Sint32_x0019EA40;
typedef Sint32_x0019EA40 Bool_x0019EA40;
typedef struct {
        Uint8_x0019EA40 pad0[0x18];
        Uint8_x0019EA40 id;
        Uint8_x0019EA40 codec;
        Uint8_x0019EA40 aud_layer;
        Uint8_x0019EA40 aud_chnum;
        Uint8_x0019EA40 aud_smphz[4];
        Uint8_x0019EA40 ftr_flag;
        Uint8_x0019EA40 ftr_coltype;
        Uint8_x0019EA40 ftr_pictype;
        Uint8_x0019EA40 ftr_fixflg;
        Uint8_x0019EA40 ftr_expand;
        Uint8_x0019EA40 ftr_gopn;
        Uint8_x0019EA40 ftr_gopm;
        Uint8_x0019EA40 ftr_fxtype;
        Uint8_x0019EA40 pad28[0x18];
} SFH_ELEM_x0019EA40;
Uint32_x0019EA40 sfh_GetStmType_x0019EA40(Uint32_x0019EA40 id) __asm__("func_0019EAC0");
Bool_x0019EA40 func_0019EA40_x0019EA40(Uint32_x0019EA40 id, SFH_ELEM_x0019EA40 *elem) __asm__("func_0019EA40");
/* sfh_IsEffFtrAud: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019EA40 func_0019EA40_x0019EA40(Uint32_x0019EA40 id, SFH_ELEM_x0019EA40 *elem)
{
        Uint32_x0019EA40 flg;
        if (sfh_GetStmType_x0019EA40(id) != 0xC0) {
                return 0;
        }
        flg = elem->ftr_flag;
        if (flg > 1) {
                return 0;
        } else if (flg == 0) {
                return 0;
        }
        return 1;
}
typedef unsigned char Uint8_x0019EA80;
typedef unsigned int Uint32_x0019EA80;
typedef signed int Sint32_x0019EA80;
typedef Sint32_x0019EA80 Bool_x0019EA80;
typedef struct {
        Uint8_x0019EA80 pad0[0x18];
        Uint8_x0019EA80 id;
        Uint8_x0019EA80 codec;
        Uint8_x0019EA80 aud_layer;
        Uint8_x0019EA80 aud_chnum;
        Uint8_x0019EA80 aud_smphz[4];
        Uint8_x0019EA80 ftr_flag;
        Uint8_x0019EA80 ftr_coltype;
        Uint8_x0019EA80 ftr_pictype;
        Uint8_x0019EA80 ftr_fixflg;
        Uint8_x0019EA80 ftr_expand;
        Uint8_x0019EA80 ftr_gopn;
        Uint8_x0019EA80 ftr_gopm;
        Uint8_x0019EA80 ftr_fxtype;
        Uint8_x0019EA80 pad28[0x18];
} SFH_ELEM_x0019EA80;
Uint32_x0019EA80 sfh_GetStmType_x0019EA80(Uint32_x0019EA80 id) __asm__("func_0019EAC0");
Bool_x0019EA80 func_0019EA80_x0019EA80(Uint32_x0019EA80 id, SFH_ELEM_x0019EA80 *elem) __asm__("func_0019EA80");
/* sfh_IsEffFtrVid: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfh_main.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0019EA80 func_0019EA80_x0019EA80(Uint32_x0019EA80 id, SFH_ELEM_x0019EA80 *elem)
{
        Uint32_x0019EA80 flg;
        if (sfh_GetStmType_x0019EA80(id) != 0xE0) {
                return 0;
        }
        flg = elem->ftr_flag;
        if (flg > 1) {
                return 0;
        } else if (flg == 0) {
                return 0;
        }
        return 1;
}
enum {
    SFH_STM_AUDIO_x0019EAC0 = 0xC0,
    SFH_STM_VIDEO_x0019EAC0 = 0xE0,
    SFH_STM_PRIVATE_x0019EAC0 = 0xBD
};
int func_0019EAC0_x0019EAC0(int id) __asm__("func_0019EAC0");
/* chkStmId: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfh.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0019EAC0_x0019EAC0(int id) {
    if ((unsigned int)(id - 0xC0) < 32) {
        return SFH_STM_AUDIO_x0019EAC0;
    }
    if ((unsigned int)(id - 0xE0) < 16) {
        return SFH_STM_VIDEO_x0019EAC0;
    }
    if (id == 0xBD || id == 0xBF) {
        return SFH_STM_PRIVATE_x0019EAC0;
    }
    return 0;
}
void func_0019EB08(void) {
    func_0019EB20();
}
s32 memset_x0019EB20(s32 *, s32, s32) __asm__("memset");
extern s32 D_00426B50_x0019EB20 __asm__("D_00426B50");
void func_0019EB20_x0019EB20(void) __asm__("func_0019EB20");
void func_0019EB20_x0019EB20(void) {
    memset_x0019EB20(&D_00426B50_x0019EB20, 0, 0xC8);
    *(s32 *)((u8 *)(&D_00426B50_x0019EB20) + 4) = 8;
}
void func_0019EB60(void) {

}
s32 *func_0019EBC0_x0019EB68() __asm__("func_0019EBC0");
s32 func_0019EC10_x0019EB68(s32 *) __asm__("func_0019EC10");
extern s32 D_00426B50_x0019EB68 __asm__("D_00426B50");
s32 *func_0019EB68_x0019EB68(void) __asm__("func_0019EB68");
s32 *func_0019EB68_x0019EB68(void)
{
  s32 *new_var;
  s32 *temp_v0;
  temp_v0 = func_0019EBC0_x0019EB68();
  if (temp_v0 != ((void *) 0))
  {
    func_0019EC10_x0019EB68(temp_v0);
    D_00426B50_x0019EB68 += 1;
    *temp_v0 = 1;
  }
  if (temp_v0)
  {
    return temp_v0;
  }
  else
  {
    new_var = temp_v0;
    return new_var;
  }
}
typedef struct SfxaPrm_x0019EBC0 {
    int mode;
    int lo;
    int hi;
} SfxaPrm_x0019EBC0;
typedef struct SfxaHn_x0019EBC0 {
    int used;
    int changed;
    SfxaPrm_x0019EBC0 prm;
    unsigned char alpha[3];
} SfxaHn_x0019EBC0;
typedef struct SfxaLib_x0019EBC0 {
    int nhn;
    int maxhn;
    SfxaHn_x0019EBC0 hn[8];
} SfxaLib_x0019EBC0;
extern SfxaLib_x0019EBC0 sfxa_lib_x0019EBC0 __asm__("D_00426B50");
SfxaHn_x0019EBC0 *func_0019EBC0_x0019EBC0(void) __asm__("func_0019EBC0");
/* sfxalp_SearchFreeHn: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxa.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
SfxaHn_x0019EBC0 *func_0019EBC0_x0019EBC0(void) {
    int maxhn = sfxa_lib_x0019EBC0.maxhn;
    SfxaHn_x0019EBC0 *tbl = sfxa_lib_x0019EBC0.hn;
    volatile SfxaHn_x0019EBC0 *hn;
    int i;
    for (i = 0; i < maxhn; i++) {
        hn = &tbl[i];
        if (hn->used == 0) {
            return (SfxaHn_x0019EBC0 *)hn;
        }
    }
    return 0;
}
void func_0019EC10_x0019EC10(u8 *arg0) __asm__("func_0019EC10");
void func_0019EC10_x0019EC10(u8 *arg0)
{
  u8 *temp_v0;
  u8 *temp_v1;
  int new_var;
  temp_v1 = arg0 + 0x14;
  temp_v0 = arg0 + 8;
  new_var = 0x1F;
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0x64;
  *((s32 *) (((u8 *) temp_v0) + 4)) = new_var;
  temp_v0 = ((u8 *) arg0) + 8;
  *((s32 *) temp_v0) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 1;
  *((s8 *) (((u8 *) temp_v1) + 1)) = 0x40;
  *((s8 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s8 *) (((u8 *) temp_v1) + 2)) = -0x80;
}
extern s32 D_00426B50_x0019EC50 __asm__("D_00426B50");
void func_0019EC50_x0019EC50(s32 *p) __asm__("func_0019EC50");
void func_0019EC50_x0019EC50(s32 *p)
{
    if (p != 0) {
        *p = 0;
        __asm__ volatile("");
        D_00426B50_x0019EC50--;
    }
}
s32 func_00172110_x0019EC78(s32, s32, s32, s32) __asm__("func_00172110");
void func_0019EC78_x0019EC78(s32 *arg0, s32 arg1, s32 arg2) __asm__("func_0019EC78");
void func_0019EC78_x0019EC78(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_v0;

    temp_v0 = arg0 + 2;
    func_00172110_x0019EC78(temp_v0[0], temp_v0[1], temp_v0[2], arg2);
    arg0[1] = 0;
}
s32 func_001723E0_x0019ECB8(s32, u8, u8, u8) __asm__("func_001723E0");
s32 func_0019ECB8_x0019ECB8(u8 *a0, s32 a1, s32 a2) __asm__("func_0019ECB8");
s32 func_0019ECB8_x0019ECB8(u8 *a0, s32 a1, s32 a2) {
    return func_001723E0_x0019ECB8(a2, a0[0x14], a0[0x15], a0[0x16]);
}
s32 func_0019ECE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0019ECE8");
void func_0019ECE8_x0019ECE8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *new_var;
  int new_var2;
  u8 *temp_v0;
  temp_v0 = arg0 + 8;
  new_var2 = 1;
  *((s32 *) (((u8 *) temp_v0) + 8)) = arg2;
 do { *((s32 *) (((u8 *) arg0) + 8)) = arg3; ; *((s32 *) (((u8 *) temp_v0) + 4)) = arg1; *((s32 *) (((u8 *) arg0) + 4)) = new_var2; } while (0);
}
void func_0019ED08(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 8;
    *arg3 = *(s32 *)((u8 *)arg0 + 8);
    *arg1 = *(s32 *)((u8 *)temp_a0 + 4);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 8);
}
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3) __asm__("func_0019ED28");
void func_0019ED28_x0019ED28(u8 *arg0, s8 arg1, s8 arg2, s8 arg3)
{
  u8 *temp_a0;
 do { temp_a0 = arg0 + 0x14; *((s8 *) (((u8 *) temp_a0) + 2)) = arg3; *((s8 *) (((u8 *) arg0) + 0x14)) = arg1; } while (0);
  *((s8 *) (((u8 *) temp_a0) + 1)) = arg2;
}
void func_0019ED40(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x14;
    *arg1 = *(u8 *)((u8 *)arg0 + 0x14);
    *arg2 = *(u8 *)((u8 *)temp_a0 + 1);
    *arg3 = *(u8 *)((u8 *)temp_a0 + 2);
}
typedef struct SfxPlane_x0019ED60 {
    int addr;
    int pitch;
    int height;
    int f12;
} SfxPlane_x0019ED60;
typedef enum SfxChromaFmt_x0019ED60 {
    SFX_CHROMA_FMT_0_x0019ED60,
    SFX_CHROMA_FMT_1_x0019ED60,
    SFX_CHROMA_FMT_2_x0019ED60,
    SFX_CHROMA_FMT_3_x0019ED60
} SfxChromaFmt_x0019ED60;
typedef struct SfxPicFmt_x0019ED60 {
    int pictureStructure;
    SfxChromaFmt_x0019ED60 chromaFormat;
    int f8;
    int f12;
    int f16;
    int chromaPosH;
    int chromaPosV;
} SfxPicFmt_x0019ED60;
typedef struct SfxFrame_x0019ED60 {
    unsigned int frmfmt;
    SfxPlane_x0019ED60 plane[3];
    int f52[4];
    int width;
    int height;
    int fno;
    int f80;
    int f84;
    int f88;
    int f92;
    SfxPicFmt_x0019ED60 fmt;
    int f120[5];
} SfxFrame_x0019ED60;
void sfx_ClipFrame_x0019ED60(SfxFrame_x0019ED60 *frm, int second, int first) __asm__("func_0019FAC0");
void func_0019ED60_x0019ED60(SfxFrame_x0019ED60 *frm, int left, int top, int right, int bottom) __asm__("func_0019ED60");
/* SFX_SetClipping: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxa.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019ED60_x0019ED60(SfxFrame_x0019ED60 *frm, int left, int top, int right, int bottom) {
    frm->width = right;
    frm->height = bottom;
    sfx_ClipFrame_x0019ED60(frm, left, top);
}
void func_0019ED80(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
void func_0019EDA8(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) -temp_v0;
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (temp_v0 * (*(s32 *)((u8 *)arg0 + 8) - 1)));
}
