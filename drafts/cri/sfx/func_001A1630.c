/* Draft (not built): func_001A1630 at 0x001A1630, size 0x124, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001A1630.c:32: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfx/func_001A1630.s */

extern s32 D_00427334;
extern s32 D_00427338;
extern s32 D_00467F80;
extern s32 D_00492A78;
extern s32 D_00492A88;
extern s32 *D_00492A98;
extern s32 D_00492A9C;

s32 func_001A1630(void) {
    s32 var_a1;
    u16 temp_a2;
    u32 temp_a2_2;

    if ((D_00427334 <= 0) || (D_00427338 == -1)) {
        return 0;
    }
    D_00492A9C += 1;
    if (D_00492A9C == 1) {
        *(s64 *)((u8 *)(&D_00492A88) + 0) = (s64) *(s64 *)((u8 *)(&D_00492A78) + 0);
        *(s64 *)((u8 *)(&D_00492A88) + 8) = (s64) *(s64 *)((u8 *)(&D_00492A78) + 8);
        D_00492A98 = &D_00492A88;
        temp_a2 = **(&D_00467F80 + (D_00427338 * 4)) & 0xFFFF;
        if (temp_a2 < (u16) *(s64 *)((u8 *)(&D_00492A78) + 8)) {
            *(s64 *)((u8 *)(&D_00492A78) + 0) = (s64) (*(s64 *)((u8 *)(&D_00492A78) + 0) + 0x10000);
        }
        *(s64 *)((u8 *)(&D_00492A78) + 8) = temp_a2;
        D_00492A98 = &D_00492A78;
        var_a1 = temp_a2 + *(s64 *)((u8 *)(&D_00492A78) + 0);
    } else {
        temp_a2_2 = **(&D_00467F80 + (D_00427338 * 4)) & 0xFFFF;
        var_a1 = temp_a2_2 + *(s64 *)((u8 *)D_00492A98 + 0);
        if (temp_a2_2 < (u16) *(u16 *)((u8 *)D_00492A98 + 8)) {
            var_a1 += 0x10000;
        }
    }
    D_00492A9C -= 1;
    return var_a1;
}
