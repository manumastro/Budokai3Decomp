/* Draft (not built): func_00242290 at 0x00242290, size 0x1F4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1FC, original 0x1F4
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242290.s */

// src/unk/unk_23A890.c func_00242290 size diff=61/127
void func_00242290(void) {
    s32 spA0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_fp;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s6;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;

    temp_a0 = D_0046FE44;
    var_s4 = 0;
    if (*(s16 *)((u8 *)temp_a0 + 0x102) > 0) {
        spA0 = 0;
        var_s1 = 0;
        var_s5 = 0;
        var_s0 = 0x03006000;
        do {
            temp_s3 = temp_a0 + spA0;
            temp_s2 = D_0046FE48 + var_s1;
            temp_s6 = func_00240F40(var_s4, 0);
            temp_s7 = func_00240F40(var_s4, 1);
            temp_fp = func_00240F40(var_s4, 2);
            temp_v0 = func_00240F40(var_s4, 3);
            *(s32 *)((u8 *)temp_s6 + 0x24) = 0;
            *(s32 *)((u8 *)temp_s7 + 0x24) = 0;
            *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
            *(s32 *)((u8 *)temp_fp + 0x24) = 0;
            temp_v1 = D_0046FE48 + var_s1;
            *(s32 *)((u8 *)temp_s2 + 0x194) = (s32) *(s32 *)((u8 *)(temp_v1 + (*(s32 *)((u8 *)temp_v1 + 0xC) * 4)) + 0x14);
            temp_v1_2 = D_0046FE48 + var_s1;
            *(s32 *)((u8 *)temp_s2 + 0x198) = (s32) *(s32 *)((u8 *)(temp_v1_2 + (*(s32 *)((u8 *)temp_v1_2 + 0xC) * 4)) + 0xFC);
            *(s32 *)((u8 *)temp_s2 + 0x19C) = var_s0;
            memset(temp_s3, 0, 0x80);
            *(s32 *)((u8 *)temp_s3 + 0) = 0;
            *(s32 *)((u8 *)temp_s3 + 4) = 0x3F800000;
            *(s32 *)((u8 *)temp_s3 + 8) = 0;
            *(s32 *)((u8 *)temp_s3 + 0xC) = 0x3F800000;
            temp_v1_3 = gBattle + var_s5;
            *(s8 *)((u8 *)temp_s3 + 0x38) = (s8) *(s8 *)((u8 *)temp_v1_3 + 0x14ED);
            *(s16 *)((u8 *)temp_s3 + 0x34) = (s16) *(s32 *)((u8 *)temp_v1_3 + 0x13D4);
            *(s16 *)((u8 *)temp_s3 + 0x36) = (s16) *(s32 *)((u8 *)temp_v1_3 + 0x252C);
            func_00243600(var_s4);
            func_00241D60(var_s4);
            *(s32 *)((u8 *)temp_s3 + 0x40) = func_002096D0((s32)(temp_s6), 0x400008, 0);
            *(s32 *)((u8 *)temp_s3 + 0x44) = func_002096D0((s32)(temp_s7), 0x400008, 0);
            *(s32 *)((u8 *)temp_s3 + 0x48) = func_002096D0((s32)(temp_fp), 0x400008, 0);
            var_s4 += 1;
            var_s1 += 0x1A4;
            var_s0 += 0x600;
            spA0 += 0x80;
            var_s5 += 0x2020;
        } while (var_s4 < *(s16 *)((u8 *)D_0046FE44 + 0x102));
    }
    *(s16 *)((u8 *)D_0046FE48 + 0x3D0) = 1;
}
