/* Draft (not built): func_00251F30 at 0x00251F30, size 0x478, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x460, original 0x478
 * Original: asm/nonmatchings/battle/skill_cmd/func_00251F30.s */

// src/battle/skill_cmd.c func_00251F30 size diff=82/280
s32 func_001E2630(void *);
s32 func_00248910(s32, void *);
s32 func_00251F30(u8 *arg0, u32 arg1, s32 arg2) {
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_s2_2;
    s32 temp_v1;
    s32 var_s0;
    s64 var_v1;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s1 = *(u8 **)((u8 *)temp_s2 + 0x1354);
    var_s0 = 1;
    switch (arg1) {                                 /* switch 1 */
    case 0:                                         /* switch 1 */
        var_s0 = 2;
        if (*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x80) {
            *(s32 *)((u8 *)arg0 + 0) = 0x42000000;
            *(s16 *)((u8 *)D_0046FE54 + 0x60) = (s16) (*(s16 *)((u8 *)D_0046FE54 + 0x60) & ~0x80);
            *(s16 *)((u8 *)D_0046FE54 + 0x60) = (s16) (*(s16 *)((u8 *)D_0046FE54 + 0x60) | 0x20);
            *(s16 *)((u8 *)D_0046FE54 + 0x64) = (s16) *(s32 *)((u8 *)temp_s2 + 0x1350);
            func_002518B0(D_0046FE54);
            temp_a0 = *(u8 **)((u8 *)D_0046FE54 + 0x5C);
            if (temp_a0 != NULL) {
                Obj_ResetF38((s32)(temp_a0));
                *(u8 **)((u8 *)D_0046FE54 + 0x5C) = NULL;
            }
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) == 3) {
            temp_v1 = *(s32 *)((u8 *)temp_s2 + 0xB9C);
            if (temp_v1 == 0xA) {
                func_001D9C40((s32)(temp_s2), (s32)(*(s32 *)((u8 *)temp_s2 + 0x1350) + 2), 0x2E);
            } else if (temp_v1 == 0x1E) {
                func_001D9C40((s32)(temp_s2), (s32)(*(s32 *)((u8 *)temp_s2 + 0x1350) + 2), 0x30);
            }
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) == 0xC) {
            func_001D9C40((s32)(temp_s2), 1, 0x3B);
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) == 8) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_00251DA0(arg0);
        } else {
            func_00251DA0(arg0);
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) != 0xC) {
            func_00251C20(arg0);
        }
        if ((*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) == 2) && (*(s32 *)((u8 *)temp_s2 + 0xB9C) == 0x2A)) {
            func_001E2630(temp_s2);
        }
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x800);
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) == 5) {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x2000);
        }
        break;
    case 1:                                         /* switch 1 */
        temp_v1_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10);
        if (temp_v1_2 == 2) {
            if (temp_v1_2 != 0xD) {
                goto block_27;
            }
        } else {
block_27:
            func_00251DA0(arg0);
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) != 0xD) {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x2000);
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x1800);
        }
        break;
    case 2:                                         /* switch 1 */
        if (arg2 > 0) {
            var_v1 = (s64) (arg2 >> 1) << 0x30;
            if (arg2 < 0) {
                var_v1 = (s64) ((s32) (arg2 + 1) >> 1) << 0x30;
            }
            *(s16 *)((u8 *)arg0 + 6) = (s16) (*(s16 *)((u8 *)arg0 + 6) - (var_v1 >> 0x30));
        }
        var_s0 = 0;
        break;
    case 3:                                         /* switch 1 */
        temp_v1_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10);
        if (temp_v1_3 == 2) {
            if (temp_v1_3 != 0xD) {
                goto block_39;
            }
        } else {
block_39:
            func_00251DA0(arg0);
        }
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0x10) != 0xD) {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x2000);
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x1800);
        }
        break;
    case 4:                                         /* switch 1 */
        temp_a1 = *(u8 **)((u8 *)arg0 + 0xC);
        temp_v1_4 = *(s16 *)((u8 *)temp_a1 + 0x10);
        switch (temp_v1_4) {                        /* switch 2; irregular */
        case 7:                                     /* switch 2 */
        case 13:                                    /* switch 2 */
        case 2:                                     /* switch 2 */
            break;
        case 5:                                     /* switch 2 */
            func_00251A60(temp_a1);
            if (*(s32 *)((u8 *)temp_s2 + 0xB9C) == 0x2A) {
                func_001D9C40((s32)(temp_s2), (s32)(*(s32 *)((u8 *)temp_s2 + 0x1350) + 2), 0x2C);
            }
            break;
        case 12:                                    /* switch 2 */
            *(f32 *)((u8 *)arg0 + 0x24) = (f32) (*(f32 *)((u8 *)arg0 + 0x24) + 4.5f);
            func_00251A60(temp_a1);
            break;
        case 8:                                     /* switch 2 */
            *(f32 *)((u8 *)arg0 + 0x24) = (f32) (*(f32 *)((u8 *)arg0 + 0x24) + (1.5f * *(f32 *)((u8 *)temp_a1 + 0xCC)));
            func_00251A60(temp_a1);
            break;
        default:                                    /* switch 2 */
            func_00251A60(temp_a1);
            break;
        }
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x2000);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x1800);
        break;
    case 5:                                         /* switch 1 */
        func_002518B0();
        var_s0 = 0;
        break;
    case 6:                                         /* switch 1 */
        temp_s2_2 = *(s32 *)((u8 *)temp_s1 + 0x1350);
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x20) {
            func_00248910(0xF, temp_s1);
            func_001D9C40((s32)(temp_s1), (s32)(temp_s2_2 + 2), 0x34);
        }
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x2000);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x1800);
        break;
    }
    return var_s0;
}
