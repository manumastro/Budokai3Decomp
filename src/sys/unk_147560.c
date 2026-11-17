#include "common.h"

extern void func_001471C0(void);

s32 func_00147560(void) {
    func_001471C0();
    __asm__ volatile ("sync");
    __asm__ volatile ("ei");
    return 0;
}
extern s32 D_004703B0;
extern u8 D_004703E0;
extern u8 D_004703E4;
extern u8 D_004703E8;
extern u8 D_004703EC;
extern s32 D_004703B8;
extern s32 D_004703C8;
extern s32 D_004703CC;
extern s32 GetThreadId(void);

void func_00147590(void) {
    D_004703B0 = 0;
    D_004703E0 = 0;
    D_004703E4 = 1;
    D_004703EC = 0;
    D_004703E8 = 0;
    D_004703B8 = 0;
    D_004703CC = GetThreadId();
    D_004703C8 = 1;
    *(volatile u32 *)0x1000E020 = 0x0307031F;
    __asm__ volatile ("sync");
    *(volatile u32 *)0x10000000 = 0;
    *(volatile u32 *)0x10000010 = 0xC82;
}
extern void func_0010D0C0(void);
extern void func_0010D378(void *, s32);
extern void DI(void);
extern void EI(void);
extern char D_0047E890[];

void func_00147600(void) {
    func_0010D0C0();
    DI();
    func_0010D378(D_0047E890, 0x10);
    EI();
}
INCLUDE_ASM("asm/nonmatchings/sys/unk_147560", func_00147650);
extern char D_0047E540[];
extern s32 D_004703AC;
extern s32 D_004703B0;
extern f32 D_004703D0;
extern s32 D_004703D4;
extern s8 D_004703F8;
extern void func_00101230(void *, s32, s32, s32);
extern void func_00101498(void *, s32, s32, s32);
extern void func_00101808(void *, s32);
extern void func_00100DE0(s32);
extern void func_001489F0();

void func_00148150(void) {
    u8 *s0;
    u64 x;

    *(s32 *)&D_004703D0 = 0x3F800000;
    D_004703D4 = 0;
    func_001489F0();
    s0 = (u8 *)((u32)D_0047E540 | 0x20000000);
    x = *(volatile u64 *)0x12001000;
    D_004703AC = (s32)((x >> 13) & 1);
    D_004703B0 = 0;
    if (D_004703F8 != 0) {
        func_00101230(s0 + 0x60, 0x800, 0x800, (s16)D_004703AC);
        func_00101498(s0 + 0xE0, 0x800, 0x800, (s16)D_004703AC);
    } else {
        func_00101230(s0 + 0x60, 0x800, 0x800, 0);
        func_00101498(s0 + 0xE0, 0x800, 0x800, 0);
    }
    func_00101808(s0, D_004703AC ^ 1);
    func_00101808(s0, D_004703AC);
    sceGsSyncPath(0, 0);
    func_00100DE0(0);
}


extern void amDraw3d_Sync(void);
extern s32 sceGsSyncPath(s32, s32);
extern void func_001489F0();

void func_00148270(s32 a0) {
    amDraw3d_Sync();
    sceGsSyncPath(0, 0);
    func_001489F0(a0);
}
extern u8 D_0046FD70;
extern char D_0047E540[];

void func_001482C0(s32 a0) {
    u32 base;
    D_0046FD70 = a0;
    base = (u32)D_0047E540 | 0x20000000;
    if (a0 != 0) {
        *(u64 *)(base + 0x1A8) = 5;
        *(u64 *)(base + 0x318) = 5;
    } else {
        *(u64 *)(base + 0x1A8) = 0xD;
        *(u64 *)(base + 0x318) = 0xD;
    }
}

extern f32 D_0046FD78;

void func_00148310(f32 a) {
    s64 w;
    u32 base;
    base = (u32)D_0047E540 | 0x20000000;
    D_0046FD78 = a;
    w = ((s32)(255.0f * a) << 8) | 0xA1;
    *(s64 *)(base + 0) = w;
    *(s64 *)(base + 0x28) = w;
}

extern char D_00459400[];
extern s32 D_00470418;
extern u32 D_00470424;
extern s8 D_004703FC;
extern s8 D_00470400;
extern void func_001499C0(void);

void func_00148360(f32 a) {
    f32 old;
    s32 d4;
    s32 t0;
    s32 v1;
    s32 a3;
    s32 a2;
    s32 a1;
    s32 a0;

    old = D_004703D0;
    if (old == a) return;
    D_004703D0 = a;
    D_004703D4 = 8.0f * (1.0f - D_004703D0);
    a0 = old != 0.0f;
    v1 = a != 0.0f;
    if ((a0 ^ v1) != 0) {
        func_001499C0();
        return;
    }
    if (D_004703FC != 0 && D_00470400 != 0) return;
    t0 = (u32)D_00459400 | 0x20000000;
    d4 = D_004703D4;
    a0 = 0x10 - d4;
    t0 = t0 + 0xB0;
    a3 = (u16)d4;
    v1 = D_00470418 * 16;
    v1 = v1 + d4;
    a2 = (u16)v1;
    a1 = (u16)a0;
    v1 = D_00470418 * 16;
    v1 = v1 + a0;
    a0 = (u16)v1;
    v1 = D_00470424 >> 6;
    while (v1 != 0) {
        *(u16 *)(t0 + 0x12) = a3;
        *(u16 *)(t0 + 0x32) = a2;
        *(u16 *)(t0 + 0x72) = a1;
        *(u16 *)(t0 + 0x92) = a0;
        v1--;
        t0 += 0xC0;
    }
}


INCLUDE_ASM("asm/nonmatchings/sys/unk_147560", func_001484A0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_147560", func_001489F0);
INCLUDE_ASM("asm/nonmatchings/sys/unk_147560", func_001499C0);
