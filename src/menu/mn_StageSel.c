#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002861B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286650);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286840);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286A30);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286C50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286DA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00286E70);
extern void *amSofdec_Create(void *);
extern void func_00286E70(void);
typedef signed short s16_c286FD0;
typedef signed int s32_c286FD0;
typedef struct SofInit_c286FD0 {
    s32_c286FD0 a0;
    s32_c286FD0 a4;
    s32_c286FD0 a8;
    s32_c286FD0 aC;
    s32_c286FD0 a10;
    s32_c286FD0 a14;
    s32_c286FD0 a18;
    void *a1C;
    s16_c286FD0 a20;
} SofInit_c286FD0;
typedef struct Ac2E4_c286FD0 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    void *f30;
} Ac2E4_c286FD0;
typedef struct SofPlay_c286FD0 {
    s16_c286FD0 cur;
    s16_c286FD0 prev;
} SofPlay_c286FD0;
typedef struct SofTask_c286FD0 {
    char pad0[0x1C];
    void *f1C;
    char pad20[0x10];
    SofPlay_c286FD0 p;
} SofTask_c286FD0;
extern s32_c286FD0 D_0046FD5C;

void func_00286FD0(Ac2E4_c286FD0 *s) {
    SofInit_c286FD0 in;

    in.a0 = 0;
    in.a4 = 1;
    in.a8 = 0x1C2000;
    in.aC = 0x400;
    in.a10 = 0x200;
    in.a14 = 3;
    in.a18 = -1;
    in.a1C = (void *)D_0046FD5C;
    in.a20 = 0x60;
    s->f30 = amSofdec_Create(&in);
    s->f1C = (func_00286E70 == NULL) ? NULL : (void *)func_00286E70;
}

extern f32 gFrameDelta;
void func_00287060(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002861B0(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x28C) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x28C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s8 *)((u8 *)temp_s0 + 0x262) = 5;
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    }
}

s32 func_00284AA0(s32);
s32 func_00285EF0(s32);
void func_002870D0(u8 *arg0) {
    s32 temp_s0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x30);
    func_00284AA0(temp_s0);
    func_002861B0(temp_s0);
    func_00285EF0(temp_s0);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287110);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002872A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_002878B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287A70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287C30);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287C60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00287E60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_StageSel", func_00288000);
