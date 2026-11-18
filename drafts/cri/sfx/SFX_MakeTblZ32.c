/* Draft (not built): SFX_MakeTblZ32 at 0x0019F2B8, size 0x68, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/SFX_MakeTblZ32.s */

s32 func_0019F0F0(void *, s32, s32 *);      /* extern */
s32 func_0019F6D0(void *, s32, s32 *);      /* extern */
s32 func_001A0858(s32);                             /* extern */
extern s32 D_00467CB8;

void SFX_MakeTblZ32(u8 *arg0, s32 arg1) {
    if (func_001A0858(*(s32 *)((u8 *)arg0 + 0x24)) != 1) {
        func_0019F6D0(arg0, arg1, &D_00467CB8);
        return;
    }
    func_0019F0F0(arg0, arg1, &D_00467CB8);
}
