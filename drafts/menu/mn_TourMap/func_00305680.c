/* Draft (not built): func_00305680 at 0x00305680, size 0x1AC, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oat *, float *, int, int, int)' @ 198: 30(&spA0, &sp90, *(s32 *)((u8 *)temp_s5 + 0x160), *(s32 *)((u8 *)var_s3 + 0x14));
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00305680.s */

// src/menu/mn_TourMap.c func_00305680 cerr diff=-1/0
void func_00305680(void) {
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 temp_a0;
    s32 var_s4;
    u8 *temp_s5;
    u8 *var_s3;

    temp_s5 = (u8 *)(D_0047097C);
    temp_a0 = *(s32 *)((u8 *)temp_s5 + 0x10);
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
    if (*(s32 *)((u8 *)temp_s5 + 0x10) > 0) {
        var_s3 = temp_s5;
        do {
            if (*(s32 *)((u8 *)var_s3 + 0x14) != -1) {
                if (var_s4 != *(s32 *)((u8 *)temp_s5 + 0x20)) {
                    sp90 = 0x3F000000;
                    sp94 = 0x3F000000;
                    sp98 = 0x3F000000;
                    sp9C = 0x3F800000;
                } else {
                    sp90 = 0x3F800000;
                    sp94 = 0x3F800000;
                    sp98 = 0x3F800000;
                    sp9C = 0x3F800000;
                }
                func_00305130(&spA0, &sp90, *(s32 *)((u8 *)temp_s5 + 0x160), *(s32 *)((u8 *)var_s3 + 0x14));
                spA4 += 35.0f;
            }
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < *(s32 *)((u8 *)temp_s5 + 0x10));
    }
}
