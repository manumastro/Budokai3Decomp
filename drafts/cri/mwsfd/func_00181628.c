/* Draft (not built): func_00181628 at 0x00181628, size 0xC8, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181628.s */

s32 func_001816F0(s32);                             /* extern */
s32 mwl_convPtypeToSFD(s32);                        /* extern */

void func_00181628(u8 *arg0, u8 *arg1) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;

    temp_s7 = *(s32 *)((u8 *)arg0 + 0);
    temp_s6 = *(s32 *)((u8 *)arg0 + 8);
    temp_s5 = func_001816F0(*(s32 *)((u8 *)arg0 + 4));
    temp_s2 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_s3 = *(s32 *)((u8 *)arg0 + 0x10);
    temp_s4 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_v0 = mwl_convPtypeToSFD(*(s32 *)((u8 *)arg0 + 0x18));
    *(s32 *)((u8 *)arg1 + 0x20) = temp_s7;
    *(s32 *)((u8 *)arg1 + 0x1C) = temp_s5;
    *(s32 *)((u8 *)arg1 + 0) = temp_s6;
    *(s32 *)((u8 *)arg1 + 4) = temp_s2;
    *(s32 *)((u8 *)arg1 + 8) = temp_s3;
    *(s32 *)((u8 *)arg1 + 0xC) = temp_s4;
    *(s32 *)((u8 *)arg1 + 0x2C) = (s32) *(s32 *)((u8 *)arg0 + 0x2C);
    *(s32 *)((u8 *)arg1 + 0x10) = temp_v0;
    *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)arg0 + 0x24);
    *(s32 *)((u8 *)arg1 + 0x18) = (s32) *(s32 *)((u8 *)arg0 + 0x28);
    *(s32 *)((u8 *)arg1 + 0x24) = (s32) *(s32 *)((u8 *)arg0 + 0x38);
    *(s32 *)((u8 *)arg1 + 0x28) = (s32) *(s32 *)((u8 *)arg0 + 0x3C);
}
