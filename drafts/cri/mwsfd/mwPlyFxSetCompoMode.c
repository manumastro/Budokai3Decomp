/* Draft (not built): mwPlyFxSetCompoMode at 0x00184D18, size 0x100, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyFxSetCompoMode.s */

s32 func_00181B28(void *);                          /* extern */
s32 func_00183B38();                                /* extern */
s32 func_00184E18(void *, s32);                 /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004668C0;
extern s32 D_004668F8;
extern s32 D_00466940;

void mwPlyFxSetCompoMode(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = arg1;
    if (func_00183B38() != 0) {
        if (*(s32 *)((u8 *)arg0 + 0x190) != 0) {
            if (((*(s32 (**)(u8 *))((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x20))(arg0) == 2) && (var_s0 == 0)) {
                temp_v0 = func_00181B28(arg0);
                var_s0 = (~temp_v0 == 0) ? 0x11 : temp_v0;
            }
            func_00184E18(arg0, var_s0);
            return;
        }
        switch (var_s0) {                           /* irregular */
        case 0x101:
            func_001870E8(&D_004668F8);
            return;
        case 0x0:
            func_001870E8(&D_00466940);
            return;
        }
    } else {
        func_001870E8(&D_004668C0);
    }
}
