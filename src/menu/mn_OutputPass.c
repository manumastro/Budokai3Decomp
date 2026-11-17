#include "common.h"
#include "menu/menu.h"

typedef struct OutputPassGlobal {
    void *file[2];
    s32 f8;
    s32 fC;
    Task *task;
} OutputPassGlobal;

typedef struct OutputPassWork {
    char pad0[0x94];
    char f94[0x28];     /* 0x94: the password, copied in */
    char padBC[0xC2 - 0xBC];
    u16 fC2[36];
    char pad10A[2];
} OutputPassWork;

extern OutputPassGlobal *gOutputPass;
extern char D_0046F798[];
extern char D_0046F7B0[];
extern void func_002F5260(Task *);
extern void memset(void *, s32, s32);
extern void func_00125740(void *, void *, s32);
extern void *func_0025C670(s32, s32, s32);
extern void Help_Load(void);

void OutputPass_Start(void *src, u16 prio) {
    OutputPassGlobal *g = gOutputPass;
    Task *t;
    OutputPassWork *w;
    s32 i;

    g->task = t = func_00144FC0(func_002F5260, 0, prio, 8, 2, D_0046F798);
    t->data.work = w = func_0013AAB0(0x10C, 0, D_0046F7B0, 0x84);
    memset(w, 0, 0x10C);
    for (i = 0; i < 36; i++) {
        w->fC2[i] = 0xFFFF;
    }
    func_00125740(w->f94, src, 0x28);
}

void OutputPass_Load(void) {
    OutputPassGlobal *g;

    gOutputPass = g = func_0013AAB0(0x14, 0, D_0046F7B0, 0x58);
    g->file[0] = func_0025C670(0x1082A, 0, 0);
    g->file[1] = func_0025C670(0x1082B, 0, 0);
    g->f8 = 0;
    g->fC = 0;
    g->task = NULL;
    Help_Load();
}
