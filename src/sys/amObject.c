#include "common.h"
extern void func_0013EE00(void);
extern void func_0013EDB4(void);
extern void func_0013ED58(void);
extern void func_0013E9F0(void);

typedef struct ObjHdr { char pad[0x10]; s32 n; } ObjHdr;
typedef struct ObjSlot { s32 a; s32 b; } ObjSlot;
typedef struct ObjInst { ObjHdr *hdr; s32 n; ObjSlot slot[1]; } ObjInst;
extern char D_0045F538[];
extern void *amHeap_Alloc(s32, s32, char *, s32);

typedef struct Rect { f32 x0, y0, x1, y1; } Rect;
typedef struct Cam { f32 m[4][4]; f32 view[4][4]; Rect clip; char pad[0x98 - 0x90]; f32 sx; f32 sy; } Cam;
typedef struct Inner { char pad[0x14]; void *data; } Inner;
typedef struct Inner0 { Inner *in; } Inner0;
typedef struct Src { Inner0 *a; Inner *b; char data[1]; } Src;
extern void func_0013B0B0(s32);
extern void func_0013B110(s32);
extern void func_0013FC20(void *, void *);
extern void func_0013B9C0(void *);
extern void func_00140420(void *, void *, void *, Rect *);
extern void func_00140010(void *, void *, Rect *);
extern void amCamera_SetClip(Cam *, Rect *);


/* Swaps the two matrices kept in VU0 registers (vf24-vf27 and vf28-vf31). */
#define SWAP_MTX() asm __volatile__( \
        "vmove.xyzw vf1, vf28\n vmove.xyzw vf2, vf29\n vmove.xyzw vf3, vf30\n vmove.xyzw vf4, vf31\n" \
        "vmove.xyzw vf28, vf24\n vmove.xyzw vf29, vf25\n vmove.xyzw vf30, vf26\n vmove.xyzw vf31, vf27\n" \
        "vmove.xyzw vf24, vf1\n vmove.xyzw vf25, vf2\n vmove.xyzw vf26, vf3\n vmove.xyzw vf27, vf4\n")

typedef struct ObjI { s32 **a; s32 *b; char data[1]; } ObjI;
extern char D_00459390[];
extern void func_0013B160(void *);
extern void func_0013EE90(void *, s32 *, s32 *);
extern s32 amDma_Request(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0013F2A0(void *, void *, s32 *, s32 *);
extern void func_0013F710(void *, void *, void *, s32 *, s32 *);
extern void func_0013E590(void *, void *, s32 *, s32 *);


s32 amObject_GetSize(ObjHdr *h) {
    return (h->n - 1) * sizeof(ObjSlot) + sizeof(ObjInst);
}


ObjInst *amObject_Create(ObjHdr *h, ObjInst *o) {
    s32 i;
    ObjSlot *s;
    if (o == 0) {
        o = amHeap_Alloc(amObject_GetSize(h), 0, D_0045F538, 138);
    }
    o->hdr = h;
    o->n = h->n;
    for (s = o->slot, i = 0; i < o->n; i++, s++) {
        s->a = 0;
        s->b = 0;
    }
    return o;
}


void amObject_Draw(void *o) {
    s32 tag;
    s32 size;
    tag = 0;
    size = 0;
    func_0013B160(D_00459390);
    SWAP_MTX();
    func_0013EE90(o, &tag, &size);
    if (tag) {
        amDma_Request(0, 1, 1, 1, (u32)tag & 0x0FFFFFFF, 0, 0, 0);
    }
}


void func_0013E0A0(ObjI *o) {
    void *p;
    s32 tag;
    s32 size;
    p = o->data;
    tag = 0;
    size = 0;
    func_0013B160(D_00459390);
    SWAP_MTX();
    func_0013F2A0((void *)o->a[5], &p, &tag, &size);
    if (tag) {
        amDma_Request(0, 1, 1, 1, (u32)tag & 0x0FFFFFFF, 0, 0, 0);
    }
}


void func_0013E170(ObjI *o) {
    void *p;
    s32 tag;
    s32 size;
    void *d;
    void *q;
    tag = 0;
    size = 0;
    func_0013B0B0(0);
    func_0013B160(D_00459390);
    SWAP_MTX();
    p = o->data;
    if (o->a) {
        d = (void *)((s32 *)*o->a)[5];
        q = (char *)o->a + 8;
        func_0013F710(d, &q, &p, &tag, &size);
    } else {
        func_0013E590((void *)o->b[5], &p, &tag, &size);
    }
    func_0013B110(1);
    if (tag) {
        amDma_Request(0, 1, 1, 1, (u32)tag & 0x0FFFFFFF, 0, 0, 0);
    }
}

asm void func_0013E2A0(void) {
L0013E2A0:
    addi       $sp, $sp, -0x70
    sq         $ra, 0x0($sp)
    sq         $s0, 0x10($sp)
    sq         $s1, 0x20($sp)
    sqc2       $vf20, 0x30($sp)
    sqc2       $vf21, 0x40($sp)
    sqc2       $vf22, 0x50($sp)
    sqc2       $vf23, 0x60($sp)
    lw         $s1, -31248($gp)
    addiu      $s1, $s1, 0x40
    sqc2       $vf28, 0x0($s1)
    sqc2       $vf29, 0x10($s1)
    sqc2       $vf30, 0x20($s1)
    sqc2       $vf31, 0x30($s1)
    lui        $at, 0x3f
    lqc2       $vf28, 2048($at)
    lui        $at, 0x3f
    lqc2       $vf29, 2064($at)
    lui        $at, 0x3f
    lqc2       $vf30, 2080($at)
    vmove.xyzw $vf31, $vf0
    addi       $s0, $a0, 0x8
    lw         $a1, 0x0($a0)
    bnez       $a1, L0013E30C
    nop
    j L0013E318
    lw        $a0, 0x4($a0)
L0013E30C:
    lw         $a0, 0x0($a1)
    lw         $a0, 0x1C($a0)
    lw         $a0, 0x0($a0)
L0013E318:
    lw         $a0, 0x14($a0)
    jal func_0013E9F0
    nop
    addi       $s1, $s1, -0x40
    sw         $s1, -31248($gp)
    lqc2       $vf28, 0x40($s1)
    lqc2       $vf29, 0x50($s1)
    lqc2       $vf30, 0x60($s1)
    lqc2       $vf31, 0x70($s1)
    lq         $ra, 0x0($sp)
    lq         $s0, 0x10($sp)
    lq         $s1, 0x20($sp)
    lqc2       $vf20, 0x30($sp)
    lqc2       $vf21, 0x40($sp)
    lqc2       $vf22, 0x50($sp)
    lqc2       $vf23, 0x60($sp)
    addi       $sp, $sp, 0x70
    jr         $ra
    nop
}

void func_0013E370(Cam *c, void *eye, Src *s, s32 keep) {
    Rect *r;
    f32 (*view)[4];
    void *q;
    void *p;
    void *d;

    func_0013B0B0(0);
    view = c->view;
    r = &c->clip;
    if (keep == 0) {
        func_0013FC20(view, eye);
        r->x0 = 100000.0f;
        r->y0 = 100000.0f;
        r->x1 = -100000.0f;
        r->y1 = -100000.0f;
    }
    func_0013B9C0(view);
    q = s->data;
    if (s->a) {
        d = s->a->in->data;
        p = (char *)s->a + 8;
        func_00140420(d, &p, &q, r);
    } else {
        func_00140010(s->b->data, &q, r);
    }
    amCamera_SetClip(c, r);
    func_0013B110(1);
}


void func_0013E4C0(f32 *d, Cam *c) {
    f32 sx = 1.0f / c->sx;
    f32 sy = -1.0f / c->sy;
    d[0] = c->m[0][0] * sx;
    d[4] = c->m[1][0] * sx;
    d[8] = c->m[2][0] * sx;
    d[12] = 0.5f + c->m[3][0] * sx;
    d[1] = c->m[0][1] * sy;
    d[5] = c->m[1][1] * sy;
    d[9] = c->m[2][1] * sy;
    d[13] = 0.5f + c->m[3][1] * sy;
    d[2] = 0.0f;
    d[6] = 0.0f;
    d[10] = 0.0f;
    d[14] = 1.0f;
    d[3] = 0.0f;
    d[7] = 0.0f;
    d[11] = 0.0f;
    d[15] = 1.0f;
}

INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013E590);
asm void func_0013E9F0(void) {
L0013E9F0:
    addiu      $s1, $s1, 0x40
    addi       $sp, $sp, -0x20
    sqc2       $vf28, 0x0($s1)
    sqc2       $vf29, 0x10($s1)
    sqc2       $vf30, 0x20($s1)
    sqc2       $vf31, 0x30($s1)
    lui        $t9, 8192
L0013EA0C:
    lw         $a2, 0x34($a0)
    lw         $a1, 0x0($s0)
    addiu      $s0, $s0, 0x4
    beqz       $a2, L0013EA2C
    lqc2      $vf8, 0x10($a0)
    lw         $a3, 0x8($a2)
    bnez       $a3, L0013EAA8
    nop
L0013EA2C:
    bnez       $a1, L0013EA4C
    nop
    add        $t8, $zero, $ra
    lqc2       $vf1, 0x0($a0)
    jal func_0013EE00
    lqc2      $vf2, 0x10($a0)
    j func_0013EDB4
    add       $ra, $zero, $t8
L0013EA4C:
    lqc2       $vf1, 0x0($a1)
    lqc2       $vf2, 0x10($a1)
    lqc2       $vf3, 0x20($a1)
    lqc2       $vf4, 0x30($a1)
    vmulax.xyzw ACC, $vf28, $vf1x
    vmadday.xyzw ACC, $vf29, $vf1y
    vmaddz.xyzw $vf5, $vf30, $vf1z
    vadd.xyz   $vf4, $vf4, $vf8
    vmulax.xyzw ACC, $vf28, $vf2x
    vmadday.xyzw ACC, $vf29, $vf2y
    vmaddz.xyzw $vf6, $vf30, $vf2z
    lqc2       $vf1, 0x60($a1)
    vmulax.xyzw ACC, $vf28, $vf3x
    vmadday.xyzw ACC, $vf29, $vf3y
    vmaddz.xyzw $vf7, $vf30, $vf3z
    vmulax.xyzw ACC, $vf28, $vf4x
    vmadday.xyzw ACC, $vf29, $vf4y
    vmaddaz.xyzw ACC, $vf30, $vf4z
    vmaddw.xyzw $vf31, $vf31, $vf4w
    vmul.xyzw  $vf28, $vf5, $vf1
    vmul.xyzw  $vf29, $vf6, $vf1
    j func_0013EDB4
    vmul.xyzw $vf30, $vf7, $vf1
L0013EAA8:
    bnez       $a1, L0013EAB4
    nop
    lw         $a1, -32680($gp)
L0013EAB4:
    vmulax.xyzw ACC, $vf28, $vf8x
    vmadday.xyzw ACC, $vf29, $vf8y
    vmaddaz.xyzw ACC, $vf30, $vf8z
    vmaddw.xyzw $vf31, $vf31, $vf8w
    lw         $t0, 0xC($a3)
    addi       $a3, $a3, 0x10
    vmove.xyzw $vf24, $vf28
    vmove.xyzw $vf25, $vf29
    vmove.xyzw $vf26, $vf30
    j func_0013ED58
    vmove.xyzw $vf27, $vf31
}
INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013EAE0);
INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013EE00);
INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013EE90);
INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013F2A0);
INCLUDE_ASM("asm/nonmatchings/sys/amObject", func_0013F710);
