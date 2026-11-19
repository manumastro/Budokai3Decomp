/* Draft (not built): func_00305680 at 0x00305680, size 0x1AC, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x1AC
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305680.s */

// src/menu/mn_TourMap.c func_00305680 size diff=61/102
extern s32 D_700500;
void func_00305680(void) {
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 *var_s2;
    f32 *var_s7;
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s6;
    s32 temp_a0;
    s32 var_s4;
    u8 *var_s3;
    u8 *var_s5;

    var_s5 = (unsigned char *)(D_0047097C);
    temp_a0 = *(s32 *)((u8 *)var_s5 + 0x10);
    switch (temp_a0) {                              /* irregular */
    case 1:
        spA0 = 0x43A00000;
        spA8 = 0;
        spA4 = 360.0f;
block_8:
        spAC = 0x3F800000;
        break;
    case 2:
        spA4 = 342.5f;
        spA8 = 0;
        spA0 = 0x43A00000;
        goto block_8;
    case 3:
        spA4 = 325.0f;
        spA8 = 0;
        spA0 = 0x43A00000;
        goto block_8;
    }
    var_s4 = 0;
    if (*(s32 *)((u8 *)var_s5 + 0x10) > 0) {
        var_s3 = var_s5;
        var_s2 = &D_700500;
        var_s1 = &sp94;
        var_s0 = &sp98;
        var_s6 = &sp9C;
        var_s7 = &spA4;
        do {
            if (*(s32 *)((u8 *)var_s3 + 0x14) != -1) {
                if (var_s4 != *(s32 *)((u8 *)var_s5 + 0x20)) {
                    sp90 = 0x3F000000;
                    *var_s1 = 0x3F000000;
                    *var_s0 = 0x3F000000;
                    *var_s6 = 0x3F800000;
                } else {
                    sp90 = 0x3F800000;
                    *var_s1 = 0x3F800000;
                    *var_s0 = 0x3F800000;
                    *var_s6 = 0x3F800000;
                }
                func_00305130((f32 *)(&spA0), (f32 *)(&sp90), (s32)(*(s32 *)((u8 *)var_s5 + 0x160)), (s32)(*(s32 *)((u8 *)var_s3 + 0x14)), 0);
                *var_s7 += 35.0f;
            }
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < *(s32 *)((u8 *)var_s5 + 0x10));
    }
}
