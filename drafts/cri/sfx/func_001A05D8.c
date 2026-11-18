/* Draft (not built): func_001A05D8 at 0x001A05D8, size 0x84, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A05D8.s */

s32 func_001A0188(s32);                         /* extern */
s32 func_001A0660(void *, s32, s32);            /* extern */

void func_001A05D8(u8 *arg0, s32 arg3) {
    s32 (*temp_v0)(s32, s32, s32, f32, f32);
    s32 temp_s1;

    temp_s1 = arg3 + 0x400;
    func_001A0188(temp_s1);
    temp_v0 = *(s32 (**)(s32, s32, s32, f32, f32))((u8 *)arg0 + 0x44);
    if (temp_v0 == NULL) {
        func_001A0660(arg0, temp_s1, arg3);
        return;
    }
    temp_v0(temp_s1, arg3, arg3, *(f32 *)((u8 *)arg0 + 0x3C), *(f32 *)((u8 *)arg0 + 0x40));
}
