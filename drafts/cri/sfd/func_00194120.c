/* Draft (not built): func_00194120 at 0x00194120, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00194120.c:22: warning: passing arg 3 of `func_001941C0' from incompatible pointer type
 * Original: asm/nonmatchings/cri/sfd/func_00194120.s */

s32 func_001941C0(s32, s32, void **);           /* extern */
s32 func_00194798();                                /* extern */
s32 func_00194968(s32, void *);                     /* extern */

s32 func_00194120(s32 arg0, u8 **arg1) {
    s32 temp_v0;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_s2 = arg0 + 0xCC0;
    if (func_00194798() == -1) {
        *arg1 = NULL;
        return 0;
    }
    temp_v0 = func_00194968(arg0, sp);
    if (temp_v0 == 0) {
        *arg1 = NULL;
        return temp_v0;
    }
    func_001941C0(arg0, temp_v0, arg1);
    temp_v1 = *arg1;
    *(s32 *)((u8 *)temp_s2 + 0x270) = (s32) *(s32 *)((u8 *)temp_v1 + 0x14);
    *(s32 *)((u8 *)temp_s2 + 0x274) = (s32) *(s32 *)((u8 *)temp_v1 + 0x18);
    return 0;
}
