/* Draft (not built): func_001A0E48 at 0x001A0E48, size 0xE0, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001A0E48.c:21: too few arguments to function `func_00128040'
 * Original: asm/nonmatchings/cri/sfx/func_001A0E48.s */

s32 func_00128040(s32, s32, s32, s32 *); /* extern */
extern s32 D_00467F60;

void func_001A0E48(s32 arg0, u8 *arg1) {
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x7($t2) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, ($t2) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x7($sp) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, ($sp) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($t1) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($t1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, ($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x7($s2) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, ($s2) */);
    func_00128040(arg0 + 2, *(sp + (*(s32 *)((u8 *)arg1 + 0) * 4)), 1, &D_00467F60);
    func_00128040(arg0 + 3, (&sp10[0])[*(s32 *)((u8 *)arg1 + 4)], 1);
    func_00128040(arg0 + 4, (&sp20[0])[*(s32 *)((u8 *)arg1 + 8)], 1);
}
