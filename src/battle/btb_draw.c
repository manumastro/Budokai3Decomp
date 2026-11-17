#include "common.h"

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

extern void func_001B0EC0(void);
extern void func_002C3E40(void);
extern void func_0026E3B0(void);
extern void TourMap_Exit(void);
extern void func_00269730(void);
extern void func_00307430(void);
extern void PracMode_Exit(void);
extern void ArenaMode_Exit(void);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE6D0(Task *);
extern void func_001EB5B0(Task *);
extern void func_003107D0(void);

void func_001EAC20(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, func_001EB5B0);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_003107D0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EAC20(Task *);
extern void func_002D1CC0(void);
extern s8 D_004B4BB0[];

void func_001EAD10(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EAC20);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EAD10(Task *);
extern void func_002D1D40(void);

void func_001EADD0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EAD10);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EB5B0(Task *);
extern void func_001EADD0(Task *);
extern void func_001EE6D0(Task *);

void func_001EAE70(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, func_001EB5B0);
                break;
            case 0x1B:
                TASK_SETFUNC(t, func_001EADD0);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_00307430();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EAE70(Task *);
extern void func_002D1CC0(void);
extern void func_003107E0(s32);
extern s8 D_004B4BB0[];
extern s32 D_00470608;

void func_001EAF90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EAE70);
            switch (D_00470600) {
            case 24:
                D_004B4BB0[0] = 1;
                func_002D1CC0();
                break;
            case 27:
                D_004B4BB0[0] = 1;
                func_003107E0(*(s16 *)&D_00470608);
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EAF90(Task *);
extern void func_002D1D40(void);
extern void func_00310900(void);

void func_001EB070(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EAF90);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EB5B0(Task *);
extern void func_001EB070(Task *);
extern void func_001EE6D0(Task *);

void func_001EB130(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, func_001EB5B0);
                break;
            case 0x1A:
                TASK_SETFUNC(t, func_001EB070);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_001B0EC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EB130(Task *);
extern void func_002D1CC0(void);
extern void Result_Start(void);
extern s8 D_004B4BB0[];

void func_001EB250(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EB130);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EB250(Task *);
extern void func_002D1D40(void);
extern void func_003074C0(void);

void func_001EB330(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EB250);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EB830(Task *);
extern void func_001EB330(Task *);

void func_001EB3F0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x17:
                TASK_SETFUNC(t, func_001EB830);
                break;
            case 0x19:
                TASK_SETFUNC(t, func_001EB330);
                break;
            }
            func_002D1C50();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EB3F0(Task *);
extern void ArenaMode_Start(s32);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s32 D_00470608;

void func_001EB4E0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EB3F0);
            switch (D_00470600) {
            case 23:
                D_004B4BB0[0] = 1;
                ArenaMode_Start(*(s8 *)&D_00470608);
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EB4E0(Task *);
extern void ArenaMode_Load(void);
extern char D_005C9D80[];
extern void func_001B10D0(char *, s32);

void func_001EB5B0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EB4E0);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EB5B0(Task *);
extern void func_001EE6D0(Task *);

void func_001EB670(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x18:
                TASK_SETFUNC(t, func_001EB5B0);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            ArenaMode_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EB670(Task *);
extern void func_002D1CC0(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EB760(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EB670);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EB760(Task *);
extern void func_002D1D40(void);
extern void MainMenu_Load(void);

void func_001EB830(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EB760);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE6D0(Task *);

void func_001EB8E0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
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
extern s32 D_004705FC;
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EB8E0(Task *);
extern void MainMenu_Start(s32, s32);

void func_001EB9A0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EB8E0);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EB9A0(Task *);
extern void MainMenu_Load(void);

void func_001EBA50(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EB9A0);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE6D0(Task *);
extern void func_002E0E50(void);

void func_001EBAF0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004B4B41[0] = 0;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001EE6D0);
            func_002E0E50();
        }
    }
}
extern s8 D_004B4BB0[];
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EBAF0(Task *);
extern void MainMenu_Start(s32, s32);

void func_001EBB90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EBAF0);
            D_004B4BB0[0] = 0;
            MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EBB90(Task *);
extern void MainMenu_Load(void);

void func_001EBC20(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EBB90);
            MainMenu_Load();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EC340(Task *);
extern void func_001EE6D0(Task *);
extern void func_001B0EC0(void);

void func_001EBCA0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x13:
                TASK_SETFUNC(t, func_001EC340);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_001B0EC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470608;
extern void func_001EA740(s32);
extern void func_001EBCA0(Task *);
extern void PracMode_Start(s32, s32);

void func_001EBD90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EBCA0);
            switch (D_00470600) {
            case 0x13:
                D_004B4BB0[0] = 1;
                PracMode_Start(*(s16 *)&D_00470608, 0);
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EBD90(Task *);
extern void PracMode_Load(void);

void func_001EBE50(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EBD90);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EC340(Task *);
extern void func_001EE6D0(Task *);

void func_001EBEF0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x13:
                TASK_SETFUNC(t, func_001EC340);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_001B0EC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470608;
extern void func_001EA740(s32);
extern void func_001EBEF0(Task *);
extern void PracMode_Start(s32, s32);

void func_001EBFE0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EBEF0);
            switch (D_00470600) {
            case 0x13:
                D_004B4BB0[0] = 1;
                PracMode_Start(*(s16 *)&D_00470608, 0);
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EBFE0(Task *);
extern void PracMode_Load(void);

void func_001EC0A0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EBFE0);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE6D0(Task *);
extern void func_001EC0A0(Task *);
extern void func_001EBE50(Task *);

void func_001EC140(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            case 0x14:
                TASK_SETFUNC(t, func_001EC0A0);
                break;
            case 0x15:
                TASK_SETFUNC(t, func_001EBE50);
                break;
            }
            PracMode_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC140(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EC250(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EC140);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EC250(Task *);
extern void MainMenu_Load(void);
extern void func_001B13F0(s32);
extern s8 D_004B4B41[];
extern s16 D_005C9F02[];

void func_001EC340(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EC250);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EC840(Task *);
extern void func_001EE6D0(Task *);

void func_001EC430(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x11:
                TASK_SETFUNC(t, func_001EC840);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_001B0EC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC430(Task *);
extern void TourMap_Start(void);
extern s8 D_004B4BB0[];

void func_001EC520(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EC430);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EC520(Task *);
extern void func_00304FB0(s32);
extern s32 D_00470608;

void func_001EC5E0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EC520);
            switch (D_00470600) {
            case 17:
                func_00304FB0(D_00470608);
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EC5E0(Task *);
extern void func_001EE6D0(Task *);

void func_001EC680(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x12:
                TASK_SETFUNC(t, func_001EC5E0);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            TourMap_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC680(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EC770(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EC680);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EC770(Task *);
extern void func_001B13F0(s32);
extern void MainMenu_Load(void);

void func_001EC840(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EC770);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EC840(Task *);
extern void func_001EE6D0(Task *);

void func_001EC8F0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            case 0x11:
                TASK_SETFUNC(t, func_001EC840);
                break;
            }
            func_002C3E40();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC8F0(Task *);
extern void TourMap_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EC9E0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EC8F0);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EC9E0(Task *);
extern void func_00304FB0(s32);
extern void MainMenu_Load(void);
extern s32 D_00470608;

void func_001ECAB0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EC9E0);
            switch (D_00470600) {
            case 5:
                MainMenu_Load();
                break;
            case 0x11:
                func_00304FB0(D_00470608);
                break;
            }
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001ECF70(Task *);
extern void func_001EE6D0(Task *);

void func_001ECB60(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0xE:
                TASK_SETFUNC(t, func_001ECF70);
                break;
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            }
            func_001B0EC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470608;
extern void func_001EA740(s32);
extern void func_001ECB60(Task *);
extern void func_00269820(s32, s32);

void func_001ECC50(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ECB60);
            switch (D_00470600) {
            case 0xE:
                D_004B4BB0[0] = 1;
                func_00269820(*(s16 *)&D_00470608, 0);
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ECC50(Task *);
extern void VsMode_Load(void);

void func_001ECD10(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ECC50);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001ECD10(Task *);
extern void func_001EE6D0(Task *);

void func_001ECDB0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            case 0xF:
                TASK_SETFUNC(t, func_001ECD10);
                break;
            }
            func_00269730();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ECDB0(Task *);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001ECEA0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ECDB0);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ECEA0(Task *);
extern void func_001B13F0(s32);
extern void MainMenu_Load(void);

void func_001ECF70(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ECEA0);
            switch (D_00470600) {
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

// differs: the two stores to D_00470600 and D_00470604 come in the other order (the compiler puts the -1 store before the table pointer store)

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE250(Task *);
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001EE250);
            func_0030F0E0(a0, a1);
        }
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED020);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ED020(Task *);
extern void StrTitle_Start(void);

void func_001ED0C0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ED020);
            D_004B4BB0[0] = 1;
            StrTitle_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED0C0(Task *);
extern void StrTitle_Load(void);

void func_001ED150(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ED0C0);
            StrTitle_Load();
        }
    }
}
// differs: same two-store order as func_001ED020

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001ED150(Task *);
extern void func_003070A0(s32, s32);

void func_001ED1D0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001ED150);
            func_003070A0(a0, a1);
        }
    }
}
#endif

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001ED150(Task *);
extern void func_003070A0(void);

void func_001ED1D0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001ED150);
            func_003070A0();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ED1D0(Task *);
extern void StaffRoll_Start(void);

void func_001ED270(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ED1D0);
            D_004B4BB0[0] = 1;
            StaffRoll_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED270(Task *);
extern void func_0030F260(void);

void func_001ED300(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ED270);
            func_0030F260();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE250(Task *);
extern void amTask_Kill(s32);
extern s32 D_0047061C;


void func_001ED380(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001EE250);
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
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ED380(Task *);
extern void StrTitle_Start(void);

void func_001ED430(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ED380);
            D_004B4BB0[0] = 1;
            StrTitle_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED430(Task *);
extern void StrTitle_Load(void);

void func_001ED4C0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ED430);
            StrTitle_Load();
        }
    }
}
extern void func_002ECAC0(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EDD00(Task *);

void func_001ED540(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x8:
                TASK_SETFUNC(t, func_001EDD00);
                break;
            }
            func_002ECAC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED540(Task *);
extern void Flight_Start(void);

void func_001ED600(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001ED540);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED600(Task *);
extern void Flight_Load(void);

void func_001ED6A0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ED600);
            switch (D_00470600) {
            case 8:
                Flight_Load();
                break;
            }
        }
    }
}

extern void func_001B0EC0(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE250(Task *);
extern void func_001EDD00(Task *);
extern void func_001ED4C0(Task *);
extern void func_001ED6A0(Task *);

void func_001ED740(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, func_001EE250);
                break;
            case 0x8:
                TASK_SETFUNC(t, func_001EDD00);
                break;
            case 0xD:
                TASK_SETFUNC(t, func_001ED4C0);
                break;
            case 0xA:
                TASK_SETFUNC(t, func_001ED6A0);
                break;
            }
            func_001B0EC0();
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED880);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED880(Task *);
extern void StrTitle_Load(void);
extern void Flight_Load(void);
extern void func_002ECB90(void);

void func_001ED9E0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001ED880);
            switch (D_00470600) {
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

extern void func_00298EA0(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE250(Task *);
extern void func_001ED9E0(Task *);
extern void func_001ED300(Task *);
extern void func_001ED150(Task *);

void func_001EDAC0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, func_001EE250);
                break;
            case 0x9:
                TASK_SETFUNC(t, func_001ED9E0);
                break;
            case 0xB:
                TASK_SETFUNC(t, func_001ED300);
                break;
            case 0xC:
                TASK_SETFUNC(t, func_001ED150);
                break;
            }
            func_00298EA0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EDAC0(Task *);
extern void StrTitle_Start(void);
extern void func_002A8E40(void);
extern void Shenron_Start(void);
extern void StaffRoll_Start(void);
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EDC00(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EDAC0);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EDC00(Task *);
extern void StrTitle_Load(void);
extern void func_003071C0(void);
extern void func_0030F260(void);

void func_001EDD00(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EDC00);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE250(Task *);
extern void func_001EDD00(Task *);

void func_001EDDE0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 0x6:
                TASK_SETFUNC(t, func_001EE250);
                break;
            case 0x8:
                TASK_SETFUNC(t, func_001EDD00);
                break;
            }
            StrSelect_Exit();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EDDE0(Task *);
extern void StrTitle_Start(void);
extern void Flight_Start(void);
extern s8 D_004B4BB0[];

void func_001EDED0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EDDE0);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EDED0(Task *);
extern void StrTitle_Load(void);
extern void Flight_Load(void);

void func_001EDF90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EDED0);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EE6D0(Task *);
extern void func_001EDF90(Task *);
extern void func_001EDD00(Task *);

void func_001EE040(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            switch (D_004B4B40[0]) {
            case 5:
                D_004B4B41[0] = 0;
                TASK_SETFUNC(t, func_001EE6D0);
                break;
            case 0x7:
                TASK_SETFUNC(t, func_001EDF90);
                break;
            case 0x8:
                TASK_SETFUNC(t, func_001EDD00);
                break;
            }
            func_0029CCC0();
        }
    }
}

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EE040(Task *);
extern void StrSelect_Start(s32);
extern void Flight_Start(void);
extern s32 D_00470608;
extern s8 D_004B4BB0[];
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);

void func_001EE150(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EE040);
            switch (D_00470600) {
            case 5:
                D_004B4BB0[0] = 0;
                MainMenu_Start(D_004B4B62[0], D_004B4BE9[0]);
                break;
            case 7:
                D_004B4BB0[0] = 1;
                StrSelect_Start(D_00470608);
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
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EE150(Task *);
extern void MainMenu_Load(void);
extern void StrSelect_Load(void);
extern void Flight_Load(void);

void func_001EE250(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EE150);
            switch (D_00470600) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE530);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EE530(Task *);
extern void StrTitle_Load(void);
extern void TourMode_Load(void);
extern void PracMode_Load(void);
extern void func_002E18D0(void);
extern void func_0026E4A0(void);
extern void Title_Load(void);
extern void VsMode_Load(void);
extern void ArenaMode_Load(void);

void func_001EE6D0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EE530);
            switch (D_00470600) {
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
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EECD0(Task *);
extern void func_001EEAF0(Task *);

void func_001EE820(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
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
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EE820(Task *);
extern void Opening_Start(void);
extern void BtlIntWait_Start(void);
extern s8 D_004B4BB0[];

void func_001EE920(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EE820);
            switch (D_00470600) {
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
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EE920(Task *);
extern void Opening_Init(void);
extern void func_001EA480(void);

void func_001EE9E0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EE920);
            switch (D_00470600) {
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
extern s32 D_004705FC;
extern void func_001EA740(s32);

void func_001EEA90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            func_001EA740(4);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEAF0);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_004705FC;
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
        if (D_004705FC != 0) {
            func_001EA740(4);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
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
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EEC70);
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EECD0(Task *);
extern void Logomark_Free(void);

void func_001EED50(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001EECD0);
            Logomark_Free();
        }
    }
}
extern s8 D_004B4BB0[];
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EED50(Task *);
extern void Opening_Start(void);

void func_001EEDF0(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EED50);
            D_004B4BB0[0] = 0;
            Opening_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EEDF0(Task *);
extern void Opening_Init(void);

void func_001EEE70(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EEDF0);
            Opening_Init();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s32 D_004705F8;
extern s32 D_004705FC;
extern s32 D_00470600;
extern s32 D_00470604;
extern void func_001EA740(s32);
extern void func_001EEE70(Task *);
extern void func_002EA080(void);

void func_001EEEF0(Task *t) {
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
        if (D_004705F8 != 0) {
            a1 = D_00470600;
            a0 = D_00470604;
            D_004705F8 = 0;
            D_004705FC = 0;
            D_004B4B40[0] = a1;
            D_00470600 = a0;
            D_00470604 = -1;
            TASK_SETFUNC(t, func_001EEE70);
            func_002EA080();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EEEF0(Task *);
extern void Logomark_Start(void);

void func_001EEF90(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_004705FC != 0) {
            TASK_SETFUNC(t, func_001EEEF0);
            D_004B4BB0[0] = 0;
            Logomark_Start();
        }
    }
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001EEF90(Task *);
extern void Logomark_Load(void);

void func_001EF010(Task *t) {
    s32 v;

    if (D_004B4BB1[0] != 0) {
        func_001EA740(D_004B4BB2[0]);
        v = 1;
    } else {
        v = 0;
    }
    if (v == 0) {
        if (D_00470600 != -1) {
            TASK_SETFUNC(t, func_001EEF90);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF100);
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

void func_001EF880(BtbEntry *e, u8 *src) {
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

u64 func_001F04C0(s32 a0) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0660);
extern s8 D_004B4BB0[];

void func_001F0790(void) {
    D_004B4BB0[0] = 0;
}
extern s8 D_004B4BB0[];

void func_001F07A0(void) {
    D_004B4BB0[0] = 1;
}
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];

void func_001F07B0(s32 a0) {
    D_004B4BB2[0] = a0;
    D_004B4BB1[0] = 1;
}
extern s32 D_004705F8;

void func_001F07D0(void) {
    D_004705F8 = 1;
}
extern s32 D_004705FC;
extern void func_002641D0(void);

void func_001F07E0(void) {
    func_002641D0();
    D_004705FC = 1;
}
extern void func_00264300();
extern void func_001F0820(void);

void func_001F0810(s32 a0, s32 a1) {
    func_00264300(a0, func_001F0820, a1);
}
extern s32 D_004705FC;

void func_001F0820(void) {
    D_004705FC = 1;
}
extern s32 D_00470600;
extern s32 D_00470604;
extern s32 D_00470608;

void func_001F0830(s32 a0, s32 a1) {
    if (D_00470600 == -1) {
        D_00470600 = a0;
    } else {
        D_00470604 = a0;
    }
    D_00470608 = a1;
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0860);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0A50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0E20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1190);
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

void func_001F1A00(BtbObj *o) {
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1F50);

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2150);

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F22A0(BtbObj *o) {
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F2350);

extern f32 D_0051CD24[];
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F24B0(BtbObj *o) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3180);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F32F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F34E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3740);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F38F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3A60);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3C10);
extern void func_00133920(s32, s32, s32, s32, s32);
extern s32 D_00470570;
extern s32 D_0047064C;

void func_001F3D80(char *o) {
    s32 f;
    char *p;

    f = *(s32 *)(o + 0x20);
    if ((f & 0x800) != 0 || (f & 0x8000) != 0) {
        D_0047064C = 0;
        p = (char *)D_00470570;
        p += 0x10000;
        if (*(f32 *)(p - 0x76D4) > 0.0f) {
            func_00133920(0, 0x8000, 0, 0, 0);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3DF0);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void amHeap_Free(void *);
extern void func_00209530(s32);

void func_001F3EC0(void) {
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
                func_00209530(s);
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
        r = func_001F5FD0(0x85000000, D_00469848, 0, (void *)func_001F2150, (void *)func_001F22A0);
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
extern void func_001F2150(void);

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
        p = func_001F5FD0(0x85000000, D_00469858, 0, (void *)func_001F2150, (void *)func_001F22A0);
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
// differs: the original reloads h->item between its two stores (the compiler keeps it in a register); the
// variants tried (local copy, pointer-typed first store, third store) do not reproduce the reload
#if 0
void func_001F5B50(BtbHolder *h) {
    if (h->item != NULL) {
        h->item->id = 0;
        h->item->kind = 0;
    }
}
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5B50);
void func_001F5B70(BtbHolder *h) {
    if (h->item != NULL) {
        h->item->kind = 1;
    }
}
extern void amMotSet_Apply(void *, f32, s32);

void func_001F5B90(char *c) {
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

void func_001F5F50(BtbObj *o) {
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

void func_001F62A0(void) {
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

void func_001F6330(void) {
    char *s0;

    for (s0 = D_0051CB94[0]; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc *)(s0 + 0x18) != NULL && (*(s32 *)(s0 + 0x20) & 0x2800) != 0x2800) {
            (*(ObjFunc *)(s0 + 0x18))(s0);
        }
    }
}
void func_001F63B0(void) {
}
void func_001F63C0(void) {
}
extern char D_0051CC20[];
extern char *D_0051CB94[];

typedef void (*ObjFunc4)(char *);

void func_001F63D0(void) {
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

void func_001F6450(void) {
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

void func_001F64E0(void) {
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

void func_001F6570(void) {
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

void func_001F65F0(void) {
    char *s0;

    s0 = D_0051CB94[0];
    func_00133780(2, 0);
    for (; s0 != D_0051CC20; s0 = *(char **)(s0 + 0x24)) {
        if (*(ObjFunc4 *)(s0 + 0x14) != NULL && (*(s32 *)(s0 + 0x20) & 0x880F) == 0) {
            (*(ObjFunc4 *)(s0 + 0x14))(s0);
        }
    }
}
extern s32 D_00470570;

void func_001F6670(void) {
    char *p = (char *)gBattle + 0x10000;
    *(s8 *)(p - 0x768B) = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6690);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001F6690(void *);
extern char D_00469888[];
extern s32 D_00470570;

void func_001F6CD0(s32 a0, s32 a1, s32 a2, f32 f12, f32 f13) {
    char *t;

    t = amTask_Create(func_001F6690, (void *)func_001F6670, 0x31FF, a2, a1, D_00469888);
    *(s32 *)(t + 0x30) = *(s32 *)(D_00470570 + 0x238);
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

void func_001F6E60(s32 key) {
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

void func_001F6F10(s32 flag, s32 idx) {
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
extern void func_00209530(s32);

void func_001F7010(void) {
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
                func_00209530(*(s32 *)(sub + 8));
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7120);
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

void func_001F7F50(void) {
    VoidFunc f = D_0044B4C0[D_0051CCE0[0]];

    if (f != NULL) {
        f();
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7FA0);
