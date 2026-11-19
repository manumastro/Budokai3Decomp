/* Draft (not built): func_001E1690 at 0x001E1690, size 0x1B8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1BC, original 0x1B8
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E1690.s */

// src/unk/unk_1D5B30.c func_001E1690 size diff=46/111
s32 func_001E1690(u8 *arg0) {
    u8 sp[0x400];
    s8 sp2C;
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s8 *var_a1_2;
    s8 *var_a2;
    s8 temp_t3;
    u32 var_a0;
    u8 *temp_a1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1354);
    memset(&sp2C, 0, 3);
    if (*(s32 *)((u8 *)temp_s0 + 0x1CFC) == 0x23) {
        temp_v0 = *(s32 *)((u8 *)temp_s0 + 0xBA4);
        if ((temp_v0 > 0) && (temp_v0 < 4)) {
            *(s8 *)((u8 *)(temp_v0 + sp) + 0x2B) = 1;
        }
    } else {
        var_t2 = 0;
        var_a3 = 0;
        do {
            temp_a1 = temp_s0 + var_t2;
            temp_t3 = *(s8 *)((u8 *)temp_a1 + 0x1D04);
            if ((temp_t3 != -1) && ((*(s16 *)((u8 *)(*(s32 *)((u8 *)temp_s0 + 0x1CF8) + var_a3) + 0xD4) == 0) || (*(s8 *)((u8 *)temp_a1 + 0x1FDC) != 0))) {
                var_t1 = 0;
                var_a2 = &sp2C;
                var_a1_2 = D_00469468;
                do {
                    var_t0 = 0;
                    if (*var_a2 == 0) {
                        do {
                            if (temp_t3 == var_a1_2[var_t0]) {
                                *var_a2 = 1;
                            }
                            var_t0 += 1;
                        } while (var_t0 < 4);
                    }
                    var_t1 += 1;
                    var_a2 += 1;
                    var_a1_2 += 4;
                } while (var_t1 < 3);
            }
            var_t2 += 1;
            var_a3 += 0x14;
        } while (var_t2 < 8);
    }
    var_a1 = -1;
    var_a0 = (u32) (func_0012EAE0(0x20) / 10) % 3U;
    do {
        var_a1 = (s32) (var_a1 + 1) % 3;
        if (*(s8 *)((u8 *)(var_a1 + sp) + 0x2C) != 0) {
            do {
                var_a1 = (s32) (var_a1 + 1) % 3;
            } while (*(s8 *)((u8 *)(var_a1 + sp) + 0x2C) != 0);
        }
        var_a0 -= 1;
    } while ((s32) var_a0 >= 0);
    return var_a1 + 1;
}
