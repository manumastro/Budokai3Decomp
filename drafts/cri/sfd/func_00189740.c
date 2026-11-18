/* Draft (not built): func_00189740 at 0x00189740, size 0xD8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189740.s */

s32 func_00189818(s32);                             /* extern */
s32 func_00189838(s32);                             /* extern */
s32 func_00189870(void *);                      /* extern */
s32 func_00197EB8(s32, s32, s32, s32 *); /* extern */
s32 func_001A15C0();                            /* extern */
extern s32 D_0048CFD0;

s32 func_00189740(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;
    s32 var_v0_2;
    u8 **temp_s2;
    u8 *temp_v1;

    var_v0 = 0;
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0);
    temp_s2 = *(u8 ***)((u8 *)temp_v1 + 4);
    if (temp_s0 != 0) {
        M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($v1) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x17($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x10($v1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($v1) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($v1) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($a3) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, ($a3) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a3) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a3) */);
        temp_a0 = *(s32 *)((u8 *)temp_v1 + 0x20);
        *(s32 *)((u8 *)(&D_0048CFD0) + 0x18) = temp_a0;
        if (func_00197EB8(temp_a0, M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a3) */), M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a3) */), &D_0048CFD0) != 1) {
            var_v0_2 = func_00189818(temp_s0);
        } else {
            func_00189870(arg0);
            var_v0_2 = func_00189838(temp_s0);
        }
        (*(s32 (**)(u8 **))((u8 *)(*temp_s2) + 0xC))(temp_s2);
        func_001A15C0();
        var_v0 = var_v0_2;
    }
    return var_v0;
}
