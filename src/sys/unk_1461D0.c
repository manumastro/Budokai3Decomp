#include "common.h"

#if 0
/* differs: 12 of 36 instructions; the register of each count (a2 / a3) and the order of the loads (the original
 * loads v0 last) are not reproduced yet. */
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
    s32 n = r->n2;
    s32 a3 = r->n4;
    s32 a2 = r->n12;
    u8 *v0 = r->base;
    s32 v;
    if (n != 0) {
        a3 = a3 - 1;
        a2 = a3 & (a2 + (n + a3));
        v0 = v0 + (a2 << 6);
        do {
            v = *(s32 *)(v0 + 4);
            n = n - 1;
            if (v != key) {
                v0 = v0 - 0x40;
                a2 = a2 - 1;
                if (a2 < 0) {
                    a2 = a3;
                    v0 = r->base + (a3 << 6);
                }
            } else {
                r->n16 = a2;
                return v0;
            }
        } while (n > 0);
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_001461D0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146260);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146680);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146C20);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146E30);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146E60);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146E90);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146EB0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146ED0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146F10);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146F30);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146F60);
INCLUDE_ASM("asm/nonmatchings/sys/unk_1461D0", func_00146F90);
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
