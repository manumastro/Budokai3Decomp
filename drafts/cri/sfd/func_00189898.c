/* Draft (not built): func_00189898 at 0x00189898, size 0xF0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00189898.c:35: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00189898.s */

s64 ADXT_GetSfreq(s32);                             /* extern */
s32 func_0015FA60(s32, s32);                        /* extern */
s32 func_00189178(s32);                             /* extern */
s32 func_001899D8(s32);                         /* extern */
s32 func_00189A60(void *, s32 *, s64);          /* extern */
s32 func_0019C350(void *, void *, s64, s64);    /* extern */

s32 func_00189898(u8 *arg0, s32 arg1) {
    s32 sp10;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_a1;
    s64 temp_v0;
    u8 *temp_s3;

    var_a1 = arg1;
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1CB4);
    temp_s2 = *(s32 *)((u8 *)temp_s3 + 0);
    switch (var_a1) {                               /* irregular */
    case 0:
        *(s32 *)((u8 *)temp_s3 + 0x30) = 0;
        var_a1 = 0;
        /* fallthrough */
    case 1:
        func_001899D8(var_a1);
        break;
    case 2:
        if (func_00189178(temp_s2) != 0) {
            temp_v0 = ADXT_GetSfreq(temp_s2);
            func_00189A60(arg0, &sp10, temp_v0);
            temp_s0 = sp10 + *(s32 *)((u8 *)temp_s3 + 0x30);
            *(s32 *)((u8 *)temp_s3 + 0x30) = (s32) (temp_s0 - func_0015FA60(temp_s2, temp_s0));
            func_0019C350(arg0 + 0xFA0, sp, (s64) sp10, temp_v0);
        }
        break;
    }
    return 0;
}
