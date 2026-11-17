#include "common.h"
#include "menu/menu.h"

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4 __attribute__((aligned(16)));

/* A data file being read (func_0025C670): state 3 once loaded, 0x54 the pointer to its contents. */
typedef struct StrSelectFile {
    char pad0[4];
    s16 state;          /* 0x04 */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} StrSelectFile;

/* The model file's header: 0x14 points to the list of its objects. */
typedef struct StrSelectModel {
    char pad0[0x14];
    s32 *obj;           /* 0x14 */
    char pad18[4];
    s32 *f1C;           /* 0x1C */
} StrSelectModel;

typedef struct StrSelectGlobal {
    StrSelectFile *file[2];
    Task *task;
} StrSelectGlobal;

/* What func_0027DAF0 fills in: the level, the seven stats and the experience. */
typedef struct StrSelectInfo {
    s8 level;
    s8 stats[7];
    s32 exp;
} StrSelectInfo;

typedef struct StrSelectWork {
    StrSelectModel *model;  /* 0x00 */
    void *tex;          /* 0x04 */
    s32 f8;             /* 0x08 */
    Task *task;         /* 0x0C */
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28[7];
    f32 f44;
    f32 f48;
    f32 f4C;
    char pad50;
    u8 f51;
    u8 f52;
    char pad53;
    f32 f54;
    u8 f58[7];
    u8 f5F;
    u32 f60;
    u32 f64;
} StrSelectWork;

typedef struct PadState {
    u16 f0;
    char pad2[0xB8 - 2];
} PadState;

extern StrSelectGlobal *gStrSelect;
extern char D_0046F688[];
extern char D_0046F698[];
extern char D_0046F6A8[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern f32 D_004703BC;
extern f32 D_004E0610[];
extern s16 D_004E05F8[];
extern s8 D_004B4B63[];
extern PadState D_00492FCE[];
extern s32 *D_00455760[];
extern s16 D_005C9F00[];
extern s8 D_00511450[];
extern char D_004E6560[];
extern Vec4 D_00457E80;
extern Vec4 D_00457E90;
extern Vec4 D_00457EA0;

extern void func_00145CC0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0022C060(s32, f32);
extern void func_0022C7D0(s32, s32, f32);
extern void func_0022CD00(s32);
extern void func_0022C700(void);
extern void func_0022D0E0(s32, s32);
extern void func_00136870(s32, s32, Vec4 *, s32, s32, s32);
extern void func_001363D0(s32, s32, Vec4 *, s32);
extern void func_00137B60(Vec4 *);
extern void func_00137EE0(void);
extern f32 func_0012E700(s32);
extern f32 func_0012E750(s32);
extern void func_0027DAF0(s32, StrSelectInfo *);
extern s32 func_0027DAE0(s32);
extern s8 func_0027DAB0(s32);
extern s8 func_0027DAA0(s32);
extern void func_0027DB20(s32);
extern void Help_Open(s64, s64);
extern void func_001F0830(s32, s32);
extern void func_001F0810(s32, s32);
extern void func_00299240(s32);
extern s32 func_001F04C0(s32);
extern void func_002A8CE0(s32, void *);
extern void func_0012D900(s32);
extern s32 func_003105A0(void);
extern void func_00264260(s32, s32, s32);
extern void func_0012DB00(s32, f32);
extern s32 func_0012D790(s32, s32, s32);
extern void func_0012DC30(s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(void *);
extern void func_0022DB30(s32);
extern void func_00229800(s32, Vec4 *, s32, f32);
extern void func_0027D820(s32);
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0027E040(void);
extern void func_0027E120(s32);
extern void func_0027E070(void);
extern void func_001258F8(void *, s32, s32);
extern void func_001F07D0(void);
extern void *func_0025C670(s32, s32, s32);
extern void func_003105B0(void);
extern void func_0027E7E0(void);

#if 0
/* Helpers of the #if 0 attempts below (the stats of the selected character and the experience to the next level). */
inline s32 StrSelect_NextExp(s32 c, u8 lvl, s32 exp) {
    s32 next;

    if (c == 0x26) {
        return 0;
    }
    next = D_00455760[c][lvl];
    return next == 0 ? 0 : next - exp;
}

inline void StrSelect_GetStats(StrSelectWork *w) {
    StrSelectInfo info;
    s32 c;
    s32 i;

    func_0027DAF0(w->f8, &info);
    c = (s8)func_0027DAE0(w->f8);
    w->f5F = info.level;
    for (i = 0; i < 7; i++) {
        w->f58[i] = info.stats[i];
    }
    w->f60 = info.exp;
    w->f64 = StrSelect_NextExp(c, w->f5F, w->f60);
}
#endif

void StrSelect_DrawRadar(StrSelectWork *w) {
    Vec4 pos;
    Vec4 pts[7];
    Vec4 c1;
    Vec4 c2;
    f32 r;
    s32 a;
    s32 i;
    Vec4 *q;
    Vec4 *p;
    s32 j;

    a = 0xC000;
    pos = D_00457E80;
    pos.x = w->f44;
    pos.y = w->f48;
    c1 = D_00457E90;
    c2 = D_00457EA0;
    func_00136870(2, 0x900, &c1, -1, 0x44, 5);
    func_00137B60(&pos);
    q = pts;
    p = q;
    for (i = 0; i < 7; i++) {
        r = w->f4C * w->f58[i] / 20.0f;
        p->x = w->f44 + r * func_0012E750(a);
        r = w->f4C * w->f58[i] / 20.0f;
        p->y = w->f48 + r * func_0012E700(a);
        p->z = 1.0f;
        p->w = 1.0f;
        func_00137B60(p);
        a += 0x2492;
        p++;
    }
    func_00137B60(pts);
    func_00137EE0();
    func_001363D0(1, 0x100, &c2, 0x44);
    for (j = 0; j < 7; j++) {
        func_00137B60(q);
        q++;
    }
    func_00137B60(pts);
    func_00137EE0();
}

void StrSelect_InitObjects(StrSelectWork *w) {
    s32 v;
    s32 n;
    s32 i;

    D_00470704 = v = (s32)w->tex;
    D_0047070C = n = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, n);
    D_00470238 = 0;
    for (i = 0; i < 7; i++) {
        w->f28[i] = func_0022D860(w->model->obj[i + 7], 0.0f);
    }
    w->f14 = func_0022D860(w->model->obj[2], 0.0f);
    w->f18 = func_0022D860(w->model->obj[3], 0.0f);
    w->f1C = func_0022D860(w->model->obj[4], 0.0f);
    w->f20 = func_0022D860(w->model->obj[5], 0.0f);
    w->f24 = func_0022D860(w->model->obj[6], 0.0f);
}

#if 0
/* Not finished: the code is 0x24 bytes short; the 10000-split of f60/f64 is not right yet. */
void StrSelect_Draw(StrSelectWork *w) {
    s32 v;
    s32 n;
    s32 i;
    s32 o;
    s32 o2;
    s32 hi;
    s32 lo;

    D_00470704 = v = (s32)w->tex;
    D_0047070C = n = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, n);
    D_00470238 = 0;
    if ((o = w->f10) != 0) {
        func_0022C060(o, 1.0f);
        func_0022CD00(o);
    }
    for (i = 0; i < 7; i++) {
        if ((o = w->f28[i]) != 0) {
            func_0022C7D0(o, 1, w->f58[i]);
            func_0022C060(o, 0.0f);
            func_0022CD00(o);
        }
    }
    if ((o = w->f14) != 0) {
        func_0022C7D0(o, 1, w->f5F);
        func_0022C060(o, 0.0f);
        func_0022CD00(o);
    }
    if ((o2 = w->f18) != 0) {
        lo = w->f60 % 10000 + (w->f60 < 10000 ? 0 : 10000);
        hi = w->f60 / 10000;
        func_0022C7D0(o2, 1, lo);
        func_0022C060(o2, 0.0f);
        func_0022CD00(o2);
        if (lo >= 10000) {
            o = w->f1C;
            func_0022C7D0(o, 1, hi);
            func_0022C060(o, 0.0f);
            func_0022CD00(o);
        }
    }
    if ((o2 = w->f20) != 0) {
        lo = w->f64 % 10000 + (w->f64 < 10000 ? 0 : 10000);
        hi = w->f64 / 10000;
        func_0022C7D0(o2, 1, lo);
        func_0022C060(o2, 0.0f);
        func_0022CD00(o2);
        if (lo >= 10000) {
            o = w->f24;
            func_0022C7D0(o, 1, hi);
            func_0022C060(o, 0.0f);
            func_0022CD00(o);
        }
    }
    func_0022C700();
    StrSelect_DrawRadar(w);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_select", StrSelect_Draw);
void StrSelect_Draw(StrSelectWork *w);

void StrSelect_FreeObjects(StrSelectWork *w) {
    s32 i;

    if (w->f10 != 0) {
        func_0022D0E0(w->f10, 1);
    }
    for (i = 0; i < 7; i++) {
        if (w->f28[i] != 0) {
            func_0022D0E0(w->f28[i], 1);
        }
    }
    if (w->f14 != 0) {
        func_0022D0E0(w->f14, 1);
    }
    if (w->f18 != 0) {
        func_0022D0E0(w->f18, 1);
    }
    if (w->f1C != 0) {
        func_0022D0E0(w->f1C, 1);
    }
    if (w->f20 != 0) {
        func_0022D0E0(w->f20, 1);
    }
    if (w->f24 != 0) {
        func_0022D0E0(w->f24, 1);
    }
}

void StrSelect_TaskDrawEnd(Task *t) {
    func_0022C700();
}

void StrSelect_TaskClose(Task *t) {
    StrSelect_Draw(t->data.work);
}

#if 0
/* Matches but for the registers of the stats copy (StrSelect_GetStats: the original keeps the character id in $v1 and the copied bytes in $a0, this gives the opposite) and daddiu a1,zero,1/2 for the player mask (li here). */
void StrSelect_TaskMain(Task *t) {
    StrSelectWork *w = t->data.work;
    s32 id;
    u16 pad;
    s64 port;

    if (D_004B4B63[0] == 0) {
        pad = D_00492FCE[0].f0;
        port = 1;
    } else {
        pad = D_00492FCE[1].f0;
        port = 2;
    }
    if (pad & 1) {
        Help_Open(0x0080004800040000LL, port);
    }
    StrSelect_GetStats(w);
    StrSelect_Draw(w);
    if (func_0027DAB0(w->f8) == 4 && (D_00492FCE[D_004B4B63[0]].f0 & 0x1000)) {
        func_0027DB20(w->f8);
        func_001F0830(6, 0);
        func_001F0810(10, 0);
        TASK_SET_FUNC(t, StrSelect_TaskClose);
        return;
    }
    if (func_0027DAA0(w->f8) == 1) {
        id = D_005C9F00[0];
        func_00299240(id);
        D_00511450[0] = id;
        if (w->f51 != 0) {
            func_002A8CE0(id, (char *)D_004E6560 + (s16)id * 0x1210 + 0x80);
        } else if (func_001F04C0(id) == 0) {
            func_002A8CE0(id, (char *)D_004E6560 + (s16)id * 0x1210 + 0x80);
        }
        func_001F0830(8, 0);
        func_001F0810(-1, 0);
        TASK_SET_FUNC(t, StrSelect_TaskClose);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_select", StrSelect_TaskMain);
void StrSelect_TaskMain(Task *t);

#if 0
/* Matches but for the registers of the stats copy (StrSelect_GetStats, same as StrSelect_TaskMain). */
void StrSelect_TaskOpen(Task *t) {
    StrSelectWork *w = t->data.work;
    f32 v;

    StrSelect_Draw(w);
    v = w->f54 - D_004703BC;
    w->f54 = v;
    if (v <= 0.0f) {
        StrSelect_GetStats(w);
        StrSelect_InitObjects(w);
        TASK_SET_FUNC(t, StrSelect_TaskMain);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_select", StrSelect_TaskOpen);
void StrSelect_TaskOpen(Task *t);

#if 0
/* Matches but for the frame size (0x60 here, 0x70 in the original: 16 more bytes of locals) and the registers of the D_004B4B63 ternary (a1/t4 swapped). */
void StrSelect_TaskLoad(Task *t) {
    StrSelectGlobal *g;
    TaskData *d;
    StrSelectWork *w;
    Vec4 pos;

    w = t->data.work;
    g = gStrSelect;
    d = &t->data;
    if (d->wait != 0) {
        if (d->wait == 10) {
            func_0012D900(-1);
        }
        d->wait--;
        return;
    }
    if (g->file[1]->state == 3 && func_003105A0() == 1) {
        func_00264260(-1, 0, 0);
        func_0012DB00(0, D_004E0610[0]);
        func_0012D790(0, 0x210A9, 0);
        func_0012DC30(0, 0);
        w->model = g->file[0]->data;
        g->file[0]->data = NULL;
        func_0025C800(g->file[0], 0);
        g->file[0] = NULL;
        w->tex = g->file[1]->data;
        g->file[1]->data = NULL;
        func_0025C800(g->file[1], 0);
        g->file[1] = NULL;
        func_0022E0B0(w->model);
        func_0012C360(w->tex);
        w->task = func_00144FC0(StrSelect_TaskDrawEnd, 0, 0x3000, 8, 2, D_0046F688);
        if (D_004E05F8[0] != 0) {
            func_0022DB30(1);
        } else {
            func_0022DB30(0);
        }
        {
            s32 v;
            s32 n;
            D_00470704 = v = (s32)w->tex;
            D_0047070C = n = 0x2000;
            D_00470708 = 0;
            func_00145CC0(v, n);
            D_00470238 = 0;
        }
        w->f10 = func_0022D860(w->model->obj[0], 0.0f);
        func_00229800(w->model->f1C[9], &pos, -1, 0.0f);
        w->f44 = pos.x;
        w->f48 = pos.y;
        w->f4C = 60.0f;
        func_0027D820(0);
        w->f8 = func_0027E2D0((u8)(w->f52 != 0 ? 7 : 1), (u8)(D_004B4B63[0] != 0 ? 4 : 2), 1, -1, 0, 0, 0, 3);
        w->f54 = 60.0f;
        TASK_SET_FUNC(t, StrSelect_TaskOpen);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_select", StrSelect_TaskLoad);
void StrSelect_TaskLoad(Task *t);

void StrSelect_Clear(void) {
    gStrSelect = NULL;
    func_0027E040();
}

void StrSelect_Exit(void) {
    StrSelectGlobal *g = gStrSelect;
    StrSelectWork *w = g->task->data.work;

    if (w->f8 != 0) {
        func_0027E120(w->f8);
        func_0027E070();
    }
    StrSelect_FreeObjects(w);
    if (w->task != NULL) {
        func_00145120(w->task);
    }
    if (g->file[0] != NULL) {
        func_0025C800(g->file[0], 0);
    }
    if (g->file[1] != NULL) {
        func_0025C800(g->file[1], 0);
    }
    if (w->model != NULL) {
        func_0013AC90(w->model);
    }
    if (w->tex != NULL) {
        func_0013AC90(w->tex);
    }
    func_0013AC90(w);
    func_00145120(g->task);
    func_0013AC90(g);
    gStrSelect = NULL;
}

void StrSelect_Start(s32 mode) {
    StrSelectGlobal *g = gStrSelect;
    Task *t;
    TaskData *d;
    StrSelectWork *w;

    g->task = t = func_00144FC0(StrSelect_TaskLoad, 0, 0x2000, 8, 2, D_0046F698);
    d = &t->data;
    d->work = w = func_0013AAB0(0x68, 0, D_0046F6A8, 0x97);
    d->wait = 10;
    func_001258F8(w, 0, 0x68);
    w->f51 = mode == 0;
    w->f52 = mode == 2;
    func_001F07D0();
}

void StrSelect_Load(void) {
    StrSelectGlobal *g;

    gStrSelect = g = func_0013AAB0(0xC, 0, D_0046F6A8, 0x6E);
    g->task = NULL;
    g->file[0] = func_0025C670(0x10819, 0, 0);
    g->file[1] = func_0025C670(0x1081A, 0, 0);
    func_003105B0();
    func_0027E7E0();
}
