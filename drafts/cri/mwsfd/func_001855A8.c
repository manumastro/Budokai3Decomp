/* Draft (not built): func_001855A8 at 0x001855A8, size 0xA8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001855A8.c:25: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001855A8.s */

s32 func_0016F290(void *, s32 *, s32 *, s32 *, s32, s32); /* extern */
s32 func_0019F810(s32, s32, s32);               /* extern */
extern s32 D_00466B98;
extern s32 D_00466BA0;

void func_001855A8(u8 *arg0) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_t0;
    u8 *temp_v1;

    temp_v1 = arg0 + 0x1A8;
    temp_t0 = *(s32 *)((u8 *)temp_v1 + 4);
    temp_s0 = *(s32 *)((u8 *)arg0 + 0xAC);
    if (temp_t0 == 0) {
        func_0019F810(temp_s0, 0, 0);
        return;
    }
    if (func_0016F290(sp, &D_00466B98, &D_00466BA0, &sp10, temp_t0, *(s32 *)((u8 *)temp_v1 + 8)) == 0) {
        func_0019F810(temp_s0, 0, 0);
        return;
    }
    func_0019F810(temp_s0, sp10, sp14);
}
