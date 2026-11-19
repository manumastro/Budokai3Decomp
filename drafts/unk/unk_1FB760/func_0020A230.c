/* Draft (not built): func_0020A230 at 0x0020A230, size 0x29C, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 137 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x264, original 0x29C
 * Original: asm/nonmatchings/unk/unk_1FB760/func_0020A230.s */

// src/unk/unk_1FB760.c func_0020A230 size diff=137/153
extern s32 D_0047064C;
extern s32 D_0051D9A8;
extern s32 *D_0051DA40;
extern s32 D_0051FA00;
extern s32 D_0051FC3C;
extern s32 *D_0051FC40;
extern s32 D_00520C30;
extern s32 D_0052103C;
extern s32 *D_00521040;
extern s32 D_00525FF0;
extern s32 D_0052643C;
extern s32 D_0052843C;
extern s32 *D_00528440;
extern s32 D_005683C0;
extern s32 **D_00568484;
s32 func_0020A230(void) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a0_3;
    s32 *var_a0_4;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;

    memset(&D_0051D9A0, 0, 0x70);
    D_0051D9A0[0] = ((s32)((s32 *)1));
    D_0051D9A4[0] = 1;
    D_0051D9A8 = 0x3F800000;
    D_0051D9AC[0] = 0x3C888889;
    D_00470648 = 0;
    D_0047064C = 0;
    memset(&D_0051DA40, 0, 0x2000);
    memset(&D_0051FC40, 0, 0x1000);
    memset(&D_00521040, 0, 0x5000);
    memset(&D_00528440, 0, 0x40000);
    D_00470650 = 0;
    D_00470654 = 0;
    memset(&D_00568440, 0, 0x40);
    memset(&D_00568480, 0, 0x40);
    D_00568440[0] = (unsigned char *)(&D_00568480);
    var_a2 = 0x7F;
    D_00568484 = (int **)(&D_00568440);
    var_a1 = &D_0051FA00;
    var_a0 = &D_0051FC3C;
    do {
        *(s32 **)((u8 *)var_a0 + 0) = var_a1;
        *(u8 **)((u8 *)var_a0 + -4) = (u8 *) (var_a1 - 0x40);
        var_a2 -= 8;
        *(u8 **)((u8 *)var_a0 + -8) = (u8 *) (var_a1 - 0x80);
        *(u8 **)((u8 *)var_a0 + -0xC) = (u8 *) (var_a1 - 0xC0);
        *(u8 **)((u8 *)var_a0 + -0x10) = (u8 *) (var_a1 - 0x100);
        *(u8 **)((u8 *)var_a0 + -0x14) = (u8 *) (var_a1 - 0x140);
        *(u8 **)((u8 *)var_a0 + -0x18) = (u8 *) (var_a1 - 0x180);
        *(u8 **)((u8 *)var_a0 + -0x1C) = (u8 *) (var_a1 - 0x1C0);
        var_a1 -= 0x200;
        var_a0 -= 0x20;
    } while (var_a2 >= 0);
    D_00470658 = 0;
    var_a2_2 = 0xFF;
    D_0047065C = 0;
    var_a1_2 = &D_00520C30;
    var_a0_2 = &D_0052103C;
    do {
        *(s32 **)((u8 *)var_a0_2 + 0) = var_a1_2;
        *(u8 **)((u8 *)var_a0_2 + -4) = (u8 *) (var_a1_2 - 0x10);
        var_a2_2 -= 8;
        *(u8 **)((u8 *)var_a0_2 + -8) = (u8 *) (var_a1_2 - 0x20);
        *(u8 **)((u8 *)var_a0_2 + -0xC) = (u8 *) (var_a1_2 - 0x30);
        *(u8 **)((u8 *)var_a0_2 + -0x10) = (u8 *) (var_a1_2 - 0x40);
        *(u8 **)((u8 *)var_a0_2 + -0x14) = (u8 *) (var_a1_2 - 0x50);
        *(u8 **)((u8 *)var_a0_2 + -0x18) = (u8 *) (var_a1_2 - 0x60);
        *(u8 **)((u8 *)var_a0_2 + -0x1C) = (u8 *) (var_a1_2 - 0x70);
        var_a1_2 -= 0x80;
        var_a0_2 -= 0x20;
    } while (var_a2_2 >= 0);
    D_00470660 = 0;
    var_a2_3 = 0xFF;
    D_00470664 = 0;
    var_a1_3 = &D_00525FF0;
    var_a0_3 = &D_0052643C;
    do {
        *(s32 **)((u8 *)var_a0_3 + 0) = var_a1_3;
        *(u8 **)((u8 *)var_a0_3 + -4) = (u8 *) (var_a1_3 - 0x50);
        var_a2_3 -= 8;
        *(u8 **)((u8 *)var_a0_3 + -8) = (u8 *) (var_a1_3 - 0xA0);
        *(u8 **)((u8 *)var_a0_3 + -0xC) = (u8 *) (var_a1_3 - 0xF0);
        *(u8 **)((u8 *)var_a0_3 + -0x10) = (u8 *) (var_a1_3 - 0x140);
        *(u8 **)((u8 *)var_a0_3 + -0x14) = (u8 *) (var_a1_3 - 0x190);
        *(u8 **)((u8 *)var_a0_3 + -0x18) = (u8 *) (var_a1_3 - 0x1E0);
        *(u8 **)((u8 *)var_a0_3 + -0x1C) = (u8 *) (var_a1_3 - 0x230);
        var_a1_3 -= 0x280;
        var_a0_3 -= 0x20;
    } while (var_a2_3 >= 0);
    D_00470668 = 0;
    var_a2_4 = 0x7FF;
    D_0047066C = 0;
    var_a1_4 = &D_005683C0;
    var_a0_4 = &D_0052843C;
    do {
        *(s32 **)((u8 *)var_a0_4 + 0) = var_a1_4;
        *(u8 **)((u8 *)var_a0_4 + -4) = (u8 *) (var_a1_4 - 0x80);
        var_a2_4 -= 8;
        *(u8 **)((u8 *)var_a0_4 + -8) = (u8 *) (var_a1_4 - 0x100);
        *(u8 **)((u8 *)var_a0_4 + -0xC) = (u8 *) (var_a1_4 - 0x180);
        *(u8 **)((u8 *)var_a0_4 + -0x10) = (u8 *) (var_a1_4 - 0x200);
        *(u8 **)((u8 *)var_a0_4 + -0x14) = (u8 *) (var_a1_4 - 0x280);
        *(u8 **)((u8 *)var_a0_4 + -0x18) = (u8 *) (var_a1_4 - 0x300);
        *(u8 **)((u8 *)var_a0_4 + -0x1C) = (u8 *) (var_a1_4 - 0x380);
        var_a1_4 -= 0x400;
        var_a0_4 -= 0x20;
    } while (var_a2_4 >= 0);
    return 0;
}
