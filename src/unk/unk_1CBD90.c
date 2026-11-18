#include "common.h"

/*
 * Recipes (round 4, unblock, script-command family).
 *
 * 1. Float to int. There is NO cvt.w.s / trunc.w.s problem. The original's word 0x46000024 is what `(s32)f` emits when
 *    the value is in $f0 (checked on Scr_CmdFighterSet1A5EF and Scr_CmdFighterSet1A5E against the ROM bytes). The two disassemblers
 *    only disagree on the name of funct 0x24: splat says cvt.w.s, the decompals objdump says trunc.w.s. Do not
 *    try inline asm or helper casts for it; when a float-to-int function differs, look at the registers and the
 *    load order. The `(s32)` cast of a value in another FPU register (e.g. $f12) gives 0x46006024: that is a
 *    register difference, not a conversion difference.
 * 2. A struct field the original reads early (before a store) into a spare register: declare it as a local at the
 *    top of the function (`s32 q1 = p[1];`, `s32 q2 = p[2];`) and store the local (Scr_CmdFighterSet1A5E, Scr_CmdFighterSet1A5EF).
 * 3. Local declaration order decides the registers; a permutation search over the declaration block (scratch tool
 *    compiling every order in one translation unit, comparing with the ROM) matched Scr_CmdFighterSetVec1828 (22 of 30 orders).
 * 4. `A + B` operand order is canonical in mwcc: `t + idx * 16` and `idx * 16 + t` (and `(idx << 4)`, a local k) gave
 *    the same `addu`. The 1-instruction differences of func_001CDDE0, func_001CDE40, func_001CDEA0 and func_001CDF10
 *    are the register that holds the table base and the index product; declaration orders (idx, t, k) did not flip it.
 */

typedef struct Big { char pad[0x8934]; void *tbl[2]; } Big;
extern Big *gBattle;
typedef struct Arg { char pad[0x2c]; int *p; } Arg;
typedef struct Side {
    char pad0[0xB88];
    int **blk;
    short *idx;
    char pad1[0xCC3 - 0xB90];
    signed char m;
    signed char n;
    char pad2[0x1354 - 0xCC5];
    struct Side *other;
    char pad3[0x201E - 0x1358];
    signed char out;
} Side;
extern void func_001C8480(void *, int);
extern void func_001C7D90(void *, int, void *);
extern int AdxSlot_IsPlaying(void *);
extern void func_00219270(signed char);
extern signed char func_00218B60(short, int);
extern void func_00218C40(void *, int, int, int, float, float);
extern void AdxSlot_SetVolume(void *, float);
extern void AdxSlot_Stop(void *);
extern void AdxSlot_Pause(void *);
extern void func_001D9CA0(void *, int);
extern void func_001E57F0(int);
extern void func_001A8770(int, void *);
extern void func_001E18B0(void *, int);
extern void func_001E1A40(void *, int);
extern void func_001E1BD0(void *, int, int);
extern void func_001E3550();
extern void func_001E4FA0(void *, int);
extern void func_001E4820(void *, f32, int);
extern s32 func_001C8A50(void *, int, int, int, int);
extern void func_001C89A0(void *, int);
extern s32 amMotion_FindBone(s32, s32);
extern s32 D_004B4230[];
extern f32 D_004B4234[];
extern f32 D_004B4220[];
extern f32 D_004B4224[];
extern f32 D_004B4228[];
extern f32 D_004B422C[];
extern void func_001DD680(void *, int);
extern void func_00237000(int, void *);
extern void func_001DFC80(void *, int, f32);
extern void func_001D7CC0(void *, int);
extern void func_001DFBF0(void *);
extern void func_001E1460(void *, int);
extern s32 func_001E0200(void *, s32, s32);
extern void func_001E4DA0(void *);
extern u8 D_004E0660[];
extern void func_001E6F70(void *);
extern void func_001E2180(void *, s32);
extern void func_0029D8B0(int, int);
extern void Fighter_CreateHitEffect(void *, int);
extern f32 D_004B421C[];
extern s32 gBtbBg[];
extern s32 D_0051CD20[];
extern char D_00469260[];
extern void func_001E73C0(void *);
extern void func_001D80A0(void *, int);
extern void memset(void *, s32, s32);
extern void func_001E57C0(s32, s32, void *);
extern void func_002CBFF0(s32, void *);
extern void func_001C75D0(void *, int);
extern void func_002194C0(void *, s32, s32, s32);
extern void func_001C81D0(void *, int);
extern void func_001C8210(void *, int);
extern void func_001C8860(void *, int);
extern s32 func_001E1690(void *);
extern s32 func_001DFA90(void *, int);
extern void func_001DFE60(void *, int, f32);
extern s32 func_001C8780(void *, int);
extern f32 D_004B4218[];
extern f32 D_004B4214[];
extern f32 D_004B4210[];
extern f32 D_004B423C[];
extern f32 D_004B4238[];

typedef struct KKey { u16 t; char pad[1]; s8 flag; f32 val; char pad2[8]; } KKey;
typedef struct KList { char pad[2]; s16 n; KKey *keys; } KList;
typedef struct KDst { char pad[0x1B4]; f32 a; f32 b; char pad1[8]; s16 flags; } KDst;
extern KDst *D_00470588;
typedef struct KKey2 { u16 t; char pad[2]; u16 s4; char pad2[2]; u32 w8; char pad3[4]; } KKey2;
typedef struct KList2 { char pad[2]; s16 n; KKey2 *keys; } KList2;
// func_001CBD90, func_001CBDF0, func_001CBE80: register and scheduling differences; not matched yet.
// differs: 17 of 22 instructions at best. The Arg pointer stays in v1 in the original (ours takes a0); the flag -(p[0]==0) is sltu+xori in the original, sltiu in ours.
/* r6 best attempt diff 7 */
#if 0
int func_001CBD90(void *unused, Arg *a) {
    int *p = a->p;
    Big *b = gBattle;
    s32 x0 = p[0];
    Side *s = (Side *)b->tbl[p[1]];
    if (s->n > 0) {
        *(s32 *)((char *)s->blk[0] + s->n * 8 + 8) = -((x0 != 0) ^ 1);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBD90);
#if 0
int func_001CBDF0(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    Side *s = (Side *)gBattle->tbl[p[1]];
    if (p[1] == 0) {
        if (s->m != 0) {
            s->out = x0 + 1;
        }
    } else {
        if (s->other->m != 0) {
            s->out = -(x0 + 1);
        }
    }
    return 1;
}
#endif
int func_001CBDF0(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    Side *s = (Side *)gBattle->tbl[p[1]];
    if (p[1] == 0) {
        if (s->m == 0) {
            return 1;
        }
        s->out = x0 + 1;
    } else {
        if (s->other->m == 0) {
            return 1;
        }
        s->out = -(x0 + 1);
    }
    return 1;
}
/* r6 best attempt diff 17 */
// differs: 17 of 21. The original loads the Side fields (idx, blk) in another order: p[3] table entry first, then p[1] for idx, then p[0] last; ours reorders the blk and idx loads.
#if 0
int func_001CBE80(void *unused, Arg *a) {
    int *p = a->p;
    Side *s = (Side *)gBattle->tbl[p[3]];
    short v = s->idx[p[1]];
    ((int *)((char *)s->blk[0] + v * 8))[2] = p[0];
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CBE80);
int func_001CBEE0(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    s32 n = p[1];
    s32 i2 = p[2];
    s32 i3 = p[3];
    if (n >= 0) {
        Side *s = (Side *)((char *)gBattle->tbl[i3] + i2 * 0x680);
        int *b0 = s->blk[0];
        b0[n * 2 + 2] = x0;
    }
    return 1;
}
int AdxCmd_WaitStop(void *unused, Arg *a) {
    int x = a->p[0];
    return AdxSlot_IsPlaying((char *)gBattle + (x << 5) + 0x5C4) ? 1 : 3;
}
int AdxCmd_IsPlaying(void *unused, Arg *a) {
    *(int *)a = AdxSlot_IsPlaying((char *)gBattle + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int Scr_CmdClearSlot(void *unused, Arg *a) {
    if (*(short *)((char *)gBattle + 0x7E6) != -1) {
        func_00219270(-1);
    }
    return 1;
}
int Scr_CmdReleaseSlotIdx(void *unused, Arg *a) {
    int r;
    if (*(short *)((char *)gBattle + 0x7E6) != -1) {
        r = func_00218B60(*(short *)((char *)gBattle + 0x7E4), 1);
        func_00219270(r);
    }
    return 1;
}
int Scr_CmdSetSlotVec(void *unused, Arg *a) {
    char *q = *(char **)unused;
    int *p = a->p;
    func_00218C40((char *)gBattle + (p[2] << 5) + 0x5C4, *(int *)(q + 0x10), *(int *)(q + 0x14), *(int *)(q + 0x18), *(float *)&p[1], (float)p[0]);
    return 1;
}
int AdxCmd_SetVolume(void *unused, Arg *a) {
    int *p = a->p;
    AdxSlot_SetVolume((char *)gBattle + (p[1] << 5) + 0x5C4, *(float *)p);
    return 1;
}
int Scr_CmdGetSlotF(void *unused, Arg *a) {
    int *p = a->p;
    char *e = (char *)(p[0] << 5);
    *(float *)((char *)a + 0x40) = *(float *)(e + (int)gBattle + 0x5C4);
    return 1;
}
int AdxCmd_Stop(void *unused, Arg *a) {
    AdxSlot_Stop((char *)gBattle + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int AdxCmd_Pause(void *unused, Arg *a) {
    AdxSlot_Pause((char *)gBattle + (a->p[0] << 5) + 0x5C4);
    return 1;
}
int func_001CC1B0(void *unused, Arg *a) {
    int *p = a->p;
    s32 n = p[1];
    s32 x0 = p[0];
    char *g = (char *)gBattle;
    s32 best;
    s32 i;
    f32 m;
    char *q;
    switch (n) {
    case -1:
        n = 0x6A;
        break;
    case -2:
        n = 0x6B;
        break;
    }
    best = 2;
    m = *(f32 *)(g + 0x61C);
    i = 3;
    q = g + 0x60;
    do {
        f32 t = *(f32 *)(q + 0x5DC);
        if (!(m <= t)) {
            m = t;
            best = i;
        }
        i++;
        q += 0x20;
    } while (i < 5);
    func_002194C0(g + (best << 5) + 0x5C4, n, x0, -1);
    *(s32 *)a = best;
    return 1;
}
int Scr_CmdFighterCountSet(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    s32 s1;
    s32 n;
    if (p[1] < 0) {
        n = -p[1];
        s1 = 2;
    } else {
        char *t = gBattle->tbl[p[1]];
        s1 = *(s32 *)(t + 0x1350) + 3;
        n = *(s32 *)(t + 0xB9C);
    }
    func_002194C0((char *)gBattle + (s1 << 5) + 0x5C4, n, x0, -1);
    *(s32 *)a = s1;
    return 1;
}
// // differs: 59 of 120 (round 4 chr): the task setup and the float minimum loop are scheduled differently (the original moves the t+0x30 pointer into s2 right after the call and loads gBattle+0x61C before the stores).
#if 0
extern void func_002194C0(void *, s32, s32, s32);
extern void Character_PauseVoice(s32 *);
extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void amTask_Kill(void *);
extern char D_004692B0[];
int func_001CC300(void *unused, Arg *a) {
    int *p = a->p;
    s32 x;
    s32 y;
    s32 w;
    s32 idx;
    s32 k;
    f32 best;
    f32 f0;
    char *c;
    char *t;
    s32 *q;
    char *e;
    x = p[0];
    y = p[1];
    w = p[2];
    if (w == -2) {
        w = 0x6B;
    } else if (w == -1) {
        w = 0x6A;
    }
    c = *(char **)unused;
    t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)Character_PauseVoice;
    best = *(f32 *)((char *)gBattle + 0x61C);
    idx = 2;
    e = (char *)gBattle + 0x60;
    k = 3;
    do {
        f0 = *(f32 *)(e + 0x5DC);
        if (best > f0) {
            best = f0;
            idx = k;
        }
        k++;
        e += 0x20;
    } while (k < 5);
    *(char **)(t + 0x3C) = (char *)gBattle + (idx << 5) + 0x5C4;
    func_002194C0(*(void **)(t + 0x3C), w, y, -1);
    q = (s32 *)(t + 0x30);
    if (*(s32 *)((char *)gBattle + 0x88EC) == 0) {
        q[0] += 1;
        if ((f32)q[0] * *(f32 *)((char *)gBattle + 0x88F0) >= *(f32 *)(q + 1)) {
            ((void (*)(void *))*(void **)(q + 2))(t);
            amTask_Kill(t);
        }
    }
    *(s32 *)a = idx;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CC300);
extern void amTask_Kill(void *);
extern void func_002194C0(void *, s32, s32, s32);
extern void Character_PauseVoice(s32 *);
extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern char D_004692B0[];
int func_001CC4B0(void *unused, Arg *a)
{
  int *p = a->p;
  s32 x;
  s32 y;
  s32 w;
  s32 s0;
  s32 s1;
  char *tb;
  s32 *q;
  char *c;
  char *t;
  char *g;
  x = p[0];
  y = p[1];
  w = p[2];
  if (w < 0)
  {
    s0 = -w;
    s1 = 2;
  }
  else
  {
    tb = (char *) gBattle->tbl[w];
    s1 = (*((s32 *) (tb + 0x1350))) + 3;
    s0 = *((s32 *) (tb + 0xB9C));
  }
  c = *((char **) unused);
  t = amTask_Create((void (*)(void *)) func_001CB020, 0, *((s32 *) (c + 0x10)), *((s32 *) (c + 0x14)), *((s32 *) (c + 0x18)), D_004692B0);
  *((s32 *) (t + 0x30)) = 0;
  *((f32 *) (t + 0x34)) = (f32) x;
  *((void **) (t + 0x38)) = (void *) Character_PauseVoice;
  *((char **) (t + 0x3C)) = (((char *) gBattle) + (s1 << 5)) + 0x5C4;
  func_002194C0(*((void **) (t + 0x3C)), s0, y, -1);
  q = (s32 *) (t + 0x30);
  g = (char *) gBattle;
  if ((*((s32 *) (g + 0x88EC))) == 0)
  {
    q[0] += 1;
    if ((((f32) q[0]) * (*((f32 *) (g + 0x88F0)))) >= (*((f32 *) (q + 1))))
    {
      ((void (*)(void *)) (*((void **) (q + 2))))(t);
      amTask_Kill(t);
    }
  }
  *((s32 *) a) = s1;
  return 1;
}

extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void amTask_Kill(void *);
extern void func_001CAFE0(void *);
extern char D_004692B0[];
int Scr_CmdSlotBufCopy3(void *unused, Arg *a) {
    int *p = a->p;
    char *c = *(char **)unused;
    s32 x = p[0];
    s32 z;
    s32 y;
    char *t;
    s32 *q;
    char *g;
    y = p[1];
    z = p[2];
    t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)func_001CAFE0;
    *(s32 *)(t + 0x3C) = z;
    *(s32 *)(t + 0x40) = y;
    q = (s32 *)(t + 0x30);
    g = (char *)gBattle;
    if (*(s32 *)(g + 0x88EC) == 0) {
        q[0] += 1;
        if ((f32)q[0] * *(f32 *)(g + 0x88F0) >= *(f32 *)(q + 1)) {
            ((void (*)(void *))*(void **)(q + 2))(t);
            amTask_Kill(t);
        }
    }
    return 1;
}
extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001CAFE0(void *);
extern char D_004692B0[];
int Scr_CmdSlotBufCopy2(void *unused, Arg *a) {
    int *p = a->p;
    char *c = *(char **)unused;
    s32 w;
    char *u;
    s32 x;
    s32 y;
    char *t;
    x = p[0];
    y = p[1];
    w = p[2];
    u = (char *)gBattle->tbl[w];
    t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)func_001CAFE0;
    *(s32 *)(t + 0x3C) = *(s32 *)(u + 0x1350) + 2;
    *(s32 *)(t + 0x40) = y;
    return 1;
}
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void func_001CB020(void *);
extern void func_001CAFE0(void *);
extern char D_004692B0[];
int Scr_CmdPlayThread(void *o, Arg *a) {
    int *p = a->p;
    char *c = *(char **)o;
    s32 x = p[0];
    s32 y = p[1];
    char *t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)func_001CAFE0;
    *(s32 *)(t + 0x3C) = 1;
    *(s32 *)(t + 0x40) = y;
    return 1;
}
int Scr_CmdFighterReset(void *unused, Arg *a) {
    func_001D9CA0(gBattle->tbl[a->p[0]], 0);
    return 1;
}
extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void amTask_Kill(void *);
extern void func_001CB010(void *);
extern char D_004692B0[];
int Scr_CmdSlotBufCopy(void *unused, Arg *a) {
    int *p = a->p;
    char *c = *(char **)unused;
    s32 x;
    s32 y;
    s32 w;
    char *t;
    s32 *q;
    char *g;
    x = p[0];
    y = p[1];
    w = p[2];
    t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)func_001CB010;
    *(char **)(t + 0x3C) = (char *)gBattle->tbl[w];
    *(s32 *)(t + 0x40) = y;
    q = (s32 *)(t + 0x30);
    g = (char *)gBattle;
    if (*(s32 *)(g + 0x88EC) == 0) {
        q[0] += 1;
        if ((f32)q[0] * *(f32 *)(g + 0x88F0) >= *(f32 *)(q + 1)) {
            ((void (*)(void *))*(void **)(q + 2))(t);
            amTask_Kill(t);
        }
    }
    return 1;
}
extern s32 BtlChara_GetF2710(s32);
int Scr_CmdFloatBuf12(void *unused, Arg *a) {
    int *p = a->p;
    f32 f = *(f32 *)p;
    s32 s3 = p[1];
    s32 s2 = p[2];
    s32 s1 = p[3];
    s32 buf[12];
    s32 *e;
    memset(buf, 0, 0x30);
    buf[0] = 5;
    e = &buf[4];
    switch (s1) {
    case 0:
    case 1:
        e[0] = BtlChara_GetF2710(*(s32 *)((char *)gBattle->tbl[s1] + 0x1350));
        break;
    case 2:
        e[0] = *(s32 *)((char *)gBattle + 0x820);
        break;
    }
    ((s16 *)e)[2] = (s16)s2;
    ((s16 *)e)[3] = (s16)s3;
    e[2] = 0;
    *(f32 *)(e + 3) = f;
    func_001E57C0(0, 0, buf);
    return 1;
}
// // differs: 52 of 90 (round 4 chr): the signed s/2 and s%2 for a negative count use bgez/andi/addiu -2 in the original; ours lays the %2 out differently.
#if 0
int func_001CCA90(void *unused, Arg *a) {
    int *p = a->p;
    s32 p0 = p[0];
    s32 p1 = p[1];
    s32 p2 = p[2];
    s32 p3 = p[3];
    char *g = (char *)gBattle;
    s32 buf[12];
    s32 *q;
    memset(buf, 0, 0x30);
    buf[0] = 1;
    q = &buf[4];
    if (p3 >= 0) {
        char *e = (char *)((void **)(g + 0x8934))[p3 % 2] + (p3 / 2) * 0x680 + p2 * 16 + 0x650;
        q[0] = (s32)e;
    }
    if (p1 >= 0) {
        char *e = (char *)((void **)(g + 0x8934))[p1 % 2] + (p1 / 2) * 0x680 + p0 * 16 + 0x650;
        q[1] = (s32)e;
    }
    func_001E57C0(0, 0, buf);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCA90);
int func_001CCBF0(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    s32 buf[12];
    f32 *q;
    memset(buf, 0, 0x30);
    buf[0] = 0;
    q = (f32 *)&buf[4];
    q[0] = x2;
    q[1] = x1;
    q[2] = x0;
    q[3] = 1.0f;
    func_001E57C0(0, 0, buf);
    return 1;
}
int Scr_CmdFlagE57F0(void *unused, Arg *a) {
    func_001E57F0(1);
    return 1;
}
int Scr_CmdGetCurF18(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x18) : 0.0f;
    return 1;
}
int Scr_CmdGetCurF14(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x14) : 0.0f;
    return 1;
}
int Scr_CmdGetCurF10(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x10) : 0.0f;
    return 1;
}
int Scr_CmdGetCurF08(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x8) : 0.0f;
    return 1;
}
int Scr_CmdGetCurF04(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)(p + 0x4) : 0.0f;
    return 1;
}
int Scr_CmdGetCurF00(void *unused, Arg *a) {
    char *p = *(char **)((char *)gBattle + 0x260);
    *(f32 *)((char *)a + 0x40) = p ? *(f32 *)p : 0.0f;
    return 1;
}
int Scr_CmdSetF218(void *unused, Arg *a) {
    D_004B4218[0] = *(f32 *)a->p;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CCDD0);
int Scr_CmdCallA8770(void *unused, Arg *a) {
    func_001A8770(3, 0);
    return 1;
}
int Scr_CmdFloatBuf6(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    f32 buf[6];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    f32 x4 = f[4];
    buf[0] = x4;
    buf[1] = x3;
    buf[2] = x2;
    buf[3] = 1.0f;
    buf[4] = x1;
    buf[5] = x0;
    func_001A8770(2, buf);
    return 1;
}
int Scr_CmdSetF214(void *unused, Arg *a) {
    D_004B4214[0] = *(f32 *)a->p;
    return 1;
}
int Scr_CmdSetF210(void *unused, Arg *a) {
    D_004B4210[0] = *(f32 *)a->p;
    return 1;
}
int Scr_CmdSetF210To21C(void *unused, Arg *a) {
    D_004B4210[0] = ((f32 *)a->p)[3];
    D_004B4214[0] = ((f32 *)a->p)[2];
    D_004B4218[0] = ((f32 *)a->p)[1];
    D_004B421C[0] = ((f32 *)a->p)[0];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD050);
int Scr_CmdCallBuf20(void *unused, Arg *a) {
    s32 v = *(s32 *)*(s32 **)((char *)a + 0x2C);
    s32 buf[20];
    memset(buf, 0, 0x50);
    buf[12] = v;
    buf[8] = 0;
    buf[9] = 0;
    func_001A8770(1, buf);
    return 1;
}
int Scr_CmdCreateHitEffect(void *unused, Arg *a) {
    Fighter_CreateHitEffect(gBattle->tbl[a->p[0]], 0);
    return 1;
}
int Scr_CmdGetStageByte(void *unused, Arg *a) {
    char *q = (char *)D_00469260 + (gBtbBg[0] << 1);
    *(s32 *)a = *(s8 *)(D_0051CD20[0] + q);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CD340);
int Scr_CmdFindBone(void *unused, Arg *a) {
    int *p = a->p;
    char *e = (char *)gBattle->tbl[p[2]] + p[1] * 0x680;
    int *blk = *(int **)(e + 0xB88);
    *(s32 *)a = amMotion_FindBone(blk[1], *(int *)((char *)a + 0x20) + p[0]);
    return 1;
}
int Scr_CmdFighterE18B0(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[1]];
    func_001E18B0(t, p[0]);
    func_001E3550(t);
    return 1;
}
int Scr_CmdFighterSetFlag2016(void *unused, Arg *a) {
    *((char *)gBattle->tbl[a->p[0]] + 0x2016) = 1;
    return 1;
}
int Scr_CmdFighterE1A40(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[1]];
    func_001E1A40(t, p[0]);
    func_001E3550(t);
    return 1;
}
int Scr_CmdFighterE1BD0(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[2]];
    func_001E1BD0(t, p[1], p[0]);
    func_001E3550(t);
    return 1;
}
int Scr_CmdPairCall237000(void *unused, Arg *a) {
    void *x[2];
    x[0] = gBattle->tbl[0];
    x[1] = gBattle->tbl[1];
    func_00237000(6, x);
    return 1;
}
int Scr_CmdFighterGetByte2013(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    *(s32 *)a = 0;
    if (*(s8 *)(t + 0x1FF8) > -1) {
        *(s32 *)a = *(s8 *)(t + 0x2013);
    }
    return 1;
}
int Scr_CmdFighterClear17E4(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    *(s32 *)(t + 0x17E4) = 0;
    func_001DFBF0(t);
    func_001D7CC0(t, 0);
    return 1;
}
int Scr_CmdFighterGetAngle17A4(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    *(f32 *)((char *)a + 0x40) = 360.0f * ((f32)*(s32 *)(t + 0x17A4) / 65536.0f);
    return 1;
}
int Scr_CmdFighterE1460(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    func_001E1460(t, 1);
    func_001D7CC0(t, 0);
    return 1;
}
int Scr_CmdFighterDD680(void *unused, Arg *a) {
    func_001DD680(gBattle->tbl[a->p[0]], 1);
    return 1;
}
int Scr_CmdFighterIsNone1FF8(void *unused, Arg *a) {
    *(s32 *)a = *(s8 *)((char *)gBattle->tbl[a->p[0]] + 0x1FF8) <= -1;
    return 1;
}

int Scr_CmdGetFighterDFA90(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = func_001DFA90(gBattle->tbl[p[1]], p[0]);
    return 1;
}
int Scr_CmdFighterGetShort1CF4(void *unused, Arg *a) {
    char *q = *(char **)((char *)gBattle->tbl[a->p[0]] + 0x1CF4);
    *(s32 *)a = *(s16 *)(q + 0x12);
    return 1;
}
int Scr_CmdEntryGetInt0BA0(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)gBattle->tbl[p[1]] + p[0] * 0x680 + 0xBA0);
    return 1;
}
int Scr_CmdEntryGetInt0BA4(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)gBattle->tbl[p[1]] + p[0] * 0x680 + 0xBA4);
    return 1;
}
int Scr_CmdFighterGetInt1CFC(void *unused, Arg *a) {
    *(s32 *)a = *(s32 *)((char *)gBattle->tbl[a->p[0]] + 0x1CFC);
    return 1;
}
int Scr_CmdEntryGetInt0B9C(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = *(s32 *)((char *)gBattle->tbl[p[1]] + p[0] * 0x680 + 0xB9C);
    return 1;
}
int Scr_CmdFighterGetF17D4(void *unused, Arg *a) {
    *(s32 *)a = (s32)*(f32 *)((char *)gBattle->tbl[a->p[0]] + 0x17D4);
    return 1;
}
int Scr_CmdFighterGetSelF17D(void *unused, Arg *a) {
    char *t = gBattle->tbl[*a->p];
    f32 f = (*(f32 *)(t + 0x1A40) > 0.0f) ? *(f32 *)(t + 0x17D4) : *(f32 *)(t + 0x17D0);
    *(s32 *)a = (s32)f;
    return 1;
}
int Scr_CmdFighterGetF17C4(void *unused, Arg *a) {
    *(s32 *)a = (s32)*(f32 *)((char *)gBattle->tbl[a->p[0]] + 0x17C4);
    return 1;
}
int Scr_CmdFighterGetF17C0(void *unused, Arg *a) {
    *(s32 *)a = (s32)*(f32 *)((char *)gBattle->tbl[a->p[0]] + 0x17C0);
    return 1;
}
int Scr_CmdFighterGetInt0B70(void *unused, Arg *a) {
    *(s32 *)a = *(s32 *)((char *)gBattle->tbl[a->p[1]] + 0xB70);
    return 1;
}
extern f32 func_00200270(s32, f32, f32);
int Scr_CmdFighterDistance(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    f32 r = func_00200270(0, *(f32 *)(t + 0x650), *(f32 *)(t + 0x658));
    *(f32 *)((char *)a + 0x40) = *(f32 *)(t + 0x44) - r;
    return 1;
}
int Scr_CmdFighterGetByte1FF9(void *unused, Arg *a) {
    *(s32 *)a = *(s8 *)((char *)gBattle->tbl[a->p[0]] + 0x1FF9);
    return 1;
}
int Scr_CmdEntryGetF0CB8(void *unused, Arg *a) {
    int *p = a->p;
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)gBattle->tbl[p[1]] + p[0] * 0x680 + 0xCB8);
    return 1;
}
int Scr_CmdGetFighterF124(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    func_001E4DA0(t);
    *(f32 *)((char *)a + 0x40) = *(f32 *)(t + 0x124);
    return 1;
}
int Scr_CmdGetBattleF8968(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)gBattle + 0x8968);
    return 1;
}
int Scr_CmdGetBattleF8964(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)gBattle + 0x8964);
    return 1;
}
int Scr_CmdGetBattleF8960(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)gBattle + 0x8960);
    return 1;
}
int func_001CDDE0(void *unused, Arg *a) {
    int *p = a->p;
    s32 idx = p[0];
    s32 t = (s32)gBattle->tbl[p[1]];
    if (idx >= 0 && idx < 0x16) {
        *(f32 *)((char *)a + 0x40) = *(f32 *)((idx << 4) + t + 0x658);
    } else {
        *(f32 *)((char *)a + 0x40) = *(f32 *)(t + 0x48);
    }
    return 1;
}
int func_001CDE40(void *unused, Arg *a) {
    int *p = a->p;
    s32 idx = p[0];
    s32 t = (s32)gBattle->tbl[p[1]];
    if (idx >= 0 && idx < 0x16) {
        *(f32 *)((char *)a + 0x40) = *(f32 *)((idx << 4) + t + 0x654);
    } else {
        *(f32 *)((char *)a + 0x40) = *(f32 *)(t + 0x44);
    }
    return 1;
}
int func_001CDEA0(void *unused, Arg *a) {
    int *p = a->p;
    s32 idx = p[0];
    s32 t = (s32)gBattle->tbl[p[1]];
    if (idx >= 0 && idx < 0x16) {
        *(f32 *)((char *)a + 0x40) = *(f32 *)((idx << 4) + t + 0x650);
    } else {
        *(f32 *)((char *)a + 0x40) = *(f32 *)(t + 0x40);
    }
    return 1;
}
int Scr_CmdNop(void *unused, Arg *a) {
    return 1;
}
int func_001CDF10(void *unused, Arg *a) {
    int *p = a->p;
    s32 idx = p[0];
    s32 t = (s32)gBattle->tbl[p[1]];
    s8 *q;
    u8 *e = D_004E0660 + 21 + idx * 40;
    *(s16 *)(t + 0x1FEA) = idx;
    q = (s8 *)(*e + t + 0x1FBD);
    if (*q < 4) {
        *q = *q + 1;
    }
    return 1;
}
int Scr_CmdFighterFloatDFE60(void *unused, Arg *a) {
    int *p = a->p;
    func_001DFE60(gBattle->tbl[p[1]], 0, (f32)-p[0]);
    return 1;
}
int Scr_CmdFighterE0200(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[1]];
    *(s32 *)a = func_001E0200(t, -p[0], 0);
    return 1;
}
int Scr_CmdFighterFloatDFC80(void *unused, Arg *a) {
    int *p = a->p;
    func_001DFC80(gBattle->tbl[p[2]], p[1], (f32)p[0]);
    return 1;
}
int Scr_CmdFighterCheckSlot(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    void *t = gBattle->tbl[p[2]];
    s32 f = p[1];
    if (*(s16 *)((char *)gBattle + 0x894C) != 0 || *(s8 *)((char *)gBattle + 0x8AB8) != 0) {
        f |= 0x8000;
    }
    *(s32 *)a = func_001E0200(t, x0, f);
    return 1;
}
extern s32 func_001DF8F0(s32 a, s32 b);
int Scr_CmdGetFighterAnimF(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    s32 v = *(s32 *)(*(char **)(t + 0x1CF4) + 0x2C);
    f32 r;
    if (v != -1) {
        r = (f32)v;
    } else if (*(s16 *)*(void **)(t + 0xBB0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
        r = 0.0f;
    } else {
        s32 idx = *(s32 *)(t + 0xBA4);
        s8 *tb = (s8 *)*(char **)(t + 0x1CF8);
        r = (f32)(tb[idx * 20 + 0xDD] * 1000);
    }
    *(f32 *)(t + 0x17D0) = r;
    return 1;
}
int Scr_CmdFighterCopyF17C4(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    *(f32 *)(t + 0x17C0) = *(f32 *)(t + 0x17C4);
    return 1;
}
int func_001CE220(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    s32 k = p[1];
    char *t = gBattle->tbl[p[2]];
    char *e = t + k * 0x680 + 0x650;
    if (k == 0) {
        func_001E2180(t, x0);
    } else {
        func_001E6F70(e);
    }
    return 1;
}
extern void func_001E2190(void *, s32);
extern void func_001E7070(void *, s32);
extern void func_001E8290(void *);
int Scr_CmdFighterSlotSetPair(void *unused, Arg *a) {
    int *p = a->p;
    s32 x = p[0];
    s32 j = p[1];
    char *t = gBattle->tbl[p[2]];
    char *s0 = t + j * 0x680 + 0x650;
    if (j == 0) {
        func_001E2190(t, x);
        func_001E3550(t);
    } else {
        func_001E7070(s0, x);
        func_001E8290(s0);
    }
    return 1;
}
// differs: 18 of 21. The Arg pointer is in v1 in the original (a1 ours); p[0]==0 is sltu+xori in the original, sltiu in ours. Explicit table local and flag local tried.
int Scr_CmdSlotFlagCBE(void *unused, Arg *a) {
    int *p = a->p;
    s8 *f = (s8 *)((char *)gBattle->tbl[p[2]] + p[1] * 0x680 + 0xCBE);
    *f = p[0] ? 0 : 1;
    return 1;
}
// differs: 18 of 21: the same as Scr_CmdSlotFlagCBE (register of the Arg pointer and the sltu+xori flag). Three forms tried (flag local, flag at the store, p[0] late): ours always loads p[0] first.
int Scr_CmdSlotFlagCBD(void *unused, Arg *a) {
    int *p = a->p;
    s8 *f = (s8 *)((char *)gBattle->tbl[p[2]] + p[1] * 0x680 + 0xCBD);
    *f = p[0] ? 0 : 1;
    return 1;
}
int Scr_CmdFighterSetF1A08(void *unused, Arg *a) {
    *(f32 *)((char *)gBattle->tbl[a->p[1]] + 0x1A08) = *(f32 *)a->p;
    return 1;
}
int Scr_CmdFighterSetVec4(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    char *t = gBattle->tbl[a->p[5]];
    f32 v0 = f[0];
    f32 v1 = f[1];
    f32 v2 = f[2];
    f32 v3 = f[3];
    f32 v4 = f[4];
    *(f32 *)(t + 0x19F4) = v4;
    *(f32 *)(t + 0x19F8) = v3;
    *(f32 *)(t + 0x19FC) = v2;
    *(f32 *)(t + 0x1A00) = v1;
    *(f32 *)(t + 0x1A04) = v0;
    return 1;
}
int Scr_CmdFighterSlotSetVec(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    f32 x0 = f[0];
    f32 x1 = f[1];
    char *t = gBattle->tbl[p[3]];
    int e = p[2] * 0x680;
    *(f32 *)(t + e + 0xCA4) = x1;
    *(f32 *)(t + e + 0xCA8) = x0;
    return 1;
}
extern void func_001E5040(void *);
int func_001CE4E0(void *unused, Arg *a) {
    int *p = a->p;
    s32 x0 = p[0];
    char *t = gBattle->tbl[p[1]];
    if (*(s8 *)(t + 0x1FF9) == x0) {
        return 1;
    }
    *(s8 *)(t + 0x1FF9) = x0;
    if (x0 == 0) {
        *(s32 *)(t + 0x1864) = 9;
    } else {
        *(s32 *)(t + 0x1864) = 3;
    }
    func_001E5040(t);
    return 1;
}
/* r6 best attempt diff 12 */
/* Ours emits sltu for the flag; the original sets a1 = 1 and then movz a1,zero,v0. Forms tried: ?:, if, !!, f!=0, p[0]?f:0. */
#if 0
int func_001CE560(void *unused, Arg *a) {
    int *p = a->p;
    func_001D7CC0(gBattle->tbl[p[1]], p[0] == 0 ? 0 : 1);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE560);
int Scr_CmdFighterSlotCall73C0(void *unused, Arg *a) {
    int *p = a->p;
    func_001E73C0((char *)gBattle->tbl[p[1]] + p[0] * 0x680 + 0x650);
    return 1;
}
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void amTask_Kill(void *);
extern void func_001CAFB0(void *);
extern char D_004692B0[];
int Scr_CmdFighterSlotSet(void *unused, Arg *a) {
    int *p = a->p;
    char *c = *(char **)unused;
    s32 x = p[0];
    s32 y = p[1];
    char *e = (char *)gBattle->tbl[p[3]] + p[2] * 0x680 + 0x650;
    char *t = amTask_Create((void (*)(void *))func_001CB020, 0, *(s32 *)(c + 0x10), *(s32 *)(c + 0x14), *(s32 *)(c + 0x18), D_004692B0);
    s32 *q;
    char *g;
    *(s32 *)(t + 0x30) = 0;
    *(f32 *)(t + 0x34) = (f32)x;
    *(void **)(t + 0x38) = (void *)func_001CAFB0;
    *(char **)(t + 0x3C) = e;
    *(s32 *)(t + 0x40) = y;
    q = (s32 *)(t + 0x30);
    g = (char *)gBattle;
    if (*(s32 *)(g + 0x88EC) == 0) {
        q[0] += 1;
        if ((f32)q[0] * *(f32 *)(g + 0x88F0) >= *(f32 *)(q + 1)) {
            ((void (*)(void *))*(void **)(q + 2))(t);
            amTask_Kill(t);
        }
    }
    return 1;
}
int Scr_CmdFighterSet1A5EF(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    s32 q1 = p[1];
    s32 q2 = p[2];
    char *t = gBattle->tbl[p[3]];
    f32 x0 = f[0];
    *(s8 *)(t + 0x1A5E) = p[2];
    *(s8 *)(t + 0x1A64) = q2 != -1;
    *(s16 *)(t + 0x1A66) = q1;
    *(f32 *)(t + 0x1A68) = *(f32 *)((char *)gBattle + 0x88F0);
    *(s32 *)(t + 0x1A60) = (s32)(65536.0f * (x0 / 360.0f));
    return 1;
}
int Scr_CmdFighterSet1A5E(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    f32 x0 = f[0];
    char *t = gBattle->tbl[p[3]];
    s32 q1 = p[1];
    *(s8 *)(t + 0x1A5E) = p[2];
    *(s8 *)(t + 0x1A5F) = q1;
    *(s32 *)(t + 0x1A60) = (s32)(65536.0f * (x0 / 360.0f));
    return 1;
}
int Scr_CmdFighterSetF182C(void *unused, Arg *a) {
    *(f32 *)((char *)gBattle->tbl[a->p[1]] + 0x182C) = *(f32 *)a->p;
    return 1;
}
int Scr_CmdSetF23C(void *unused, Arg *a) {
    D_004B423C[0] = *(f32 *)a->p;
    return 1;
}
int Scr_CmdSetF238(void *unused, Arg *a) {
    D_004B4238[0] = *(f32 *)a->p;
    return 1;
}
int Scr_CmdSetVec4B4230(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    s32 v4 = p[4];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    D_004B4230[0] = v4;
    D_004B4234[0] = x0;
    D_004B4220[0] = x3;
    D_004B4224[0] = x2;
    D_004B4228[0] = x1;
    D_004B422C[0] = 1.0f;
    return 1;
}
int Scr_CmdFighterSetVec5(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    s32 v6 = p[6];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    f32 x3 = f[3];
    f32 x4 = f[4];
    f32 x5 = f[5];
    D_004B4230[0] = v6;
    D_004B4234[0] = x2;
    D_004B4220[0] = x5;
    D_004B4224[0] = x4;
    D_004B4228[0] = x3;
    D_004B422C[0] = 1.0f;
    D_004B4238[0] = x1;
    D_004B423C[0] = x0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CE960);
extern void func_001C75D0(void *, s32);

int func_001CED20(void *unused, Arg *a) {
    int *p = a->p;
    s32 s = p[0];
    s32 m = p[1];
    s32 idx = p[2];
    char *b = (char *)gBattle->tbl[idx];
    if (*(s16 *)(b + 0xCAC) != 0x12) {
        *(s16 *)(b + 0xCB4) = (s16)m;
        if (*(s8 *)(b + 0x1FF9) != 0 && *(s8 *)(b + 0x1FF8) <= -1) {
            func_001C75D0(b, 0x10);
        } else {
            __asm__ volatile ("sqc2 $vf0, 0x0(%0)" : : "r"(b + 0xD0));
            func_001C75D0(b, 0x12);
        }
    }
    *(f32 *)(b + 0x18A4) = (f32)(s * 3);
    return 1;
}
int Scr_CmdFighterSetVec1828(void *unused, Arg *a) {
    f32 *f = (f32 *)a->p;
    char *t = gBattle->tbl[a->p[3]];
    f32 x0 = f[0];
    f32 x1 = f[1];
    f32 x2 = f[2];
    *(f32 *)(t + 0x1828) = x2;
    *(s32 *)(t + 0x1838) = (s32)(65536.0f * (x0 / 360.0f));
    *(s32 *)(t + 0x1834) = (s32)(65536.0f * (x1 / 360.0f));
    *(s8 *)(t + 0x183C) = 5;
    func_001C75D0(t, 20);
    return 1;
}
extern void func_001C75D0(void *, s32);
int func_001CEE80(void *unused, Arg *a) {
    int *p = a->p;
    f32 d = 360.0f;
    f32 k = 65536.0f;
    f32 x = *(f32 *)&p[0];
    f32 y = *(f32 *)&p[1];
    s32 c = p[2];
    char *t = (char *)gBattle->tbl[p[3]];
    *(f32 *)(t + 0x1828) = y;
    *(s32 *)(t + 0x1838) = 0;
    *(s32 *)(t + 0x1834) = (s32)(k * (x / d));
    *(s8 *)(t + 0x183C) = (s8)c;
    func_001C75D0(t, 20);
    return 1;
}
int Scr_CmdFighterSetVecPair(void *unused, Arg *a) {
    int *p = a->p;
    f32 *f = (f32 *)p;
    f32 x0 = f[0];
    s32 p2 = p[2];
    f32 x1 = f[1];
    char *t = gBattle->tbl[p[3]];
    *(s16 *)(t + 0xCB4) = 0;
    *(s16 *)(t + 0x181E) = p2;
    *(f32 *)(t + 0x1814) = x1;
    *(f32 *)(t + 0x1810) = x0;
    func_001C75D0(t, 16);
    return 1;
}
extern void func_00146ED0(void *, void *, f32);
extern void func_001C75D0(void *, s32);

int func_001CEF60(void *unused, Arg *a) {
    int *p = a->p;
    f32 x = *(f32 *)&p[0];
    s32 n = p[1];
    s32 i2 = p[2];
    char *t = (char *)gBattle->tbl[i2];
    *(s16 *)(t + 0xCB4) = (s16)n;
    {
        u8 *src = *(u8 **)(t + 0x1354);
        __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; lqc2 $vf2, 0x0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0x0(%0)" : : "r"(t + 0xD0), "r"(t + 0x650), "r"(src + 0x650) : "memory");
    }
    *(f32 *)(t + 0xD4) = 0.0f;
    func_00146ED0(t + 0xD0, t + 0xD0, x);
    func_001C75D0(t, 0x11);
    return 1;
}
int Scr_CmdFighterClear75D0(void *unused, Arg *a) {
    func_001C75D0(gBattle->tbl[a->p[0]], 0);
    return 1;
}
int Scr_CmdFighterStateReset(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    func_001E4FA0(t, 2);
    func_001E4FA0(*(void **)(t + 0x1354), 2);
    func_001E4820(t, 1.0f, 0);
    return 1;
}
extern void func_001E5040(void *);
int Scr_CmdFighterSet1864(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[1]];
    *(s32 *)(t + 0x1864) = a->p[0];
    func_001E5040(t);
    func_001E4FA0(t, -1);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF100);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF2C0);
int Scr_CmdGetFighterE1690(void *unused, Arg *a) {
    *(s32 *)a = func_001E1690(gBattle->tbl[a->p[0]]);
    return 1;
}
int Scr_CmdFighterReset81D0(void *unused, Arg *a) {
    char *t = gBattle->tbl[a->p[0]];
    func_001C81D0(t, *(s32 *)(t + 0xBA8));
    return 1;
}
int Scr_CmdFighterSet8210(void *unused, Arg *a) {
    int *p = a->p;
    func_001C8210(gBattle->tbl[p[1]], p[0]);
    return 1;
}

int Scr_CmdFighterSetup8480(void *unused, Arg *a) {
    int side = a->p[1];
    int id = a->p[0];
    func_001C8480(gBattle->tbl[side], id);
    func_001C7D90(gBattle->tbl[side], id, gBattle->tbl[1 - side]);
    return 1;
}
/* r6 best attempt diff 4 */
// differs: 4 instructions (register choice for the tbl temporaries, gBattle reloc field). The 5-argument call matches the real callee signature; permuter from base 20 reached best score 10 in 450 s, no score 0.
#if 0
int func_001CF600(void *unused, Arg *a) {
    int *p = a->p;
    int i3 = p[3];
    int s0 = p[2];
    int a3v = p[1];
    int t0v = p[0];
    char *t = gBattle->tbl[i3];
    char *q = *(char **)(t + 0x1CF8);
    short v = *(short *)(q + s0 * 20 + 0xD6);
    func_001C8A50(t, s0, v, a3v, t0v);
    func_001C89A0(t, s0);
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CF600);
int Scr_CmdFighterCall8860(void *unused, Arg *a) {
    int *p = a->p;
    func_001C8860(gBattle->tbl[p[1]], p[0]);
    return 1;
}
int func_001CF6D0(void *o, Arg *a) {
    if (func_001C8780(gBattle->tbl[*(s8 *)((char *)o + 0x28)], *(s8 *)((char *)o + 0x29))) {
        *(void **)((char *)o + 0x10) = 0;
        return 1;
    }
    return 3;
}
int Scr_CmdTickSetBytes(void *o, Arg *a) {
    int *p = a->p;
    s32 b = p[0];
    *(s8 *)((char *)o + 0x28) = p[1];
    *(s8 *)((char *)o + 0x29) = b;
    *(void **)((char *)o + 0x10) = func_001CF6D0;
    return 3;
}
int Scr_CmdGetFighterByte(void *unused, Arg *a) {
    int *p = a->p;
    *(s32 *)a = func_001C8780(gBattle->tbl[p[1]], p[0]);
    return 1;
}
int Scr_CmdSetBattle894E(void *unused, Arg *a) {
    int *p = a->p;
    *(s16 *)((char *)gBattle + 0x894E) = p[0] > 0;
    func_001D80A0(gBattle->tbl[0], *(s16 *)((char *)gBattle + 0x894E) ? 3 : 4);
    return 1;
}
int Scr_CmdSetFighterPair1AD2(void *unused, Arg *a) {
    int *p = a->p;
    char *t = gBattle->tbl[p[2]];
    s32 b = p[0];
    *(s16 *)(t + 0x1AD2) = p[1];
    *(s16 *)(t + 0x1AD4) = b;
    return 1;
}

int Scr_CmdSetBattle894C(void *unused, Arg *a) {
    int *p = a->p;
    *(s16 *)((char *)gBattle + 0x894C) = p[0];
    func_001D80A0(gBattle->tbl[0], 2);
    func_002CBFF0(7, gBattle->tbl[0]);
    return 1;
}
int Scr_CmdSetSoundMode(void *unused, Arg *a) {
    if (*a->p != 0) {
        func_0029D8B0(-5, 0);
    } else {
        func_0029D8B0(-1, 4);
    }
    return 1;
}
int Scr_CmdSetBattle8AAE(void *unused, Arg *a) {
    *(s8 *)((char *)gBattle + 0x8AAE) = *a->p;
    return 1;
}
int Scr_CmdGetBattleF88F0(void *unused, Arg *a) {
    *(f32 *)((char *)a + 0x40) = *(f32 *)((char *)gBattle + 0x88F0);
    return 1;
}
int Scr_CmdGetBattleTimerInt(void *unused, Arg *a) {
    *(s32 *)a = (s32)(0.5f + *(f32 *)((char *)gBattle + 0x8914));
    return 1;
}
int Scr_CmdBattleTimerClear(void *unused, Arg *a) {
    *(s32 *)((char *)gBattle + 0x8914) = 0;
    return 1;
}
int func_001CF990(void *o, Arg *a) {
    int r;
    if (0.5f + *(f32 *)((char *)gBattle + 0x8914) >= (f32)*(s32 *)((char *)o + 0x24)) {
        *(void **)((char *)o + 0x10) = 0;
        r = 1;
    } else {
        r = 3;
    }
    return r;
}
int Scr_CmdWaitSetFrames(void *o, Arg *a) {
    *(s32 *)((char *)o + 0x24) = *a->p;
    *(void **)((char *)o + 0x10) = func_001CF990;
    return 3;
}
int func_001CFA00(void *o, Arg *a) {
    int r;
    if (0.5f + (*(f32 *)((char *)gBattle + 0x8914) - *(f32 *)((char *)o + 0x2C)) >= (f32)*(s32 *)((char *)o + 0x24)) {
        *(void **)((char *)o + 0x10) = 0;
        r = 1;
    } else {
        r = 3;
    }
    return r;
}
int Scr_CmdWaitStartF8914(void *o, Arg *a) {
    int *p = a->p;
    void *f = func_001CFA00;
    char *g = (char *)gBattle;
    *(s32 *)((char *)o + 0x24) = p[0];
    *(f32 *)((char *)o + 0x2C) = *(f32 *)(g + 0x8914);
    *(void **)((char *)o + 0x10) = f;
    return 3;
}

int Scr_CmdNop_002(void *unused, Arg *a) {
    return 1;
}
int Scr_CmdNop_001(void *unused, Arg *a) {
    return 1;
}
int Scr_CmdNop_000(void *unused, Arg *a) {
    return 1;
}
typedef struct CItem { u16 id; char pad[6]; u16 flags; char pad2[6]; } CItem;
typedef struct CEnt { u16 kind; s16 cnt; CItem *items; } CEnt;
typedef struct CArg { char pad[0x28]; s32 n; CEnt *ents; } CArg;
typedef struct CObj { char pad[0x248]; s32 v; } CObj;
void func_001CFAD0(CObj *o, CArg *a) {
    s32 i, j;
    o->v = -1;
    for (i = 0; i < a->n; i++) {
        CEnt *e = &a->ents[i];
        if (e->kind == 1) {
            for (j = 0; j < e->cnt; j++) {
                if ((e->items[j].flags & 0x10F) == 1) {
                    o->v = e->items[j].id;
                    break;
                }
            }
            if (o->v >= 0) {
                break;
            }
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFB80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001CFE50);
void func_001CFF90(KList2 *l, f32 t0, f32 t1) {
    s32 i, j;
    for (i = 0; i < l->n && (f32)l->keys[i].t <= t0; i++) {
    }
    if (i < l->n) {
        for (j = i; j < l->n && (f32)l->keys[j].t <= t1; j++) {
            D_00470588->flags |= l->keys[j].s4;
            D_00470588->flags &= ~(l->keys[j].w8 & 0x1F);
        }
    }
}
/* Key list walk: skip the keys at or before t0, then copy the value of every key up to t1 (the original keeps a
 * redundant `i < n` guard before the second loop). */
void func_001D00C0(KList *l, f32 t0, f32 t1) {
    s32 i, j;
    for (i = 0; i < l->n && (f32)l->keys[i].t <= t0; i++) {
    }
    if (i < l->n) {
        for (j = i; j < l->n && (f32)l->keys[j].t <= t1; j++) {
            D_00470588->a = l->keys[j].val;
        }
    }
}
void func_001D01C0(KList *l, f32 t0, f32 t1) {
    s32 i, j;
    for (i = 0; i < l->n && (f32)l->keys[i].t <= t0; i++) {
    }
    if (i < l->n) {
        for (j = i; j < l->n && (f32)l->keys[j].t <= t1; j++) {
            D_00470588->b = l->keys[j].val;
        }
    }
}
void func_001D02C0(KList *l, f32 t0, f32 t1) {
    s32 i, j;
    for (i = 0; i < l->n && (f32)l->keys[i].t <= t0; i++) {
    }
    if (i < l->n) {
        for (j = i; j < l->n && (f32)l->keys[j].t <= t1; j++) {
            if (l->keys[j].flag) {
                D_00470588->flags |= 0x40;
            } else {
                D_00470588->flags &= ~0x40;
            }
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D03E0);
void func_001D05D0(KList *l, f32 t0, f32 t1) {
    s32 i, j;
    for (i = 0; i < l->n && (f32)l->keys[i].t <= t0; i++) {
    }
    if (i < l->n) {
        for (j = i; j < l->n && (f32)l->keys[j].t <= t1; j++) {
            if (l->keys[j].flag) {
                D_00470588->flags |= 0x20;
            } else {
                D_00470588->flags &= ~0x20;
            }
        }
    }
}
void *func_001D06F0(void *o, s32 mask) {
    while (!(o != 0) == 0 && (*(u16 *)(*(char **)((char *)o + 0x20) + 8) & mask) == 0) {
        o = *(void **)((char *)o + 0x2C);
    }
    return o;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0730);
// // differs: 53 of 90 (round 4 chr): the list insert matches up to the first flag test; the count byte and the 0xA halfword store are placed differently (the original keeps the item in a2 and the head in a1), and the switch block layout is untested beyond that.
#if 0
void func_001D0860(char *o, char *a1) {
    s32 n = *(s8 *)(o + 0x1A8);
    if (n < 8) {
        char *v;
        u16 fl;
        *(s8 *)(o + 0x1A8) = (s8)(n + 1);
        v = *(char **)(o + 0x180 + n * 4);
        if (*(u16 *)(a1 + 0xA) == 0x13) {
            *(u16 *)(a1 + 0xA) = 3;
        }
        *(char **)(v + 0x20) = a1;
        if (*(char **)(o + 0x1A0) != 0) {
            *(char **)(*(char **)(o + 0x1A0) + 0x28) = v;
        }
        *(char **)(v + 0x2C) = *(char **)(o + 0x1A0);
        *(s32 *)(v + 0x28) = 0;
        *(char **)(o + 0x1A0) = v;
        fl = *(u16 *)(*(char **)(v + 0x20) + 8);
        if (fl & 0xF1) {
            *(u16 *)(a1 + 8) = fl | 1;
        }
        switch (*(u16 *)(*(char **)(v + 0x20) + 8) & 0x10F) {
        case 1:
            *(s8 *)(o + 0x1A9) += 1;
            break;
        case 4:
            *(s8 *)(o + 0x1AA) += 1;
            break;
        case 2:
            *(s8 *)(o + 0x1AB) += 1;
            break;
        case 8:
            *(s8 *)(o + 0x1AC) += 1;
            break;
        case 0x100:
            *(s8 *)(o + 0x1AD) += 1;
            break;
        }
        *(s32 *)(v + 0x24) = 1;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0860);
extern void *D_004692E0[];
void func_001D0990(void *o, void *s, s32 key, f32 val) {
    s32 i = 0;
    char *e;
    char *base;
    s32 n = *(s32 *)((char *)s + 0x28);
    if (0 < n) {
        s = *(char **)((char *)s + 0x2C);
        base = s;
        e = s;
        do {
            if (key == *(u16 *)e) {
                ((void (*)(void *, f32, f32))D_004692E0[key])(base + i * 8, *(f32 *)((char *)o + 0x1BC), val);
                break;
            }
            i++;
            e += 8;
        } while (i < n);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1CBD90", func_001D0A20);
