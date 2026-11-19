/* Draft (not built): func_0026FF30 at 0x0026FF30, size 0xF0, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_26FF30/func_0026FF30.s */

s32 func_0026FF30(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 var_a0;
    s32 var_t1;
    s32 var_t2;
    u8 *temp_a2;
    u8 *var_v1;
    var_t1 = 0x2F;
    temp_a3 = *(s32 *)((u8 *)D_004707FC + 0x50);
    temp_a2 = (unsigned char *)(D_004707FC + 0x5DC);
    var_t2 = *(s32 *)((u8 *)D_004707FC + 0x698);
    temp_a0 = *(s32 *)(temp_a2 + temp_a3 * 4);
    if (temp_a0 < *(s32 *)((u8 *)D_004707FC + 0x4C) + *(s32 *)((u8 *)D_004707FC + 0x48)) {
        var_t2 = temp_a0;
        var_t1 = temp_a3;
    } else {
        var_a0 = temp_a3 - 1;
        if (var_a0 >= 0) {
            var_v1 = (unsigned char *)(D_004707FC + var_a0 * 4);
            loop_5:
            if (*(s32 *)((u8 *)var_v1 + 0x5DC) >= 0) {
                var_t2 = *(temp_a2 + var_a0 * 4);
                var_t1 = var_a0;
            } else {
                var_a0 -= 1;
                var_v1 -= 4;
                if (var_a0 < 0) {
                } else {
                    goto loop_5;
                }
            }
        }
    }
    if (var_t2 >= 0) {
        *(s32 *)((u8 *)D_004707FC + 0x50) = var_t1;
        temp_a0_2 = *(s32 *)((u8 *)D_004707FC + 0x58);
        if (temp_a0_2 < var_t2 + 9) {
            *(s32 *)((u8 *)D_004707FC + 0x4C) = (s32)(temp_a0_2 - 9);
            *(s32 *)((u8 *)D_004707FC + 0x48) = (s32)(var_t2 - *(s32 *)((u8 *)D_004707FC + 0x4C));
        } else {
            *(s32 *)((u8 *)D_004707FC + 0x4C) = var_t2;
            *(s32 *)((u8 *)D_004707FC + 0x48) = 0;
        }
        return 1;
    }
    return 0;
}
