#include "common.h"
#include "menu/menu.h"

/* A file being read (amCdFs_ReadFileId's handle). */
typedef struct ArenaStageSelFile {
    char pad0[4];
    s16 state;          /* 0x04: 3 once read */
    char pad6[0x54 - 6];
    void *data;         /* 0x54 */
} ArenaStageSelFile;

typedef struct ArenaStageSelGlobal {
    ArenaStageSelFile *file[2]; /* 0x00 */
    Task *task;         /* 0x08 */
    Task *fC;
    Task *f10;
} ArenaStageSelGlobal;

/* The screen's resource file (file 0x1081B): tables of pointers into it. */
typedef struct ArenaStageSelRes {
    char pad0[0x14];
    s32 *f14;
    char pad18[4];
    s32 *f1C;
} ArenaStageSelRes;

typedef struct ArenaStageSelObj {
    char pad0[0x5C];
    f32 f5C;
} ArenaStageSelObj;

typedef struct ArenaStageSelEntry {
    s32 model;          /* 0x00 */
    s32 f4;
    s16 stage;          /* 0x08 */
    s16 fA;
} ArenaStageSelEntry;

typedef struct ArenaStageSelWork {
    ArenaStageSelRes *res; /* 0x000 */
    void *tex;          /* 0x004 */
    void *f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    ArenaStageSelObj *f28;
    f32 f2C;
    ArenaStageSelEntry entry[13]; /* 0x030 */
    u8 fCC;
    u8 fCD;
    u8 fCE;
    u8 fCF;
    u16 fD0;
    char padD2[0xF0 - 0xD2];
    s16 fF0;
    u8 fF2;
    u8 fF3;
    u8 fF4;
    char padF5[3];
    s32 fF8;
    s32 fFC;
    s32 f100;
    char pad104[0x10C - 0x104];
    f32 timer;          /* 0x10C */
    s32 se;             /* 0x110 */
    Task *sub;          /* 0x114 */
} ArenaStageSelWork;

/* The user data of the sub task (w->sub). */
typedef struct ArenaStageSelSubData {
    s32 f0;             /* 0x30 */
    s16 f4;             /* 0x34 */
    s16 f6;             /* 0x36 */
} ArenaStageSelSubData;

typedef struct ArenaStageSelSe {
    s32 id[3];
} ArenaStageSelSe;

extern ArenaStageSelGlobal *gArenaStageSel;
extern ArenaStageSelSe D_00456D98;
extern u8 D_0046F4B8[];
extern char D_0046F510[];
extern char D_0046F530[];
extern char D_0046F540[];
extern char D_0046F550[];
extern char D_0046F568[];
extern u8 D_003F0800[];
extern u16 D_00492FCE[];
extern u16 D_0049302E[];
extern u16 D_00493086[];
extern u16 D_004930E6[];
extern u16 D_004B4B50[];
extern s8 D_004B4B59[];
extern s8 D_004B4B63[];
extern u8 D_005C4120[];
extern s32 D_00470238;
extern f32 gFrameDelta;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0618[];
extern void func_002E4D60(ArenaStageSelWork *);
extern s32 amAdx_GetStat(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D860(s32, f32);
extern void Obj_SetF3C(void *, s32);
extern void func_002E5C20(Task *);
extern void func_0022CF70(ArenaStageSelObj *);
extern void func_0022D4B0(ArenaStageSelObj *, s32);
extern void func_00229800(s32, void *, s32, f32);
extern void Obj_CopyVec4F50(void *, void *);
extern u32 func_0012EAE0(s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amCdFs_Close(void *, s32);
extern void func_0022E0B0(void *);
extern void amFile_Load(void *);
extern void func_0028DF20(void);
extern void func_0028DFC0(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void ArenaStage_TaskStart(Task *);
extern void ArenaStage_TaskEnd(Task *);
extern void func_002E5170(ArenaStageSelWork *);
extern void func_0013B0B0(void *);
extern void func_00131B90(void *);
extern void func_00131D00(void *, s32, f32, f32);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(s32);
extern void func_0013B110(s32);
extern void StrStatus_Exit(void *);
extern void amSofdec_Destroy(s32);
extern void Help_Exit(void);
extern void InputPass_Release(void);
extern void memset(void *, s32, s32);
extern void Sofdec_TaskMain(Task *);
extern void ArenaStageSel_CreateObj(ArenaStageSelWork *);
extern void func_002E53B0(ArenaStageSelWork *, s32);
extern void *func_002C0630(s32, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void InputPass_Acquire(void);
extern void Help_Load(void);

void ArenaStageSel_TaskWaitVoice(Task *t) {
    ArenaStageSelWork *w = t->data.work;
    u16 pad;
    u8 c;
    s32 v;
    s32 n;

    c = w->fCD;
    pad = 0;
    if (c & 1) {
        pad |= (u16)(D_00492FCE[0] | D_0049302E[0]);
    }
    if (c & 2) {
        pad |= (u16)(D_00493086[0] | D_004930E6[0]);
    }
    func_002E4D60(w);
    if (amAdx_GetStat(w->se) == 5 || (pad & 0x50A0)) {
        ((ArenaStageSelSubData *)&w->sub->data)->f4 = w->fF0;
        w->fCE = 0;
        D_00470704 = v = (s32)w->tex;
        D_0047070C = n = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(v, n);
        D_00470238 = 0;
        if (w->f14 != 0) {
            func_0022D0E0(w->f14, 0);
        }
        w->f14 = func_0022D860(w->res->f14[5], 0.0f);
        Obj_SetF3C(w->f8, -1);
        w->fF4 = 2;
        D_00470704 = v = (s32)w->tex;
        D_0047070C = n = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent(v, n);
        D_00470238 = 0;
        if (w->f20 != 0) {
            func_0022D0E0(w->f20, 0);
        }
        w->f20 = func_0022D670(w->res->f1C[D_0046F4B8[w->fF0]], 0.0f);
        TASK_SET_FUNC(t, func_002E5C20);
    }
}

void ArenaStageSel_TaskOpen(Task *t) {
    ArenaStageSelSe se;
    s32 pos[8];
    ArenaStageSelWork *w = t->data.work;
    u32 r;
    f32 f;
    f32 g;

    func_002E4D60(w);
    f = w->timer - gFrameDelta;
    w->timer = f;
    if (!(f < 0.0f)) {
        g = f / 50.0f;
        w->f2C = g;
        w->f28->f5C = g;
        func_0022CF70(w->f28);
        return;
    }
    if (w->f28 != NULL) {
        func_0022D4B0(w->f28, 0);
        w->f28 = NULL;
    }
    func_00229800(w->res->f1C[75], pos, -1, 0.0f);
    Obj_CopyVec4F50(w->f8, pos);
    r = func_0012EAE0(0x20) % 3;
    w->fCC = r + 0x11;
    Obj_SetF3C(w->f8, w->fCC);
    se = D_00456D98;
    w->se = amAdx_PlayAfs(1, se.id[r] | 0x20000, 0);
    amAdx_SetVolume(w->se, D_004E0618[0]);
    amAdx_Pause(w->se, 0);
    TASK_SET_FUNC(t, ArenaStageSel_TaskWaitVoice);
}

void ArenaStageSel_TaskLoad(Task *t) {
    f32 m[24];
    ArenaStageSelGlobal *g;
    ArenaStageSelWork *w;

    w = t->data.work;
    g = gArenaStageSel;
    w->f28->f5C = w->f2C;
    func_0022CF70(w->f28);
    if (g->file[1]->state == 3) {
        w->res = g->file[0]->data;
        g->file[0]->data = NULL;
        amCdFs_Close(g->file[0], 0);
        g->file[0] = NULL;
        w->tex = g->file[1]->data;
        g->file[1]->data = NULL;
        amCdFs_Close(g->file[1], 0);
        g->file[1] = NULL;
        func_0022E0B0(w->res);
        amFile_Load(w->tex);
        if (w->fD0 & 0x80) {
            func_0028DF20();
            func_0028DFC0(6, 0, 0, 0, 0, 0, 0, 0, 0x1F);
        }
        g->fC = amTask_Create(ArenaStage_TaskStart, 0, 0x1001, 8, 2, D_0046F510);
        g->f10 = amTask_Create(ArenaStage_TaskEnd, 0, 0x3000, 8, 2, D_0046F530);
        func_002E5170(w);
        w->timer = 50.0f;
        w->fF0 = w->entry[w->fF2].stage;
        func_0013B0B0(D_003F0800);
        func_00131B90(m);
        func_00131D00(m, 0, 0.0f, 0.0f);
        func_00131F00(m, 0.0f, 0.0f);
        func_00132DF0(0);
        func_0013B110(1);
        TASK_SET_FUNC(t, ArenaStageSel_TaskOpen);
    }
}

void ArenaStageSel_Exit(void) {
    ArenaStageSelGlobal *g = gArenaStageSel;
    ArenaStageSelWork *w;
    ArenaStageSelSubData *d;
    ArenaStageSelEntry *e;
    TaskData *td = &g->task->data;
    s32 i;

    if (g->task != NULL) {
        w = td->work;
        StrStatus_Exit(w->f8);
        if (w->f10 != 0) {
            func_0022D0E0(w->f10, 1);
        }
        if (w->f18 != 0) {
            func_0022D0E0(w->f18, 1);
        }
        if (w->f14 != 0) {
            func_0022D0E0(w->f14, 1);
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
        for (i = 0; i < 13; i++) {
            e = &w->entry[i];
            if (e->model != 0) {
                func_0022D0E0(e->model, 1);
                e->model = 0;
            }
        }
        if (w->f28 != NULL) {
            func_0022D4B0(w->f28, 1);
            w->f28 = NULL;
        }
        if (w->res != NULL) {
            amHeap_Free(w->res);
        }
        if (w->tex != NULL) {
            amHeap_Free(w->tex);
        }
        if (w->sub != NULL) {
            d = (ArenaStageSelSubData *)&w->sub->data;
            if (d->f0 >= 0) {
                amSofdec_Destroy(d->f0);
            }
            d->f0 = -1;
            d->f4 = -1;
            d->f6 = -1;
            amTask_Kill(w->sub);
        }
        amHeap_Free(w);
        amTask_Kill(g->task);
    }
    if (g->fC != NULL) {
        amTask_Kill(g->fC);
    }
    if (g->f10 != NULL) {
        amTask_Kill(g->f10);
    }
    amHeap_Free(gArenaStageSel);
    gArenaStageSel = NULL;
    Help_Exit();
    InputPass_Release();
}

void ArenaStageSel_Start(s32 stage) {
    ArenaStageSelGlobal *g = gArenaStageSel;
    ArenaStageSelWork *w;
    ArenaStageSelSubData *d;
    Task *t;
    u16 b = D_004B4B50[0];

    g->task = t = amTask_Create(ArenaStageSel_TaskLoad, 0, 0x2600, 8, 2, D_0046F540);
    t->data.work = w = amHeap_Alloc(0x118, 0, D_0046F550, 0x11E);
    memset(w, 0, 0x118);
    w->fD0 = 0;
    switch (D_005C4120[0]) {
    case 0:
        w->fD0 = 2;
        break;
    case 1:
        w->fD0 = 0x86;
        break;
    case 2:
        w->fD0 = 0x86;
        break;
    }
    w->fF0 = (u8)stage;
    w->fF8 = 0;
    w->fFC = 0;
    w->f100 = 0;
    w->fF4 = 1;
    w->f2C = 1.0f;
    w->sub = amTask_Create(Sofdec_TaskMain, 0, 0x2680, 8, 2, D_0046F568);
    d = (ArenaStageSelSubData *)&w->sub->data;
    d->f4 = -1;
    d->f6 = -1;
    ArenaStageSel_CreateObj(w);
    w->f28->f5C = w->f2C;
    func_0022CF70(w->f28);
    switch (D_004B4B59[0]) {
    case 1:
    case 2:
        w->fCD = D_004B4B63[0] != 0 ? 2 : 1;
        break;
    case 0:
    case 3:
        w->fCD = 3;
        break;
    }
    func_002E53B0(w, (u16)(b | 0x1000));
    w->f8 = func_002C0630(0x107FC, 0x4000, 0);
}

void ArenaStageSel_Load(void) {
    ArenaStageSelGlobal *g;

    gArenaStageSel = g = amHeap_Alloc(0x14, 0, D_0046F550, 0xEE);
    g->file[0] = amCdFs_ReadFileId(0x1081B, 0, 0);
    g->file[1] = amCdFs_ReadFileId(0x1081C, 0, 0);
    g->task = NULL;
    g->fC = NULL;
    g->f10 = NULL;
    InputPass_Acquire();
    Help_Load();
}
