/* Draft (not built): func_002408C0 at 0x002408C0, size 0x1CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); al operand mwccps2.exe Compiler: 711: *(u8 **)((u8 *)var_s5 + 0xEC0) = SkillFile_Load(0); @ 689: if (D_0044FC20 != -1) {
 * Original: asm/nonmatchings/unk/unk_23A890/func_002408C0.s */

// src/unk/unk_23A890.c func_002408C0 cerr diff=-1/0
s32 func_002408C0(void) {
    s32 *var_a1;
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *var_s5;

    var_s5 = gBtlSys;
    var_s6 = 0;
    memset(&D_0058BF70, 0, 0x640);
    var_s4 = 0;
    if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
        var_s0 = (s32 *)(&D_0058BF50);
        do {
            var_s2 = -1;
            var_s3 = 0;
            var_s1 = -1;
            temp_v0 = func_0021C3E0(var_s4);
            if (D_0044FC20 != -1) {
                var_a1 = (s32 *)(&D_0044FC20);
loop_4:
                if (*(s16 *)((u8 *)temp_v0 + 0x10) == *var_a1) {
                    temp_v1 = &D_0044FC20 + (var_s3 * 0x10);
                    temp_a0 = *(s32 *)((u8 *)temp_v1 + 8);
                    if (temp_a0 != -1) {
                        var_s2 = (*(s32 *)((u8 *)temp_v1 + 4) << 0x10) | temp_a0;
                    }
                    temp_v1_2 = *(s32 *)((u8 *)temp_v1 + 0xC);
                    if (temp_v1_2 != -1) {
                        var_s1 = temp_v1_2;
                    }
                } else {
                    var_a1 += 0x10;
                    var_s3 += 1;
                    if (*var_a1 != -1) {
                        goto loop_4;
                    }
                }
            }
            if (var_s1 == -1) {
                *(u8 **)((u8 *)var_s5 + 0xEC0) = SkillFile_Load(0);
            } else {
                *(u8 **)((u8 *)var_s5 + 0xEC0) = SkillFile_Load((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(var_s1)))))));
            }
            temp_v0_2 = *(u8 **)((u8 *)var_s5 + 0xEC0);
            if (temp_v0_2 != NULL) {
                var_s6 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 8)) + 0x10);
            }
            if (var_s2 != -1) {
                *var_s0 = amCdFs_ReadFileId(var_s2, 0, 1);
            }
            temp_v0_3 = *var_s0;
            if (temp_v0_3 != 0) {
                var_s6 = temp_v0_3;
            }
            var_s4 += 1;
            var_s5 += 4;
            var_s0 += 4;
        } while (var_s4 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
    return var_s6;
}
