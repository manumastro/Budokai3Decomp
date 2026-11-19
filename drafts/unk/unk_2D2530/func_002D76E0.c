/* Draft (not built): func_002D76E0 at 0x002D76E0, size 0x2E0, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2EC, original 0x2E0
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D76E0.s */

// src/unk/unk_2D2530.c func_002D76E0 size diff=58/187
void func_002D76E0(void) {
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_s3_7;
    s32 var_s4;
    u8 *temp_s0;
    u8 *var_s1;
    u8 *var_s2_2;
    u8 *var_s2_3;
    u8 *var_s2_4;
    u8 *var_s2_5;
    u8 *var_s2_6;
    u8 *var_s2_7;

    temp_s0 = (unsigned char *)(gOptionWork);
    *(s32 *)((u8 *)temp_s0 + 0xAC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0xE0), 0);
    *(s32 *)((u8 *)temp_s0 + 0xB0) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x1EC), 0);
    *(s32 *)((u8 *)temp_s0 + 0xB4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x28), 0);
    *(s32 *)((u8 *)temp_s0 + 0xB8) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x2C), 0);
    *(s32 *)((u8 *)temp_s0 + 0xBC) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x30), 0);
    *(s32 *)((u8 *)temp_s0 + 0xC0) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x3C), 0);
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = temp_s0;
    do {
        *(s32 *)((u8 *)var_s1 + 0xC4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s2) + 0x574), 0);
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 4;
    } while (var_s3 < 4);
    var_s1_2 = 0;
    var_s3_2 = 0;
    var_s2_2 = temp_s0;
    do {
        *(s32 *)((u8 *)var_s2_2 + 0xD4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_2) + 0x2AC), 0);
        var_s1_2 += 1;
        var_s3_2 += 4;
        var_s2_2 += 4;
    } while (var_s1_2 < 8);
    var_s1_3 = 0;
    var_s3_3 = 0;
    var_s2_3 = temp_s0;
    do {
        *(s32 *)((u8 *)var_s2_3 + 0xF4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_3) + 0x53C), 0);
        *(s32 *)((u8 *)var_s2_3 + 0x108) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_3) + 0x52C), 0);
        var_s1_3 += 1;
        var_s3_3 += 4;
        var_s2_3 += 4;
    } while (var_s1_3 < 2);
    var_s1_4 = 0;
    var_s3_4 = 0;
    var_s2_4 = temp_s0;
    do {
        *(s32 *)((u8 *)var_s2_4 + 0xFC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_4) + 0x520), 0);
        var_s1_4 += 1;
        var_s3_4 += 4;
        var_s2_4 += 4;
    } while (var_s1_4 < 3);
    var_s1_5 = 0;
    var_s3_5 = 0;
    do {
        var_s4 = 0;
        var_s2_5 = temp_s0 + var_s3_5;
loop_10:
        *(s32 *)((u8 *)var_s2_5 + 0x110) = func_0022D670(*(s32 *)((u8 *)(var_s3_5 + *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x2EC), 0);
        var_s4 += 1;
        var_s2_5 += 0x28;
        if (var_s4 < 8) {
            goto loop_10;
        }
        var_s1_5 += 1;
        var_s3_5 += 4;
    } while (var_s1_5 < 0xA);
    var_s1_6 = 0;
    var_s3_6 = 0;
    var_s2_6 = temp_s0;
    do {
        *(s32 *)((u8 *)var_s2_6 + 0x26C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_6) + 0x10C), 0);
        *(s32 *)((u8 *)var_s2_6 + 0x25C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_6) + 0x5F0), 0);
        var_s1_6 += 1;
        var_s3_6 += 4;
        var_s2_6 += 4;
    } while (var_s1_6 < 2);
    *(s32 *)((u8 *)temp_s0 + 0x250) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x584), 0);
    var_s1_7 = 1;
    var_s3_7 = 4;
    var_s2_7 = temp_s0 + 4;
    do {
        var_s1_7 += 1;
        *(s32 *)((u8 *)var_s2_7 + 0x250) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C) + var_s3_7) + 0x588), 0);
        var_s3_7 += 4;
        var_s2_7 += 4;
    } while (var_s1_7 < 3);
}
