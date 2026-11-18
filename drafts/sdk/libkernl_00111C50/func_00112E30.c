/* Draft (not built): func_00112E30 at 0x00112E30, size 0x208, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00112E30.s */

s32 func_00112A60();                                /* extern */
s32 func_00112B60();                                /* extern */
s32 memcpy(void *, s32, s32);                   /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_00474E00;
extern s32 D_00475000;

s32 func_00112E30(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 *var_a1;
    s32 var_a3;
    s32 var_v0;
    u8 *var_a0;

    var_v0 = 0xFFFF0000;
    if (func_00112A60() < 0) {
        goto block_20;
    }
    if (func_00112B60() == 0) {
        goto block_3;
    }
    return 0xFFFEFFFC;
block_3:
    *(s32 *)((u8 *)(&D_00474E00) + 0) = arg0;
    if (arg2 == 0) {
        goto block_13;
    }
    if (arg1 < 0xFD) {
        goto block_12;
    }
    var_a0 = &D_00474E00 + 0x104;
    var_a3 = arg2;
    if (!((arg2 | (s32) var_a0) & 7)) {
        goto block_9;
    }
    var_a1 = (s32 *)0x470000;
loop_7:
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a0) */);
    var_a3 += 0x20;
    var_a0 += 0x20;
    if (var_a3 != (arg2 + 0xE0)) {
        goto loop_7;
    }
    goto block_11;
block_9:
    var_a1 = &D_00475000;
loop_10:
    *(s64 *)((u8 *)var_a0 + 0) = (s64) *(s64 *)((u8 *)var_a3 + 0);
    *(s64 *)((u8 *)var_a0 + 8) = (s64) *(s64 *)((u8 *)var_a3 + 8);
    *(s64 *)((u8 *)var_a0 + 0x10) = (s64) *(s64 *)((u8 *)var_a3 + 0x10);
    *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_a3 + 0x18);
    var_a3 += 0x20;
    var_a0 += 0x20;
    if (var_a3 != (arg2 + 0xE0)) {
        goto loop_10;
    }
block_11:
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, ($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a0) */);
    *(s32 *)((u8 *)var_a0 + 0x18) = M2C_UNALIGNED32(*(s32 *)((u8 *)var_a3 + 0x18));
    *(s32 *)((u8 *)(&D_00474E00) + 4) = 0xFC;
    goto block_15;
block_12:
    memcpy(&D_00474E00 + 0x104, arg2, arg1);
    *(s32 *)((u8 *)(&D_00474E00) + 4) = arg1;
    goto block_14;
block_13:
    *(s32 *)((u8 *)(&D_00474E00) + 4) = 0;
block_14:
    var_a1 = &D_00475000;
block_15:
    if (sceSifCallRpc(var_a1, 7, 0, &D_00474E00, 0) < 0) {
        goto block_17;
    }
    goto block_19;
block_17:
    return 0xFFFEFFFF;
block_19:
    var_v0 = *(s32 *)((u8 *)(&D_00474E00) + 0);
    *arg3 = *(s32 *)((u8 *)(&D_00474E00) + 4);
block_20:
    return var_v0;
}
