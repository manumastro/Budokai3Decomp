/* Draft (not built): func_001012B8 at 0x001012B8, size 0x1E0, segment sdk/libgraph_00100CF8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgraph_00100CF8/func_001012B8.s */

s64 sceGszbufaddr(s16, s16, s16, s32);              /* extern */

s32 func_001012B8(u8 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 temp_s3;
    s16 temp_s5;
    s32 temp_a3;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v0_3;

    temp_a3 = arg3 << 0x10;
    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s3 = M2C_ERROR(/* Read from unset register $t1 */);
    *(s64 *)((u8 *)arg0 + 8) = 0x4D;
    *(s64 *)((u8 *)arg0 + 0) = (s64) (((((s32) (arg2 << 0x10) >> 0x16) & 0x3F) << 0x10) | ((arg1 & 0xF) << 0x18));
    *(s64 *)((u8 *)arg0 + 0x18) = 0x4F;
    if (temp_s5 == 0) {
        var_v0 = ((s64) (sceGszbufaddr(arg1, arg2, arg3, temp_a3) << 0x30) >> 0x30) | ((temp_s3 & 0xF) << 0x18) | (0x8000 << 0x11);
    } else {
        var_v0 = ((s64) (sceGszbufaddr(arg1, arg2, arg3, temp_a3) << 0x30) >> 0x30) | ((temp_s3 & 0xF) << 0x18);
    }
    *(s64 *)((u8 *)arg0 + 0x10) = var_v0;
    *(s64 *)((u8 *)arg0 + 0x28) = 0x19;
    *(s64 *)((u8 *)arg0 + 0x20) = (s64) (((0x800 - ((s64) ((s64) (arg2 >> 1) << 0x30) >> 0x30)) * 0x10) | ((0x800 - ((s64) ((s64) (arg3 >> 1) << 0x30) >> 0x30)) << 0x24));
    *(s64 *)((u8 *)arg0 + 0x38) = 0x41;
    *(s64 *)((u8 *)arg0 + 0x30) = (s64) (((arg2 - 1) << 0x10) | ((arg3 - 1) << 0x30));
    *(s64 *)((u8 *)arg0 + 0x48) = 0x1A;
    *(s64 *)((u8 *)arg0 + 0x40) = (s64) (*(s64 *)((u8 *)arg0 + 0x40) | 1);
    *(s64 *)((u8 *)arg0 + 0x58) = 0x46;
    *(s64 *)((u8 *)arg0 + 0x50) = (s64) (*(s64 *)((u8 *)arg0 + 0x50) | 1);
    *(s64 *)((u8 *)arg0 + 0x68) = 0x45;
    if (arg1 & 2) {
        var_v0_2 = *(s64 *)((u8 *)arg0 + 0x60) | 1;
    } else {
        var_v0_2 = *(s64 *)((u8 *)arg0 + 0x60) & ~1;
    }
    *(s64 *)((u8 *)arg0 + 0x60) = var_v0_2;
    *(s64 *)((u8 *)arg0 + 0x78) = 0x48;
    if (temp_s5 != 0) {
        var_v0_3 = ((temp_s5 & 3) << 0x11) | 0x10000;
    } else {
        var_v0_3 = 0x30000;
    }
    *(s64 *)((u8 *)arg0 + 0x70) = var_v0_3;
    M2C_SYNC();
    return 8;
}
