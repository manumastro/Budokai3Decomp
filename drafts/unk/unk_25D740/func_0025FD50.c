/* Draft (not built): func_0025FD50 at 0x0025FD50, size 0x1B0, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 70 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25D740/func_0025FD50.s */

// src/unk/unk_25D740.c func_0025FD50 diff diff=70/108
s32 func_0025FD50(s32 unused_arg0, u8 *arg1) {
    ScrEntry *temp_s0_2;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a1;
    s64 temp_v1;
    u8 *temp_a0;
    u8 *temp_s3;

    temp_a0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_s2 = *(s32 *)((u8 *)temp_a0 + 8);
    temp_s1 = *(s32 *)((u8 *)temp_a0 + 4);
    temp_s0 = *(s32 *)((u8 *)temp_a0 + 0);
    temp_s3 = gBattle->f8934[*(s32 *)((u8 *)temp_a0 + 0xC)];
    temp_s0_2 = func_0020F6D0(*(s32 *)((u8 *)temp_a0 + 0x10));
    *(s32 *)((u8 *)temp_s0_2 + 0x98) = func_0020B020(*(s32 *)((u8 *)temp_s3 + 0x1350), temp_s1, temp_s0);
    temp_a0_2 = *(s32 *)((u8 *)temp_s0_2 + 0x98);
    if (temp_a0_2 != 0) {
        temp_v1 = (s64) ((s64) temp_s2 << 0x30) >> 0x30;
        temp_a1 = *(s32 *)((u8 *)temp_s3 + 0x1350);
        if (temp_v1 != 0x800) {
            if (temp_v1 != 0x400) {
                if (temp_v1 != 0x10) {
                    if (temp_v1 != 8) {
                        if (temp_v1 != 4) {
                            if (temp_v1 != 2) {
                                if (temp_v1 != 1) {
                                    var_a1 = 0;
                                } else if (temp_a1 != 0) {
                                    var_a1 = 0x04000020;
                                } else {
                                    var_a1 = 0x04000010;
                                }
                            } else if (temp_a1 != 0) {
                                var_a1 = 0x04000008;
                            } else {
                                var_a1 = 0x04000004;
                            }
                        } else if (temp_a1 != 0) {
                            var_a1 = 0x400020;
                        } else {
                            var_a1 = 0x400010;
                        }
                    } else {
                        var_a1 = 0x400008;
                    }
                } else {
                    var_a1 = 0x04000002;
                }
            } else {
                var_a1 = 0x04000040;
            }
        } else if (temp_a1 != 0) {
            var_a1 = 0x04000100;
        } else {
            var_a1 = 0x04000080;
        }
        *(s32 *)((u8 *)temp_s0_2 + 0x20E8) = func_00209540(temp_a0_2, var_a1, 0);
    }
    return 1;
}
