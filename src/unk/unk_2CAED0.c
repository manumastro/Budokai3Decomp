#include "common.h"

/* A fighter's input history: a ring of 32 commands. */
typedef struct CmdHistEnt {
    s32 f0;
    s32 f4;
    s16 *f8;
    s32 fC;
} CmdHistEnt;

typedef struct CmdHist {
    char pad0[0x1FC];
    CmdHistEnt ent[32];
    s32 wr;
    s32 rd;
} CmdHist;

/* A fighter, as far as this file reads it. */
typedef struct TutChr {
    char pad0[0xBA4];
    s32 fBA4;
    char padBA8[0xCAC - 0xBA8];
    s16 fCAC;
    s16 fCAE;
    char padCB0[2];
    u8 fCB2;
    char padCB3[0xCB8 - 0xCB3];
    f32 fCB8;
    char padCBC[0x1350 - 0xCBC];
    s32 f1350;
    struct TutChr *f1354;
    char pad1358[8];
    CmdHist f1360;
} TutChr;

/* The training (tutorial) work: one lesson's state. */
typedef struct TutWork {
    TutChr *chr;
    s32 f4;
    s32 f8;
    s32 fC;
    char pad10[0x10];
    s32 f20;
    s32 f24;
    char pad28[8];
    s8 f30;
    char pad31;
    s16 f32;
    char pad34[2];
    s8 f36;
    s8 f37;
    s8 f38;
    s8 f39;
    s8 f3A;
    s8 f3B;
    s8 f3C;
} TutWork;

extern TutWork *D_0047091C;
extern u8 *D_00470570;
extern s32 D_004565B0[];
extern void memset(void *, s32, s32);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_002EB280(void);
extern void func_002EB290(void);
extern void func_002EB560(void *);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CAED0);
/* differs: the test comes out as slti at / beqz; the original keeps slti v0 / bnez v0 with the result in v0 */
#if 0
s32 func_002CAF50(void) {
    TutWork *t = D_0047091C;
    s32 *p = &t->f20;
    s32 r;

    if (t->f32 == 0x1A) {
        (*p)++;
    }
    r = *p < 3;
    if (r) {
        return 0;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CAF50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CAFA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB070);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB0F0);
/* differs: the shared "return 0" exit and the slti v0 / bnez pair of the original (6 instructions) */
#if 0
s32 func_002CB1D0(void) {
    TutWork *t = D_0047091C;
    s32 *p = &t->f20;

    if (t->f32 == 7) {
        (*p)++;
    }
    if (t->f32 == 8) {
        p[1]++;
    }
    if (*p < 2 || p[1] < 2) {
        return 0;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB1D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB250);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB370);
s32 func_002CB420(void) {
    return 2;
}
void func_002CB430(void) {
}
void func_002CB440(void) {
}
void func_002CB450(void) {
}
void func_002CB460(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB470);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB4F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB650);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBD40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBEB0);
void func_002EB0D0(void);

void func_002CBF50(void) {
    func_002EB0D0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBFF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CC120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CC240);
s32 func_002CC450(void) {
    TutWork *t = D_0047091C;
    s32 i;

    if (t != NULL) {
        i = t->fC;
        if (i >= 0 && i < 0x22) {
            return D_004565B0[i];
        }
    }
    return 0;
}
s32 func_002CC4A0(void) {
    TutWork *t = D_0047091C;

    if (t != NULL) {
        return t->f8;
    }
    return -1;
}
void func_002CC4C0(void) {
    func_002EB280();
    D_0047091C = NULL;
}
void func_002CC4E0(void) {
    if (D_0047091C != NULL) {
        func_002EB290();
        memset(D_0047091C, 0, 0x40);
        D_0047091C = NULL;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CC520);
void func_002CC610(void) {
    if (D_0047091C != NULL) {
        amTask_KillGroup(0x20, 0x400000, 0);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CC640);
void func_002CC710(void) {
    TutWork *t = D_0047091C;
    u8 *g = D_00470570;

    if (t != NULL) {
        t->chr = (TutChr *)(g + 0x830);
        t->f4 = *(s8 *)(g + 0x8AB6);
        t->f8 = -1;
        func_002EB560(t);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CC760);
