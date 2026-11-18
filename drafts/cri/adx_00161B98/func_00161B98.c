/* Draft (not built): func_00161B98 at 0x00161B98, size 0xF4, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00161B98/func_00161B98.s */

u32 func_00153728(s32, s32, s32, void *, s32);      /* extern */
u32 func_00154018(s32, s32, s32, void *, void *, s32, s32); /* extern */
s32 func_00161B88();                            /* extern */

void func_00161B98(u8 *arg0) {
    s32 var_v1;
    u32 temp_v0;

    var_v1 = *(s32 *)((u8 *)arg0 + 0xC);
    if (var_v1 == 1) {
        var_v1 = 2;
        *(s32 *)((u8 *)arg0 + 0xC) = 2;
    }
    if (var_v1 == 2) {
        if (*(s32 *)((u8 *)arg0 + 0x14) != 1) {
            temp_v0 = func_00154018(*(s32 *)((u8 *)arg0 + 0x18), *(s32 *)((u8 *)arg0 + 0x1C), *(s32 *)((u8 *)arg0 + 0x20), arg0 + 0x28, arg0 + 0x34, (s32) *(s16 *)((u8 *)arg0 + 0x36), (s32) *(s16 *)((u8 *)arg0 + 0x38));
            *(u32 *)((u8 *)arg0 + 0x10) = temp_v0;
            if ((temp_v0 - (((s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1) * 2)) == 1) {
                func_00161B88();
            }
        } else {
            *(u32 *)((u8 *)arg0 + 0x10) = func_00153728(*(s32 *)((u8 *)arg0 + 0x18), *(s32 *)((u8 *)arg0 + 0x1C), *(s32 *)((u8 *)arg0 + 0x20), arg0 + 0x28, (s32) *(s16 *)((u8 *)arg0 + 0x38));
        }
        *(s32 *)((u8 *)arg0 + 0xC) = 3;
    }
}
