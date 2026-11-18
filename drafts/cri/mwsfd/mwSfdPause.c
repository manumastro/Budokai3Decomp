/* Draft (not built): mwSfdPause at 0x00182DB0, size 0x11C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00182DB0.c:52: too few arguments to function `func_001870E8'
 * Original: asm/nonmatchings/cri/mwsfd/mwSfdPause.s */

s32 func_001822A8();                                /* extern */
s32 func_00182420(s32);                     /* extern */
s32 func_00183B38();                                /* extern */
s32 func_00186A10(void *, s8);                  /* extern */
s32 func_001870E8(s32 *, s32 *);        /* extern */
s32 func_00187E18(void *);                      /* extern */
s32 func_00196350(s32, s8);                         /* extern */
s32 func_00199940(s32, s32, void *);            /* extern */
extern s32 D_00466038;
extern s32 D_00466060;
extern s32 D_00466088;
extern s32 D_00466090;

void mwSfdPause(u8 *arg0, s8 arg1) {
    s32 *var_a1;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;

    if (func_00183B38() != 0) {
        temp_s3 = *(s32 *)((u8 *)arg0 + 0x40);
        if ((*(s8 *)((u8 *)arg0 + 0x76) != 0) || (arg1 != 0)) {
            temp_v0 = func_001822A8();
            if (temp_v0 == 1) {
                temp_s1 = *(s32 *)((u8 *)arg0 + 0xC);
                if (temp_s1 == temp_v0) {
                    if (func_00199940(temp_s3, 6, sp) == 0) {
                        if (sp0 == temp_s1) {
                            func_00187E18(arg0);
                        }
                    } else {
                        func_00187E18(arg0);
                    }
                }
            }
            if (func_00196350(temp_s3, arg1) != 0) {
                func_00182420(-0x136);
                if (arg1 == 1) {
                    var_a1 = &D_00466088;
                } else {
                    var_a1 = &D_00466090;
                }
                func_001870E8(&D_00466060, var_a1);
            }
            func_00186A10(arg0 + 0x294, arg1);
            *(s8 *)((u8 *)arg0 + 0x76) = arg1;
        }
        return;
    }
    func_001870E8(&D_00466038);
}
