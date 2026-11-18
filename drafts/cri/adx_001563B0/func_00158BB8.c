/* Draft (not built): func_00158BB8 at 0x00158BB8, size 0x17C, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00158BB8.s */

s32 fn_80057DB0(s32, s32, s8 *);                    /* extern */
void *func_001506A8(s8, s32, s32, s32);             /* extern */
s32 func_00150D30(void *, s32 *, void *);   /* extern */
s32 func_00158B78(void *);                      /* extern */
u32 func_0016E830(s32);                             /* extern */
u32 func_0016E838(s32);                             /* extern */
extern s8 D_0040D5F0;
extern s32 adxsjd_get_wr;

u8 *func_00158BB8(s32 arg0, s8 arg1, s32 *arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_v0_3;
    s32 var_a1;
    s32 var_a2;
    s8 *var_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    u8 *temp_s2;
    u8 *var_v0;

    var_v1 = &D_0040D5F0;
    var_a1 = 0;
    temp_s0 = *arg2;
    if (D_0040D5F0 == 0) {
        goto block_3;
    }
loop_1:
    var_a1 += 1;
    var_v1 += 0xA8;
    if (var_a1 >= 0x10) {
        goto block_3;
    }
    if (*var_v1 != 0) {
        goto loop_1;
    }
block_3:
    var_v0 = NULL;
    if (var_a1 == 0x10) {
        goto block_9;
    }
    temp_s2 = (var_a1 * 0xA8) + &D_0040D5F0;
    temp_s1 = fn_80057DB0(temp_s0, var_a1, &D_0040D5F0);
    temp_v0 = func_0016E830(temp_s0);
    temp_s0_2 = (temp_v0 >> 0x1F) + temp_v0;
    temp_v0_2 = func_0016E838(temp_s0);
    temp_s0_3 = temp_s0_2 >> 1;
    var_v0 = func_001506A8(arg1, temp_s1, temp_s0_3, temp_s0_3 + ((s32) ((temp_v0_2 >> 0x1F) + temp_v0_2) >> 1));
    *(u8 **)((u8 *)temp_s2 + 4) = var_v0;
    if (var_v0 == NULL) {
        goto block_9;
    }
    func_00150D30(var_v0, &adxsjd_get_wr, temp_s2);
    *(s32 *)((u8 *)temp_s2 + 8) = arg0;
    *(s8 *)((u8 *)temp_s2 + 2) = arg1;
    var_a2 = 0;
    if (arg1 <= 0) {
        goto block_8;
    }
loop_7:
    temp_v0_3 = var_a2 * 4;
    var_a2 += 1;
    *(temp_s2 + 0xC + temp_v0_3) = *(temp_v0_3 + arg2);
    if (var_a2 < arg1) {
        goto loop_7;
    }
block_8:
    *(s8 *)((u8 *)temp_s2 + 1) = 0;
    func_00158B78(temp_s2);
    *(s32 *)((u8 *)temp_s2 + 0x48) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x4C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x50) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x54) = 0;
    *(s8 *)((u8 *)temp_s2 + 0) = 1;
    var_v0 = temp_s2;
block_9:
    return var_v0;
}
