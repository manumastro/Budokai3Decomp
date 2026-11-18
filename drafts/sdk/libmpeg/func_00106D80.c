/* Draft (not built): func_00106D80 at 0x00106D80, size 0xF4, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728(void *, s32);                 /* extern */

void func_00106D80(u8 *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;

    if (*(s32 *)((u8 *)arg0 + 0x14C) == 0) {
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x184);
        if (temp_v1 == 3) {
            var_s3 = (*(s32 *)((u8 *)arg0 + 0x194) != 0) ? temp_v1 : 2;
        } else {
            goto block_8;
        }
    } else if (*(s32 *)((u8 *)arg0 + 0x194) != 0) {
        var_s3 = (*(s32 *)((u8 *)arg0 + 0x188) != 0) ? 3 : 2;
    } else {
block_8:
        var_s3 = 1;
    }
    var_s2 = 0;
    if (var_s3 > 0) {
        do {
            temp_s0 = var_s2 * 4;
            *(arg0 + 0x19C + temp_s0) = func_00104728(arg0, 0x10);
            func_00104728(arg0, 1);
            var_s2 += 1;
            *(arg0 + 0x1A8 + temp_s0) = func_00104728(arg0, 0x10);
            func_00104728(arg0, 1);
        } while (var_s2 < var_s3);
    }
}
