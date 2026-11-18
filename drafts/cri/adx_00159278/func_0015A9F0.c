/* Draft (not built): func_0015A9F0 at 0x0015A9F0, size 0xE4, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A9F0.s */

void func_0015A9F0(u8 *arg0, s32 arg1, s16 arg2) {
    s16 *var_v0;
    s16 temp_a2;
    s16 var_a1;
    s16 var_v0_2;
    s32 var_v1;
    u16 temp_v0;

    if (arg1 == 0) {
        var_v1 = *(s32 *)((u8 *)arg0 + 0x14);
        if (arg1 < var_v1) {
            var_v0 = arg0 + 0x18;
            do {
                var_v1 -= 1;
                *var_v0 = 0;
                var_v0 += 2;
            } while (var_v1 != 0);
        }
        *(s32 *)((u8 *)arg0 + 0x78) = 0;
    }
    if (arg0 != NULL) {
        temp_a2 = (arg2 - ((s32) (*(s16 *)((u8 *)arg0 + 4) * *(s16 *)((u8 *)arg0 + 8)) >> 0xC)) - ((s32) (*(s16 *)((u8 *)arg0 + 6) * *(s16 *)((u8 *)arg0 + 0xA)) >> 0xC);
        if (temp_a2 <= 0x7FFF) {
            var_a1 = (temp_a2 >= -0x8000) ? temp_a2 : -0x8000;
        } else {
            var_a1 = 0x7FFF;
        }
        var_v0_2 = var_a1;
        if (var_v0_2 < 0) {
            var_v0_2 = -var_v0_2;
        }
        *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x18) = var_a1;
        if (*(s32 *)((u8 *)arg0 + 0x78) < var_v0_2) {
            *(s32 *)((u8 *)arg0 + 0x78) = (s32) var_v0_2;
        }
        temp_v0 = (u16) *(s16 *)((u8 *)arg0 + 8);
        *(s16 *)((u8 *)arg0 + 8) = arg2;
        *(s16 *)((u8 *)arg0 + 0xA) = (s16) temp_v0;
    }
}
