/* Draft (not built): func_00129458 at 0x00129458, size 0x22C, segment sdk/libc_00129428 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/sdk/libc_00129428/func_00129458.s */

s32 __muldi3(u32, s32);                             /* extern */
u32 __udivdi3(s32, s32);                        /* extern */
s64 __umoddi3(s32, s32);                        /* extern */
extern s32 D_0045EAA9;

u32 func_00129458(s32 *arg0, s8 *arg1, s8 **arg2, s32 arg3) {
    s32 *sp0;
    s32 sp4;
    s32 var_s0;
    s32 var_s1_2;
    s32 var_s3;
    s64 temp_s6;
    s8 *var_s2;
    s8 temp_v1;
    s8 var_s1;
    u32 temp_s4;
    u32 var_a1;
    u32 var_a1_2;
    u8 temp_a0;

    sp0 = arg0;
    sp4 = 0;
    var_s2 = arg1;
    var_s3 = arg3;
    do {
        var_s1 = *var_s2;
        var_s2 += 1;
    } while (*(&D_0045EAA9 + var_s1) & 8);
    if (var_s1 == 0x2D) {
        var_s1 = *var_s2;
        var_s2 += 1;
        sp4 = 1;
    } else if (var_s1 == 0x2B) {
        var_s1 = *var_s2;
        var_s2 += 1;
    }
    if (((var_s3 == 0) || (var_s3 == 0x10)) && (var_s1 == 0x30) && ((temp_v1 = *(s8 *)((u8 *)var_s2 + 0), (temp_v1 == 0x78)) || (temp_v1 == 0x58))) {
        var_s1 = *(s8 *)((u8 *)var_s2 + 1);
        var_s2 += 2;
        var_s3 = 0x10;
    }
    if (var_s3 == 0) {
        var_s3 = ((var_s1 ^ 0x30) != 0) ? 0xA : 8;
    }
    var_s0 = 0;
    temp_s4 = __udivdi3(-1, var_s3);
    temp_s6 = (s64) (__umoddi3(-1, var_s3) << 0x20) >> 0x20;
    var_a1_2 = 0;
loop_27:
    temp_a0 = *(&D_0045EAA9 + var_s1);
    if (temp_a0 & 4) {
        var_s1_2 = var_s1 - 0x30;
        goto block_17;
    }
    if (temp_a0 & 3) {
        var_s1_2 = !(temp_a0 & 1) ? (var_s1 - 0x57) : (var_s1 - 0x37);
block_17:
        if (var_s1_2 < var_s3) {
            if (var_s0 >= 0) {
                if (temp_s4 < var_a1_2) {
                    var_s0 = -1;
                } else {
                    if ((var_a1_2 == temp_s4) && (temp_s6 < var_s1_2)) {
                        goto block_24;
                    }
                    var_s0 = 1;
                    var_a1_2 = var_s1_2 + __muldi3(var_a1_2, var_s3);
                }
            } else {
block_24:
                var_s0 = -1;
            }
            var_s1 = *var_s2;
            var_s2 += 1;
            goto loop_27;
        }
    }
    if (var_s0 < 0) {
        var_a1 = -1U;
        *sp0 = 0x22;
    } else {
        var_a1 = (sp4 != 0) ? (0 - var_a1_2) : var_a1_2;
    }
    if (arg2 != NULL) {
        *arg2 = (var_s0 != 0) ? (var_s2 - 1) : arg1;
    }
    return var_a1;
}
