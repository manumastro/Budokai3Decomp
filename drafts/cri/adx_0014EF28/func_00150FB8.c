/* Draft (not built): func_00150FB8 at 0x00150FB8, size 0x100, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00150FB8.c:35: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00150FB8.s */

s32 func_001503A0(void *, s32, u16 *, u16 *); /* extern */
s32 sprintf(void *, s32 *, s32);            /* extern */
extern u16 D_0040109C;
extern u16 D_0040109E;
extern u16 D_004010A0;
extern s32 D_004604A0;

s32 func_00150FB8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 *temp_s0;
    u16 *temp_s1;
    u16 *temp_s2;
    u32 temp_a2;

    temp_s1 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t2 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_a2 = arg2 & 0xFF;
    if ((u32) (arg1 & 0xFF) >= 4U) {
        if (temp_a2 < 0x10U) {
            if (temp_a2 >= 8U) {
                if ((*(s32 *)((u8 *)arg0 + 0xA0) == 0) && (*(s16 *)((u8 *)arg0 + 0xA4) == 0)) {
                    *(s32 *)((u8 *)arg0 + 0xA0) = (u16) D_0040109C;
                    *(u16 *)((u8 *)arg0 + 0xA2) = (u16) D_0040109E;
                    *(s16 *)((u8 *)arg0 + 0xA4) = (s16) D_004010A0;
                }
                *temp_s0 = (u16) *(s32 *)((u8 *)arg0 + 0xA0);
                *temp_s1 = *(u16 *)((u8 *)arg0 + 0xA2);
                *temp_s2 = (u16) *(s16 *)((u8 *)arg0 + 0xA4);
            } else {
                goto block_11;
            }
        } else {
            sprintf(sp, &D_004604A0, arg3);
            func_001503A0(sp, 8, temp_s0, temp_s1);
        }
    } else {
block_11:
        *temp_s0 = 0;
        *temp_s1 = 0;
        *temp_s2 = 0;
    }
    return 0;
}
