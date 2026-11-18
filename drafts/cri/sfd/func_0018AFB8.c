/* Draft (not built): func_0018AFB8 at 0x0018AFB8, size 0x9C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0018AFB8.c:23: parse error before "int"
 * Original: asm/nonmatchings/cri/sfd/func_0018AFB8.s */

s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */

s32 func_0018AFB8(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 var_s1;
    u8 **temp_v0;
    u8 *temp_s0;

    temp_s0 = arg0 + (arg1 * 0x74) + 0x1290;
    func_0018D908(sp);
    var_s1 = *(s32 *)((u8 *)temp_s0 + 0x20);
    temp_s2 = *(s32 *)((u8 *)temp_s0 + 0x24);
    if (var_s1 == 0) {
        if (temp_s2 != 0) {
            temp_v0 = *(u8 ***)((u8 *)temp_s0 + 4);
            var_s1 = temp_s2 + (*(s32 (**)(u8 **, s32))((u8 *)(*temp_v0) + 0x24))(temp_v0, 1);
        }
    }
    func_0018D920(sp);
    return (var_s1 < 0) int 0x7FFFFFFF : var_s1;
}
