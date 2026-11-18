/* Draft (not built): func_002C1160 at 0x002C1160, size 0x1BC, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x190, original 0x1BC
 * Original: asm/nonmatchings/story/str_status/func_002C1160.s */

// src/story/str_status.c func_002C1160 size diff=67/100
void func_002C1160(u8 *arg0) {
    s16 sp50;
    s32 *sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s16 *var_s0;
    s32 **var_s1;
    s32 **var_v1;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_3;

    var_v0 = 0x24;
    var_v1 = &sp70;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp70 = (s32 *)(arg0 + 0xC);
    sp74 = (s32)(arg0 + 0x10);
    sp78 = (s32)(arg0 + 0x14);
    sp7C = (s32)(arg0 + 0x18);
    sp80 = (s32)(arg0 + 0x1C);
    sp84 = (s32)(arg0 + 0x20);
    sp88 = (s32)(arg0 + 0x2C);
    sp8C = (s32)(arg0 + 0x28);
    sp90 = (s32)(arg0 + 0x30);
    *(s128 *)((u8 *)(&sp50) + 0) = (s128) *(s128 *)((u8 *)(&D_00456380) + 0);
    *(s16 *)((u8 *)(&sp50) + 0x10) = (s16) *(s16 *)((u8 *)(&D_00456380) + 0x10);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    var_s2 = 0;
    var_s1 = &sp70;
    var_s0 = &sp50;
    do {
        temp_a0_2 = **var_s1;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        temp_v0 = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (*var_s0 * 4)), 0);
        var_s2 += 1;
        var_s0 += 2;
        **var_s1 = temp_v0;
        var_s1 += 4;
    } while (var_s2 < 9);
    temp_a0_3 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (s32)(temp_a0_3);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_3), 0x2000);
    D_00470238 = 0;
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
        *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x80), 0);
    }
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
        *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x84), 0);
    }
}
