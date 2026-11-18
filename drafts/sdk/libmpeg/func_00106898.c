/* Draft (not built): func_00106898 at 0x00106898, size 0x1CC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00106898.c:63: too few arguments to function `func_00106C08'
 * Original: asm/sdk/libmpeg.s */

u32 func_00104728(void *, s32);                 /* extern */
s32 func_00104810(void *, s32);                 /* extern */
s32 func_00106AA0(void *, s32);             /* extern */
s32 func_00106C00(void *);                      /* extern */
s32 func_00106C08(void *, s32, s32 *, s32); /* extern */
extern s32 D_0045D120;

void func_00106898(u8 *arg0) {
    s32 temp_v0;
    u32 temp_v0_2;

    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x1f($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x18($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x27($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x20($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x1f($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x18($sp) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x27($sp) */);
    func_00106C08(M2C_ERROR(/* unknown instruction: sdr $a1, 0x20($sp) */), *(s32 *)((u8 *)(&D_0045D120) + 0x28), &D_0045D120, *(s32 *)((u8 *)(&D_0045D120) + 0x28));
loop_2:
    if ((func_00104810(arg0, 0x18) != 1) && (*(s32 *)((u8 *)arg0 + 0x878) == 0)) {
        func_00106AA0(arg0, 8);
        goto loop_2;
    }
loop_18:
    temp_v0 = func_00104810(arg0, 0x20);
    if (temp_v0 == 0x1B5) {
block_7:
        func_00106C00(arg0);
        temp_v0_2 = func_00104728(arg0, 4);
        *(sp + (((temp_v0_2 > 0xAU) int 0U : temp_v0_2) * 4))(arg0);
        func_00106C08(arg0);
loop_9:
        if (func_00104810(arg0, 0x18) != 1) {
            if (*(s32 *)((u8 *)arg0 + 0x878) != 0) {

            } else {
                func_00106AA0(arg0, 8);
                goto loop_9;
            }
        }
        goto loop_18;
    }
    if (temp_v0 == 0x1B2) {
        if (temp_v0 == 0x1B5) {
            goto block_7;
        }
        func_00106C00(arg0);
        func_00106C08(arg0);
loop_15:
        if (func_00104810(arg0, 0x18) != 1) {
            if (*(s32 *)((u8 *)arg0 + 0x878) != 0) {

            } else {
                func_00106AA0(arg0, 8);
                goto loop_15;
            }
        }
        goto loop_18;
    }
}
