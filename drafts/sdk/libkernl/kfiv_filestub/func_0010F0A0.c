/* Draft (not built): func_0010F0A0 at 0x0010F0A0, size 0x44, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F0A0.s */

void func_0010F0A0(u8 *arg1) {
    s32 (*temp_v1)(s32);

    temp_v1 = *(s32 (**)(s32))((u8 *)arg1 + 0);
    if (temp_v1 != NULL) {
        temp_v1(*(s32 *)((u8 *)arg1 + 4));
    }
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: ei */);
}
