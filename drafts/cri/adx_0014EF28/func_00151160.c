/* Draft (not built): func_00151160 at 0x00151160, size 0x44, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151160.s */

s32 func_00161B40(s32);                         /* extern */
extern s32 (*D_00401098)();

void func_00151160(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0xE8) != 0) {
        D_00401098();
    }
    func_00161B40(*(s32 *)((u8 *)arg0 + 8));
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
