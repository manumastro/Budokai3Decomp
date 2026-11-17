#include "common.h"
#include "menu/menu.h"

/* A data file read with func_0025C670; 0x54 is the pointer to its contents once loaded. */
typedef struct SaveFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once loaded */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} SaveFile;

/* The save task's data (0x30 bytes inside the task itself, from Task+0x30; the task is gSaveTask). */
typedef struct SaveData {
    SaveFile *file[3];  /* 0x00: files 0x1081F, 0x1081D, 0x1081E */
    s32 res[3];         /* 0x0C: their contents */
    s32 state;          /* 0x18 */
    s32 mode;           /* 0x1C */
    s32 step;           /* 0x20 */
    s32 own;            /* 0x24: buf was allocated here */
    char *buf;          /* 0x28 */
    s32 request;        /* 0x2C */
} SaveData;

/* An element of the array at D_0058F680 (0xD680 bytes each). */
typedef struct SaveSlot {
    char pad0[0x30];
    char f30[0xD680 - 0x30];
} SaveSlot;

extern Task *gSaveTask;
extern s32 D_00470830;
extern u8 D_00470840;
extern char D_0046F470[];
extern char D_0046F4A0[];
extern char D_004B4B40[];
extern char D_004B4BC0[];
extern SaveSlot D_0058F680[];
extern char D_0059CD30[];

extern void func_00119BF0(void *);
extern void func_001EF730(char *);
extern void func_001EF880(char *, void *);
extern void func_001EFDB0(char *, char *);
extern void func_001F0790(void);
extern void func_001F07A0(void);
extern void func_001258F8(void *, s32, s32);
extern void func_0028DF20(void);
extern s32 func_0028DFC0(s32, s32, s32, char *, s32, s32, s32, char *, s32);
extern void *func_0025C670(s32, s32, s32);
extern void func_0025C800(void *, s32);

void Save_TaskWait(Task *t);
void Save_TaskIdle(Task *t);

void Save_TaskWrite(Task *t) {
    SaveData *d = (SaveData *)&t->data;

    d->buf = func_0013AAB0(0xD680, 0, D_0046F470, 0x233);
    d->own = 1;
    func_001EFDB0(d->buf, D_004B4B40);
    func_00119BF0(&D_00470840);
    func_001EF880(d->buf, &D_00470840);
    func_001EF730(d->buf);
    func_001F0790();
    if (func_0028DFC0(4, d->res[0], 0, d->buf, d->res[1], d->res[2], 0, D_004B4BC0, 0x1F) > 0) {
        TASK_SET_FUNC(t, Save_TaskWait);
        d->state = 2;
    } else {
        func_0013AC90(d->buf);
        d->buf = NULL;
        d->state = 3;
        d->request = 0;
        TASK_SET_FUNC(t, Save_TaskIdle);
        func_001F07A0();
    }
}

void Save_TaskCreate(Task *t) {
    SaveData *d = (SaveData *)&t->data;

    d->buf = func_0013AAB0(0xD680, 0, D_0046F470, 0x1ED);
    d->own = 1;
    func_001EFDB0(d->buf, D_004B4B40);
    func_00119BF0(&D_00470840);
    func_001EF880(d->buf, &D_00470840);
    func_001EF730(d->buf);
    func_001F0790();
    if (func_0028DFC0(2, d->res[0], 0, d->buf, d->res[1], d->res[2], 0, D_004B4BC0, 0x1F) != 0) {
        TASK_SET_FUNC(t, Save_TaskWait);
        d->state = 2;
    } else {
        func_0013AC90(d->buf);
        d->buf = NULL;
        d->state = 3;
        func_001F07A0();
        d->request = 0;
        TASK_SET_FUNC(t, Save_TaskIdle);
    }
}

void Save_TaskSlots(Task *t) {
    SaveData *d = (SaveData *)&t->data;
    s32 i;

    if (d->state == 6) {
        d->state = 2;
    }
    if (D_00470830 == 0) {
        return;
    }
    switch (D_00470830) {
    case 1:
        break;
    case 2:
    case 3:
    case -1:
        func_0028DF20();
        d->state = 3;
        goto end;
    }
    func_0028DF20();
    switch (d->step) {
    case 0:
        func_0028DFC0(9, d->res[0], 1, d->buf + 0xD680, 0, 0, 0, D_0059CD30, 0x1E);
        d->step++;
        return;
    case 1:
        d->state = 6;
    case 2:
        i = d->step - 1;
        func_0028DFC0(i + 9, d->res[0], i, d->buf + i * 0xD680, 0, 0, 0, D_0058F680[i].f30, 0x1E);
        d->step++;
        return;
    case 3:
        d->step = -1;
        d->state = 4;
        break;
    }
end:
    func_001F07A0();
    func_0028DF20();
    d->request = 0;
    TASK_SET_FUNC(t, Save_TaskIdle);
}

void Save_TaskWait(Task *t) {
    SaveData *d = (SaveData *)&t->data;

    if (D_00470830 == 0) {
        return;
    }
    switch (D_00470830) {
    case 1:
        d->state = 4;
        break;
    case 2:
        d->state = 5;
        break;
    default:
        d->state = 3;
        break;
    }
    if (d->buf != NULL && d->own != 0) {
        func_0013AC90(d->buf);
        d->buf = NULL;
        d->own = 0;
    }
    func_001F07A0();
    func_0028DF20();
    d->request = 0;
    TASK_SET_FUNC(t, Save_TaskIdle);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_save", Save_TaskIdle);

void Save_TaskLoad(Task *t) {
    SaveData *d = (SaveData *)&t->data;
    s32 i;

    for (i = 0; i < 3; i++) {
        if (d->file[i] != NULL && d->file[i]->state != 3) {
            return;
        }
    }
    if (d->file[0] != NULL) {
        d->res[0] = (s32)d->file[0]->data;
    }
    if (d->file[1] != NULL) {
        d->res[1] = (s32)d->file[1]->data;
    }
    if (d->file[2] != NULL) {
        d->res[2] = (s32)d->file[2]->data;
    }
    TASK_SET_FUNC(t, Save_TaskIdle);
}

s32 Save_GetState(void) {
    return ((SaveData *)&gSaveTask->data)->state;
}

void Save_Clear(void) {
    gSaveTask = NULL;
}

void Save_Exit(void) {
    SaveData *d;
    s32 i;

    d = (SaveData *)&gSaveTask->data;
    for (i = 0; i < 3; i++) {
        if (d->file[i] != NULL) {
            func_0025C800(d->file[i], 0);
        }
    }
    func_00145120(gSaveTask);
    gSaveTask = NULL;
    func_0028DF20();
}

void Save_Request(s32 mode, s32 step, char *buf) {
    SaveData *d = (SaveData *)&gSaveTask->data;

    d->mode = mode;
    d->buf = buf;
    d->step = step;
    d->request = 1;
}

void Save_Load(s32 prio) {
    SaveData *d;

    gSaveTask = func_00144FC0(Save_TaskLoad, 0, prio, 0x200, 2, D_0046F4A0);
    d = (SaveData *)&gSaveTask->data;
    func_001258F8(d, 0, 0x30);
    d->file[0] = func_0025C670(0x1081F, 0, 0);
    d->file[1] = func_0025C670(0x1081D, 0, 0);
    d->file[2] = func_0025C670(0x1081E, 0, 0);
    d->state = 1;
}
