/* Draft (not built): func_00194468 at 0x00194468, size 0xF8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00194468.c:41: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00194468.s */

s32 *func_0017CB08(s32, void *, s32 *, void *, s32); /* extern */
s32 *func_0018D650(void *, s32);                /* extern */
s32 *func_00194560();                               /* extern */

s32 *func_00194468(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 sp10;
    s32 *temp_a0;
    s32 *var_v0;
    u8 *temp_v1;

    *arg2 = 0;
    var_v0 = func_00194560();
    temp_a0 = var_v0;
    if (temp_a0 != NULL) {
        var_v0 = NULL;
        if (*(s32 *)((u8 *)temp_a0 + 0) != 0) {
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x13($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, 0xc($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x1b($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, 0x14($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x23($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x1c($a0) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0x2b($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x24($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0xd03($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0xcfc($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0xd0b($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, 0xd04($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0xd13($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0xd0c($s1) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0xd1b($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $a2, 0xd14($s1) */);
            M2C_ERROR(/* unknown instruction: ldl $v0, 0x33($a0) */);
            M2C_ERROR(/* unknown instruction: ldr $v0, 0x2c($a0) */);
            M2C_ERROR(/* unknown instruction: sdl $v0, 0xd23($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $v0, 0xd1c($s1) */);
            *(s32 *)((u8 *)arg0 + 0xD24) = (s32) *(s32 *)((u8 *)temp_a0 + 0x34);
            temp_v1 = temp_a0 + 0x38;
            var_v0 = func_0017CB08(*arg1, sp, &sp10, temp_v1, *(s32 *)((u8 *)temp_v1 + 0x200));
            if (var_v0 != NULL) {
                return func_0018D650(arg0, 0xFF000F1B);
            }
            *arg2 = 1;
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
