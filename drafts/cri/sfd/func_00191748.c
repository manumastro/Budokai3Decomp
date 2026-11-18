/* Draft (not built): func_00191748 at 0x00191748, size 0x284, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00191748.s */

s32 func_001919D0(void *, void *, s32, s16);    /* extern */
s32 func_00192268(void *, s32);                 /* extern */
s32 func_00193520(void *, void *);              /* extern */

void func_00191748(u8 *arg0, u8 *arg1, s32 arg2) {
    s16 *var_v0;
    s16 temp_a3_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a1_2;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_t1_2;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s5 = arg0 + 0xCC0;
    temp_s1 = arg0 + 0x1160;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    func_00192268(arg1, arg0 + 0xCDC);
    if (arg2 == 0) {
        goto block_4;
    }
    var_a2 = 0x3F;
    var_v0 = arg0 + 0x125C;
loop_2:
    var_a2 -= 1;
    *var_v0 = -1;
    var_v0 -= 4;
    if (var_a2 >= 0) {
        goto loop_2;
    }
    *(s16 *)((u8 *)temp_s1 + 2) = -1;
    goto block_10;
block_4:
    temp_a3 = *(s32 *)((u8 *)arg1 + 0x14);
    if ((u32) (*(s32 *)((u8 *)arg1 + 0x18) - 1) >= 2U) {
        goto block_10;
    }
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x15C)) + 0x6C);
    var_a2_2 = temp_a0 + 1;
    temp_t0 = (temp_a3 < temp_a0) ? (temp_a3 + 0x400) : temp_a3;
    var_v1 = temp_a3 < 0;
    if (var_a2_2 >= temp_t0) {
        goto block_11;
    }
loop_7:
    temp_v0 = var_a2_2 - (((s32) ((var_a2_2 < 0) ? (var_a2_2 + 0x3F) : var_a2_2) >> 6) << 6);
    var_a2_2 += 1;
    *((temp_v0 * 4) + temp_s1) = -1;
    if (var_a2_2 < temp_t0) {
        goto loop_7;
    }
block_10:
    var_v1 = *(s32 *)((u8 *)arg1 + 0x14) < 0;
block_11:
    temp_t0_2 = *(s32 *)((u8 *)arg1 + 0x14) - (((s32) ((var_v1 != 0) ? (*(s32 *)((u8 *)arg1 + 0x14) + 0x3F) : *(s32 *)((u8 *)arg1 + 0x14)) >> 6) << 6);
    temp_t1 = temp_t0_2 * 4;
    temp_v0_2 = temp_t1 + temp_s1;
    *(u16 *)((u8 *)temp_v0_2 + 0) = (u16) *(u16 *)((u8 *)temp_s5 + 0x38);
    if (arg2 == 0) {
        goto block_13;
    }
    *(s16 *)((u8 *)temp_v0_2 + 2) = 0;
    goto block_24;
block_13:
    var_a2_3 = 0;
    if (*(s32 *)((u8 *)arg1 + 0x14) != 0) {
        goto block_20;
    }
    if (*(s16 *)((u8 *)temp_s1 + 2) == -1) {
        goto block_16;
    }
    goto block_21;
block_16:
    *(s16 *)((u8 *)temp_s1 + 2) = 0;
    goto block_24;
block_18:
    *(s16 *)((u8 *)(temp_t1 + temp_s1) + 2) = (s16) ((u16) *(s16 *)((u8 *)temp_v0_3 + 0) + *(u16 *)((u8 *)temp_v0_3 + 2));
    goto block_24;
block_20:
block_21:
    var_v1_2 = temp_t0_2 - 0;
loop_22:
    var_a2_3 += 1;
    temp_a1 = var_v1_2 + 0x3F;
    temp_v0_3 = ((temp_a1 - (((s32) ((temp_a1 < 0) ? (var_v1_2 + 0x7E) : temp_a1) >> 6) << 6)) * 4) + temp_s1;
    if (*(s16 *)((u8 *)temp_v0_3 + 0) != -1) {
        goto block_18;
    }
    var_v1_2 = temp_t0_2 - var_a2_3;
    if (var_a2_3 < 0x40) {
        goto loop_22;
    }
block_24:
    temp_a1_2 = temp_t1 + temp_s1;
    *(u16 *)((u8 *)temp_s5 + 0x3A) = (u16) *(u16 *)((u8 *)temp_a1_2 + 2);
    if (*(s32 *)((u8 *)arg1 + 0x18) != 3) {
        goto block_28;
    }
    if (*(s16 *)((u8 *)temp_a1_2 + 0) == 0) {
        goto block_28;
    }
    temp_t1_2 = *(u8 **)((u8 *)temp_s3 + 0x15C);
    temp_a2 = *(s32 *)((u8 *)temp_t1_2 + 0x6C);
    temp_a3_2 = (u16) *(s16 *)((u8 *)temp_a1_2 + 0) + *(u16 *)((u8 *)temp_a1_2 + 2);
    *(s16 *)((u8 *)(((temp_a2 - (((s32) ((temp_a2 < 0) ? (temp_a2 + 0x3F) : temp_a2) >> 6) << 6)) * 4) + temp_s1) + 2) = temp_a3_2;
    *(s16 *)((u8 *)temp_t1_2 + 0x2E) = temp_a3_2;
    func_001919D0(arg0, temp_t1_2, temp_a2, temp_a3_2);
    func_00193520(arg0, *(u8 **)((u8 *)temp_s3 + 0x15C));
    return;
block_28:
    return;
}
