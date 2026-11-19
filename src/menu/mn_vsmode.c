#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00267E00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268170);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002682E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268550);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268860);
s32 func_0022D0E0(s32, s32);
void func_00268A80(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;
    u8 *var_s1_4;
    u8 *var_s1_5;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_a0_2 = *(s32 *)((u8 *)var_s1 + 4);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    var_s2_2 = 0;
    var_s1_2 = arg0;
    do {
        temp_a0_3 = *(s32 *)((u8 *)var_s1_2 + 0xC);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
        }
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 4);
    var_s2_3 = 0;
    var_s1_3 = arg0;
    do {
        temp_a0_4 = *(s32 *)((u8 *)var_s1_3 + 0x1C);
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        var_s2_3 += 1;
        var_s1_3 += 4;
    } while (var_s2_3 < 4);
    var_s2_4 = 0;
    var_s1_4 = arg0;
    do {
        temp_a0_5 = *(s32 *)((u8 *)var_s1_4 + 0x2C);
        if (temp_a0_5 != 0) {
            func_0022D0E0(temp_a0_5, 1);
        }
        var_s2_4 += 1;
        var_s1_4 += 4;
    } while (var_s2_4 < 2);
    var_s2_5 = 0;
    var_s1_5 = arg0;
    do {
        temp_a0_6 = *(s32 *)((u8 *)var_s1_5 + 0x34);
        if (temp_a0_6 != 0) {
            func_0022D0E0(temp_a0_6, 1);
        }
        var_s2_5 += 1;
        var_s1_5 += 4;
    } while (var_s2_5 < 2);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x3C);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x40);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
}

extern void *D_004707DC;
extern void *D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
void amModel_SetCurrent();
void func_0022C060(void *, f32);
void func_0022CD00(void *);
void func_00268170(void *);
void func_00267E00(void *);
void A2d_FlushList(void);

void func_00268BF0(u8 *arg0) {
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    s32 var_s2;
    u8 *temp_a0;
    var_s0 = *(u8 **)(arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s1 = *(u8 **)var_s0;
    if (var_s1 != NULL) {
        func_0022C060(var_s1, 1.0f);
        func_0022CD00(var_s1);
    }
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        var_s3 = *(u8 **)(var_s1 + 0x2C);
        if (var_s3 != NULL) {
            func_0022C060(var_s3, 1.0f);
            func_0022CD00(var_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 2);
    func_00268170(var_s0);
    func_00267E00(var_s0);
    var_s2 = 0;
    do {
        var_s1 = *(u8 **)(var_s0 + 4);
        if (var_s1 != NULL) {
            func_0022C060(var_s1, 1.0f);
            func_0022CD00(var_s1);
        }
        var_s2 += 1;
        var_s0 += 4;
    } while (var_s2 < 2);
    A2d_FlushList();
}
extern void *D_004707DC;
void VsMode_Exit(void);
s32 VsCharasel_Start(s32, s8);
void func_0022C060(void *, f32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void A2d_FlushList(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_00268D00(u8 *arg0) {
    u8 *var_s3;
    f32 temp_f1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3_2;
    s32 var_s2_2;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)D_004707DC + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s1 = *(u8 **)((u8 *)var_s0 + 0);
    if (var_s1 != NULL) {
        func_0022C060(var_s1, 1.0f);
        func_0022CD00(var_s1);
    }
    var_s2 = 0;
    var_s1 = var_s0;
    do {
        var_s3 = *(u8 **)((u8 *)var_s1 + 0x2C);
        if (var_s3 != NULL) {
            func_0022C060(var_s3, 1.0f);
            func_0022CD00(var_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    }
    while (var_s2 < 2);
    func_00268170(var_s0);
    func_00267E00(var_s0);
    var_s2_2 = 0;
    var_s1 = var_s0;
    do {
        var_s3_2 = *(u8 **)((u8 *)var_s1 + 4);
        if (var_s3_2 != NULL) {
            func_0022C060(var_s3_2, 1.0f);
            func_0022CD00(var_s3_2);
        }
        var_s2_2 += 1;
        var_s1 += 4;
    }
    while (var_s2_2 < 2);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)var_s0 + 0x48) - gFrameDelta;
    *(f32 *)((u8 *)var_s0 + 0x48) = temp_f1;
    if (temp_f1 <= 0.0f) {
        VsCharasel_Start(0, *(s8 *)((u8 *)var_s0 + 0x53));
        VsMode_Exit();
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002693E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002695B0);
extern void *D_004707DC;

void VsMode_Clear(void) {
    D_004707DC = 0;
}
extern void StrStatus_Exit(void *);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void amCdFs_Close(void *, s32);
extern void Help_Exit();
extern void func_0028DF20();

void VsMode_Exit(void) {
    u8 *s1;
    u8 *s0;
    s0 = (u8 *)D_004707DC;
    if (s0 != 0) {
        if (*(void **)(s0 + 0x10) != 0) {
            s1 = *(u8 **)(*(u8 **)(s0 + 0x10) + 0x30);
            StrStatus_Exit(*(void **)(s1 + 0x44));
            func_00268A80(s1);
            amHeap_Free(s1);
            amTask_Kill(*(void **)(s0 + 0x10));
        }
        if (*(void **)(s0 + 0x8) != 0) {
            amHeap_Free(*(void **)(s0 + 0x8));
        } else if (*(void **)s0 != 0) {
            amCdFs_Close(*(void **)s0, 0);
        }
        if (*(void **)(s0 + 0xC) != 0) {
            amHeap_Free(*(void **)(s0 + 0xC));
        } else if (*(void **)(s0 + 0x4) != 0) {
            amCdFs_Close(*(void **)(s0 + 0x4), 0);
        }
        amHeap_Free(s0);
        D_004707DC = 0;
        Help_Exit();
        func_0028DF20();
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00269820);
extern char D_0046B430[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);

void VsMode_Load(void) {
    u8 *s0;
    s0 = D_004707DC = amHeap_Alloc(0x14, 0, D_0046B430, 0x84);
    *(s32 *)(s0 + 0x10) = 0;
    *(s32 *)s0 = amCdFs_ReadFileId(0x1083C, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1083D, 0, 0);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0xC) = 0;
}
