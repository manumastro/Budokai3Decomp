/* Draft (not built): func_002DE910 at 0x002DE910, size 0xEC, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0xEC
 * Original: asm/nonmatchings/menu/mn_option/func_002DE910.s */

// src/menu/mn_option.c func_002DE910 size diff=58/79
void func_002DE910(void) {
    s32 var_t2;
    s8 *var_t1;
    u8 *var_a3;
    u8 *var_t0;

    var_t2 = 0;
    var_t1 = (s8 *)(D_004E05DC[0]);
    var_t0 = gOptionWork;
    var_a3 = gOptionWork;
    *(s16 *)((u8 *)gOptionWork + 0x41A) = (s16) *(s16 *)((u8 *)D_004E05DC + 0);
    *(s16 *)((u8 *)gOptionWork + 0x41C) = (s16) *(s16 *)((u8 *)D_004E05DC + 4);
    *(s16 *)((u8 *)gOptionWork + 0x41E) = (s16) *(s16 *)((u8 *)D_004E05DC + 2);
    do {
        var_t2 += 1;
        *(s32 *)((u8 *)var_t0 + 0x420) = (s32) *(s8 *)((u8 *)var_t1 + 6);
        *(s32 *)((u8 *)var_t0 + 0x468) = (s32) *(s8 *)((u8 *)var_t1 + 7);
        var_t0 += 4;
        *(s32 *)((u8 *)var_a3 + 0x428) = (s32) *(s8 *)((u8 *)var_t1 + 8);
        *(s32 *)((u8 *)var_a3 + 0x42C) = (s32) *(s8 *)((u8 *)var_t1 + 9);
        *(s32 *)((u8 *)var_a3 + 0x430) = (s32) *(s8 *)((u8 *)var_t1 + 0xA);
        *(s32 *)((u8 *)var_a3 + 0x434) = (s32) *(s8 *)((u8 *)var_t1 + 0xB);
        *(s32 *)((u8 *)var_a3 + 0x438) = (s32) *(s8 *)((u8 *)var_t1 + 0xC);
        *(s32 *)((u8 *)var_a3 + 0x43C) = (s32) *(s8 *)((u8 *)var_t1 + 0xD);
        *(s32 *)((u8 *)var_a3 + 0x440) = (s32) *(s8 *)((u8 *)var_t1 + 0xE);
        *(s32 *)((u8 *)var_a3 + 0x444) = (s32) *(s8 *)((u8 *)var_t1 + 0xF);
        var_t1 += 0xA;
        var_a3 += 0x20;
    } while (var_t2 < 2);
    *(s16 *)((u8 *)gOptionWork + 0x470) = (s16) *(s16 *)((u8 *)D_004E05DC + 0x2C);
    *(s16 *)((u8 *)gOptionWork + 0x472) = (s16) *(s16 *)((u8 *)D_004E05DC + 0x1E);
    *(s16 *)((u8 *)gOptionWork + 0x474) = (s16) *(s16 *)((u8 *)D_004E05DC + 0x20);
    *(s16 *)((u8 *)gOptionWork + 0x476) = (s16) *(s32 *)((u8 *)D_004E05DC + 0x24);
    *(s16 *)((u8 *)gOptionWork + 0x478) = (s16) *(s32 *)((u8 *)D_004E05DC + 0x28);
    *(s32 *)((u8 *)gOptionWork + 0x47C) = (s32) *(s16 *)((u8 *)D_004E05DC + 0x1C);
    *(s32 *)((u8 *)gOptionWork + 0x480) = (s32) *(s32 *)((u8 *)D_004E05DC + 0x30);
    *(f32 *)((u8 *)gOptionWork + 0x484) = (f32) *(f32 *)((u8 *)D_004E05DC + 0x34);
    *(f32 *)((u8 *)gOptionWork + 0x488) = (f32) *(f32 *)((u8 *)D_004E05DC + 0x38);
}
