/* Draft (not built): func_00151200 at 0x00151200, size 0x4C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151200.s */

s32 func_00161A90(s32, s32, s32, s32);          /* extern */
s32 func_00161B20(s32);                         /* extern */

void func_00151200(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x48;
    temp_s0 = *(s32 *)((u8 *)arg0 + 8);
    func_00161A90(temp_s0, *(s32 *)((u8 *)arg0 + 0x48), arg1, *(s32 *)((u8 *)temp_v0 + 0x14) + (*(s32 *)((u8 *)temp_v0 + 0x20) * 2));
    func_00161B20(temp_s0);
}
