/* Draft (not built): func_001810E8 at 0x001810E8, size 0x180, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001810E8.c:52: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001810E8.s */

s32 func_00181268(void *, void *, void *, s32); /* extern */
s32 func_00181300(s32, s32, s32);                   /* extern */
s32 func_00181330(s32);                             /* extern */
s32 func_001870E8(s32 *, s32);              /* extern */
s32 func_0019B320(s32, void *, s32);                /* extern */
s32 mwl_convPtypeFromSFD(s32, s32, s32, s32);       /* extern */
extern s32 D_00465AA0;

void func_001810E8(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_v0;

    temp_s0 = *(s32 *)((u8 *)arg0 + 0x40);
    temp_s7 = *(s32 *)((u8 *)arg1 + 0x20);
    sp4 = func_00181330(*(s32 *)((u8 *)arg1 + 0x1C));
    sp8 = *(s32 *)((u8 *)arg1 + 0);
    temp_a1 = *(s32 *)((u8 *)arg1 + 4);
    spC = temp_a1;
    temp_a2 = *(s32 *)((u8 *)arg1 + 8);
    sp10 = temp_a2;
    temp_a3 = *(s32 *)((u8 *)arg1 + 0xC);
    sp14 = temp_a3;
    sp18 = mwl_convPtypeFromSFD(*(s32 *)((u8 *)arg1 + 0x10), temp_a1, temp_a2, temp_a3);
    temp_s3 = *(s32 *)((u8 *)arg1 + 0x18);
    temp_s4 = *(s32 *)((u8 *)arg1 + 0x34);
    temp_s5 = *(s32 *)((u8 *)arg1 + 0x30);
    temp_fp = *(s32 *)((u8 *)arg1 + 0x2C);
    sp1C = *(s32 *)((u8 *)arg1 + 0x24);
    temp_a2_2 = *(s32 *)((u8 *)arg1 + 0x28);
    sp20 = temp_a2_2;
    if (func_0019B320(temp_s0, sp, temp_a2_2) != 0) {
        func_001870E8(&D_00465AA0, sp0);
    }
    temp_s0_2 = func_00181300(temp_s4, sp0, temp_s3);
    temp_v0 = func_00181300(temp_s5, sp0, temp_s3);
    *(s32 *)((u8 *)arg2 + 0) = temp_s7;
    *(s32 *)((u8 *)arg2 + 4) = sp4;
    *(s32 *)((u8 *)arg2 + 8) = sp8;
    *(s32 *)((u8 *)arg2 + 0xC) = spC;
    *(s32 *)((u8 *)arg2 + 0x10) = sp10;
    *(s32 *)((u8 *)arg2 + 0x14) = sp14;
    *(s32 *)((u8 *)arg2 + 0x1C) = sp0;
    *(s32 *)((u8 *)arg2 + 0x20) = temp_s0_2;
    *(s32 *)((u8 *)arg2 + 0x24) = temp_s4;
    *(s32 *)((u8 *)arg2 + 0x28) = temp_s3;
    *(s32 *)((u8 *)arg2 + 0x2C) = temp_fp;
    *(s32 *)((u8 *)arg2 + 0x34) = temp_s5;
    *(s32 *)((u8 *)arg2 + 0x18) = sp18;
    *(s32 *)((u8 *)arg2 + 0x30) = temp_v0;
    *(s32 *)((u8 *)arg2 + 0x38) = sp1C;
    *(s32 *)((u8 *)arg2 + 0x3C) = sp20;
    func_00181268(arg0, arg1, arg2, sp20);
}
