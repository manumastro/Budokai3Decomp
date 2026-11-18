/* Draft (not built): func_00107DE0 at 0x00107DE0, size 0x78, segment sdk/libmpeg/kfiv_mpeg (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg/kfiv_mpeg/func_00107DE0.s */

s32 func_00107DE0(u8 *arg0, s32 *arg1) {
    s32 (*temp_a3)(s32, s32);
    s32 temp_a2;
    s32 temp_gp;
    s32 var_t1;
    u8 *temp_v0;

    var_t1 = 0;
    if ((arg0 != NULL) && (temp_a2 = *(s32 *)((u8 *)arg0 + 0x40), (temp_a2 != 0))) {
        temp_v0 = temp_a2 + (*arg1 * 0xC);
        temp_a3 = *(s32 (**)(s32, s32))((u8 *)temp_v0 + 0xC);
        if (temp_a3 != NULL) {
            temp_gp = *(s32 *)((u8 *)temp_v0 + 0x14);
            var_t1 = temp_a3(*(s32 *)((u8 *)((*arg1 * 0xC) + temp_a2) + 0x10), temp_a3);
        }
    }
    return var_t1;
}
