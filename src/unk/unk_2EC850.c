#include "common.h"

typedef struct ResultEntry {
    s8 f0;
    s8 b[7];
    s32 w;
} ResultEntry;

typedef struct ResultArg {
    s8 idx;
    char pad1[3];
    ResultEntry e;
    char pad10[0x30];
} ResultArg;

typedef struct ResultMsg {
    char pad0[0x10];
    s32 f10;
    s32 f14;
    char pad18[0x18];
} ResultMsg;

typedef struct ResultWork {
    char pad0[0x11E1];
    s8 f11E1;
    s8 f11E2;
    s8 f11E3;
    char pad11E4[3];
    s8 f0;
    s8 b[7];
    char pad11EF;
    s16 f11F0[7];
    char pad11FE[2];
    s32 w;
} ResultWork;

typedef struct ResultState {
    char pad0[0x27C];
    s32 f27C;
} ResultState;

typedef struct ResultTask {
    char pad0[0x1C];
    void *f1C;
} ResultTask;

extern ResultState *gStrStatus;
extern s32 D_00470964;
extern void *D_00470960;
extern ResultWork *D_005AA604[];
extern void Scene_Request(s32, s32);
extern void func_002BD400(ResultArg *);
extern void StrStatus_Free(void);
extern void StrStatus_Dispatch(ResultMsg *);
extern void Scene_MarkDone(void);
void func_002EC850(ResultTask *t);

/* Differs only in register choice: the original keeps the source pointer in v1 and the work in a0. */
#if 0
void func_002EC850(ResultTask *t) {
    ResultArg arg;
    ResultMsg msg;
    ResultWork *w;
    s32 i;

    switch (gStrStatus->f27C) {
    case 0:
    case 1:
        D_00470964 = 0;
        break;
    case 2:
        if (D_00470964 == 0) {
            Scene_Request(8, 0);
            D_00470964 = 1;
        }
        break;
    case 3:
        func_002BD400(&arg);
        w = D_005AA604[0];
        w->f0 = arg.e.f0;
        for (i = 0; i < 7; i++) {
            w->b[i] = arg.e.b[i];
        }
        w->w = arg.e.w;
        StrStatus_Free();
        msg.f14 = 1;
        msg.f10 = 2;
        StrStatus_Dispatch(&msg);
        Scene_MarkDone();
        t->f1C = NULL;
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EC850", func_002EC850);

extern void StrStatus_Start(s32, s32);

void func_002EC960(ResultTask *t) {
    void (*f)(ResultTask *);

    StrStatus_Start(0xB000, 0x80000);
    f = func_002EC850;
    if (f == NULL) {
        f = NULL;
    }
    t->f1C = f;
}

typedef struct ResultParam {
    s8 f0;
    s8 f1;
    s8 f2;
    s8 f3;
    s8 f4;
    s8 b[7];
    s32 w;
    s32 f10;
    void *f14;
    s32 f18[7];
} ResultParam;

extern s8 D_00511450[];
extern char D_005116E0[];
extern void func_002BFEE0(s32, s32, s32);
extern void func_002BD6B0(ResultParam *, s32);
extern void func_0028EB40(void *, s32, void *, s32);

/* Differs only in register choice: the original keeps the work pointer in a0 (same as func_002EC850). */
#if 0
void func_002EC9B0(void) {
    ResultParam p;
    ResultWork *w = D_005AA604[0];
    s32 i;

    p.f0 = D_00511450[0];
    p.f1 = w->f11E1;
    p.f2 = w->f11E3;
    p.f3 = w->f11E2;
    p.f4 = w->f0;
    for (i = 0; i < 7; i++) {
        p.b[i] = w->b[i];
    }
    p.w = w->w;
    p.f14 = D_005116E0;
    p.f10 = 0;
    p.f18[0] = w->f11F0[0];
    p.f18[1] = w->f11F0[1];
    p.f18[2] = w->f11F0[2];
    p.f18[3] = w->f11F0[3];
    p.f18[4] = w->f11F0[4];
    p.f18[5] = w->f11F0[5];
    p.f18[6] = w->f11F0[6];
    func_002BFEE0(p.f1, p.f3, 2);
    func_002BD6B0(&p, 1);
    func_0028EB40(D_00470960, 10, func_002EC960, 0);
}
#endif
void func_002EC9B0(void);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EC850", func_002EC9B0);

extern void amTask_Kill(void *);

void func_002ECAC0(void) {
    ResultMsg msg;

    if (D_00470960 != NULL) {
        amTask_Kill(D_00470960);
        D_00470960 = NULL;
    }
    StrStatus_Free();
    msg.f14 = 1;
    msg.f10 = 2;
    StrStatus_Dispatch(&msg);
}

extern char D_0046F6B8[];
extern void Scene_SetReady(void);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void *amTask_Create(void (*)(ResultTask *), s32, s32, s32, s32, char *);

void func_002ECB10(void) {
    Scene_SetReady();
    SoundRpc_SendWord2(-1);
    SoundRpc_SendWord(0);
    amAdx_Stop(-1);
    D_00470960 = amTask_Create(func_002EC850, 0, 0xA000, 2, 0x80000, D_0046F6B8);
    func_0028EB40(D_00470960, 1, func_002EC9B0, 0);
}
