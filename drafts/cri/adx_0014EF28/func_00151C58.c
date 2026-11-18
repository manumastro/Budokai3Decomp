/* Draft (not built): func_00151C58 at 0x00151C58, size 0x230, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151C58.s */

s32 memcmp(s32, s32, s32);                      /* extern */
extern s32 D_00401FE8;
extern s32 D_00401FEC;

s32 func_00151C58(s32 arg0, s32 arg1, s16 *arg2, s8 *arg3, s32 *arg_sp0, s32 *arg_sp8, s16 *arg_sp10) {
    s8 *sp0;
    s32 *sp4;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s8 temp_a1;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *temp_s7;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_s1;

    var_s0 = 0;
    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s6 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s7 = M2C_ERROR(/* Read from unset register $t1 */);
    sp0 = arg3;
    sp4 = M2C_ERROR(/* Read from unset register $t3 */);
loop_1:
    if (var_s0 >= arg1) {
        goto block_5;
    }
    if (memcmp(arg0 + var_s0, D_00401FE8, 4) == 0) {
        goto block_4;
    }
    var_s0 += 1;
    goto loop_1;
block_4:
block_5:
    var_v0 = -1;
    if (var_s0 == arg1) {
        goto block_25;
    }
    if (var_s0 & 3) {
        goto block_25;
    }
    temp_a0 = arg0 + var_s0;
    temp_s1 = temp_a0 + 8;
    if (*(s16 *)((u8 *)temp_a0 + 8) >= 2) {
        goto block_25;
    }
    var_s0_2 = 0;
loop_9:
    if (var_s0_2 >= arg1) {
        goto block_13;
    }
    if (memcmp(arg0 + var_s0_2, D_00401FEC, 4) == 0) {
        goto block_12;
    }
    var_s0_2 += 1;
    goto loop_9;
block_12:
block_13:
    var_v0 = -1;
    if (var_s0_2 == arg1) {
        goto block_25;
    }
    *arg2 = var_s0_2 + 8;
    temp_a2 = *(s32 *)((u8 *)(arg0 + var_s0_2) + 4);
    *sp0 = -1;
    *sp4 = *(s32 *)((u8 *)temp_s1 + 4);
    *temp_s6 = *(u8 *)((u8 *)temp_s1 + 2);
    *temp_s4 = *(u8 *)((u8 *)temp_s1 + 0xE);
    temp_v1 = *(u8 *)((u8 *)temp_s1 + 0xC);
    *temp_s7 = temp_v1;
    *arg_sp0 = temp_a2 / (s8) temp_v1;
    *arg_sp8 = 1;
    temp_a1 = (s8) *temp_s4;
    if (temp_a1 != 0x10) {
        goto block_16;
    }
    *arg_sp10 = 0;
    goto block_20;
block_16:
    if (temp_a1 != 8) {
        goto block_18;
    }
    *arg_sp10 = 1;
    goto block_20;
block_18:
    if (temp_a1 != 4) {
        goto block_21;
    }
    *temp_s7 = (s8) *temp_s6 * 2;
    *arg_sp8 = (s32) temp_a1;
    *arg_sp0 = (s32) ((s32) (temp_a2 + ((u32) temp_a2 >> 0x1F)) >> 1) / (s8) *temp_s6;
    *temp_s4 = 0x10;
    *arg_sp10 = 2;
block_20:
block_21:
    var_v0 = -1;
    if (*temp_s4 == 0) {
        goto block_25;
    }
    if ((s8) *temp_s7 == 0) {
        goto block_26;
    }
    if ((u32) (*temp_s6 - 1) >= 2U) {
        goto block_27;
    }
    var_v0 = (*sp4 != 0) ? 0 : -1;
block_25:
block_26:
block_27:
    return var_v0;
}
