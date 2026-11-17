#include "common.h"
#include "menu/menu.h"
#include "menu/mn_cssubstat.h"

/* The files of the sub screen, shared by its users (users counts them). */
typedef struct CsSubArenaGlobal {
    void *file[2];      /* 0x00 */
    void *f8;
    void *fC;
    s16 users;          /* 0x10 */
} CsSubArenaGlobal;

typedef struct CsSubArenaWork {
    s8 f0;
    s8 f1;
    s8 f2;
    s8 f3;
    s8 f4;
    char pad5[0xC - 5];
    CsSubParent *parent; /* 0x0C */
    void *f10[4];       /* 0x10 */
} CsSubArenaWork;

extern CsSubArenaGlobal *gCsSubArena;
extern char D_0046F450[];
extern char D_0046F460[];
extern void func_0025C800(void *, s32);
extern void Help_Exit(void);
extern void func_0022D0E0(void *, s32);
extern void SklEdit_Close(void);
extern void SklEdit_Open(s32, char *, s32, s32, s32);
extern void func_002E2F30(Task *);
extern void func_001258F8(void *, s32, s32);
extern void *func_0025C670(s32, s32, s32);
extern void Help_Load(void);

s32 CsSubArena_GetResult(Task *t) {
    return ((CsSubArenaWork *)t->data.work)->f1;
}

void CsSubArena_Init(void) {
    gCsSubArena = NULL;
}

void CsSubArena_Unload(void) {
    CsSubArenaGlobal *g = gCsSubArena;

    if (g != NULL) {
        g->users--;
        if (g->users <= 0) {
            if (g->file[0] != NULL) {
                func_0025C800(g->file[0], 0);
            }
            if (g->file[1] != NULL) {
                func_0025C800(g->file[1], 0);
            }
            if (g->fC != NULL) {
                func_0013AC90(g->fC);
            }
            if (g->f8 != NULL) {
                func_0013AC90(g->f8);
            }
            func_0013AC90(g);
            gCsSubArena = NULL;
            Help_Exit();
        }
    }
}

void CsSubArena_Close(Task *t) {
    CsSubArenaWork *w = t->data.work;
    void *p[4] = {0};
    s32 i;

    p[0] = w->f10[0];
    p[1] = w->f10[1];
    p[2] = w->f10[2];
    p[3] = w->f10[3];
    for (i = 0; i < 4; i++) {
        if (p[i] != NULL) {
            func_0022D0E0(p[i], 1);
        }
    }
    func_0013AC90(w);
    func_00145120(t);
    SklEdit_Close();
}

Task *CsSubArena_Open(CsSubParent *parent, s32 a1) {
    CsSubArenaWork *w;
    Task *t;

    t = func_00144FC0(func_002E2F30, 0, 0x2B00, 8, 2, D_0046F450);
    t->data.work = w = func_0013AAB0(0x20, 0, D_0046F460, 0x89);
    func_001258F8(w, 0, 0x20);
    w->f0 = a1;
    w->f2 = (parent->f6 & 1) ? CSSUB_ON : CSSUB_OFF;
    w->f3 = (parent->f6 & 2) != 0;
    w->f3 |= (s8)((parent->f6 & 4) ? 2 : 0);
    w->f1 = -1;
    w->f4 = 0;
    w->parent = parent;
    parent->fD = 3;
    SklEdit_Open(0x4000, parent->f78 + 0x446, (parent->f6 & 1) != 0, 0x11404000, 0);
    return t;
}

void CsSubArena_Load(void) {
    CsSubArenaGlobal *g;

    if (gCsSubArena != NULL) {
        gCsSubArena->users++;
        return;
    }
    gCsSubArena = g = func_0013AAB0(0x14, 0, D_0046F460, 0x5F);
    g->file[0] = func_0025C670(0x10822, 0, 0);
    g->file[1] = func_0025C670(0x10823, 0, 0);
    g->f8 = NULL;
    g->fC = NULL;
    g->users = 1;
    Help_Load();
}
