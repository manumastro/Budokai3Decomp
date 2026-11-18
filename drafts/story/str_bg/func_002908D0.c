/* Draft (not built): func_002908D0 at 0x002908D0, size 0x19C, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 51 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x19C
 * Original: asm/nonmatchings/story/str_bg/func_002908D0.s */

// src/story/str_bg.c func_002908D0 size diff=51/101
s32 func_002908D0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_t0;
    u8 *var_s3;

    var_s2 = arg0;
    var_s1 = arg1;
    if (*(s32 *)((u8 *)D_004708A4 + 0x1AB0) == 0) {
        return -1;
    }
    var_s3 = (u8 *)(D_004708A4 + 0x430);
    var_s0 = 0;
loop_4:
    temp_a0 = *(s32 *)((u8 *)var_s3 + 0x40);
    if (temp_a0 != 0) {
        if (func_00127940(temp_a0, var_s2) == 0) {

        } else {
            goto block_8;
        }
    } else {
block_8:
        var_s0 += 1;
        var_s3 += 0x50;
        if (var_s0 >= 0x48) {
            var_s0 = -1;
        } else {
            goto loop_4;
        }
    }
    if (var_s0 >= 0x40) {
        var_s0 -= 0x40;
    } else {
        var_s0 = -1;
    }
    if (var_s0 == -1) {
        return -1;
    }
    var_s1 |= 0x10000;
    temp_t0 = *(u8 **)((u8 *)((var_s0 * 4) + D_004708A4) + 0x334);
    temp_a2 = (u8 *)(D_004708A4 + ((var_s0 + 5) * 0x10));
    *(s32 *)((u8 *)temp_a2 + 0x354) = var_s1;
    *(f32 *)((u8 *)temp_a2 + 0x358) = (f32) *(s32 *)((u8 *)(((var_s1 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((var_s1 >> 0x10) - 1) * 4) + temp_t0) + 0x46C)) + 0x14)) + 8);
    *(s32 *)((u8 *)temp_a2 + 0x35C) = 0;
    temp_a3 = temp_t0 + 0x41C;
    if (*(s32 *)((u8 *)temp_t0 + 0x41C) != var_s1) {
        var_a1 = 0;
        if (*(s32 *)((u8 *)temp_t0 + 0x418) > 0) {
            var_a0 = 0;
            do {
                var_a1 += 1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a0) + 0x30) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a0) + 0x34) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a0) + 0x38) = -1;
                var_a0 += 0x40;
            } while (var_a1 < *(s32 *)((u8 *)temp_t0 + 0x418));
        }
        *(s32 *)((u8 *)temp_a3 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)temp_t0 + 0x41C) = var_s1;
    return var_s0;
}
