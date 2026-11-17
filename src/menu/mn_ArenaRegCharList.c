#include "common.h"
#include "menu/menu.h"

typedef struct ArenaRegCharListGlobal {
    void *file[2];
    s32 f8;
    s32 fC;
    s16 count;          /* 0x10: how many users */
} ArenaRegCharListGlobal;

typedef struct ArenaRegCharListWork {
    s16 f0;
    s16 f2;
    char pad4[6];
    s8 fA;
    s8 fB;
    s8 fC;
    s8 fD;
    s8 fE;
    char padF;
    s16 f10;
    s16 f12;
    s16 f14;
    char pad16[2];
    f32 f18;
    char pad1C[0x6B8 - 0x1C];
} ArenaRegCharListWork;

extern ArenaRegCharListGlobal *gArenaRegCharList;
extern s16 D_005C412E[];
extern s16 D_005C4132[];
extern char D_0046FB78[];
extern char D_0046FB90[];
extern void func_0030CF60(Task *);
extern void memset(void *, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load(void);

Task *ArenaRegCharList_Start(s8 a, s8 b, s8 c) {
    ArenaRegCharListWork *w;
    Task *t;

    t = amTask_Create(func_0030CF60, 0, 0x2800, 8, 2, D_0046FB78);
    t->data.work = w = amHeap_Alloc(0x6B8, 0, D_0046FB90, 0x9B);
    memset(w, 0, 0x6B8);
    w->f0 = 1;
    w->f2 = -1;
    w->fA = a;
    w->fB = b;
    w->fC = c;
    w->fD = 0;
    w->fE = -1;
    w->f10 = 0;
    w->f18 = 1.0f;
    w->f14 = D_005C412E[w->fB];
    w->f12 = D_005C4132[w->fB];
    Help_Load();
    return t;
}

void ArenaRegCharList_Load(void) {
    ArenaRegCharListGlobal *g;

    if (gArenaRegCharList != NULL) {
        gArenaRegCharList->count++;
        return;
    }
    gArenaRegCharList = g = amHeap_Alloc(0x14, 0, D_0046FB90, 0x72);
    g->file[0] = amCdFs_ReadFileId(0x10815, 0, 0);
    g->file[1] = amCdFs_ReadFileId(0x10816, 0, 0);
    g->f8 = 0;
    g->fC = 0;
    g->count = 1;
}
