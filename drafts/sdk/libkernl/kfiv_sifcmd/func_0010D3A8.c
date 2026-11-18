/* Draft (not built): func_0010D3A8 at 0x0010D3A8, size 0x78, segment sdk/libkernl/kfiv_sifcmd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010D3A8.c:24: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifcmd/func_0010D3A8.s */

extern s32 D_00471998;

void func_0010D3A8(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0;
    s32 var_v1;
    u8 *temp_v0;
    u8 *temp_v0_2;

    if (arg0 < 0) {
        var_v1 = (arg0 & 0x7FFFFFFF) * 0xC;
        temp_v0 = var_v1 + *(s32 *)((u8 *)(&D_00471998) + 0xC);
        *(s32 *)((u8 *)temp_v0 + 4) = arg2;
        *(s32 *)((u8 *)temp_v0 + 0) = arg1;
        var_v0 = *(s32 *)((u8 *)(&D_00471998) + 0xC);
    } else {
        var_v1 = arg0 * 0xC;
        temp_v0_2 = var_v1 + *(s32 *)((u8 *)(&D_00471998) + 0x14);
        *(s32 *)((u8 *)temp_v0_2 + 4) = arg2;
        *(s32 *)((u8 *)temp_v0_2 + 0) = arg1;
        var_v0 = *(s32 *)((u8 *)(&D_00471998) + 0x14);
    }
    *(s32 *)((u8 *)(var_v1 + var_v0) + 8) = (s32) saved_reg_gp;
}
