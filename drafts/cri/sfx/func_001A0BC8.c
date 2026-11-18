/* Draft (not built): func_001A0BC8 at 0x001A0BC8, size 0x110, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001A0BC8.c:40: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfx/func_001A0BC8.s */

s32 func_00170B98(void *, s32 *, s32);          /* extern */
s32 func_0019EE88(void *, void *, s32);     /* extern */
s32 sfxcnv_CnvZbitToCft(s32, s32, s32);             /* extern */

void func_001A0BC8(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 temp_a2;
    s32 temp_s5;
    s32 temp_t0;
    s32 var_s3;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 *temp_s0;

    temp_s0 = arg1 + 4;
    temp_v1 = *(u32 *)((u8 *)temp_s0 + 8);
    temp_t0 = *(s32 *)((u8 *)arg0 + 8);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0xC);
    temp_s5 = (temp_t0 != 0) int temp_t0 : *(s32 *)((u8 *)temp_s0 + 4);
    var_s3 = (s32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1;
    if (temp_a2 != 0) {
        var_s3 = temp_a2;
    }
    temp_v1_2 = *(u32 *)((u8 *)temp_s0 + 8);
    sp20 = sfxcnv_CnvZbitToCft(arg2, *(s32 *)((u8 *)arg1 + 4), temp_a2);
    sp24 = arg3;
    sp30 = *(s32 *)((u8 *)temp_s0 + 4);
    sp28 = temp_s5;
    sp2C = var_s3;
    sp34 = (s32) (temp_v1_2 + (temp_v1_2 >> 0x1F)) >> 1;
    if ((arg2 != 0x10) && (arg2 == 0x20)) {
        func_0019EE88(arg0, arg1, 0xD);
        func_00170B98(sp, &sp20, *(s32 *)((u8 *)arg0 + 0x3C));
    }
}
