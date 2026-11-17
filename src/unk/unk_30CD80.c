#include "common.h"

/* The game sets a task's function through a NULL test of the function's address. */
#define TASK_SETFUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

typedef struct Entry28 {
    s8 used;
    char pad1[0x27];
} Entry28;

typedef struct Work {
    s16 f0;
    s16 f2;
    s16 f4;
    char pad6[5];
    s8 fB;
    char padC[4];
    s16 f10;
    s16 f12;
    char pad14[2];
    s16 f16;
    char pad18[4];
    f32 f1C;
    char pad20[0x3C];
    void *f5C;
    void *f60;
    void *f64;
    char pad68[0x208 - 0x68];
    Entry28 entries[30];
} Work;

typedef struct Task Task;
typedef void (*TaskFunc)(Task *);

struct Task {
    char pad0[0x1C];
    TaskFunc func;
    char pad20[0x10];
    Work *work;
};

typedef struct Obj {
    char pad0[4];
    s16 f4;
    char pad6[0x4E];
    void *f54;
} Obj;

typedef struct Res {
    char pad0[0x14];
    void **f14;
} Res;

typedef struct Global {
    Obj *f0;
    Obj *f4;
    Res *f8;
    void *fC;
    s16 f10;
} Global;

extern Global *gArenaRegCharList;
extern f32 gFrameDelta;
extern f32 D_004E0614[];
extern void *D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
typedef union STbl {
    s16 v[2][2];
    u64 d;
} STbl;

extern STbl D_004701C0;
extern STbl D_004701C8;

extern void func_0030BFC0(Work *);
extern void func_0030C6F0(Work *);
extern void func_0030C280(Work *);
extern void func_0030BD30(Work *);
extern void func_0030C0E0(Work *);
extern void amModel_SetCurrent(void *, s32);
extern void func_0022D0E0(void *, s32);
extern void *func_0022D860(void *, f32);
extern void func_0030C8F0(Task *);
extern void func_0030C9C0(Task *);
extern void func_0030C870(Task *);
extern void amCdFs_Close(Obj *, s32);
extern void func_0022E0B0(void *);
extern void amFile_Load(void *);
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(Task *);
extern void Help_Exit(void);

void func_0030CD80(Task *t) {
    Work *w = t->work;
    s16 n;
    s32 i;
    void *v;
    s32 k;

    func_0030BFC0(w);
    w->f1C -= gFrameDelta;
    if (w->f1C <= 0.0f) {
        func_0030C6F0(w);
        n = 0;
        for (i = 0; i < 30; i++) {
            if (w->entries[i].used) {
                n++;
            }
        }
        w->f10 = n;
        if (w->f12 >= n) {
            w->f12 = n - 1;
        }
        if (n == 0) {
            w->f12 = 0;
        }
        func_0030C280(w);
        w->f4 = 2;
        switch (w->f2) {
        case 1:
            w->f2 = -1;
            w->f0 = 5;
            w = t->work;
            w->f0 = 5;
            w->f2 = 1;
            w->f4 = 3;
            D_00470704 = v = gArenaRegCharList->fC;
            D_0047070C = k = 0x4000;
            D_00470708 = 0;
            amModel_SetCurrent(v, k);
            D_00470238 = 0;
            if (w->f64 != NULL) {
                func_0022D0E0(w->f64, 1);
                w->f64 = NULL;
            }
            TASK_SETFUNC(t, func_0030C8F0);
            break;
        case 0:
            w->f2 = -1;
            w->f0 = 5;
            if (w->f64 != NULL) {
                func_0022D0E0(w->f64, 1);
                w->f64 = NULL;
            }
            TASK_SETFUNC(t, func_0030C8F0);
            break;
        default:
            w->f0 = 4;
            TASK_SETFUNC(t, func_0030C9C0);
            break;
        }
    }
}

void ArenaList_TaskMain(Task *t) {
    Global *g = gArenaRegCharList;
    Work *w = t->work;
    void *v;
    s32 n;
    STbl tbl;

    if (g->fC == NULL) {
        if (g->f4->f4 != 3) {
            return;
        }
        g->f8 = g->f0->f54;
        g->f0->f54 = NULL;
        amCdFs_Close(g->f0, 0);
        g->f0 = NULL;
        g->fC = g->f4->f54;
        g->f4->f54 = NULL;
        amCdFs_Close(g->f4, 0);
        g->f4 = NULL;
        func_0022E0B0(g->f8);
        amFile_Load(g->fC);
    }
    SoundRpc_SetVolume(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        SoundRpc_Send3(0, 0, 0x15, 0);
    }
    g = gArenaRegCharList;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(v, n);
    D_00470238 = 0;
    tbl = D_004701C0;
    w->f5C = func_0022D860(g->f8->f14[tbl.v[0][w->fB]], 0.0f);
    w->f60 = func_0022D860(g->f8->f14[tbl.v[1][w->fB]], 0.0f);
    w->f64 = func_0022D860(g->f8->f14[0], 0.0f);
    func_0030C280(w);
    func_0030BD30(w);
    w->f16 = 4;
    w->f0 = 3;
    w->f4 = 1;
    w->f1C = 30.0f;
    TASK_SETFUNC(t, func_0030CD80);
}

s32 ArenaList_GetF2(Task *t) {
    return t->work->f2;
}

void ArenaList_SetF2(Task *t, s16 v) {
    t->work->f2 = v;
}

s32 ArenaList_GetF0(Task *t) {
    return t->work->f0;
}

void ArenaList_SetF0(Task *t, s16 v) {
    t->work->f0 = v;
}

void func_0030D180(void) {
    gArenaRegCharList = NULL;
}

void ArenaList_Exit(void) {
    Global *g = gArenaRegCharList;

    g->f10--;
    if (g->f10 > 0) {
        return;
    }
    if (g->f8 != NULL) {
        amHeap_Free(g->f8);
    }
    if (g->fC != NULL) {
        amHeap_Free(g->fC);
    }
    if (g->f0 != NULL) {
        amCdFs_Close(g->f0, 0);
    }
    if (g->f4 != NULL) {
        amCdFs_Close(g->f4, 0);
    }
    amHeap_Free(g);
    gArenaRegCharList = NULL;
}

void func_0030D240(Task *t) {
    Work *w = t->work;

    func_0030C0E0(w);
    amHeap_Free(w);
    amTask_Kill(t);
    Help_Exit();
}

void func_0030D290(Task *t) {
    Work *w = t->work;

    w->f0 = 5;
    if (w->f64 != NULL) {
        func_0022D0E0(w->f64, 1);
        w->f64 = NULL;
    }
    TASK_SETFUNC(t, func_0030C8F0);
}

void func_0030D300(Task *t) {
    Work *w = t->work;
    Global *g;
    void *v;
    s32 n;
    STbl tbl;

    SoundRpc_SetVolume(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        SoundRpc_Send3(0, 0, 0x16, 0);
    }
    g = gArenaRegCharList;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(v, n);
    D_00470238 = 0;
    tbl = D_004701C8;
    if (w->f5C != NULL) {
        func_0022D0E0(w->f5C, 1);
    }
    w->f5C = func_0022D860(g->f8->f14[tbl.v[0][w->fB]], 0.0f);
    if (w->f60 != NULL) {
        func_0022D0E0(w->f60, 1);
    }
    w->f60 = func_0022D860(g->f8->f14[tbl.v[1][w->fB]], 0.0f);
    if (w->f64 != NULL) {
        func_0022D0E0(w->f64, 1);
        w->f64 = NULL;
    }
    w->f1C = 60.0f;
    w->f0 = 6;
    w->f4 = 4;
    TASK_SETFUNC(t, func_0030C870);
}
