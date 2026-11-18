/* Draft (not built): func_001020B0 at 0x001020B0, size 0x184, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 144 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

void func_001020B0(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_10;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v0_9;

    if (*(s32 *)((u8 *)arg0 + 0x184) == 3) {
        if (*(s32 *)((u8 *)arg0 + 0x188) == 0) {
            var_v0 = arg3 * 3;
            if (arg3 > 0) {
                var_v0 += 1;
            }
            *(s32 *)((u8 *)arg1 + 0) = (s32) ((var_v0 >> 1) + *(s32 *)((u8 *)arg2 + 0));
            var_v0_2 = (M2C_ERROR(/* Read from unset register $t0 */) * 2) + M2C_ERROR(/* Read from unset register $t0 */);
            if (M2C_ERROR(/* Read from unset register $t0 */) > 0) {
                var_v0_2 += 1;
            }
            *(s32 *)((u8 *)arg1 + 4) = (s32) (((var_v0_2 >> 1) + *(s32 *)((u8 *)arg2 + 4)) - 1);
            if (arg3 > 0) {
                var_v0_3 = (s32) (arg3 + 1) >> 1;
            } else {
                var_v0_3 = arg3 >> 1;
            }
            *(s32 *)((u8 *)arg1 + 8) = (s32) (var_v0_3 + *(s32 *)((u8 *)arg2 + 0));
            if (M2C_ERROR(/* Read from unset register $t0 */) > 0) {
                var_v0_4 = M2C_ERROR(/* Read from unset register $t0 */) + 1;
                goto block_14;
            }
            var_v0_5 = (s32) M2C_ERROR(/* Read from unset register $t0 */) >> 1;
        } else {
            if (arg3 > 0) {
                var_v0_6 = (s32) (arg3 + 1) >> 1;
            } else {
                var_v0_6 = arg3 >> 1;
            }
            *(s32 *)((u8 *)arg1 + 0) = (s32) (var_v0_6 + *(s32 *)((u8 *)arg2 + 0));
            if (M2C_ERROR(/* Read from unset register $t0 */) > 0) {
                var_v0_7 = (s32) (M2C_ERROR(/* Read from unset register $t0 */) + 1) >> 1;
            } else {
                var_v0_7 = (s32) M2C_ERROR(/* Read from unset register $t0 */) >> 1;
            }
            *(s32 *)((u8 *)arg1 + 4) = (s32) ((var_v0_7 + *(s32 *)((u8 *)arg2 + 4)) - 1);
            var_v0_8 = arg3 * 3;
            if (arg3 > 0) {
                var_v0_8 += 1;
            }
            *(s32 *)((u8 *)arg1 + 8) = (s32) ((var_v0_8 >> 1) + *(s32 *)((u8 *)arg2 + 0));
            var_v0_4 = (M2C_ERROR(/* Read from unset register $t0 */) * 2) + M2C_ERROR(/* Read from unset register $t0 */);
            if (M2C_ERROR(/* Read from unset register $t0 */) > 0) {
                var_v0_4 += 1;
            }
block_14:
            var_v0_5 = var_v0_4 >> 1;
        }
        *(s32 *)((u8 *)arg1 + 0xC) = (s32) (var_v0_5 + *(s32 *)((u8 *)arg2 + 4) + 1);
        return;
    }
    if (arg3 > 0) {
        var_v0_9 = (s32) (arg3 + 1) >> 1;
    } else {
        var_v0_9 = arg3 >> 1;
    }
    *(s32 *)((u8 *)arg1 + 0) = (s32) (var_v0_9 + *(s32 *)((u8 *)arg2 + 0));
    if (M2C_ERROR(/* Read from unset register $t0 */) > 0) {
        var_v0_10 = (s32) (M2C_ERROR(/* Read from unset register $t0 */) + 1) >> 1;
    } else {
        var_v0_10 = (s32) M2C_ERROR(/* Read from unset register $t0 */) >> 1;
    }
    temp_a2 = var_v0_10 + *(s32 *)((u8 *)arg2 + 4);
    *(s32 *)((u8 *)arg1 + 4) = temp_a2;
    if (*(s32 *)((u8 *)arg0 + 0x184) == 1) {
        *(s32 *)((u8 *)arg1 + 4) = (s32) (temp_a2 - 1);
        return;
    }
    *(s32 *)((u8 *)arg1 + 4) = (s32) (temp_a2 + 1);
}
