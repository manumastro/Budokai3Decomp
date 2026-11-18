#include "common.h"
extern void func_00142120(void);
extern void func_0011F4C0(void);
extern void func_0011F220(void);

/* Motion binding (0x141280-0x1414C0): a set of up to 16 motions mapped onto a skeleton by bone name. */
typedef struct Skel { char pad[0x10]; s32 n; char pad2[0x24 - 0x14]; char *bones; } Skel;
typedef struct Pose { s32 pad0; s32 n; struct { s32 key; s32 pad; } e[1]; } Pose;
typedef struct Key { char pad[0xC]; struct { s16 t; s16 v; } k[1]; } Key;
typedef struct Track { char pad[0xC]; Key **keys; } Track;
typedef struct Mot { char pad[0x14]; Track *tracks; s32 n; char *bones; } Mot;
typedef struct MotSet {
    union { Skel **skel; Pose *pose; } u;
    Mot *mot[16];
    s16 map[16][256];
} MotSet;

extern void memset(void *, s32, s32);
extern s32 amMotion_MatchName(char *, char *);
extern s32 amMotion_FindKey4(Key *, f32);

/* Movies (Sofdec, MWSFD): one player; the code from 0x142490 on is the only code that names amSofdec.c. */
typedef struct MwPly MwPly;
typedef struct MwPlyVtbl {
    void *f[5];
    void (*destroy)(MwPly *);           /* 0x14 */
    void (*start_fname)(MwPly *, char *); /* 0x18 */
    void (*stop)(MwPly *);              /* 0x1C */
    s32 (*get_stat)(MwPly *);           /* 0x20 */
} MwPlyVtbl;
struct MwPly { MwPlyVtbl *vtbl; };

typedef struct SfdFrm { void *buf; } SfdFrm;

typedef struct Movie {
    MwPly *ply;
    void *work;
    void *buf;
    s32 unkC;
    s32 unk10;
    s8 flags;
    s8 own_buf;
    s32 file;      /* 0x18: AFS file (high 16 bits: partition, low: file), -1: by name */
    s32 loops;     /* 0x1C */
    s32 width;     /* 0x20 */
    s32 height;    /* 0x24 */
    char pad28[8];
    s64 unk30;
    SfdFrm frm;    /* 0x38 */
    char pad3C[0x84 - 0x3C];
    char fname[0x108 - 0x84];
} Movie;

typedef struct MovieParam {
    s32 unk0, unk4, unk8, unkC, unk10, unk14;
    void *buf;
    s32 unk1C;
    u16 unk20;
} MovieParam;

typedef struct SfdCprm {
    s32 unk0, unk4, unk8, unkC, unk10, unk14;
    void *work;
    s32 worksize;
    s32 unk20;
    char pad[0x30 - 0x24];
} SfdCprm;

typedef struct SfdFx { f32 fps; s32 unk4; s32 unk8; s32 unkC; char pad[0x10]; } SfdFx;

extern Movie gSofdecMovie[1];
extern s8 gSofdecFree[1];
extern s32 gSofdecFreeCount;
extern s8 D_004703F4;
extern s8 D_00470208;
extern char D_0045F570[];
extern void func_00181FD0(SfdFx *);
extern void func_00182330(void);
extern void amHeap_Free(void *);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void mwPlyGetCurFrm(MwPly *, SfdFrm *);
extern void mwPlyRelCurFrm(MwPly *);
extern void mwPlyStartAfs(MwPly *, s32, s32);
extern s32 mwPlyCalcWorkCprmSfd(SfdCprm *);
extern MwPly *func_00180290(SfdCprm *);
extern void amDma_CopyViaSpr(void *, void *, s32);
void amSofdec_DestroyAll(void);



void amMotSet_Init(MotSet *s, Skel **skel) {
    memset(s, 0, sizeof(MotSet));
    s->u.skel = skel;
}


void amMotSet_Bind(MotSet *s, s32 idx, Mot *m) {
    s16 *map;
    Skel *sk;
    s32 i;
    s32 j;
    s32 r;

    s->mot[idx] = m;
    map = s->map[idx];
    sk = *s->u.skel;
    for (i = 0; i < sk->n; i++) {
        r = 0;
        for (j = 0; j < m->n && r == 0; j++) {
            r = amMotion_MatchName(sk->bones + i * 32, m->bones + j * 32);
        }
        map[i] = r ? j - 1 : -1;
    }
}


void amMotSet_Apply(MotSet *s, s32 packed, f32 t) {
    s32 k;
    s32 idx;
    s16 *map;
    Pose *p;
    Mot *m;
    s32 i;
    s32 b;
    Key *key;

    k = packed & 0xFFFF;
    idx = (packed >> 16) - 1;
    map = s->map[idx];
    p = s->u.pose;
    m = s->mot[idx];
    for (i = 0; i < p->n; i++) {
        b = map[i];
        if (b >= 0) {
            key = m->tracks[k].keys[b];
            p->e[i].key = key->k[amMotion_FindKey4(key, t)].v;
        }
    }
}

asm void func_001414D0(void) {
L001414D0:
    lui        $v0, 16128
    mtc1       $v0, $f1
    addi       $sp, $sp, -0xA0
    sq         $ra, 0x0($sp)
    sq         $a0, 0x10($sp)
    sq         $s0, 0x20($sp)
    sq         $s1, 0x30($sp)
    sq         $s2, 0x40($sp)
    sq         $s3, 0x50($sp)
    sq         $s4, 0x60($sp)
    sq         $s5, 0x70($sp)
    sq         $s6, 0x80($sp)
    sq         $s7, 0x90($sp)
    mul.s      $f12, $f12, $f1
    mul.s      $f13, $f13, $f1
    mul.s      $f14, $f14, $f1
    mfc1       $s5, $f12
    mfc1       $s6, $f13
    jal func_0011F4C0
    mfc1      $s7, $f14
    mfc1       $s0, $f0
    jal func_0011F4C0
    mtc1      $s6, $f12
    mfc1       $s2, $f0
    jal func_0011F4C0
    mtc1      $s7, $f12
    mfc1       $s4, $f0
    jal func_0011F220
    mtc1      $s5, $f12
    mfc1       $s1, $f0
    jal func_0011F220
    mtc1      $s6, $f12
    mfc1       $s3, $f0
    jal func_0011F220
    mtc1      $s7, $f12
    mov.s      $f5, $f0
    mtc1       $s0, $f0
    mtc1       $s1, $f1
    mtc1       $s2, $f2
    mtc1       $s3, $f3
    mtc1       $s4, $f4
    lq         $a0, 0x10($sp)
    mul.s      $f6, $f3, $f5
    mul.s      $f7, $f2, $f4
    mula.s     $f0, $f6
    msub.s     $f8, $f1, $f7
    swc1       $f8, 0x0($a0)
    mul.s      $f8, $f1, $f2
    mula.s     $f8, $f5
    mul.s      $f8, $f0, $f3
    madd.s     $f8, $f8, $f4
    swc1       $f8, 0x4($a0)
    mul.s      $f8, $f1, $f3
    mula.s     $f8, $f4
    mul.s      $f8, $f0, $f2
    msub.s     $f8, $f8, $f5
    swc1       $f8, 0x8($a0)
    mula.s     $f1, $f6
    madd.s     $f8, $f0, $f7
    swc1       $f8, 0xC($a0)
    lq         $ra, 0x0($sp)
    lq         $s0, 0x20($sp)
    lq         $s1, 0x30($sp)
    lq         $s2, 0x40($sp)
    lq         $s3, 0x50($sp)
    lq         $s4, 0x60($sp)
    lq         $s5, 0x70($sp)
    lq         $s6, 0x80($sp)
    lq         $s7, 0x90($sp)
    jr         $ra
    addi      $sp, $sp, 0xA0
}
extern void func_0012E830(void);
asm void func_001415F0(void) {
L001415F0:
    sra        $a1, $a1, 1
    sra        $a2, $a2, 1
    sra        $a3, $a3, 1
    addu       $t3, $zero, $ra
    addu       $t0, $zero, $a0
    addu       $t1, $zero, $a2
    addu       $t2, $zero, $a3
    jal        func_0012E830
    addu       $a0, $zero, $a1
    mov.s      $f12, $f0
    mov.s      $f13, $f1
    jal        func_0012E830
    addu       $a0, $zero, $t1
    mov.s      $f2, $f0
    mov.s      $f3, $f1
    jal        func_0012E830
    addu       $a0, $zero, $t2
    addu       $ra, $zero, $t3
    mov.s      $f5, $f1
    mov.s      $f4, $f0
    mov.s      $f0, $f12
    mov.s      $f1, $f13
    mul.s      $f6, $f3, $f5
    mul.s      $f7, $f2, $f4
    mul.s      $f10, $f1, $f2
    mul.s      $f11, $f0, $f3
    mul.s      $f8, $f0, $f6
    mul.s      $f9, $f1, $f7
    mula.s     $f10, $f5
    madd.s     $f10, $f11, $f4
    mul.s      $f11, $f1, $f3
    mul.s      $f12, $f0, $f2
    sub.s      $f8, $f8, $f9
    swc1       $f10, 0x4($t0)
    mula.s     $f11, $f4
    msub.s     $f12, $f12, $f5
    swc1       $f8, 0x0($t0)
    mula.s     $f1, $f6
    madd.s     $f8, $f0, $f7
    swc1       $f12, 0x8($t0)
    swc1       $f8, 0xC($t0)
    jr         $ra
    nop
}
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_001416A0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141920);
asm void func_00141C30(void) {
L00141C30:
    lqc2       $vf1, 0x0($a1)
    lqc2       $vf2, 0x0($a2)
    vadd.xyz   $vf2, $vf2, $vf1
    vmul.xyzw  $vf3, $vf2, $vf2
    vaddy.x    $vf3, $vf3, $vf3y
    vaddz.x    $vf3, $vf3, $vf3z
    vrsqrt     Q, $vf0w, $vf3x
    vwaitq
    vmulq.xyz  $vf2, $vf2, Q
    vopmula.xyz ACC, $vf1, $vf2
    vopmsub.xyz $vf3, $vf2, $vf1
    vmul.xyz   $vf2, $vf1, $vf2
    vaddy.x    $vf2, $vf2, $vf2y
    vaddz.x    $vf2, $vf2, $vf2z
    vmulx.w    $vf3, $vf0, $vf2x
    jr         $ra
    sqc2      $vf3, 0x0($a0)
}
asm void func_00141C80(void) {
L00141C80:
    lui        $v0, 16128
    mtc1       $v0, $f0
    addi       $sp, $sp, -0x40
    mul.s      $f12, $f12, $f0
    sq         $ra, 0x0($sp)
    sq         $a0, 0x10($sp)
    sq         $a1, 0x20($sp)
    jal func_0011F4C0
    swc1      $f12, 0x30($sp)
    swc1       $f0, 0x34($sp)
    jal func_0011F220
    lwc1      $f12, 0x30($sp)
    lq         $a1, 0x20($sp)
    lq         $a0, 0x10($sp)
    lwc1       $f1, 0x34($sp)
    lwc1       $f4, 0x0($a1)
    lwc1       $f5, 0x4($a1)
    lwc1       $f6, 0x8($a1)
    mul.s      $f4, $f4, $f1
    mul.s      $f5, $f5, $f1
    mul.s      $f6, $f6, $f1
    lq         $ra, 0x0($sp)
    swc1       $f4, 0x0($a0)
    swc1       $f5, 0x4($a0)
    swc1       $f6, 0x8($a0)
    swc1       $f0, 0xC($a0)
    jr         $ra
    addi      $sp, $sp, 0x40
}
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141CF0);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00141E70);
asm void func_00142080(void) {
L00142080:
    lwc1       $f0, 0x0($a1)
    lwc1       $f1, 0x4($a1)
    lwc1       $f2, 0x8($a1)
    lwc1       $f3, 0xC($a1)
    lwc1       $f4, 0x0($a2)
    lwc1       $f5, 0x4($a2)
    lwc1       $f6, 0x8($a2)
    lwc1       $f7, 0xC($a2)
    mula.s     $f3, $f4
    msuba.s    $f2, $f5
    madda.s    $f1, $f6
    madd.s     $f8, $f0, $f7
    mula.s     $f3, $f5
    madda.s    $f2, $f4
    madda.s    $f1, $f7
    msub.s     $f9, $f0, $f6
    swc1       $f8, 0x0($a0)
    mula.s     $f3, $f6
    madda.s    $f2, $f7
    msuba.s    $f1, $f4
    madd.s     $f10, $f0, $f5
    swc1       $f9, 0x4($a0)
    mula.s     $f3, $f7
    msuba.s    $f2, $f6
    msuba.s    $f1, $f5
    msub.s     $f11, $f0, $f4
    swc1       $f10, 0x8($a0)
    jr         $ra
    swc1      $f11, 0xC($a0)
}
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142100);
INCLUDE_ASM("asm/nonmatchings/sys/amSofdec", func_00142120);
asm void func_00142280(void) {
L00142280:
    lwc1       $f0, 0x0($a2)
    lwc1       $f1, 0x4($a2)
    lwc1       $f2, 0x8($a2)
    lwc1       $f3, 0xC($a2)
    lwc1       $f4, 0x0($a1)
    lwc1       $f5, 0x4($a1)
    lwc1       $f6, 0x8($a1)
    lwc1       $f7, 0xC($a1)
    neg.s      $f8, $f0
    neg.s      $f9, $f1
    neg.s      $f10, $f2
    mov.s      $f11, $f3
    mula.s     $f7, $f8
    msuba.s    $f6, $f9
    madda.s    $f5, $f10
    madd.s     $f12, $f4, $f11
    mula.s     $f7, $f9
    madda.s    $f6, $f8
    madda.s    $f5, $f11
    msub.s     $f13, $f4, $f10
    mula.s     $f7, $f10
    madda.s    $f6, $f11
    msuba.s    $f5, $f8
    madd.s     $f14, $f4, $f9
    mula.s     $f7, $f11
    msuba.s    $f6, $f10
    msuba.s    $f5, $f9
    msub.s     $f15, $f4, $f8
    mula.s     $f3, $f12
    msuba.s    $f2, $f13
    madda.s    $f1, $f14
    madd.s     $f4, $f0, $f15
    mula.s     $f3, $f13
    madda.s    $f2, $f12
    madda.s    $f1, $f15
    msub.s     $f5, $f0, $f14
    mula.s     $f3, $f14
    madda.s    $f2, $f15
    msuba.s    $f1, $f12
    madd.s     $f6, $f0, $f13
    mula.s     $f3, $f15
    msuba.s    $f2, $f14
    msuba.s    $f1, $f13
    beqz       $a3, L00142354
    msub.s     $f7, $f0, $f12
    lwc1       $f8, 0x0($a3)
    lwc1       $f9, 0x4($a3)
    lwc1       $f10, 0x8($a3)
    lwc1       $f11, 0xC($a3)
    add.s      $f4, $f4, $f8
    add.s      $f5, $f5, $f9
    add.s      $f6, $f6, $f10
    add.s      $f7, $f7, $f11
L00142354:
    swc1       $f4, 0x0($a0)
    swc1       $f5, 0x4($a0)
    swc1       $f6, 0x8($a0)
    jr         $ra
    swc1       $f7, 0xC($a0)
}
extern void func_00142390(void);
asm void func_00142370(void) {
    lwc1       $f0, 0x0($a1)
    lwc1       $f1, 0x4($a1)
    lwc1       $f2, 0x8($a1)
    lwc1       $f3, 0xC($a1)
    j          func_00142390
    lqc2      $vf1, 0x0($a1)
}
asm void func_00142390(void) {
L00142390:
    mula.s     $f0, $f0
    madda.s    $f1, $f1
    madda.s    $f2, $f2
    mtc1       $zero, $f5
    madd.s     $f4, $f3, $f3
    lui        $v0, 16256
    mtc1       $v0, $f6
    c.lt.s     $f5, $f4
    bc1f       L001423BC
    nop
    rsqrt.s    $f6, $f6, $f4
L001423BC:
    beqz       $a0, L001423D4
    mfc1      $v0, $f6
    qmtc2.ni   $v0, $vf2
    vmulx.xyzw $vf1, $vf1, $vf2x
    jr         $ra
    sqc2      $vf1, 0x0($a0)
L001423D4:
    mul.s      $f0, $f0, $f6
    mul.s      $f1, $f1, $f6
    mul.s      $f2, $f2, $f6
    mul.s      $f3, $f3, $f6
    j func_00142120
    add       $a1, $zero, $zero
}
asm void func_001423F0(void) {
L001423F0:
    lwc1       $f0, 0x0($a1)
    lwc1       $f1, 0x4($a1)
    lwc1       $f2, 0x8($a1)
    lwc1       $f3, 0xC($a1)
    lwc1       $f4, 0x0($a2)
    lwc1       $f5, 0x4($a2)
    lwc1       $f6, 0x8($a2)
    lwc1       $f7, 0xC($a2)
    mtc1       $zero, $f8
    lui        $v0, 16256
    mtc1       $v0, $f9
    mula.s     $f0, $f4
    madda.s    $f1, $f5
    madda.s    $f2, $f6
    madd.s     $f10, $f3, $f7
    c.lt.s     $f10, $f8
    bc1f       L00142448
    sub.s     $f13, $f9, $f12
    neg.s      $f4, $f4
    neg.s      $f5, $f5
    neg.s      $f6, $f6
    neg.s      $f7, $f7
L00142448:
    mula.s     $f13, $f0
    madd.s     $f0, $f12, $f4
    mula.s     $f13, $f1
    madd.s     $f1, $f12, $f5
    mula.s     $f13, $f2
    madd.s     $f2, $f12, $f6
    mula.s     $f13, $f3
    beqz       $a0, L00142480
    madd.s    $f3, $f12, $f7
    swc1       $f0, 0x0($a0)
    swc1       $f1, 0x4($a0)
    swc1       $f2, 0x8($a0)
    jr         $ra
    swc1      $f3, 0xC($a0)
L00142480:
    j func_00142390
    add       $a0, $zero, $zero
}

void amSofdec_Init(void) {
    SfdFx fx;
    s32 i;

    memset(&fx, 0, sizeof(SfdFx));
    if (D_004703F4 != 3) {
        fx.fps = 59.94f;
    } else {
        fx.fps = 50.0f;
    }
    fx.unk4 = 1;
    fx.unk8 = 1;
    fx.unkC = 0;
    func_00181FD0(&fx);
    for (i = 0; i < 1; i++) {
        gSofdecMovie[i].ply = 0;
        gSofdecFree[i] = i;
    }
    gSofdecFreeCount = 1;
}


void amSofdec_Exit(void) {
    amSofdec_DestroyAll();
    func_00182330();
}


void amSofdec_DestroyAll(void) {
    s32 i;
    Movie *m;

    for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
        if (m->ply) {
            m->ply->vtbl->stop(m->ply);
            m->ply->vtbl->destroy(m->ply);
            amHeap_Free(m->work);
            if (m->buf && m->own_buf) {
                amHeap_Free(m->buf);
            }
            m->ply = 0;
        }
        gSofdecFree[i] = i;
    }
    gSofdecFreeCount = 1;
}


void amSofdec_Update(void) {
    s32 i;
    Movie *m;

    for (i = 0, m = gSofdecMovie; i < 1; i++, m++) {
        if (m->ply) {
            if (m->buf) {
                mwPlyGetCurFrm(m->ply, &m->frm);
                if (m->frm.buf) {
                    amDma_CopyViaSpr(m->buf, m->frm.buf, (m->width * m->height * 4) >> 4);
                    mwPlyRelCurFrm(m->ply);
                    m->flags |= 2;
                }
            }
            if (m->ply->vtbl->get_stat(m->ply) == 3 && m->loops) {
                if (m->file == -1) {
                    m->ply->vtbl->start_fname(m->ply, m->fname);
                } else {
                    mwPlyStartAfs(m->ply, m->file >> 16, (u16)m->file);
                }
                if (m->loops != -1) {
                    m->loops--;
                }
            }
        }
    }
}


s32 amSofdec_Create(MovieParam *p) {
    Movie *m;
    s32 id;
    SfdCprm c;

    if (gSofdecFreeCount <= 0) return -1;
    id = gSofdecFree[--gSofdecFreeCount];
    m = &gSofdecMovie[id];
    memset(&c, 0, sizeof(SfdCprm));
    c.unk20 = p->unk0;
    c.unk0 = p->unk4;
    c.unk4 = p->unk8;
    c.unk8 = p->unkC;
    c.unkC = p->unk10;
    c.unk10 = p->unk14;
    c.unk14 = D_00470208;
    c.worksize = mwPlyCalcWorkCprmSfd(&c);
    c.work = amHeap_Alloc(c.worksize, 0, D_0045F570, 187);
    m->ply = func_00180290(&c);
    if (m->ply == 0) {
        amHeap_Free(c.work);
        gSofdecFree[gSofdecFreeCount] = id;
        gSofdecFreeCount++;
        return -2;
    }
    m->work = c.work;
    m->buf = p->buf;
    if ((s32)m->buf == -1) {
        m->buf = amHeap_Alloc(p->unkC * p->unk10 * 4, 0, D_0045F570, 200);
        m->own_buf = 1;
    } else {
        m->own_buf = 0;
    }
    m->unkC = p->unk1C;
    m->flags = 0;
    m->unk10 = p->unk20;
    m->unk30 = 0;
    m->fname[0] = 0;
    m->file = -1;
    return id;
}


void amSofdec_Destroy(s32 id) {
    Movie *m;

    if (id == -1) {
        amSofdec_DestroyAll();
        return;
    }
    m = &gSofdecMovie[id];
    if (m->ply) {
        m->ply->vtbl->stop(m->ply);
        m->ply->vtbl->destroy(m->ply);
        amHeap_Free(m->work);
        if (m->buf && m->own_buf) {
            amHeap_Free(m->buf);
        }
        m->ply = 0;
        gSofdecFree[gSofdecFreeCount] = id;
        gSofdecFreeCount++;
    }
}

