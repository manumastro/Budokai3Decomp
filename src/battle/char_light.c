#include "common.h"

extern void func_00146F30(void *);
typedef struct CEnt { u8 pad[0x42]; s8 b42; u8 p2; u8 *p44; f32 f48; u8 p3[0x74]; } CEnt;
typedef struct CharVec16 {
    f32 x, y, z, w;
} __attribute__((aligned(16))) CharVec16;

extern s32 func_00231E70(s32 *);
extern s32 func_002316D0(s32 *);
extern void func_001D9760(s32, s32);
extern void A2d_CallHandler(s32, s32 *);
extern void amModel_SetupPart(s32, s32, s32, f32);

extern u8 D_0058BBB0[];
extern u8 D_00447454[];
extern void (*D_0046A780[])(s32 *);
extern void amNode_Free(void *);
extern void amHeap_Free(void *);
extern void func_002361F0(void);
extern void func_0022C560(s32);
extern void memset(void *, s32, s32);
extern void func_00253FC0(s32, s32 *);
extern s32 gBtlSys;
extern void *gBattle;
extern void amCdFs_ReleaseCache(s32);
extern void amCdFs_Close(s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern u32 func_0012EAE0(s32);

extern s32 func_0022F520(char *);
extern s32 func_002CC450(char *);
s32 func_002359F0(char *a0) {
    CEnt *s0 = &((CEnt *)D_0058BBB0)[*(s32 *)(a0 + 0x1350)];
    if (s0->b42 == -1) {
        return func_0022F520(a0);
    }
    if (func_002CC450(a0) & 0x80) {
        return 0;
    }
    if (s0->f48 <= 0.0f) {
    } else {
        return 0;
    }
    return 1;
}
extern s32 func_0022F660(char *);
s32 func_00235A90(char *a0) {
    CEnt *e = &((CEnt *)D_0058BBB0)[*(s32 *)(a0 + 0x1350)];
    f32 f;
    f32 nf;
    s8 c;
    if (e->b42 == -1) {
        return func_0022F660(a0);
    }
    f = e->f48;
    if (f > 0.0f) {
        nf = f - *(f32 *)((u8 *)gBattle + 0x88F0);
        e->f48 = nf;
        if (nf > 0.0f) {
            return 1;
        }
        e->f48 = 0.0f;
    }
    c = *e->p44;
    if (c != 0x2F && c != 0x53) {
        return 0;
    }
    return 1;
}
// GIVEN UP: the 1 / 100 divisions and the compare's operands come out in other registers (lh and the remainder swapped)
// // differs: 16 of 40 (round 4 chr): register choice for the constant 1 (v0 in the original) and the 0xCCCCCCCD divide constants (a1/a0); the store of 1 is scheduled after the mfhi in the original.
#if 0
s32 func_00235B60(void *a0) {
    u8 *s0;
    u32 r;
    s32 k = *(s32 *)((u8 *)a0 + 0x1350);
    s0 = (u8 *)D_0058BBB0 + k * 0xC0;
    r = func_0012EAE0(0x20);
    *(s8 *)(s0 + 0x35) = 1;
    return ((r / 10) % 100) < (u32)*(s16 *)(s0 + 0x22);
}
#endif
// differs: 13 of 30: call, table store and the magic divide match; the original keeps 1 in v0 and 0xCCCCCCCD in a1 (ours: a0 and v1), and loads lim into v1 after the multu (6 forms tried)
s32 func_00235B60(s32 *a0)
{
  s32 idx = *((s32 *) (((char *) a0) + 0x1350));
  int new_var;
  u8 *s0 = ((u8 *) D_0058BBB0) + (idx * 192);
  u32 r = func_0012EAE0(0x20);
  new_var = (r / 10) % 100;
  r = *((s16 *) (s0 + 0x22));
  s0[0x35] = 1;
  return ((u32) new_var) < ((u32) r);
}

INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235BE0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235D90);
s32 func_0022F900(u8 *, s32, s8);
s32 func_002300E0(u8 *, s32, s8);
s32 func_00236020(u8 *arg0) {
    s32 temp_a1;
    s8 temp_a2;

    temp_a2 = *(s8 *)((u8 *)arg0 + 6);
    temp_a1 = *(s32 *)((u8 *)(((u8 *)gBattle) + (temp_a2 * 0x2020)) + 0x1B80);
    if (*(s8 *)((u8 *)(D_0058BBB0 + (temp_a1 * 0xC0)) + 0x42) <= -1) {
        return func_002300E0(arg0, temp_a1, temp_a2);
    }
    return func_0022F900(arg0, temp_a1, temp_a2);
}

s32 func_00236090(s32 *a0) {
    s32 idx = *(s32 *)((char *)a0 + 0x1350);
    if (*(s8 *)((char *)D_0058BBB0 + idx * 192 + 0x42) <= -1) {
        return func_00231E70(a0);
    }
    return func_002316D0(a0);
}
void func_002360F0(void) {
    memset(D_0058BBB0, 0, 0x300);
}
typedef struct BGlob { u8 pad[0x88D8]; s32 cnt; } BGlob;
typedef struct CEnt2 { s32 h; s32 f; u8 pad[0xB8]; } CEnt2;
void func_00236110(void) {
    CEnt2 *e;
    s32 i;
    i = 0;
    if (i < ((BGlob *)gBattle)->cnt) {
        e = (CEnt2 *)D_0058BBB0;
        do {
            if (e->f != 0) {
                amCdFs_ReleaseCache(e->h);
                e->h = 0;
                e->f = 0;
            } else if (e->h != 0) {
                amCdFs_Close(e->h, 0);
                e->h = 0;
            }
            i++;
            e++;
        } while (i < ((BGlob *)gBattle)->cnt);
    }
    memset(D_0058BBB0, 0, 0x300);
}
void func_002361D0(void) {
    func_002361F0();
}
void func_002361E0(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002361F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236500);
typedef struct COb { u8 pad[0x20]; s16 f20; u8 p[0x2E]; } COb;
typedef struct CObs { COb o[4]; u8 pad[0x10]; s16 n; } CObs;
typedef struct CHd { s32 h; u8 p[0x10]; s8 b14; u8 q[0xAB]; } CHd;
s32 func_00236640(CObs *a0) {
    s32 r = 0;
    s32 i = 0;
    CHd *h;
    COb *o;
    if (i < a0->n) {
        o = (COb *)a0;
        h = (CHd *)D_0058BBB0;
        do {
            r = amCdFs_ReadFileId(0x1B9, 0, 1);
            h->h = r;
            i++;
            h->b14 = o->f20;
            o++;
            h++;
        } while (i < a0->n);
    }
    return r;
}
// GIVEN UP: the calls and the stores match; the frame is 0x10 bytes bigger (0x70 against 0x60) with the locals in any layout tried
void func_002366E0(void) {
    s32 b[9];
    s32 a[9];

    func_001F9BB0(-1, -1);
    func_00215230(-1, -1);
    func_00214FD0();
    b[4] = -1;
    func_00218440(0x10, b);
    a[4] = -1;
    Sp_CallHandler(7, a);
    func_001DA4C0();
}
// GIVEN UP: the local buffer lands 8 bytes higher in the frame
void func_00236750(s32 *p) {
    s32 buf[4];

    if (p != 0) {
        func_001D9760(p[0], p[1]);
        buf[0] = *(s32 *)((u8 *)((s32 *)p[0]) + 0x1350);
        buf[1] = *(s32 *)((u8 *)((s32 *)p[1]) + 0x1350);
        A2d_CallHandler(0x12, buf);
    }
}
extern void *gBattle;
extern void (*D_0046A750[])(s32 *);
extern void func_001B0B10(void);
extern void func_001B0810(void);
extern void func_002CBFF0(s32, s32);
void func_002367B0(s32 *p) {
    p[2] = *(s32 *)((u8 *)gBattle + 0x828);
    p[3] = 0;
    p[4] = (s32)func_001B0B10;
    p[5] = (s32)func_001B0810;
    D_0046A750[0](p);
    *(u8 *)((u8 *)gBattle + 0x8AB8) = 1;
    func_002CBFF0(8, p[0]);
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236830);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002369E0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236AF0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236C70);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236D60);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237000);
typedef struct L37Ent { s32 a, b, c, d; } L37Ent;
typedef struct L37Mdl { u8 pad[0x14]; L37Ent *ents; } L37Mdl;
typedef struct L37Obj { void *f0; s32 f4, f8, fC, f10, f14, f18, f1C; L37Mdl *mdl; s32 idx; f32 sc; s32 v; s32 fl; f32 f34; } L37Obj;
void func_00237110(L37Obj *o, u8 *a1) {
    o->f4 = 5;
    o->mdl = *(L37Mdl **)(a1 + 0x10);
    o->idx = *(s16 *)(a1 + 0x14);
    o->sc = *(f32 *)(a1 + 0x18);
    o->f34 = *(f32 *)(a1 + 0x1C);
    o->fl = 0;
    o->v = o->mdl->ents[o->idx].c;
    if ((*(s16 *)(a1 + 0x16) & 2) != 0) {
        if ((o->fl & 2) == 0) {
            amModel_SetupPart((s32)o->f0, (s32)o->mdl, o->idx, o->sc);
        }
    }
    o->fl = *(s16 *)(a1 + 0x16);
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002371C0);
void func_002373E0(s32 *p, s32 *q) {
    p[1] = 4;
    p[6] = q[4];
}
extern u8 *func_0029D7F0(void);
extern u8 *func_0029D7E0(void);
void func_00237400(s32 *a0) {
    CharVec16 tmp;
    u8 *r;
    u8 *r2;
    u8 *dst;

    if (a0[6] != 0) {
        r = *(u8 **)a0[6];
    } else {
        r = 0;
    }
    if (r == 0) {
        r = func_0029D7F0();
    }
    if (r != 0) {
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%1)" : : "r"(r), "r"(&tmp), "r"(r + 0x10) : "memory");
        func_00146F30(&tmp);
    } else {
        r2 = func_0029D7E0();
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; vsub.xyz $vf1, $vf0, $vf1 ; sqc2 $vf1, 0(%1)" : : "r"(r2), "r"(&tmp) : "memory");
    }
    dst = (u8 *)a0[0];
    dst += 0x10;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(&tmp), "r"(dst) : "memory");
}
void func_002374B0(s32 *p, s32 *q) {
    p[1] = 3;
    p[6] = q[4];
}
extern u8 *func_0029D7F0(void);
extern u8 *func_0029D7E0(void);
void func_002374D0(s32 *a0) {
    CharVec16 tmp;
    u8 *r;
    u8 *r2;
    u8 *dst;

    if (a0[6] != 0) {
        r = *(u8 **)a0[6];
    } else {
        r = 0;
    }
    if (r == 0) {
        r = func_0029D7F0();
    }
    if (r != 0) {
        __asm__ volatile ("lqc2 $vf1, 0(%2) ; lqc2 $vf2, 0(%0) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%1)" : : "r"(r), "r"(&tmp), "r"(r + 0x10) : "memory");
        func_00146F30(&tmp);
    } else {
        r2 = func_0029D7E0();
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(r2), "r"(&tmp) : "memory");
    }
    dst = (u8 *)a0[0];
    dst += 0x10;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(&tmp), "r"(dst) : "memory");
}
void func_00237580(s32 *p, s32 *q) {
    p[1] = 2;
    p[6] = q[4];
}
extern void func_00146F30(void *);
void func_002375A0(s32 *a0) {
    CharVec16 tmp;
    u8 *dst;

    if (a0[4] != 0) {
        if (a0[5] != 0) {
            __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%2)" : : "r"((u8 *)a0[5]), "r"((u8 *)a0[4]), "r"(&tmp) : "memory");
            func_00146F30(&tmp);
            dst = (u8 *)a0[0];
            dst += 0x10;
            __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(&tmp), "r"(dst) : "memory");
        }
    }
}
void func_00237610(s32 *p, s32 *q) {
    p[1] = 1;
    p[4] = q[4];
    p[5] = q[5];
}
extern u8 *func_0029D730(s32 *);
void func_00237630(s32 *a0) {
    if (a0[3] != 0) {
        u8 *r = func_0029D730(a0);
        __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"((u8 *)a0[0] + 0x10), "r"(r) : "memory");
    }
}
/* differs: compiles to 0x30 bytes against the original 0x40: the whole-struct copy collapses to one instruction pair,
   while the original keeps `lqc2 $vf1,0($v1)` / `sqc2 $vf1,0($a0)` after materialising both addresses with addiu.
   Tried: the same copy as an inline asm block (the asm block gives the source/destination registers the other way
   round), local pointers, and advancing a1 in place. */
#if 0
void func_00237670(s32 *a0, s32 *a1) {
    a0[1] = 0;
    if (a1[8] != 0) {
        a0[3] = 1;
    } else {
        a0[3] = 0;
        *(CharVec16 *)((u8 *)a0[0] + 0x10) = *(CharVec16 *)((u8 *)a1 + 0x10);
    }
}
#endif
void func_00237670(s32 *a0, s32 *a1) {
    a0[1] = 0;
    if (a1[8] != 0) {
        a0[3] = 1;
    } else {
        a0[3] = 0;
        a0 = (s32 *)a0[0];
        __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"((u8 *)a0 + 0x10), "r"((u8 *)a1 + 0x10) : "memory");
    }
}
s32 func_002376B0(s32 *p) {
    return (p != 0) ? *(s16 *)(D_00447454 + p[3] * 0x60 + p[4] * 8) : 0;
}
extern void (*D_0046A760[])(void);
void func_002376F0(s32 *p, s32 *q) {
    if (p == 0 || q == 0) {
        return;
    }
    if (q[0] < 0) {
        return;
    }
    if (q[0] >= 6) {
        return;
    }
    p[10] = 0;
    D_0046A760[q[0]]();
}
// GIVEN UP: the join labels and the flag stores are laid out differently (tried nested forms)
// // differs: 24 of 25 (round 4 chr): the original stores the zero in the bltz delay slot (before the k range test on both paths); the store placement and the join layout differ.
#if 0
void func_00237760(void *o, s32 k) {
    u16 f;
    char *q;
    if (o == 0) {
        return;
    }
    if (k < 0) {
        *(s32 *)((char *)o + 8) = 0;
        return;
    }
    *(s32 *)((char *)o + 8) = 0;
    if (!(k < 6)) {
        return;
    }
    *(s32 *)((char *)o + 8) = 0x100 << k;
    f = *(u16 *)((char *)o + 8);
    q = (char *)o;
    if (f & 0x30) {
        q = *(char **)o;
        *(u16 *)(q + 0x32) = *(u16 *)(q + 0x32) & 0xFFCF;
    }
    *(u16 *)(q + 0x32) = *(u16 *)(q + 0x32) | f;
}
#endif
void func_00237760(u8 *a0, s32 a1) {
    if (a0 == 0) {
        return;
    }
    *(s32 *)(a0 + 8) = 0;
    if (a1 < 0) {
        return;
    }
    if (a1 >= 6) {
        return;
    }
    *(s32 *)(a0 + 8) = 0x100 << a1;
    a1 = *(u16 *)(a0 + 8);
    a0 = *(u8 **)a0;
    if (a1 & 0x30) {
        *(u16 *)(a0 + 0x32) = *(u16 *)(a0 + 0x32) & 0xFFCF;
    }
    *(u16 *)(a0 + 0x32) = *(u16 *)(a0 + 0x32) | a1;
}
extern void *amHeap_Alloc(s32, s32, u8 *, s32);
extern void *amNode_Alloc(void);
extern u8 D_0046A798[];
s32 *CharLight_Create(void) {
    s32 *s = amHeap_Alloc(0x38, 1, D_0046A798, 0x108);

    memset(s, 0, 0x38);
    s[7] = 0x3F800000;
    s[0] = (s32)amNode_Alloc();
    *(u16 *)((u8 *)s[0] + 0x30) = 0;
    *(u16 *)((u8 *)s[0] + 0x32) |= 3;
    s[1] = -1;
    return s;
}
// GIVEN UP: the frame and the join label differ (tried a combined condition)
void func_00237840(void *o) {
    if (o == 0 || ((s32 *)o)[1] == -1) {
        return;
    }
    D_0046A780[((s32 *)o)[1]](o);
}
void CharLight_Release(s32 *p) {
    if (p != 0) {
        s32 v = p[0];

        if (v != 0) {
            amNode_Free((void *)v);
            p[0] = 0;
        }
        amHeap_Free(p);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002378F0);
void func_00237AE0(u8 *a0) {
    s32 s1;
    s32 buf[16];
    s1 = gBtlSys;
    func_0022C560(*(s32 *)(a0 + 0x10));
    if (*(f32 *)a0 < 8.0f) {
        return;
    }
    {
        s32 off = *(s32 *)(a0 + 0x20) * 4;
        s1 = *(s32 *)(off + s1 + 0xEC0);
    }
    memset(buf, 0, 0x40);
    *(f32 *)&buf[4] = 1.0f;
    *(f32 *)&buf[5] = 1.0f;
    *(f32 *)&buf[6] = 1.0f;
    *(f32 *)&buf[7] = 1.0f;
    buf[0] = 0x440D0000;
    buf[1] = 0x43B98000;
    buf[12] = buf[12] | 0x30001;
    *(s16 *)&buf[13] = *(s32 *)(a0 + 0x24);
    func_00253FC0(s1, buf);
}


INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237BB0);
// differs: 11 of 47 at best: the register of the first stored constant (36.0f bits via lui/ori) and the index add operand order; the frame, the early return and the call order match.
#if 0
void func_00237E00(u8 *a0) {
    s32 s1;
    s32 buf[16];
    s1 = gBtlSys;
    func_0022C560(*(s32 *)(a0 + 0x10));
    if (*(f32 *)a0 < 8.0f) {
        return;
    }
    s1 = *(s32 *)(s1 + *(s32 *)(a0 + 0x20) * 4 + 0xEC0);
    memset(buf, 0, 0x40);
    buf[12] = buf[12] | 0x20000;
    *(f32 *)&buf[0] = 36.0f;
    buf[1] = 0x43B98000;
    *(f32 *)&buf[4] = 1.0f;
    *(f32 *)&buf[5] = 1.0f;
    *(f32 *)&buf[6] = 1.0f;
    *(f32 *)&buf[7] = 1.0f;
    *(s16 *)&buf[13] = *(s32 *)(a0 + 0x24);
    func_00253FC0(s1, buf);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237E00);


INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237EC0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002380F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238200);
extern void amTask_Kill(void *);
extern void func_0022D0E0(s32, s32);
extern void func_0023A5F0(s32);
extern u8 D_0046A98A[];
void func_00238340(u8 *a0) {
    u8 *s = a0 + 0x30;

    if (*(void **)(a0 + 0x44) != 0) {
        amTask_Kill(*(void **)(a0 + 0x44));
        *(s32 *)(s + 0x14) = 0;
    }
    if (*(s32 *)(s + 0x10) != 0) {
        func_0022D0E0(*(s32 *)(s + 0x10), 1);
        *(s32 *)(s + 0x10) = 0;
    }
    if (*(s16 *)(D_0046A98A + *(s32 *)(s + 0xC) * 12) != -1) {
        func_0023A5F0(*(s16 *)(D_0046A98A + *(s32 *)(s + 0xC) * 12));
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002383D0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238610);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238790);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238C50);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 gBtlSys;
extern s32 Input_IsHeld(s32);
extern void amDraw_SetPacketMode(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C6B0(s32 *);
void func_00239110(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(4) != 0) {
            if (*(s32 *)(*s0 + 8) >= 2) {
                amDraw_SetPacketMode(1);
                e = *(s32 *)(sys + 0xE84);
                D_00470704 = e;
                D_0047070C = 0x4010000;
                D_00470708 = 0;
                amModel_SetCurrent(e, 0x4010000);
                D_00470238 = 0;
                i = 0;
                off = 0;
                do {
                    v = *(s32 *)(*s0 + off + 0xC);
                    if (v != 0) {
                        func_0022C6B0((s32 *)v);
                    }
                    i++;
                    off += 4;
                } while (i < 3);
                v = *(s32 *)(*s0 + 0x18);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                amDraw_SetPacketMode(0);
            }
        }
    }
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 gBtlSys;
extern s32 Input_IsHeld(s32);
extern void amDraw_SetPacketMode(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C6B0(s32 *);
void func_00239200(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(4) != 0) {
            e = *(s32 *)(sys + 0xE84);
            D_00470704 = e;
            D_0047070C = 0x4010000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4010000);
            D_00470238 = 0;
            if (*(s32 *)(*s0 + 8) >= 2) {
                amDraw_SetPacketMode(1);
                i = 0;
                off = 0;
                do {
                    v = *(s32 *)(*s0 + off + 0xC);
                    if (v != 0) {
                        func_0022C6B0((s32 *)v);
                    }
                    i++;
                    off += 4;
                } while (i < 3);
                v = *(s32 *)(*s0 + 0x18);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                amDraw_SetPacketMode(0);
            }
        }
    }
}
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 gBtlSys;
extern s32 Input_IsHeld(s32);
extern void amDraw_SetPacketMode(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C6B0(s32 *);
void func_002392F0(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(4) != 0) {
            if (*(s32 *)(*s0 + 8) >= 2) {
                amDraw_SetPacketMode(1);
                e = *(s32 *)(sys + 0xE84);
                D_00470704 = e;
                D_0047070C = 0x4010000;
                D_00470708 = 0;
                amModel_SetCurrent(e, 0x4010000);
                D_00470238 = 0;
                i = 0;
                off = 0;
                do {
                    v = *(s32 *)(*s0 + off + 0xC);
                    if (v != 0) {
                        func_0022C6B0((s32 *)v);
                    }
                    i++;
                    off += 4;
                } while (i < 3);
                v = *(s32 *)(*s0 + 0x18);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                amDraw_SetPacketMode(0);
            }
        }
    }
}
extern s32 D_0058BF40[];
extern void amTask_Kill(void *);
extern void func_0022D4B0(s32, s32);
void func_002393E0(u8 *a0) {
    u8 *s = a0 + 0x30;
    s32 i;

    D_0058BF40[*(s32 *)(a0 + 0x34)] = 0;
    if (*(void **)(a0 + 0x4C) != 0) {
        amTask_Kill(*(void **)(a0 + 0x4C));
    }
    if (*(s32 *)(s + 0x18) != 0) {
        func_0022D4B0(*(s32 *)(s + 0x18), 1);
        *(s32 *)(s + 0x18) = 0;
    }
    for (i = 0; i < 3; i++) {
        if (*(s32 *)(s + 0xC) != 0) {
            func_0022D4B0(*(s32 *)(s + 0xC), 1);
        }
        *(s32 *)(s + 0xC) = 0;
        s += 4;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239480);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239720);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239920);
// GIVEN UP: the battle-global load and the s0 pointer come out in other registers (a0 and a1 against s0 and a1); 46 of 56 differ with the plain form; tried a reordered pointer setup (43 of 56)
void func_00239CC0(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(8) != 0) {
            amDraw_SetPacketMode(1);
            e = *(s32 *)(sys + 0xE84);
            D_00470704 = e;
            D_0047070C = 0x4010000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4010000);
            D_00470238 = 0;

            v = *(s32 *)(*s0 + 0x1C);
            if (v != 0) {
                func_0022C6B0((s32 *)v);
            }
            i = 0;
            off = 0;
            do {
                v = *(s32 *)(*s0 + off + 0xC);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                i++;
                off += 4;
            } while (i < 4);
            amDraw_SetPacketMode(0);
        }
    }
}
// GIVEN UP: same register shape as 239CC0 (the SetPacketMode(1) after the 145CC0 call); 46 of 56 differ, tried reordering
void func_00239DA0(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(8) != 0) {
            e = *(s32 *)(sys + 0xE84);
            D_00470704 = e;
            D_0047070C = 0x4010000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4010000);
            D_00470238 = 0;
            amDraw_SetPacketMode(1);
            v = *(s32 *)(*s0 + 0x1C);
            if (v != 0) {
                func_0022C6B0((s32 *)v);
            }
            i = 0;
            off = 0;
            do {
                v = *(s32 *)(*s0 + off + 0xC);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                i++;
                off += 4;
            } while (i < 4);
            amDraw_SetPacketMode(0);
        }
    }
}
void func_00239E80(char *self) {
    char *sys = (char *)gBtlSys;
    char **s0;
    s32 i;
    s32 off;
    s32 e;
    s32 v;
    s0 = (char **)(self + 0x30);
    if (*(s8 *)((char *)gBattle + 0x8975) != 1) {
        if (Input_IsHeld(8) != 0) {
            e = *(s32 *)(sys + 0xE84);
            D_00470704 = e;
            D_0047070C = 0x4010000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4010000);
            D_00470238 = 0;
            amDraw_SetPacketMode(1);
            v = *(s32 *)(*s0 + 0x1C);
            if (v != 0) {
                func_0022C6B0((s32 *)v);
            }
            i = 0;
            off = 0;
            do {
                v = *(s32 *)(*s0 + off + 0xC);
                if (v != 0) {
                    func_0022C6B0((s32 *)v);
                }
                i++;
                off += 4;
            } while (i < 4);
            amDraw_SetPacketMode(0);
        }
    }
}
extern s32 D_0058BF30[];
extern void amTask_Kill(void *);
extern void func_0022D4B0(s32, s32);
void Dmg_TaskKill(u8 *a0) {
    u8 *s = a0 + 0x30;
    s32 i;

    D_0058BF30[*(s32 *)(a0 + 0x34)] = 0;
    if (*(void **)(a0 + 0x50) != 0) {
        amTask_Kill(*(void **)(a0 + 0x50));
    }
    if (*(s32 *)(s + 0x1C) != 0) {
        func_0022D4B0(*(s32 *)(s + 0x1C), 1);
        *(s32 *)(s + 0x1C) = 0;
    }
    for (i = 0; i < 4; i++) {
        if (*(s32 *)(s + 0xC) != 0) {
            func_0022D4B0(*(s32 *)(s + 0xC), 1);
        }
        *(s32 *)(s + 0xC) = 0;
        s += 4;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A000);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A150);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A240);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A3B0);
extern u8 D_0058BF1C[];
extern u8 D_0058BF24[];
extern s32 D_00470730;
extern void func_0022C7D0(s32, s32, f32);
typedef struct LSub { f32 v; s32 p4; s32 f8; s32 pC; s32 f10; } LSub;
typedef struct LObj3 { u8 pad[0x30]; LSub sub; } LObj3;
void func_0023A4B0(void) {
    LObj3 *s1 = *(LObj3 **)D_0058BF1C;
    LObj3 *s0 = *(LObj3 **)D_0058BF24;
    LSub *s2;

    if (s1 != 0) {
        s1->sub.v = 8.0f;
        s2 = &s1->sub;
        func_0022C7D0(s2->f10, 1, 8.0f);
        s2->f8 = 1;
    }
    if (s0 != 0) {
        s0->sub.v = 8.0f;
        s2 = &s0->sub;
        func_0022C7D0(s2->f10, 1, 8.0f);
        s2->f8 = 1;
    }
    if (s1 == 0 && s0 == 0) {
        D_00470730 = 1;
    }
}
extern u8 *D_0058BEB0[];
extern void func_00125740(void *, s32, s32);
extern void func_0022C7D0(s32, s32, f32);
extern s32 func_002535D0(s32);
void func_0023A560(s32 a0, s32 a1) {
    u8 *s0 = D_0058BEB0[a0] + 0x30;

    func_00125740(s0 + 0x20, a1, 0x10);
    if (a0 >= 0x1A && a0 < 0x1E) {
        *(s32 *)s0 = 0;
        func_0022C7D0(*(s32 *)(s0 + 0x10), 1, 0.0f);
        *(s32 *)(s0 + 0x28) = (s8)func_002535D0(*(s32 *)(s0 + 0x24));
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A5F0);
extern s32 D_0047072C;
extern u8 D_0058BF24[];
void func_0023A7A0(void) {
    s32 i;
    u8 **s0;
    s32 n;
    s32 *p;

    if (D_0047072C != 0) {
        s0 = D_0058BEB0;
        i = 0;
        do {
            if (*s0 != 0) {
                amTask_Kill(*s0);
                *s0 = 0;
            }
            i++;
            s0++;
        } while (i < 0x1E);
    }
    D_0047072C = 1;
    n = 0x1D;
    p = (s32 *)D_0058BF24;
    do {
        p[0] = 0;
        p[-1] = 0;
        n -= 6;
        p[-2] = 0;
        p[-3] = 0;
        p[-4] = 0;
        p[-5] = 0;
        p -= 6;
    } while (n >= 0);
}
extern s32 D_0047072C;
extern u8 D_0058BF24[];
void func_0023A840(void) {
    s32 n;
    s32 *p;

    D_0047072C = 1;
    n = 0x1D;
    p = (s32 *)D_0058BF24;
    do {
        p[0] = 0;
        p[-1] = 0;
        n -= 6;
        p[-2] = 0;
        p[-3] = 0;
        p[-4] = 0;
        p[-5] = 0;
        p -= 6;
    } while (n >= 0);
}
