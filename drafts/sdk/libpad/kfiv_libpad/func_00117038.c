/* Draft (not built): func_00117038 at 0x00117038, size 0x118, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00117038.c:10: `sp6A' undeclared (first use in this function)
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00117038.s */

s32 func_00116C18(s32, void *);                 /* extern */
extern s32 D_00478990;

u8 func_00117038(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (*(s32 *)((u8 *)(&D_00478990 + ((arg1 * 0x1C) + (arg0 * 0x70))) + 0x10) != 0) {
        func_00116C18(arg0, sp);
        if ((sp72 == 1) && (sp64 >= 2U)) {
            if (arg2 < (s32) sp6A) {
                if (arg2 == -1) {
                    return sp6A;
                }
                if (arg3 != 2) {
                    if (arg3 >= 3) {
                        switch (arg3) {             /* irregular */
                        case 3:
                            return *(u8 *)((u8 *)(sp + (arg2 * 4)) + 0x32);
                        case 4:
                            return *(u8 *)((u8 *)(sp + (arg2 * 4)) + 0x33);
                        }
                    } else {
                        if (arg3 != sp72) {
                            goto block_19;
                        }
                        return *(u8 *)((u8 *)(sp + (arg2 * 4)) + 0x30);
                    }
                } else {
                    return *(u8 *)((u8 *)(sp + (arg2 * 4)) + 0x31);
                }
            } else {
                goto block_19;
            }
        } else {
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return 0U;
        }
    } else {
block_19:
        return 0U;
    }
}
