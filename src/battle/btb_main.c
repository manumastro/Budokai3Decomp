#include "common.h"
#include "battle/stage.h"


extern void func_001F63B0(void);
extern void func_001F63C0(void);
extern void func_001F6450(void);
extern void func_001F65F0(void);
extern void func_001F63D0(void);
extern void func_0013B0B0(s32);
extern void func_0013B110(s32);
extern void func_00125740(void *, s32, s32);
extern s32 func_001A50F0(s32, s32);
void func_001F9E40(void);
void func_001F9F50(void);

INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8420);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8740);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F89D0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8AA0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8C30);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8DE0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F8ED0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9270);
void func_001F9310(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_001F63B0();
    }
}
void func_001F9360(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_0013B0B0(0);
        func_001F63C0();
        func_0013B110(1);
    }
}
void func_001F93C0(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1 && (D_0051CCE0.flags & 1)) {
        func_0013B0B0(0);
        func_001F6450();
        func_0013B110(1);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9420);
void func_001F9600(void) {
    if (BW_FIELD(D_00470570, s8, 0x8975) != 1) {
        func_0013B0B0(0);
        if (D_0051CCE0.flags & 1) {
            func_001F65F0();
        }
        func_0013B110(1);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9660);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F97A0);
void func_001F9840(s16 a0, s32 a1, s32 i) {
    D_0051CCE0.unk50[i] = a0;
    func_00125740(&D_0051CCE0.slot[i], a1, a0 * 2);
}
void func_001F9880(void) {
    D_0051CCE0.flags &= ~0x40;
}
void func_001F98A0(void) {
    D_0051CCE0.flags &= ~0x40;
    D_0051CCE0.flags |= 0x40;
}
void func_001F98D0(void) {
    D_0051CCE0.flags &= ~0x10;
}
s32 func_001F98F0(void) {
    return D_0051CCE0.flags & 8;
}
void func_001F9900(void) {
    D_0051CCE0.flags &= ~8;
}
void func_001F9920(void) {
    D_0051CCE0.flags &= ~4;
}
s32 func_001F9940(void) {
    return D_0051CCE0.flags & 2;
}
void func_001F9950(void) {
    D_0051CCE0.flags &= ~2;
}
void func_001F9970(void) {
    D_0051CCE0.flags &= ~2;
    D_0051CCE0.flags |= 2;
}
void func_001F99A0(void) {
    D_0051CCE0.flags &= ~1;
}
void func_001F99C0(void) {
    D_0051CCE0.flags &= ~1;
    D_0051CCE0.flags |= 1;
}
void func_001F99F0(s16 a0) {
    D_0051CCE0.unk9E = a0;
}
s32 func_001F9A00(void) {
    return D_0051CCE0.unk30;
}
s32 func_001F9A10(void) {
    return func_001A50F0(D_0051CCE0.unk2C, 0x7F);
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9A20);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9AA0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9B00);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9B60);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9BB0);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9CD0);
void func_001F9DF0(void) {
    func_001F63D0();
}
void func_001F9E00(void) {
}
void func_001F9E10(void) {
    func_001F9E40();
    func_001F9F50();
}
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9E40);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001F9F50);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001FA250);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001FA320);
INCLUDE_ASM("asm/nonmatchings/battle/btb_main", func_001FA360);
