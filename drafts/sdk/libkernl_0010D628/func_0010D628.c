/* Draft (not built): func_0010D628 at 0x0010D628, size 0x148, segment sdk/libkernl_0010D628 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: compile error: d_0010D628.c:49: parse error before `s128'
 * Original: asm/sdk/libkernl_0010D628.s */

s32 isceSifSetDChain(s32, s32, u8 *, u8 *);     /* extern */
extern s32 D_00471998;

s32 func_0010D628(void) {
    s32 (*var_a2_2)(s128 *, s32, s32);
    s128 *var_v1;
    s128 temp_v0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    u8 *var_a2;

    temp_a1 = **(u8 **)((u8 *)(&D_00471998) + 0) & 0xFF;
    if (temp_a1 != 0) {
        temp_v0 = temp_a1 + 0xF;
        var_a2 = *(u8 **)((u8 *)(&D_00471998) + 0);
        temp_a1_2 = (s32) ((temp_v0 > -1) int temp_v0 : (temp_a1 + 0x1E)) >> 4;
        **(u8 **)((u8 *)(&D_00471998) + 0) = 0;
        var_a0 = temp_a1_2;
        if (temp_a1_2 > 0) {
            var_v1 = sp;
            do {
                temp_v0_2 = *var_a2;
                var_a0 -= 1;
                var_a2 += 0x10;
                *var_v1 = temp_v0_2;
                var_v1 += 0x10;
            } while (var_a0 != 0);
        }
        isceSifSetDChain(var_a0, temp_a1_2, var_a2, *(u8 **)((u8 *)(&D_00471998) + 0));
        if (sp8 < 0) {
            temp_a1_3 = sp8 & 0x7FFFFFFF;
            if (temp_a1_3 < *(s32 *)((u8 *)(&D_00471998) + 0x10)) {
                var_a1 = temp_a1_3 * 0xC;
                var_a2_2 = *(s32 (**)(s128 *, s32, s32))((u8 *)(var_a1 + *(s32 *)((u8 *)(&D_00471998) + 0xC)) + 0);
                if (var_a2_2 != NULL) {
                    var_v0 = *(s32 *)((u8 *)(&D_00471998) + 0xC);
                    goto block_11;
                }
            }
        } else if (sp8 < *(s32 *)((u8 *)(&D_00471998) + 0x18)) {
            var_a1 = sp8 * 0xC;
            var_a2_2 = *(s32 (**)(s128 *, s32, s32))((u8 *)(var_a1 + *(s32 *)((u8 *)(&D_00471998) + 0x14)) + 0);
            if (var_a2_2 != NULL) {
                var_v0 = *(s32 *)((u8 *)(&D_00471998) + 0x14);
block_11:
                var_a2_2(sp, *(s32 *)((u8 *)(var_a1 + var_v0) + 4), var_a2_2);
            }
        }
        M2C_SYNC();
        M2C_ERROR(/* unknown instruction: ei */);
    }
    return 0;
}
