/* Draft (not built): func_001C24C0 at 0x001C24C0, size 0x1D8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x228, original 0x1D8
 * Original: asm/nonmatchings/battle/btl_main/func_001C24C0.s */

// src/battle/btl_main.c func_001C24C0 size diff=82/138
s32 func_001C24C0(u8 *arg0) {
    s16 temp_a1_2;
    s16 temp_v0;
    s16 var_a1;
    s16 var_a1_2;
    s16 var_a2;
    s16 var_a3;
    s16 var_v1;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t0_2;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a3;
    u8 *temp_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x41C);
    temp_a2 = arg0 + 0x164 + (*(s32 *)((u8 *)arg0 + 0x60) * 4);
    temp_v0 = *(s16 *)((u8 *)temp_a2 + 0);
    temp_v1 = arg0 + 0x64;
    if (temp_a1 != 0) {
        if (temp_v0 != temp_a1) {
            *(s32 *)((u8 *)arg0 + 0x41C) = 0;
            return 0;
        }
        goto block_45;
    }
    temp_t0 = *(s32 *)((u8 *)arg0 + 0x58);
    temp_a3 = temp_v1 + (temp_t0 * 4);
    temp_a1_2 = *(s16 *)((u8 *)temp_a3 + 0);
    if (temp_a1_2 != 0) {
        if (((s64) ((s64) temp_a1_2 << 0x30) >> 0x30) != -1) {
            return 0;
        }
        var_a3 = *(s16 *)((u8 *)temp_a3 + 2);
        if (var_a3 < 0xE) {
            return 0;
        }
        if (var_a3 < 0) {
            var_a3 = -var_a3;
        }
        goto block_21;
    }
    if (temp_v0 == 0) {
        return 0;
    }
    var_a3 = *(s16 *)((u8 *)temp_a2 + 2);
    if (var_a3 < 0xE) {
        return 0;
    }
    if (var_a3 < 0) {
        var_a3 = -var_a3;
    }
block_21:
    temp_t0_2 = (temp_t0 - 1) & 0x1F;
    temp_a2_2 = temp_v1 + (temp_t0_2 * 4);
    if (*(s16 *)((u8 *)temp_a2_2 + 0) != 0) {
        return 0;
    }
    var_a2 = *(s16 *)((u8 *)temp_a2_2 + 2);
    var_a1 = var_a2;
    if (var_a2 < 0) {
        var_a1 = -var_a2;
    }
    if (var_a1 >= 9) {
        return 0;
    }
    if (var_a2 < 0) {
        var_a2 = -var_a2;
    }
    temp_a2_3 = temp_v1 + (((temp_t0_2 - 1) & 0x1F) * 4);
    if (*(s16 *)((u8 *)temp_a2_3 + 0) != -1) {
        return 0;
    }
    var_a1_2 = *(s16 *)((u8 *)temp_a2_3 + 2);
    var_v1 = var_a1_2;
    if (var_a1_2 < 0) {
        var_v1 = -var_a1_2;
    }
    if (var_v1 >= 9) {
        return 0;
    }
    if (var_a1_2 < 0) {
        var_a1_2 = -var_a1_2;
    }
    if (*(s32 *)((u8 *)arg0 + 0x410) < (var_a3 + var_a2 + var_a1_2)) {
        return 0;
    }
    *(s32 *)((u8 *)arg0 + 0x41C) = (s32) temp_v0;
block_45:
    return 1;
}
