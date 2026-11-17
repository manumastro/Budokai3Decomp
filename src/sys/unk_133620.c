#include "common.h"

typedef unsigned __int128 u128;

/* Copies one quadword through VU0 register vf1 (inline assembly in the original too). */
/* Packs two doublewords into a quadword (hi:lo) with the MMI instruction pcpyld. */
#define PCPYLD(hi, lo) ({ u128 _q; __asm__ ("pcpyld %0, %1, %2" : "=r"(_q) : "r"(hi), "r"(lo)); _q; })

#define VCOPY(d, s) __asm__ volatile ("lqc2 $vf1, 0(%1)\n\tsqc2 $vf1, 0(%0)" : : "r"(d), "r"(s))

typedef struct Vec4 {
    f32 x, y, z, w;
} Vec4;

/* The view: a global one at D_0047CA40, or one passed by the caller. */
typedef struct View {
    char pad0[0x2C];
    f32 f2C;
    char pad30[0x10];
    f32 f40;
    f32 f44;
    char pad48[8];
    f32 sx;
    f32 sy;
} View;

extern u8 *amPkt_Alloc(s32);
extern void func_0012EF80(void *, void *, s32);
extern void amDma_Request(s32, s32, s32, s32, u32, s32, s32, s32);
extern void func_001484A0(u32);
extern void amDraw_ClosePacket(s32);

extern u32 D_0046FD18[2];
extern u32 D_0046FD20;
extern f32 D_0046FD24, D_0046FD28, D_0046FD2C, D_0046FD30;
extern u8 *gPacketPtr;
extern u32 D_00470250;
extern s32 D_00470254;
extern f32 D_00470258;
extern s32 D_0047025C, D_00470260, D_00470264;
extern s32 gPacketQwc, D_00470294, D_00470298, D_0047029C;
extern u32 D_004703DC;
extern s8 D_0047045C;
extern u32 D_00470490;
extern f32 D_0047043C, D_00470440;
extern s32 D_00470498, D_0047049C;
extern f32 D_004704A0, D_004704A4;
extern u64 D_003F01C0[2];
extern u64 D_003F01D0[2];
extern f32 D_003F01E0[4];
extern u8 D_0045ABC0[];
extern Vec4 D_0045F4E0;
extern View D_0047CA40;

asm void func_00133620(void) {
    lui        $at, 0x46
    lw         $v0, -2816($at)
    lui        $at, 0x46
    lw         $t6, -2804($at)
    addiu      $at, $zero, 0x2
    sllv       $at, $a0, $at
    addu       $v0, $v0, $at
    beqz       $a2, L00133670
    addu      $t6, $t6, $at
    lwc1       $f0, 0x0($a2)
    lwc1       $f1, 0x4($a2)
    lwc1       $f2, 0x8($a2)
    lw         $t0, 0xC($a2)
    neg.s      $f0, $f0
    neg.s      $f1, $f1
    neg.s      $f2, $f2
    swc1       $f0, 0x0($v0)
    swc1       $f1, 0x10($v0)
    swc1       $f2, 0x20($v0)
    sw         $t0, 0x30($v0)
L00133670:
    lui        $at, 0x46
    lw         $v1, -2812($at)
    lui        $at, 0x46
    lw         $t7, -2800($at)
    addiu      $at, $zero, 0x4
    sllv       $at, $a0, $at
    addu       $v1, $v1, $at
    beqz       $a3, L0013369C
    addu      $t7, $t7, $at
    lq         $t0, 0x0($a3)
    sq         $t0, 0x0($v1)
L0013369C:
    lui        $at, 0x46
    lw         $t1, -2808($at)
    addu       $t1, $t1, $a0
    bltz       $a1, L001336B8
    lb        $at, 0x0($t1)
    add        $at, $zero, $a1
    sb         $at, 0x0($t1)
L001336B8:
    lw         $t5, -31368($gp)
    beqz       $at, L001336F4
    addi      $t4, $zero, 0x1
    lw         $t0, 0x0($v0)
    lw         $t1, 0x10($v0)
    lw         $t2, 0x20($v0)
    lw         $t3, 0x30($v0)
    bne        $t5, $t4, L00133710
    lq        $t4, 0x0($v1)
    sw         $t0, 0x0($t6)
    sw         $t1, 0x10($t6)
    sw         $t2, 0x20($t6)
    sw         $t3, 0x30($t6)
    jr         $ra
    sq        $t4, 0x0($t7)
L001336F4:
    bne        $t5, $t4, L00133710
    vmulx.xyzw $vf1, $vf1, $vf0x
    sw         $zero, 0x0($t6)
    sw         $zero, 0x10($t6)
    sw         $zero, 0x20($t6)
    sw         $zero, 0x30($t6)
    sqc2       $vf1, 0x0($t7)
L00133710:
    jr         $ra
    nop
}
asm void func_00133720(void) {
    lqc2 $vf1, 0x0($a0)
    lqc2 $vf2, 0x0($a1)
    lqc2 $vf3, 0x0($a2)
    vsub.xyz $vf1, $vf0, $vf1
    vmulx.xyzw $vf4, $vf2, $vf1x
    vmuly.xyzw $vf5, $vf2, $vf1y
    vmulz.xyzw $vf6, $vf2, $vf1z
    lui $at, 0x46
    lw $a0, -0xAE8($at)
    lui $at, 0x46
    lw $a1, -0xAE4($at)
    lw $t7, -0x7A88($gp)
    sqc2 $vf4, 0x0($a0)
    sqc2 $vf5, 0x10($a0)
    bnez $t7, L1
    sqc2 $vf6, 0x20($a0)
    sqc2 $vf4, 0x0($a1)
    sqc2 $vf5, 0x10($a1)
    sqc2 $vf6, 0x20($a1)
    sqc2 $vf3, 0x30($a1)
L1:
    jr $ra
    sqc2 $vf3, 0x30($a0)
}
void func_00133780(s32 mode, u32 a1) {
    u64 *p;
    if (mode != 2) {
        p = (u64 *)amPkt_Alloc(0x30);
        p[0] = 0x60000002;
        p[1] = 0x13000000 | ((u64)0x50000002 << 32);
        *(u128 *)&p[2] = PCPYLD((u64)0xE, 0x8001 | ((u64)0x10000000 << 32));
        ((u32 *)p)[8] = D_00470490 | (D_0047045C << 24);
        ((u32 *)p)[9] = a1;
        p[5] = (s64)(mode + 0x4E);
        amDma_Request(0, 1, 1, 1, (u32)p & 0x0FFFFFFF, 0, 0, 0);
    } else {
        p = (u64 *)amPkt_Alloc(0x40);
        p[0] = 0x60000003;
        p[1] = 0x13000000 | ((u64)0x50000003 << 32);
        *(u128 *)&p[2] = PCPYLD((u64)0xE, 0x8002 | ((u64)0x10000000 << 32));
        ((u32 *)p)[8] = D_00470490 | (D_0047045C << 24);
        ((u32 *)p)[9] = a1;
        p[5] = 0x4E;
        ((u32 *)p)[12] = D_00470490 | (D_0047045C << 24);
        ((u32 *)p)[13] = a1;
        p[7] = 0x4F;
        amDma_Request(0, 1, 1, 1, (u32)p & 0x0FFFFFFF, 0, 0, 0);
    }
}


void DrawFlags_Apply(u32 mask, u32 or1, u32 xor1, u32 or2, u32 xor2) {
    D_0046FD20 &= ~mask;
    D_0046FD20 |= or1;
    D_0046FD20 ^= xor1;
    D_00470250 &= ~mask;
    D_00470250 |= or2;
    D_00470250 ^= xor2;
}

void func_00133980(f32 a, f32 b, f32 c, f32 d) {
    D_003F01E0[0] = a;
    D_003F01E0[1] = b;
    D_003F01E0[2] = c;
    D_003F01E0[3] = d;
}

u128 func_001339B0(u128 *v) {
    return *(u128 *)D_003F01E0 = *v;
}

s32 amGs_SetReg32(s32 which, u32 val) {
    s32 i;
    u64 old;

    if (which != 1) old = D_0046FD18[0];
    else old = D_0046FD18[1];
    which++;
    for (i = 0; i < 2; i++, which >>= 1) {
        if (which & 1) D_0046FD18[i] = val;
    }
    return old;
}

u64 amGs_SetReg64(s32 which, u64 val) {
    u64 old;
    s32 i;

    if (which != 1) old = D_003F01C0[0];
    else old = D_003F01C0[1];
    which++;
    for (i = 0; i < 2; i++, which >>= 1) {
        if (which & 1) D_003F01C0[i] = val;
    }
    return old;
}

u64 amGs_SetReg64b(s32 which, u64 val) {
    u64 old;
    s32 i;

    if (which != 1) old = D_003F01D0[0];
    else old = D_003F01D0[1];
    which++;
    for (i = 0; i < 2; i++, which >>= 1) {
        if (which & 1) D_003F01D0[i] = val;
    }
    return old;
}

void func_00133B50(f32 *rect, u32 a1) {
    f32 r[4] = {0, 0, D_0047043C, D_00470440};
    u8 *p;
    u32 save;

    save = D_004703DC;
    if (rect == 0) {
        rect = r;
        func_001484A0(save & ~6);
    }
    p = amPkt_Alloc(0x70);
    func_0012EF80(p, D_0045ABC0, 7);
    *(s16 *)(p + 0x50) = D_00470498 + (s32)(rect[0] * D_004704A0);
    *(s16 *)(p + 0x52) = D_0047049C + (s32)(rect[1] * D_004704A4);
    *(s16 *)(p + 0x60) = D_00470498 + (s32)(rect[2] * D_004704A0);
    *(s16 *)(p + 0x62) = D_0047049C + (s32)(rect[3] * D_004704A4);
    *(u32 *)(p + 0x64) = a1;
    *(u64 *)(p + 0x68) = 5;
    amDma_Request(0, 1, 1, 1, (u32)p & 0x0FFFFFFF, 0, 0, 0);
    func_001484A0(save);
}

void func_00133CE0(s32 on) {
    if (on == 0) D_00470254 = 0;
    else D_00470254 = 0x80;
}

s32 func_00133D10(s32 v) {
    s32 old = D_0047025C;
    D_0047025C = v;
    return old;
}

void func_00133D20(f32 a, f32 b) {
    D_0046FD24 = a;
    D_0046FD28 = b;
    D_0046FD2C = 255.0f / (b - a);
}

void func_00133D50(f32 a, f32 b) {
    D_00470258 = 255.0f - a;
    D_0046FD30 = 255.0f - b;
}

s32 func_00133D80(s32 v) {
    s32 old = D_00470264;
    D_00470264 = v;
    return old;
}

void func_00133D90(f32 a) {
    D_00470260 = (s32)(255.0f - 255.0f * a) << 4;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_00133DD0);

f32 func_00133FA0(View *v, f32 z) {
    if (v == 0) v = &D_0047CA40;
    return (z > 0.0f) ? v->f44 + v->f40 / z : v->f2C;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_00133FF0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_00134690);
INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_001351F0);

void func_00135C60(Vec4 *a, Vec4 *b, Vec4 *c) {
    u8 *p;

    if (D_0047029C == 0 && D_00470298 >= 0x40) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    VCOPY(p + 0x10, b);
    if (c) VCOPY(p + 0x20, c);
    VCOPY(p + 0x30, &D_0045F4E0);
    gPacketPtr = p + 0x40;
    gPacketQwc += 3;
    D_00470294 += 3;
    D_00470298 += 1;
}

void func_00135D40(Vec4 *a, Vec4 *b, Vec4 *c) {
    u8 *p;

    if (D_0047029C == 0 && D_00470298 >= 0x40) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    VCOPY(p + 0x10, b);
    if (c) VCOPY(p + 0x20, c);
    VCOPY(p + 0x30, &D_0045F4E0);
    gPacketPtr = p + 0x40;
    gPacketQwc += 3;
    D_00470294 += 3;
    D_00470298 += 1;
}

void func_00135E20(Vec4 *a, Vec4 *b, Vec4 *c, Vec4 *d) {
    u8 *p;

    if (D_0047029C == 0 && D_00470298 >= 0x60) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    VCOPY(p + 0x10, b);
    VCOPY(p + 0x20, c);
    VCOPY(p + 0x30, d);
    VCOPY(p + 0x40, &D_0045F4E0);
    gPacketPtr = p + 0x50;
    gPacketQwc += 4;
    D_00470294 += 4;
    D_00470298 += 2;
}

void func_00135F10(Vec4 *a, Vec4 *b) {
    u8 *p;

    if (D_0047029C == 0 && D_00470298 >= 0x40) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    if (b) VCOPY(p + 0x10, b);
    VCOPY(p + 0x20, &D_0045F4E0);
    gPacketPtr = p + 0x30;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 1;
}

void func_00135FD0(Vec4 *a, f32 *b, Vec4 *c, f32 *d) {
    u8 *p;

    if (D_00470298 >= 0x13) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    ((f32 *)(p + 0x10))[0] = b[0] * D_0047CA40.sx;
    ((f32 *)(p + 0x10))[1] = b[1] * D_0047CA40.sy;
    ((f32 *)(p + 0x10))[2] = 0.0f;
    ((f32 *)(p + 0x10))[3] = 0.0f;
    VCOPY(p + 0x20, c);
    ((f32 *)(p + 0x30))[0] = d[0];
    ((f32 *)(p + 0x30))[1] = d[1];
    ((f32 *)(p + 0x30))[2] = 1.0f;
    ((f32 *)(p + 0x30))[3] = 0.0f;
    ((f32 *)(p + 0x40))[0] = d[2];
    ((f32 *)(p + 0x40))[1] = d[3];
    ((f32 *)(p + 0x40))[2] = 1.0f;
    ((f32 *)(p + 0x40))[3] = 0.0f;
    VCOPY(p + 0x50, &D_0045F4E0);
    gPacketPtr = p + 0x60;
    gPacketQwc += 5;
    D_00470294 += 5;
    D_00470298 += 1;
}

void func_00136130(Vec4 *a, f32 *b, Vec4 *c) {
    u8 *p;

    if (D_00470298 >= 0x20) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    ((f32 *)(p + 0x10))[0] = b[0] * D_0047CA40.sx;
    ((f32 *)(p + 0x10))[1] = b[1] * D_0047CA40.sy;
    ((f32 *)(p + 0x10))[2] = 0.0f;
    ((f32 *)(p + 0x10))[3] = 0.0f;
    VCOPY(p + 0x20, c);
    VCOPY(p + 0x30, &D_0045F4E0);
    gPacketPtr = p + 0x40;
    gPacketQwc += 3;
    D_00470294 += 3;
    D_00470298 += 1;
}

void func_00136230(Vec4 *a, f32 *b) {
    u8 *p;

    if (D_00470298 >= 0x20) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    ((f32 *)(p + 0x10))[0] = b[0] * D_0047CA40.sx;
    ((f32 *)(p + 0x10))[1] = b[1] * D_0047CA40.sy;
    ((f32 *)(p + 0x10))[2] = 0.0f;
    ((f32 *)(p + 0x10))[3] = 0.0f;
    VCOPY(p + 0x20, &D_0045F4E0);
    gPacketPtr = p + 0x30;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 1;
}

void func_00136310(Vec4 *a, Vec4 *b) {
    u8 *p;

    if (D_0047029C == 0 && D_00470298 >= 0x60) amDraw_ClosePacket(-1);
    p = gPacketPtr - 0x10;
    VCOPY(p, a);
    VCOPY(p + 0x10, b);
    VCOPY(p + 0x20, &D_0045F4E0);
    gPacketPtr = p + 0x30;
    gPacketQwc += 2;
    D_00470294 += 2;
    D_00470298 += 2;
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_001363D0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_00136870);
INCLUDE_ASM("asm/nonmatchings/sys/unk_133620", func_00136E80);
