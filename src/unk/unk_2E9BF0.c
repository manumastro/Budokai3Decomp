#include "common.h"

/* The game sets a task's function through a NULL test of the function's address. */
#define TASK_SETFUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

typedef void (*TaskFunc)(void);

typedef struct Task {
    char pad0[0x1C];
    TaskFunc func;
    char pad20[0x10];
    s32 step;
} Task;

typedef struct Obj {
    char pad0[4];
    s16 f4;
    char pad6[0x42];
    s32 f48;
    char pad4C[8];
    s32 f54;
} Obj;

/* A vector of four ints, 16-byte aligned (as Sony's sceVu0IVECTOR). */
typedef s32 IVECTOR[4] __attribute__((aligned(16)));

typedef struct ObjArg5 {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
} ObjArg5;

extern Task *D_00470950;
extern s8 D_00470954;
extern Obj *D_004705E0;
extern Obj *D_004705E4;
extern Obj *D_004705E8;
extern Obj *D_004705EC;
extern s32 D_00470328;
extern s32 D_00492FC0[];
extern s32 D_00493078[];
extern u16 D_00492FCC[];
extern u16 D_00493084[];
extern char D_0046F5F0[];

extern s32 func_002E0C70(void);
extern void func_002E0D40(void);
extern s32 func_002E0D10(void);
extern void func_002E0C90(void);
extern void func_001F0820(void);
extern s32 func_002E3ED0(void);
extern void func_00264140(s32, s32);
extern void func_001F0830(s32, s32);
extern void func_002E3F80(s32, s32);
extern void func_002E3F60(s32, s32, s32);
extern void func_00264300(s32, void (*)(void), s32);
extern void func_001439C0(ObjArg5 *);
extern void func_00143870(s32 *);
extern void func_00143B50(s32, s32);
extern void func_0025C800(Obj *, s32);
extern Task *func_00144FC0(void (*)(void), s32, s32, s32, s32, char *);
extern void func_001F07D0(void);
extern void func_00144B70(s32);
extern void func_00144650(s32);
extern void func_0012D900(s32);
extern void func_002E3EF0(void);
extern void func_002E0C40(void);
extern void func_00145120(Task *);

/* The case tests come out as 4, 2, 1, 0, 3; the original tests 2, 1, 0, 4, 3 with the same bodies. */
#if 0
void func_002E9BF0(void) {
    switch (func_002E0C70()) {
    case 3:
        return;
    case 0:
        func_002E0D40();
        break;
    case 1:
    case 2:
        if (func_002E0D10() == 1) {
            func_002E0C90();
        }
        break;
    default:
        return;
    case 4:
        func_001F0820();
        D_00470950->func = NULL;
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2E9BF0", func_002E9BF0);

void func_002E9BF0(void);

void func_002E9CA0(void) {
    if (func_002E3ED0() == 1) {
        return;
    }
    if (func_002E3ED0() == 2) {
        return;
    }
    if (D_00470954 != 0) {
        Task *t = D_00470950;
        TASK_SETFUNC(t, func_002E9BF0);
    } else {
        func_001F0820();
        D_00470950->func = NULL;
    }
}

void func_002E9D20(void) {
    Task *t = D_00470950;

    TASK_SETFUNC(t, func_002E9CA0);
    func_00264140(-1, 0);
    func_001F0830(1, 0);
}

void func_002E9D70(void) {
}

void func_002E9D80(void) {
    func_002E3F80(0x1000, 0);
    func_002E3F60(7, -1, 0);
    {
        Task *t = D_00470950;
        TASK_SETFUNC(t, func_002E9D70);
    }
    func_00264300(-1, func_002E9D20, 0);
}

void func_002E9DE0(void) {
    s32 *step = &D_00470950->step;
    Task *t;

    switch (*step) {
    case 0: {
        ObjArg5 a5;

        a5.f0 = 0;
        a5.f8 = D_004705E4->f48;
        a5.f10 = D_004705E4->f54;
        a5.f4 = D_004705E8->f48;
        a5.fC = D_004705E8->f54;
        func_001439C0(&a5);
        (*step)++;
        break;
    }
    case 1:
        if (D_00470328 == 0) {
            IVECTOR a3;

            a3[0] = 0;
            a3[1] = D_004705EC->f48;
            a3[2] = D_004705EC->f54;
            func_00143870(a3);
            (*step)++;
        }
        break;
    case 2:
        if (D_00470328 == 0) {
            func_00143B50(9, 0);
            func_0025C800(D_004705E4, 0);
            func_0025C800(D_004705E8, 0);
            func_0025C800(D_004705EC, 0);
            D_004705E4 = NULL;
            D_004705E8 = NULL;
            D_004705EC = NULL;
            (*step)++;
    case 3:
            if (D_00492FC0[0] != 2 && D_00493078[0] != 2) {
                if (((D_00492FCC[0] | D_00493084[0]) & 0x5000) == 0x5000) {
                    D_00470954 = 1;
                }
                t = D_00470950;
                TASK_SETFUNC(t, func_002E9D80);
            }
        }
        break;
    }
}

void func_002E9F70(void) {
    Task *t;

    if (D_004705E0->f4 == 3 && D_004705E4->f4 == 3 && D_004705E8->f4 == 3 && D_004705EC->f4 == 3) {
        func_0025C800(D_004705E0, 0);
        D_004705E0 = NULL;
        D_00470950->step = 0;
        t = D_00470950;
        TASK_SETFUNC(t, func_002E9DE0);
    }
}

void func_002EA000(void) {
    D_00470950 = func_00144FC0(func_002E9F70, 0, 0x1000, 0x200, 1, D_0046F5F0);
    func_001F07D0();
    func_00144B70(-1);
    func_00144650(0);
    func_0012D900(-1);
    func_00264140(-1, 0);
}

void func_002EA070(void) {
    D_00470950 = NULL;
}

void func_002EA080(void) {
    func_002E3EF0();
    func_002E0C40();
    func_00145120(D_00470950);
    D_00470950 = NULL;
}
