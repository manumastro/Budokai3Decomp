/* Draft (not built): func_0018AB70 at 0x0018AB70, size 0x14C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018AB70.s */

s32 func_0018ACC0();
s32 func_0018AE48();
s32 func_0018D650();

s32 func_0018AB70(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s7;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_s2;

    var_v0 = 0;
    var_s7 = 0;
    temp_a0 = arg0 + 0x1280 + (arg1 * 0x74);
    temp_s2 = temp_a0 + 0x10;
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 4);
    if (arg2 != 0) {
        var_v0 = 0;
        if (*(s32 *)((u8 *)temp_a0 + 4) != 0) {
            if (temp_s1 == 0) {
                return 0;
            }
            temp_v0 = func_0018AE48(temp_s1, arg3);
            if (temp_v0 < arg2) {
                temp_s0 = arg2 - temp_v0;
                if (func_0018AE48(temp_s1, arg3, temp_s0) < temp_s0) {
                    var_s7 = func_0018D650(arg0, 0xFF00040B);
                }
            }
            if (arg3 != 1) {
                temp_v0_2 = *(s32 *)((u8 *)temp_s2 + 0x20);
                if (temp_v0_2 >= 0) {
                    *(s32 *)((u8 *)temp_s2 + 0x20) = (s32) (temp_v0_2 + arg2);
                }
            } else {
                if (arg1 == arg3) {
                    func_0018ACC0(temp_s2);
                }
                temp_v0_3 = *(s32 *)((u8 *)temp_s2 + 0x24);
                if (temp_v0_3 >= 0) {
                    *(s32 *)((u8 *)temp_s2 + 0x24) = (s32) (temp_v0_3 + arg2);
                }
            }
            var_v0 = var_s7;
            *(s32 *)((u8 *)arg0 + 0x44) = 1;
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
