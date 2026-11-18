/* Draft (not built): func_001F7DB0 at 0x001F7DB0, size 0x194, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *(s32 *)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 0xC) + var_s0; @ 7491: temp_s3 = *D_0051CD14 + (D_0051CD20 * 0x24);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7DB0.s */

// src/battle/btb_draw.c func_001F7DB0 cerr diff=-1/0
void func_001F7DB0(void) {
    s32 temp_a2;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 var_t0;
    s32 var_v1_2;
    s8 *var_a3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_v1;

    temp_s3 = *D_0051CD14 + (D_0051CD20 * 0x24);
    var_s2 = 0;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x80) > 0) {
        var_s0 = 0;
        do {
            temp_s1 = *(s32 *)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 0xC) + var_s0;
            temp_a0 = *(u8 **)((u8 *)temp_s1 + 4);
            var_a1 = 0;
            if (*(s32 *)((u8 *)temp_a0 + 4) > 0) {
                var_v1 = temp_a0;
                do {
                    *(s32 *)((u8 *)var_v1 + 8) = 0;
                    var_a1 += 1;
                    var_v1 += 8;
                } while (var_a1 < *(s32 *)((u8 *)temp_a0 + 4));
            }
            temp_v0 = (s32)(func_001F5FD0(0x80000000, D_004698D0, temp_s1, func_001F3A60));
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x10);
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x10);
            temp_a0_2 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 4)) + 0)) + 0x1C);
            var_v1_2 = 0;
            if (temp_a0_2 != NULL) {
                temp_a2 = *(s32 *)((u8 *)temp_a0_2 + 0x10);
                var_t0 = 0;
                if (temp_a2 > 0) {
                    var_a3 = *(s8 **)((u8 *)temp_a0_2 + 0x1C);
                    do {
                        if (*var_a3 == 0x58) {
                            var_v1_2 |= 0x200;
                        }
                        var_t0 += 1;
                        var_a3 += 0x20;
                    } while (var_t0 < temp_a2);
                }
            }
            var_s2 += 1;
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~var_v1_2);
            *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | var_v1_2);
            var_s0 += 0x20;
        } while (var_s2 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 4)) + 0x80));
    }
}
