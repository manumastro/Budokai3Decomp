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
    BtbObj *r;
    char pad1[0x1C];
    BtbObj *q;
    char pad2[0x0C];
    BtbObj *p;
} BtbSub;

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EAC20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EAD10);

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EAF90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB070);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB130);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB250);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB330);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB3F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB4E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB5B0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB670);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB760);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EB830);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBD90);

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EBFE0);

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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC250);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC340);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC430);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC520);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC5E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC680);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC770);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC840);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC8F0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EC9E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECAB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECB60);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECC50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECD10);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECDB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECEA0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ECF70);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001ED9E0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDAC0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDC00);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDD00);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDDE0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDED0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EDF90);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE040);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE150);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE250);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE320);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE530);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE6D0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE820);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE920);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EE9E0);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001EF880);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1600);
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
    func_00208F70(s->p);
    if (s->p->f38 < 0) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1C30);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F1CE0);

extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern void func_00208F70(BtbObj *);

void func_001F1EA0(BtbObj *o) {
    BtbSub *s;
    s32 i;

    s = (BtbSub *)((char *)o + 0x30);
    func_00208F70(s->q);
    if (s->q->f38 < 0) {
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
    func_00208F70(s->q);
    if (s->q->f38 < 0) {
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
    func_00208F70(s->r);
    if (s->r->f38 < 0) {
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F24B0);
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
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F3EC0);
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

extern f32 D_0051CD24[];
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

INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F6F10);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7010);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7120);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7210);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7470);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7490);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7690);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7720);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7820);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7990);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7BF0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7C80);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7DB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7F50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_draw", func_001F7FA0);
