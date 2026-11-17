#include "common.h"

typedef struct ResultEntry {
    s8 b[8];
    s32 w;
} ResultEntry;

typedef struct ResultArg {
    s8 idx;
    char pad1[3];
    ResultEntry e;
    char pad10[0x30];
} ResultArg;

typedef struct ResultWork {
    char pad0[0x258];
    ResultEntry e[1];
} ResultWork;

extern s16 D_005C9F04[];
extern u8 D_004DFF96[];
extern u16 D_004E0112[];
extern ResultWork D_005C4150;
extern s8 D_004B4B41[];
extern s8 D_004B4B59[];
extern void func_002E8F00(ResultWork *, s32, s32);

s32 func_00307270(ResultArg *a) {
    s32 ret = -1;
    s16 id = D_005C9F04[0];
    s16 idx = a->idx;
    ResultEntry *e;

    if (id != -1) {
        if (id < 1000) {
            D_004DFF96[id] = 1;
        } else {
            ret = (s16)(id - 1000);
            D_004E0112[0] |= (u16)(1 << ret);
        }
    }
    e = &D_005C4150.e[idx];
    e->b[0] = a->e.b[0];
    e->b[1] = a->e.b[1];
    e->b[2] = a->e.b[2];
    e->b[3] = a->e.b[3];
    e->b[4] = a->e.b[4];
    e->b[5] = a->e.b[5];
    e->b[6] = a->e.b[6];
    e->b[7] = a->e.b[7];
    e->w = a->e.w;
    func_002E8F00(&D_005C4150, D_004B4B41[0], D_004B4B59[0]);
    return ret;
}
typedef struct ResultState {
    char pad0[0x27C];
    s32 f27C;
} ResultState;

typedef struct ResultTask {
    char pad0[0x1C];
    s32 f1C;
} ResultTask;

extern ResultState *D_00470910;
extern void func_002BD400(void *);
extern void func_001F0830(s32, s16);
extern void func_002BD510(void);
extern void func_002BFD90(void);
extern void func_001F0820(void);

void func_00307380(ResultTask *t) {
    ResultArg arg;

    switch (D_00470910->f27C) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        func_002BD400(&arg);
        func_001F0830(0x1B, func_00307270(&arg));
        func_002BD510();
        func_002BFD90();
        func_001F0820();
        t->f1C = 0;
        break;
    }
}
extern void *D_00470984;

void func_00307420(void) {
    D_00470984 = NULL;
}
extern void amTask_Kill(void *);

void func_00307430(void) {
    if (D_00470984 != NULL) {
        amTask_Kill(D_00470984);
        D_00470984 = NULL;
    }
    func_002BD510();
    func_002BFD90();
}
extern char D_0046F9F8[];
extern void func_001F07D0(void);
extern void *amTask_Create(void (*)(ResultTask *), s32, s32, s32, s32, char *);
extern void func_002BD660(s32, s32);

void func_00307470(void) {
    func_001F07D0();
    D_00470984 = amTask_Create(func_00307380, 0, 0xA000, 2, 0x80000, D_0046F9F8);
    func_002BD660(0xB000, 0x80000);
}
