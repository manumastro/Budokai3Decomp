#include "common.h"

typedef struct Blk {
    s32 size;
    s32 pad4;
    struct Blk *prev;
    struct Blk *next;
    s32 flags;
    struct Blk *p14;
    struct Blk *p18;
    u32 magic;
} Blk;

typedef struct Mtx {
    f32 m[4][4];
} Mtx;

extern s32 gMtxStackDepth;
extern Mtx *gMtxStackPtr;
extern Mtx D_0047D7C0[];
extern Mtx D_0047D800[];

Blk *amHeap_Split(Blk *b, s32 size, s32 top) {
    s32 n;
    Blk *next;
    if (b->size <= size + 0x40) {
        b->size = -b->size;
        b->p18->flags = 0;
        return b;
    }
    next = b->p18;
    if (!top) {
        n = size;
        size = b->size - size - 0x40;
    } else {
        n = b->size - size - 0x40;
    }
    b->p18 = (Blk *)((s32)b + n + 0x20);
    b->p18->next = (Blk *)((s32)b->p18 + 0x20);
    b->p18->prev = b;
    b->p18->next->p14 = b->p18;
    b->p18->next->p18 = next;
    next->prev = b->p18->next;
    b->size = n;
    b->p18->next->size = size;
    if (top) b = b->p18->next;
    b->size = -b->size;
    b->p18->flags = 0;
    return b;
}
void amMtxStack_Init(void) {
    gMtxStackDepth = 0;
    gMtxStackPtr = D_0047D7C0;
}
asm void func_0013AFA0(void) {
    beqz       $a0, L0013AFD8
    lui       $at, 0x3f
    lq         $t0, 2048($at)
    lui        $at, 0x3f
    lq         $t1, 2064($at)
    lui        $at, 0x3f
    lq         $t2, 2080($at)
    lui        $at, 0x3f
    lq         $t3, 2096($at)
    sq         $t0, 0x0($a0)
    sq         $t1, 0x10($a0)
    sq         $t2, 0x20($a0)
    b          L0013AFF4
    sq        $t3, 0x30($a0)
L0013AFD8:
    vmove.xyzw $vf31, $vf0
    vmove.xyzw $vf28, $vf0
    vmr32.xyzw $vf28, $vf28
    vmove.xyzw $vf30, $vf28
    vmr32.xyzw $vf28, $vf28
    vmove.xyzw $vf29, $vf28
    vmr32.xyzw $vf28, $vf28
L0013AFF4:
    jr         $ra
    nop
}
s32 amMtxStack_Pop(s32 n) {
    gMtxStackDepth -= n;
    if (gMtxStackDepth < 0) {
        gMtxStackDepth = 0;
        gMtxStackPtr = D_0047D800;
        return 0;
    }
    gMtxStackPtr -= n;
    return -1;
}
asm void func_0013B060(void) {
    lw         $at, -31248($gp)
    beqz       $a0, L0013B090
    nop
    lq         $t0, 0x0($at)
    lq         $t1, 0x10($at)
    lq         $t2, 0x20($at)
    lq         $t3, 0x30($at)
    sq         $t0, 0x0($a0)
    sq         $t1, 0x10($a0)
    sq         $t2, 0x20($a0)
    b          L0013B0A0
    sq        $t3, 0x30($a0)
L0013B090:
    lqc2       $vf28, 0x0($at)
    lqc2       $vf29, 0x10($at)
    lqc2       $vf30, 0x20($at)
    lqc2       $vf31, 0x30($at)
L0013B0A0:
    jr         $ra
    nop
}
asm void func_0013B0B0(void) {
    add        $v0, $v0, $zero
    lw         $v1, -31244($gp)
    addi       $t4, $v1, -0x20
    lw         $at, -31248($gp)
    bgez       $t4, L0013B100
    nop
    addiu      $v1, $v1, 0x1
    addiu      $at, $at, 0x40
    sw         $v1, -31244($gp)
    sw         $at, -31248($gp)
    sqc2       $vf28, 0x0($at)
    sqc2       $vf29, 0x10($at)
    sqc2       $vf30, 0x20($at)
    sqc2       $vf31, 0x30($at)
    beqz       $a0, L0013B100
    addi      $v0, $zero, -0x1
    lqc2       $vf28, 0x0($a0)
    lqc2       $vf29, 0x10($a0)
    lqc2       $vf30, 0x20($a0)
    lqc2       $vf31, 0x30($a0)
L0013B100:
    jr         $ra
    nop
}
asm void func_0013B110(void) {
    add        $v0, $v0, $zero
    lw         $v1, -31244($gp)
    sub        $v1, $v1, $a0
    lw         $at, -31248($gp)
    bltz       $v1, L0013B150
    nop
    sw         $v1, -31244($gp)
    addiu      $v1, $zero, 0x6
    sllv       $a0, $a0, $v1
    sub        $at, $at, $a0
    sw         $at, -31248($gp)
    lqc2       $vf28, 0x40($at)
    lqc2       $vf29, 0x50($at)
    lqc2       $vf30, 0x60($at)
    lqc2       $vf31, 0x70($at)
    addi       $v0, $zero, -0x1
L0013B150:
    jr         $ra
    nop
}
