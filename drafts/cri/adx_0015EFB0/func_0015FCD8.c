/* Draft (not built): func_0015FCD8 at 0x0015FCD8, size 0x1A4, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015FCD8.c:22: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_0015FCD8.s */

s32 func_0016F050(void *, s32, void *, s32 *); /* extern */
s32 memset(s32, s32, s32);                  /* extern */

s32 func_0015FCD8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 var_v0;
    u8 **temp_s4;

    var_v0 = 0;
    temp_s0 = arg1 * 0x12;
    temp_s4 = *(u8 ***)((u8 *)arg0 + 0x14);
    if (temp_s4 != NULL) {
        temp_s3 = ((s32) ((arg2 < 0) int (arg2 + 0x1F) : arg2) >> 5) * temp_s0;
        (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_s4) + 0x18))(temp_s4, 0, temp_s3, sp);
        temp_s5 = (sp4 / temp_s0) * temp_s0;
        memset(sp0, 0, temp_s5);
        func_0016F050(sp, temp_s5, sp, &sp10);
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s4) + 0x20))(temp_s4, 1, sp);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s4) + 0x1C))(temp_s4, 0, &sp10);
        (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*temp_s4) + 0x18))(temp_s4, 0, temp_s3 - temp_s5, sp);
        temp_s5_2 = (sp4 / temp_s0) * temp_s0;
        memset(sp0, 0, temp_s5_2);
        func_0016F050(sp, temp_s5_2, sp, &sp10);
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*temp_s4) + 0x20))(temp_s4, 1, sp);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s4) + 0x1C))(temp_s4, 0, &sp10);
        var_v0 = ((s32) (temp_s5 + temp_s5_2) / temp_s0) << 5;
    }
    return var_v0;
}
