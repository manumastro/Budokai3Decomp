/* Draft (not built): func_0022E630 at 0x0022E630, size 0x168, segment unk/unk_22E0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); mwccps2.exe Compiler: 94: *var_a2 += arg0; @ 89: *(u8 ***)((u8 *)arg0 + 8) = (u8 **) (arg0 + *(u8 ***)((u8 *)arg0 + 8));
 * Original: asm/nonmatchings/unk/unk_22E0B0/func_0022E630.s */

// src/unk/unk_22E0B0.c func_0022E630 cerr diff=-1/0
void func_0022E630(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    u8 **var_a1_2;
    u8 **var_a2;
    u8 **var_a2_3;
    u8 *temp_a3;

    if (*(s8 *)((u8 *)arg0 + 0) != 0x21) {
        *(s8 *)((u8 *)arg0 + 0) = 0x21;
        *(u8 ***)((u8 *)arg0 + 8) = (u8 **) (arg0 + *(u8 ***)((u8 *)arg0 + 8));
        var_a2 = *(u8 ***)((u8 *)arg0 + 8);
        var_a1 = 0;
        if (*(s32 *)((u8 *)arg0 + 4) > 0) {
            do {
                *var_a2 += arg0;
                temp_a3 = *var_a2;
                temp_v1 = *(s32 *)((u8 *)temp_a3 + 0xC);
                if (temp_v1 < (s32) arg0) {
                    *(s32 *)((u8 *)temp_a3 + 0xC) = (s32) (arg0 + temp_v1);
                    var_a3 = *(s32 *)((u8 *)temp_a3 + 0xC);
                    if (*var_a3 != 0) {
                        do {
                            temp_v1_2 = *(s32 *)((u8 *)var_a3 + 4);
                            if (temp_v1_2 < (s32) arg0) {
                                *(s32 *)((u8 *)var_a3 + 4) = (s32) (arg0 + temp_v1_2);
                            }
                            var_a3 += 8;
                        } while (*var_a3 != 0);
                    }
                }
                var_a1 += 1;
                var_a2 += 4;
            } while (var_a1 < *(s32 *)((u8 *)arg0 + 4));
        }
        *(u8 ***)((u8 *)arg0 + 0x10) = (u8 **) (arg0 + *(u8 ***)((u8 *)arg0 + 0x10));
        var_a1_2 = *(u8 ***)((u8 *)arg0 + 0x10);
        var_a2_2 = 0;
        if (*(s32 *)((u8 *)arg0 + 0xC) > 0) {
            do {
                var_a2_2 += 1;
                *var_a1_2 += arg0;
                var_a1_2 += 4;
            } while (var_a2_2 < *(s32 *)((u8 *)arg0 + 0xC));
        }
        var_a2_3 = (u8 **)(arg0 + 0x14);
        var_a3_2 = 0;
        do {
            var_a3_2 += 6;
            *(u8 **)((u8 *)var_a2_3 + 0) += arg0;
            *(u8 **)((u8 *)var_a2_3 + 4) = (u8 *) (*(u8 **)((u8 *)var_a2_3 + 4) + arg0);
            *(u8 **)((u8 *)var_a2_3 + 8) = (u8 *) (*(u8 **)((u8 *)var_a2_3 + 8) + arg0);
            *(u8 **)((u8 *)var_a2_3 + 0xC) = (u8 *) (*(u8 **)((u8 *)var_a2_3 + 0xC) + arg0);
            *(u8 **)((u8 *)var_a2_3 + 0x10) = (u8 *) (*(u8 **)((u8 *)var_a2_3 + 0x10) + arg0);
            *(u8 **)((u8 *)var_a2_3 + 0x14) = (u8 *) (*(u8 **)((u8 *)var_a2_3 + 0x14) + arg0);
            var_a2_3 += 0x18;
        } while (var_a3_2 < 0xD);
        *var_a2_3 += arg0;
    }
}
