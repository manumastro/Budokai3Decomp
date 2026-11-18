/* Draft (not built): func_00162738 at 0x00162738, size 0x64, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00161B98/func_00162738.s */

s32 memcpy(s8 *, s8 *, s32);                    /* extern */
s32 strlen(s8 *);                                   /* extern */
extern s8 D_0047ECD0;

void func_00162738(s8 *arg0) {
    s32 temp_a2;

    temp_a2 = strlen(&D_0047ECD0) + 1;
    if (D_0047ECD0 == 0) {
        *arg0 = 0;
        return;
    }
    memcpy(arg0, &D_0047ECD0, temp_a2);
}
