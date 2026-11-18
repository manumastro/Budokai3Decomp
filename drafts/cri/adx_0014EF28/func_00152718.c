/* Draft (not built): func_00152718 at 0x00152718, size 0xA4, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00152718.s */

s32 memcmp(void *, s32 *, s32, void *);     /* extern */
extern s32 D_004604D0;

s32 func_00152718(u8 *arg0, s32 arg1, s16 *arg2) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = 0;
    if (arg1 >= 0x10) {
        if ((*(u8 *)((u8 *)arg0 + 1) | (*(u8 *)((u8 *)arg0 + 0) << 8)) == 0x8000) {
            temp_v1 = (*(u8 *)((u8 *)arg0 + 2) << 8) | *(u8 *)((u8 *)arg0 + 3);
            if (arg1 > 0x7FFF) {
                var_v0 = 0;
                if (memcmp(arg0 + (temp_v1 - 2), &D_004604D0, 6, arg0) == 0) {
                    if (arg2 != NULL) {
                        *arg2 = temp_v1 + 4;
                    }
                    var_v0 = 1;
                }
            }
        }
    }
    return var_v0;
}
