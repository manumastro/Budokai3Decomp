/* Draft (not built): func_00244190 at 0x00244190, size 0xE8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xEC, original 0xE8
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244190.s */

// src/unk/unk_23A890.c func_00244190 size diff=30/59
s32 func_00244190(u8 *arg0) {
    s32 *temp_s1;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *var_s3;

    var_s3 = arg0;
    *(s32 *)((u8 *)D_0046FE48 + 0x3C8) = amCdFs_ReadFileId(0xC, 0, 1);
    var_v0 = *(s32 *)((u8 *)D_0046FE48 + 0x3C8);
    *(s16 *)((u8 *)D_0046FE44 + 0x102) = 2;
    temp_a0 = D_0046FE44;
    var_s2 = 0;
    if (*(s16 *)((u8 *)temp_a0 + 0x102) > 0) {
        var_s0 = 0;
        do {
            temp_a0_2 = *(&D_00452130 + (*(s16 *)((u8 *)var_s3 + 0x20) * 4));
            temp_s1 = (s32 *)(D_0046FE48 + var_s0);
            if (temp_a0_2 != -1) {
                *temp_s1 = amCdFs_ReadFileId(temp_a0_2, 0, 1);
                var_v0 = *temp_s1;
            } else {
                var_v0 = 0;
            }
            var_s2 += 1;
            var_s3 += 0x50;
            var_s0 += 0x1A4;
        } while (var_s2 < *(s16 *)((u8 *)D_0046FE44 + 0x102));
    }
    *(s16 *)((u8 *)temp_a0 + 0x100) = 0;
    return var_v0;
}
