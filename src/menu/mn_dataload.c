#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265420);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002655F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265700);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265800);
extern void func_001F07B0();

void func_002659E0(void) {
    func_001F07B0(5);
}
extern void func_00265800();
extern void func_00265700();
extern void func_002C04B0();
extern void amHeap_Free(void *);
extern void Help_Exit();
extern void amTask_Kill(void *);

void func_002659F0(u8 *a0) {
    func_00265800(*(void **)(a0 + 0x34));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265A00);
#if 0
// differs: 9 of 41 instr differ: addiu v1,s0,48 (task+0x30 pointer) is kept after the bc1t, original hoists it between the lw and the lwc1
void func_00265B40(u8 *task) {
    u8 *s1;
    u8 *obj;
    u8 **pp;
    u8 *p;
    f32 f1;

    pp = (u8 **)(task + 0x30);
    obj = *(u8 **)(task + 0x34);
    f1 = *(f32 *)(obj + 0x40) - 0.05f;
    if (f1 > 0.0f) {
        *(f32 *)(obj + 0x40) = f1;
        func_00265800(obj);
    } else {
        p = *pp;
        *(u16 *)(p + 0x18) = *(u16 *)(p + 0x18) & 0xFFFE;
        s1 = *(u8 **)(task + 0x34);
        func_00265700(s1);
        func_002C04B0(*(void **)(s1 + 0x4C));
        amHeap_Free(s1);
        Help_Exit();
        amTask_Kill(task);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265B40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265BF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266070);
extern f32 D_004703BC;
extern void func_00266070();

void func_00266150(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x34);
    func_00265800(s0);
    *(f32 *)(s0 + 0x34) = *(f32 *)(s0 + 0x34) - D_004703BC;
    if (*(f32 *)(s0 + 0x34) <= 0.0f) {
        *(u16 *)(s0 + 0x32) = *(u16 *)(s0 + 0x32) | 0x100;
        *(s32 *)(s0 + 0x34) = 0x42340000;
        *(void **)(a0 + 0x1C) = ((void *)func_00266070 == 0) ? 0 : (void *)func_00266070;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002661D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266390);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002667D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002668F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266AC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266CD0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266EC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00267090);
