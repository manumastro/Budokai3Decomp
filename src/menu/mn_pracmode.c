#include "common.h"
#include "menu/menu.h"

typedef struct PracModeGlobal {
    void *file[2];
    void *f8;
    void *fC;
    Task *task;
} PracModeGlobal;

typedef struct PracModeWork {
    char pad0[0x54];
    void *f54;
    char pad58[0x5E - 0x58];
    u8 f5E;
    u8 f5F;
    char pad60[4];
    u8 f64;
    char pad65[0x6C - 0x65];
} PracModeWork;

extern PracModeGlobal *gPracMode;
extern char D_0046ED70[];
extern char D_0046ED80[];
extern void func_002B93D0(Task *);
extern void func_002B7DC0(PracModeWork *);
extern void func_002C04B0(void *);
extern void Help_Exit(void);
extern void memset(void *, s32, s32);
extern void *func_002C0630(s32, s32, s32);
extern void func_001F07D0(void);
extern void *func_0025C670(s32, s32, s32);
extern void Help_Load(void);

void PracMode_Exit(void) {
    PracModeGlobal *g = gPracMode;
    PracModeWork *w;

    if (g != NULL) {
        w = g->task->data.work;
        if (g->task != NULL) {
            func_002B7DC0(w);
            func_002C04B0(w->f54);
            func_0013AC90(w);
            func_00145120(g->task);
            if (g->f8 != NULL) {
                func_0013AC90(g->f8);
            }
            if (g->fC != NULL) {
                func_0013AC90(g->fC);
            }
        }
        func_0013AC90(g);
        gPracMode = NULL;
        Help_Exit();
    }
}

void PracMode_Start(s32 a0, s32 a1) {
    PracModeGlobal *g = gPracMode;
    Task *t;
    PracModeWork *w;

    g->task = t = func_00144FC0(func_002B93D0, 0, 0x1001, 8, 2, D_0046ED70);
    t->data.work = w = func_0013AAB0(0x6C, 0, D_0046ED80, 0xDA);
    memset(w, 0, 0x6C);
    w->f54 = func_002C0630(0x10805, 0x2000, 0);
    w->f64 = a0;
    w->f5E = a1;
    w->f5F = 2;
    func_001F07D0();
}

void PracMode_Load(void) {
    PracModeGlobal *g;

    gPracMode = g = func_0013AAB0(0x14, 0, D_0046ED80, 0xB0);
    g->file[0] = func_0025C670(0x1082C, 0, 0);
    g->file[1] = func_0025C670(0x1082D, 0, 0);
    g->f8 = NULL;
    g->fC = NULL;
    g->task = NULL;
    Help_Load();
}
