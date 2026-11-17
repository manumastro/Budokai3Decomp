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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EAC20);

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EAE70);

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB130);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EB130(Task *);
extern void func_002D1CC0(void);
extern void func_00307470(void);
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
                func_00307470();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB3F0);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EB3F0(Task *);
extern void ArenaMode_Start(s32);
extern void func_001B1090(void);
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
                func_001B1090();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB670);

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB8E0);

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBAF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBB90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBC20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBCA0);
// differs: reads D_00470608 with lh here and with lw in func_001ECAB0 (same symbol, two widths; one C file cannot declare both)

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EBCA0(Task *);
extern void PracMode_Start(s32, s32);
extern s8 D_004B4BB0[];
extern s16 D_00470608;

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
            case 19:
                D_004B4BB0[0] = 1;
                PracMode_Start(D_00470608, 0);
                break;
            case 5:
                break;
            }
        }
    }
}
#endif

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBEF0);
// differs: same D_00470608 lh/lw conflict as func_001EBD90

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EBEF0(Task *);
extern void PracMode_Start(s32, s32);
extern s8 D_004B4BB0[];
extern s16 D_00470608;

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
            case 19:
                D_004B4BB0[0] = 1;
                PracMode_Start(D_00470608, 0);
                break;
            case 5:
                break;
            }
        }
    }
}
#endif

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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC140);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC140(Task *);
extern void func_001B1090(void);
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
                func_001B1090();
                break;
            case 21:
                D_004B4BB0[0] = 1;
                func_001B1090();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC430);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC430(Task *);
extern void func_00304F50(void);
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
                func_00304F50();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC680);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC680(Task *);
extern void func_001B1090(void);
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
                func_001B1090();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC8F0);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EC8F0(Task *);
extern void func_00304F50(void);
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
                func_00304F50();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECB60);
// differs: same D_00470608 lh/lw conflict as func_001EBD90

#if 0

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ECB60(Task *);
extern void func_00269820(s32, s32);
extern s8 D_004B4BB0[];
extern s16 D_00470608;

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
            case 14:
                D_004B4BB0[0] = 1;
                func_00269820(D_00470608, 0);
                break;
            case 5:
                break;
            }
        }
    }
}
#endif

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
extern void func_00269980(void);

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
                func_00269980();
                break;
            case 5:
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECDB0);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001ECDB0(Task *);
extern void func_001B1090(void);
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
                func_001B1090();
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED0C0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED150);
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED1D0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED270);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED300);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED380);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED430);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED4C0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED540);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4BB0[];
extern s32 D_004705FC;
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED540(Task *);
extern void func_00298FC0(void);

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
                func_00298FC0();
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
extern void func_00299000(void);

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
                func_00299000();
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED740);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED880);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern void func_001EA740(s32);
extern void func_001ED880(Task *);
extern void StrTitle_Load(void);
extern void func_00299000(void);
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
                func_00299000();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDAC0);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EDAC0(Task *);
extern void func_0029CDB0(void);
extern void func_002A8E40(void);
extern void func_00307170(void);
extern void func_0030F220(void);
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
                func_0029CDB0();
                break;
            case 9:
                D_004B4BB0[0] = 1;
                func_002A8E40();
                break;
            case 11:
                D_004B4BB0[0] = 1;
                func_00307170();
                break;
            case 12:
                D_004B4BB0[0] = 1;
                func_0030F220();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDDE0);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EDDE0(Task *);
extern void func_0029CDB0(void);
extern void func_00298FC0(void);
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
                func_0029CDB0();
                break;
            case 8:
                D_004B4BB0[0] = 1;
                func_00298FC0();
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
extern void func_00299000(void);

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
                func_00299000();
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE040);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EE040(Task *);
extern void StrSelect_Start(s32);
extern void func_00298FC0(void);
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
                func_00298FC0();
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
extern void func_00299000(void);

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
                func_00299000();
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
extern void func_00269980(void);
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
                func_00269980();
                break;
            case 23:
                ArenaMode_Load();
                break;
            }
        }
    }
}

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE820);

extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s32 D_00470600;
extern s32 D_004705FC;
extern void func_001EA740(s32);
extern void func_001EE820(Task *);
extern void func_002E21C0(void);
extern void func_001B1090(void);
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
                func_002E21C0();
                break;
            case 3:
                D_004B4BB0[0] = 0;
                func_001B1090();
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEA90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEAF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEC70);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EECD0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EED50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEDF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEE70);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEEF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EEF90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF010);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF090);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF0D0);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F04C0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F04E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0510);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0530);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0660);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0790);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F07A0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F07B0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F07D0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F07E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0810);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0820);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F0830);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3D80);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5830);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5950);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5A70);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5AB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5B10);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5B50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5B70);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5B90);
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

// differs: 12 of 49 instructions (the load order of the frame word and the object pointer, and their registers)

#if 0

void func_001F5BE0(MotCtl *c) {
    MotState *s;
    char *obj;
    s32 pk;
    MotSlot *a3;
    s32 n;
    s32 i;
    s32 off;

    s = c->st;
    if (s != NULL) {
        s->f18 = 1;
        obj = s->obj;
        pk = ((s->f8 + 1) << 16) | s->f10;
        a3 = (MotSlot *)(obj + 0x41C);
        if (a3->pk != pk) {
            n = *(s32 *)(obj + 0x418);
            if (0 < n) {
                i = 0;
                off = 0;
                do {
                    i++;
                    *(s32 *)(a3->p10 + off + 0x30) = -1;
                    *(s32 *)(a3->p10 + off + 0x34) = -1;
                    *(s32 *)(a3->p10 + off + 0x38) = -1;
                    off += 0x40;
                } while (i < *(s32 *)(obj + 0x418));
            }
            a3->fC = 0xBF800000;
        }
        a3->pk = pk;
        *(f32 *)(s->obj + 0x424) = s->f4;
        amMotion_Apply(s->obj, 0.0f, s->f1C);
    }
}


extern f32 D_0051CD24[];
#endif

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5BE0);

typedef struct BtbItem {
    s32 id;
    f32 val;
    s32 pad8;
    s16 kind;
    s16 kind2;
} BtbItem;

typedef struct BtbHolder {
    char pad0[0x10];
    BtbItem *item;
} BtbHolder;

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5EF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5F50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F5FD0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6140);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F62A0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6330);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F63B0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F63C0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F63D0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6450);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F64E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6570);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F65F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6670);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6690);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6CD0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6D60);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6E50);

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7470);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7490);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7690);

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7BF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7C80);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7DB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7F50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7FA0);
