#include "common.h"

/*
 * Recipes (round 4, unblock), what matched here and why:
 *
 * 1. A switch that the original compiles as a beq chain (no jump table): write the cases in the REVERSE of the
 *    compare order (the chain tests the last case first). Case bodies follow the case order. SceneSw_DoneAll (8 cases),
 *    SceneSw_DoneTop and SceneSw_LoadTop use the same shape. A switch with a jump table (`jr` into jtbl_...) stays asm
 *    (func_001EF1E0).
 * 2. A global read as a 16-bit or float word through a %lo offset (lhu, lwc1 with lui) is declared as an array
 *    (`extern u16 X[];`, `extern f32 X[];`), not a scalar (the scalar gives $gp). A global the file already types
 *    differently is read as `*(s16 *)&X` / `*(s8 *)&X`.
 * 3. A value stored and then tested: keep the result in a local (`n = X[0] - 1; X[0] = n; if (n == 0)`) and test
 *    the local; re-reading the global after the store adds a lui and a load (func_001EEAF0).
 * 4. A run of calls with constant arguments and a few global stores (BtbDraw_InitState) matches as written, in order.
 * 5. A 16-byte struct copy through lq/sq: `typedef struct { u8 b[16]; } __attribute__((aligned(16))) T;` and a plain
 *    struct assignment (BtbBg_CreatePlanet, as char_light.c).
 * 6. Give-ups measured in round 4 (not solved): func_001ED020 (2 diffs: the scheduler, not the source order, puts
 *    the `gSceneNext = a0` store in the bnez delay slot; 120 store orders, a comma form and volatile stores all gave 2);
 *    func_001EF090 (the original keeps the unused `v` in $v1: the void form drops it); func_001F5EF0 (9 of 24:
 *    the non-zero arm is reached by a `b` from the beqz, shapes tried give 9 to 10); func_001F7820 (layout of the
 *    flag loop, 0x16C against 0x164 bytes).
 */

/* The game sets a task's function through a NULL test of the function's address. */
#define TASK_SETFUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

typedef struct Task Task;

typedef void (*TaskFunc)(Task *);

struct Task {
    char pad0[0x1C];
    TaskFunc func;
};

typedef struct BtbObj BtbObj;
struct BtbObj {
    char pad0[0x10];
    s32 f10;
    char pad14[0x10];
    BtbObj *next;
    BtbObj *prev;
    char pad2C[0x0C];
    s32 f38;
};

typedef struct BtbSub {
    char pad0[0x8];
    BtbObj *f38;
    void *f3C;
    BtbObj *f40;
    char pad1[0x14];
    BtbObj *f58;
    char pad2[0xC];
    BtbObj *f68;
} BtbSub;

typedef struct BtbItem BtbItem;
struct BtbItem {
    s32 id;
    f32 val;
    s32 pad8;
    s16 kind;
    s16 kind2;
};

typedef struct BtbHolder BtbHolder;
struct BtbHolder {
    char pad0[0x10];
    BtbItem *item;
};

extern void Btl_ClearScene(void);
extern void func_002C3E40(void);
extern void func_0026E3B0(void);
extern void TourMap_Exit(void);
extern void VsMode_Exit(void);
extern void func_00307430(void);
extern void PracMode_Exit(void);
extern void ArenaMode_Exit(void);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);
extern void SceneSw_LoadArena(Task *);
extern void func_003107D0(void);

void SceneSw_CommitTop(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, SceneSw_LoadArena);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            func_003107D0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTop(Task *);
extern void func_002D1CC0(void);
extern s8 D_004B4BB0[];

void SceneSw_DoneTop(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTop);
            switch (gSceneNext) {
            case 24:
                D_004B4BB0[0] = 1;
                func_002D1CC0();
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneTop(Task *);
extern void func_002D1D40(void);

void SceneSw_LoadTop(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneTop);
            switch (gSceneNext) {
            case 0x18:
                func_002D1D40();
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadArena(Task *);
extern void SceneSw_LoadTop(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitTop2(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, SceneSw_LoadArena);
                break;
            case 0x1B:
                TASK_SETFUNC(t, SceneSw_LoadTop);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            func_00307430();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTop2(Task *);
extern void func_002D1CC0(void);
extern void func_003107E0(s32);
extern s8 D_004B4BB0[];
extern s32 gSceneArg;

void SceneSw_DoneTop2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTop2);
            switch (gSceneNext) {
            case 24:
                D_004B4BB0[0] = 1;
                func_002D1CC0();
                break;
            case 27:
                D_004B4BB0[0] = 1;
                func_003107E0(*(s16 *)&gSceneArg);
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneTop2(Task *);
extern void func_002D1D40(void);
extern void func_00310900(void);

void SceneSw_LoadTop2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneTop2);
            switch (gSceneNext) {
            case 24:
                func_002D1D40();
                break;
            case 27:
                func_00310900();
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadArena(Task *);
extern void SceneSw_LoadTop2(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitTop3(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, SceneSw_LoadArena);
                break;
            case 0x1A:
                TASK_SETFUNC(t, SceneSw_LoadTop2);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            Btl_ClearScene();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTop3(Task *);
extern void func_002D1CC0(void);
extern void Result_Start(void);
extern s8 D_004B4BB0[];

void SceneSw_DoneResult(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTop3);
            switch (gSceneNext) {
            case 24:
                D_004B4BB0[0] = 1;
                func_002D1CC0();
                break;
            case 26:
                D_004B4BB0[0] = 1;
                Result_Start();
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneResult(Task *);
extern void func_002D1D40(void);
extern void func_003074C0(void);

void SceneSw_LoadResult(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneResult);
            switch (gSceneNext) {
            case 24:
                func_002D1D40();
                break;
            case 26:
                func_003074C0();
                break;
            case 5:
                break;
            }
        }
    }
}

extern void func_002D1C50(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu(Task *);
extern void SceneSw_LoadResult(Task *);

void SceneSw_CommitMenu(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x17:
                TASK_SETFUNC(t, SceneSw_LoadMenu);
                break;
            case 0x19:
                TASK_SETFUNC(t, SceneSw_LoadResult);
                break;
            }
            func_002D1C50();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitMenu(Task *);
extern void ArenaMode_Start(s32);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s32 gSceneArg;

void SceneSw_DoneArena(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitMenu);
            switch (gSceneNext) {
            case 23:
                D_004B4BB0[0] = 1;
                ArenaMode_Start(*(s8 *)&gSceneArg);
                break;
            case 25:
                D_004B4BB0[0] = 1;
                BtlIntWait_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneArena(Task *);
extern void ArenaMode_Load(void);
extern char D_005C9D80[];
extern void func_001B10D0(char *, s32);

void SceneSw_LoadArena(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneArena);
            switch (gSceneNext) {
            case 23:
                ArenaMode_Load();
                break;
            case 25:
                func_001B10D0(D_005C9D80, 0);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadArena(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitArena(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, SceneSw_LoadArena);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            ArenaMode_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitArena(Task *);
extern void func_002D1CC0(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitArena);
            switch (gSceneNext) {
            case 24:
                D_004B4BB0[0] = 1;
                func_002D1CC0();
                break;
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu(Task *);
extern void func_002D1D40(void);
extern void MainMenu_Load(void);

void SceneSw_LoadMenu(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu);
            switch (gSceneNext) {
            case 0x18:
                func_002D1D40();
                break;
            case 5:
                MainMenu_Load();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitMenu2(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            func_0026E3B0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern s32 gSceneDone;
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_CommitMenu2(Task *);
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitMenu2);
            switch (gSceneNext) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu2(Task *);
extern void MainMenu_Load(void);

void SceneSw_LoadMenu2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu2);
            switch (gSceneNext) {
            case 5:
                MainMenu_Load();
                break;
            }
        }
    }
}

extern s8 D_004B4BB0[];
extern s8 D_004B4B41[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);
extern void func_002E0E50(void);

void SceneSw_CommitMenu3(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            D_004B4B41[0] = 0;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadAll);
            func_002E0E50();
        }
    }
}
extern s8 D_004B4BB0[];
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitMenu3(Task *);
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu3(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitMenu3);
            D_004B4BB0[0] = 0;
            MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu3(Task *);
extern void MainMenu_Load(void);

void SceneSw_LoadMenu3(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu3);
            MainMenu_Load();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu4(Task *);
extern void SceneSw_LoadAll(Task *);
extern void Btl_ClearScene(void);

void SceneSw_CommitPrac(Task *t) {
    s32 v;
    s32 a1;
    s32 a0;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x13:
                TASK_SETFUNC(t, SceneSw_LoadMenu4);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            Btl_ClearScene();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneArg;
extern void func_001EA740(s32);
extern void SceneSw_CommitPrac(Task *);
extern void PracMode_Start(s32, s32);

void SceneSw_DonePrac(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitPrac);
            switch (gSceneNext) {
            case 0x13:
                D_004B4BB0[0] = 1;
                PracMode_Start(*(s16 *)&gSceneArg, 0);
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DonePrac(Task *);
extern void PracMode_Load(void);

void SceneSw_LoadPrac(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DonePrac);
            switch (gSceneNext) {
            case 0x13:
                PracMode_Load();
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu4(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitPrac2(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x13:
                TASK_SETFUNC(t, SceneSw_LoadMenu4);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            Btl_ClearScene();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneArg;
extern void func_001EA740(s32);
extern void SceneSw_CommitPrac2(Task *);
extern void PracMode_Start(s32, s32);

void SceneSw_DonePrac2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitPrac2);
            switch (gSceneNext) {
            case 0x13:
                D_004B4BB0[0] = 1;
                PracMode_Start(*(s16 *)&gSceneArg, 0);
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DonePrac2(Task *);
extern void PracMode_Load(void);

void SceneSw_LoadPrac2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DonePrac2);
            switch (gSceneNext) {
            case 0x13:
                PracMode_Load();
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);
extern void SceneSw_LoadPrac2(Task *);
extern void SceneSw_LoadPrac(Task *);

void SceneSw_CommitPracExit(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            case 0x14:
                TASK_SETFUNC(t, SceneSw_LoadPrac2);
                break;
            case 0x15:
                TASK_SETFUNC(t, SceneSw_LoadPrac);
                break;
            }
            PracMode_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitPracExit(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu4(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitPracExit);
            switch (gSceneNext) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            case 20:
                D_004B4BB0[0] = 1;
                BtlIntWait_Start();
                break;
            case 21:
                D_004B4BB0[0] = 1;
                BtlIntWait_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu4(Task *);
extern void MainMenu_Load(void);
extern void func_001B13F0(s32);
extern s8 D_004B4B41[];
extern s16 D_005C9F02[];

void SceneSw_LoadMenu4(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu4);
            switch (gSceneNext) {
            case 5:
                MainMenu_Load();
                break;
            case 20:
                D_004B4B41[0] = 4;
                func_001B13F0(0);
                break;
            case 21:
                D_004B4B41[0] = 5;
                func_001B13F0(D_005C9F02[0]);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu5(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitTour(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x11:
                TASK_SETFUNC(t, SceneSw_LoadMenu5);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            Btl_ClearScene();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTour(Task *);
extern void TourMap_Start(void);
extern s8 D_004B4BB0[];

void SceneSw_DoneTour(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTour);
            switch (gSceneNext) {
            case 17:
                D_004B4BB0[0] = 1;
                TourMap_Start();
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneTour(Task *);
extern void func_00304FB0(s32);
extern s32 gSceneArg;

void SceneSw_LoadTour(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneTour);
            switch (gSceneNext) {
            case 17:
                func_00304FB0(gSceneArg);
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadTour(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitTourExit(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x12:
                TASK_SETFUNC(t, SceneSw_LoadTour);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            TourMap_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTourExit(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu5(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTourExit);
            switch (gSceneNext) {
            case 18:
                D_004B4BB0[0] = 1;
                BtlIntWait_Start();
                break;
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu5(Task *);
extern void func_001B13F0(s32);
extern void MainMenu_Load(void);

void SceneSw_LoadMenu5(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu5);
            switch (gSceneNext) {
            case 0x12:
                func_001B13F0(3);
                break;
            case 5:
                MainMenu_Load();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu5(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitMenu6(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            case 0x11:
                TASK_SETFUNC(t, SceneSw_LoadMenu5);
                break;
            }
            func_002C3E40();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitMenu6(Task *);
extern void TourMap_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu6(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitMenu6);
            switch (gSceneNext) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            case 17:
                D_004B4BB0[0] = 1;
                TourMap_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu6(Task *);
extern void func_00304FB0(s32);
extern void MainMenu_Load(void);
extern s32 gSceneArg;

void SceneSw_LoadMenu6(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu6);
            switch (gSceneNext) {
            case 5:
                MainMenu_Load();
                break;
            case 0x11:
                func_00304FB0(gSceneArg);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu7(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitVs(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0xE:
                TASK_SETFUNC(t, SceneSw_LoadMenu7);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            }
            Btl_ClearScene();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneArg;
extern void func_001EA740(s32);
extern void SceneSw_CommitVs(Task *);
extern void func_00269820(s32, s32);

void SceneSw_DoneVs(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitVs);
            switch (gSceneNext) {
            case 0xE:
                D_004B4BB0[0] = 1;
                func_00269820(*(s16 *)&gSceneArg, 0);
                break;
            case 5:
                func_001EA740(5);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneVs(Task *);
extern void VsMode_Load(void);

void SceneSw_LoadVs(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneVs);
            switch (gSceneNext) {
            case 14:
                VsMode_Load();
                break;
            case 5:
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadVs(Task *);
extern void SceneSw_LoadAll(Task *);

void SceneSw_CommitVs2(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            case 0xF:
                TASK_SETFUNC(t, SceneSw_LoadVs);
                break;
            }
            VsMode_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitVs2(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu7(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitVs2);
            switch (gSceneNext) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            case 15:
                D_004B4BB0[0] = 1;
                BtlIntWait_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu7(Task *);
extern void func_001B13F0(s32);
extern void MainMenu_Load(void);

void SceneSw_LoadMenu7(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu7);
            switch (gSceneNext) {
            case 5:
                MainMenu_Load();
                break;
            case 0xF:
                func_001B13F0(0);
                break;
            }
        }
    }
}

// differs: the two stores to gSceneNext and gSceneQueued come in the other order (the compiler puts the -1 store before the table pointer store)

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu8(Task *);
extern void func_0030F0E0(s32, s32);

void func_001ED020(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadMenu8);
            func_0030F0E0(a0, a1);
        }
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED020);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void func_001ED020(Task *);
extern void StrTitle_Start(void);

void SceneSw_DoneStrTitle(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, func_001ED020);
            D_004B4BB0[0] = 1;
            StrTitle_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneStrTitle(Task *);
extern void StrTitle_Load(void);

void SceneSw_LoadStrTitle(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneStrTitle);
            StrTitle_Load();
        }
    }
}
// differs: same two-store order as func_001ED020

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadStrTitle(Task *);
extern void func_003070A0(s32, s32);

void SceneSw_CommitStrTitle(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadStrTitle);
            func_003070A0(a0, a1);
        }
    }
}
#endif

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadStrTitle(Task *);
extern void func_003070A0(void);

void SceneSw_CommitStrTitle(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadStrTitle);
            func_003070A0();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitStrTitle(Task *);
extern void StaffRoll_Start(void);

void SceneSw_DoneStaff(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitStrTitle);
            D_004B4BB0[0] = 1;
            StaffRoll_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneStaff(Task *);
extern void func_0030F260(void);

void SceneSw_LoadStaff(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneStaff);
            func_0030F260();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu8(Task *);
extern void amTask_Kill(s32);
extern s32 D_0047061C;


void SceneSw_CommitKill(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadMenu8);
            if (D_0047061C != 0) {
                amTask_Kill(D_0047061C);
            }
            D_0047061C = 0;
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitKill(Task *);
extern void StrTitle_Start(void);

void SceneSw_DoneStrTitle2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitKill);
            D_004B4BB0[0] = 1;
            StrTitle_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneStrTitle2(Task *);
extern void StrTitle_Load(void);

void SceneSw_LoadStrTitle2(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneStrTitle2);
            StrTitle_Load();
        }
    }
}
extern void func_002ECAC0(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadStrTitle4(Task *);

void SceneSw_CommitFlight(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x8:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle4);
                break;
            }
            func_002ECAC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_CommitFlight(Task *);
extern void Flight_Start(void);

void SceneSw_DoneFlight(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitFlight);
            switch (gSceneNext) {
            case 8:
                D_004B4BB0[0] = 1;
                Flight_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneFlight(Task *);
extern void Flight_Load(void);

void SceneSw_LoadFlight(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneFlight);
            switch (gSceneNext) {
            case 8:
                Flight_Load();
                break;
            }
        }
    }
}

extern void Btl_ClearScene(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu8(Task *);
extern void SceneSw_LoadStrTitle4(Task *);
extern void SceneSw_LoadStrTitle2(Task *);
extern void SceneSw_LoadFlight(Task *);

void SceneSw_CommitStrTitle3(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, SceneSw_LoadMenu8);
                break;
            case 0x8:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle4);
                break;
            case 0xD:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle2);
                break;
            case 0xA:
                TASK_SETFUNC(t, SceneSw_LoadFlight);
                break;
            }
            Btl_ClearScene();
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED880);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void func_001ED880(Task *);
extern void StrTitle_Load(void);
extern void Flight_Load(void);
extern void func_002ECB90(void);

void SceneSw_LoadStrTitle3(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, func_001ED880);
            switch (gSceneNext) {
            case 6:
                StrTitle_Load();
                break;
            case 8:
                Flight_Load();
                break;
            case 0xD:
                break;
            case 0xA:
                func_002ECB90();
                break;
            }
        }
    }
}

extern void Flight_Exit(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu8(Task *);
extern void SceneSw_LoadStrTitle3(Task *);
extern void SceneSw_LoadStaff(Task *);
extern void SceneSw_LoadStrTitle(Task *);

void SceneSw_CommitFlightExit(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, SceneSw_LoadMenu8);
                break;
            case 0x9:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle3);
                break;
            case 0xB:
                TASK_SETFUNC(t, SceneSw_LoadStaff);
                break;
            case 0xC:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle);
                break;
            }
            Flight_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitFlightExit(Task *);
extern void StrTitle_Start(void);
extern void func_002A8E40(void);
extern void Shenron_Start(void);
extern void StaffRoll_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneStrTitle3(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitFlightExit);
            switch (gSceneNext) {
            case 6:
                D_004B4BB0[0] = 1;
                StrTitle_Start();
                break;
            case 9:
                D_004B4BB0[0] = 1;
                func_002A8E40();
                break;
            case 11:
                D_004B4BB0[0] = 1;
                Shenron_Start();
                break;
            case 12:
                D_004B4BB0[0] = 1;
                StaffRoll_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneStrTitle3(Task *);
extern void StrTitle_Load(void);
extern void func_003071C0(void);
extern void func_0030F260(void);

void SceneSw_LoadStrTitle4(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneStrTitle3);
            switch (gSceneNext) {
            case 6:
                StrTitle_Load();
                break;
            case 9:
                break;
            case 11:
                func_003071C0();
                break;
            case 12:
                func_0030F260();
                break;
            }
        }
    }
}

extern void StrSelect_Exit(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadMenu8(Task *);
extern void SceneSw_LoadStrTitle4(Task *);

void SceneSw_CommitStrSelect(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, SceneSw_LoadMenu8);
                break;
            case 0x8:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle4);
                break;
            }
            StrSelect_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitStrSelect(Task *);
extern void StrTitle_Start(void);
extern void Flight_Start(void);
extern s8 D_004B4BB0[];

void SceneSw_DoneStrSelect(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitStrSelect);
            switch (gSceneNext) {
            case 6:
                D_004B4BB0[0] = 1;
                StrTitle_Start();
                break;
            case 8:
                D_004B4BB0[0] = 1;
                Flight_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneStrSelect(Task *);
extern void StrTitle_Load(void);
extern void Flight_Load(void);

void SceneSw_LoadStrSelect(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneStrSelect);
            switch (gSceneNext) {
            case 6:
                StrTitle_Load();
                break;
            case 8:
                Flight_Load();
                break;
            }
        }
    }
}

extern void func_0029CCC0(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);
extern void SceneSw_LoadStrSelect(Task *);
extern void SceneSw_LoadStrTitle4(Task *);

void SceneSw_CommitMenu8(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, SceneSw_LoadAll);
                break;
            case 0x7:
                TASK_SETFUNC(t, SceneSw_LoadStrSelect);
                break;
            case 0x8:
                TASK_SETFUNC(t, SceneSw_LoadStrTitle4);
                break;
            }
            func_0029CCC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitMenu8(Task *);
extern void StrSelect_Start(s32);
extern void Flight_Start(void);
extern s32 gSceneArg;
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void SceneSw_DoneMenu8(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitMenu8);
            switch (gSceneNext) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            case 7:
                D_004B4BB0[0] = 1;
                StrSelect_Start(gSceneArg);
                break;
            case 8:
                D_004B4BB0[0] = 1;
                Flight_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_DoneMenu8(Task *);
extern void MainMenu_Load(void);
extern void StrSelect_Load(void);
extern void Flight_Load(void);

void SceneSw_LoadMenu8(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneMenu8);
            switch (gSceneNext) {
            case 5:
                MainMenu_Load();
                break;
            case 7:
                StrSelect_Load();
                break;
            case 8:
                Flight_Load();
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE320);
extern void StrTitle_Start(void);
extern void TourMode_Start(void);
extern void PracMode_Start(s32, s32);
extern void Option_Start(void);
extern void Ess_Start(void);
extern void Title_Start(s32);
extern void ArenaMode_Start(s32);
extern void func_00269820(s32, s32);
extern void func_001EE320(Task *);
void SceneSw_DoneAll(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, func_001EE320);
            switch (gSceneNext) {
            case 6:
                D_004B4BB0[0] = 1;
                StrTitle_Start();
                break;
            case 0x10:
                D_004B4BB0[0] = 1;
                TourMode_Start();
                break;
            case 0x13:
                { D_004B4BB0[0] = 1; PracMode_Start(*(s16 *)&gSceneArg, 0); }
                break;
            case 0x1C:
                D_004B4BB0[0] = 0;
                Option_Start();
                break;
            case 0x16:
                D_004B4BB0[0] = 1;
                Ess_Start();
                break;
            case 4:
                { D_004B4BB0[0] = 0; Title_Start(*(s16 *)&gSceneArg); }
                break;
            case 0xE:
                { D_004B4BB0[0] = 1; func_00269820(*(s16 *)&gSceneArg, 0); }
                break;
            case 0x17:
                D_004B4BB0[0] = 1;
                ArenaMode_Start(*(s8 *)&gSceneArg);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneAll(Task *);
extern void StrTitle_Load(void);
extern void TourMode_Load(void);
extern void PracMode_Load(void);
extern void func_002E18D0(void);
extern void func_0026E4A0(void);
extern void Title_Load(void);
extern void VsMode_Load(void);
extern void ArenaMode_Load(void);

void SceneSw_LoadAll(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneAll);
            switch (gSceneNext) {
            case 6:
                StrTitle_Load();
                break;
            case 16:
                TourMode_Load();
                break;
            case 19:
                PracMode_Load();
                break;
            case 28:
                func_002E18D0();
                break;
            case 22:
                func_0026E4A0();
                break;
            case 4:
                Title_Load();
                break;
            case 14:
                VsMode_Load();
                break;
            case 23:
                ArenaMode_Load();
                break;
            }
        }
    }
}

extern void Title_Exit(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004B4B68[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void func_001EECD0(Task *);
extern void func_001EEAF0(Task *);

void SceneSw_CommitTitle(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            switch (D_004B4B40[0]) {
            case 2:
                D_004B4B68[0] = 0x2BC;
                TASK_SETFUNC(t, func_001EECD0);
                break;
            case 3:
                D_004B4B68[0] = 0x76C;
                TASK_SETFUNC(t, func_001EEAF0);
                break;
            }
            Title_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitTitle(Task *);
extern void Opening_Start(void);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];

void SceneSw_DoneTitle(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitTitle);
            switch (gSceneNext) {
            case 2:
                D_004B4BB0[0] = 0;
                Opening_Start();
                break;
            case 3:
                D_004B4BB0[0] = 0;
                BtlIntWait_Start();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneTitle(Task *);
extern void Opening_Init(void);
extern void func_001EA480(void);

void SceneSw_LoadTitle(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneTitle);
            switch (gSceneNext) {
            case 2:
                Opening_Init();
                break;
            case 3:
                func_001EA480();
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void Fade_SetRequest();
extern void Scene_MarkDone();

void func_001EEA90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            func_001EA740(4);
        }
    }
}
extern void SoundRpc_SetVolume(f32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern f32 D_004E0614[];
void func_001EEAF0(Task *t) {
    s32 v;
    s32 n;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if ((D_00492FCE[0] | D_00493086[0]) & 8) {
            SoundRpc_SetVolume(D_004E0614[0], 0, 0);
            if (D_004E0614[0] > 0.0f) {
                SoundRpc_Send3(0, 0, 0, 0);
            }
            TASK_SETFUNC(t, func_001EEA90);
            Fade_SetRequest(-1, Scene_MarkDone, 0);
        } else {
            n = D_004B4B68[0] - 1; D_004B4B68[0] = n;
            if (n == 0) {
                TASK_SETFUNC(t, func_001EEA90);
                Fade_SetRequest(-1, Scene_MarkDone, 0);
            } else if (gSceneNext != -1) {
                TASK_SETFUNC(t, func_001EEA90);
                Fade_SetRequest(-1, Scene_MarkDone, 0);
            }
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneDone;
extern void func_001EA740(s32);

void func_001EEC70(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            func_001EA740(4);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void func_001EEC70(Task *);

void func_001EECD0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, func_001EEC70);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void func_001EECD0(Task *);
extern void Logomark_Free(void);

void SceneSw_CommitLogomark(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, func_001EECD0);
            Logomark_Free();
        }
    }
}
extern s8 D_004B4BB0[];
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitLogomark(Task *);
extern void Opening_Start(void);

void SceneSw_DoneOpening(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitLogomark);
            D_004B4BB0[0] = 0;
            Opening_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneOpening(Task *);
extern void Opening_Init(void);

void SceneSw_LoadOpening(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneOpening);
            Opening_Init();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadOpening(Task *);
extern void Boot_Exit(void);

void SceneSw_CommitBoot(Task *t) {
    s32 v;
    s32 a0;
    s32 a1;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneReady != 0) {
            a1 = gSceneNext;
            a0 = gSceneQueued;
            gSceneReady = 0;
            gSceneDone = 0;
            D_004B4B40[0] = a1;
            gSceneNext = a0;
            gSceneQueued = -1;
            TASK_SETFUNC(t, SceneSw_LoadOpening);
            Boot_Exit();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 gSceneDone;
extern void func_001EA740(s32);
extern void SceneSw_CommitBoot(Task *);
extern void Logomark_Start(void);

void SceneSw_DoneLogomark(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneDone != 0) {
            TASK_SETFUNC(t, SceneSw_CommitBoot);
            D_004B4BB0[0] = 0;
            Logomark_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 gSceneNext;
extern void func_001EA740(s32);
extern void SceneSw_DoneLogomark(Task *);
extern void Logomark_Load(void);

void SceneSw_LoadLogomark(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (gSceneNext != -1) {
            TASK_SETFUNC(t, SceneSw_DoneLogomark);
            Logomark_Load();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern void func_001EA740(s32);

// differs: the original keeps the flag in v1 and returns nothing (dead flag); a return of v gives v0 (4 of 15 differ)
#if 0
s32 func_001EF090(void) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    return v;
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF090);
extern void func_0020A150(void);
extern void func_0022DB90(s32);

void func_001EF0D0(void) {
    func_0020A150();
    func_0022DB90(0);
}
extern s32 amGs_SetReg32(s32, s32);
extern void amGs_SetReg64(s32, s32);
extern void amGs_SetReg64b(s32, s32);
extern void amVram_Apply(s32);
extern void amMtxStack_Init(void);
extern void amDraw_SetScissor(void *, s32);
extern void func_00133780(s32, s32);
extern void func_00133980(f32, f32, f32, f32);
extern void func_00133CE0(s32);
extern void func_0013AFA0(s32);
extern void func_00133420(s32);
extern void func_00131B90(void *);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(void *);
extern void func_001482C0(s32);
extern u8 D_003F0800[];
extern s32 D_00470250;
extern s32 D_0046FD20;
extern s32 D_00470238;
void BtbDraw_InitState(void) {
    u8 buf[0x60];

    amGs_SetReg32(2, 0x5040A);
    func_00133780(2, 0);
    amGs_SetReg64(2, 0x44);
    amGs_SetReg64b(2, 5);
    D_00470250 = 0;
    D_0046FD20 = -1;
    func_00133980(1.0f, 1.0f, 1.0f, 1.0f);
    amVram_Apply(2);
    D_00470238 = 0;
    func_00133CE0(0);
    amMtxStack_Init();
    func_0013AFA0(0);
    func_00133420(1);
    func_00131B90(buf);
    func_00131F00(buf, 0.0f, 0.0f);
    func_00132DF0(D_003F0800);
    amDraw_SetScissor(0, 0);
    func_001482C0(1);
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF1E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF510);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF730);
typedef struct BtbEntry {
    char pad0[0x8];
    s32 f08;
    char pad0C[0x34];
    u8 f40;
    u8 f41;
    u8 f42;
    u8 f43;
    u8 f44;
    u8 f45;
    s16 f46;
    s32 f48;
    s32 f4C;
    s32 f50;
} BtbEntry;

extern u32 func_0012EAE0(s32);

void BtbEntry_DecodeColors(BtbEntry *e, u8 *src) {
    e->f08 = func_0012EAE0(src[3] & 0x1F);
    e->f40 = src[7];
    e->f41 = src[6];
    e->f42 = src[5];
    e->f43 = src[3];
    e->f44 = src[2];
    e->f45 = src[1];
    e->f46 = func_0012EAE0(src[1] & 0x1F);
    e->f48 = func_0012EAE0(src[2] & 0x1F);
    e->f4C = func_0012EAE0(src[5] & 0x1F);
    e->f50++;
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF930);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EFDB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0280);
extern u64 D_00511440[];

u64 StrSelect_TestFlag(s32 a0) {
    return D_00511440[0] & (1 << a0);
}
extern u64 D_00511440[];

void func_001F04E0(s32 a0) {
    D_00511440[0] &= ~(s64)(1 << a0);
}
extern u64 D_00511440[];

void func_001F0510(s32 a0) {
    D_00511440[0] |= 1 << a0;
}
typedef struct Copy16B {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16B;
extern s32 D_004E6560[];
extern s32 D_004B4C00[];
extern Copy16B D_004E65E0[];
extern Copy16B D_004B4C80[];
extern u64 D_00511440[];
extern s32 D_00511448[];
extern s32 D_0051144C[];
extern s8 D_00511450[];
extern u64 D_004DFAE0[];
extern s32 D_004DFAE8[];
extern s32 D_004DFAEC[];
extern s8 D_004DFAF0[];
extern s8 D_00511451[];
extern s8 D_004DFAF1[];
extern s8 D_00511479[];
extern s8 D_004DFB19[];
extern s8 D_004B4B65[];

// differs: copy loops: loops 1, 2 and the scalar copies match; loops 3 and 4 get other registers (original src a3 dst a2 count a1, then a1/a0/a2); 56 of 76 differ with declaration variants
#if 0
void func_001F0530(void) {
    s32 *s;
    s32 *d;
    s32 n;
    Copy16B *s2;
    Copy16B *d2;
    u64 q;
    s32 w;
    s32 x;
    s8 y;
    s8 *c3;
    s8 *e3;
    s32 n3;
    s8 *c4;
    s8 *e4;
    s32 n4;

    s = D_004E6560;
    d = D_004B4C00;
    n = 0x10;
    do {
        d[0] = s[0];
        d[1] = s[1];
        s += 2;
        d += 2;
        n--;
    } while (n > 0);

    s2 = D_004E65E0;
    d2 = D_004B4C80;
    n = 0x1573;
    do {
        d2[0] = s2[0];
        d2[1] = s2[1];
        s2 += 2;
        d2 += 2;
        n--;
    } while (n > 0);

    q = D_00511440[0];
    w = D_00511448[0];
    x = D_0051144C[0];
    y = D_00511450[0];
    D_004DFAE0[0] = q;
    D_004DFAE8[0] = w;
    D_004DFAEC[0] = x;
    D_004DFAF0[0] = y;

    c3 = D_00511451;
    e3 = D_004DFAF1;
    n3 = 0x14;
    do {
        e3[0] = c3[0];
        e3[1] = c3[1];
        c3 += 2;
        e3 += 2;
        n3--;
    } while (n3 > 0);

    c4 = D_00511479;
    e4 = D_004DFB19;
    n4 = 0x130;
    do {
        e4[0] = c4[0];
        e4[1] = c4[1];
        c4 += 2;
        e4 += 2;
        n4--;
    } while (n4 > 0);

    D_004B4B65[0] = 1;
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0530);
typedef struct BtbSaveState {
    u64 f0;
    s32 f8;
    s32 fC;
    s8 f10;
} BtbSaveState;

typedef struct BtbPair8 {
    s32 a, b;
} BtbPair8;

typedef struct BtbPair2 {
    s8 a, b;
} BtbPair2;

typedef struct BtbBlk32 {
    s32 a, b, c, d, e, f, g, h;
} __attribute__((aligned(16))) BtbBlk32;

/* The state block the battle hands over to the stage: 8-, 32- and 2-byte block copies, then a 17-byte struct. */
/* differs: 203 of 204: the loops are unrolled here; the original keeps one iteration (lw/lw/sw/sw, lq/lq/sq/sq,
   lb/lb/sb/sb) with a single `addiu $a1,-1` and `bgtz`. Tried: byte counters in the for clause (folds to one -8
   counter), post-increment struct copies (FPU lwc1/swc1 for the 8-byte ones), member-by-member with the counter
   in the for clause (unrolled), do/while. The 17-byte struct copy at the end is a member copy (ld/lw/lw/lb). */
#if 0
void func_001F0660(void) {
    s32 n;
    BtbPair8 *s1 = (BtbPair8 *)D_004B4C00;
    BtbPair8 *d1 = (BtbPair8 *)D_004E6560;
    BtbBlk32 *s2 = (BtbBlk32 *)D_004B4C80;
    BtbBlk32 *d2 = (BtbBlk32 *)D_004E65E0;
    BtbPair2 *s3 = (BtbPair2 *)D_004DFAF1;
    BtbPair2 *d3 = (BtbPair2 *)D_00511451;
    BtbPair2 *s4 = (BtbPair2 *)D_004DFB19;
    BtbPair2 *d4 = (BtbPair2 *)D_00511479;

    for (n = 16; n > 0; n--) {
        d1->a = s1->a;
        d1->b = s1->b;
        s1++;
        d1++;
    }
    for (n = 0x1573; n > 0; n--) {
        *d2 = *s2;
        s2++;
        d2++;
    }
    *(BtbSaveState *)(void *)D_00511440 = *(BtbSaveState *)(void *)D_004DFAE0;
    for (n = 0x14; n > 0; n--) {
        d3->a = s3->a;
        d3->b = s3->b;
        s3++;
        d3++;
    }
    for (n = 0x130; n > 0; n--) {
        d4->a = s4->a;
        d4->b = s4->b;
        s4++;
        d4++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0660);
extern s8 D_004B4BB0[];

void Save_ClearBusy(void) {
    D_004B4BB0[0] = 0;
}
extern s8 D_004B4BB0[];

void Save_SetBusy(void) {
    D_004B4BB0[0] = 1;
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];

void func_001F07B0(s32 a0) {
    D_004B4BB2[0] = a0;
    D_004B4BB1[0] = 1;
}
extern s32 gSceneReady;

void Scene_SetReady(void) {
    gSceneReady = 1;
}
extern s32 gSceneDone;
extern void func_002641D0(void);

void func_001F07E0(void) {
    func_002641D0();
    gSceneDone = 1;
}
extern void Fade_SetRequest();
extern void Scene_MarkDone(void);

void Scene_FadeTo(s32 a0, s32 a1) {
    Fade_SetRequest(a0, Scene_MarkDone, a1);
}
extern s32 gSceneDone;

void Scene_MarkDone(void) {
    gSceneDone = 1;
}
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern s32 gSceneArg;

void Scene_Request(s32 a0, s32 a1) {
    if (gSceneNext == -1) {
        gSceneNext = a0;
    } else {
        gSceneQueued = a0;
    }
    gSceneArg = a1;
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0860);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0A50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0E20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1190);
#if 0
extern void amHeap_Free(void *);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern f32 D_0051CD24[];
extern void amMotion_Apply(char *, f32, f32);

typedef struct BtbAcc {
    char pad0[0xC];
    void *fC;
    char pad10[0x4];
    char *f14;
    char pad18[0x18];
    s32 f30;
    f32 f34;
    f32 f38;
} BtbAcc;

void func_001F1380(BtbObj *o) {
    BtbAcc *s = (BtbAcc *)((char *)o + 0x30);
    s32 i;
    f32 f1;

    if (!(D_0051CD24[0] < 0.0f)) {
        f1 = s->f38 + D_0051CD24[0];
        s->f38 = f1;
        if (!(f1 < s->f34)) {
            if (f1 > (f32)s->f30) {
                amHeap_Free(s->f14);
                amHeap_Free(s->fC);
                for (i = 0; i < 0x100; i++) {
                    if (D_0051C770[i] == o) {
                        o->prev->next = o->next;
                        o->next->prev = o->prev;
                        D_0051C770[i] = NULL;
                        D_0047062C--;
                        break;
                    }
                }
            } else {
                *(f32 *)(s->f14 + 0x424) = f1;
                amMotion_Apply(s->f14, 0.0f, 1.0f);
            }
        }
    }
}
#endif
// differs: func_001F1380: 1 of 65 instructions: the table loop's break jumps straight to the join (b 0x1F1470); the original jumps to the loop-exit trampoline (b 0x1F1450). A while loop gives the same; a for with i = 0x100 instead of break gives 0xFC bytes (0x110 needed).
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1380);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1490);

extern void amHeap_Free(void *);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F1600(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f40);
    if (s->f40->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
        amHeap_Free(s->f3C);
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F16B0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1770);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1890);

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void BtbObj_ReleaseSub68(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f68);
    if (s->f68->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1AB0);

extern void amHeap_Free(void *);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F1C30(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f40);
    if (s->f40->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
        amHeap_Free(s->f3C);
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1CE0);

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F1EA0(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f58);
    if (s->f58->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
    }
}


extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

extern void amModel_SetCurrent(s32, s32);
extern void *BtbBg_GetStageModel(void);
extern void func_00133D80(s32);
extern void func_00133D90(f32);
extern void func_00208D70(s32);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern s32 gBattle;
extern s32 D_0047064C;
extern s32 D_00470238;
extern f32 D_0051CCD0[];

void func_001F1F50(char *a0) {
    char *s1;
    char *s0;
    s32 fl;
    s32 fl2;

    s1 = a0;
    s0 = s1 + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(s1 + 0x54), 0x2003000);
    fl = *(s32 *)(s1 + 0x20);
    if ((fl & 0x800) || (fl & 0x8000)) {
        if (*(s32 *)(s1 + 0x30) != 0) {
            __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(BtbBg_GetStageModel()), "r"(D_0051CCD0) : "memory");
            D_0051CCD0[3] = 1.0f;
            D_0047064C = (s32)D_0051CCD0;
        }
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((char *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((char *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_00208D70(*(s32 *)(s0 + 0x28));
    fl2 = *(s32 *)(s1 + 0x20);
    if ((fl2 & 0x800) || (fl2 & 0x8000)) {
        D_0047064C = 0;
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}

void func_001F20A0(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f58);
    if (s->f58->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
    }
}

void func_001F2150(char *a0) {
    char *s1;
    char *s0;
    s32 fl;
    s32 fl2;

    s1 = a0;
    s0 = s1 + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(s1 + 0x34), 0x2003000);
    fl = *(s32 *)(s1 + 0x20);
    if ((fl & 0x800) || (fl & 0x8000)) {
        if (*(s32 *)(s1 + 0x30) != 0) {
            __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(BtbBg_GetStageModel()), "r"(D_0051CCD0) : "memory");
            D_0051CCD0[3] = 1.0f;
            D_0047064C = (s32)D_0051CCD0;
        }
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((char *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((char *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_00208D70(*(s32 *)(s0 + 8));
    fl2 = *(s32 *)(s1 + 0x20);
    if ((fl2 & 0x800) || (fl2 & 0x8000)) {
        D_0047064C = 0;
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void BtbObj_ReleaseSub38(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->f38);
    if (s->f38->f38 < 0) {
        for (i = 0; i < 0x100; i++) {
            if (D_0051C770[i] == o) {
                o->prev->next = o->next;
                o->next->prev = o->prev;
                D_0051C770[i] = NULL;
                D_0047062C--;
                break;
            }
        }
    }
}

extern void func_00208D60(s32);

void func_001F2350(char *a0) {
    char *s1;
    char *s0;
    s32 a34;
    s32 fl;
    s32 fl2;

    s1 = a0;
    s0 = s1 + 0x30;
    a34 = *(s32 *)(s1 + 0x34);
    if (a34 != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(a34, 0x2004000);
    }
    fl = *(s32 *)(s1 + 0x20);
    if ((fl & 0x800) || (fl & 0x8000)) {
        if (*(s32 *)(s1 + 0x30) != 0) {
            __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(BtbBg_GetStageModel()), "r"(D_0051CCD0) : "memory");
            D_0051CCD0[3] = 1.0f;
            D_0047064C = (s32)D_0051CCD0;
        }
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((char *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((char *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_00208D60(*(s32 *)s0);
    func_00208D70(*(s32 *)(s0 + 8));
    fl2 = *(s32 *)(s1 + 0x20);
    if ((fl2 & 0x800) || (fl2 & 0x8000)) {
        D_0047064C = 0;
        if (!(*(f32 *)((char *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}

extern f32 D_0051CD24[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void BtbObj_ReleaseSub38Timed(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    if (D_0051CD24[0] > 0.0f) {
        func_00208F70(s->f38);
        if (s->f38->f38 < 0) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == o) {
                    o->prev->next = o->next;
                    o->next->prev = o->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2570);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2760);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2A90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2CB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2FD0);
// differs: func_001F3180: 8 of 89 instructions differ (size 0x164 right): the operand order of both sums and the andi/sll/lwc1 schedule, the register of the object pointer (v1 here, a0 in the original). Tried 24 declaration orders, the shift as its own statement.
#if 0
extern f32 func_002CFDD0(s32, f32, f32);
extern void func_002D0110(s32, f32, s32);
extern void func_002D04A0(s32);

void func_001F5CB0(BtbHolder *h) {
    BtbItem *it;
    f32 f;

    it = h->item;
    f = D_0051CD24[0];
    if (f >= 0.0f) {
        if (it->id != 0) {
            func_002D04A0(it->kind2);
            func_002D0110(h->item->id, h->item->val, 0);
            func_002D04A0(0);
        }
        if (it->kind != 0) {
            it->val = func_002CFDD0(it->id, it->val, f);
        }
    }
}

extern f32 D_0051CD24[];
extern void amMotSet_Apply(void *, f32, s32);

// differs: float motion step: the original schedules the s0 field loads and the float constant load around the amMotSet_Apply call with nops in the branch slots (the scheduling differs from the C order)


extern f32 D_0051CD24[];
extern void amMotion_Apply(char *, f32, f32);

// differs: 44 of 53 instructions (the first branch's target, the loads of s->obj and the packed frame index)


extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];

// differs: size 0x4C instead of 0x60. The original keeps the a0 != 0 arm out of line (beqz, then b, then two nops
// and the arm after the other one); the if/else and early-return shapes tried give the same 19 instructions

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveFromList(BtbObj *o) {
    s32 i;

    for (i = 0; i < 0x100; i++) {
        if (D_0051C770[i] == o) {
            o->prev->next = o->next;
            o->next->prev = o->prev;
            D_0051C770[i] = NULL;
            D_0047062C--;
            break;
        }
    }
}
extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

// differs: list walk with frees: the flags word goes to a0 and the mask constant to v1 where the original uses v1 for the flags and v0 for the constant (flags as a local, or != 0 forms: same)

extern void memset(void *, s32, s32);
extern char D_00511770[];
extern BtbObj *D_0051C770[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern s32 D_0047062C;
extern char *D_0051CB94[];
extern char *D_0051CC48[];

void BtbBg_ResetLists(void) {
    D_0047062C = 0;
    memset(D_00511770, 0, 0xB000);
    memset(D_0051C770, 0, 0x400);
    memset(D_0051CB70, 0, 0xB0);
    memset(D_0051CC20, 0, 0xB0);
    D_0051CB94[0] = D_0051CC20;
    D_0051CC48[0] = D_0051CB70;
}
extern char *D_0051CB94[];
extern char D_0051CC20[];

typedef void (*ObjFunc)(char *);

void BtbBg_RunObjMain(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) != 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
void BtbBg_DrawAfterStub(void) {
}
void BtbBg_DrawScrEffectStub(void) {
}
extern char D_0051CC20[];
extern char *D_0051CB94[];

typedef void (*ObjFunc4)(char *);

void BtbBg_RunPostObjs(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x200) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawTrsObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x800) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPostObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x8000) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) == 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPlainObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x880F) == 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern s32 gBattle;

void BtbBg_CrossFadeKill(void) {
    char *p = (char *)gBattle + 0x10000;
    *(s8 *)(p - 0x768B) = 0;
}
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001F6690(void *);
extern char D_00469888[];
extern s32 gBattle;

void BtbBg_StartCrossFade(s32 a0, s32 a1, s32 a2, f32 f12, f32 f13) {
    char *t;

    t = amTask_Create(func_001F6690, (void *)BtbBg_CrossFadeKill, 0x31FF, a2, a1, D_00469888);
    *(s32 *)(t + 0x30) = *(s32 *)(gBattle + 0x238);
    *(s32 *)(t + 0x34) = a0;
    *(s32 *)(t + 0x38) = 0;
    *(s32 *)(t + 0x3C) = 0;
    *(f32 *)(t + 0x40) = f12;
    *(f32 *)(t + 0x44) = f13;
    *(s32 *)(t + 0x48) = 0;
    *(s32 *)(t + 0x4C) = 0;
}
void func_001F6E50(void) {
}

extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByKey(s32 key) {
    BtbObj *n;
    BtbObj *end;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == key) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}

extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByIdx(s32 flag, s32 idx) {
    BtbObj *n;
    BtbObj *end;
    char *v;
    s32 i;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    switch (flag) {
    case 0:
        idx = (s32)(D_0051CD1C[0] + (idx << 5));
        break;
    default:
        idx = (s32)(*(char **)(v + 0xC) + (idx << 5));
        break;
    }
    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == idx) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    return;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void amHeap_Free(void *);
extern void Obj_ResetF38(s32);

void BtbObj_FreeFlag400(void) {
    BtbObj *n;
    BtbObj *end;
    char *sub;
    void *p;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (*(s32 *)((char *)n + 0x20) & 0x400) {
            sub = (char *)n + 0x30;
            p = *(void **)sub;
            if (p != NULL) {
                amHeap_Free(p);
            }
            if (*(s32 *)(sub + 8) != 0) {
                Obj_ResetF38(*(s32 *)(sub + 8));
            }
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
typedef struct { u8 b[16]; } __attribute__((aligned(16))) BtbVec16;
extern BtbVec16 D_0044B510;
extern char D_004698A8[];
extern void func_001F2350();
extern void BtbObj_ReleaseSub38Timed();
extern void func_00209A90(void *, void *);
extern void *amObject_Create(void *, s32);
void BtbBg_CreatePlanet(s32 p) {
    BtbVec16 tmp;
    char *r;
    s32 *s0;
    s32 s2;

    r = func_001F5FD0(0x85000000, D_004698A8, 0, (void *)func_001F2350, (void *)BtbObj_ReleaseSub38Timed);
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x401;
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x400;
    s0 = (s32 *)(r + 0x30);
    s2 = (s32)D_0051CD0C[0];
    s0[1] = (s32)func_001A50F0((void *)s2, 0x7D);
    s0[0] = (s32)amObject_Create(func_001A50F0((void *)s2, 0x7C), 0);
    s0[2] = (s32)func_00209540(func_001A50F0((void *)s2, p + 0x6E), 0x2000001, 0);
    tmp = D_0044B510;
    func_00209A90((void *)s0[2], &tmp);
}
extern void func_001F7210(char *);
extern char *D_0051CD1C[];

void func_001F7470(s32 a0) {
    func_001F7210(D_0051CD1C[0] + (a0 << 5));
}
extern void func_001F7490(s32);

void func_001F7690(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x90);
    s0 = s1 - *(s32 *)(*(char **)(v + 4) + 0x88);
    if (s0 < s1) {
        do {
            func_001F7490(s0);
            s0++;
        } while (s0 < s1);
    }
}

extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern char D_004698C0[];
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void func_001F2FD0(void);
extern void func_001F3180(char *);

// differs: 29 of 65 instructions (the loop's registers and the layout of its test; the constructor call matches)


extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern void func_001F7990(s32);

void func_001F7BF0(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x80);
    s0 = *(s32 *)(*(char **)(v + 4) + 0x84) + s1;
    if (s1 < s0) {
        do {
            func_001F7990(s1);
            s1++;
        } while (s1 < s0);
    }
}
typedef void (*VoidFunc)(void);
extern VoidFunc D_0044B4C0[];
extern s32 D_0051CCE0[];

void BtbBg_RunFunc(void) {
    VoidFunc f = D_0044B4C0[D_0051CCE0[0]];

    if (f != NULL) {
        f();
    }
}

extern f32 func_002CFDD0(s32, f32, f32);
void func_001F3180(char *a0) {
    char *s0;
    char *s1;
    char *t;
    f32 f20;
    s32 s2;
    s32 a1;
    s32 P;
    s32 Q;
    s32 vv;

    s0 = *(char **)(*(char **)(a0 + 0x10) + 0xC);
    if (s0 != NULL) {
        f20 = D_0051CD24[0];
        if (!(f20 < 0.0f)) {
            if (*(s32 *)(s0 + 0x18) != 0) {
                s2 = ((*(s32 *)(s0 + 8) + 1) << 16) | *(s32 *)(s0 + 0x10);
                amMotSet_Apply(*(void **)s0, *(f32 *)(s0 + 4), s2);
                *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) + *(f32 *)(s0 + 0x14) * f20;
                a1 = (((s2 >> 16) - 1)) << 2;
                P = *(s32 *)(*(s32 *)s0 + a1 + 4);
                Q = *(s32 *)(P + 0x14);
                vv = Q + ((s2 & 0xFFFF) << 4);
                if (!(*(f32 *)(s0 + 4) < (f32)*(s32 *)(vv + 8))) {
                    *(s32 *)(s0 + 4) = 0;
                }
            }
        }
    }
    s1 = *(char **)(a0 + 0x10);
    s0 = *(char **)(s1 + 0x10);
    if (s0 != NULL) {
        f20 = D_0051CD24[0];
        if (!(f20 < 0.0f)) {
            if (*(s32 *)s0 != 0) {
                func_002D04A0(*(s16 *)(s0 + 0xE));
                t = *(char **)(s1 + 0x10);
                func_002D0110(*(s32 *)t, *(f32 *)(t + 4), 0);
                func_002D04A0(0);
            }
            if (*(s16 *)(s0 + 0xC) != 0) {
                *(f32 *)(s0 + 4) = func_002CFDD0(*(s32 *)s0, *(f32 *)(s0 + 4), f20);
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3180);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F32F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F34E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3740);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F38F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3A60);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3C10);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern s32 gBattle;
extern s32 D_0047064C;

void BtbObj_CheckDrawFlags(char *o) {
    s32 f;
    char *p;

    f = *(s32 *)(o + 0x20);
    if ((f & 0x800) != 0 || (f & 0x8000) != 0) {
        D_0047064C = 0;
        p = (char *)gBattle;
        p += 0x10000;
        if (*(f32 *)(p - 0x76D4) > 0.0f) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3DF0);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void amHeap_Free(void *);
extern void Obj_ResetF38(s32);

void BtbObj_FreeFlagged(void) {
    BtbObj *n;
    char *sub;
    void *p;
    s32 s;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    if (n == (BtbObj *)D_0051CC20) {
        return;
    }
    do {
        if ((*(s32 *)((char *)n + 0x20) & 0x4800) == 0x4800) {
            sub = (char *)n + 0x30;
            p = *(void **)((char *)n + 0x44);
            if (p != NULL) {
                amHeap_Free(p);
            }
            p = *(void **)(sub + 0xC);
            if (p != NULL) {
                amHeap_Free(p);
            }
            s = *(s32 *)(sub + 0x10);
            if (s != 0) {
                Obj_ResetF38(s);
            }
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
        }
        n = n->next;
    } while (n != (BtbObj *)D_0051CC20);
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3FE0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F41E0);
// differs: func_001F4520: 15 of 85 instructions differ and 8 bytes short (0x13C against 0x144): the flags test, the calls and the struct copy are in order; the store block and the branch layout after the func_00209B50 call differ.
#if 0
extern f32 func_002CFDD0(s32, f32, f32);
extern void func_002D0110(s32, f32, s32);
extern void func_002D04A0(s32);

void func_001F5CB0(BtbHolder *h) {
    BtbItem *it;
    f32 f;

    it = h->item;
    f = D_0051CD24[0];
    if (f >= 0.0f) {
        if (it->id != 0) {
            func_002D04A0(it->kind2);
            func_002D0110(h->item->id, h->item->val, 0);
            func_002D04A0(0);
        }
        if (it->kind != 0) {
            it->val = func_002CFDD0(it->id, it->val, f);
        }
    }
}

extern f32 D_0051CD24[];
extern void amMotSet_Apply(void *, f32, s32);

// differs: float motion step: the original schedules the s0 field loads and the float constant load around the amMotSet_Apply call with nops in the branch slots (the scheduling differs from the C order)


extern f32 D_0051CD24[];
extern void amMotion_Apply(char *, f32, f32);

// differs: 44 of 53 instructions (the first branch's target, the loads of s->obj and the packed frame index)


extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];

// differs: size 0x4C instead of 0x60. The original keeps the a0 != 0 arm out of line (beqz, then b, then two nops
// and the arm after the other one); the if/else and early-return shapes tried give the same 19 instructions

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveFromList(BtbObj *o) {
    s32 i;

    for (i = 0; i < 0x100; i++) {
        if (D_0051C770[i] == o) {
            o->prev->next = o->next;
            o->next->prev = o->prev;
            D_0051C770[i] = NULL;
            D_0047062C--;
            break;
        }
    }
}
extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

// differs: list walk with frees: the flags word goes to a0 and the mask constant to v1 where the original uses v1 for the flags and v0 for the constant (flags as a local, or != 0 forms: same)

extern void memset(void *, s32, s32);
extern char D_00511770[];
extern BtbObj *D_0051C770[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern s32 D_0047062C;
extern char *D_0051CB94[];
extern char *D_0051CC48[];

void BtbBg_ResetLists(void) {
    D_0047062C = 0;
    memset(D_00511770, 0, 0xB000);
    memset(D_0051C770, 0, 0x400);
    memset(D_0051CB70, 0, 0xB0);
    memset(D_0051CC20, 0, 0xB0);
    D_0051CB94[0] = D_0051CC20;
    D_0051CC48[0] = D_0051CB70;
}
extern char *D_0051CB94[];
extern char D_0051CC20[];

typedef void (*ObjFunc)(char *);

void BtbBg_RunObjMain(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) != 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
void BtbBg_DrawAfterStub(void) {
}
void BtbBg_DrawScrEffectStub(void) {
}
extern char D_0051CC20[];
extern char *D_0051CB94[];

typedef void (*ObjFunc4)(char *);

void BtbBg_RunPostObjs(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x200) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawTrsObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x800) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPostObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x8000) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) == 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPlainObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x880F) == 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern s32 gBattle;

void BtbBg_CrossFadeKill(void) {
    char *p = (char *)gBattle + 0x10000;
    *(s8 *)(p - 0x768B) = 0;
}
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001F6690(void *);
extern char D_00469888[];
extern s32 gBattle;

void BtbBg_StartCrossFade(s32 a0, s32 a1, s32 a2, f32 f12, f32 f13) {
    char *t;

    t = amTask_Create(func_001F6690, (void *)BtbBg_CrossFadeKill, 0x31FF, a2, a1, D_00469888);
    *(s32 *)(t + 0x30) = *(s32 *)(gBattle + 0x238);
    *(s32 *)(t + 0x34) = a0;
    *(s32 *)(t + 0x38) = 0;
    *(s32 *)(t + 0x3C) = 0;
    *(f32 *)(t + 0x40) = f12;
    *(f32 *)(t + 0x44) = f13;
    *(s32 *)(t + 0x48) = 0;
    *(s32 *)(t + 0x4C) = 0;
}
void func_001F6E50(void) {
}

extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByKey(s32 key) {
    BtbObj *n;
    BtbObj *end;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == key) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}

extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByIdx(s32 flag, s32 idx) {
    BtbObj *n;
    BtbObj *end;
    char *v;
    s32 i;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    switch (flag) {
    case 0:
        idx = (s32)(D_0051CD1C[0] + (idx << 5));
        break;
    default:
        idx = (s32)(*(char **)(v + 0xC) + (idx << 5));
        break;
    }
    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == idx) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    return;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void amHeap_Free(void *);
extern void Obj_ResetF38(s32);

void BtbObj_FreeFlag400(void) {
    BtbObj *n;
    BtbObj *end;
    char *sub;
    void *p;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (*(s32 *)((char *)n + 0x20) & 0x400) {
            sub = (char *)n + 0x30;
            p = *(void **)sub;
            if (p != NULL) {
                amHeap_Free(p);
            }
            if (*(s32 *)(sub + 8) != 0) {
                Obj_ResetF38(*(s32 *)(sub + 8));
            }
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
typedef struct { u8 b[16]; } __attribute__((aligned(16))) BtbVec16;
extern BtbVec16 D_0044B510;
extern char D_004698A8[];
extern void func_001F2350();
extern void BtbObj_ReleaseSub38Timed();
extern void func_00209A90(void *, void *);
extern void *amObject_Create(void *, s32);
void BtbBg_CreatePlanet(s32 p) {
    BtbVec16 tmp;
    char *r;
    s32 *s0;
    s32 s2;

    r = func_001F5FD0(0x85000000, D_004698A8, 0, (void *)func_001F2350, (void *)BtbObj_ReleaseSub38Timed);
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x401;
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x400;
    s0 = (s32 *)(r + 0x30);
    s2 = (s32)D_0051CD0C[0];
    s0[1] = (s32)func_001A50F0((void *)s2, 0x7D);
    s0[0] = (s32)amObject_Create(func_001A50F0((void *)s2, 0x7C), 0);
    s0[2] = (s32)func_00209540(func_001A50F0((void *)s2, p + 0x6E), 0x2000001, 0);
    tmp = D_0044B510;
    func_00209A90((void *)s0[2], &tmp);
}
extern void func_001F7210(char *);
extern char *D_0051CD1C[];

void func_001F7470(s32 a0) {
    func_001F7210(D_0051CD1C[0] + (a0 << 5));
}
extern void func_001F7490(s32);

void func_001F7690(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x90);
    s0 = s1 - *(s32 *)(*(char **)(v + 4) + 0x88);
    if (s0 < s1) {
        do {
            func_001F7490(s0);
            s0++;
        } while (s0 < s1);
    }
}

extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern char D_004698C0[];
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void func_001F2FD0(void);
extern void func_001F3180(void);

// differs: 29 of 65 instructions (the loop's registers and the layout of its test; the constructor call matches)


extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern void func_001F7990(s32);

void func_001F7BF0(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x80);
    s0 = *(s32 *)(*(char **)(v + 4) + 0x84) + s1;
    if (s1 < s0) {
        do {
            func_001F7990(s1);
            s1++;
        } while (s1 < s0);
    }
}
typedef void (*VoidFunc)(void);
extern VoidFunc D_0044B4C0[];
extern s32 D_0051CCE0[];

void BtbBg_RunFunc(void) {
    VoidFunc f = D_0044B4C0[D_0051CCE0[0]];

    if (f != NULL) {
        f();
    }
}

typedef struct { u8 b[16]; } __attribute__((aligned(16))) BtbVec16b;
extern f32 func_00200270(s32, f32, f32);
extern char D_004697A8[];
void func_001F4520(s32 p0, char *vec, s32 p2, s32 flags) {
    BtbVec16b tmp;
    s32 s2;
    char *s1;
    char *r;

    s32 k;
    char *ptr;
    f32 f;

    s2 = (s32)D_0051CD0C[0];
    k = 0xB;
    if (flags & 4) {
        k += 0x100;
    }
    k += D_0051CD20[0] << 7;
    s1 = NULL;
    ptr = func_001A50F0((char *)s2, k);
    if (ptr != NULL) {
        s1 = func_00209540(ptr, 0x2000001, 0);
    }
    if (s1 != NULL) {
        __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(vec), "r"(&tmp) : "memory");
        f = func_00200270(0, *(f32 *)&tmp.b[0], *(f32 *)&tmp.b[8]);
        *(f32 *)&tmp.b[4] = f;
        func_00209B50(s1, (char *)&tmp, 0);
        r = func_001F5FD0(0x85000000, D_004697A8, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x801;
        *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x800;
        memset(r + 0x30, 0, 0x80);
        *(char **)(r + 0x38) = s1;
        *(s32 *)(r + 0x34) = (s32)func_001A50F0((char *)s2, 0x280);
        *(s32 *)(r + 0x30) = flags & 2;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4520);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4670);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F47C0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4910);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4AD0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4C20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F4E70);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5040);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5210);
// differs: 49 of 72 instructions (one extra callee-saved register: the flag word is kept in s4 and s3 is used too)

#if 0

typedef struct BtbRecA {
    char pad0[0x20];
    s32 f20;
    char pad24[0x14];
    s32 f38;
} BtbRecA;

typedef struct BtbRecB {
    s32 f0;
    void *f4;
} BtbRecB;

extern void *D_0051CD0C[];
extern s32 D_0051CD20[];
extern char D_00469848[];
extern void *func_001A50F0(void *, s32);
extern void *func_00209540(void *, u32, s32);
extern void func_00209B50(void *, s32, s32);
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void func_001F2150(void);
extern void memset(void *, s32, s32);

void func_001F5540(s32 p0, s32 p1, s32 p2, s32 flags) {
    void *s1;
    void *ptr;
    void *s2;
    BtbRecA *r;
    BtbRecB *q;
    s32 a1;

    s2 = D_0051CD0C[0];
    a1 = 3;
    if (flags & 4) {
        a1 += 0x100;
    }
    a1 += D_0051CD20[0] << 7;
    ptr = func_001A50F0(s2, a1);
    s1 = NULL;
    if (ptr != NULL) {
        s1 = func_00209540(ptr, 0x2000001, 0);
    }
    if (s1 != NULL) {
        func_00209B50(s1, p1, 0);
        r = func_001F5FD0(0x85000000, D_00469848, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        r->f20 = r->f20 & -0x801;
        r->f20 = r->f20 | 0x800;
        memset((char *)r + 0x30, 0, 0x80);
        r->f38 = (s32)s1;
        q = (BtbRecB *)((char *)r + 0x30);
        q->f4 = func_001A50F0(s2, 0x280);
        q->f0 = flags & 2;
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5540);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5660);
extern char *func_001A50F0(char *, s32);
extern char *func_00209540(char *, s32, s32);
extern void func_00209B50(char *, char *, s32);
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void memset(void *, s32, s32);
extern char *D_0051CD0C[];
extern s32 D_0051CD20[];
extern char D_00469858[];
extern void func_001F2150(char *);
extern void func_001F1F50(char *);

// differs: constructor: the call func_00209B50(s1, s0, 0) puts a0 = s1 in the delay slot where the original puts a2 = 0 (other argument types tried)
#if 0
void func_001F5830(s32 a0, char *s0, s32 a2, s32 flags) {
    char *s2;
    s32 s1;
    s32 a1;
    char *r;
    char *p;
    char *q;

    s2 = D_0051CD0C[0];
    if ((flags & 4) != 0) {
        a1 = 0x101;
    } else {
        a1 = 1;
    }
    a1 += D_0051CD20[0] << 7;
    s1 = 0;
    r = func_001A50F0(s2, a1);
    if (r != NULL) {
        s1 = (s32)func_00209540(r, 0x2000001, 0);
    }
    if (s1 != 0) {
        func_00209B50((char *)s1, s0, 0);
        p = func_001F5FD0(0x85000000, D_00469858, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) & ~0x800;
        *(s32 *)(p + 0x20) = *(s32 *)(p + 0x20) | 0x800;
        memset(p + 0x30, 0, 0x80);
        *(s32 *)(p + 0x38) = s1;
        q = func_001A50F0(s2, 0x280);
        p = p + 0x30;
        *(char **)(p + 4) = q;
        *(s32 *)p = flags & 2;
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5830);
extern char D_00469868[];
extern char *func_001A50F0(char *, s32);
extern char *func_00209540(char *, s32, s32);
extern void func_00209B50(char *, char *, s32);
#if 0
extern void func_001F2150(void);
extern void BtbObj_ReleaseSub38(BtbObj *);

void func_001F5950(s32 p0, char *p1, s32 p2, s32 flags) {
    char *s0;
    s32 s3;
    char *s1;
    char *ptr;
    char *r;
    s32 s2;
    s32 a1;

    s0 = p1;
    s3 = flags;
    a1 = 0;
    if (flags & 4) {
        a1 += 0x100;
    }
    s2 = (s32)D_0051CD0C[0];
    a1 += D_0051CD20[0] << 7;
    ptr = func_001A50F0((char *)s2, a1);
    s1 = NULL;
    if (ptr != NULL) {
        s1 = func_00209540(ptr, 0x2000001, 0);
    }
    if (s1 != NULL) {
        func_00209B50(s1, s0, 0);
        r = (char *)func_001F5FD0(0x85000000, D_00469868, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x801;
        *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x800;
        memset(r + 0x30, 0, 0x80);
        *(char **)(r + 0x38) = s1;
        *(s32 *)(r + 0x34) = (s32)func_001A50F0((char *)s2, 0x280);
        *(s32 *)(r + 0x30) = s3 & 2;
    }
}
#endif
// differs: func_001F5950: 0x114 against 0x120 bytes (3 instructions short). The original tests flags&4 first, keeps the
// parameter in $s0 (`move s0,a1` before the table lookup) and the 0x20000001 result in $s2. Declaration orders of
// s0/s1/s2/s3 (24 tried, auto), flags-first: none matched.

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5950);
extern void func_002D04A0(s32);
extern void func_002CFDE0(s32);

void func_001F5A70(BtbHolder *h) {
    if (h->item->id != 0) {
        func_002D04A0(h->item->kind2);
        func_002CFDE0(0);
        func_002D04A0(0);
    }
}
extern void func_002D04A0(s32);
extern void func_002D0110(s32, f32, s32);

void func_001F5AB0(BtbHolder *h) {
    if (h->item->id != 0) {
        func_002D04A0(h->item->kind2);
        func_002D0110(h->item->id, h->item->val, 0);
        func_002D04A0(0);
    }
}
void func_001F5B10(char *a, s32 v) {
    s32 i;
    char *p;

    if (0 < *(s32 *)(a + 4)) {
        i = 0;
        p = a;
        do {
            *(s32 *)(p + 8) = v;
            p += 8;
            i++;
        } while (i < *(s32 *)(a + 4));
    }
}
void func_001F5B50(BtbHolder *h) {
    BtbItem *it = h->item;

    if (it != NULL) {
        it->id = 0;
        it->kind = 0;
    }
}
void func_001F5B70(BtbHolder *h) {
    if (h->item != NULL) {
        h->item->kind = 1;
    }
}
extern void amMotSet_Apply(void *, f32, s32);

void BtbObj_ApplyMotSet(char *c) {
    char *s = *(char **)(c + 0xC);

    if (s != NULL) {
        *(s32 *)(s + 0x18) = 1;
        amMotSet_Apply(*(void **)s, *(f32 *)(s + 4), ((*(s32 *)(s + 8) + 1) << 16) | *(s32 *)(s + 0x10));
    }
}
typedef struct MotState {
    char *obj;
    f32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    f32 f14;
    s32 f18;
    f32 f1C;
} MotState;

typedef struct MotCtl {
    char pad0[8];
    MotState *st;
} MotCtl;

typedef struct MotSlot {
    s32 pk;
    char pad4[8];
    s32 fC;
    char *p10;
} MotSlot;

extern void amMotion_Apply(char *, f32, f32);

extern f32 D_0051CD24[];

// differs: motion update: the reloads of the state pointer and the register choice for the -1 constant differ (15 of 49 instructions, last variant tried)
#if 0
extern void amMotion_Apply(char *, f32, f32);

void func_001F5BE0(char *c) {
    char *v1;
    char *P;
    char *a3;
    s32 t1;
    s32 a2;
    s32 a1;

    v1 = *(char **)(c + 0x8);
    if (v1 != NULL) {
        *(s32 *)(v1 + 0x18) = 1;
        t1 = ((*(s32 *)(v1 + 0x8) + 1) << 16) | *(s32 *)(v1 + 0x10);
        P = *(char **)v1;
        if (*(s32 *)(P + 0x41C) != t1) {
            a3 = P + 0x41C;
            if (*(s32 *)(P + 0x418) > 0) {
                a2 = 0;
                a1 = 0;
                do {
                    *(s32 *)(*(char **)(a3 + 0x10) + a1 + 0x30) = -1;
                    *(s32 *)(*(char **)(a3 + 0x10) + a1 + 0x34) = -1;
                    *(s32 *)(*(char **)(a3 + 0x10) + a1 + 0x38) = -1;
                    a2++;
                    a1 += 0x40;
                } while (a2 < *(s32 *)(P + 0x418));
            }
            *(s32 *)(a3 + 0xC) = (s32)0xBF800000;
        }
        *(s32 *)(P + 0x41C) = t1;
        *(f32 *)(*(char **)v1 + 0x424) = *(f32 *)(v1 + 0x4);
        amMotion_Apply(*(char **)v1, 0.0f, *(f32 *)(v1 + 0x1C));
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5BE0);


extern f32 func_002CFDD0(s32, f32, f32);
extern void func_002D0110(s32, f32, s32);
extern void func_002D04A0(s32);

void func_001F5CB0(BtbHolder *h) {
    BtbItem *it;
    f32 f;

    it = h->item;
    f = D_0051CD24[0];
    if (f >= 0.0f) {
        if (it->id != 0) {
            func_002D04A0(it->kind2);
            func_002D0110(h->item->id, h->item->val, 0);
            func_002D04A0(0);
        }
        if (it->kind != 0) {
            it->val = func_002CFDD0(it->id, it->val, f);
        }
    }
}

extern f32 D_0051CD24[];
extern void amMotSet_Apply(void *, f32, s32);

// differs: float motion step: the original schedules the s0 field loads and the float constant load around the amMotSet_Apply call with nops in the branch slots (the scheduling differs from the C order)
#if 0
void func_001F5D50(char *c) {
    char *s0;
    s32 s1;
    s32 idx;
    char *base;
    char *e;
    f32 f0;
    f32 f1;

    s0 = *(char **)(c + 0xC);
    if (D_0051CD24[0] >= 0.0f) {
        if (*(s32 *)(s0 + 0x18) != 0) {
            s1 = ((*(s32 *)(s0 + 0x8) + 1) << 16) | *(s32 *)(s0 + 0x10);
            amMotSet_Apply(*(void **)s0, *(f32 *)(s0 + 0x4), s1);
            *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) + *(f32 *)(s0 + 0x14) * D_0051CD24[0];
            idx = (s1 >> 16) - 1;
            base = *(char **)s0;
            e = *(char **)(*(char **)(base + (idx << 2) + 4) + 0x14);
            e = e + ((s1 & 0xFFFF) << 4);
            f1 = (f32)*(s32 *)(e + 0x8);
            f0 = *(f32 *)(s0 + 0x4);
            if (f0 >= f1) {
                *(s32 *)(s0 + 0x4) = 0;
            }
        }
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5D50);

extern f32 D_0051CD24[];
extern void amMotion_Apply(char *, f32, f32);

// differs: 44 of 53 instructions (the first branch's target, the loads of s->obj and the packed frame index)

#if 0

void func_001F5E20(MotCtl *c) {
    MotState *s;
    char *entry;
    char *tbl;
    s32 pk;
    s32 sub;
    f32 f;

    f = D_0051CD24[0];
    if (f >= 0.0f) {
        s = c->st;
        if (s->f18 != 0) {
            *(f32 *)(s->obj + 0x424) = s->f4;
            amMotion_Apply(s->obj, 0.0f, s->f1C);
            s->f4 = s->f4 + s->f14 * f;
            pk = ((s->f8 + 1) << 16) | s->f10;
            sub = pk & 0xFFFF;
            entry = *(char **)(s->obj + ((pk >> 16) - 1) * 4 + 0x46C);
            tbl = *(char **)(entry + 0x14);
            if (!(s->f4 < (f32)*(s32 *)(tbl + (sub << 4) + 8))) {
                s->f4 = 0.0f;
            }
        }
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5E20);
extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];

// differs: size 0x4C instead of 0x60. The original keeps the a0 != 0 arm out of line (beqz, then b, then two nops
// and the arm after the other one); the if/else and early-return shapes tried give the same 19 instructions
#if 0
s32 *func_001F5EF0(s32 a0, s32 a1) {
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    if (a0 == 0) {
        v = D_0051CD1C[0] + (a1 << 5);
    } else {
        v = *(char **)(v + 0xC) + (a1 << 5);
    }
    return (s32 *)v;
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5EF0);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveFromList(BtbObj *o) {
    s32 i;

    for (i = 0; i < 0x100; i++) {
        if (D_0051C770[i] == o) {
            o->prev->next = o->next;
            o->next->prev = o->prev;
            D_0051C770[i] = NULL;
            D_0047062C--;
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5FD0);
extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

extern void amHeap_Free(void *);
extern char *D_0051CB94[];
extern char D_0051CC20[];

// differs: list walk with frees: the flags word goes to a0 and the mask constant to v1 where the original uses v1 for the flags and v0 for the constant (flags as a local, or != 0 forms: same)
#if 0
void func_001F6140(void) {
    char *o;
    char *s1;
    s32 f;

    o = D_0051CB94[0];
    while (o != D_0051CC20) {
        f = *(s32 *)(o + 0x20);
        if ((f & 0x1800) == 0x1800) {
            if (*(void **)(o + 0x3C) != NULL) {
                amHeap_Free(*(void **)(o + 0x3C));
            }
        }
        f = *(s32 *)(o + 0x20);
        if ((f & 0x400) == 0x400) {
            if (*(void **)(o + 0x30) != NULL) {
                amHeap_Free(*(void **)(o + 0x30));
            }
        }
        f = *(s32 *)(o + 0x20);
        if ((f & 0x4800) == 0x4800) {
            s1 = o + 0x30;
            if (*(void **)(o + 0x44) != NULL) {
                amHeap_Free(*(void **)(o + 0x44));
            }
            if (*(void **)(s1 + 0xC) != NULL) {
                amHeap_Free(*(void **)(s1 + 0xC));
            }
        }
        o = *(char **)(o + 0x24);
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6140);
extern void memset(void *, s32, s32);
extern char D_00511770[];
extern BtbObj *D_0051C770[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern s32 D_0047062C;
extern char *D_0051CB94[];
extern char *D_0051CC48[];

void BtbBg_ResetLists(void) {
    D_0047062C = 0;
    memset(D_00511770, 0, 0xB000);
    memset(D_0051C770, 0, 0x400);
    memset(D_0051CB70, 0, 0xB0);
    memset(D_0051CC20, 0, 0xB0);
    D_0051CB94[0] = D_0051CC20;
    D_0051CC48[0] = D_0051CB70;
}
extern char *D_0051CB94[];
extern char D_0051CC20[];

typedef void (*ObjFunc)(char *);

void BtbBg_RunObjMain(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) != 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
void BtbBg_DrawAfterStub(void) {
}
void BtbBg_DrawScrEffectStub(void) {
}
extern char D_0051CC20[];
extern char *D_0051CB94[];

typedef void (*ObjFunc4)(char *);

void BtbBg_RunPostObjs(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x200) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawTrsObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x800) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPostObjs(void) {
    char *s0;

    func_00133780(2, 1);
    s0 = D_0051CB94[0];
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x8000) != 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
    func_00133780(2, 0);
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) == 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
extern void func_00133780(s32, s32);
extern char *D_0051CB94[];
extern char D_0051CC20[];

void BtbBg_DrawPlainObjs(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x880F) == 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern s32 gBattle;

void BtbBg_CrossFadeKill(void) {
    char *p = (char *)gBattle + 0x10000;
    *(s8 *)(p - 0x768B) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6690);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001F6690(void *);
extern char D_00469888[];
extern s32 gBattle;

void BtbBg_StartCrossFade(s32 a0, s32 a1, s32 a2, f32 f12, f32 f13) {
    char *t;

    t = amTask_Create(func_001F6690, (void *)BtbBg_CrossFadeKill, 0x31FF, a2, a1, D_00469888);
    *(s32 *)(t + 0x30) = *(s32 *)(gBattle + 0x238);
    *(s32 *)(t + 0x34) = a0;
    *(s32 *)(t + 0x38) = 0;
    *(s32 *)(t + 0x3C) = 0;
    *(f32 *)(t + 0x40) = f12;
    *(f32 *)(t + 0x44) = f13;
    *(s32 *)(t + 0x48) = 0;
    *(s32 *)(t + 0x4C) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6D60);
void func_001F6E50(void) {
}

extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByKey(s32 key) {
    BtbObj *n;
    BtbObj *end;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == key) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}

extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 D_0051CD20[];
extern char D_0051CB70[];
extern char D_0051CC20[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;

void BtbObj_RemoveByIdx(s32 flag, s32 idx) {
    BtbObj *n;
    BtbObj *end;
    char *v;
    s32 i;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    switch (flag) {
    case 0:
        idx = (s32)(D_0051CD1C[0] + (idx << 5));
        break;
    default:
        idx = (s32)(*(char **)(v + 0xC) + (idx << 5));
        break;
    }
    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (n->f10 == idx) {
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    return;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void amHeap_Free(void *);
extern void Obj_ResetF38(s32);

void BtbObj_FreeFlag400(void) {
    BtbObj *n;
    BtbObj *end;
    char *sub;
    void *p;
    s32 i;

    n = (BtbObj *)D_0051CB70;
    end = (BtbObj *)D_0051CC20;
    if (n == end) {
        return;
    }
    do {
        if (*(s32 *)((char *)n + 0x20) & 0x400) {
            sub = (char *)n + 0x30;
            p = *(void **)sub;
            if (p != NULL) {
                amHeap_Free(p);
            }
            if (*(s32 *)(sub + 8) != 0) {
                Obj_ResetF38(*(s32 *)(sub + 8));
            }
            for (i = 0; i < 0x100; i++) {
                if (D_0051C770[i] == n) {
                    n->prev->next = n->next;
                    n->next->prev = n->prev;
                    D_0051C770[i] = NULL;
                    D_0047062C--;
                    break;
                }
            }
            return;
        }
        n = n->next;
    } while (n != end);
}
typedef struct { u8 b[16]; } __attribute__((aligned(16))) BtbVec16;
extern BtbVec16 D_0044B510;
extern char D_004698A8[];
extern void func_001F2350();
extern void BtbObj_ReleaseSub38Timed();
extern void func_00209A90(void *, void *);
extern void *amObject_Create(void *, s32);
void BtbBg_CreatePlanet(s32 p) {
    BtbVec16 tmp;
    char *r;
    s32 *s0;
    s32 s2;

    r = func_001F5FD0(0x85000000, D_004698A8, 0, (void *)func_001F2350, (void *)BtbObj_ReleaseSub38Timed);
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x401;
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x400;
    s0 = (s32 *)(r + 0x30);
    s2 = (s32)D_0051CD0C[0];
    s0[1] = (s32)func_001A50F0((void *)s2, 0x7D);
    s0[0] = (s32)amObject_Create(func_001A50F0((void *)s2, 0x7C), 0);
    s0[2] = (s32)func_00209540(func_001A50F0((void *)s2, p + 0x6E), 0x2000001, 0);
    tmp = D_0044B510;
    func_00209A90((void *)s0[2], &tmp);
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7210);
extern void func_001F7210(char *);
extern char *D_0051CD1C[];

void func_001F7470(s32 a0) {
    func_001F7210(D_0051CD1C[0] + (a0 << 5));
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7490);
extern void func_001F7490(s32);

void func_001F7690(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x90);
    s0 = s1 - *(s32 *)(*(char **)(v + 4) + 0x88);
    if (s0 < s1) {
        do {
            func_001F7490(s0);
            s0++;
        } while (s0 < s1);
    }
}

extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern char D_004698C0[];
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void func_001F2FD0(void);
extern void func_001F3180(void);

// differs: 29 of 65 instructions (the loop's registers and the layout of its test; the constructor call matches)

#if 0

void func_001F7720(s32 p0) {
    s32 fl;
    s32 n;
    s32 i;
    s32 t;
    char *a2;
    char *d;
    char *x1;
    char *x2;
    char *x3;
    char *ent;
    char *s0;
    char *r;

    t = D_0051CD20[0];
    ent = D_0051CD14[0] + t * 36;
    s0 = *(char **)(ent + 0xC) + (p0 << 5);
    r = func_001F5FD0(0x81000000, D_004698C0, (s32)s0, (void *)func_001F2FD0, (void *)func_001F3180);
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & -0x41;
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | 0x40;
    x1 = *(char **)(s0 + 4);
    x2 = *(char **)x1;
    x3 = *(char **)(x2 + 0x1C);
    d = *(char **)x3;
    fl = 0;
    if (d != NULL) {
        n = *(s32 *)(d + 0x10);
        if (0 < n) {
            a2 = *(char **)(d + 0x1C);
            for (i = 0; i < n; i++) {
                if (*(s8 *)a2 == 0x58) {
                    fl |= 0x200;
                }
                a2 += 0x20;
            }
        }
    }
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) & ~fl;
    *(s32 *)(r + 0x20) = *(s32 *)(r + 0x20) | fl;
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7720);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7820);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7990);
extern char *D_0051CD14[];
extern s32 D_0051CD20[];
extern void func_001F7990(s32);

void func_001F7BF0(void) {
    s32 s1;
    s32 s0;
    char *v;

    v = D_0051CD14[0] + D_0051CD20[0] * 36;
    s1 = *(s32 *)(*(char **)(v + 4) + 0x80);
    s0 = *(s32 *)(*(char **)(v + 4) + 0x84) + s1;
    if (s1 < s0) {
        do {
            func_001F7990(s1);
            s1++;
        } while (s1 < s0);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7C80);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7DB0);
typedef void (*VoidFunc)(void);
extern VoidFunc D_0044B4C0[];
extern s32 D_0051CCE0[];

void BtbBg_RunFunc(void) {
    VoidFunc f = D_0044B4C0[D_0051CCE0[0]];

    if (f != NULL) {
        f();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7FA0);
