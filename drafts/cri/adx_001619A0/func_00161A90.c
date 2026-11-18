/* Draft (not built): func_00161A90 at 0x00161A90, size 0x30, segment cri/adx_001619A0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_001619A0/func_00161A90.s */

s32 func_00161A90(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (*(s32 *)((u8 *)arg0 + 0xC) == 0) {
        *(s32 *)((u8 *)arg0 + 0x24) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
        *(s32 *)((u8 *)arg0 + 0x18) = arg1;
        *(s32 *)((u8 *)arg0 + 0x1C) = arg2;
        *(s32 *)((u8 *)arg0 + 0x14) = 1;
        *(s32 *)((u8 *)arg0 + 0x20) = arg3;
        return 1;
    }
    return 0;
}
