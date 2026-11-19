/* Draft (not built): func_00268550 at 0x00268550, size 0x304, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x30C, original 0x304
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268550.s */

// src/menu/mn_vsmode.c func_00268550 size diff=100/195
extern void *D_004707DC;
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Obj_SetF3C();
void func_00268550(u8 *arg0) {
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_9;
    s32 var_s3;
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_5;
    u8 *temp_a0_8;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    var_s1 = arg0;
    Obj_SetF3C(*(s32 *)((u8 *)arg0 + 0x44), -1);
    *(s8 *)((u8 *)var_s1 + 0x51) = 3;
    *(s32 *)((u8 *)var_s1 + 0x48) = 0x42700000;
    var_s0 = D_004707DC;
    temp_a0 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 8), 0);
    temp_a0_3 = *(s32 *)((u8 *)var_s1 + 0x2C);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x2C), 0);
    temp_a0_4 = *(s32 *)((u8 *)var_s1 + 0x30);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x38), 0);
    var_s0 = D_004707DC;
    temp_a0_5 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = temp_a0_5;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_5, 0x1000);
    D_00470238 = 0;
    temp_a0_6 = *(s32 *)((u8 *)var_s1 + 4);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)var_s1 + 4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x20), 0);
    temp_a0_7 = *(s32 *)((u8 *)var_s1 + 8);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)var_s1 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x14), 0);
    var_s0 = D_004707DC;
    temp_a0_8 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = temp_a0_8;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_8, 0x1000);
    D_00470238 = 0;
    var_s3 = 0;
    var_s2 = var_s1;
    do {
        temp_a0_9 = *(s32 *)((u8 *)var_s2 + 0xC);
        if (temp_a0_9 != 0) {
            func_0022D0E0(temp_a0_9, 1);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 4);
    *(u8 *)((u8 *)var_s1 + 0x55) = (u8) (*(u8 *)((u8 *)var_s1 + 0x55) | 3);
    *(s32 *)((u8 *)var_s1 + 0xC) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x14)) + 8), 0);
    *(s32 *)((u8 *)var_s1 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0xC4), 0);
    *(s32 *)((u8 *)var_s1 + 0x14) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0xAC), 0);
    *(s32 *)((u8 *)var_s1 + 0x18) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0xB4), 0);
    var_s0 = D_004707DC;
    temp_a0_10 = *(u8 **)((u8 *)var_s0 + 0xC);
    D_00470704 = temp_a0_10;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_10, 0x1000);
    D_00470238 = 0;
    temp_a0_11 = *(s32 *)((u8 *)var_s1 + 0x34);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x44), 0);
    temp_a0_12 = *(s32 *)((u8 *)var_s1 + 0x38);
    if (temp_a0_12 != 0) {
        func_0022D0E0(temp_a0_12, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x50), 0);
    temp_a0_13 = *(s32 *)((u8 *)var_s1 + 0x3C);
    if (temp_a0_13 != 0) {
        func_0022D0E0(temp_a0_13, 1);
        *(s32 *)((u8 *)var_s1 + 0x3C) = 0;
    }
    temp_a0_14 = *(s32 *)((u8 *)var_s1 + 0x40);
    if (temp_a0_14 != 0) {
        func_0022D0E0(temp_a0_14, 1);
    }
    *(s32 *)((u8 *)var_s1 + 0x40) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s0 + 8)) + 0x1C)) + 0x78), 0);
}
