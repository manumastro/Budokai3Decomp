/* Draft (not built): func_001A1498 at 0x001A1498, size 0x124, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001A1498.c:40: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfx/func_001A1498.s */

s32 func_001A18C8(s32);                     /* extern */
extern s32 D_00427334;
extern s32 D_00427338;
extern s32 D_0042733C;
extern s32 D_00467F70;
extern s32 D_00467F80;
extern s32 D_00492A78;
extern s32 D_00492A88;
extern s32 *D_00492A98;
extern s32 D_00492A9C;

void func_001A1498(s32 arg0) {
    s32 *temp_a2;
    s32 temp_a1;
    s32 temp_v1;

    D_00427334 += 1;
    if (D_00427334 >= 2) {
        if (D_00427338 != arg0) {
            goto block_4;
        }
    } else {
block_4:
        D_00427338 = arg0;
        if (arg0 == -1) {
            func_001A18C8(1);
            return;
        }
        func_001A18C8(0x8CA00);
        temp_a1 = arg0 * 4;
        temp_a2 = *(&D_00467F70 + temp_a1);
        temp_v1 = *temp_a2;
        D_0042733C = temp_v1;
        if ((temp_v1 & 0xC7) != 0x82) {
            **(&D_00467F80 + temp_a1) = 0;
            *temp_a2 = 0x82;
        }
        *(s16 *)((u8 *)(&D_00492A78) + 8) = (s16) **(temp_a1 + &D_00467F80);
        *(s64 *)((u8 *)(&D_00492A78) + 0) = 0;
        *(s64 *)((u8 *)(&D_00492A88) + 0) = (s64) *(s64 *)((u8 *)(&D_00492A78) + 0);
        *(s64 *)((u8 *)(&D_00492A88) + 8) = (s64) *(s16 *)((u8 *)(&D_00492A78) + 8);
        D_00492A98 = &D_00492A78;
        D_00492A9C = 0;
    }
}
