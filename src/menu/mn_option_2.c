#include "common.h"
#include "menu/menu.h"
#include "story/opening.h"

/* One of the 0xD680-byte records at D_0058F680 (the save data). */
typedef struct SaveRecord {
    char data[0xD680];
} SaveRecord;

/* The options menu's work area (0x490 bytes, gOptionWork). */
typedef struct OptionWork {
    void *file[2];
    s32 f8;
    s32 fC;
    char pad10[0x320 - 0x10];
    Task *f320;
    char pad324[0x33C - 0x324];
    void *f33C;
    void *f340;
    void (*f344)();
    char pad348[0x36C - 0x348];
    void (*f36C)();
    char pad370[0x388 - 0x370];
    f32 f388;
    char pad38C[0x3A4 - 0x38C];
    s32 f3A4;
    char pad3A8[0x3EC - 0x3A8];
    void *f3EC;
    s32 *f3F0;
    s32 *f3F4;
    s32 f3F8;
    s32 f3FC;
    s32 f400;
    s32 f404;
    s32 f408;
    char pad40C[0x414 - 0x40C];
    s32 f414;
    s16 f418;
    char pad41A[0x490 - 0x41A];
} OptionWork;

extern OptionWork *gOptionWork;

/* The game's settings (D_004E05DC). */
typedef struct OptionConfig {
    char pad0[0x1E];
    s16 f1E;
    s16 f20;
    char pad22[0x30 - 0x22];
    s32 f30;
    f32 f34;
    f32 f38;
} OptionConfig;

extern OptionConfig D_004E05DC[];
extern s8 D_004B4B63[];
extern SaveRecord D_0058F680[];
extern char D_0046F398[];
extern char D_0046F3C8[];
extern char D_0046F408[];
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_00125740(void *, void *, s32);
extern void func_001EF510(void *, s32);
extern void func_001F07D0(void);
extern void func_001F0810(s32, s32);
extern s32 amSofdec_GetStat(s32);
extern void func_002DFEC0(Task *);
extern void func_002DE250();

void Option_ProcessTable(void) {
    void *p;

    p = amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
    func_00125740(p, &D_0058F680[D_004B4B63[0]], 0xD680);
    func_001EF510(p, 0xD680);
    amHeap_Free(p);
}
void Option_Clear(void) {
    gOptionWork = NULL;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option_2", func_002E0E50);
void Option_Start(void) {
    OptionWork *w = gOptionWork;

    w->f320 = amTask_Create(func_002DFEC0, 0, 0x5000, 0x4000, 2, D_0046F398);
    w->f414 = 0;
    w->f344 = func_002DE250;
    func_001F07D0();
}
extern void memset(void *, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void *func_002C0630(s32, s32, s32);
extern void Help_Load(void);
extern void Save_Load(s32, s32);
extern void func_002DF4E0(void);
extern void func_002DF3D0(void);
extern s16 D_004E0608[];
extern void func_002D8B00();
extern void func_002DE910(s32, s32, s32 *, s32 *);

#if 0
/* All but the settings block: the original keeps the address of D_004E05DC in $t3 and loads the two floats
   from it; this reaches them %lo-relative and builds &c->f30 apart. */
void func_002E18D0(void) {
    OptionWork *w;
    OptionConfig *c;
    OptionWork *w2;
    s32 *p404;
    s32 *p408;

    gOptionWork = amHeap_Alloc(0x490, 0, D_0046F3C8, 0x5F3);
    memset(gOptionWork, 0, 0x490);
    w = gOptionWork;
    w->file[0] = amCdFs_ReadFileId(0x10842, 0, 0);
    w->file[1] = amCdFs_ReadFileId(0x10843, 0, 0);
    w->f33C = func_002C0630(0x10804, 0x5010, 0);
    w->f340 = func_002C0630(0x10801, 0x5020, 0);
    w->f8 = 0;
    w->fC = 0;
    Help_Load();
    Save_Load(0x2000, 0);
    func_002DF4E0();
    func_002DF3D0();
    c = D_004E05DC;
    gOptionWork->f418 = D_004E0608[0];
    w2 = gOptionWork;
    p404 = &w2->f404;
    p408 = &w2->f408;
    w2->f404 = 255.0f * c->f34;
    w2->f408 = 255.0f * c->f38;
    w2->f3EC = &c->f30;
    w2->f3F0 = p404;
    w2->f3F4 = p408;
    w2->f3F8 = 2;
    w2->f3FC = 0x100;
    w2->f400 = 0x100;
    w->f36C = func_002D8B00;
    w->f388 = -95.0f;
    w->f3A4 = 0;
    func_002DE910(0x100, 2, p408, p404);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option_2", func_002E18D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option_2", func_002E1A40);

extern void amDisp_SetOffset(s32, s32);

#if 0
/* The original keeps the address of D_004E05DC in $v0 and reads both fields from it (the same sequence is inlined
   in func_002E1A40); this folds the address into each lh (pointer local, inline getter, volatile, a definition in
   the file: no change). */
void func_002E1BB0(void) {
    OptionConfig *c = D_004E05DC;

    amDisp_SetOffset(c->f1E, c->f20);
}
#endif

void func_002E1BB0(void) {
    u8 *p = (u8 *)D_004E05DC;
    amDisp_SetOffset(*(s16 *)(p + 0x1E), *(s16 *)(p + 0x20));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option_2", func_002E1BD0);
extern s32 amSofdec_Draw(s32);
extern void *amPkt_Alloc(s32);
extern void amDma_Request(s32, s32, s32, s32, s32, s32, s32, s32);
extern void amVram_Apply(s32);

#if 0
/* The switch matches; the packet stores are scheduled differently (the original computes the DMA address
   with dsll32/dsrl32 early and shares the constant 1 between the packet and the arguments). */
void func_002E1DF0(Task *t) {
    s32 *n;
    u32 *p;

    switch (amSofdec_Draw(gOpening->fC)) {
    case -1:
    case 0:
        return;
    case 1:
        n = &gOpening->f10;
        if (*n < 2) {
            (*n)++;
            return;
        }
        break;
    case 2:
        n = &gOpening->f10;
        if (*n == 1) {
            *n = 2;
            return;
        }
        break;
    }
    p = amPkt_Alloc(0xA0);
    p[0] = 0x70000009;
    p[1] = 0;
    p[4] = 0x8001;
    p[5] = 0x808B4000;
    *(u64 *)&p[6] = 0xEEEEE8EE;
    p[8] = 1;
    *(u64 *)&p[10] = 0x46;
    p[12] = 0x30000;
    *(u64 *)&p[14] = 0x47;
    *(u64 *)&p[16] = 0x6FC007FC00AULL;
    p[20] = 0x80808080;
    *(u64 *)&p[22] = 1;
    *(u64 *)&p[24] = 0;
    *(u64 *)&p[24] = 0;
    *(u64 *)&p[26] = 3;
    *(u64 *)&p[28] = 0x72007000;
    *(u64 *)&p[30] = 5;
    *(u64 *)&p[32] = 0x1C002000;
    *(u64 *)&p[34] = 3;
    *(u64 *)&p[36] = 0x8E009000;
    *(u64 *)&p[38] = 5;
    amDma_Request(0, 2, 1, 1, (s32)p & 0x0FFFFFFF, 0, 0, 0);
    amVram_Apply(2);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option_2", func_002E1DF0);
void func_002E1DF0(Task *t);

void Opening_TaskWaitMovie(Task *t) {

    switch (amSofdec_GetStat(gOpening->fC)) {
    case 1:
        return;
    case 2:
        if (!((D_00492FCE[0] | D_00493086[0]) & 8)) {
            break;
        }
    case 0:
    default:
        func_001F0810(-1, 0);
        TASK_SET_FUNC(t, func_002E1DF0);
    }
    func_002E1DF0(t);
}
/* The movie player's creation parameters, copied from D_00456D60. */
typedef struct MovieParam {
    s32 f0[7];
    s32 f1C;
    f32 f20;
} MovieParam __attribute__((aligned(16)));

typedef struct MovieObjVt {
    char pad0[0x2C];
    void (*f2C)(struct MovieObj *, s32);
} MovieObjVt;

typedef struct MovieObj {
    MovieObjVt *vt;
} MovieObj;

typedef struct MovieSlot {
    MovieObj *obj;
    char pad4[0x108 - 4];
} MovieSlot;

extern MovieParam D_00456D60;
extern s32 D_0046FD5C;
extern char D_0046F3F0[];
extern f32 D_004E0610[];
extern MovieSlot gSofdecMovie[];
extern void func_00264140(s32, s32);
extern s32 amSofdec_Create(MovieParam *);
extern void func_001F0830(s32, s32);
extern void func_001F0820(void);
extern f32 func_0011F698(f32);
extern void amSofdec_StartFname(s32, char *, s32);

void Opening_TaskMain(Task *t) {
    MovieParam prm = D_00456D60;
    s32 *wait;
    s32 n;
    s32 vol;

    prm.f1C = D_0046FD5C;
    wait = &gOpening->f4;
    if (*wait > 0) {
        (*wait)--;
        return;
    }
    func_00264140(-1, 0);
    if ((n = amSofdec_Create(&prm)) < 0) {
        func_001F0830(4, 0);
        func_001F0820();
        return;
    }
    if (D_004E0610[0] <= 0.0001f) {
        vol = -999;
    } else {
        vol = 200.0f * func_0011F698(D_004E0610[0]);
    }
    gSofdecMovie[n].obj->vt->f2C(gSofdecMovie[n].obj, vol);
    amSofdec_StartFname(n, D_0046F3F0, 1);
    gOpening->fC = n;
    TASK_SET_FUNC(t, Opening_TaskWaitMovie);
    func_001F0830(4, 0);
}
void Opening_Clear(void) {
    gOpening = NULL;
}
void Opening_TaskMain(Task *t);

void Opening_Start(void) {
    func_001F07D0();
    amTask_Create(Opening_TaskMain, 0, 0x8000, 2, 0x10000, D_0046F408);
    gOpening->f4 = 1;
}
