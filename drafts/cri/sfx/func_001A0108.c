/* Draft (not built): func_001A0108 at 0x001A0108, size 0x80, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001A0108.c:18: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfx/func_001A0108.s */

s32 func_0016F290(void *, s32 *, s32, s32);     /* extern */

void func_001A0108(u8 *arg0, s32 *arg3) {
    s32 sp10;
    s32 *temp_s1;
    s32 temp_v1;
    u8 *temp_a0;

    temp_a0 = arg0 + 0x28;
    temp_s1 = M2C_ERROR(/* Read from unset register $t0 */);
    if (*(s32 *)((u8 *)arg0 + 0x28) == 1) {
        temp_v1 = *(s32 *)((u8 *)temp_a0 + 4);
        if (temp_v1 != 0) {
            func_0016F290(sp, &sp10, temp_v1, *(s32 *)((u8 *)temp_a0 + 8));
            *arg3 = sp10;
            *temp_s1 = sp14;
            return;
        }
        goto block_4;
    }
block_4:
    *arg3 = 0;
    *temp_s1 = 0;
}
