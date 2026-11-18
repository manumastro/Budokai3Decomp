/* Draft (not built): func_00194320 at 0x00194320, size 0xCC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00194320.s */

s32 func_0018D650(void *, s32);                 /* extern */
s32 *func_001943F0();                               /* extern */
s32 func_001946D8(void *, s32);                     /* extern */
s32 func_00194918(s32, s32);                /* extern */

s32 func_00194320(u8 *arg0, s32 arg1) {
    s32 *temp_v0;
    s32 temp_v1;
    u8 *temp_s3;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v0 = func_001943F0();
    if (*temp_v0 != 1) {
        return func_0018D650(arg0, 0xFF000F0E);
    }
    temp_v1 = *(s32 *)((u8 *)temp_s3 + 0x70);
    if (temp_v1 != func_001946D8(arg0, arg1)) {
        return func_0018D650(arg0, 0xFF000F0F);
    }
    *temp_v0 = 0;
    func_00194918(temp_v1, 0xFF000F0F);
    return 0;
}
