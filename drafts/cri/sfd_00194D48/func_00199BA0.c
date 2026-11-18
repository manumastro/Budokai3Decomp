/* Draft (not built): func_00199BA0 at 0x00199BA0, size 0x108, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199BA0.s */

s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */

s32 func_00199BA0(s32 arg0, u8 *arg1) {
    s32 var_t2;
    s64 *temp_a2;
    s64 temp_a0;
    s64 temp_a1;
    s64 temp_v0;
    s64 temp_v1;
    u8 *var_a0;
    u8 *var_t1;
    u8 *var_v0;

    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00011A);
    }
    var_v0 = arg1;
    var_a0 = arg0 + 0x31F8;
    do {
        *(s64 *)((u8 *)var_v0 + 0) = (s64) *(s64 *)((u8 *)var_a0 + 0);
        *(s64 *)((u8 *)var_v0 + 8) = (s64) *(s64 *)((u8 *)var_a0 + 8);
        *(s64 *)((u8 *)var_v0 + 0x10) = (s64) *(s64 *)((u8 *)var_a0 + 0x10);
        *(s64 *)((u8 *)var_v0 + 0x18) = (s64) *(s64 *)((u8 *)var_a0 + 0x18);
        var_a0 += 0x20;
        var_v0 += 0x20;
    } while (var_a0 != (arg0 + 0x32B8));
    var_t2 = 1;
    var_t1 = arg1 + 0x30;
    do {
        temp_a2 = arg1 + 8 + (var_t2 << 5);
        var_t2 += 1;
        *(s64 *)((u8 *)arg1 + 0) = (s64) (*(s64 *)((u8 *)arg1 + 0) + *(s64 *)((u8 *)var_t1 + -0x10));
        temp_a1 = *temp_a2;
        temp_v1 = *(s64 *)((u8 *)arg1 + 8);
        *(s32 *)((u8 *)arg1 + 0x18) = (s32) (*(s32 *)((u8 *)arg1 + 0x18) + *(s32 *)((u8 *)var_t1 + 8));
        *(s64 *)((u8 *)arg1 + 8) = (s64) ((temp_a1 < temp_v1) ? temp_a1 : temp_v1);
        temp_a0 = *(s64 *)((u8 *)var_t1 + 0);
        var_t1 += 0x20;
        temp_v0 = *(s64 *)((u8 *)arg1 + 0x10);
        *(s64 *)((u8 *)arg1 + 0x10) = (s64) ((temp_v0 < temp_a0) ? temp_a0 : temp_v0);
    } while (var_t2 < 4);
    return 0;
}
