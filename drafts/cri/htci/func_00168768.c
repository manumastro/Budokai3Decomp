/* Draft (not built): func_00168768 at 0x00168768, size 0x108, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168768.s */

s32 func_00164388(s32);                         /* extern */
s32 func_001648B0();                            /* extern */
s32 func_00167C60();                            /* extern */
s32 func_00167C90(s32 *);                   /* extern */
s32 func_00167EA0();                            /* extern */
s32 func_00168870(void *);                      /* extern */
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_00413D14;
extern s32 D_00463B70;
extern s32 D_00463B88;

void func_00168768(u8 *arg0) {
    s32 temp_a0;
    s32 var_s2;
    s8 temp_v1;

    var_s2 = 0;
    if (arg0 == NULL) {
        func_00167C90(&D_00463B70);
        return;
    }
    if ((u8) *(u8 *)((u8 *)arg0 + 2) >= 2U) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 0x2C);
        if (temp_a0 != 0) {
            func_00164388(temp_a0);
        }
loop_8:
        func_001648B0();
        func_00167EA0();
        func_00168870(arg0);
        temp_v1 = (s8) *(u8 *)((u8 *)arg0 + 2);
        if (temp_v1 == 2) {
            var_s2 += 1;
            if (var_s2 > 0x63FFF6) {
                if (D_00413D14 != temp_v1) {
                    scePrintf(&D_00463B88);
                }
            } else {
                func_00167C60();
                goto loop_8;
            }
        }
        *(s32 *)((u8 *)arg0 + 0x28) = 0;
        *(u8 *)((u8 *)arg0 + 2) = 0U;
    }
}
