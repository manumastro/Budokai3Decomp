/* Draft (not built): func_002A1050 at 0x002A1050, size 0xA0, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 36 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A1050.s */

// src/sys/cnv_sys.c func_002A1050 diff diff=36/40
f32 func_002A1050(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_f0;
    u8 **temp_a0;
    u8 *temp_a1;
    u8 *temp_v0;

    temp_a0 = (unsigned char **)(*(s32 *)((u8 *)D_004708CC + 0x50) + (arg1 * 8));
    if (temp_a0 == NULL) {
        goto block_3;
    }
    temp_a1 = *temp_a0;
    if (temp_a1 != NULL) {
        goto block_5;
    }
block_3:
    return 0.0f;
block_5:
    temp_v0 = temp_a1 + *(*(s32 *)((u8 *)temp_a1 + 0x14) + temp_a1 + ((*(s32 *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + (arg0 * 4)) + (arg1 * 0xE0)) - *(s32 *)((u8 *)temp_a1 + 0x18)) * 4));
    if (arg2 != 0) {
        goto block_7;
    }
    var_f0 = *(s16 *)((u8 *)temp_v0 + 0x10);
    goto block_8;
block_7:
    var_f0 = *(s16 *)((u8 *)temp_v0 + 0x12);
block_8:
    return (f32) var_f0;
}
