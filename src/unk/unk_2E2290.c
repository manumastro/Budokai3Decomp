#include "common.h"

#define TASK_SETFUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

typedef struct Ent14 {
    s16 v[7];
} Ent14;

typedef struct Big {
    char pad0[0x44];
    Ent14 e[202];
    char padB50[0x10];
    s8 fB60;
} Big;

typedef struct Obj {
    char pad0[0x78];
    Big *f78;
} Obj;

typedef struct Res {
    char pad0[0x14];
    void **f14;
    char pad18[4];
    void **f1C;
} Res;

typedef struct Model {
    char pad0[4];
    s16 f4;
    char pad6[0x4E];
    void *f54;
} Model;

typedef struct Global {
    Model *f0;
    Model *f4;
    Res *f8;
    void *fC;
} Global;

typedef struct Work {
    s8 f0;
    s8 f1;
    s8 f2;
    char pad3;
    s8 f4;
    char pad5[3];
    f32 f8;
    Obj *fC;
    void *f10;
    void *f14;
    void *f18;
    void *f1C;
} Work;

typedef struct Task Task;
typedef void (*TaskFunc)(Task *);

struct Task {
    char pad0[0x1C];
    TaskFunc func;
    char pad20[0x10];
    Work *work;
};

typedef struct Pair16 {
    s16 v[2];
} Pair16;

typedef struct Tbl3 {
    s16 v[3][2];
} Tbl3;

extern f32 D_004703BC;
extern u8 D_005C4120[];
extern Global *D_00470940;
extern void *D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern Pair16 D_0047018C;
extern Pair16 D_00470190;
extern Tbl3 D_00456D88;
extern f32 D_004E0614[];
extern void func_0025C800(Model *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(void *);
extern void func_00143F20(s32, s32, f32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_0022D0E0(void *, s32);
extern void *func_0022D670(void *, f32);
extern void func_002E2290(Work *);
extern void func_002E2850(Task *);
extern s32 func_002B4C80(s32);
extern void func_002B4CC0(s32, s32 *);
extern void func_00145CC0(void *, s32);
extern void *func_0022D860(void *, f32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2E2290", func_002E2290);

void func_002E2630(Task *t) {
    Work *w = t->work;

    func_002E2290(w);
    w->f8 -= D_004703BC;
    if (w->f8 <= 0.0f) {
        w->f1 = 0;
        t->func = NULL;
    }
}

void func_002E2690(Task *t) {
    Work *w = t->work;

    func_002E2290(w);
    w->f8 -= D_004703BC;
    if (w->f8 <= 0.0f) {
        w->f1 = 1;
        t->func = NULL;
    }
}

void func_002E2700(Task *t) {
    Work *w = t->work;
    Obj *o = w->fC;
    s32 id;
    s32 k;
    s32 buf[8];

    func_002E2290(w);
    switch (D_005C4120[0]) {
    case 0:
        id = 0;
        break;
    case 1:
    case 2:
        id = w->f2 != 0 ? 2 : 1;
        break;
    }
    if (func_002B4C80(id) == 9) {
        k = o->f78->fB60;
        func_002B4CC0(id, buf);
        o->f78->e[k].v[0] = buf[1];
        o->f78->e[k].v[1] = buf[2];
        o->f78->e[k].v[2] = buf[3];
        o->f78->e[k].v[3] = buf[4];
        o->f78->e[k].v[4] = buf[5];
        o->f78->e[k].v[5] = buf[6];
        o->f78->e[k].v[6] = buf[7];
        TASK_SETFUNC(t, func_002E2850);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E2290", func_002E2850);

void func_002E2E50(Task *t) {
    Work *w = t->work;
    Global *g;
    void *v;
    s32 n;
    Pair16 tbl;

    func_002E2290(w);
    w->f8 -= D_004703BC;
    if (w->f8 <= 0.0f) {
        w->f4 = 2;
        g = D_00470940;
        D_00470704 = v = g->fC;
        D_0047070C = n = 0x6000;
        D_00470708 = 0;
        func_00145CC0(v, n);
        D_00470238 = 0;
        tbl = D_0047018C;
        w->f1C = func_0022D860(g->f8->f14[tbl.v[w->f2]], 0.0f);
        TASK_SETFUNC(t, func_002E2850);
    }
}

void func_002E2F30(Task *t) {
    Global *g = D_00470940;
    Work *w = t->work;
    void *v;
    s32 n;
    Tbl3 tbl;
    s32 i;

    if (g->fC == NULL) {
        if (g->f4->f4 != 3) {
            return;
        }
        g->f8 = g->f0->f54;
        g->f0->f54 = NULL;
        func_0025C800(g->f0, 0);
        g->f0 = NULL;
        g->fC = g->f4->f54;
        g->f4->f54 = NULL;
        func_0025C800(g->f4, 0);
        g->f4 = NULL;
        func_0022E0B0(g->f8);
        func_0012C360(g->fC);
    }
    func_00143F20(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        func_00143D60(0, 0, 0x15, 0);
    }
    g = D_00470940;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x6000;
    D_00470708 = 0;
    func_00145CC0(v, n);
    D_00470238 = 0;
    tbl = D_00456D88;
    i = w->f2;
    w->f10 = func_0022D670(g->f8->f1C[tbl.v[0][i]], 0.0f);
    w->f14 = func_0022D670(g->f8->f1C[tbl.v[1][i]], 0.0f);
    w->f18 = func_0022D670(g->f8->f1C[tbl.v[2][i]], 0.0f);
    w->f4 = 1;
    w->f8 = 30.0f;
    TASK_SETFUNC(t, func_002E2E50);
}

void func_002E3110(Task *t) {
    Work *w = t->work;
    Global *g;
    void *v;
    s32 n;
    Pair16 tbl;
    s8 idx;

    switch (w->f4) {
    case 1:
    case 2:
        break;
    default:
        return;
    }
    g = D_00470940;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x6000;
    D_00470708 = 0;
    func_00145CC0(v, n);
    D_00470238 = 0;
    tbl = D_00470190;
    idx = w->f2;
    if (w->f10 != NULL) {
        func_0022D0E0(w->f10, 1);
    }
    w->f10 = func_0022D670(g->f8->f1C[tbl.v[idx]], 0.0f);
    if (w->f1C != NULL) {
        func_0022D0E0(w->f1C, 1);
        w->f1C = NULL;
    }
    w->f8 = 30.0f;
    w->f4 = 4;
    TASK_SETFUNC(t, func_002E2630);
}
