/* Draft (not built): func_00102940 at 0x00102940, size 0x250, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/sdk/libmpeg.s */

s32 func_00102238(void *, s32, s32, s32);       /* extern */
s32 func_00104BE8(void *);                      /* extern */
s32 func_00109790(void *, s32 *, s32);  /* extern */
extern s32 D_0045CE58;

s32 func_00102940(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_lo;
    s32 temp_v0;
    u8 *temp_a1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_v0;

    temp_v0 = *(s32 *)((u8 *)arg0 + 0x13C);
    sp0 = arg3 & 1;
    temp_hi = arg1 % temp_v0;
    temp_lo = arg1 / temp_v0;
    if (sp0 == 0) {
        goto block_4;
    }
    var_s2 = arg0 + 0x6D4;
    var_s3 = arg0 + 0x6D0;
    var_s4 = arg0 + 0x6C8;
loop_2:
    if (((u32) *(u32 *)0x1000D400 >> 8) & 1) {
        goto loop_2;
    }
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + (arg0 + 0x6D8)) = 0;
    goto block_9;
block_4:
    if ((u32) (M2C_ERROR(/* Read from unset register $t0 */) - 1) < 3U) {
        goto block_6;
    }
    func_00109790(arg0, &D_0045CE58, M2C_ERROR(/* Read from unset register $t0 */));
    *(s32 *)((u8 *)arg0 + 0x12C) = 1;
    return 0;
block_6:
    func_00102238(arg0, temp_hi * 0x10, temp_lo * 0x10, arg3);
    var_s2 = arg0 + 0x6D4;
    var_s3 = arg0 + 0x6D0;
    var_s4 = arg0 + 0x6C8;
loop_7:
    if (((u32) *(u8 *)0x1000D400 >> 8) & 1) {
        goto loop_7;
    }
    func_00104BE8(arg0);
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + (arg0 + 0x6D8)) = 1;
block_9:
    if (arg2 != 1) {
        goto block_12;
    }
    if (!(arg3 & 2)) {
        goto block_12;
    }
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s2) = arg2;
    goto block_13;
block_12:
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s2) = 0;
block_13:
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s3) = sp0;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x184);
    if (temp_a0 != 3) {
        goto block_15;
    }
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x1D0);
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s4) = *(s32 *)((u8 *)temp_a1 + 0) + (((temp_hi * *(s32 *)((u8 *)temp_a1 + 0x10)) + temp_lo) * 0x180);
    goto block_20;
block_15:
    if (temp_a0 == 2) {
        goto block_17;
    }
    var_v0 = *(u8 **)((u8 *)arg0 + 0x1E0);
    goto block_19;
block_17:
    var_v0 = *(u8 **)((u8 *)arg0 + 0x1F0);
block_19:
    *((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + var_s4) = *(s32 *)((u8 *)var_v0 + 0) + (((temp_hi * *(s32 *)((u8 *)var_v0 + 0x10)) + temp_lo) * 0x180);
block_20:
    return 1;
}
