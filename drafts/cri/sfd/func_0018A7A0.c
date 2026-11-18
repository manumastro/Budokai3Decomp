/* Draft (not built): func_0018A7A0 at 0x0018A7A0, size 0xA8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_0018A7A0.s */

s32 func_0018A848();
s32 func_0018A890();
s32 func_0018D650();
s32 func_0019C188();

void func_0018A7A0(s32 arg0, s32 arg1) {
    s32 var_a2;

    if (func_0018A848(arg1) != 0) {
        func_0018D650(arg0, 0xFF000408);
        return;
    }
    var_a2 = 0;
    if (func_0019C188(arg0, 1) == 0) {
        var_a2 = 1;
        if (func_0019C188(arg0, 2, 0) == 0) {
            var_a2 = (func_0019C188(arg0, 3, 1) != 0) ? 2 : 0;
        }
    }
    func_0018A890(arg0, arg1, var_a2);
}
