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

typedef struct TutBuf {
    s32 f0;
    s32 f4;
    s16 f8;
    s16 fA;
} TutBuf;

typedef struct TutBlk {
    char pad0[0x14];
    s16 f14;
    char pad16[4];
    s16 f1A;
} TutBlk;

typedef struct TutChrB {
    char pad0[0x1CF4];
    TutBlk *f1CF4;
} TutChrB;

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
    char pad1764[0x1CF4 - 0x1764];
    TutBlk *f1CF4;
} TutChr;

/* The training (tutorial) work: one lesson's state. */
typedef struct TutWork {
    TutChr *chr;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
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
extern void func_001C8020(s32, void *);
extern void func_001E1510(void *);
extern void func_002EB3E0(s32, s32);
extern void func_00226030(s32, void *);
extern void func_002E9BA0(s32);
extern void (*D_004564A0[])(void);
extern void (*D_004564C0[])(void);
extern void func_002CBFF0(s32, s32);

s32 func_002CAED0(void) {
    s32 *p = &D_0047091C->f20;

    if (D_0047091C->chr->fCAC == 4) {
        *p = (s32)((f32)*p + *(f32 *)(D_00470570 + 0x88F0));
    }
    if ((f32)*p >= 120.0f) {
        return 1;
    }
    return 0;
}
s32 func_002CAF50(void) {
    TutWork *t = D_0047091C;
    s32 *p = &t->f20;

    if (t->f32 == 0x1A) {
        (*p)++;
    }
    if (*p >= 3) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CAFA0);
/* differs: the same ring walk; the original has its nop-padded join and the early exit at a different place (0x80 bytes, ours 0x6C) */
#if 0
s32 func_002CB070(void) {
    TutChr *c = D_0047091C->chr;
    s32 n = 0;
    s32 i = c->f1360.rd;
    s32 lim = *(s32 *)((u8 *)c + 0x1758);
    s32 end = c->f1360.wr;

    if (i != lim) {
        do {
            CmdHistEnt *e = &c->f1360.ent[i];
            if (e->f8 != NULL && e->f8[1] != 8) {
                n++;
            }
            if (i == end) {
                break;
            }
            i = (i + 1) & 0x1F;
        } while (i != lim);
    }
    return n >= 4;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB070);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB0F0);
s32 func_002CB1D0(void) {
    TutWork *t = D_0047091C;
    s32 *p = &t->f20;

    if (t->f32 == 7) {
        (*p)++;
    }
    if (t->f32 == 8) {
        p[1]++;
    }
    if (*p >= 2 && p[1] >= 2) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB250);
s32 func_002CB300(void) {
    TutWork *t = D_0047091C;
    s32 *p = &t->f20;

    if (t->f32 == 5) {
        (*p)++;
    }
    if (t->f32 == 6) {
        p[1]++;
    }
    if (*p > 0 && p[1] > 0) {
        return 1;
    }
    return 0;
}
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
void func_002CB470(void) {
    TutWork *t = D_0047091C;

    if (t->f18 >= 180.0f && t != NULL) {
        t->f8 = 3;
        t->f1C = -*(f32 *)(D_00470570 + 0x88F0);
        t->f18 = 0.0f;
        D_004564A0[t->f8]();
    }
}
void func_002CB4F0(void) {
    TutBuf buf;
    TutWork *t = D_0047091C;

    t->fC++;
    buf.f0 = 3;
    buf.f8 = 0;
    buf.fA = 0;
    func_001C8020(0, &buf);
    if (t->f30 >= 0) {
        t->chr->f1CF4->f14 = t->f30;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CB650);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBD40);
/* differs: the original lays the fC == 0x1E call out of line (beq to it, `b` over; 0xA0 bytes, ours 0x8C with bne inline,
   with or without an empty else). The local buf[4] sits at sp+0x20 as in the original; the value 1 is in a0, the original's in a1 */
#if 0
void func_002CBEB0(void) {
    TutWork *t = D_0047091C;
    s32 buf[4];

    *(s8 *)(D_00470570 + 0x8AAD) = 1;
    if (t->fC == 0x1E) {
        func_001E1510(t->chr);
    }
    *(s16 *)((char *)t->chr + 0x13A4) = t->chr->f1CF4->f1A;
    func_002EB3E0(t->f4, t->fC - t->f10);
    buf[0] = 0;
    func_00226030(0x27, buf);
    func_002E9BA0(0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CAED0", func_002CBEB0);
void func_002EB0D0(void);

void func_002CBF50(void) {
    func_002EB0D0();
}
void func_002CBF60(void) {
    TutWork *t = D_0047091C;

    if (*(s32 *)(D_00470570 + 0x88EC) == 0) {
        if (t->f8 >= 0) {
            D_004564C0[t->f8]();
        }
        t->f1C = t->f18;
        t->f18 = t->f18 + *(f32 *)(D_00470570 + 0x88F0);
        func_002CBFF0(0, 0);
    }
}
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
