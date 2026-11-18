/* Draft (not built): func_002420F0 at 0x002420F0, size 0x1A0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); t, int)' mwccps2.exe Compiler: @ 1237: ? 0xC : 0xD) * 4)) + 0x348), (var_s4 == 0) ? 0x400040 : 0x400080, 0, D_0058CA08);
 * Original: asm/nonmatchings/unk/unk_23A890/func_002420F0.s */

// src/unk/unk_23A890.c func_002420F0 cerr diff=-1/0
void func_002420F0(void) {
    s32 temp_a0_3;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_s3;

    temp_a0 = D_0046FE44;
    var_s4 = 0;
    if (*(s16 *)((u8 *)temp_a0 + 0x102) > 0) {
        var_s2 = 0;
        var_s1 = 0;
        var_s0 = 0;
        do {
            temp_s3 = temp_a0 + var_s2;
            temp_a0_2 = gBattle + var_s0;
            temp_a1 = temp_a0_2 + 0x830;
            temp_a0_3 = *(s32 *)((u8 *)temp_a0_2 + 0x252C);
            if ((temp_a0_3 == 0xE) || (temp_a0_3 == 0x4A)) {
                *(s32 *)((u8 *)temp_s3 + 0x78) = (s32) *(s8 *)((u8 *)temp_a1 + 0xCC2);
                var_v1 = *(s32 *)((u8 *)temp_a1 + 0xBA0);
                if (var_v1 >= 0) {
                    if (var_v1 >= 2) {
                        goto block_7;
                    }
                } else {
block_7:
                    var_v1 = 0;
                }
                *(s32 *)((u8 *)(D_0046FE48 + var_s1) + 0x1A0) = (s32) D_0058CA08;
                *(s32 *)((u8 *)temp_s3 + 0x70) = func_00209540(*(s32 *)((u8 *)(&D_0058C6C0 + (((var_v1 == 0) ? 0xC : 0xD) * 4)) + 0x348), (var_s4 == 0) ? 0x400040 : 0x400080, 0, D_0058CA08);
            }
            var_s4 += 1;
            var_s2 += 0x80;
            var_s1 += 0x1A4;
            var_s0 += 0x2020;
        } while (var_s4 < *(s16 *)((u8 *)D_0046FE44 + 0x102));
    }
    temp_a2 = *(s32 *)((u8 *)gBattle + 0x252C);
    if ((temp_a2 != 0xE) && (temp_a2 != 0x4A) && (temp_a1_2 = *(s32 *)((u8 *)(gBattle + 0x830) + 0x3D1C), (temp_a1_2 != 0xE))) {
        if (temp_a1_2 == 0x4A) {
            goto block_15;
        }
    } else {
block_15:
        amTask_Create(&func_00242B40, 0, 0x5800, 0x400);
        amTask_Create(&func_00242A10, 0, 0x3700, 0x400);
    }
}
