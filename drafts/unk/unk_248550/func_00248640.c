/* Draft (not built): func_00248640 at 0x00248640, size 0x2C4, segment unk/unk_248550 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'D_0046FE50' redeclared was declared as: 'int' now declared as: 'struct PackRefs *' @ 174: extern PackRefs *D_0046FE50;
 * Original: asm/nonmatchings/unk/unk_248550/func_00248640.s */

// src/unk/unk_248550.c func_00248640 cerr diff=-1/0
extern void memset(void *, s32, s32);
s16 func_0020F690();
s32 func_00214F80(s16, s32 *);
s32 func_0025BD40(s32 *);
s32 func_002CA2F0(s32 *);
extern void *D_0046FE4C;
extern void *gBattle;
extern void func_00214DD0();
extern s32 D_0046FE50;
void func_00248640(s32 arg0, u8 *arg1, s32 arg2) {
    s32 sp50;
    u8 *sp60;
    s16 sp78;
    s16 sp7A;
    s16 sp7E;
    s32 sp80;
    u8 *sp90;
    s16 sp94;
    s16 sp96;
    s32 spA0;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    f32 spBC;
    s16 spF0;
    s16 spF2;
    s16 spF4;
    s16 spF6;
    s16 spF8;
    s16 spFA;
    s16 spFC;
    s16 spFE;
    u8 *sp100;
    s32 sp104;
    s32 sp108;
    u8 *sp10C;
    s32 sp110;
    s32 sp118;
    s32 sp11C;
    f32 sp120;
    f32 sp124;
    s16 sp130;
    s16 sp134;
    s16 sp136;
    s16 sp138;
    s16 sp13A;
    s16 sp13E;
    s16 sp140;
    s16 sp142;
    s16 sp144;
    s16 sp146;
    s16 sp14A;
    s16 sp14C;
    s16 temp_a0;
    s16 var_v0;
    s16 var_v0_2;
    s32 temp_a3;
    s32 var_t0;
    s32 var_v0_3;
    u8 *temp_s0;

    temp_a3 = *(s32 *)((u8 *)arg1 + 0x1350);
    temp_s0 = (unsigned char *)(*(s32 *)(D_0046FE50 + (temp_a3 * 4)) + (arg0 * 0xD0));
    temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x70);
    var_t0 = 0;
    if (temp_a0 != 5) {
        if (temp_a0 == 6) {
            goto block_3;
        }
        if (*(s16 *)((u8 *)temp_s0 + 0x5E) != 0) {
            goto block_7;
        }
    } else {
block_3:
        if ((*(s16 *)((u8 *)temp_s0 + 0x5E) == 0) && (*(s16 *)((u8 *)temp_s0 + 0x60) != 0)) {
block_7:
            var_t0 = 1;
        }
    }
    if (var_t0 != 0) {
        memset(&spA0, 0, 0xB0);
        if ((arg2 >= 0) && (var_v0 = 2, ((arg2 < 0x64) != 0))) {

        } else if ((arg2 >= 0x64) && (var_v0 = 0x400, ((arg2 < 0xC8) != 0))) {

        } else {
            var_v0 = 0x10;
        }
        spF0 = var_v0;
        sp100 = temp_s0;
        spF2 = *(s16 *)((u8 *)temp_s0 + 0x70);
        spF4 = *(s16 *)((u8 *)temp_s0 + 0x72);
        spF6 = *(s16 *)((u8 *)temp_s0 + 0x74);
        spF8 = *(s16 *)((u8 *)temp_s0 + 0x76);
        spB0 = *(f32 *)((u8 *)temp_s0 + 0x10);
        spB4 = *(f32 *)((u8 *)temp_s0 + 0x14);
        spB8 = *(f32 *)((u8 *)temp_s0 + 0x18);
        spBC = *(f32 *)((u8 *)temp_s0 + 0x1C);
        sp134 = *(s16 *)((u8 *)temp_s0 + 0x52);
        sp136 = *(s16 *)((u8 *)temp_s0 + 0x54);
        sp138 = *(s16 *)((u8 *)temp_s0 + 0x56);
        sp13A = *(s16 *)((u8 *)temp_s0 + 0x58);
        sp13E = *(s16 *)((u8 *)temp_s0 + 0x5A);
        sp140 = *(s16 *)((u8 *)temp_s0 + 0x5C);
        sp142 = *(s16 *)((u8 *)temp_s0 + 0x5E);
        sp144 = *(s16 *)((u8 *)temp_s0 + 0x60);
        sp146 = *(s16 *)((u8 *)temp_s0 + 0x62);
        sp14A = *(s16 *)((u8 *)temp_s0 + 0x64);
        sp10C = arg1;
        sp130 = func_0020F690();
        sp120 = *(f32 *)((u8 *)temp_s0 + 0x78);
        sp108 = arg0;
        if (gBattle != NULL) {
            var_v0_2 = *(s16 *)((u8 *)gBattle + 0x8944);
        } else {
            var_v0_2 = 0;
        }
        if ((var_v0_2 != 0) && (*(s16 *)((u8 *)D_0046FE4C + 0x914) != 0)) {
            var_v0_3 = *(s32 *)((u8 *)D_0046FE4C + 0x910);
        } else {
            var_v0_3 = *(s32 *)((u8 *)temp_s0 + 0x80);
        }
        sp118 = var_v0_3;
        sp104 = arg2;
        sp11C = *(s32 *)((u8 *)temp_s0 + 0xA4);
        sp124 = *(f32 *)((u8 *)temp_s0 + 0x84);
        sp110 = *(s32 *)((u8 *)temp_s0 + 0x7C);
        spFA = *(s16 *)((u8 *)temp_s0 + 0x6C);
        spFC = *(s16 *)((u8 *)temp_s0 + 0x6E);
        sp14C = *(s16 *)((u8 *)temp_s0 + 0xB0);
        spFE = *(s16 *)((u8 *)temp_s0 + 0xB2);
        func_00214DD0(&spA0);
        func_00214F80(*(s16 *)((u8 *)temp_s0 + 0x70), &spA0);
    }
    if (*(s16 *)((u8 *)temp_s0 + 0x64) != 0) {
        sp90 = arg1;
        sp94 = *(s16 *)((u8 *)temp_s0 + 0x5A);
        sp96 = *(s16 *)((u8 *)temp_s0 + 0x64);
        func_0025BD40(&sp80);
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xAE) != 0) {
        memset(&sp50, 0, 0x30);
        sp60 = arg1;
        sp78 = *(s16 *)((u8 *)temp_s0 + 0xAC);
        sp7A = *(s16 *)((u8 *)temp_s0 + 0xAE);
        sp7E = 2;
        func_002CA2F0(&sp50);
    }
}
