/* Draft (not built): func_0018EEE0 at 0x0018EEE0, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018EEE0.s */

s32 func_0018AFB8(void *, s32, s32, s32);       /* extern */
void *func_0018E078();                              /* extern */

s32 func_0018EEE0(u8 *arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a2;
    u8 *temp_v0;

    temp_v0 = func_0018E078();
    var_a2 = *(s32 *)((u8 *)arg0 + 8);
    temp_a3 = *(s32 *)((u8 *)(arg0 + 0x9A0) + 0x58);
    if (var_a2 <= 0) {
        var_a2 = *(s32 *)((u8 *)temp_v0 + 0xC);
    }
    temp_a2 = (var_a2 <= 0) ? temp_a3 : var_a2;
    return (func_0018AFB8(arg0, 0, temp_a2, temp_a3) < ((temp_a2 >= temp_a3) ? temp_a3 : temp_a2)) == 0;
}
