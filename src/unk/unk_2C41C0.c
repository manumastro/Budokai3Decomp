#include "common.h"

/* A task with an entity (f18, killed with its task) and an index into D_005BD260 (f3E). */
typedef struct TaskEff2C41C0 {
    char pad0[0x18];
    void *f18;
    char pad1C[0x22];
    s16 f3E;
} TaskEff2C41C0;

extern void amTask_Kill(void *);

/* One effect's work (stride 0xF80 in gEffWork): links to two sub-parts (f34, f38). */
typedef struct EffPart2C41C0 {
    char pad0[0x30];
    f32 f30;
    struct EffPart2C41C0 *f34;
    struct EffPart2C41C0 *f38;
    s32 f3C;
    s32 f40;
} EffPart2C41C0;

/* The request of an effect: its entity (f0), a Vec4 pointer (fC), a float (f24), 64-bit entries (f30, f50). */
typedef struct EffEnt2C41C0 {
    char pad0[0x40];
    s32 f40;
    char pad44[0x18];
    s32 f5C;
    char pad60[0x18];
    s32 f78;
} EffEnt2C41C0;

typedef struct EffReq2C41C0 {
    EffEnt2C41C0 *f0;
    char pad4[0x8];
    char *fC;
    char *f10;
    char pad14[0x10];
    f32 f24;
    char pad28[0x8];
    s64 f30;
    char pad38[0x6];
    s16 f3E;
    s32 f40;
    char pad44[0xC];
    s64 f50;
    char pad58[0x4];
    s16 f5C;
} EffReq2C41C0;

extern void memset(void *, s32, s32);
extern s64 D_004563E0[];
extern s8 D_004703F4;

typedef struct Dst2C41C0 {
    char pad0[0x20];
    void *f20;
    s32 f24;
    void *f28;
    void *f2C;
    char pad30[0x38];
    s32 f68;
    s32 f6C;
} Dst2C41C0;

typedef struct Src2C41C0 {
    void *f0;
    s32 f4;
    void *f8;
    void *fC;
    char *f10;
    char pad14[0x4];
    s32 f18;
    s32 f1C;
    char pad20[0xC];
    s16 f2C;
} Src2C41C0;

/* A task of the training effects: its fighter (f34) and a flag word (f58). */
typedef struct Sub2C41C0 {
    char pad0[0x14];
    struct TutChr *f14;
} Sub2C41C0;

typedef struct Task2C41C0 {
    char pad0[0x34];
    struct TutChr *f34;
    char pad38[0x20];
    s16 f58;
} Task2C41C0;

extern void func_002152E0(void);

static inline void VecCopy(void *d, void *s) {
    asm volatile("lqc2 $vf1, 0(%1)\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(s));
}

/* A fighter-side object of the effects: its sub-object (f0) and a counter (f3A). */
typedef struct EffSubA2C41C0 {
    char pad0[0x84];
    s16 f84;
} EffSubA2C41C0;

typedef struct EffSubB2C41C0 {
    EffSubA2C41C0 *f0;
    char pad4[0x36];
    s16 f3A;
} EffSubB2C41C0;

typedef struct EffTask2C41C0 {
    char pad0[0x30];
    EffSubB2C41C0 *f30;
} EffTask2C41C0;

extern void (*D_004563D0[])(EffSubB2C41C0 *);
extern s32 D_005BD260[];

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
    char pad4[0x1C];
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

/* A command event of the training: f2 entries in fC. */
typedef struct TutEvent {
    char pad0[2];
    s16 f2;
    char pad4[2];
    s8 f6;
    u8 f7;
    char pad8[4];
    s16 **fC;
} TutEvent;

typedef struct EffWork {
    char pad0[0x4D84];
    s16 f4D84;
    s16 f4D86;
    char pad4D88[8];
} EffWork;

typedef struct TutCmd {
    s16 v[12];
} TutCmd;

typedef struct TutCmd4 {
    s16 v[4];
} TutCmd4;

extern TutWork *gTutWork;
extern char *gBattle;

extern EffWork *gEffWork;

INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C41C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C4C90);
void func_002C5EB0(Dst2C41C0 *d, Src2C41C0 *s) {
    char *b = s->f10;

    if (s->f0 != 0) {
        d->f20 = s->f0;
    } else {
        d->f20 = gBattle + 0x60;
    }
    if (s->f4 != 0) {
        d->f24 = s->f4;
    } else {
        d->f24 = *(s32 *)(gBattle + 0x264);
    }
    if (s->f8 != 0) {
        d->f28 = s->f8;
    } else if ((s->f2C & 0x8000) != 0) {
        d->f28 = b + (s->f18 << 4) + 0x650;
    } else {
        d->f28 = b + (d->f68 << 4) + 0x650;
    }
    if (s->fC != 0) {
        d->f2C = s->fC;
    } else if ((s->f2C & 0x8000) != 0) {
        d->f2C = b + (s->f1C << 4) + 0x650;
    } else {
        d->f2C = b + (d->f6C << 4) + 0x650;
    }
}
#if 0
// differs: the fighter value is held in a0 instead of a1: the register choice of the local is not reproduced
s32 func_002C5FC0(Task2C41C0 *t) {
    s32 k;
    Sub2C41C0 *sb = (Sub2C41C0 *)((char *)t + 0x20);
    EffWork *w;

    k = ((t->f58 & 0x80) != 0) ? 0 : sb->f14->f1350;
    w = gEffWork;
    if (w->f4D86 & 0x8000) {
        func_002152E0();
        return 1;
    }
    if (k == 0 && (w->f4D86 & 0x2000)) {
        func_002152E0();
        w = gEffWork;
        if (w->f4D84 == 0) {
            w->f4D86 &= ~0x2000;
        }
        return 1;
    }
    if (k == 1 && (gEffWork->f4D86 & 0x1000)) {
        func_002152E0();
        w = gEffWork;
        if (w->f4D84 == 0) {
            w->f4D86 &= ~0x1000;
        }
        return 1;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C5FC0);
#if 0
// differs: 17 of 57 with the adda.s/madd.s tail in inline asm (the asm acts as a scheduling barrier, the p[] loads move); the plain tail gave 11 of 57
typedef struct Bin2C41C0 {
    f32 a[20];
    s32 f50;
} Bin2C41C0;
extern void func_002C61A0(void *);

f32 func_002C60B0(Bin2C41C0 *s, f32 t) {
    s32 a1;
    s32 a0;
    s32 v1;
    f32 *p;
    f32 f4;
    f32 f3;
    f32 f1;
    f32 f2;
    f32 f0;

    if ((s->f50 & 0x100) == 0) {
        func_002C61A0(s);
    }
    a1 = 0;
    a0 = 3;
    do {
        v1 = (a1 + a0) / 2;
        if (s->a[v1] < t) {
            a1 = v1 + 1;
        } else {
            a0 = v1;
        }
    } while (a1 < a0);
    if (a1 > 0) {
        a1--;
    }
    p = &s->a[a1];
    f4 = t - p[0];
    f3 = p[4];
    f1 = p[12];
    f2 = p[8];
    f0 = p[16];
    f1 = f1 * f4;
    f2 = f2 * f4;
    f0 = f0 * f4;
    f1 = f4 * f1;
    f2 = f3 + f2;
    f0 = f4 * f0;
    asm volatile("adda.s %1, %2
	madd.s %0, %3, %0" : "+f"(f0) : "f"(f2), "f"(f1), "f"(f4));
    return f0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C60B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C61A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C63C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6700);
#if 0
// differs: compiled 0x200 bytes, original 0x230; the pool pointers take the other saved registers and the d load is scheduled late (106 instructions differ; 120 declaration orders tried). Sibling func_002C8670 has the same body.
#define W32_2C41C0(p, o) (*(s32 *)((char *)(p) + (o)))
#define P_2C41C0(p, o) (*(char **)((char *)(p) + (o)))
#define F32_2C41C0(p, o) (*(f32 *)((char *)(p) + (o)))
#define H16_2C41C0(p, o) (*(s16 *)((char *)(p) + (o)))
s32 func_002C6930(char *e) {
    char *d = P_2C41C0(e, 0);
    char *base = (char *)gEffWork + H16_2C41C0(e, 0x3E) * 3968;
    char *s3 = base + (H16_2C41C0(e, 0x5C) << 6);
    char *s1 = base + 0xF00;
    char *s2 = base + 0xF40;
    char *prev;
    f32 k;

    if (H16_2C41C0(e, 0x38) & 0x8000) {
        return 1;
    }
    if (P_2C41C0(s3, 0x34) != 0 && P_2C41C0(s1, 0x34) == s3) {
        P_2C41C0(P_2C41C0(s3, 0x34), 0x38) = s1;
        P_2C41C0(s1, 0x34) = P_2C41C0(s3, 0x34);
    }
    memset(s3, 0, 0x40);
    P_2C41C0(s3, 0x34) = s2;
    P_2C41C0(s3, 0x38) = P_2C41C0(s2, 0x38);
    P_2C41C0(s2, 0x38) = s3;
    prev = P_2C41C0(s3, 0x38);
    P_2C41C0(prev, 0x34) = s3;
    asm volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(P_2C41C0(e, 0xC)), "r"(s3) : "memory");
    asm volatile("lqc2 $vf1, 0(%0)\n\tlqc2 $vf2, 0(%1)\n\tvsub.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%2)" : : "r"(s3), "r"(prev), "r"(s3 + 0x20) : "memory");
    if (gBattle != 0) {
        k = F32_2C41C0(gBattle, 0x88F0);
    } else if (D_004703F4 == 3) {
        k = 1.2f;
    } else {
        k = 1.0f;
    }
    F32_2C41C0(s3, 0x30) = (f32)W32_2C41C0(d, 0x5C) * k;
    H16_2C41C0(e, 0x5C) = H16_2C41C0(e, 0x5C) + 1;
    W32_2C41C0(e, 0x40) = W32_2C41C0(e, 0x40) + 1;
    if (!(W32_2C41C0(e, 0x40) < W32_2C41C0(d, 0x5C))) {
        W32_2C41C0(e, 0x40) = W32_2C41C0(d, 0x5C);
        H16_2C41C0(e, 0x5C) = (s16)W32_2C41C0(P_2C41C0(s1, 0x34), 0x3C);
    }
    if (gBattle != 0) {
        k = F32_2C41C0(gBattle, 0x88F0);
    } else if (D_004703F4 == 3) {
        k = 1.2f;
    } else {
        k = 1.0f;
    }
    F32_2C41C0(e, 0x20) = F32_2C41C0(e, 0x20) - k;
    if (F32_2C41C0(e, 0x20) < 0.0f) {
        F32_2C41C0(e, 0x20) = 0.0f;
        H16_2C41C0(e, 0x38) = H16_2C41C0(e, 0x38) | 0x8000;
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6930);
void func_002C6B60(TaskEff2C41C0 *t) {
    EffWork *w = gEffWork;
    s16 *p = &w->f4D84;

    if (w->f4D84 > 0) {
        *p = w->f4D84 - 1;
        if (gEffWork->f4D84 == 0) {
            gEffWork->f4D86 &= 0x7FFF;
        }
        if (t->f18 != 0) {
            amTask_Kill(t->f18);
            t->f18 = 0;
        }
    }
    D_005BD260[t->f3E] = 0;
}
void func_002C6BF0(EffReq2C41C0 *s) {
    EffPart2C41C0 *p;
    EffEnt2C41C0 *e;
    EffPart2C41C0 *s4;
    EffPart2C41C0 *s3;
    f32 k;

    p = (EffPart2C41C0 *)((char *)gEffWork + 0xF80 * s->f3E);
    e = s->f0;
    s4 = (EffPart2C41C0 *)((char *)p + 0xF40);
    s3 = (EffPart2C41C0 *)((char *)p + 0xF00);
    memset(p, 0, 0xF80);
    p->f34 = s4;
    s4->f38 = p;
    p->f38 = s3;
    s3->f34 = p;
    VecCopy(p, s->fC);
    if (gBattle != 0) {
        k = *(f32 *)(gBattle + 0x88F0);
    } else {
        if (D_004703F4 != 3) {
            k = 1.0f;
        } else {
            k = 1.2f;
        }
    }
    p->f30 = (f32)e->f5C * k;
    p->f3C = 0;
    s->f5C = 1;
    s->f40 = s->f40 + 1;
    s->f30 = D_004563E0[e->f78];
    if (e->f40 > 4) {
        e->f40 = 4;
    }
    s->f50 = D_004563E0[e->f40];
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6D40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C6EF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7010);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C72E0);
void func_002C7C50(TaskEff2C41C0 *t) {
    EffWork *w = gEffWork;
    s16 *p = &w->f4D84;

    if (w->f4D84 > 0) {
        *p = w->f4D84 - 1;
        if (gEffWork->f4D84 == 0) {
            gEffWork->f4D86 &= 0x7FFF;
        }
        if (t->f18 != 0) {
            amTask_Kill(t->f18);
            t->f18 = 0;
        }
    }
    D_005BD260[t->f3E] = 0;
}
void func_002C7CE0(EffReq2C41C0 *s) {
    EffPart2C41C0 *p;
    EffEnt2C41C0 *e;
    EffPart2C41C0 *s4;
    EffPart2C41C0 *s3;

    p = (EffPart2C41C0 *)((char *)gEffWork + 0xF80 * s->f3E);
    e = s->f0;
    s4 = (EffPart2C41C0 *)((char *)p + 0xF40);
    s3 = (EffPart2C41C0 *)((char *)p + 0xF00);
    memset(p, 0, 0xF80);
    p->f34 = s4;
    s4->f38 = p;
    p->f38 = s3;
    s3->f34 = p;
    VecCopy(p, s->fC);
    VecCopy((char *)p + 0x10, s->f10);
    p->f30 = s->f24;
    p->f3C = 0;
    s->f5C = 1;
    s->f40 = s->f40 + 1;
    s->f30 = D_004563E0[e->f78];
    if (e->f40 > 4) {
        e->f40 = 4;
    }
    s->f50 = D_004563E0[s->f0->f40];
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C7E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8670);
void func_002C88A0(TaskEff2C41C0 *t) {
    EffWork *w = gEffWork;
    s16 *p = &w->f4D84;

    if (w->f4D84 > 0) {
        *p = w->f4D84 - 1;
        if (gEffWork->f4D84 == 0) {
            gEffWork->f4D86 &= 0x7FFF;
        }
        if (t->f18 != 0) {
            amTask_Kill(t->f18);
            t->f18 = 0;
        }
    }
    D_005BD260[t->f3E] = 0;
}
void func_002C8930(EffReq2C41C0 *s) {
    EffPart2C41C0 *p;
    EffEnt2C41C0 *e;
    EffPart2C41C0 *s4;
    EffPart2C41C0 *s3;
    f32 k;

    p = (EffPart2C41C0 *)((char *)gEffWork + 0xF80 * s->f3E);
    e = s->f0;
    s4 = (EffPart2C41C0 *)((char *)p + 0xF40);
    s3 = (EffPart2C41C0 *)((char *)p + 0xF00);
    memset(p, 0, 0xF80);
    p->f34 = s4;
    s4->f38 = p;
    p->f38 = s3;
    s3->f34 = p;
    VecCopy(p, s->fC);
    if (gBattle != 0) {
        k = *(f32 *)(gBattle + 0x88F0);
    } else {
        if (D_004703F4 != 3) {
            k = 1.0f;
        } else {
            k = 1.2f;
        }
    }
    p->f30 = (f32)e->f5C * k;
    p->f3C = 0;
    s->f5C = 1;
    s->f40 = s->f40 + 1;
    s->f30 = D_004563E0[e->f78];
    if (e->f40 > 4) {
        e->f40 = 4;
    }
    s->f50 = D_004563E0[e->f40];
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8A80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C8D30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9120);
void func_002C9950(TaskEff2C41C0 *t) {
    EffWork *w = gEffWork;
    s16 *p = &w->f4D84;

    if (w->f4D84 > 0) {
        *p = w->f4D84 - 1;
        if (gEffWork->f4D84 == 0) {
            gEffWork->f4D86 &= 0x7FFF;
        }
        if (t->f18 != 0) {
            amTask_Kill(t->f18);
            t->f18 = 0;
        }
    }
    D_005BD260[t->f3E] = 0;
}
void func_002C99E0(EffReq2C41C0 *s) {
    EffPart2C41C0 *p;
    EffEnt2C41C0 *e;
    EffPart2C41C0 *s4;
    EffPart2C41C0 *s3;

    p = (EffPart2C41C0 *)((char *)gEffWork + 0xF80 * s->f3E);
    e = s->f0;
    s4 = (EffPart2C41C0 *)((char *)p + 0xF40);
    s3 = (EffPart2C41C0 *)((char *)p + 0xF00);
    memset(p, 0, 0xF80);
    p->f34 = s4;
    s4->f38 = p;
    p->f38 = s3;
    s3->f34 = p;
    VecCopy(p, s->fC);
    p->f30 = s->f24;
    p->f3C = 0;
    s->f5C = 1;
    s->f40 = s->f40 + 1;
    s->f30 = D_004563E0[e->f78];
    if (e->f40 > 4) {
        e->f40 = 4;
    }
    s->f50 = D_004563E0[e->f40];
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9AF0);
void func_002C9BC0(EffTask2C41C0 *t) {
    EffSubB2C41C0 *s = t->f30;
    void (*fn)(EffSubB2C41C0 *);

    fn = D_004563D0[s->f0->f84];
    if (s->f3A != 0) {
        fn(s);
    }
    s->f3A = 0;
    gEffWork->f4D86 &= ~0x800;
    gEffWork->f4D86 &= ~0x400;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9C40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002C9EF0);
extern EffWork *gEffWork;

void func_002CA230(s32 x) {
    EffWork *w = gEffWork;

    if (w->f4D84 > 0) {
        if (x == 0) {
            w->f4D86 |= 0x800;
        } else if (x == 1) {
            w->f4D86 |= 0x400;
        } else {
            w->f4D86 |= 0x8000;
        }
    }
}

void func_002CA290(s32 x) {
    EffWork *w = gEffWork;

    if (w->f4D84 > 0) {
        if (x == 0) {
            w->f4D86 |= 0x2000;
        } else if (x == 1) {
            w->f4D86 |= 0x1000;
        } else {
            w->f4D86 |= 0x8000;
        }
    }
}

typedef struct EffEnt {
    char pad0[0x30];
    f32 f30;
    char pad34[0x7C];
} EffEnt;

typedef struct EffFile {
    char pad0[8];
    s32 f8;
    s32 fC;
} EffFile;

typedef struct EffReq {
    char pad0[0x10];
    TutChr *f10;
    char pad14[0x14];
    s16 f28;
    s16 f2A;
    s16 f2C;
} EffReq;

extern EffFile *D_005BD154[];
extern char D_0046EF90[];
extern EffFile *func_0020B020(s32, s32, s32);
extern s32 func_00127E88(void *, char *, s32);
extern void func_002C9EF0(EffEnt *, EffReq *);

/* differs: 43 of 64; the original keeps five saved registers here (the pointer to the request, the file, the entry, the count and the index); this shape gives other registers */
#if 0
void func_002CA2F0(EffReq *r) {
    EffFile *f;
    EffEnt *e = 0;
    s32 n = 0;
    s32 st = 0;
    s32 i;

    if (r->f2C & 0x2000) {
        f = D_005BD154[r->f2A];
    } else {
        f = func_0020B020(r->f10->f1350, r->f28, r->f2A);
    }
    if (func_00127E88(f, D_0046EF90, 4) == 0) {
        e = (EffEnt *)((char *)f + f->fC);
        n = f->f8;
    }
    if (n > 0) {
        i = 0;
        do {
            e = (EffEnt *)((char *)e + st);
            func_002C5EB0((Dst2C41C0 *)e, (Src2C41C0 *)r);
            if (e->f30 > 0.0f) {
                func_002C9EF0(e, r);
            }
            i++;
            st += 0xB0;
        } while (i < n);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2C41C0", func_002CA2F0);

extern void memset(void *, s32, s32);
extern s32 D_005BD270[];
extern s32 D_005BD26C[];
extern s32 D_005BD268[];
extern s32 D_005BD264[];
extern s32 D_005BD260[];

void func_002CA3F0(void) {
    memset(gEffWork, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

void func_002CA440(void) {
    memset(gEffWork, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

void func_002CA490(void) {
}

void func_002CA4A0(void) {
    memset(gEffWork, 0, sizeof(EffWork));
    D_005BD270[0] = 0;
    D_005BD26C[0] = 0;
    D_005BD268[0] = 0;
    D_005BD264[0] = 0;
    D_005BD260[0] = 0;
}

s32 func_002CA4F0(TutEvent *e) {
    TutWork *t = gTutWork;
    TutChr *o;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 3) {
        return r;
    }
    {
        if (t->chr->f1350 == e->f6) {
            o = t->chr->f1354;
            if (o->fCAC != 0x31 || o->fCB8 > 20.0f) {
                if (e->f7 <= 0) {
                    for (i = 0; i < e->f2; i++) {
                        p = e->fC[i];
                        if (p[0] == 1 && p[1] == 3) {
                            r = i;
                            t->f20++;
                            break;
                        }
                    }
                }
            }
        }
    }
    return r;
}

s32 func_002CA5D0(TutChr *c) {
    TutWork *t = gTutWork;
    s32 r = 0;

    switch (t->f20) {
    case 0:
        if (t->chr->f1354 == c) {
            t->f20++;
            r = 0x31;
        }
        break;
    case 1:
        if (t->chr == c) {
            t->f20++;
            r = 5;
        }
        break;
    case 2:
        if (t->chr == c && c->fCAE == 5) {
            t->f20++;
        }
        break;
    case 4:
        if (t->chr == c) {
            r = 0x31;
            t->f20++;
        }
        break;
    }
    return r;
}

s32 func_002CA690(TutEvent *e) {
    TutWork *t = gTutWork;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 2) {
        return r;
    }
    if (t->chr->f1350 == e->f6) {
        if (e->f7 <= 0) {
            for (i = 0; i < e->f2; i++) {
                p = e->fC[i];
                if (p[0] == 0 && p[1] == 3) {
                    r = i;
                    t->f20++;
                    break;
                }
            }
        }
    }
    return r;
}

s32 func_002CA730(TutEvent *e) {
    TutWork *t = gTutWork;
    s32 r = -2;
    s32 i;
    s16 *p;

    if (t->f20 != 2) {
        return r;
    }
    {
        if (t->chr->f1350 == e->f6) {
            if (e->f7 <= 0) {
                for (i = 0; i < e->f2; i++) {
                    p = e->fC[i];
                    if (p[0] == 2 && p[1] == 3) {
                        r = i;
                        t->f20++;
                        break;
                    }
                }
            }
        }
    }
    return r;
}

s32 func_002CA7D0(CmdHist *h, s16 *cmd) {
    s32 rd = h->rd;
    s32 wr = h->wr;
    s16 *e;

    while (rd != wr) {
        rd = (rd + 1) & 0x1F;
        e = h->ent[rd].f8;
        if (e == NULL) {
            break;
        }
        if (cmd[0] == -1 && cmd[1] == -1) {
            break;
        }
        if (cmd[0] == e[0] && cmd[1] == e[1]) {
            cmd += 2;
        } else {
            cmd = NULL;
            break;
        }
    }
    if (cmd != NULL && cmd[0] == 0 && cmd[1] == 0 && rd == wr) {
        return h->ent[rd].f4;
    }
    return 0;
}

s32 func_002CA8A0(void) {
    return gTutWork->chr->fCAE == 0x31 ? 2 : 0;
}

s32 func_002CA8D0(void) {
    return gTutWork->chr->fCAE == 0x30;
}

s32 func_002CA8F0(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;

    if (t->f3C) {
        *n = 1;
    }
    if (*n && *(s16 *)(gBattle + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CA950(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
    }
    if (t->f3B) {
        *n = 1;
    }
    if (*n && *(s16 *)(gBattle + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CA9C0(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
    }
    if (t->f3A) {
        *n = 1;
    }
    if (*n && t->f32 != -1) {
        return 1;
    }
    return 0;
}

s32 func_002CAA30(void) {
    return gTutWork->chr->fCAE == 0x1B;
}

s32 func_002CAA50(void) {
    return gTutWork->f39 != 0;
}

s32 func_002CAA60(void) {
    return gTutWork->f38 != 0;
}

s32 func_002CAA70(void) {
    return gTutWork->f37 != 0;
}

s32 func_002CAA80(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;

    if (t->f36) {
        *n = 1;
    }
    if (*n && *(s16 *)(gBattle + 0x8944) == 0) {
        return 1;
    }
    return 0;
}

s32 func_002CAAE0(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;

    if (t->f32 != -1 && c->fCAE == 0x28) {
        (*n)++;
    }
    return *n >= 1;
}

extern s32 func_001D99C0(TutChr *, s32);

s32 func_002CAB30(void) {
    return func_001D99C0(gTutWork->chr->f1354, 9) >= 1;
}

s32 func_002CAB60(void) {
    return func_001D99C0(gTutWork->chr->f1354, 9) > 0 ? 2 : 0;
}

s32 func_002CABA0(void) {
    return func_001D99C0(gTutWork->chr, 8) >= 4;
}

s32 func_002CABD0(void) {
    return func_001D99C0(gTutWork->chr->f1354, 8) >= 4 ? 2 : 0;
}

s32 func_002CAC10(void) {
    return func_001D99C0(gTutWork->chr, 0x12) > 0;
}

s32 func_002CAC40(void) {
    return func_001D99C0(gTutWork->chr->f1354, 0x12) > 0 ? 2 : 0;
}

s32 func_002CAC80(void) {
    TutWork *t = gTutWork;
    TutChr *c = t->chr;

    if (c->fCAE == 0x32) {
        t->f30 = c->fBA4;
        return 1;
    }
    return 0;
}

s32 func_002CACC0(void) {
    return gTutWork->chr->fCAE == 0x1D;
}

extern TutCmd D_00456660;

s32 func_002CACE0(void) {
    TutCmd cmd = D_00456660;
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;

    if (c->fCB2 == 1 && func_002CA7D0(h, cmd.v)) {
        (*n)++;
    }
    return *n >= 1;
}

extern TutCmd4 D_00470140;

s32 func_002CAD70(void) {
    TutCmd4 cmd = D_00470140;
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;

    if (c->fCB2 == 1 && func_002CA7D0(h, cmd.v)) {
        (*n)++;
    }
    return *n >= 1;
}

s32 func_002CADF0(void) {
    TutWork *t = gTutWork;
    s32 *n = &t->f20;

    if (t->f32 == 0x1F || t->f32 == 0x20) {
        (*n)++;
    }
    if (*n >= 3) {
        return 1;
    }
    return 0;
}

extern TutCmd4 D_00470138;

s32 func_002CAE50(void) {
    TutCmd4 cmd = D_00470138;
    TutWork *t = gTutWork;
    s32 *n = &t->f20;
    TutChr *c = t->chr;
    CmdHist *h = &c->f1360;
    s32 r;

    if (c->fCB2 == 1) {
        r = func_002CA7D0(h, cmd.v);
        if (n[0] < r) {
            n[0] = r;
            n[1]++;
        }
    }
    return n[1] >= 3;
}

