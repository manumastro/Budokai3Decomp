/* Draft (not built): func_0018DA30 at 0x0018DA30, size 0xB0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018DA30.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

void func_0018DA30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_a0;

    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000171);
        return;
    }
    if ((u32) (arg1 - 0xBC) < 0x44U) {
        temp_a0 = *(u8 **)((u8 *)arg0 + 0x1C2C);
        *(s32 *)((u8 *)temp_a0 + 0x144) = arg3;
        *(s32 *)((u8 *)((arg1 * 4) + temp_a0) + -0x2BC) = arg2;
        *(s32 *)((u8 *)temp_a0 + 0x148) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    }
}
