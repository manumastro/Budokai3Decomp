/* Draft (not built): func_002DE2C0 at 0x002DE2C0, size 0x1A0, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 79 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B8, original 0x1A0
 * Original: asm/nonmatchings/menu/mn_option/func_002DE2C0.s */

// src/menu/mn_option.c func_002DE2C0 size diff=79/110
s32 func_002DE2C0(void) {
    s32 var_t4;
    s32 var_t5;
    s32 var_v0;
    u8 *temp_t3;
    u8 *var_a3;
    u8 *var_t0;
    u8 *var_t1;
    u8 *var_t2;

    var_v0 = 0;
    if (*(s16 *)((u8 *)D_004E05DC + 0) != *(s16 *)((u8 *)gOptionWork + 0x41A)) {
        var_v0 = 1;
    }
    if (*(s16 *)((u8 *)D_004E05DC + 2) != *(s16 *)((u8 *)gOptionWork + 0x41E)) {
        var_v0 += 1;
    }
    if (*(s16 *)((u8 *)D_004E05DC + 4) != *(s16 *)((u8 *)gOptionWork + 0x41C)) {
        var_v0 += 1;
    }
    var_t5 = 0;
    var_t2 = D_004E05DC;
    var_t1 = gOptionWork;
    var_t0 = gOptionWork;
    do {
        temp_t3 = var_t2 + 6;
        if (*(s8 *)((u8 *)var_t2 + 6) != *(s32 *)((u8 *)var_t1 + 0x420)) {
            var_v0 += 1;
        }
        if (*(s8 *)((u8 *)temp_t3 + 1) != *(s32 *)((u8 *)var_t1 + 0x468)) {
            var_v0 += 1;
        }
        var_t4 = 0;
        var_a3 = var_t0;
loop_12:
        if (*(s8 *)((u8 *)(&temp_t3[var_t4]) + 2) != *(s32 *)((u8 *)var_a3 + 0x428)) {
            var_v0 += 1;
        }
        var_t4 += 1;
        var_a3 += 4;
        if (var_t4 < 8) {
            goto loop_12;
        }
        var_t5 += 1;
        var_t2 += 0xA;
        var_t1 += 4;
        var_t0 += 0x20;
    } while (var_t5 < 2);
    if (*(s16 *)((u8 *)D_004E05DC + 0x2C) != *(s16 *)((u8 *)gOptionWork + 0x470)) {
        var_v0 += 1;
    }
    if (*(s16 *)((u8 *)D_004E05DC + 0x1E) != *(s16 *)((u8 *)gOptionWork + 0x472)) {
        var_v0 += 1;
    }
    if (*(s16 *)((u8 *)D_004E05DC + 0x20) != *(s16 *)((u8 *)gOptionWork + 0x474)) {
        var_v0 += 1;
    }
    if (*(s32 *)((u8 *)D_004E05DC + 0x24) != *(s16 *)((u8 *)gOptionWork + 0x476)) {
        var_v0 += 1;
    }
    if (*(s32 *)((u8 *)D_004E05DC + 0x28) != *(s16 *)((u8 *)gOptionWork + 0x478)) {
        var_v0 += 1;
    }
    if (*(s32 *)((u8 *)D_004E05DC + 0x30) != *(s32 *)((u8 *)gOptionWork + 0x480)) {
        var_v0 += 1;
    }
    if (*(f32 *)((u8 *)D_004E05DC + 0x34) != *(f32 *)((u8 *)gOptionWork + 0x484)) {
        var_v0 += 1;
    }
    if (*(f32 *)((u8 *)D_004E05DC + 0x38) != *(f32 *)((u8 *)gOptionWork + 0x488)) {
        var_v0 += 1;
    }
    return var_v0;
}
