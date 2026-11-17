#include "common.h"
#include "menu/menu.h"

/* A file being read (sys area): state 3 once loaded, the data at +0x54. */
typedef struct ZenieFile {
    s32 f0;
    s16 state;          /* 0x04 */
    char pad6[0x54 - 0x6];
    void *data;         /* 0x54 */
} ZenieFile;

/* The loaded model of the counter: f1C the motions, f14 the digit nodes. */
typedef struct ZenieModel {
    char pad0[0x14];
    s32 *f14;           /* 0x14 */
    char pad18[4];
    s32 *f1C;           /* 0x1C */
} ZenieModel;

typedef struct ZenieAnim {
    s32 id;             /* 0x00 */
    s32 f4;
    s32 frame;          /* 0x08 */
    s32 done;           /* 0x0C */
    char pad10[0x30 - 0x10];
} ZenieAnim;

typedef struct ZenieWork {
    s32 f0;             /* 0x00 */
    s32 state;          /* 0x04 */
    s32 type;           /* 0x08 */
    s32 cur;            /* 0x0C */
    s32 target;         /* 0x10 */
    s32 start;          /* 0x14 */
    s32 f18;            /* 0x18 */
    s32 step;           /* 0x1C */
    ZenieFile *file[2]; /* 0x20 */
    void *f28[2];       /* 0x28 */
    ZenieModel *model[2]; /* 0x30 */
    Task *task;         /* 0x38 */
    s32 f3C;            /* 0x3C */
    s32 timer;          /* 0x40 */
    s32 flags;          /* 0x44 */
    ZenieAnim anim[2];  /* 0x48 */
    s32 fA8;            /* 0xA8 */
} ZenieWork;

extern ZenieWork *gZenie;
extern s32 gZenieRefs;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern f32 D_004703BC;
extern f32 D_004E0614[];
extern s32 gZenieAnimStartA[];
extern s32 gZenieAnimStartB[];
extern s32 gZenieAnimShownA[];
extern s32 gZenieAnimShownB[];
extern s32 gZenieAnimCloseA[];
extern s32 gZenieAnimCloseB[];
extern char D_0046B818[];
extern char D_0046B828[];

extern void func_0012C360(void *);
extern void func_00133780(s32, s32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_00143F20(s32, s32, f32);
extern void func_00145CC0(s32, s32);
extern void func_00227A30(s32);
extern void func_00228410(void);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern s32 func_0022BC30(s32, f32);
extern void func_0022C1D0(s32, s32, f32);
extern void func_0022C430(s32, f32);
extern void func_0022C6B0(s32);
extern void func_0022D4B0(s32, s32);
extern s32 func_0022DA90(s32, f32);
extern void func_001258F8(void *, s32, s32);
extern void *func_0025C670(s32, s32, s32);
extern void func_0025C800(void *, s32);
extern void func_0025C9D0(void *);

void Zenie_Draw(void);
void Zenie_Update(void);

void Zenie_TaskMain(Task *t) {
    if (gZenie->flags & 1) {
        Zenie_Update();
    }
    if (gZenie->flags & 2) {
        Zenie_Draw();
    }
}

void Zenie_TaskLoad(Task *t) {
    s32 i;
    s32 j;

    for (i = 0; i < 2; i++) {
        if (gZenie->file[i]->state != 3) {
            return;
        }
    }
    for (j = 0; j < 2; j++) {
        func_0012C360(gZenie->file[j]->data);
    }
    gZenie->model[0] = gZenie->file[0]->data;
    gZenie->model[1] = gZenie->file[1]->data;
    switch (gZenie->state) {
    case 0:
        gZenie->state = 1;
        break;
    case 2:
        gZenie->state = 3;
        break;
    }
    TASK_SET_FUNC(t, Zenie_TaskMain);
}

void Zenie_SetStep(s32 step) {
    gZenie->step = step;
}

void Zenie_SetF18(s32 a0) {
    gZenie->f18 = a0;
}

void Zenie_SetValue(s32 value, s32 target) {
    gZenie->start = value;
    gZenie->cur = value;
    gZenie->target = target;
}

void Zenie_SetTarget(s32 target) {
    gZenie->target = target;
}

void Zenie_Close(s32 a0) {
    gZenie->fA8 = a0;
    gZenie->state = 6;
}

void Zenie_Open(s32 a0) {
    gZenie->fA8 = a0;
    gZenie->state = 2;
}

s32 Zenie_IsAtLimit(void) {
    s32 cur = gZenie->cur;
    s32 ret = 1;

    if (cur != 0 && cur != 990000) {
        ret = 0;
    }
    return ret;
}

s32 Zenie_GetChange(void) {
    return gZenie->cur - gZenie->start;
}

s32 Zenie_GetState(void) {
    return gZenie->state;
}

void Zenie_Draw(void) {
    s32 hi;
    ZenieModel *m;
    s32 obj;
    ZenieAnim *a;
    s32 mid;
    s32 lo;
    s32 cur;
    s32 p0;
    s32 p1;

    if (gZenie->state >= 3) {
        p1 = gZenie->f0;
        p0 = (s32)gZenie->model[1];
        D_00470704 = p0;
        D_0047070C = p1;
        D_00470708 = 0;
        func_00145CC0(p0, p1);
        D_00470238 = 0;
        func_00133780(0, 1);
        m = gZenie->model[0];
        func_00228430(0);
        func_002284D0(0);
        obj = func_0022DA90(m->f1C[gZenie->anim[0].id], gZenie->anim[0].frame * D_004703BC);
        func_00227A30(obj + 0x20);
        func_00228430(0);
        func_002284D0(0);
        func_0022C6B0(obj);
        a = &gZenie->anim[1];
        func_0022C430(m->f1C[a->id], a->frame * D_004703BC);
        func_00228410();
        if (gZenie->type == 2) {
            func_0022C1D0(m->f14[3], 1, a->frame * D_004703BC);
        }
        cur = gZenie->cur;
        lo = cur % 1000;
        mid = (cur / 1000) % 1000;
        hi = (cur / 1000000) % 1000;
        if (hi != 0) {
            mid += 1000;
        }
        if (mid != 0) {
            lo += 1000;
        }
        func_0022C1D0(m->f14[0], 1, lo);
        func_0022C1D0(m->f14[1], 1, mid);
        func_0022C1D0(m->f14[2], 1, hi);
        func_0022D4B0(obj, 1);
        func_00228410();
        func_00133780(0, 0);
    }
}
void Zenie_Update(void) {
    s32 busy;
    s32 i;
    ZenieAnim *a;

    if (gZenie->state > 1) {
        if (gZenie->state == 2) {
            gZenie->state = 3;
            gZenie->timer = 0;
        }
        if (gZenie->state == 6) {
            gZenie->state = 7;
            gZenie->timer = 0;
            a = &gZenie->anim[0];
            a->frame = 0;
            a->id = gZenieAnimCloseA[gZenie->type];
            a = &gZenie->anim[1];
            a->frame = 0;
            a->id = gZenieAnimCloseB[gZenie->type];
        }
        busy = 0;
        for (i = 0; i < 2; i++) {
            a = &gZenie->anim[i];
            a->frame++;
            if (func_0022BC30(gZenie->model[0]->f1C[a->id], a->frame * D_004703BC) != 0xFF) {
                busy = 1;
            }
        }
        if (busy == 0) {
            switch (gZenie->state) {
            case 3:
                gZenie->state = 4;
                a = &gZenie->anim[0];
                a->frame = 0;
                a->id = gZenieAnimShownA[gZenie->type];
                a = &gZenie->anim[1];
                a->frame = 0;
                a->id = gZenieAnimShownB[gZenie->type];
                break;
            case 7:
                gZenie->state = 1;
                gZenie->anim[0].done = 1;
                gZenie->anim[1].done = 1;
                break;
            }
        }
        if (gZenie->cur != gZenie->target) {
            gZenie->state = 5;
            if (gZenie->cur >= gZenie->target) {
                gZenie->cur -= gZenie->step;
                if (gZenie->cur <= gZenie->target) {
                    gZenie->cur = gZenie->target;
                    gZenie->state = 4;
                    func_00143F20(0, 0, D_004E0614[0]);
                    if (!(D_004E0614[0] <= 0.0f)) {
                        func_00143D60(0, 0, 0xF, 0);
                    }
                } else if (gZenie->timer++ % 10 == 0) {
                    func_00143F20(0, 0, D_004E0614[0]);
                    if (!(D_004E0614[0] <= 0.0f)) {
                        func_00143D60(0, 0, 0xE, 0);
                    }
                    gZenie->timer = 1;
                }
            } else {
                gZenie->cur += gZenie->step;
                if (gZenie->cur >= gZenie->target) {
                    gZenie->cur = gZenie->target;
                    gZenie->state = 4;
                    func_00143F20(0, 0, D_004E0614[0]);
                    if (!(D_004E0614[0] <= 0.0f)) {
                        func_00143D60(0, 0, 0xF, 0);
                    }
                } else if (gZenie->timer++ % 10 == 0) {
                    func_00143F20(0, 0, D_004E0614[0]);
                    if (!(D_004E0614[0] <= 0.0f)) {
                        func_00143D60(0, 0, 0xE, 0);
                    }
                    gZenie->timer = 1;
                }
            }
        }
        if (gZenie->cur < 0) {
            gZenie->cur = 0;
            gZenie->target = 0;
            gZenie->state = 4;
            func_00143F20(0, 0, D_004E0614[0]);
            if (!(D_004E0614[0] <= 0.0f)) {
                func_00143D60(0, 0, 0xF, 0);
            }
        }
        if (gZenie->cur > 990000) {
            gZenie->cur = 990000;
            gZenie->target = 990000;
            gZenie->state = 4;
            func_00143F20(0, 0, D_004E0614[0]);
            if (!(D_004E0614[0] <= 0.0f)) {
                func_00143D60(0, 0, 0xF, 0);
            }
        }
    }
}

void Zenie_Init(void) {
    gZenie = NULL;
    gZenieRefs = 0;
}

void Zenie_Release(void) {
    s32 i;

    if (--gZenieRefs <= 0) {
        if (gZenieRefs < 0) {
            gZenieRefs = 0;
            return;
        }
        func_00145120(gZenie->task);
        for (i = 0; i < 2; i++) {
            if (gZenie->file[i] != NULL) {
                func_0025C800(gZenie->file[i], 0);
            }
            if (gZenie->f28[i] != NULL) {
                func_0025C9D0(gZenie->f28[i]);
            }
        }
        func_0013AC90(gZenie);
        gZenie = NULL;
    }
}

void Zenie_Create(s32 prio, s32 type, s32 a2) {
    if (gZenieRefs++ <= 0) {
        gZenie = func_0013AAB0(0xAC, 0, D_0046B818, 0x70);
        func_001258F8(gZenie, 0, 0xAC);
        gZenie->file[0] = func_0025C670(0x10AC0, 0, 0);
        gZenie->file[1] = func_0025C670(0x10AC1, 0, 0);
        gZenie->f0 = a2;
        gZenie->type = type;
        gZenie->anim[0].id = gZenieAnimStartA[type];
        gZenie->anim[1].id = gZenieAnimStartB[type];
        gZenie->task = func_00144FC0(Zenie_TaskLoad, 0, prio, 0x200, 0x100000, D_0046B828);
        func_001258F8(&gZenie->task->data, 0, 0x10);
        gZenie->flags = 3;
    }
}
