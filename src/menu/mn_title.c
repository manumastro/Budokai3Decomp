#include "common.h"
#include "menu/menu.h"

/* A data file read with func_0025C670; 0x54 is the pointer to its contents once loaded. */
typedef struct TitleFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once loaded */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} TitleFile;

/* The title screen's global block (0xC bytes, gTitle). */
typedef struct Title {
    TitleFile *file[2]; /* 0x00: files 0x10832, 0x10833 */
    Task *task;         /* 0x08: "# TITLE #" */
} Title;

/* The contents of file 0x10832 (layout not known). */
typedef struct TitleRes {
    char pad0[0x14];
    s32 *f14;           /* 0x14 */
    char pad18[0x1C - 0x18];
    s32 *f1C;           /* 0x1C: f1C[0x74 / 4] is an id for func_0022D670 */
} TitleRes;

/* An object made by func_0022D860 / func_0022D670 (layout not known). */
typedef struct TitleObj {
    char pad0[0x10];
    f32 f10;            /* 0x10 */
} TitleObj;

/* The title task's data (0x1C bytes inside the task itself, from Task+0x30). */
typedef struct TitleData {
    TitleRes *res0;     /* 0x00: file 0x10832's contents */
    s32 res1;           /* 0x04: file 0x10833's contents */
    TitleObj *obj0;     /* 0x08 */
    TitleObj *obj1;     /* 0x0C */
    s32 f10;            /* 0x10 */
    f32 timer;          /* 0x14 */
    u16 flags;          /* 0x18 */
    u16 wait;           /* 0x1A */
} TitleData;

/* A local block filled by func_002284D0 and passed to func_00228430 (0x50 bytes). */
typedef struct TitleCam {
    f32 f0;
    f32 f4;
    f32 f8;
    char padC[0x50 - 0xC];
} TitleCam;

extern Title *gTitle;
extern char D_0046B390[];
extern char D_0046B3A0[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern f32 D_004703BC;
extern f32 D_004E0610[];
extern f32 D_004E0614[];
extern s16 D_004E05F8[];
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern s8 D_004B4B66[];

extern void func_00145CC0(s32, s32);
extern void func_002284D0(TitleCam *);
extern void func_00228430(TitleCam *);
extern void func_00227830(s32, s32);
extern void func_00228410(void);
extern void func_00227810(void);
extern void func_0022C700(void);
extern void func_0022C060(TitleObj *, f32);
extern void func_0022CD00(TitleObj *);
extern void func_0012DB00(s32, f32);
extern void func_0012D790(s32, s32, s32);
extern void func_0012DC30(s32, s32);
extern TitleObj *func_0022D670(s32, f32);
extern TitleObj *func_0022D860(s32, f32);
extern s32 func_0022BF80(TitleObj *);
extern void func_0022D0E0(TitleObj *, s32);
extern void func_00143F20(s32, s32, f32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_002661D0(s32, TitleData *);
extern s32 func_0012D9F0(s32);
extern void func_001F0830(s32, s32);
extern void func_001F0810(s32, s32);
extern void func_00264260(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(s32);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void func_0012D900(s32);
extern void func_0022DB30(s32);
extern void func_001484A0(s32, s32);
extern void func_001F07D0(void);
extern void *func_0025C670(s32, s32, s32);

void Title_TaskIdle(Task *t);
void Title_TaskWait(Task *t);
void Title_TaskShow(Task *t);
void Title_TaskIntro(Task *t);

/* Draws the title scene (the body of Title_TaskIdle, inlined in the other task functions). */
inline void Title_Draw(TitleData *d) {
    TitleCam cam;
    TitleObj *o0;
    TitleObj *o1;
    s32 v;
    s32 c;

    D_00470704 = v = d->res1;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    func_002284D0(&cam);
    cam.f8 = 7000.0f;
    func_00228430(&cam);
    func_00227830(0, -1);
    o0 = d->obj0;
    o1 = d->obj1;
    D_00470704 = v = d->res1;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    if (o0 != NULL) {
        func_0022C060(o0, 1.0f);
        func_0022CD00(o0);
    }
    if (o1 != NULL) {
        func_0022C060(o1, 1.0f);
        func_0022CD00(o1);
    }
    func_00228410();
    func_00227810();
    func_0022C700();
}

void Title_TaskMenu(Task *t) {
    TitleData *d = (TitleData *)&t->data;

    Title_Draw(d);
    if (!(d->flags & 1)) {
        func_0012DB00(0, D_004E0610[0]);
        func_0012D790(0, 0x210AC, 0);
        func_0012DC30(0, 0);
        d->timer = 3000.0f;
        if (d->obj1 == NULL) {
            d->obj1 = func_0022D670(d->res0->f1C[0x74 / 4], 0.0f);
        }
        TASK_SET_FUNC(t, Title_TaskIntro);
    }
}

void Title_TaskIdle(Task *t) {
    TitleData *d;
    TitleCam cam;
    TitleObj *o0;
    TitleObj *o1;
    s32 v;
    s32 c;

    d = (TitleData *)&t->data;
    D_00470704 = v = d->res1;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    func_002284D0(&cam);
    cam.f8 = 7000.0f;
    func_00228430(&cam);
    func_00227830(0, -1);
    o0 = d->obj0;
    o1 = d->obj1;
    D_00470704 = v = d->res1;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    if (o0 != NULL) {
        func_0022C060(o0, 1.0f);
        func_0022CD00(o0);
    }
    if (o1 != NULL) {
        func_0022C060(o1, 1.0f);
        func_0022CD00(o1);
    }
    func_00228410();
    func_00227810();
    func_0022C700();
}

void Title_TaskWait(Task *t) {
    TitleData *d = (TitleData *)&t->data;

    Title_Draw(d);
    if ((D_00492FCE[0] | D_00493086[0]) & 0x4008) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            func_00143D60(0, 0, 0, 0);
        }
        func_002661D0(0, d);
        d->flags |= 1;
        TASK_SET_FUNC(t, Title_TaskMenu);
        return;
    }
    d->timer -= D_004703BC;
    d->timer -= 1.0f;
    if (d->timer <= 0.0f || func_0012D9F0(0) == 5) {
        D_004B4B66[0] ^= 1;
        switch (D_004B4B66[0]) {
        case 0:
            func_001F0830(2, 0);
            break;
        case 1:
            func_001F0830(3, 0);
            break;
        }
        func_001F0810(0xA, 0);
        TASK_SET_FUNC(t, Title_TaskIdle);
    }
}

void Title_TaskShow(Task *t) {
    TitleData *d = (TitleData *)&t->data;

    Title_Draw(d);
    TASK_SET_FUNC(t, Title_TaskWait);
}

void Title_TaskIntro(Task *t) {
    TitleData *d = (TitleData *)&t->data;
    s32 v;
    s32 c;

    Title_Draw(d);
    if ((D_00492FCE[0] | D_00493086[0]) & 8) {
        d->obj0->f10 = 500.0f;
    }
    if (func_0022BF80(d->obj0) == 0xFF) {
        D_00470704 = v = d->res1;
        D_0047070C = c = 0x1000;
        D_00470708 = 0;
        func_00145CC0(v, c);
        D_00470238 = 0;
        if (d->obj1 == NULL) {
            d->obj1 = func_0022D670(d->res0->f1C[0x74 / 4], 0.0f);
        }
        TASK_SET_FUNC(t, Title_TaskShow);
    }
}

void Title_TaskLoad(Task *t) {
    Title *g;
    TitleData *d;
    s32 v;
    s32 c;

    g = gTitle;
    d = (TitleData *)&t->data;
    if (d->wait != 0) {
        if ((d->wait & 0xFFFF) == 10) {
            func_0012D900(-1);
        }
        d->wait--;
        return;
    }
    if (g->file[1]->state != 3) {
        return;
    }
    func_00264260(-1, 0, 0);
    d->res0 = g->file[0]->data;
    g->file[0]->data = NULL;
    func_0025C800(g->file[0], 0);
    d->res1 = (s32)g->file[1]->data;
    g->file[1]->data = NULL;
    func_0025C800(g->file[1], 0);
    func_0022E0B0(d->res0);
    func_0012C360(d->res1);
    func_00144B70(-1);
    func_00144650(0);
    func_0012D900(-1);
    if (D_004E05F8[0] != 0) {
        func_0022DB30(1);
    } else {
        func_0022DB30(0);
    }
    d->obj0 = NULL;
    d->obj1 = NULL;
    func_002284D0(NULL);
    D_00470704 = v = d->res1;
    D_0047070C = c = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, c);
    D_00470238 = 0;
    if (d->flags & 1) {
        d->obj0 = func_0022D860(d->res0->f14[0], 500.0f);
        func_002661D0(1, d);
        TASK_SET_FUNC(t, Title_TaskMenu);
    } else {
        d->obj0 = func_0022D860(d->res0->f14[0], 0.0f);
        func_0012DB00(0, D_004E0610[0]);
        func_0012D790(0, 0x210AC, 0);
        func_0012DC30(0, 0);
        TASK_SET_FUNC(t, Title_TaskIntro);
    }
}

void Title_Clear(void) {
    gTitle = NULL;
}

void Title_Exit(void) {
    Title *g;
    TitleData *d;

    g = gTitle;
    if (g->task != NULL) {
        d = (TitleData *)&g->task->data;
        if (d->res0 != NULL) {
            func_0013AC90(d->res0);
        }
        if (d->res1 != 0) {
            func_0013AC90((void *)d->res1);
        }
        if (d->obj0 != NULL) {
            func_0022D0E0(d->obj0, 1);
        }
        if (d->obj1 != NULL) {
            func_0022D0E0(d->obj1, 1);
        }
        func_00145120(g->task);
    }
    func_0013AC90(g);
    gTitle = NULL;
}

void Title_Start(s32 arg) {
    Title *g;
    TitleData *d;
    Task *t;
    s32 mode;

    mode = (s16)arg;
    g = gTitle;
    g->task = t = func_00144FC0(Title_TaskLoad, 0, 0x1001, 8, 2, D_0046B390);
    t->data.work = NULL;
    d = (TitleData *)&t->data;
    d->res1 = 0;
    d->obj0 = NULL;
    d->obj1 = NULL;
    d->f10 = 0;
    d->timer = 3000.0f;
    d->flags = 0;
    d->wait = 10;
    func_001484A0(0, 0x453B8000); /* the bits of 3000.0f, passed in an integer register */
    switch (mode) {
    case 0:
        break;
    case 1:
        d->flags |= 1;
        break;
    }
    func_001F07D0();
}

void Title_Load(void) {
    Title *g;

    gTitle = g = func_0013AAB0(0xC, 0, D_0046B3A0, 0x68);
    g->task = NULL;
    g->file[0] = func_0025C670(0x10832, 0, 0);
    g->file[1] = func_0025C670(0x10833, 0, 0);
}
