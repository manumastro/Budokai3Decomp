/* Draft (not built): func_00163BC0 at 0x00163BC0, size 0x98, segment cri/adx_00162A70 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00162A70/func_00163BC0.s */

s32 func_00161D20(s32 *);                   /* extern */
extern s32 D_00462E00;

s32 func_00163BC0(u8 *arg0) {
    s32 var_s0;
    s64 (*temp_v0)(s32, s32, s32, s32);
    s64 temp_s0;

    var_s0 = 0;
    if (arg0 == NULL) {
        func_00161D20(&D_00462E00);
        return 0;
    }
    temp_v0 = *(s64 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60);
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0(*(s32 *)((u8 *)arg0 + 4), 0xC8, 0, 0);
        var_s0 = (temp_s0 << 0x20) + ((u64) ((*(s64 (**)(s32, s32, s32, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x60))(*(s32 *)((u8 *)arg0 + 4), 0xC9, 0, 0) << 0x20) >> 0x20);
    }
    return var_s0;
}
