#include "common.h"

extern u8 D_005C4120[];
extern void func_00308830(void);
extern void func_00309AF0(void);
extern void func_0030AE60(void);
extern void func_00308860(void);
extern void func_00309B20(void);
extern void func_0030AE90(void);
extern void func_003105B0(void);
extern void func_00308980(void);
extern void func_00309CD0(void);
extern void func_0030B020(void);
extern void func_00308A10(void);
extern void func_00309D60(void);
extern void func_0030B0B0(void);

void func_002D1C20(void) {
    func_00308830();
    func_00309AF0();
    func_0030AE60();
}

void func_002D1C50(void) {
    switch (D_005C4120[0]) {
    case 0:
        func_00308860();
        break;
    case 1:
        func_00309B20();
        break;
    case 2:
        func_0030AE90();
        break;
    }
}

void func_002D1CC0(void) {
    func_003105B0();
    switch (D_005C4120[0]) {
    case 0:
        func_00308980();
        break;
    case 1:
        func_00309CD0();
        break;
    case 2:
        func_0030B020();
        break;
    }
}

void func_002D1D40(void) {
    switch (D_005C4120[0]) {
    case 0:
        func_00308A10();
        break;
    case 1:
        func_00309D60();
        break;
    case 2:
        func_0030B0B0();
        break;
    }
}

typedef struct SmsgFrames {
    char pad0[0x1C];
    s32 *f1C;
} SmsgFrames;

typedef struct SmsgObj {
    char pad0[4];
    s16 f4;
    char pad6[0x4E];
    SmsgFrames *f54;
} SmsgObj;

typedef struct SmsgWork {
    SmsgObj *obj[3];
    SmsgFrames *frames[3];
    s32 f18;
    s32 state;
    s32 f20;
    s32 f24;
} SmsgWork;

typedef struct SmsgTask {
    char pad0[0x1C];
    void *func;
    char pad20[0x10];
    SmsgWork w;
} SmsgTask;

#define SET_FUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

extern SmsgTask *D_00470930;
extern f32 D_004703BC;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern f32 D_004E0614[];
extern void func_002D20E0(void);
extern s32 func_0022BC30(s32, f32);
extern void func_00143F20(s32, s32, f32);
extern void func_00143D60(s32, s32, s32, s32);
void func_002D1F20(SmsgTask *t);

void func_002D1DB0(SmsgTask *t) {
    SmsgWork *gw = &D_00470930->w;
    SmsgWork *w;
    s32 st;
    s32 r;

    if (gw->state >= 3) {
        gw->f20++;
    }
    func_002D20E0();
    st = t->w.state;
    w = &t->w;
    if (st != 4) {
        r = func_0022BC30(w->frames[0]->f1C[st >= 5], (f32)w->f20 * D_004703BC);
        switch (w->state) {
        case 3:
            if (r == 0xFF) {
                w->state = 4;
            }
            break;
        case 5:
            if (r == 0xFF) {
                w->state = 6;
                SET_FUNC(t, func_002D1F20);
            }
            break;
        }
    } else if ((D_00492FCE[0] | D_00493086[0]) & 0x5000) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 0x16, 0);
        }
        w->state = 5;
        w->f20 = 0;
    }
}

void func_002D1F20(SmsgTask *t) {
    SmsgWork *w = &t->w;

    if (t->w.state == 3) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (D_004E0614[0] > 0.0f) {
            func_00143D60(0, 0, 0x15, 0);
        }
        w->f20 = 0;
        SET_FUNC(t, func_002D1DB0);
    }
}

extern void amFile_Load(SmsgFrames *);

void func_002D1FC0(SmsgTask *t) {
    SmsgWork *w = &t->w;
    s32 j;
    s32 i;

    for (i = 0; i < 3; i++) {
        if (w->obj[i]->f4 != 3) {
            return;
        }
    }
    for (j = 0; j < 3; j++) {
        amFile_Load(w->obj[j]->f54);
    }
    w->frames[0] = w->obj[0]->f54;
    w->frames[1] = w->obj[1]->f54;
    w->frames[2] = w->obj[2]->f54;
    switch (w->state) {
    case 0:
        w->state = 1;
        break;
    case 2:
        w->state = 3;
        break;
    }
    SET_FUNC(t, func_002D1F20);
}

s32 func_002D20D0(void) {
    return D_00470930->w.state;
}

INCLUDE_ASM("asm/nonmatchings/unk/unk_2D1C20", func_002D20E0);

void func_002D2360(void) {
    D_00470930 = NULL;
}

void func_002D2370(s32 x) {
    SmsgWork *w = &D_00470930->w;
    s32 st = D_00470930->w.state;

    if (st == 0) {
        w->state = 2;
        w->f20 = 0;
    } else if (st == 1) {
        w->state = 3;
        w->f20 = 0;
    } else if (st == 6) {
        w->state = 3;
        w->f20 = 0;
    }
    w->f24 = x;
}

extern void amCdFs_Close(SmsgObj *, s32);
extern void amTask_Kill(void *);

void func_002D23D0(void) {
    SmsgWork *w = &D_00470930->w;
    s32 i;

    for (i = 0; i < 3; i++) {
        if (w->obj[i] != NULL) {
            amCdFs_Close(w->obj[i], 0);
        }
    }
    amTask_Kill(D_00470930);
    D_00470930 = NULL;
}

extern char D_0046F2B0[];
extern SmsgTask *amTask_Create(void (*)(SmsgTask *), s32, s32, s32, s32, char *);
extern void memset(void *, s32, s32);
extern SmsgObj *amCdFs_ReadFileId(s32, s32, s32);

void func_002D2440(s32 prio, s32 flag, s32 param) {
    SmsgWork *w;
    s32 id;

    if (D_00470930 != NULL) {
        return;
    }
    D_00470930 = amTask_Create(func_002D1FC0, 0, prio, 0x200, 0x200000, D_0046F2B0);
    w = &D_00470930->w;
    memset(w, 0, 0x28);
    id = flag == 0 ? 0x84F : 0x84D;
    w->obj[0] = amCdFs_ReadFileId(0x10852, 0, 0);
    w->obj[1] = amCdFs_ReadFileId(0x10853, 0, 0);
    w->obj[2] = amCdFs_ReadFileId(id | 0x10000, 0, 0);
    w->state = 0;
    w->f18 = param;
}
