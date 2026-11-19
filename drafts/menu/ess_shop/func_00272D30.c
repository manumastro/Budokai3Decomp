/* Draft (not built): func_00272D30 at 0x00272D30, size 0xF0, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_shop/func_00272D30.s */

s32 func_00272D30(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a3;
    s32 var_t0;
    s32 var_v1;
    u8 *var_a2;
    temp_v1 = *(s32 *)((u8 *)gEssShop + 0x60);
    var_t0 = 0;
    if (!(temp_v1 == 0)) {
        var_a3 = 0;
        if (*(s32 *)((u8 *)gEssShop + 0x6C) > 0) {
            var_a2 = (unsigned char *)gEssShop;
            do {
                if (*(s16 *)((u8 *)var_a2 + 0x80) == temp_v1 - 1) {
                    var_t0 += 1;
                }
                var_a3 += 1;
                var_a2 += 0x14;
            }
            while (var_a3 < *(s32 *)((u8 *)gEssShop + 0x6C));
        }
    } else {
        var_t0 = *(s32 *)((u8 *)gEssShop + 0x6C);
    }
    if (var_t0 == 0) {
        return 0;
    }
    var_v1 = var_t0 - 1;
    if (var_t0 >= 4) {
        var_v1 = 3;
    }
    temp_v0 = *(s32 *)((u8 *)gEssShop + 0x68) + 1;
    *(s32 *)((u8 *)gEssShop + 0x68) = temp_v0;
    if (var_v1 < temp_v0) {
        *(s32 *)((u8 *)gEssShop + 0x68) = var_v1;
        if (var_t0 >= 5) {
            temp_a0 = var_t0 - 4;
            *(s32 *)((u8 *)gEssShop + 0x64) = temp_v0_2;
            temp_v0_2 = *(s32 *)((u8 *)gEssShop + 0x64) + 1;
            if (temp_a0 < temp_v0_2) {
                *(s32 *)((u8 *)gEssShop + 0x64) = temp_a0;
                return 0;
            }
            return 1;
        }
        return 0;
    }
    return 1;
}
