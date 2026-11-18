/* Draft (not built): func_001A0A38 at 0x001A0A38, size 0x18C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001A0A38.c:48: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfx/func_001A0A38.s */

s32 func_00170B80(void *, s32 *, s32);          /* extern */
s32 func_00170B88(void *, s32 *, s32);          /* extern */
s32 func_0019EE88(void *, void *, s32, u32); /* extern */
s32 sfxcnv_CnvZbitToCft(s32, s32, s32, s32);        /* extern */

void func_001A0A38(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_t3;
    s32 temp_t4;
    s32 var_s4;
    u32 temp_a1;
    u32 temp_a3_2;
    u32 temp_v1;
    u32 temp_v1_2;
    u8 *temp_s0;

    temp_s0 = arg1 + 4;
    temp_a1 = *(u32 *)((u8 *)temp_s0 + 8);
    temp_t4 = *(s32 *)((u8 *)temp_s0 + 4);
    temp_v1 = temp_t4 * temp_a1;
    temp_a1_2 = temp_a1 + (temp_a1 >> 0x1F);
    var_s4 = temp_a1_2 >> 1;
    temp_a3 = *(s32 *)((u8 *)arg0 + 8);
    temp_t3 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_t3 != 0) {
        var_s4 = temp_t3;
    }
    temp_v1_2 = *(u32 *)((u8 *)temp_s0 + 8);
    temp_a3_2 = temp_v1_2 >> 0x1F;
    sp20 = sfxcnv_CnvZbitToCft(arg2, temp_a1_2, *(s32 *)((u8 *)arg1 + 4) + ((s32) (temp_v1 + (temp_v1 >> 0x1F)) >> 1), temp_a3);
    sp30 = *(s32 *)((u8 *)temp_s0 + 4);
    sp34 = (s32) (temp_v1_2 + temp_a3_2) >> 1;
    sp24 = arg3;
    sp28 = (temp_a3 != 0) int temp_a3 : temp_t4;
    sp2C = var_s4;
    switch (arg2) {                                 /* irregular */
    case 16:
        func_0019EE88(arg0, arg1, 0xB, temp_a3_2);
        func_00170B80(sp, &sp20, *(s32 *)((u8 *)arg0 + 0x3C));
        return;
    case 32:
        func_0019EE88(arg0, arg1, 0xD, temp_a3_2);
        func_00170B88(sp, &sp20, *(s32 *)((u8 *)arg0 + 0x3C));
        break;
    }
}
