/* Draft (not built): func_00107E58 at 0x00107E58, size 0x74, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00107E58.c:18: warning: passing arg 3 makes integer from pointer without a cast
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107E58.s */

s32 func_00107E58(u8 *arg0) {
    s32 sp0;
    s32 (*temp_a3)(u8 *, s32, s32);
    s32 temp_gp;
    u8 *temp_a2;

    sp0 = 1;
    if (arg0 != NULL) {
        temp_a2 = *(u8 **)((u8 *)arg0 + 0x40);
        if (temp_a2 != NULL) {
            temp_a3 = *(s32 (**)(u8 *, s32, s32))((u8 *)temp_a2 + 0x18);
            if (temp_a3 != NULL) {
                temp_gp = *(s32 *)((u8 *)temp_a2 + 0x20);
                temp_a3(sp, *(s32 *)((u8 *)((sp0 * 0xC) + temp_a2) + 0x10), temp_a3);
            }
        }
    }
    return 1;
}
