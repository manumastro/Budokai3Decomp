/* Draft (not built): func_00180D50 at 0x00180D50, size 0x34, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00180D50.s */

void *func_00181FA8();                              /* extern */

void func_00180D50(s32 arg0) {
    u8 *temp_v0;

    temp_v0 = func_00181FA8();
    (*(s32 (**)(s32, s32))((u8 *)temp_v0 + 0x2C))(*(s32 *)((u8 *)temp_v0 + 0x30), arg0);
}
