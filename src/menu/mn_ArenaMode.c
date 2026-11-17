#include "common.h"
#include "menu/menu.h"

/* A file being read (func_0025C670's handle). */
typedef struct ArenaModeFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once read */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} ArenaModeFile;

typedef struct ArenaModeGlobal {
    ArenaModeFile *file[2]; /* 0x00 */
    Task *task;         /* 0x08 */
} ArenaModeGlobal;

/* The screen's resource file (file 0x10817): tables of pointers into it. */
typedef struct ArenaModeRes {
    char pad0[0x14];
    s32 *f14;
    char pad18[4];
    s32 *f1C;
} ArenaModeRes;

typedef struct ArenaModeWork {
    ArenaModeRes *res;  /* 0x00 */
    void *tex;          /* 0x04 */
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18[3];
    s32 f24;
    s32 f28;
    s32 f2C;
    void *f30;          /* 0x30 */
    u8 f34;
    s8 f35;
    u8 f36;
    u8 state;           /* 0x37 */
    u8 f38;
    u8 f39;
    char pad3A[2];
    f32 timer;          /* 0x3C */
    s32 se;             /* 0x40 */
    u8 f44;
    char pad45[3];
} ArenaModeWork;

typedef struct ArenaModeSe {
    s32 id[3];
} ArenaModeSe;

extern ArenaModeGlobal *gArenaMode;
extern ArenaModeSe D_00456AF0;
extern char D_0046F290[];
extern char D_0046F2A0[];
extern s32 D_00470238;
extern f32 D_004703BC;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0610[];
extern f32 D_004E0618[];
extern s16 D_004E05F8[];
extern void func_00145CC0(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_002D0530(ArenaModeWork *);
extern void func_0022C700(void);
extern void func_00229800(s32, void *, s32, f32);
extern void func_002C0470(void *, void *);
extern u32 func_0012EAE0(s32);
extern void func_002C0490(void *, s32);
extern s32 func_0012D790(s32, s32, s32);
extern void func_0012DB00(s32, f32);
extern void func_0012DC30(s32, s32);
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D860(s32, f32);
extern void func_002D12B0(Task *);
extern void func_0012D900(s32);
extern void func_00264260(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(void *);
extern void func_0022DB30(s32);
extern void func_002D1C20(void);
extern void func_0022D0E0(s32, s32);
extern void func_002C04B0(void *);
extern void Help_Exit(void);
extern void memset(void *, s32, s32);
extern void *func_002C0630(s32, s32, s32);
extern void func_001F07D0(void);
extern void func_002E8720(void);
extern void Help_Load(void);
extern void *func_0025C670(s32, s32, s32);

void ArenaMode_TaskOpen(Task *t) {
    ArenaModeSe se;
    s32 pos[8];
    ArenaModeWork *w = t->data.work;
    s32 v;
    s32 c;
    s32 m;
    u32 r;
    s32 j;
    s32 i;
    f32 f;

    D_00470704 = v = (s32)w->tex;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    {
        s32 p[6] = {0};

        p[0] = w->f8;
        p[1] = w->fC;
        p[2] = w->f10;
        p[3] = w->f14;
        p[4] = w->f24;
        p[5] = w->f2C;
        D_00470704 = v = (s32)w->tex;
        D_0047070C = c = 0x1000;
        D_00470708 = 0;
        func_00145CC0(v, c);
        D_00470238 = 0;
        for (i = 0; i < 6; i++) {
            m = p[i];
            if (m != 0) {
                func_0022C060(m, 1.0f);
                func_0022CD00(m);
            }
        }
    }
    if (w->state >= 3) {
        func_002D0530(w);
    }
    func_0022C700();
    f = w->timer - D_004703BC;
    w->timer = f;
    if (f <= 0.0f) {
        func_00229800(w->res->f1C[19], pos, -1, 0.0f);
        func_002C0470(w->f30, pos);
        r = func_0012EAE0(0x20) % 3;
        w->f39 = r;
        func_002C0490(w->f30, w->f39);
        se = D_00456AF0;
        w->se = func_0012D790(1, se.id[r] | 0x20000, 0);
        func_0012DB00(w->se, D_004E0618[0]);
        func_0012DC30(w->se, 0);
        w->timer = 10.0f;
        w->state = 3;
        D_00470704 = v = (s32)w->tex;
        D_0047070C = c = 0x1000;
        D_00470708 = 0;
        func_00145CC0(v, c);
        D_00470238 = 0;
        for (j = 0; j < 3; j++) {
            w->f18[j] = func_0022D670(((s32 *)((u8 *)w->res->f1C + (j + 30) * 4))[0], 0.0f);
        }
        w->f24 = func_0022D860(w->res->f14[6], 0.0f);
        w->f28 = func_0022D860(w->res->f14[8], 0.0f);
        TASK_SET_FUNC(t, func_002D12B0);
    }
}

void ArenaMode_TaskLoad(Task *t) {
    ArenaModeGlobal *g;
    TaskData *d;
    ArenaModeWork *w;
    s32 v;
    s32 c;

    w = t->data.work;
    g = gArenaMode;
    d = &t->data;
    if (d->wait != 0) {
        if (d->wait == 10) {
            func_0012D900(-1);
        }
        d->wait--;
        return;
    }
    if (g->file[1]->state == 3) {
        func_00264260(-1, 0, 0);
        func_0012DB00(0, D_004E0610[0]);
        func_0012D790(0, 0x210A8, 0);
        func_0012DC30(0, 0);
        w->res = g->file[0]->data;
        g->file[0]->data = NULL;
        func_0025C800(g->file[0], 0);
        w->tex = g->file[1]->data;
        g->file[1]->data = NULL;
        func_0025C800(g->file[1], 0);
        func_0022E0B0(w->res);
        func_0012C360(w->tex);
        if (D_004E05F8[0] != 0) {
            func_0022DB30(1);
        } else {
            func_0022DB30(0);
        }
        D_00470704 = v = (s32)w->tex;
        D_0047070C = c = 0x1000;
        D_00470708 = 0;
        func_00145CC0(v, c);
        D_00470238 = 0;
        w->f8 = func_0022D860(w->res->f14[0], 0.0f);
        w->fC = func_0022D670(w->res->f1C[11], 0.0f);
        w->f10 = func_0022D670(w->res->f1C[10], 0.0f);
        w->f14 = func_0022D860(w->res->f14[2], 0.0f);
        w->f2C = func_0022D860(w->res->f14[4], 0.0f);
        w->timer = 35.0f;
        w->state = 1;
        w->f44 = 0;
        TASK_SET_FUNC(t, ArenaMode_TaskOpen);
    }
}

void ArenaMode_Clear(void) {
    gArenaMode = NULL;
    func_002D1C20();
}

void ArenaMode_Exit(void) {
    ArenaModeGlobal *g = gArenaMode;
    ArenaModeWork *w = g->task->data.work;
    s32 i;

    if (w->se >= 0) {
        func_0012D900(w->se);
    }
    if (g->task != NULL) {
        s32 p[10] = {0};

        p[0] = w->f8;
        p[1] = w->fC;
        p[2] = w->f10;
        p[3] = w->f14;
        p[4] = w->f18[0];
        p[5] = w->f18[1];
        p[6] = w->f18[2];
        p[7] = w->f24;
        p[8] = w->f28;
        p[9] = w->f2C;
        for (i = 0; i < 10; i++) {
            if (p[i] != 0) {
                func_0022D0E0(p[i], 1);
            }
        }
        func_002C04B0(w->f30);
        if (w->res != NULL) {
            func_0013AC90(w->res);
        }
        if (w->tex != NULL) {
            func_0013AC90(w->tex);
        }
        func_0013AC90(w);
        func_00145120(g->task);
    }
    func_0013AC90(g);
    gArenaMode = NULL;
    Help_Exit();
}

void ArenaMode_Start(s32 a0) {
    ArenaModeGlobal *g = gArenaMode;
    ArenaModeWork *w;
    TaskData *d;
    Task *t;

    g->task = t = func_00144FC0(ArenaMode_TaskLoad, 0, 0x1001, 8, 2, D_0046F290);
    d = &t->data;
    d->wait = 10;
    d->work = w = func_0013AAB0(0x48, 0, D_0046F2A0, 0x9B);
    memset(w, 0, 0x48);
    w->f30 = func_002C0630(0x107FC, 0x2000, 0);
    w->f35 = a0;
    w->state = 0;
    w->se = -1;
    func_001F07D0();
    func_002E8720();
    Help_Load();
}

void ArenaMode_Load(void) {
    ArenaModeGlobal *g;

    gArenaMode = g = func_0013AAB0(0xC, 0, D_0046F2A0, 0x75);
    g->file[0] = func_0025C670(0x10817, 0, 0);
    g->file[1] = func_0025C670(0x10818, 0, 0);
    g->task = NULL;
}
