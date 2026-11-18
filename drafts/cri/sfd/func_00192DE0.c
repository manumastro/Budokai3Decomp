/* Draft (not built): func_00192DE0 at 0x00192DE0, size 0x27C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00192DE0.c:48: `sp2C' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00192DE0.s */

s32 func_0016E858(s32, s32, s32);           /* extern */
s32 func_0017E950(s32, s32, s32);               /* extern */
s32 func_001911E0(void *, s32);                 /* extern */
s32 func_00191260(void *, s32, s32, s32);       /* extern */
s32 func_00193060(void *, void *, void **);         /* extern */
s32 func_00193360(void *);                      /* extern */
s32 func_00193478(void *, void *);              /* extern */
s32 func_00193608(void *, void *, s32);         /* extern */
s32 func_00193828(s32, void *);                 /* extern */
s32 func_00194788(void *, s32);             /* extern */
s32 func_001948D8(void *);                      /* extern */
s32 func_001948E8(void *, s32, void *);     /* extern */
s32 func_00194900(void *, s32, void *);     /* extern */
s32 func_00195F98(s32, s32, void *, void *);        /* extern */
s32 func_00197B80(void *, s32, s32);        /* extern */
s32 func_0019B968(void *, s32);                 /* extern */
s32 func_001A1630();                                /* extern */

s32 func_00192DE0(u8 *arg0, s32 arg1) {
    u8 *sp30;
    s32 sp34;
    s32 sp38;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    u8 *temp_fp;
    u8 *temp_s4;
    u8 *temp_s6;

    temp_s6 = arg0 + 0x98C;
    temp_s4 = *(u8 **)((u8 *)arg0 + 0x1C70);
    sp34 = arg0 + 0x94C;
    temp_fp = temp_s4 + 0x8C;
    sp38 = *(s32 *)((u8 *)temp_s4 + 0);
    if (func_00193060(temp_fp, sp, &sp30) == 0) {
        func_00193828(*(s32 *)((u8 *)sp30 + 0x54), temp_s4 + 0xF38);
        func_00193360(arg0);
        temp_s2 = func_001A1630();
        temp_s0_2 = func_0016E858(arg1, 0, 1);
        temp_s1 = func_00195F98(sp38, arg1, sp, arg0);
        temp_s5 = func_0016E858(arg1, 0, 1) - temp_s0_2;
        func_0019B968(arg0 + (*(s32 *)((u8 *)temp_fp + 0x18) << 5) + 0x31F8, func_001A1630() - temp_s2);
        *(s32 *)((u8 *)temp_s6 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s6 + 0xC) + sp28);
        *(s32 *)((u8 *)temp_s6 + 0x10) = (s32) (*(s32 *)((u8 *)temp_s6 + 0x10) + sp2C);
        temp_s0 = func_00191260(arg0, temp_s1, temp_s5, 0xFF000F06);
        func_001911E0(arg0, temp_s5);
        if (temp_s0 != 0) {
            func_001948D8(sp30);
            return temp_s0;
        }
        if (temp_s5 <= 0) {
            if (*(u8 **)((u8 *)temp_s4 + 0x160) == NULL) {
                func_001948D8(sp30);
            }
        } else {
            func_00194788(arg0, 0);
            func_00193478(arg0, sp30);
            func_00193608(arg0, sp30, arg1);
            *(s32 *)((u8 *)sp30 + 0x48) = (s32) *(s32 *)((u8 *)temp_s4 + 0x88);
            *(s32 *)((u8 *)sp30 + 0x40) = sp28;
            *(s32 *)((u8 *)sp30 + 0x44) = sp2C;
            if ((*(s32 *)((u8 *)temp_fp + 0x38) != 3) && (*(u8 **)((u8 *)temp_s4 + 0x160) == NULL)) {
                *(u8 **)((u8 *)temp_s4 + 0x160) = sp30;
            } else {
                *(u8 **)((u8 *)temp_s4 + 0x160) = NULL;
            }
            *(s32 *)((u8 *)temp_s4 + 0x164) = 0;
            if (*(u8 **)((u8 *)temp_s4 + 0x160) == NULL) {
                if ((*(s32 *)((u8 *)arg0 + 0x38) == 3) && ((u32) (*(s32 *)((u8 *)temp_fp + 0x18) - 1) < 2U)) {
                    func_00194900(sp30, 3, sp30);
                } else {
                    func_001948E8(sp30, 3, sp30);
                }
                func_0017E950(sp38, sp34 + 8, sp34 + 0xC);
                *(s32 *)((u8 *)temp_s4 + 0x84) = 0;
            }
            func_00197B80(arg0, 1, *(s32 *)((u8 *)temp_fp + 0x18));
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
