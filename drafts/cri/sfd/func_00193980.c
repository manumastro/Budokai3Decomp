/* Draft (not built): func_00193980 at 0x00193980, size 0x198, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00193980.s */

s32 func_0017C1F0();
s32 func_0017E7E0();
s32 func_0017E9E8();
s32 func_0018D650();
s32 func_00193B18();
s32 func_001940A8();
s32 func_00195878();
s32 func_001999E0();
extern s32 func_00193EF8;

s32 func_00193980(u8 *arg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 var_v0;

    temp_s2 = arg0 + 0x2040;
    var_v0 = func_001999E0((u8 *)5);
    if (var_v0 != 0) {
        *(s32 *)((u8 *)arg0 + 0x1C70) = temp_s2;
        var_v0 = func_00193B18(arg0, temp_s2);
        if (var_v0 == 0) {
            func_00195878(arg0);
            temp_v0 = func_0017E7E0();
            if (temp_v0 == 0) {
                return func_0018D650(arg0, 0xFF000F0A, arg0);
            }
            if (func_0017C1F0(temp_v0, &func_00193EF8, arg0) != 0) {
                func_001940A8(temp_v0, 0);
                return func_0018D650(arg0, 0xFF000F0B);
            }
            func_0017E9E8(temp_v0, 1, func_001999E0(arg0, 0));
            func_0017E9E8(temp_v0, 2, func_001999E0(arg0, 1));
            func_0017E9E8(temp_v0, 3, 0);
            func_0017E9E8(temp_v0, 4, 0);
            func_0017E9E8(temp_v0, 5, 0);
            func_0017E9E8(temp_v0, 6, *(s32 *)((u8 *)arg0 + 0x38));
            func_0017E9E8(temp_v0, 7, 0x7FFFFFFF);
            func_0017E9E8(temp_v0, 8, 0);
            func_0017E9E8(temp_v0, 9, 0);
            *(s32 *)((u8 *)arg0 + 0x2040) = temp_v0;
            var_v0 = 0;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
