#include "common.h"
#include "menu/menu.h"

/* A data file of the main menu, loaded at start (func_0025C670); 0x54 is the pointer to its contents. */
typedef struct MainMenuFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once loaded */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} MainMenuFile;

/* The main menu's global block (0x14 bytes, gMainMenu): its four files and its task. */
typedef struct MainMenu {
    MainMenuFile *file[4];
    Task *task;
} MainMenu;

/* The main menu task's work area (0xAC bytes). */
typedef struct MainMenuWork {
    void *res[4];       /* 0x00: the files' contents, taken over from MainMenu.file[] */
    s32 f10;
    s32 f14[12];
    s32 f44[18];
    void *f8C;
    void *f90;
    s16 state;          /* 0x94 */
    u8 cursor;          /* 0x96 */
    u8 count;           /* 0x97: number of entries, 6 or 7 */
    u8 f98;
    u8 f99;
    s32 f9C;
    f32 timer;          /* 0xA0 */
    s32 fA4;
    u8 fA8;
} MainMenuWork;

extern void func_00267090(MainMenuWork *);
extern void func_00266EC0(MainMenuWork *);
extern void func_00266CD0(MainMenuWork *);
extern void func_002C04B0(void *);
extern void func_002B5EF0(void);
extern MainMenu *gMainMenu;
extern char D_0046B400[];
extern char D_0046B410[];

extern s16 D_004E05F8[];
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void *D_0047CAA0[];
extern s32 D_00495718[];
extern s32 D_00495758[];
extern void func_0022DB30(s32);
extern void func_00145CC0(s32, s32);
extern void *func_0013DF40(void *, s32);
extern void func_001A4CF0();
extern void func_001EF100(void);
extern u8 D_004B4B62[];

void MainMenu_InitWork(MainMenuWork *a) {
    s32 v;
    s32 w;
    s32 i;

    if (D_004E05F8[0] != 0) {
        func_0022DB30(1);
    } else {
        func_0022DB30(0);
    }
    D_00470704 = v = (s32)a->res[1];
    D_0047070C = w = 0x1000;
    D_00470708 = 0;
    func_00145CC0(v, w);
    D_00470238 = 0;
    a->f10 = 0;
    for (i = 0; i < 12; i++) {
        a->f14[i] = 0;
    }
    a->f44[0] = 0;
    a->f44[1] = 0;
    a->f44[2] = 0;
    a->f44[3] = 0;
    a->f44[4] = 0;
    a->f44[5] = 0;
    a->f44[6] = 0;
    a->f44[7] = 0;
    a->f44[8] = 0;
    a->f44[9] = 0;
    a->f44[10] = 0;
    a->f44[11] = 0;
    a->f44[12] = 0;
    a->f44[13] = 0;
    a->f44[14] = 0;
    a->f44[15] = 0;
    a->f44[16] = 0;
    a->f44[17] = 0;
    a->f8C = func_0013DF40(a->res[2], 0);
    D_0047CAA0[0] = func_001A4CF0;
    D_00495718[0] = 0;
    D_00495758[0] = 0;
    func_001EF100();
}
void MainMenu_TaskDecide(Task *t) {
    func_00267090(t->data.work);
}
void MainMenu_TaskCancel(Task *t) {
    func_00267090(t->data.work);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", MainMenu_TaskMain);

extern f32 D_004703BC;
extern f32 D_004E0610[];
extern f32 D_004E0618[];
extern void func_00229800(void *, void *, s32, f32);
extern void func_002C0470(void *, void *);
extern void func_002C0490(void *, s32);
extern s32 func_0012D790(s32, s32, s32);
extern void func_0012D900(s32);
extern void func_0012DB00(s32, f32);
extern void func_0012DC30(s32, s32);
void MainMenu_TaskMain(Task *t);

void MainMenu_TaskOpen(Task *t) {
    MainMenuWork *w = t->data.work;
    s32 sp30[8];
    TaskFunc f;
    f32 v;

    func_00267090(w);
    v = w->timer - D_004703BC;
    w->timer = v;
    if (v <= 0.0f) {
        func_00229800(((void ***)w->res[0])[7][0x3A], sp30, -1, 0.0f);
        func_002C0470(w->f90, sp30);
        func_002C0490(w->f90, 0);
        w->fA4 = func_0012D790(1, 0x210E1, 0);
        func_0012DB00(w->fA4, D_004E0618[0]);
        func_0012DC30(w->fA4, 0);
        w->fA8 = 0;
        w->state = 3;
        f = MainMenu_TaskMain;
        if (f == NULL) {
            f = NULL;
        }
        t->func = f;
    }
}

#if 0
extern void func_00264260(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0022E0B0(void *);
extern void func_0012C360(void *);
extern void MainMenu_InitWork(MainMenuWork *);

/* Matches but for the registers of the last three stores: the original puts 2 and the function in $v1 and 35.0f
   in $a0, this gives the opposite (statement order, a block for f, an inline setter: no change). */
void MainMenu_TaskLoad(Task *t) {
    TaskFunc f;
    MainMenu *g;
    TaskData *d;
    MainMenuWork *w;

    w = t->data.work;
    g = gMainMenu;
    d = &t->data;
    if (d->wait != 0) {
        if (d->wait == 9) {
            func_0012D900(-1);
        }
        d->wait--;
        return;
    }
    if (g->file[3]->state == 3) {
        func_00264260(-1, 0, 0);
        func_0012DB00(0, D_004E0610[0]);
        func_0012D790(0, 0x210A3, 0);
        func_0012DC30(0, 0);
        w->res[0] = g->file[0]->data;
        g->file[0]->data = NULL;
        func_0025C800(g->file[0], 0);
        g->file[0] = NULL;
        w->res[1] = g->file[1]->data;
        g->file[1]->data = NULL;
        func_0025C800(g->file[1], 0);
        g->file[1] = NULL;
        w->res[2] = g->file[2]->data;
        g->file[2]->data = NULL;
        func_0025C800(g->file[2], 0);
        g->file[2] = NULL;
        w->res[3] = g->file[3]->data;
        g->file[3]->data = NULL;
        func_0025C800(g->file[3], 0);
        g->file[3] = NULL;
        func_0022E0B0(w->res[0]);
        func_0012C360(w->res[1]);
        func_0012C360(w->res[2]);
        func_0012C360(w->res[3]);
        MainMenu_InitWork(w);
        func_00266CD0(w);
        w->state = 2;
        w->timer = 35.0f;
        f = MainMenu_TaskOpen;
        if (f == NULL) {
            f = NULL;
        }
        t->func = f;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_mainmenu", MainMenu_TaskLoad);
void MainMenu_TaskLoad(Task *t);

void MainMenu_Clear(void) {
    gMainMenu = NULL;
    D_004B4B62[0] = 0;
}
void MainMenu_Exit(void) {
    MainMenu *g = gMainMenu;
    MainMenuWork *w = g->task->data.work;
    if (g->task != NULL) {
        func_00266EC0(w);
        func_002C04B0(w->f90);
        func_0013AC90(w->res[0]);
        func_0013AC90(w->res[1]);
        func_0013AC90(w->res[2]);
        func_0013AC90(w->res[3]);
        func_0013AC90(w);
        func_00145120(g->task);
    }
    func_0013AC90(g);
    gMainMenu = NULL;
    func_002B5EF0();
}

extern void *func_002C0630(s32, s32, s32, s32);
extern void func_001F07D0(void);
extern void func_002E1BB0(void);

void MainMenu_Start(s32 cursor, s32 a1) {
    MainMenu *g = gMainMenu;
    Task *t;
    MainMenuWork *w;
    TaskData *d;
    s32 c;

    g->task = t = func_00144FC0(MainMenu_TaskLoad, 0, 0x1001, 8, 2, D_0046B400);
    d = &t->data;
    d->wait = 10;
    d->work = w = func_0013AAB0(0xAC, 0, D_0046B410, 0xDE);
    w->res[0] = NULL;
    w->res[1] = NULL;
    w->res[2] = NULL;
    w->res[3] = NULL;
    w->f8C = NULL;
    w->state = 1;
    w->f98 = a1;
    w->cursor = cursor;
    w->count = w->f98 != 0 ? 7 : 6;
    if (w->cursor >= w->count) {
        w->cursor = 0;
    }
    w->f99 = c = w->f98 != 0 ? 0x32 : 0x52;
    w->f9C = 0;
    w->f90 = func_002C0630(0x107FF, 0x2000, 0, c);
    func_001F07D0();
    func_002E1BB0();
}

extern MainMenuFile *func_0025C670(s32, s32, s32);
extern void func_002B6140(void);

void MainMenu_Load(void) {
    MainMenu *g;

    gMainMenu = g = func_0013AAB0(0x14, 0, D_0046B410, 0xAF);
    g->task = NULL;
    g->file[0] = func_0025C670(0x10826, 0, 0);
    g->file[1] = func_0025C670(0x10827, 0, 0);
    g->file[2] = func_0025C670(0xF50, 0, 0);
    g->file[3] = func_0025C670(0xF51, 0, 0);
    func_002B6140();
}
