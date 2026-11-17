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

#if 0
// differs: 14 of 65: the call sequence and the three pointer loops match in shape; the D_004707DC load is hoisted ahead of the s0 load and the s1 load is scheduled before the D_00470238 store (the original keeps both after)
extern void *D_004707DC;
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_00268170();
extern void func_00267E00();
extern void A2d_FlushList();
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;

void func_00268BF0(u8 *a0) {
    u8 *s0;
    u8 *s1;
    s32 s3;
    s32 s2;
    s0 = *(u8 **)(a0 + 0x30);
    D_00470704 = *(s32 *)((u8 *)D_004707DC + 0xC);
    D_0047070C = 0x1000;
    amModel_SetCurrent(*(s32 *)((u8 *)D_004707DC + 0xC), 0x1000);
    D_00470708 = 0;
    D_00470238 = 0;
    s1 = *(u8 **)s0;
    if (s1 != 0) {
        func_0022C060((s32)s1, 1.0f);
        func_0022CD00((s32)s1);
    }
    s2 = 0;
    s1 = s0;
    do {
        s3 = *(s32 *)(s1 + 0x2C);
        if (s3 != 0) {
            func_0022C060(s3, 1.0f);
            func_0022CD00(s3);
        }
        s2++;
        s1 += 4;
    } while (s2 < 2);
    func_00268170(s0);
    func_00267E00(s0);
    s3 = 0;
    do {
        s2 = *(s32 *)(s0 + 4);
        if (s2 != 0) {
            func_0022C060(s2, 1.0f);
            func_0022CD00(s2);
        }
        s3++;
        s0 += 4;
    } while (s3 < 2);
    A2d_FlushList();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268BF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268D00);
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
