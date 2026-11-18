/* Draft (not built): func_00162250 at 0x00162250, size 0xC4, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: rror: d_00162250.c:20: too few arguments to function `strlen'
 * Original: asm/nonmatchings/cri/adx_00161B98/func_00162250.s */

s32 func_00161D20(s32 *, s32, s32);         /* extern */
s32 func_00162118(s32);                         /* extern */
s32 func_00162318(s32, s32);                        /* extern */
s32 memcpy(s8 *, s32, s32);                     /* extern */
s32 strlen();                                       /* extern */
extern s32 D_00462270;
extern s32 D_00462298;
extern s8 D_0047ECD0;

void func_00162250(s32 arg0) {
    s32 temp_a2;
    s32 temp_v0;

    if (arg0 == 0) {
        func_00161D20(&D_00462270);
        return;
    }
    temp_v0 = strlen();
    if (temp_v0 == 0) {
        D_0047ECD0 = 0;
        return;
    }
    func_00162118(arg0);
    temp_a2 = temp_v0 + 1;
    if (func_00162318(arg0, temp_v0) == 1) {
        memcpy(&D_0047ECD0, arg0, temp_a2);
        return;
    }
    func_00161D20(&D_00462298, arg0, temp_a2);
}
