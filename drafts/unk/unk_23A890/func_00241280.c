/* Draft (not built): func_00241280 at 0x00241280, size 0x278, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 140 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00241280.s */

// src/unk/unk_23A890.c func_00241280 diff diff=140/158
extern void func_00209A90(void *, void *);
void func_00241280(B7Q *arg0) {
    s16 temp_a0_3;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_a1;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a2;

    temp_s3 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_v0 = func_00215320((s32) ((s64) ((s64) temp_s3 << 0x30) >> 0x30), (s32) *(s16 *)((u8 *)arg0 + 0x1C));
    if (temp_v0 != NULL) {
        temp_s1 = temp_v0 + 0x20;
        *(void (**)())((u8 *)temp_v0 + 8) = func_00212480;
        *(void (**)())((u8 *)temp_v0 + 0xC) = func_00212650;
        memset(temp_s1, 0, 0x50);
        temp_v1 = *(s16 *)((u8 *)arg0 + 0x1C);
        temp_s0 = temp_s3 * 0x1A4;
        temp_a2 = D_0046FE48 + temp_s0;
        if (temp_v1 != 0x800) {
            if (temp_v1 != 0x400) {
                if (temp_v1 != 0x10) {
                    if (temp_v1 != 8) {
                        if (temp_v1 != 4) {
                            if (temp_v1 != 2) {
                                if (temp_v1 != 1) {
                                    var_a1 = 0;
                                } else if (temp_s3 != 0) {
                                    var_a1 = 0x04000020;
                                } else {
                                    var_a1 = 0x04000010;
                                }
                            } else if (temp_s3 != 0) {
                                var_a1 = 0x04000008;
                            } else {
                                var_a1 = 0x04000004;
                            }
                        } else if (temp_s3 != 0) {
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
        } else if (temp_s3 != 0) {
            var_a1 = 0x04000100;
        } else {
            var_a1 = 0x04000080;
        }
        *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(*(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a2 + 0xC) + *(s16 *)((u8 *)arg0 + 0x22)) * 4) + temp_a2) + 0x14), var_a1, 0);
        temp_a0 = *(s32 *)((u8 *)temp_v0 + 0x10);
        if (temp_a0 != 0) {
            func_00209A90((u8 *) temp_a0, arg0);
            temp_a0_2 = D_0046FE48 + temp_s0;
            *(s32 *)((u8 *)temp_s1 + 0x20) = (s32) *(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a0_2 + 0xC) + *(s16 *)((u8 *)arg0 + 0x20)) * 4) + temp_a0_2) + 0x14);
            *(s32 *)((u8 *)temp_s1 + 0x28) = (s32) ((temp_s3 * 0x600) + 0x03006000 + (*(s16 *)((u8 *)arg0 + 0x20) * 0x30));
            temp_a0_3 = *(s16 *)((u8 *)arg0 + 0x24);
            if (temp_a0_3 > 0) {
                temp_a1 = D_0046FE48 + temp_s0;
                *(s32 *)((u8 *)temp_s1 + 0x24) = (s32) *(s32 *)((u8 *)(((*(s32 *)((u8 *)temp_a1 + 0xC) + temp_a0_3) * 4) + temp_a1) + 0xD4);
                return;
            }
            *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
        }
    }
}
