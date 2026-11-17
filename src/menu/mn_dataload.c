#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265420);
#if 0
// differs: 30 of 65: the saved registers of the task and the +0xC object are the wrong way round for every declaration order tried; the floating-point timer and the branch structure match
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0022D0E0(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

void func_002655F0(u8 *a0) {
    u8 *s1;
    u8 *s0;
    u8 *v;
    f32 f;
    s0 = a0;
    s1 = *(u8 **)(a0 + 0xC);
    D_00470704 = *(s32 *)(a0 + 0x4);
    D_0047070C = 0x1000;
    amModel_SetCurrent(*(s32 *)(a0 + 0x4), 0x1000);
    D_00470708 = 0;
    D_00470238 = 0;
    if ((*(u16 *)(s0 + 0x32) & 1) == 0) {
        if (s1 == 0) {
            v = *(u8 **)(*(u8 **)s0 + 0x14);
            *(s32 *)(s0 + 0xC) = func_0022D860(*(s32 *)(v + 0x10), 0.0f);
            s1 = *(u8 **)(s0 + 0xC);
        } else {
            f = *(f32 *)(s0 + 0x38);
            if (f < 0.0f) {
                func_0022D0E0((s32)s1, 1);
                v = *(u8 **)(*(u8 **)s0 + 0x14);
                *(s32 *)(s0 + 0xC) = func_0022D860(*(s32 *)(v + 0x14), 0.0f);
                *(u16 *)(s0 + 0x32) = *(u16 *)(s0 + 0x32) | 1;
                s1 = *(u8 **)(s0 + 0xC);
            } else {
                *(f32 *)(s0 + 0x38) = f - 1.0f;
            }
        }
    }
    func_0022C060((s32)s1, 1.0f);
    func_0022CD00((s32)s1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002655F0);
s32 func_0022D0E0(s32, s32);
void func_00265700(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;

    temp_a0 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265800);
extern void func_001F07B0();

void func_002659E0(void) {
    func_001F07B0(5);
}
extern void func_00265800();
extern void StrStatus_Exit();
extern void amHeap_Free(void *);
extern void Help_Exit();
extern void amTask_Kill(void *);

void func_002659F0(u8 *a0) {
    func_00265800(*(void **)(a0 + 0x34));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265A00);
void func_00265B40(u8 *arg0)
{
  f32 temp_f1;
  u8 *temp_a0;
  u8 *temp_s1;
  u8 *new_var2;
  u8 *temp_v1;
  u8 **new_var;
  new_var2 = (u8 *) arg0;
  temp_a0 = *((u8 **) (new_var2 + 0x34));
  new_var = (u8 **) (new_var2 + 0x30);
  temp_f1 = (*((f32 *) (((u8 *) temp_a0) + 0x40))) - 0.05f;
  *((f32 *) (((u8 *) temp_a0) + 0x40)) = temp_f1;
  if (!(temp_f1 <= (0x34 * 0.0f)))
  {
    func_00265800(temp_a0);
    return;
  }
  temp_v1 = *new_var;
  *((u16 *) (((u8 *) temp_v1) + 0x18)) = (u16) ((*((u16 *) (((u8 *) temp_v1) + 0x18))) & 0xFFFE);
  temp_s1 = *((u8 **) (new_var2 - -0x34));
  func_00265700(temp_s1);
  StrStatus_Exit(*((s32 *) (((u8 *) temp_s1) + 0x4C)));
  amHeap_Free(temp_s1);
  Help_Exit();
  amTask_Kill(arg0);
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00265BF0);
extern void func_00229800(void *, void *, s32, f32);
extern void Obj_CopyVec4F50(s32, void *);
extern void Obj_SetF3C(s32, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void func_00265BF0();
extern f32 D_004E0618[];
extern void func_00265800();

void DataLoad_TaskWait(u8 *a0) {
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
        Obj_CopyVec4F50(*(s32 *)(s1 + 0x4C), loc);
        Obj_SetF3C(*(s32 *)(s1 + 0x4C), 0);
        *(s32 *)(s1 + 0x50) = amAdx_PlayAfs(1, 0x210E9, 0);
        amAdx_SetVolume(*(s32 *)(s1 + 0x50), D_004E0618[0]);
        amAdx_Pause(*(s32 *)(s1 + 0x50), 0);
        *(s8 *)(s1 + 0x54) = 0;
        *(void **)(s0 + 0x1C) = ((void *)func_00265BF0 == 0) ? 0 : (void *)func_00265BF0;
    }
}
extern f32 gFrameDelta;
extern void DataLoad_TaskWait();

void func_00266150(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x34);
    func_00265800(s0);
    *(f32 *)(s0 + 0x34) = *(f32 *)(s0 + 0x34) - gFrameDelta;
    if (*(f32 *)(s0 + 0x34) <= 0.0f) {
        *(u16 *)(s0 + 0x32) = *(u16 *)(s0 + 0x32) | 0x100;
        *(s32 *)(s0 + 0x34) = 0x42340000;
        *(void **)(a0 + 0x1C) = ((void *)DataLoad_TaskWait == 0) ? 0 : (void *)DataLoad_TaskWait;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002661D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266390);
#if 0
// differs: 8 of 70: the table lookups and the loop match in shape; the 0x1000 global store sits in the call's delay slot (the original stores it before the jal), and the loop-count load is placed differently
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 func_0022D670(s32, f32);
extern s32 func_0022D860(s32, f32);
extern void amModel_SetCurrent(s32, s32);

void func_002667D0(u8 *a0) {
    u8 *s2;
    s32 i;
    u8 *s0;
    s32 n;
    s32 tt;
    s2 = a0;
    tt = *(s32 *)(s2 + 0x4);
    D_00470704 = tt;
    D_0047070C = 0x1000;
    amModel_SetCurrent(tt, 0x1000);
    D_00470708 = 0;
    D_00470238 = 0;
    *(s32 *)(s2 + 0x54) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x1C) + 0xF0), 0.0f);
    *(s32 *)(s2 + 0x58) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x1C) + 0x114), 0.0f);
    n = *(u8 *)(s2 + 0x97);
    i = 0;
    s0 = s2;
    if (0 < n) {
        do {
            *(s32 *)(s0 + 0x5C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x1C) + (*(u8 *)(s2 + 0x99) + i) * 4), 0.0f);
            i++;
            s0 += 4;
        } while (i < *(u8 *)(s2 + 0x97));
    }
    *(s32 *)(s2 + 0x78) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x14) + 0xC), 0.0f);
    *(s32 *)(s2 + 0x7C) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x1C) + 0xE4), 0.0f);
    *(s32 *)(s2 + 0x88) = func_0022D670(*(s32 *)(*(u8 **)(*(u8 **)s2 + 0x1C) + 0x140), 0.0f);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002667D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_002668F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266AC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00266CD0);
void func_00266EC0(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    u8 *temp_a0_14;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;

    temp_a0 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
    }
    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0x14);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0xC);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x44);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x48);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x50);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x54);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x58);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    var_s2_2 = 0;
    var_s1_2 = arg0;
    do {
        temp_a0_9 = *(s32 *)((u8 *)var_s1_2 + 0x5C);
        if (temp_a0_9 != 0) {
            func_0022D0E0(temp_a0_9, 1);
        }
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 7);
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x78);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x7C);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    var_s2_3 = 0;
    var_s1_3 = arg0;
    do {
        temp_a0_12 = *(s32 *)((u8 *)var_s1_3 + 0x80);
        if (temp_a0_12 != 0) {
            func_0022D0E0(temp_a0_12, 1);
        }
        var_s2_3 += 1;
        var_s1_3 += 4;
    } while (var_s2_3 < 2);
    temp_a0_13 = *(s32 *)((u8 *)arg0 + 0x88);
    if (temp_a0_13 != 0) {
        func_0022D0E0(temp_a0_13, 1);
    }
    temp_a0_14 = *(u8 **)((u8 *)arg0 + 0x8C);
    if (temp_a0_14 != NULL) {
        amHeap_Free(temp_a0_14);
    }
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_dataload", func_00267090);
