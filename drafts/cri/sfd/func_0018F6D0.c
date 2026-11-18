/* Draft (not built): func_0018F6D0 at 0x0018F6D0, size 0xAC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: rror: d_0018F6D0.c:29: too few arguments to function `memset'
 * Original: asm/nonmatchings/cri/sfd/func_0018F6D0.s */

s32 memset(s32 *, s32, s32, s32 *); /* extern */
extern s32 D_00492988;
extern s32 D_004929B0;
extern s32 D_004929B8;

void func_0018F6D0(u8 *arg0) {
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($a0) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a3) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a3) */);
    *(s32 *)((u8 *)(&D_00492988) + 0x20) = (s32) *(s32 *)((u8 *)arg0 + 0x20);
    *(s32 *)((u8 *)(&D_00492988) + 0x10) = (s32) ((*(s32 *)((u8 *)(&D_00492988) + 0x10) + 0x3F) & ~0x3F);
    *(s32 *)((u8 *)(&D_00492988) + 0x20) = (s32) ((*(s32 *)((u8 *)(&D_00492988) + 0x20) + 0x3F) & ~0x3F);
    memset(&D_004929B0, 0, 8, &D_00492988);
    memset(&D_004929B8, 0, 0x40);
}
