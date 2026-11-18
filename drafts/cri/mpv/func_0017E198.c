/* Draft (not built): func_0017E198 at 0x0017E198, size 0xCC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017E198.s */

s32 func_0017E040(s32);                             /* extern */
s32 func_0017E268(s32, s32, s32);           /* extern */

s32 func_0017E198(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_v0;
    s32 var_s1;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x250;
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x194);
    if (*(s32 *)((u8 *)arg0 + 0x380) != 0) {
        *(s32 *)((u8 *)arg0 + 0x380) = 0;
        *(s32 *)((u8 *)arg0 + 0x384) = (s32) (*(s32 *)((u8 *)arg0 + 0x384) + 1);
        *(s32 *)((u8 *)temp_a1 + 0xC) = (s32) (*(s32 *)((u8 *)temp_a1 + 0xC) + 1);
        if (temp_a2 == 0) {
            return -2;
        }
        *(s32 *)((u8 *)temp_a1 + 0x10) = (s32) (*(s32 *)((u8 *)temp_a1 + 0x10) + 1);
        goto block_4;
    }
block_4:
    var_s1 = (temp_a2 != 0) ? -3 : -2;
loop_5:
    temp_v0 = func_0017E040(arg2);
    if (temp_v0 != 0) {
        if (temp_v0 & arg1) {
            var_s1 = 0;
        } else if (func_0017E268(arg2, 1, 4) == 4) {
            goto loop_5;
        }
    }
    return var_s1;
}
