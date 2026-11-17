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
extern void StrStatus_Exit();
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
        StrStatus_Exit(*(void **)(s1 + 0x4C));
        amHeap_Free(s1);
        Help_Exit();
        amTask_Kill(task);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265B40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265BF0);
extern void func_00229800(void *, void *, s32, f32);
extern void func_002C0470(s32, void *);
extern void func_002C0490(s32, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void func_00265BF0();
extern f32 D_004E0618[];
extern void func_00265800();

void func_00266070(u8 *a0) {
    u8 *s0;
    u8 *s1;
    u8 *v;
    f32 f;
    f32 loc[8];
    s0 = a0;
    s1 = *(u8 **)(a0 + 0x34);
    func_00265800(s1);
    f = *(f32 *)(s1 + 0x34) - 1.0f;
    *(f32 *)(s1 + 0x34) = f;
    if (f <= 0.0f) {
        v = *(u8 **)s1;
        v = *(u8 **)(v + 0x1C);
        func_00229800(*(void **)(v + 0x1B4), loc, -1, 0.0f);
        func_002C0470(*(s32 *)(s1 + 0x4C), loc);
        func_002C0490(*(s32 *)(s1 + 0x4C), 0);
        *(s32 *)(s1 + 0x50) = amAdx_PlayAfs(1, 0x210E9, 0);
        amAdx_SetVolume(*(s32 *)(s1 + 0x50), D_004E0618[0]);
        amAdx_Pause(*(s32 *)(s1 + 0x50), 0);
        *(s8 *)(s1 + 0x54) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_00265BF0 == 0) ? 0 : (void *)func_00265BF0;
    }
}
extern f32 gFrameDelta;
extern void func_00266070();

void func_00266150(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x34);
    func_00265800(s0);
    *(f32 *)(s0 + 0x34) = *(f32 *)(s0 + 0x34) - gFrameDelta;
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
