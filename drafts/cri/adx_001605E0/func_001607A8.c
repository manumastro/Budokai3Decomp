/* Draft (not built): func_001607A8 at 0x001607A8, size 0x2E4, segment cri/adx_001605E0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001607A8.c:44: `sp24' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_001605E0/func_001607A8.s */

s32 func_00152698(s32, s32, s16 *);                 /* extern */
s32 func_00152F70(s32, s32, s16 *);                 /* extern */
s32 func_00158D98(s32);                             /* extern */
s32 func_00158DF0(s32, s32);                    /* extern */
s32 func_00158E60(s32);                         /* extern */
s32 func_00158E90(s32);                         /* extern */
s32 func_001598E8(s32);                         /* extern */
s32 func_00159C78(s32);                             /* extern */
s32 func_00159D68(s32, s32);                    /* extern */
s32 func_00159D78(s32, s32);                /* extern */
s32 func_00159D88(s32, s32);                /* extern */
s32 func_00159E28(s32);                             /* extern */
s32 func_0015FB70(void *, s32);             /* extern */
s32 func_0016F050(s32 *, s16, s32 *, s32 *);    /* extern */

void func_001607A8(u8 *arg0) {
    s32 sp10;
    s32 sp20;
    s32 sp30;
    s16 sp40;
    s16 sp42;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_v1;
    u8 **temp_s1;

    temp_s2 = *(s32 *)((u8 *)arg0 + 4);
    temp_s1 = *(u8 ***)((u8 *)arg0 + 0x14);
    if (*(s8 *)((u8 *)arg0 + 0x98) != 0) {
        sp42 = 0;
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 1, 0x7FFFFFFF, sp);
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s1) + 0x18))(temp_s1, 1, 0x7FFFFFFF, &sp20);
        if (func_00152F70(sp0, sp4, &sp40) != 0) {
            func_0015FB70(arg0, 0);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, &sp20);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, sp);
            return;
        }
        temp_v0 = func_00152698(sp0 + sp40, sp4 - sp40, &sp40);
        var_v1 = -1;
        if (temp_v0 != 0) {
            var_v1 = func_00152698(sp20, sp24, &sp42);
        }
        if (temp_v0 != 0) {
            if (var_v1 != 0) {
                (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, &sp20);
                (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, sp);
                goto block_14;
            }
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 0, sp);
            func_0016F050(&sp20, sp42, &sp20, &sp30);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 0, &sp20);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, &sp30);
            goto block_11;
        }
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, &sp20);
        func_0016F050(sp, sp40 * 2, sp, &sp10);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x20))(temp_s1, 0, sp);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s1) + 0x1C))(temp_s1, 1, &sp10);
block_11:
        *(s32 *)((u8 *)arg0 + 0xA4) = (s32) (*(s32 *)((u8 *)arg0 + 0xA4) + func_00159C78(temp_s2));
        func_00158E90(temp_s2);
        func_00158E60(temp_s2);
        func_001598E8(temp_s2);
        if (func_00158D98(temp_s2) == 2) {
            func_00158DF0(temp_s2, *(s32 *)((u8 *)arg0 + 0x48));
            func_00159D68(temp_s2, func_00159E28(temp_s2));
            func_00159D88(temp_s2, 0);
            func_00159D78(temp_s2, 0);
        } else {
block_14:
            func_0015FB70(arg0, 0);
        }
    }
}
