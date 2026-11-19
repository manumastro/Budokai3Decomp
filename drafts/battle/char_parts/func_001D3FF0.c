/* Draft (not built): func_001D3FF0 at 0x001D3FF0, size 0x164, segment battle/char_parts (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_parts/func_001D3FF0.s */

// src/battle/char_parts.c func_001D3FF0 diff diff=67/89
void func_001D3FF0(void *arg0, s32 arg1) {
    s16 var_a1;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v0_2;
    u8 *var_a0;
    u8 *var_a2;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;
    u8 *var_v0;
    u8 *var_v1;

    var_s4 = arg0;
    var_s3 = (unsigned char *)(arg1);
    if (var_s4 != NULL) {
        if (var_s3 == NULL) {

        } else {
            var_s2 = *(u8 **)((u8 *)var_s4 + 0xC);
            temp_v0 = amMotion_FindBone(*(u8 **)((u8 *)var_s3 + 4), var_s2);
            if (temp_v0 >= 0) {
                var_a1 = *(s16 *)((u8 *)var_s2 + 0x1C);
                var_a2 = (unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 4)) + 0x14) + (temp_v0 * 0x50));
                if (var_a1 == 0) {
                    var_v0 = var_a2;
                    do {
                        var_v0 = *(u8 **)((u8 *)var_v0 + 0x38);
                        var_a1 += 1;
                    } while (var_v0 != NULL);
                }
                *(s32 *)((u8 *)var_s4 + 8) = (s32) var_a1;
                *(u8 **)((u8 *)var_s4 + 0) = var_s3;
                var_v1 = NULL;
                *(u8 **)((u8 *)var_s4 + 0xC) = var_s2;
                var_a0 = *(u8 **)((u8 *)var_s4 + 4);
                var_v0_2 = 0;
loop_14:
                if (var_v0_2 < var_a1) {
                    if (var_a2 == NULL) {

                    } else {
                        *(u8 **)((u8 *)var_a0 + 0x128) = var_a2;
                        *(u8 **)((u8 *)var_a0 + 0x120) = var_v1;
                        if (var_v1 != NULL) {
                            *(u8 **)((u8 *)var_v1 + 0x124) = var_a0;
                        }
                        var_a2 = *(u8 **)((u8 *)var_a2 + 0x38);
                        var_v1 = var_a0;
                        var_v0_2 += 1;
                        var_a0 += 0x130;
                        goto loop_14;
                    }
                }
                var_s1 = var_s2 + 0x70;
                var_s0 = 0;
                if (*(s16 *)((u8 *)var_s2 + 0x1E) > 0) {
                    var_s5 = var_s4;
                    do {
                        *(s16 *)((u8 *)var_s5 + 0x90) = amMotion_FindBone(*(u8 **)((u8 *)var_s3 + 4), var_s1);
                        var_s0 += 1;
                        var_s1 += 0x20;
                        var_s5 += 2;
                    } while (var_s0 < *(s16 *)((u8 *)var_s2 + 0x1E));
                }
                func_001D3E10(var_s4);
            }
        }
    }
}
