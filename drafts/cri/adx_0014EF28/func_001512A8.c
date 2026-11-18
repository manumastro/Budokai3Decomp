/* Draft (not built): func_001512A8 at 0x001512A8, size 0x54, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001512A8.s */

s32 func_00161AF0(s32, s32, s32, s32);          /* extern */
s32 func_00161B20(s32);                         /* extern */

void func_001512A8(u8 *arg0, s32 arg1) {
    s32 temp_s0;
    u8 *temp_v1;

    temp_v1 = arg0 + 0x48;
    temp_s0 = *(s32 *)((u8 *)arg0 + 8);
    func_00161AF0(temp_s0, *(s32 *)((u8 *)arg0 + 0x48), arg1, *(s32 *)((u8 *)temp_v1 + 0x14) + (*(s32 *)((u8 *)temp_v1 + 0x20) * 2));
    func_00161B20(temp_s0);
}
