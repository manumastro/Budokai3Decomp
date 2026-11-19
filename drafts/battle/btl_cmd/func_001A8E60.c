/* Draft (not built): func_001A8E60 at 0x001A8E60, size 0x280, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x280
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A8E60.s */

// src/battle/btl_cmd.c func_001A8E60 size diff=48/156
s32 func_001A8E60(s32 arg0, void *arg1) {
    Fighter *var_s2;
    s16 var_s4;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u8 *var_s3;

    var_s3 = (unsigned char *)(arg0);
    var_s2 = arg1;
    var_s1 = *(s32 *)((u8 *)arg0 + 8);
    var_s0 = 1;
    if (var_s1 & 0x10) {
        var_s4 = *(s16 *)((u8 *)var_s3 + 0x14);
        if (var_s4 != func_001DDD40(var_s2)) {
            return 0;
        }
    }
    if ((var_s1 & 0x40) && (func_001E1CE0(var_s2) == 0)) {
        return 0;
    }
    if ((var_s1 & 0x80) && (func_001E1B40(var_s2) == 0)) {
        return 0;
    }
    if ((var_s1 & 0x100) && (func_001E19B0(var_s2) == 0)) {
        return 0;
    }
    if ((var_s1 & 0x70000000) && (*(s8 *)((u8 *)var_s2 + 0x2015) != 0)) {
        return 0;
    }
    if (var_s1 & 8) {
        if (gBattle != NULL) {
            var_v0 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x200;
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            return 0;
        }
        goto block_26;
    }
block_26:
    if ((var_s1 & 0x800) && !(*(s32 *)((u8 *)((*(s32 *)((u8 *)var_s2 + 0x175C) * 0x10) + var_s2->unk1360) + 0x1F8) & 4)) {
        return 0;
    }
    if ((var_s1 & 0x1000) && !(*(s16 *)((u8 *)var_s3 + 0x14) & ((1 << func_001DDD30(var_s2)) & 0xFF))) {
        return 0;
    }
    temp_v1 = var_s1 & 0x407;
    switch (temp_v1) {                              /* irregular */
    case 0x1:
        var_s0 = func_001DFE60(var_s2, 2, (f32) *(s16 *)((u8 *)var_s3 + 0x12));
        break;
    case 0x2:
        var_s0 = func_001DF420(var_s2, *(s16 *)((u8 *)var_s3 + 0x10), 2);
        break;
    case 0x4:
        var_s0 = func_001E1E80(var_s2);
        break;
    case 0x400:
        if (gBattle != NULL) {
            var_v0_2 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 0x80;
        } else {
            var_v0_2 = 0;
        }
        var_s0 = 0;
        if (var_v0_2 != 0) {

        } else {
            var_s0 = *(s8 *)((u8 *)var_s2 + 0x2010) == 0;
        }
        break;
    }
    return var_s0;
}
