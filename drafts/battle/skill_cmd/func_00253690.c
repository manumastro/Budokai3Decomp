/* Draft (not built): func_00253690 at 0x00253690, size 0x150, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 38 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x150
 * Original: asm/nonmatchings/battle/skill_cmd/func_00253690.s */

// src/battle/skill_cmd.c func_00253690 size diff=38/80
s32 func_00253690(u8 *arg0, s32 arg1, u8 *arg2) {
    s16 *var_t0;
    s16 *var_t0_2;
    s16 *var_t0_3;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t1_3;
    s8 temp_v1;
    s8 temp_v1_2;
    s8 temp_v1_3;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_t2;
    u8 *temp_v0;

    if (arg1 > 0) {
        temp_a3 = *(u8 **)((u8 *)arg0 + 8);
        temp_t2 = *(u8 **)((u8 *)temp_a3 + 0);
        temp_v1 = *(s8 *)((u8 *)temp_t2 + 0xD);
        var_t1 = 0;
        if (temp_v1 > 0) {
            var_t0 = *(s16 **)((u8 *)temp_t2 + 8);
loop_3:
            if (arg1 == *var_t0) {
                *(s32 *)((u8 *)arg2 + 0) = (s32) *(s32 *)((u8 *)temp_a3 + 4);
                *(s32 *)((u8 *)arg2 + 4) = (s32) *(s32 *)((u8 *)arg0 + 0);
                *(s16 *)((u8 *)arg2 + 8) = (s16) (var_t1 * 2);
                *(s16 *)((u8 *)arg2 + 0xA) = 0;
                return 1;
            }
            var_t1 += 1;
            var_t0 += 2;
            if (var_t1 >= temp_v1) {
                goto block_6;
            }
            goto loop_3;
        }
block_6:
        temp_v1_2 = *(s8 *)((u8 *)temp_t2 + 0xC);
        var_t1_2 = 0;
        if (temp_v1_2 > 0) {
            var_t0_2 = *(s16 **)((u8 *)temp_t2 + 4);
loop_8:
            if (arg1 == *var_t0_2) {
                *(s32 *)((u8 *)arg2 + 0) = (s32) *(s32 *)((u8 *)temp_a3 + 4);
                *(s32 *)((u8 *)arg2 + 4) = (s32) *(s32 *)((u8 *)arg0 + 0);
                *(s16 *)((u8 *)arg2 + 8) = (s16) ((*(s8 *)((u8 *)temp_t2 + 0xD) + var_t1_2) * 2);
                *(s16 *)((u8 *)arg2 + 0xA) = 0;
                return 1;
            }
            var_t1_2 += 1;
            var_t0_2 += 2;
            if (var_t1_2 >= temp_v1_2) {
                goto block_11;
            }
            goto loop_8;
        }
        goto block_11;
    }
block_11:
    temp_a3_2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_v0 = *(u8 **)((u8 *)temp_a3_2 + 0);
    temp_v1_3 = *(s8 *)((u8 *)temp_v0 + 0xC);
    var_t1_3 = 0;
    if (temp_v1_3 > 0) {
        var_t0_3 = *(s16 **)((u8 *)temp_v0 + 4);
loop_13:
        if (arg1 == *var_t0_3) {
            *(s32 *)((u8 *)arg2 + 0) = (s32) *(s32 *)((u8 *)temp_a3_2 + 4);
            *(s32 *)((u8 *)arg2 + 4) = (s32) *(s32 *)((u8 *)arg0 + 4);
            *(s16 *)((u8 *)arg2 + 8) = (s16) (var_t1_3 + 2);
            *(s16 *)((u8 *)arg2 + 0xA) = 1;
            return 1;
        }
        var_t1_3 += 1;
        var_t0_3 += 2;
        if (var_t1_3 >= temp_v1_3) {
            goto block_16;
        }
        goto loop_13;
    }
block_16:
    *(s32 *)((u8 *)arg2 + 0) = (s32) *(s32 *)((u8 *)temp_a3_2 + 4);
    *(s32 *)((u8 *)arg2 + 4) = (s32) *(s32 *)((u8 *)arg0 + 4);
    *(s16 *)((u8 *)arg2 + 8) = 0;
    *(s16 *)((u8 *)arg2 + 0xA) = 1;
    return 0;
}
