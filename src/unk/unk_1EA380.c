#include "common.h"

/* The game sets a task's function through a NULL test of the function's address. */
#define TASK_SETFUNC(t, f) ((t)->func = ((f) == NULL) ? NULL : (f))

typedef struct Task Task;
typedef void (*TaskFunc)(Task *);

struct Task {
    char pad0[0x1C];
    TaskFunc func;
};

extern char D_004696A8[];
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern s32 D_00470600;
extern s32 D_00470604;
extern s32 D_00470608;

extern u32 func_00127BA0(char *);
extern void amDbg_Printf(u32, s32, char *);
extern void func_001F0820(void);
extern void func_00264300(s32, void (*)(void), s32);

void GameOver_TaskDraw(Task *t) {
    amDbg_Printf((0x40 - func_00127BA0(D_004696A8)) >> 1, 10, D_004696A8);
}

void GameOver_TaskMain(Task *t) {
    amDbg_Printf((0x40 - func_00127BA0(D_004696A8)) >> 1, 10, D_004696A8);
    if ((D_00492FCE[0] | D_00493086[0]) & 0x4000) {
        if (D_00470600 == -1) {
            D_00470600 = 6;
        } else {
            D_00470604 = 6;
        }
        D_00470608 = 0;
        func_00264300(-1, func_001F0820, 0);
        TASK_SETFUNC(t, GameOver_TaskDraw);
        return;
    }
}
extern u64 D_004B4B48[];
extern s32 D_004B4B50[];
extern s8 D_004B4B40[];
extern s8 D_004B4B5B[];
extern s8 D_004B4B41[];
extern s16 D_0046B560[];
extern s8 *D_0044A220[];
extern s16 D_00453490[];
extern void memset(void *, s32, s32);
extern u32 func_0012EAE0(s32);
extern void func_001B13F0(s32);

/* Close in shape, but the picking loops index flags[] differently (strength-reduced here) and the registers differ. */
#if 0
void func_001EA480(void) {
    s32 flags[38];
    s32 *p;
    s32 n;
    s32 i;
    s32 j;
    s32 k;
    s32 r;
    s32 m;
    s32 found;
    s8 *cur;
    s8 **list;
    u64 mask;
    s32 mask2;

    memset(flags, 0, sizeof(flags));
    mask = D_004B4B48[0];
    p = flags;
    n = 0;
    for (i = 0; i < 38; i++) {
        if (mask & ((u64)1 << D_0046B560[i])) {
            p[i] = 1;
            n++;
        }
    }
    cur = D_004B4B40;
    for (j = 0; j < 2; j++, cur++) {
        if (n <= 0) {
            cur[0x1C] = 0;
            continue;
        }
        r = func_0012EAE0(32) % n;
        k = -1;
        do {
            k++;
            if (flags[k] != 0) {
                r--;
            }
        } while (r >= 0);
        cur[0x1C] = D_0046B560[k];
        flags[k] = 0;
        n--;
        if (D_0044A220[0] != NULL) {
            list = D_0044A220;
            do {
                s8 *l = *list;

                found = 0;
                for (m = 0; l[m] >= 0; m++) {
                    if (k == l[m]) {
                        found = 1;
                        break;
                    }
                }
                if (found) {
                    for (m = 0; l[m] >= 0; m++) {
                        flags[l[m]] = 0;
                        n--;
                    }
                    break;
                }
                list++;
            } while (*list != NULL);
        }
    }
    memset(flags, 0, sizeof(flags));
    mask2 = D_004B4B50[0];
    n = 0;
    for (i = 0; i < 12; i++, p++) {
        if (mask2 & (1 << i)) {
            *p = 1;
            n++;
        }
    }
    k = 0;
    if (n > 0) {
        r = func_0012EAE0(32) % n;
        k = -1;
        do {
            k++;
            if (flags[k] != 0) {
                r--;
            }
        } while (r >= 0);
    }
    D_004B4B5B[0] = D_00453490[k * 2];
    D_004B4B41[0] = 0;
    func_001B13F0(0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1EA380", func_001EA480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1EA380", func_001EA740);
