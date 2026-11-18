/* Draft (not built): func_00181A20 at 0x00181A20, size 0x108, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00181A20.c:23: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00181A20.s */

s32 func_001819F0(s32);                             /* extern */
s32 func_00181B40(s32);                             /* extern */
s32 func_0019D5D8(s32, s32);                        /* extern */
s32 func_0019D6A0(s32);                         /* extern */
s32 func_0019D7F0(s32, void *);                     /* extern */

void func_00181A20(s32 arg0, u32 arg1, u8 *arg2) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s4;

    *(s32 *)((u8 *)arg2 + 0x1C) = -1;
    if ((arg1 >= 0x800U) && (var_s4 = 2, (arg0 != 0))) {
        var_s2 = 0x800;
        var_a0 = arg0 + 0x800;
loop_3:
        temp_v0 = func_0019D5D8(var_a0, arg1 - var_s2);
        var_s2 += 0x800;
        if (temp_v0 != 0) {
            if ((func_0019D7F0(temp_v0, sp) == 0) || (sp0 == 0)) {
                *(s32 *)((u8 *)arg2 + 0x1C) = -1;
                *(s32 *)((u8 *)arg2 + 0x20) = -1;
                func_0019D6A0(temp_v0);
                goto block_9;
            }
            *(s32 *)((u8 *)arg2 + 0x1C) = func_001819F0(temp_v0);
            *(s32 *)((u8 *)arg2 + 0x20) = func_00181B40(temp_v0);
            func_0019D6A0(temp_v0);
            return;
        }
block_9:
        var_s4 += 1;
        var_a0 = arg0 + var_s2;
        if (var_s4 >= 4) {

        } else {
            goto loop_3;
        }
    }
}
