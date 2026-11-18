/* Draft (not built): func_001643F0 at 0x001643F0, size 0x10C, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/srd/func_001643F0.s */

s32 func_001198F0();
s32 func_00164D38();
s32 func_0016FFA0();
s32 func_00170018();
s32 scePrintf();
extern s32 D_004115E0;
extern s32 D_004115E4;
extern s32 D_004115EC;
extern s32 D_00462F38;

s32 func_001643F0(u8 *arg0) {
    s32 var_s0;

    if ((D_004115E4 != 0) && (*(s8 *)((u8 *)arg0 + 2) == 2)) {
        D_004115EC = 1;
        if (D_004115E0 == 1) {
            func_0016FFA0(&D_004115EC, 1);
            func_00164D38(0x1400);
            var_s0 = func_001198F0();
            func_00164D38(0x1401);
            func_00170018();
        } else {
            func_00164D38(0x1500, 1);
            var_s0 = func_001198F0();
            func_00164D38(0x1501);
        }
        D_004115EC = 0;
        if ((u32) (var_s0 + 1) >= 2U) {
            if (var_s0 != 0x20) {
                *(s32 *)((u8 *)arg0 + 0x34) = var_s0;
                scePrintf(&D_00462F38, var_s0);
                return 1;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 0;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
