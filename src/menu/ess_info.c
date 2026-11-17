#include "common.h"
#include "menu/menu.h"

/* A file being read (sys area): state 3 once loaded; +0x40 the data, which this screen takes over. */
typedef struct EssInfoFile {
    s32 f0;
    s16 state;          /* 0x04 */
    char pad6[0x40 - 0x6];
    void *data;         /* 0x40 */
} EssInfoFile;

/* A loaded package: +0x50 the model. */
typedef struct EssInfoRes {
    char pad0[0x50];
    void *model;        /* 0x50 */
} EssInfoRes;

/* The model: f1C the table of motions / nodes. */
typedef struct EssInfoModel {
    char pad0[0x1C];
    s32 **f1C;          /* 0x1C */
} EssInfoModel;

typedef struct EssInfoAnim {
    s32 id;             /* 0x00 */
    s32 f4;
    s32 frame;          /* 0x08 */
    s32 fC;             /* 0x0C */
    char pad10[0x30 - 0x10];
} EssInfoAnim;

typedef struct EssInfoWork {
    EssInfoFile *file[2];   /* 0x00 */
    EssInfoRes *res[2];     /* 0x08 */
    Task *task;             /* 0x10 */
    EssInfoModel *model[2]; /* 0x14 */
    char pad1C[0x30 - 0x1C];
    s32 page;               /* 0x30 */
    s32 f34;                /* 0x34 */
    s32 f38;                /* 0x38 */
    char pad3C[4];
    EssInfoAnim anim[7];    /* 0x40 */
} EssInfoWork;

extern EssInfoWork *gEssInfo;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern f32 gFrameDelta;
extern f32 D_004E0614[];
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern char D_0046B4A0[];
extern char D_0046B4B0[];

extern void amFile_Load(void *);
extern void func_00133780(s32, s32);
extern void func_00143D60(s32, s32, s32, s32);
extern void func_00143F20(s32, s32, f32);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_00145CC0(s32, s32);
extern void func_00227B20(s32 *, s32, s32, s32, f32);
extern void func_00228410(void);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern s32 func_0022BC30(s32 *, f32);
extern void func_0022C430(s32 *, f32);
extern void memset(void *, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void func_0026D8A0(void);
extern void Help_Open(u64, s32);

void EssInfo_TaskMain(Task *t);
void EssInfo_TaskClose(Task *t);
void EssInfo_TaskOpen(Task *t);

void EssInfo_Draw(void) {
    EssInfoAnim *a;
    EssInfoModel *m;
    s32 p0;

    p0 = (s32)gEssInfo->model[1];
    D_00470704 = p0;
    D_0047070C = 0x11401500;
    D_00470708 = 0;
    func_00145CC0(p0, 0x11401500);
    D_00470238 = 0;
    func_00133780(0, 1);
    m = gEssInfo->model[0];
    func_00228430(0);
    func_002284D0(0);
    a = &gEssInfo->anim[1];
    func_00228430(0);
    func_00227B20((s32 *)m->f1C[a->id][3], 0, 0, 0, a->frame * gFrameDelta);
    func_0022C430(m->f1C[6], gEssInfo->f34);
    func_00228410();
    a = &gEssInfo->anim[2];
    if (gEssInfo->anim[2].fC == 0) {
        func_00228430(0);
        func_00227B20((s32 *)m->f1C[a->id][3], 0, 0, 0, a->frame * gFrameDelta);
        func_0022C430(m->f1C[6], gEssInfo->f38);
        func_00228410();
    }
    func_00228430(0);
    func_0022C430(m->f1C[gEssInfo->anim[0].id], gEssInfo->anim[0].frame * gFrameDelta);
    func_00228410();
    func_00228430(0);
    func_0022C430(m->f1C[gEssInfo->anim[3].id], gEssInfo->anim[3].frame * gFrameDelta);
    func_00228410();
    func_00228430(0);
    func_0022C430(m->f1C[gEssInfo->anim[4].id], gEssInfo->anim[4].frame * gFrameDelta);
    func_00228410();
    a = &gEssInfo->anim[5];
    func_00228430(0);
    func_00227B20((s32 *)m->f1C[a->id][3], 0, 0, 0, a->frame * gFrameDelta);
    func_0022C430(m->f1C[0x10], gEssInfo->page);
    func_00228410();
    a = &gEssInfo->anim[6];
    func_00228430(0);
    func_00227B20((s32 *)m->f1C[a->id][3], 0, 0, 0, a->frame * gFrameDelta);
    func_0022C430(m->f1C[0x14], gEssInfo->page);
    func_00228410();
    func_00228410();
    func_00133780(0, 0);
}

void EssInfo_UpdateAnims(void) {
    EssInfoAnim *a;

    gEssInfo->anim[0].frame++;
    gEssInfo->anim[1].frame++;
    a = &gEssInfo->anim[2];
    if (gEssInfo->anim[2].fC == 0) {
        a->frame++;
        if (func_0022BC30(gEssInfo->model[0]->f1C[a->id], a->frame * gFrameDelta) == 0xFF) {
            a->fC = -1;
            gEssInfo->f34 = gEssInfo->page;
        }
    }
    gEssInfo->anim[3].frame++;
    gEssInfo->anim[4].frame++;
    gEssInfo->anim[5].frame++;
    gEssInfo->anim[6].frame++;
}

void EssInfo_TaskTurn(Task *t) {
    s32 done;
    EssInfoModel *m;

    EssInfo_UpdateAnims();
    EssInfo_Draw();
    done = -1;
    m = gEssInfo->model[0];
    done &= func_0022BC30(m->f1C[gEssInfo->anim[1].id], gEssInfo->anim[1].frame * gFrameDelta);
    done &= func_0022BC30(m->f1C[gEssInfo->anim[2].id], gEssInfo->anim[2].frame * gFrameDelta);
    if (done == 0xFF) {
        TASK_SET_FUNC(t, EssInfo_TaskMain);
    }
}

void EssInfo_TaskMain(Task *t) {
    s32 *d = (s32 *)&t->data;
    EssInfoAnim *a;
    s32 pad;
    s32 old;

    EssInfo_UpdateAnims();
    EssInfo_Draw();
    pad = D_00492FCE[0] | D_00493086[0];
    if ((pad & 0x1000) || (pad & 0x4000)) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            func_00143D60(0, 0, 5, 0);
        }
        a = &gEssInfo->anim[0];
        a->id = 1;
        a->frame = 0;
        a = &gEssInfo->anim[1];
        a->id = 4;
        a->frame = 0;
        a = &gEssInfo->anim[2];
        a->fC = 1;
        a->frame = 0;
        if (gEssInfo->page != 0) {
            a = &gEssInfo->anim[3];
            a->id = 9;
            a->frame = 0;
        }
        if (gEssInfo->page != 13) {
            a = &gEssInfo->anim[4];
            a->id = 12;
            a->frame = 0;
        }
        a = &gEssInfo->anim[5];
        a->id = 15;
        a->frame = 0;
        a = &gEssInfo->anim[6];
        a->id = 19;
        a->frame = 0;
        *d = 60;
        TASK_SET_FUNC(t, EssInfo_TaskClose);
        return;
    }
    if (pad & 1) {
        func_00143F20(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            func_00143D60(0, 0, 3, 0);
        }
        Help_Open(0x0010000000040000, 3);
        pad = 0;
    }
    old = gEssInfo->page;
    switch (pad & 0x50) {
    case 0x10:
        if ((gEssInfo->page = old - 1) < 0) {
            gEssInfo->page = 0;
            break;
        }
        gEssInfo->f34 = gEssInfo->page;
        gEssInfo->f38 = gEssInfo->page + 1;
        a = &gEssInfo->anim[2];
        a->fC = 0;
        a->id = 3;
        a->frame = 0;
        if (gEssInfo->page == 0) {
            a = &gEssInfo->anim[3];
            a->id = 9;
            a->frame = 0;
        }
        if (old == 13) {
            a = &gEssInfo->anim[4];
            a->id = 11;
            a->frame = 0;
        }
        a = &gEssInfo->anim[5];
        a->id = 14;
        a->frame = 0;
        a = &gEssInfo->anim[6];
        a->id = 18;
        a->frame = 0;
        func_00143F20(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            func_00143D60(0, 0, 2, 0);
        }
        TASK_SET_FUNC(t, EssInfo_TaskTurn);
        break;
    case 0x40:
        if ((gEssInfo->page = old + 1) >= 14) {
            gEssInfo->page = 13;
            break;
        }
        gEssInfo->f34 = gEssInfo->page - 1;
        gEssInfo->f38 = gEssInfo->page;
        a = &gEssInfo->anim[2];
        a->fC = 0;
        a->id = 5;
        a->frame = 0;
        if (old == 0) {
            a = &gEssInfo->anim[3];
            a->id = 8;
            a->frame = 0;
        }
        if (gEssInfo->page == 13) {
            a = &gEssInfo->anim[4];
            a->id = 12;
            a->frame = 0;
        }
        a = &gEssInfo->anim[5];
        a->id = 14;
        a->frame = 0;
        a = &gEssInfo->anim[6];
        a->id = 18;
        a->frame = 0;
        func_00143F20(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            func_00143D60(0, 0, 2, 0);
        }
        TASK_SET_FUNC(t, EssInfo_TaskTurn);
        break;
    }
}

void EssInfo_TaskClose(Task *t) {
    EssInfo_UpdateAnims();
    EssInfo_Draw();
    if (func_0022BC30(gEssInfo->model[0]->f1C[gEssInfo->anim[0].id], gEssInfo->anim[0].frame * gFrameDelta) == 0xFF) {
        func_0026D8A0();
        t->func = NULL;
    }
}

void EssInfo_TaskOpen(Task *t) {
    EssInfo_UpdateAnims();
    EssInfo_Draw();
    if (func_0022BC30(gEssInfo->model[0]->f1C[gEssInfo->anim[0].id], gEssInfo->anim[0].frame * gFrameDelta) == 0xFF) {
        TASK_SET_FUNC(t, EssInfo_TaskMain);
    }
}

void EssInfo_TaskLoad(Task *t) {
    s32 i;

    if (gEssInfo->file[1]->state == 3) {
        for (i = 0; i < 2; i++) {
            gEssInfo->res[i] = gEssInfo->file[i]->data;
            gEssInfo->file[i]->data = NULL;
            amCdFs_Close(gEssInfo->file[i], 0);
            gEssInfo->file[i] = NULL;
            amFile_Load(gEssInfo->res[i]->model);
        }
        gEssInfo->model[0] = gEssInfo->res[0]->model;
        gEssInfo->model[1] = gEssInfo->res[1]->model;
        TASK_SET_FUNC(t, EssInfo_TaskOpen);
    }
}

void EssInfo_Init(void) {
    gEssInfo = NULL;
}

void EssInfo_Start(void) {
    s32 *d;

    gEssInfo->task = amTask_Create(EssInfo_TaskLoad, 0, 0x3200, 0x200, 0x20, D_0046B4A0);
    d = (s32 *)&gEssInfo->task->data;
    memset(d, 0, 0x1C);
    *d = 60;
}

void EssInfo_Exit(void) {
    s32 i;

    amTask_KillGroup(0x200, 0x20, 0);
    for (i = 0; i < 2; i++) {
        if (gEssInfo->file[i] != NULL) {
            amCdFs_Close(gEssInfo->file[i], 0);
        }
        if (gEssInfo->res[i] != NULL) {
            amCdFs_ReleaseCache(gEssInfo->res[i]);
        }
    }
    amHeap_Free(gEssInfo);
    gEssInfo = NULL;
}

void EssInfo_Load(void) {
    EssInfoAnim *a;

    if (gEssInfo != NULL) {
        amHeap_Free(gEssInfo);
    }
    gEssInfo = amHeap_Alloc(0x190, 0, D_0046B4B0, 0x37);
    memset(gEssInfo, 0, 0x190);
    gEssInfo->file[0] = amCdFs_ReadFileId(0x107EF, 0, 1);
    gEssInfo->file[1] = amCdFs_ReadFileId(0x107F0, 0, 1);
    a = &gEssInfo->anim[0];
    a->id = 0;
    a = &gEssInfo->anim[1];
    a->id = 2;
    a = &gEssInfo->anim[2];
    a->fC = 1;
    a = &gEssInfo->anim[3];
    a->id = 9;
    a->frame = 1000;
    a = &gEssInfo->anim[4];
    a->id = 10;
    a = &gEssInfo->anim[5];
    a->id = 13;
    a = &gEssInfo->anim[6];
    a->id = 17;
}
