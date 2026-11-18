/* Draft (not built): func_00173580 at 0x00173580, size 0x1BC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00173580.c:25: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mpv/func_00173580.s */

s32 func_0016F050(s32 *, s32, s32 *, s32 *); /* extern */
s32 func_00173A78(s32, s32);                        /* extern */
s32 func_001742A8(s32, s32);                        /* extern */
s32 func_001743C8(s32, s32);                        /* extern */
s32 func_00174798(s32, s32);                        /* extern */
s32 func_001777F0(s32, s32);                        /* extern */
s32 func_00177D48(s32, s32);                        /* extern */
u32 func_0017E040(void **);                         /* extern */

void func_00173580(s32 arg0, u8 **arg1) {
    s32 sp10;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v0;

loop_25:
    temp_v0 = func_0017E040(arg1);
    if (temp_v0 != 0) {
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*arg1) + 0x18))(arg1, 1, 0x7FFFFFFF, sp);
        var_v1 = 0;
        switch (temp_v0) {                          /* irregular */
        case 0x40:
            var_v0 = func_00173A78(arg0, sp0);
block_21:
            var_v1 = var_v0;
            break;
        case 0x80:
            var_v0 = func_001742A8(arg0, sp0);
            goto block_21;
        case 0x20:
            var_v0 = func_001743C8(arg0, sp0);
            goto block_21;
        case 0x10:
            var_v0 = func_00174798(arg0, sp0);
            goto block_21;
        case 0x8:
            var_v0 = func_001777F0(arg0, sp0);
            goto block_21;
        case 0x4:
            var_v0 = func_00177D48(arg0, sp0);
            goto block_21;
        }
        if (var_v1 == 0) {
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, sp);
            return;
        }
        func_0016F050(sp, var_v1 - sp0, sp, &sp10);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*arg1) + 0x20))(arg1, 0, sp);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*arg1) + 0x1C))(arg1, 1, &sp10);
        goto loop_25;
    }
}
