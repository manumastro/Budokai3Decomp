/* Draft (not built): func_00168D68 at 0x00168D68, size 0x19C, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168D68.s */

s32 memcpy(s32, void *, s32);                   /* extern */
extern s32 D_00413D00;

s32 func_00168D68(s32 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1_2;
    s8 *var_a0;
    s8 *var_v0;
    s8 temp_v0;
    s8 temp_v1;
    u8 var_v1;
    u8 *temp_a2;

    var_s2 = 0;
    var_s4 = 0;
    sp0 = arg0;
    var_a1 = 0;
    if (*arg1 != 0) {
        var_a0 = arg1;
        sp4 = arg2 * 8;
loop_2:
        var_v1 = (u8) *(s8 *)((u8 *)var_a0 + 0);
        if (*(s8 *)((u8 *)var_a0 + 0) == 0x5C) {
            var_v1 = 0x2F;
            *(s8 *)((u8 *)var_a0 + 0) = 0x2F;
        }
        if (((s8) var_v1 == 0xA) || ((s8) var_v1 == 0xD) || (var_v1_2 = var_s2 + 1, ((s8) var_v1 == 0))) {
            temp_v0 = *(s8 *)((u8 *)var_a0 + 1);
            if ((temp_v0 == 0xA) || (temp_v0 == 0xD) || (var_v0 = var_a0 - 1, (temp_v0 == 0))) {
                var_s2 += 1;
                var_v0 = (arg1 + var_s2) - 1;
            }
            temp_v1 = *var_v0;
            temp_s1 = var_s2 - var_a1;
            if ((temp_v1 == 0xA) || (temp_v1 == 0xD)) {
                *var_v0 = 0;
            }
            temp_s0 = sp0 + (sp4 + ((arg3 * var_s4) + var_s4));
            memcpy(temp_s0, arg1 + var_a1, temp_s1);
            temp_a2 = temp_s0 + temp_s1;
            if (*(s8 *)((u8 *)temp_a2 + -1) != 0) {
                *(s8 *)((u8 *)temp_a2 + 0) = 0;
            }
            var_v1_2 = var_s2 + 1;
            var_s4 += 1;
            var_a1 = var_v1_2;
            if (var_s4 != arg2) {
                goto block_17;
            }
        } else {
block_17:
            var_s2 = var_v1_2;
            var_a0 = arg1 + var_s2;
            if (*var_a0 != 0) {
                goto loop_2;
            }
        }
    }
    if (*(s32 *)((u8 *)(&D_00413D00) + 0) == 0) {
        *(s32 *)((u8 *)(&D_00413D00) + 0xC) = arg3;
        *(s32 *)((u8 *)(&D_00413D00) + 8) = arg2;
        *(s32 *)((u8 *)(&D_00413D00) + 0) = sp0;
        *(s32 *)((u8 *)(&D_00413D00) + 4) = var_s4;
    }
    return var_s4;
}
