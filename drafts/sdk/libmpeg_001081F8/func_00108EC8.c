/* Draft (not built): func_00108EC8 at 0x00108EC8, size 0x4D8, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00108EC8.c:145: too few arguments to function `func_00107DE0'
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_00108EC8.s */

s32 AddDmacHandler2(s32, s32 *, s32, u32 *); /* extern */
s32 DI(u32);                                        /* extern */
s32 DisableDmac(s32);                       /* extern */
s32 EI(s32, s32, s32);                  /* extern */
s32 FlushCache(s32);                        /* extern */
s32 RemoveDmacHandler(s32, s32);            /* extern */
s32 func_00107DE0(s32, s32 *, s32, s32);        /* extern */
s32 func_00108D08(void *, s32, s32);            /* extern */
s32 func_0010AE78(s32);                     /* extern */
extern s32 func_001094E8;

void func_00108EC8(u8 *arg0, u8 *arg1) {
    u32 sp20;
    s32 sp24;
    s32 sp30;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_v1;

    temp_s3 = *(s32 *)((u8 *)arg1 + 0xC) * *(s32 *)((u8 *)arg1 + 0x10);
    func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 2, 2);
    if (*(s32 *)0x10002010 & 0x4000) {
        *(u8 *)0x10002010 = 0x40000000;
    }
    temp_s5 = temp_s3 < 0x400;
    do {

    } while (*(u8 *)0x10002010 < 0);
    *(s32 *)0x10002000 = 0;
    *(s32 *)((u8 *)arg0 + 0x828) = 1;
    *(s32 *)((u8 *)arg0 + 0x82C) = 0;
    do {

    } while (*(u8 *)0x10002010 < 0);
    FlushCache(0);
    temp_v1 = temp_s3 * 0x18;
    sp24 = *(s32 *)((u8 *)arg1 + 0) & 0x0FFFFFFF;
    temp_a0 = temp_v1 > 0xFFFFU;
    sp20 = temp_v1;
    if (temp_a0 != 0) {
        temp_s6 = AddDmacHandler2(4, &func_001094E8, 0, &sp20);
        *(s32 *)0x1000E010 = 0x10;
        func_0010AE78(4);
        temp_v0 = DI();
        *(s32 *)0x1000B410 = sp24;
        *(u32 *)0x1000B420 = 0xFFFF;
        *(s32 *)0x1000B400 = 0x101;
        if (temp_v0 != 0) {
            EI(0x101, sp24);
        }
        temp_a0_2 = sp20 - 0xFFFF;
        sp24 = (sp24 + 0xFFFF0) & 0x0FFFFFFF;
        sp20 = temp_a0_2;
        if (temp_s5 != 0) {
            temp_s1 = *(s32 *)((u8 *)arg0 + 0xEC);
            do {

            } while (*(u8 *)0x10002010 < 0);
            temp_v0_2 = DI(temp_a0_2);
            *(s32 *)0x1000B010 = temp_s1 & 0x0FFFFFFF;
            *(s32 *)0x1000B020 = temp_s3 << 6;
            *(u32 *)0x1000B000 = 0x100;
            if (temp_v0_2 != 0) {
                EI(0x100, 0x1000B010);
            }
            temp_v1_2 = temp_s3 | 0x70000000;
            *(u8 *)0x10002000 = temp_v1_2;
            temp_v1_3 = temp_v1_2 & 0xF0000000;
            *(s32 *)((u8 *)arg0 + 0x82C) = temp_v1_3;
            if ((temp_v1_3 == 0x20000000) || (temp_v1_3 == 0x30000000) || (temp_v1_3 == 0x40000000)) {
                *(s32 *)((u8 *)arg0 + 0x828) = 0;
            } else {
                *(s32 *)((u8 *)arg0 + 0x828) = 1;
            }
            sp30 = 4;
            func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), &sp30);
            do {

            } while (((u32) *(u8 *)0x1000B000 >> 8) & 1);
            do {

            } while (*(u8 *)0x10002010 < 0);
        } else {
            func_00108D08(arg0, *(s32 *)((u8 *)arg0 + 0xEC), temp_s3);
        }
        DisableDmac(4);
        RemoveDmacHandler(4, temp_s6);
    } else {
        temp_v0_3 = DI(temp_a0);
        *(u8 *)0x1000B410 = (s32) (*(s32 *)((u8 *)arg1 + 0) & 0x0FFFFFFF);
        *(u8 *)0x1000B420 = sp20;
        *(u8 *)0x1000B400 = 0x101;
        if (temp_v0_3 != 0) {
            EI(0x1000B400, 0x101, 0x1000B420);
        }
        sp20 = 0;
        if (temp_s5 != 0) {
            temp_s1_2 = *(s32 *)((u8 *)arg0 + 0xEC);
            do {

            } while (*(u8 *)0x10002010 < 0);
            temp_v0_4 = DI();
            *(u8 *)0x1000B010 = (s32) (temp_s1_2 & 0x0FFFFFFF);
            *(u8 *)0x1000B020 = (s32) (temp_s3 << 6);
            *(u8 *)0x1000B000 = 0x100U;
            if (temp_v0_4 != 0) {
                EI(0x100, 0x1000B010);
            }
            temp_v1_4 = temp_s3 | 0x70000000;
            *(u8 *)0x10002000 = temp_v1_4;
            temp_v1_5 = temp_v1_4 & 0xF0000000;
            *(s32 *)((u8 *)arg0 + 0x82C) = temp_v1_5;
            if ((temp_v1_5 == 0x20000000) || (temp_v1_5 == 0x30000000) || (temp_v1_5 == 0x40000000)) {
                *(s32 *)((u8 *)arg0 + 0x828) = 0;
            } else {
                *(s32 *)((u8 *)arg0 + 0x828) = 1;
            }
            sp30 = 4;
            func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), &sp30);
            do {

            } while (((u32) *(u8 *)0x1000B000 >> 8) & 1);
            do {

            } while (*(u8 *)0x10002010 < 0);
        } else {
            func_00108D08(arg0, *(s32 *)((u8 *)arg0 + 0xEC), temp_s3);
        }
    }
    func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 3);
}
