#include "common.h"

typedef struct Ring {
    char pad0[2];
    s16 n2;
    s16 n4;
    char pad6[0xC];
    s16 n12;
    char pad14[2];
    s16 n16;
    char pad18[0xC];
    u8 *base;
} Ring;

u8 *func_001461D0(Ring *r, s32 key) {
    s32 n;
    s32 h;
    s32 m;
    u8 *p;
    s32 v;
    n = r->n2;
    m = r->n4;
    h = r->n12;
    p = r->base;
    if (n != 0) {
        m = m - 1;
        h = m & (h + (n + m));
        p = p + (h << 6);
        do {
            v = *(s32 *)(p + 4);
            n = n - 1;
            if (v != key) {
                p = p - 0x40;
                h = h - 1;
                if (h < 0) {
                    h = m;
                    p = r->base + (m << 6);
                }
            } else {
                r->n16 = h;
                return p;
            }
        } while (n > 0);
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146260);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146680);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146C20);
asm void func_00146E30(void) {
L00146E30:
    lqc2       $vf1, 0x0($a0)
    lqc2       $vf2, 0x0($a1)
    vsub.xyz   $vf1, $vf1, $vf2
    vmul.xyz   $vf1, $vf1, $vf1
    vaddy.x    $vf1, $vf1, $vf1y
    vaddz.x    $vf1, $vf1, $vf1z
    qmfc2.ni   $at, $vf1
    mtc1       $at, $f0
    jr         $ra
    sqrt.s $f0, $f0
}
asm void func_00146E60(void) {
L00146E60:
    lqc2       $vf1, 0x0($a0)
    lqc2       $vf2, 0x0($a1)
    vsub.xyz   $vf1, $vf1, $vf2
    vmul.xyz   $vf1, $vf1, $vf1
    vaddy.x    $vf1, $vf1, $vf1y
    vaddz.x    $vf1, $vf1, $vf1z
    qmfc2.ni   $at, $vf1
    jr         $ra
    mtc1      $at, $f0
}
asm void func_00146E90(void) {
L00146E90:
    lqc2       $vf1, 0x0($a0)
    vmul.xyz   $vf1, $vf1, $vf1
    vaddy.x    $vf1, $vf1, $vf1y
    vaddz.x    $vf1, $vf1, $vf1z
    qmfc2.ni   $at, $vf1
    mtc1       $at, $f0
    jr         $ra
    sqrt.s $f0, $f0
}
asm void func_00146EB0(void) {
L00146EB0:
    lqc2       $vf1, 0x0($a0)
    vmul.xyz   $vf1, $vf1, $vf1
    vaddy.x    $vf1, $vf1, $vf1y
    vaddz.x    $vf1, $vf1, $vf1z
    qmfc2.ni   $at, $vf1
    jr         $ra
    mtc1      $at, $f0
}
asm void func_00146ED0(void) {
L00146ED0:
    lqc2       $vf1, 0x0($a1)
    mfc1       $at, $f12
    qmtc2.ni   $at, $vf3
    vmul.xyz   $vf2, $vf1, $vf1
    vaddy.x    $vf2, $vf2, $vf2y
    vaddz.x    $vf2, $vf2, $vf2z
    qmfc2.ni   $at, $vf2
    mtc1       $at, $f0
    vrsqrt     Q, $vf0w, $vf2x
    vwaitq
    vmulx.xyz  $vf1, $vf1, $vf3x
    vmulq.xyz  $vf1, $vf1, Q
    sqc2       $vf1, 0x0($a0)
    jr         $ra
    sqrt.s $f0, $f0
}
asm void func_00146F10(void) {
L00146F10:
    lqc2       $vf1, 0x0($a1)
    mfc1       $at, $f12
    qmtc2.ni   $at, $vf2
    vmulx.xyz  $vf1, $vf1, $vf2x
    jr         $ra
    sqc2      $vf1, 0x0($a0)
}
asm void func_00146F30(void) {
L00146F30:
    lqc2       $vf1, 0x0($a0)
    vmul.xyz   $vf2, $vf1, $vf1
    vaddy.x    $vf2, $vf2, $vf2y
    vaddz.x    $vf2, $vf2, $vf2z
    qmfc2.ni   $at, $vf2
    mtc1       $at, $f0
    vrsqrt     Q, $vf0w, $vf2x
    vwaitq
    vmulq.xyz  $vf1, $vf1, Q
    sqc2       $vf1, 0x0($a0)
    jr         $ra
    sqrt.s $f0, $f0
}
asm void func_00146F60(void) {
L00146F60:
    lqc2       $vf1, 0x0($a1)
    vmul.xyz   $vf2, $vf1, $vf1
    vaddy.x    $vf2, $vf2, $vf2y
    vaddz.x    $vf2, $vf2, $vf2z
    qmfc2.ni   $at, $vf2
    mtc1       $at, $f0
    vrsqrt     Q, $vf0w, $vf2x
    vwaitq
    vmulq.xyz  $vf1, $vf1, Q
    sqc2       $vf1, 0x0($a0)
    jr         $ra
    sqrt.s $f0, $f0
}
asm void func_00146F90(void) {
L00146F90:
    lqc2       $vf1, 0x0($a0)
    lqc2       $vf2, 0x0($a1)
    vmul.xyz   $vf1, $vf1, $vf2
    vaddy.x    $vf1, $vf1, $vf1y
    vaddz.x    $vf1, $vf1, $vf1z
    qmfc2.ni   $at, $vf1
    jr         $ra
    mtc1      $at, $f0
}
extern s8 D_004703E8;
extern s8 D_004703EC;
extern s32 D_004703C8;
extern s32 D_004703CC;
extern f32 gFrameDelta;
extern f32 D_004703C0;
extern s32 D_004703F0;
extern s32 gDmaQueueBusy[2];
extern void func_00158138(void);
extern s32 CancelWakeupThread(s32);
extern void SleepThread(void);
extern void func_001433F0(void);
extern void func_00157FF0(void);
extern void amDma_ResetQueue(s32);
extern void sceGsSyncPath(s32, s32);

void func_00146FB0(void) {
    s32 i;
    while (1) {
        D_004703E8 = 1;
        if (D_004703C8 != 0) {
            func_00158138();
        } else {
            CancelWakeupThread(D_004703CC);
            SleepThread();
        }
        if (D_004703E8 != 0) {
            func_001433F0();
            if (D_004703C8 != 0) func_00157FF0();
            continue;
        }
        if (D_004703EC != 0) {
            D_004703EC = 0;
            continue;
        }
        break;
    }
    D_004703C0 = (f32)D_004703F0 * gFrameDelta;
    D_004703F0 = 0;
    amDma_ResetQueue(0);
    amDma_ResetQueue(1);
    sceGsSyncPath(0, 0);
    for (i = 0; i < 2; i++) {
        gDmaQueueBusy[i] = -1;
    }
}
extern void func_00183580(void);
extern void amSofdec_Update(void);

void func_001470D0(void) {
    s32 i;
    while (1) {
        D_004703E8 = 1;
        func_00183580();
        if (D_004703E8 != 0) {
            func_001433F0();
            func_00157FF0();
            continue;
        }
        if (D_004703EC != 0) {
            D_004703EC = 0;
            continue;
        }
        break;
    }
    amSofdec_Update();
    D_004703C0 = (f32)D_004703F0 * gFrameDelta;
    D_004703F0 = 0;
    amDma_ResetQueue(0);
    amDma_ResetQueue(1);
    sceGsSyncPath(0, 0);
    for (i = 0; i < 2; i++) {
        gDmaQueueBusy[i] = -1;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_001471C0);
