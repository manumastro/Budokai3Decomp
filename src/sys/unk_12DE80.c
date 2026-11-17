#include "common.h"

/* A camera: position, target, up vector, roll, field of view (radians), flags, projection distance. */
/* A VU0 quadword: a vector or a matrix row. */
typedef struct V4 {
    f32 v[4];
} V4;

typedef struct Camera {
    V4 pos;
    V4 tgt;
    V4 up;
    f32 roll;
    f32 fov;
    s32 flags;
    f32 scr;
} Camera;

extern f32 func_0011F5A8(f32);
extern void amCamera_SetView(Camera *);
extern f32 func_0011F680(f32, f32);
extern void func_001414D0(V4 *, f32, f32, f32);
extern void amCamera_LookAt(Camera *);
extern void func_00141CF0(s32, V4 *, s32);
extern void func_0013BAF0(f32);
extern void func_0013B0B0(s32);
extern void func_0013B6B0(f32);
extern void func_0013B110(s32);
/* sine table, a quarter turn of 0x4000 steps, read through the uncached mirror */
extern f32 D_003F0940[];
extern s32 D_0046FD08;
extern s32 sceGsSyncPath(s32, s32);
extern u8 D_0033E1B0[];
extern u8 D_0047A5C0[][64];
extern u32 D_0047ACC0[][64];
extern u32 D_0046FD04;

/* The GS DISPLAY register as bit fields (Sony's sceGsDisplay, here on 32-bit words: the code copies it a word at a
 * time and updates DY with word accesses). */
typedef struct GsDisplay {
    u32 DX:12; u32 DY:11; u32 MAGH:4; u32 MAGV:2; u32 p0:3;
    u32 DW:12; u32 DH:11; u32 p1:9;
} GsDisplay;
typedef struct Disp { char pad[0x18]; GsDisplay d1; char pad2[0x20]; GsDisplay d2; } Disp;
extern Disp D_0047E540;
extern s8 D_004703F4;
extern s8 D_004703FC;
extern u32 D_00470420;

void amCamera_Init(Camera *c) {
    c->pos.v[0] = 0.0f;
    c->pos.v[1] = 0.0f;
    c->pos.v[2] = 0.0f;
    c->pos.v[3] = 1.0f;
    c->tgt.v[0] = 0.0f;
    c->tgt.v[1] = 0.0f;
    c->tgt.v[2] = -1.0f;
    c->tgt.v[3] = 1.0f;
    c->roll = 0.0f;
    c->fov = 0.7853982f;
    c->flags = 0;
    c->up.v[0] = 0.0f;
    c->up.v[1] = 1.0f;
    c->up.v[2] = 0.0f;
    c->up.v[3] = 0.0f;
}

void amCamera_SetScreen(Camera *dst, Camera *c, f32 w) {
    dst->scr = w / (2.0f * func_0011F5A8(0.5f * c->fov));
    amCamera_SetView(c);
}

void amCamera_SetView(Camera *c) {
    V4 v;

    if (c->flags & 1) amCamera_LookAt(c);
    asm __volatile__("lqc2 $vf1, 0(%1)\n\tvsub.xyz $vf1, $vf0, $vf1\n\tsqc2 $vf1, 0(%0)" : : "r"(&v), "r"(&c->up));
    func_00141CF0(0, &v, 0);
    func_0013BAF0(-c->roll);
    asm __volatile__("lqc2 $vf1, 0(%0)\n\tvsub.xyzw $vf1, $vf0, $vf1\n\tvmulax.xyzw ACC, $vf28, $vf1x\n\tvmadday.xyzw ACC, $vf29, $vf1y\n\tvmaddaz.xyzw ACC, $vf30, $vf1z\n\tvmaddw.xyzw $vf31, $vf31, $vf0w" : : "r"(c));
}

void func_0012E000(V4 *a, V4 *b) {
    asm __volatile__("lqc2 $vf1, 0(%0)\n\tlqc2 $vf2, 0(%1)\n\tvadd.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(a), "r"(b));
    asm __volatile__("lqc2 $vf1, 0(%0)\n\tlqc2 $vf2, 0(%1)\n\tvadd.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(a + 1), "r"(b));
}

void func_0012E030(Camera *c, V4 *d) {
    V4 t;

    if (c->flags & 1) amCamera_LookAt(c);
    func_0013B0B0(0);
    func_00141CF0(0, &c->up, 0);
    func_0013B6B0(-c->roll);
    asm __volatile__("lqc2 $vf1, 0(%1)\n\tvmulax.xyzw ACC, $vf28, $vf1x\n\tvmadday.xyzw ACC, $vf29, $vf1y\n\tvmaddz.xyz $vf1, $vf30, $vf1z\n\tsqc2 $vf1, 0(%0)" : : "r"(&t), "r"(d));
    func_0013B110(1);
    asm __volatile__("lqc2 $vf1, 0(%0)\n\tlqc2 $vf2, 0(%1)\n\tvadd.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(&c->pos), "r"(&t));
    asm __volatile__("lqc2 $vf1, 0(%0)\n\tlqc2 $vf2, 0(%1)\n\tvadd.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(&c->tgt), "r"(&t));
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_12DE80", func_0012E100);
void amCamera_LookAt(Camera *c) {
    f32 rx;
    V4 d;
    f32 s;

    asm __volatile__("lqc2 $vf1, 0(%1)\n\tlqc2 $vf2, 0(%2)\n\tvsub.xyz $vf1, $vf1, $vf2\n\tsqc2 $vf1, 0(%0)" : : "r"(&d), "r"(&c->tgt), "r"(c));
    asm("sqrt.s %0, %1" : "=f"(s) : "f"(d.v[0] * d.v[0] + d.v[2] * d.v[2]));
    rx = func_0011F680(d.v[1], s);
    func_001414D0(&c->up, rx, func_0011F680(-d.v[0], -d.v[2]), 0.0f);
    c->flags &= ~1;
}

f32 amMath_SinI(s32 a) {
    s32 i;
    f32 *t;
    f32 r;

    t = (f32 *)((u32)D_003F0940 | 0x20000000);
    i = a & 0x3FFF;
    if (a & 0x4000) i = 0x4000 - i;
    r = t[i];
    if (a & 0x8000) r = -r;
    return r;
}

f32 amMath_CosI(s32 a) {
    s32 i;
    f32 *t;
    f32 r;

    t = (f32 *)((u32)D_003F0940 | 0x20000000);
    i = a & 0x3FFF;
    if (!(a & 0x4000)) i = 0x4000 - i;
    r = t[i];
    if ((a + 0x4000) & 0x8000) r = -r;
    return r;
}

void amMath_SinCosI(s32 a, f32 *s, f32 *c) {
    s32 i;
    s32 j;
    f32 *t;
    f32 rs;
    f32 rc;

    t = (f32 *)((u32)D_003F0940 | 0x20000000);
    i = a & 0x3FFF;
    j = 0x4000 - i;
    if (a & 0x4000) {
        i = 0x4000 - i;
        j = 0x4000 - j;
    }
    rs = t[i];
    rc = t[j];
    if (a & 0x8000) rs = -rs;
    if ((a + 0x4000) & 0x8000) rc = -rc;
    *s = rs;
    *c = rc;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_12DE80", func_0012E830);
void func_0012E890(s32 a, f32 *s, f32 *c) {
    s32 i;
    s32 j;
    f32 *t;

    t = (f32 *)((u32)D_003F0940 | 0x20000000);
    i = a & 0x3FFF;
    j = 0x4000 - i;
    if (a & 0x4000) {
        i = 0x4000 - i;
        j = 0x4000 - j;
    }
    *s = t[i];
    *c = t[j];
    if (a & 0x8000) *s = -*s;
    if ((a + 0x4000) & 0x8000) *c = -*c;
}

void amDisp_SetOffset(s32 x, s32 y) {
    Disp *dp;
    GsDisplay d;
    s32 h;

    dp = &D_0047E540;
    ((u32 *)&d)[0] = ((u32 *)&dp->d1)[0];
    ((u32 *)&d)[1] = ((u32 *)&dp->d1)[1];
    d.DX = x + 0x27C;
    switch (D_004703F4) {
    case 2:
        h = 0x19;
        break;
    case 3:
        h = 0x25;
        break;
    case 0x50:
        d.DX = 0x140;
        h = 0x30;
        break;
    default:
        d.DX = 0x118;
        h = 0x30;
        break;
    }
    if ((D_004703FC || D_00470420 >= 0x1C0) && (D_004703F4 == 2 || D_004703F4 == 3)) {
        d.DY = (h + y) * 2;
    } else {
        d.DY = h + y;
    }
    ((u32 *)&dp->d1)[0] = ((u32 *)&d)[0];
    ((u32 *)&dp->d1)[1] = ((u32 *)&d)[1];
    ((u32 *)&dp->d2)[0] = ((u32 *)&d)[0];
    ((u32 *)&dp->d2)[1] = ((u32 *)&d)[1];
}

s32 amRand_SetSeed(s32 seed) {
    s32 old = D_0046FD08;
    D_0046FD08 = seed;
    return old;
}

asm void func_0012EAE0(void) {
L0012EAE0:
    lw         $v0, -32744($gp)
    j L0012EB04
    addi      $a0, $a0, -0x1
L0012EAEC:
    srl        $v1, $v0, 31
    andi       $at, $at, 0x1
    sll        $v0, $v0, 1
    xor        $v1, $v1, $at
    addi       $a0, $a0, -0x1
    or         $v0, $v0, $v1
L0012EB04:
    bgez       $a0, L0012EAEC
    srl       $at, $v0, 4
    sw         $v0, -32744($gp)
    addiu      $v0, $v0, -0x1
    jr         $ra
    nop
    nop
}
void func_0012EB20(void) {
    sceGsSyncPath(0, 0);
    *(volatile u32 *)0x1000A010 = 0;
    *(volatile u32 *)0x1000A020 = 0;
    *(volatile u32 *)0x1000A030 = (u32)D_0033E1B0;
    *(volatile u32 *)0x1000E010 = 4;
    asm("sync");
    *(volatile u32 *)0x1000A000 = 0x145;
    asm("sync");
    sceGsSyncPath(0, 0);
}

void amDbg_Print(s32 x, s32 y, char *s) {
    u8 *p;
    u32 *q;
    u32 col;
    char c;

    p = &D_0047A5C0[y][x];
    q = &D_0047ACC0[y][x];
    col = D_0046FD04;
    while ((c = *s++) != 0) {
        *p++ = c;
        *q++ = col;
    }
}

