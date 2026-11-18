/* Draft (not built): func_001159B8 at 0x001159B8, size 0xCC, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001159B8.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s64 func_00115478();                                /* extern */
extern s32 D_003EDCC8;

s64 func_001159B8(u32 arg0, s64 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s64 temp_v0;
    s64 var_s1;
    s64 var_v0;

    temp_s0 = (arg0 >> 0xA) << 6;
    temp_s3 = DI();
    if ((s32) arg0 < 0) {
        goto block_5;
    }
    if ((arg0 & 0x3FF) != *(s32 *)((u8 *)temp_s0 + 8)) {
        goto block_5;
    }
    if (*(s32 *)((u8 *)(&D_003EDCC8) + 0x1C) == arg0) {
        goto block_4;
    }
    goto block_7;
block_4:
block_5:
    var_v0 = -1;
    if (temp_s3 == 0) {
        goto block_12;
    }
    EI();
    return -1;
block_7:
    var_s1 = *(s64 *)((u8 *)temp_s0 + 0x18);
    if (!(*(s32 *)((u8 *)temp_s0 + 0xC) & 1)) {
        goto block_9;
    }
    temp_v0 = func_00115478();
    *(s64 *)((u8 *)temp_s0 + 0x18) = arg1;
    temp_v1 = temp_v0 - *(s64 *)((u8 *)temp_s0 + 0x10);
    *(s64 *)((u8 *)temp_s0 + 0x10) = temp_v0;
    var_s1 += temp_v1;
    goto block_10;
block_9:
    *(s64 *)((u8 *)temp_s0 + 0x18) = arg1;
block_10:
    var_v0 = var_s1;
    if (temp_s3 == 0) {
        goto block_12;
    }
    EI();
    var_v0 = var_s1;
block_12:
    return var_v0;
}
