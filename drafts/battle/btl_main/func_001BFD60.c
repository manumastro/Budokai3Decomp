/* Draft (not built): func_001BFD60 at 0x001BFD60, size 0x3CC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'float' mwccps2.exe Compiler: @ 4523: func_00146ED0(&sp50, temp_a2 + 0xD0, temp_a2, *(f32 *)((u8 *)temp_a2 + 0x1828));
 * Original: asm/nonmatchings/battle/btl_main/func_001BFD60.s */

// src/battle/btl_main.c func_001BFD60 cerr diff=-1/0
s64 func_001E8C90(void *);
s32 func_001BFD60(u8 *arg0) {
    u8 *sp30;
    u8 *sp34;
    f32 sp50;
    s16 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s64 temp_a1;
    s8 var_a1;
    s8 var_s0;
    u8 *temp_a2;

    if (*(s32 *)((u8 *)gBattle + 0x88F8) != 4) {
        return 0;
    }
    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x201A) >= 3) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2018) == 0) {
        var_v0 = 3;
        if (*(s32 *)((u8 *)arg0 + 0xB70) != 0xEA) {

        } else {
            var_v0 = 0xA;
        }
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= (f32) var_v0) && (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0)) {
            var_a1 = 1;
            if (*(s32 *)((u8 *)arg0 + 0x13B4) == 1) {
                temp_v1 = *(arg0 + 0x14C4 + (*(s32 *)((u8 *)arg0 + 0x13C0) * 4));
                switch (temp_v1) {                  /* irregular */
                case -1:
                    var_a1 = 2;
                    break;
                case 1:
                    var_a1 = 3;
                    break;
                }
            } else {
                var_a1 = 0;
            }
            *(s8 *)((u8 *)arg0 + 0x2018) = var_a1;
        }
    }
    if (*(s8 *)((u8 *)arg0 + 0x2017) == 0) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x2013) != 0) {
        return 0;
    }
    if (*(s8 *)((u8 *)arg0 + 0x200F) != 0) {
        return 0;
    }
    if (func_001DFE60(arg0, 0xA, 0x447A0000) == 0) {
        return 0;
    }
    var_s0 = *(s8 *)((u8 *)arg0 + 0x2018);
    if (*(s16 *)((u8 *)arg0 + 0x13A4) < 0) {
        var_s0 = func_001E8C90(arg0);
    }
    if (var_s0 == 0) {
        return 0;
    }
    temp_a2 = *(u8 **)((u8 *)arg0 + 0x1354);
    if ((*(s16 *)((u8 *)temp_a2 + 0xCAC) == 0x14) && ((8.0f + *(f32 *)((u8 *)temp_a2 + 0x1830)) < *(f32 *)((u8 *)temp_a2 + 0x182C))) {
        func_00146ED0(&sp50, temp_a2 + 0xD0, temp_a2, *(f32 *)((u8 *)temp_a2 + 0x1828));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        if (((s64) ((s64) *(s8 *)((u8 *)arg0 + 0x2010) << 0x38) >> 0x38) != 0) {
            if (gBattle != NULL) {
                var_v0_2 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x100;
            } else {
                var_v0_2 = 0;
            }
            if (var_v0_2 != 0) {
                return 0;
            }
            sp30 = arg0;
            sp34 = *(u8 **)((u8 *)arg0 + 0x1354);
            func_00237000(5, &sp30);
            goto block_65;
        }
        if (gBattle != NULL) {
            var_v0_3 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x40;
        } else {
            var_v0_3 = 0;
        }
        if (var_v0_3 != 0) {
            return 0;
        }
        temp_v1_2 = *(s32 *)((u8 *)arg0 + 0xB9C);
        if ((temp_v1_2 == 0xE) || (temp_v1_2 == 0xF) || (temp_v1_2 == 0x11) || (temp_v1_2 == 0x55) || (temp_v1_2 == 0x57) || (temp_v1_2 == 0x4D)) {
            return 0;
        }
        if (sp54 < (15.0f + func_00200270(0, sp50, sp58))) {
            return 0;
        }
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_a1 = (s64) ((s64) var_s0 << 0x30) >> 0x30;
        *(s16 *)((u8 *)arg0 + 0xCB4) = (s16) temp_a1;
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468500(arg0, temp_a1);
        func_002CBFF0(1, arg0);
        func_001DFE60((struct Fighter *)(arg0), 0, 0x447A0000);
        goto block_65;
    }
block_65:
    return 1;
}
