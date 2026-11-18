/* Draft (not built): func_002529B0 at 0x002529B0, size 0x150, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); gal operands 'unsigned char *' + 'void *' @ 1279: } while (var_s2 < *(s32 *)((u8 *)(((u8 *)temp_s0) + D_0046FE54) + 8));
 * Original: asm/nonmatchings/battle/skill_cmd/func_002529B0.s */

// src/battle/skill_cmd.c func_002529B0 cerr diff=-1/0
s32 func_002529B0(s32 arg0, u8 *arg1, s32 arg2) {
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a1_2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_a1 = *(s32 *)((u8 *)arg1 + 0x1350);
    temp_v1 = D_0046FE4C + (temp_a1 * 0x480);
    if (*(s32 *)((u8 *)temp_v1 + 0x24) == -1) {
        *(s32 *)((u8 *)(temp_v1 + 0x10) + 0x14) = (s32) *(s32 *)((u8 *)arg1 + 0xB70);
    }
    temp_v1_2 = D_0046FE54;
    temp_s0 = temp_a1 * 4;
    var_s2 = 0;
    if (*(s32 *)((u8 *)(temp_s0 + temp_v1_2) + 8) > 0) {
        var_s1 = 0;
        do {
            temp_a1_2 = (u8 *)(*(temp_s0 + temp_v1_2) + var_s1);
            temp_v0 = *(s16 *)((u8 *)temp_a1_2 + 0x16);
            if (temp_v0 != 0) {
                if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) != *(s32 *)((u8 *)arg1 + 0xBA4)) {

                } else {
                    goto block_11;
                }
            } else {
                temp_v1_3 = *(s32 *)((u8 *)arg1 + 0xBA4);
                if ((temp_v1_3 >= *(s16 *)((u8 *)temp_a1_2 + 0xDC)) && (*(s16 *)((u8 *)temp_a1_2 + 0xDE) >= temp_v1_3)) {
block_11:
                    if ((arg0 == *(s16 *)((u8 *)temp_a1_2 + 0x12)) && (*(s16 *)((u8 *)temp_a1_2 + 0x10) != 0xB)) {
                        func_002525A0(arg1, temp_a1_2, arg2);
                    }
                }
            }
            var_s2 += 1;
            var_s1 += 0xF0;
        } while (var_s2 < *(s32 *)((u8 *)(((u8 *)temp_s0) + D_0046FE54) + 8));
    }
    return 0;
}
