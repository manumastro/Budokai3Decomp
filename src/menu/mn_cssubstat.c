#include "common.h"
#include "menu/menu.h"
#include "menu/mn_cssubstat.h"

/* A file being read (amCdFs_ReadFileId's handle). */
typedef struct CsSubStatFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once read */
    char pad6[0x54 - 6];
    s32 data;           /* 0x54 */
} CsSubStatFile;

typedef struct CsSubStatGlobal {
    CsSubStatFile *file[2]; /* 0x00 */
    s32 f8;             /* file[0]'s data, kept */
    s32 fC;             /* file[1]'s data, kept */
    s32 users;          /* 0x10 */
} CsSubStatGlobal;

typedef struct CsSubStatWork {
    s8 f0;
    s8 f1;
    s8 state;           /* 0x02 */
    s8 f3;
    s8 f4;
    u8 f5;
    s8 f6;
    s8 f7;
    s8 f8;
    char pad9[0xC - 9];
    f32 fC;
    CsSubParent *parent; /* 0x10 */
    void *f14[11];      /* 0x14 */
    void *f40[7];       /* 0x40 */
} CsSubStatWork;

extern CsSubStatGlobal *gCsSubStat;
extern f32 D_004E0614[];
extern char D_0046B770[];
extern char D_0046B780[];
extern void amCdFs_Close(void *, s32);
extern void func_0022E0B0(s32);
extern void amFile_Load(s32);
extern void func_00143F20(s32, s32, f32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_00281A40(CsSubStatWork *);
extern void func_00282620(Task *);
extern void func_00281870(CsSubStatWork *);
extern void func_00281C60(Task *);
extern void Help_Exit(void);
extern void func_0022D0E0(void *, s32);
extern void SklEdit_Close(void);
extern void SklEdit_Open(s32, char *, s32, s32, s32);
extern void memset(void *, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load(void);

void CsSubStat_TaskLoad(Task *t) {
    CsSubStatGlobal *g = gCsSubStat;
    CsSubStatWork *w = t->data.work;

    if (g->fC == 0) {
        if (g->file[1]->state != 3) {
            return;
        }
        g->f8 = g->file[0]->data;
        g->file[0]->data = 0;
        amCdFs_Close(g->file[0], 0);
        g->file[0] = NULL;
        g->fC = g->file[1]->data;
        g->file[1]->data = 0;
        amCdFs_Close(g->file[1], 0);
        g->file[1] = NULL;
        func_0022E0B0(g->f8);
        amFile_Load(g->fC);
    }
    func_00143F20(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        func_00143D60(0, 0, 0x15, 0);
    }
    func_00281A40(w);
    w->state = 1;
    w->f8 = 1;
    w->fC = 20.0f;
    TASK_SET_FUNC(t, func_00282620);
}

void CsSubStat_RequestClose(Task *t) {
    CsSubStatWork *w = t->data.work;

    switch (w->state) {
    default:
        return;
    case 1:
    case 2:
    case 3:
        break;
    }
        func_00281870(w);
        w->fC = 30.0f;
        w->state = 4;
        w->f8 = 4;
        TASK_SET_FUNC(t, func_00281C60);
}

s32 CsSubStat_GetSlot(Task *t) {
    return ((CsSubStatWork *)t->data.work)->f6;
}

s32 CsSubStat_GetResult(Task *t) {
    return ((CsSubStatWork *)t->data.work)->f3;
}

void CsSubStat_Init(void) {
    gCsSubStat = NULL;
}

void CsSubStat_Unload(void) {
    CsSubStatGlobal *g = gCsSubStat;

    g->users--;
    if (g->users == 0) {
        if (g->file[0] != NULL) {
            amCdFs_Close(g->file[0], 0);
        }
        if (g->file[1] != NULL) {
            amCdFs_Close(g->file[1], 0);
        }
        if (g->fC != 0) {
            amHeap_Free((void *)g->fC);
        }
        if (g->f8 != 0) {
            amHeap_Free((void *)g->f8);
        }
        amHeap_Free(g);
        gCsSubStat = NULL;
        Help_Exit();
    }
}

void CsSubStat_Close(Task *t) {
    CsSubStatWork *w = t->data.work;
    void *p[11] = {0};
    s32 j;
    s32 i;

    p[0] = w->f14[0];
    p[1] = w->f14[1];
    p[2] = w->f14[2];
    p[3] = w->f14[3];
    p[4] = w->f14[4];
    p[5] = w->f14[5];
    p[6] = w->f14[6];
    p[7] = w->f14[7];
    p[8] = w->f14[8];
    p[9] = w->f14[9];
    p[10] = w->f14[10];
    for (i = 0; i < 11; i++) {
        if (p[i] != NULL) {
            func_0022D0E0(p[i], 1);
        }
    }
    for (j = 0; j < 7; j++) {
        if (w->f40[j] != NULL) {
            func_0022D0E0(w->f40[j], 1);
        }
    }
    amHeap_Free(w);
    amTask_Kill(t);
    SklEdit_Close();
}

Task *CsSubStat_Open(CsSubParent *parent, s32 a1, s32 a2) {
    CsSubStatWork *w;
    Task *t;

    t = amTask_Create(CsSubStat_TaskLoad, 0, 0x2B00, 8, 2, D_0046B770);
    t->data.work = w = amHeap_Alloc(0x5C, 0, D_0046B780, 0x95);
    memset(w, 0, 0x5C);
    w->f0 = a1;
    w->f1 = a2;
    w->state = 0;
    w->f3 = -1;
    w->f4 = (parent->f6 & 1) ? CSSUB_ON : CSSUB_OFF;
    w->f5 = (parent->f6 & 2) != 0;
    w->f5 |= (u8)((parent->f6 & 4) ? 2 : 0);
    w->f6 = parent->fD;
    w->f7 = -1;
    w->parent = parent;
    w->f8 = 0;
    SklEdit_Open(0x4000, parent->f78 + 0x446, w->f4, 0x11404000, 0);
    return t;
}

void CsSubStat_Load(void) {
    CsSubStatGlobal *g;

    if (gCsSubStat != NULL) {
        gCsSubStat->users++;
        return;
    }
    gCsSubStat = g = amHeap_Alloc(0x14, 0, D_0046B780, 0x67);
    g->file[0] = amCdFs_ReadFileId(0x10822, 0, 0);
    g->file[1] = amCdFs_ReadFileId(0x10823, 0, 0);
    g->f8 = 0;
    g->fC = 0;
    g->users = 1;
    Help_Load();
}
