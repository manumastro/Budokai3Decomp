/* Draft (not built): func_002A3190 at 0x002A3190, size 0x64C, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ccps2.exe Compiler: 907: if (*(s32 *)((u8 *)((var_a3_2 * 4) + sp) + 0x94) != -1) { @ 897: temp_v1_2 = (var_a3 * 4) + sp;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A3190.s */

// src/story/evt_scrp.c func_002A3190 cerr diff=-1/0
s32 func_0026E000(s32 *, s32, s16 *, s32);
extern s32 D_004542D0;
extern s32 D_00454300;
extern s32 D_00454330;
extern s32 D_00454360;
extern s32 D_00454390;
extern s32 D_004543C0;
extern s32 D_0046B5B0;
extern char D_005116E0[];
extern char D_004B4B40[];
extern char D_004E05DC[];
s32 func_002A3190(s32 **arg0, u8 *arg1) {
    s32 sp90;
    s16 *temp_a2;
    s16 temp_a0_3;
    s16 temp_s0;
    s16 temp_s1;
    s16 temp_s2;
    s16 temp_s6;
    s16 temp_s7;
    s16 var_v0;
    s32 temp_t1_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_v0_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s5;
    u8 *temp_t1;
    u8 *temp_v0_2;
    u8 *temp_v1_2;
    u8 *temp_v1_4;

    temp_v0 = (**(s32 **)((u8 *)arg1 + 0x2C) + 1) & 1;
    temp_s5 = (u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210) + 0x80);
    temp_a0 = (u8 *)((temp_v0 * 0x34) + (D_005AB3C0 + (**arg0 * 0x68)));
    if (*(s32 *)((u8 *)temp_a0 + 0) == 0) {
        temp_a0_2 = &D_005AB490 + (((temp_v0 + 1) & 1) * 0x50);
        *(s16 *)((u8 *)temp_a0_2 + 0x20) = (s16) *(s8 *)((u8 *)temp_s5 + 0x11E1);
        temp_s4 = temp_a0_2 + 0x10;
        var_a3 = 0;
        *(s16 *)((u8 *)temp_a0_2 + 0x22) = (s16) *(s8 *)((u8 *)temp_s5 + 0x11E3);
        *(s16 *)((u8 *)temp_a0_2 + 0x24) = (s16) *(s8 *)((u8 *)temp_s5 + 0x11E2);
        *(s16 *)((u8 *)temp_a0_2 + 0x2A) = (s16) *(s8 *)((u8 *)D_004B4B40 + 0x23);
        *(s16 *)((u8 *)temp_a0_2 + 0x2C) = 0;
        *(s16 *)((u8 *)temp_a0_2 + 0x2E) = 1;
        temp_a2 = (s16 *)(&D_004543C0 + (*(s8 *)((u8 *)temp_s5 + 0x11ED) * 2));
        temp_s2 = *(&D_00454300 + (*(s8 *)((u8 *)temp_s5 + 0x11E9) * 2));
        temp_s1 = *(&D_00454330 + (*(s8 *)((u8 *)temp_s5 + 0x11EA) * 2));
        temp_s0 = *(&D_00454360 + (*(s8 *)((u8 *)temp_s5 + 0x11EB) * 2));
        temp_v1 = *(&D_004542D0 + (*(s8 *)((u8 *)temp_s5 + 0x11E8) * 2)) + 0xBB8;
        temp_s6 = *(&D_00454390 + (*(s8 *)((u8 *)temp_s5 + 0x11EC) * 2));
        temp_s7 = *temp_a2;
        *(s32 *)((u8 *)temp_a0_2 + 0x34) = temp_v1;
        *(s32 *)((u8 *)temp_a0_2 + 0x38) = temp_v1;
        *(s32 *)((u8 *)temp_a0_2 + 0x3C) = -1;
        *(s32 *)((u8 *)temp_a0_2 + 0x40) = 0x1B58;
        sp90 = 0;
loop_6:
        if (var_a3 < 7) {
            if (*(s16 *)((u8 *)((var_a3 * 2) + temp_s5) + 0x11F0) != -1) {
                sp90 += 1;
            }
            temp_a0_3 = *(s16 *)((u8 *)((var_a3 * 2) + temp_s5) + 0x11F0);
            temp_v1_2 = (var_a3 * 4) + sp;
            var_a3 += 1;
            *(s32 *)((u8 *)temp_v1_2 + 0x94) = (s32) temp_a0_3;
            goto loop_6;
        }
        func_0026E000(&sp90, 0x40, temp_a2, var_a3);
        *(s16 *)((u8 *)temp_s4 + 0x34) = 0;
        var_a3_2 = 0;
loop_12:
        if (var_a3_2 < 7) {
            if (*(s32 *)((u8 *)((var_a3_2 * 4) + sp) + 0x94) != -1) {
                *(s16 *)((u8 *)temp_s4 + 0x34) = (s16) (*(s16 *)((u8 *)temp_s4 + 0x34) + 1);
            }
            temp_v1_3 = *(s32 *)((u8 *)((var_a3_2 * 4) + sp) + 0x94);
            temp_v0_2 = (var_a3_2 * 2) + temp_s4;
            var_a3_2 += 1;
            *(s16 *)((u8 *)temp_v0_2 + 0x36) = (s16) temp_v1_3;
            goto loop_12;
        }
        *(s16 *)((u8 *)temp_s4 + 0x44) = temp_s1;
        *(s16 *)((u8 *)temp_s4 + 0x46) = temp_s0;
        *(s16 *)((u8 *)temp_s4 + 0x48) = temp_s6;
        *(s16 *)((u8 *)temp_s4 + 0x4A) = temp_s2;
        *(s16 *)((u8 *)temp_s4 + 0x4C) = temp_s7;
        var_v0 = *(s16 *)((u8 *)temp_s4 + 0x10);
        if (var_v0 < 0x16) {

        } else if (var_v0 < 0x1A) {
            var_v0 += 5;
        } else {
            var_v0 += 6;
        }
        *(s16 *)((u8 *)temp_s4 + 0x10) = var_v0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s4) */);
        if ((((s64) ((s64) *(s16 *)((u8 *)temp_s4 + 0x10) << 0x30) >> 0x30) == 7) && (*(s8 *)((u8 *)temp_s5 + 0x11E2) == 3)) {
            *(s16 *)((u8 *)temp_s4 + 0x14) = 4;
            *(s16 *)((u8 *)temp_s4 + 0x16) = 4;
        } else if (*(s16 *)((u8 *)temp_s4 + 0x10) == 0x28) {
            *(s16 *)((u8 *)temp_s4 + 0x16) = 1;
        }
        return 1;
    }
    var_a3_3 = 0;
    *(s16 *)((u8 *)(&D_005AB490) + 0x158) = (s16) *D_004E05DC;
    temp_t1 = &D_005AB490 + (((temp_v0 + 1) & 1) * 0x50);
    temp_s4_2 = temp_t1 + 0x10;
    temp_a1 = *(u8 **)((u8 *)((*D_004E05DC * 4) + temp_a0) + 0x14);
    *(s16 *)((u8 *)temp_t1 + 0x20) = (s16) *(s32 *)((u8 *)temp_a0 + 0x10);
    *(s16 *)((u8 *)temp_t1 + 0x22) = (s16) *(s32 *)((u8 *)temp_a1 + 0x20);
    *(s16 *)((u8 *)temp_t1 + 0x24) = (s16) *(s32 *)((u8 *)temp_a1 + 0x1C);
    *(s16 *)((u8 *)temp_t1 + 0x26) = (s16) *(s32 *)((u8 *)temp_a1 + 0x48);
    *(s16 *)((u8 *)temp_t1 + 0x2C) = (s16) *(s32 *)((u8 *)temp_a1 + 0x18);
    *(s16 *)((u8 *)temp_t1 + 0x2E) = (s16) *(s32 *)((u8 *)temp_a1 + 0x24);
    *(s16 *)((u8 *)temp_t1 + 0x44) = (s16) *(s32 *)((u8 *)temp_a1 + 0x28);
loop_27:
    if (var_a3_3 < 7) {
        temp_t1_2 = *(s32 *)((u8 *)((var_a3_3 * 4) + temp_a1) + 0x2C);
        temp_v1_4 = (var_a3_3 * 2) + temp_s4_2;
        var_a3_3 += 1;
        *(s16 *)((u8 *)temp_v1_4 + 0x36) = (s16) temp_t1_2;
        goto loop_27;
    }
    if (temp_v0 == 0) {
        *(s16 *)((u8 *)temp_s4_2 + 0x1A) = -1;
        temp_v1_5 = *(s32 *)((u8 *)temp_a1 + 0);
        if (temp_v1_5 >= 0x4000) {
            *(s32 *)((u8 *)temp_s4_2 + 0x24) = (s32) (temp_v1_5 >> 0xD);
            *(s32 *)((u8 *)temp_s4_2 + 0x28) = (s32) ((s32) *(s32 *)((u8 *)temp_a1 + 0) >> 0xD);
        } else {
            *(s32 *)((u8 *)temp_s4_2 + 0x24) = (s32) (temp_v1_5 + 0xBB8);
            *(s32 *)((u8 *)temp_s4_2 + 0x28) = (s32) (*(s32 *)((u8 *)temp_a1 + 0) + 0xBB8);
        }
        *(s32 *)((u8 *)temp_s4_2 + 0x2C) = -1;
        *(s32 *)((u8 *)temp_s4_2 + 0x30) = 0x1B58;
        *(u16 *)((u8 *)temp_s4_2 + 0x44) = (u16) *(s32 *)((u8 *)temp_a1 + 8);
        *(u16 *)((u8 *)temp_s4_2 + 0x46) = (u16) *(s32 *)((u8 *)temp_a1 + 0xC);
        *(u16 *)((u8 *)temp_s4_2 + 0x48) = (u16) *(s32 *)((u8 *)temp_a1 + 0x10);
        *(u16 *)((u8 *)temp_s4_2 + 0x4A) = (u16) *(s32 *)((u8 *)temp_a1 + 4);
        *(u16 *)((u8 *)temp_s4_2 + 0x4C) = (u16) *(s32 *)((u8 *)temp_a1 + 0x14);
    } else {
        *(s16 *)((u8 *)temp_s4_2 + 0x1A) = (s16) *(s8 *)((u8 *)D_004B4B40 + 0x23);
        temp_v1_6 = *(&D_004542D0 + (*(s8 *)((u8 *)temp_s5 + 0x11E8) * 2)) + 0xBB8;
        *(s32 *)((u8 *)temp_s4_2 + 0x24) = temp_v1_6;
        *(s32 *)((u8 *)temp_s4_2 + 0x28) = temp_v1_6;
        *(s32 *)((u8 *)temp_s4_2 + 0x2C) = -1;
        *(s32 *)((u8 *)temp_s4_2 + 0x30) = 0x1B58;
        *(u16 *)((u8 *)temp_s4_2 + 0x44) = (u16) *(&D_00454330 + (*(s8 *)((u8 *)temp_s5 + 0x11EA) * 2));
        *(u16 *)((u8 *)temp_s4_2 + 0x46) = (u16) *(&D_00454360 + (*(s8 *)((u8 *)temp_s5 + 0x11EB) * 2));
        *(u16 *)((u8 *)temp_s4_2 + 0x48) = (u16) *(&D_00454390 + (*(s8 *)((u8 *)temp_s5 + 0x11EC) * 2));
        *(u16 *)((u8 *)temp_s4_2 + 0x4A) = (u16) *(&D_00454300 + (*(s8 *)((u8 *)temp_s5 + 0x11E9) * 2));
        *(u16 *)((u8 *)temp_s4_2 + 0x4C) = (u16) *(&D_004543C0 + (*(s8 *)((u8 *)temp_s5 + 0x11ED) * 2));
    }
    *(f32 *)((u8 *)(&D_005AB490) + 0) = (f32) *(s32 *)((u8 *)temp_a1 + 0x58);
    *(f32 *)((u8 *)(&D_005AB490) + 4) = (f32) *(s32 *)((u8 *)temp_a1 + 0x5C);
    *(f32 *)((u8 *)(&D_005AB490) + 8) = (f32) *(s32 *)((u8 *)temp_a1 + 0x60);
    *(s32 *)((u8 *)(&D_005AB490) + 0xC) = 0x3F800000;
    *(f32 *)((u8 *)temp_t1 + 0x10) = (f32) *(s32 *)((u8 *)temp_a1 + 0x64);
    *(f32 *)((u8 *)temp_s4_2 + 4) = (f32) *(s32 *)((u8 *)temp_a1 + 0x68);
    *(f32 *)((u8 *)temp_s4_2 + 8) = (f32) *(s32 *)((u8 *)temp_a1 + 0x6C);
    *(s32 *)((u8 *)temp_s4_2 + 0xC) = 0x3F800000;
    *(s16 *)((u8 *)(&D_005AB490) + 0x152) = 0;
    *(s16 *)((u8 *)(&D_005AB490) + 0x154) = (s16) *(s32 *)((u8 *)temp_a1 + 0x70);
    *(s16 *)((u8 *)(&D_005AB490) + 0x156) = (s16) *(s32 *)((u8 *)temp_a1 + 0x74);
    *(s16 *)((u8 *)(&D_005AB490) + 0x15A) = (s16) *(s32 *)((u8 *)temp_a1 + 0x78);
    var_v0_2 = *(s32 *)((u8 *)temp_a1 + 0x7C);
    if (var_v0_2 <= 0) {
        var_v0_2 = -2;
    }
    *(s32 *)((u8 *)(&D_005AB490) + 0x15C) = var_v0_2;
    *(s16 *)((u8 *)(&D_005AB490) + 0x168) = (s16) *(s32 *)((u8 *)temp_a1 + 0x80);
    *(s16 *)((u8 *)(&D_005AB490) + 0x16A) = (s16) *(s32 *)((u8 *)temp_a1 + 0x88);
    *(s16 *)((u8 *)(&D_005AB490) + 0x16C) = (s16) *(s32 *)((u8 *)temp_a1 + 0x8C);
    *(s16 *)((u8 *)(&D_005AB490) + 0x16E) = (s16) *(s32 *)((u8 *)temp_a1 + 0x90);
    *(s16 *)((u8 *)(&D_005AB490) + 0x170) = (s16) *(s32 *)((u8 *)temp_a1 + 0x94);
    temp_v0_3 = *(s32 *)((u8 *)temp_a1 + 0x50);
    if (temp_v0_3 > 0) {
        *(s32 *)((u8 *)D_005116E0 + 0) = temp_v0_3;
        *(s32 *)((u8 *)D_005116E0 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 0x54);
        *(s32 *)((u8 *)D_005116E0 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 0x84);
        *(s32 *)((u8 *)D_005116E0 + 0xC) = (s32) *(&D_0046B5B0 + (*(s32 *)((u8 *)temp_a0 + 0x10) * 2));
    }
    return 1;
}
