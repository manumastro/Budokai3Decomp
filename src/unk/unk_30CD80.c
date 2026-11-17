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

extern Global *D_00470994;
extern f32 D_004703BC;
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
extern void func_00145CC0(void *, s32);
extern void func_0022D0E0(void *, s32);
extern void *func_0022D860(void *, f32);
extern void func_0030C8F0(Task *);
extern void func_0030C9C0(Task *);
extern void func_0030C870(Task *);
extern void func_0025C800(Obj *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(void *);
extern void func_00143F20(s32, s32, f32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_0013AC90(void *);
extern void func_00145120(Task *);
extern void func_002B5EF0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_30CD80", func_0030CD80);
void func_0030CD80(Task *t);

void func_0030CF60(Task *t) {
    Global *g = D_00470994;
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
    g = D_00470994;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x4000;
    D_00470708 = 0;
    func_00145CC0(v, n);
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

s32 func_0030D140(Task *t) {
    return t->work->f2;
}

void func_0030D150(Task *t, s16 v) {
    t->work->f2 = v;
}

s32 func_0030D160(Task *t) {
    return t->work->f0;
}

void func_0030D170(Task *t, s16 v) {
    t->work->f0 = v;
}

void func_0030D180(void) {
    D_00470994 = NULL;
}

void func_0030D190(void) {
    Global *g = D_00470994;

    g->f10--;
    if (g->f10 > 0) {
        return;
    }
    if (g->f8 != NULL) {
        func_0013AC90(g->f8);
    }
    if (g->fC != NULL) {
        func_0013AC90(g->fC);
    }
    if (g->f0 != NULL) {
        func_0025C800(g->f0, 0);
    }
    if (g->f4 != NULL) {
        func_0025C800(g->f4, 0);
    }
    func_0013AC90(g);
    D_00470994 = NULL;
}

void func_0030D240(Task *t) {
    Work *w = t->work;

    func_0030C0E0(w);
    func_0013AC90(w);
    func_00145120(t);
    func_002B5EF0();
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

    func_00143F20(0, 0, D_004E0614[0]);
    if (!(D_004E0614[0] <= 0.0f)) {
        func_00143D60(0, 0, 0x16, 0);
    }
    g = D_00470994;
    D_00470704 = v = g->fC;
    D_0047070C = n = 0x4000;
    D_00470708 = 0;
    func_00145CC0(v, n);
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
