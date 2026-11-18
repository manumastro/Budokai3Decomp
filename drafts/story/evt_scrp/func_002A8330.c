/* Draft (not built): func_002A8330 at 0x002A8330, size 0x638, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp' mwccps2.exe Compiler: 3092: var_v0 = sp; @ 3075: var_t0_7 = sp;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A8330.s */

// src/story/evt_scrp.c func_002A8330 cerr diff=-1/0
extern s32 D_00454780;
extern s128 D_004547A0;
extern s128 D_00454840;
extern s128 D_004548E0;
extern s128 D_00454980;
extern s32 D_00454A20;
extern s128 D_00454A40;
extern s128 D_00454AE0;
extern s128 D_00454B80;
extern s128 D_00454C20;
extern s128 D_00454CC0;
extern s128 D_00454D60;
extern s128 D_00454E00;
extern s128 D_00454EA0;
extern s128 D_00454F40;
extern s128 D_00454FE0;
extern s128 D_00455080;
extern s128 D_00455120;
extern s64 D_004700C0;
extern f32 D_004700C8;
extern f32 D_004700CC;
extern f32 D_004700D0;
s32 func_002A8330(s32 arg0) {
    s64 spA0;
    s64 sp140;
    s64 sp1E0;
    s64 sp280;
    s64 sp320;
    s64 sp3C0;
    s64 sp460;
    s64 sp500;
    s64 sp5A0;
    s64 sp640;
    s64 sp6E0;
    s64 sp780;
    s64 sp7A0;
    s64 sp840;
    s64 sp8E0;
    s64 sp980;
    s64 spA20;
    s64 spA48;
    s64 spA54;
    s64 spA58;
    s64 spA5C;
    s128 *var_a2;
    s128 *var_a2_10;
    s128 *var_a2_11;
    s128 *var_a2_12;
    s128 *var_a2_13;
    s128 *var_a2_14;
    s128 *var_a2_15;
    s128 *var_a2_16;
    s128 *var_a2_2;
    s128 *var_a2_3;
    s128 *var_a2_4;
    s128 *var_a2_5;
    s128 *var_a2_6;
    s128 *var_a2_7;
    s128 *var_a2_8;
    s128 *var_a2_9;
    s32 var_a1;
    s32 var_a1_10;
    s32 var_a1_11;
    s32 var_a1_12;
    s32 var_a1_13;
    s32 var_a1_14;
    s32 var_a1_15;
    s32 var_a1_16;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s32 var_a1_6;
    s32 var_a1_7;
    s32 var_a1_8;
    s32 var_a1_9;
    s32 var_v1;
    s64 *var_a3;
    s64 *var_a3_2;
    s64 *var_a3_3;
    s64 *var_a3_4;
    s64 *var_a3_5;
    s64 *var_a3_6;
    s64 *var_a3_7;
    s64 *var_a3_8;
    s64 *var_t0;
    s64 *var_t0_2;
    s64 *var_t0_3;
    s64 *var_t0_4;
    s64 *var_t0_5;
    s64 *var_t0_6;
    s64 *var_t0_7;
    s64 *var_t4;
    s64 *var_v0;

    var_v1 = 0;
    var_a2 = &D_004547A0;
    var_a3 = &sp980;
    var_a1 = 9;
    spA48 = D_004700C0;
    *(s128 *)((u8 *)(&spA20) + 0) = (s128) *(s128 *)((u8 *)(&D_00454780) + 0);
    *(s64 *)((u8 *)(&spA20) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00454780) + 0x10);
    *(f32 *)((u8 *)(&spA20) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00454780) + 0x18);
    do {
        var_a1 -= 1;
        *var_a3 = (s128) *var_a2;
        var_a2 += 0x10;
        var_a3 += 0x10;
    } while (var_a1 > 0);
    var_t0 = &sp8E0;
    var_a1_2 = 9;
    *var_a3 = *var_a2;
    var_a2_2 = &D_00454840;
    do {
        var_a1_2 -= 1;
        *var_t0 = (s128) *var_a2_2;
        var_a2_2 += 0x10;
        var_t0 += 0x10;
    } while (var_a1_2 > 0);
    var_a3_2 = &sp840;
    var_a1_3 = 9;
    *var_t0 = *var_a2_2;
    var_a2_3 = &D_004548E0;
    do {
        var_a1_3 -= 1;
        *var_a3_2 = (s128) *var_a2_3;
        var_a2_3 += 0x10;
        var_a3_2 += 0x10;
    } while (var_a1_3 > 0);
    var_t4 = &sp7A0;
    var_a1_4 = 9;
    *var_a3_2 = *var_a2_3;
    var_a2_4 = &D_00454980;
    do {
        var_a1_4 -= 1;
        *var_t4 = (s128) *var_a2_4;
        var_a2_4 += 0x10;
        var_t4 += 0x10;
    } while (var_a1_4 > 0);
    var_a3_3 = &sp6E0;
    var_a1_5 = 9;
    *var_t4 = *var_a2_4;
    var_a2_5 = &D_00454A40;
    *(s128 *)((u8 *)(&sp780) + 0) = (s128) *(s128 *)((u8 *)(&D_00454A20) + 0);
    *(f32 *)((u8 *)(&sp780) + 0x10) = (f32) *(f32 *)((u8 *)(&D_00454A20) + 0x10);
    spA5C = (f32) D_004700C8;
    spA58 = (f32) D_004700CC;
    do {
        var_a1_5 -= 1;
        *var_a3_3 = (s128) *var_a2_5;
        var_a2_5 += 0x10;
        var_a3_3 += 0x10;
    } while (var_a1_5 > 0);
    var_t0_2 = &sp640;
    var_a1_6 = 9;
    *var_a3_3 = *var_a2_5;
    var_a2_6 = &D_00454AE0;
    do {
        var_a1_6 -= 1;
        *var_t0_2 = (s128) *var_a2_6;
        var_a2_6 += 0x10;
        var_t0_2 += 0x10;
    } while (var_a1_6 > 0);
    var_a3_4 = &sp5A0;
    var_a1_7 = 9;
    *var_t0_2 = *var_a2_6;
    var_a2_7 = &D_00454B80;
    do {
        var_a1_7 -= 1;
        *var_a3_4 = (s128) *var_a2_7;
        var_a2_7 += 0x10;
        var_a3_4 += 0x10;
    } while (var_a1_7 > 0);
    var_t0_3 = &sp500;
    var_a1_8 = 9;
    *var_a3_4 = *var_a2_7;
    var_a2_8 = &D_00454C20;
    do {
        var_a1_8 -= 1;
        *var_t0_3 = (s128) *var_a2_8;
        var_a2_8 += 0x10;
        var_t0_3 += 0x10;
    } while (var_a1_8 > 0);
    var_a3_5 = &sp460;
    var_a1_9 = 9;
    *var_t0_3 = *var_a2_8;
    var_a2_9 = &D_00454CC0;
    do {
        var_a1_9 -= 1;
        *var_a3_5 = (s128) *var_a2_9;
        var_a2_9 += 0x10;
        var_a3_5 += 0x10;
    } while (var_a1_9 > 0);
    var_t0_4 = &sp3C0;
    var_a1_10 = 9;
    *var_a3_5 = *var_a2_9;
    var_a2_10 = &D_00454D60;
    do {
        var_a1_10 -= 1;
        *var_t0_4 = (s128) *var_a2_10;
        var_a2_10 += 0x10;
        var_t0_4 += 0x10;
    } while (var_a1_10 > 0);
    var_a3_6 = &sp320;
    var_a1_11 = 9;
    *var_t0_4 = *var_a2_10;
    var_a2_11 = &D_00454E00;
    do {
        var_a1_11 -= 1;
        *var_a3_6 = (s128) *var_a2_11;
        var_a2_11 += 0x10;
        var_a3_6 += 0x10;
    } while (var_a1_11 > 0);
    var_t0_5 = &sp280;
    var_a1_12 = 9;
    *var_a3_6 = *var_a2_11;
    var_a2_12 = &D_00454EA0;
    do {
        var_a1_12 -= 1;
        *var_t0_5 = (s128) *var_a2_12;
        var_a2_12 += 0x10;
        var_t0_5 += 0x10;
    } while (var_a1_12 > 0);
    var_a3_7 = &sp1E0;
    var_a1_13 = 9;
    *var_t0_5 = *var_a2_12;
    var_a2_13 = &D_00454F40;
    do {
        var_a1_13 -= 1;
        *var_a3_7 = (s128) *var_a2_13;
        var_a2_13 += 0x10;
        var_a3_7 += 0x10;
    } while (var_a1_13 > 0);
    var_t0_6 = &sp140;
    var_a1_14 = 9;
    *var_a3_7 = *var_a2_13;
    var_a2_14 = &D_00454FE0;
    do {
        var_a1_14 -= 1;
        *var_t0_6 = (s128) *var_a2_14;
        var_a2_14 += 0x10;
        var_t0_6 += 0x10;
    } while (var_a1_14 > 0);
    var_a3_8 = &spA0;
    var_a1_15 = 9;
    *var_t0_6 = *var_a2_14;
    var_a2_15 = &D_00455080;
    do {
        var_a1_15 -= 1;
        *var_a3_8 = (s128) *var_a2_15;
        var_a2_15 += 0x10;
        var_a3_8 += 0x10;
    } while (var_a1_15 > 0);
    var_t0_7 = sp;
    var_a1_16 = 9;
    *var_a3_8 = *var_a2_15;
    var_a2_16 = &D_00455120;
    do {
        var_a1_16 -= 1;
        *var_t0_7 = (s128) *var_a2_16;
        var_a2_16 += 0x10;
        var_t0_7 += 0x10;
    } while (var_a1_16 > 0);
    var_v0 = NULL;
    *var_t0_7 = *var_a2_16;
    spA54 = (f32) D_004700D0;
    if (arg0 >= 0x4000) {
        var_v0 = &spA54;
        var_v1 = 0x4000;
    } else if (arg0 >= 0x2000) {
        var_v0 = sp;
        var_v1 = 0x2000;
    } else if (arg0 >= 0x17D4) {
        var_v0 = sp;
        var_v1 = 0x17D4;
    } else if (arg0 >= 0x1770) {
        var_v0 = &spA0;
        var_v1 = 0x1770;
    } else if (arg0 >= 0x170C) {
        var_v0 = &sp140;
        var_v1 = 0x170C;
    } else if (arg0 >= 0x16A8) {
        var_v0 = &sp1E0;
        var_v1 = 0x16A8;
    } else if (arg0 >= 0x1644) {
        var_v0 = &sp280;
        var_v1 = 0x1644;
    } else if (arg0 >= 0x15E0) {
        var_v0 = &sp320;
        var_v1 = 0x15E0;
    } else if (arg0 >= 0x157C) {
        var_v0 = &sp3C0;
        var_v1 = 0x157C;
    } else if (arg0 >= 0x1518) {
        var_v0 = &sp460;
        var_v1 = 0x1518;
    } else if (arg0 >= 0x14B4) {
        var_v0 = &sp500;
        var_v1 = 0x14B4;
    } else if (arg0 >= 0x1450) {
        var_v0 = &sp5A0;
        var_v1 = 0x1450;
    } else if (arg0 >= 0x13EC) {
        var_v0 = &sp640;
        var_v1 = 0x13EC;
    } else if (arg0 >= 0x1388) {
        var_v0 = &sp6E0;
        var_v1 = 0x1388;
    } else if (arg0 >= 0xBB8) {
        var_v0 = &spA58;
        var_v1 = 0xBB8;
    } else if (arg0 >= 0xAF0) {
        var_v0 = &spA5C;
        var_v1 = 0xAF0;
    } else if (arg0 >= 0x960) {
        var_v0 = &sp780;
        var_v1 = 0x960;
    } else if (arg0 >= 0x8FC) {
        var_v0 = &sp7A0;
        var_v1 = 0x8FC;
    } else if (arg0 >= 0x898) {
        var_v0 = &sp840;
        var_v1 = 0x898;
    } else if (arg0 >= 0x834) {
        var_v0 = &sp8E0;
        var_v1 = 0x834;
    } else if (arg0 >= 0x7D0) {
        var_v0 = &sp980;
        var_v1 = 0x7D0;
    } else if (arg0 >= 0x64) {
        var_v0 = &spA20;
        var_v1 = 0x64;
    } else if (arg0 > 0) {
        var_v0 = &spA48;
        var_v1 = 1;
    }
    if (var_v0 == NULL) {
        return 0;
    }
    return *(var_v0 + ((arg0 - var_v1) * 4));
}
