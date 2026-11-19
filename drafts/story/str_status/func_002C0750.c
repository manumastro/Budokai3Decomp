/* Draft (not built): func_002C0750 at 0x002C0750, size 0x104, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_status/func_002C0750.s */

void func_002C0750(s32 *arg0) {
    s32 *sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 **var_a0;
    s32 **var_s2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s2_2;
    s32 var_s3;
    u32 var_v1;
    u8 *var_s0_2;
    u8 *var_s1;
    var_v1 = 0x10;
    var_s1 = (unsigned char *)arg0;
    var_a0 = &sp50;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        }
        while (var_v1 != 0);
    }
    sp50 = (int *)(var_s1 + 0xC);
    var_s0 = 0;
    sp54 = (int)(var_s1 + 0x10);
    sp58 = (int)(var_s1 + 0x2C);
    sp5C = (int)(var_s1 + 0x14);
    var_s2 = &sp50;
    do {
        temp_a0 = **var_s2;
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            **var_s2 = 0;
        }
        var_s0 += 1;
        var_s2 += 4;
    }
    while (var_s0 < 4);
    var_s3 = 0;
    do {
        var_s2_2 = 0;
        var_s0_2 = var_s1;
        loop_8:
        temp_a0_2 = *(s32 *)((u8 *)var_s0_2 + 0x3C);

        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)var_s0_2 + 0x3C) = 0;
        }
        var_s2_2 += 1;
        var_s0_2 += 4;
        if (var_s2_2 < 3) {
            goto loop_8;
        }
        var_s3 += 1;
        var_s1 += 0xC;
    }
    while (var_s3 < 8);
}
