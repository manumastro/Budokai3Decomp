/* Draft (not built): func_002700E0 at 0x002700E0, size 0x1B4, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 91 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1EC, original 0x1B4
 * Original: asm/nonmatchings/unk/unk_26FF30/func_002700E0.s */

// src/unk/unk_26FF30.c func_002700E0 size diff=91/123
extern s32 D_004E0688;
void func_002700E0(void) {
    s32 *var_a1_2;
    s32 *var_t0;
    s16 var_a0_2;
    s16 var_a3;
    s32 temp_t4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3_2;
    s32 var_t0_2;
    s32 var_t1_2;
    s32 var_t2;
    s64 var_t3;
    u8 *var_a2;
    u8 *var_t1;
    u8 *temp_t5;
    u8 *temp_t5_2;

    var_t2 = 0;
    var_t3 = 0;
    var_a1 = 0;
    var_a0 = 0;
    temp_t4 = *(s32 *)((u8 *)D_004707FC + 0x54);
    do {
        var_t1 = (unsigned char *)(temp_t4 + 1);
        var_t0 = &D_004E0688;
        var_a3 = 1;
        *(s32 *)((u8 *)(D_004707FC + var_a1) + 0x5DC) = -1;
loop_2:
        if ((*(s64 *)((u8 *)var_t0 + 0) == (1 << var_t3)) && !(*(u8 *)((u8 *)var_t0 + 0xA) & 3) && (*var_t1 != 0)) {
            temp_t5 = (unsigned char *)(var_a1 + D_004707FC);
            if (*(s32 *)((u8 *)temp_t5 + 0x5DC) == -1) {
                *(s32 *)((u8 *)temp_t5 + 0x5DC) = var_t2;
            }
            var_t2 += 1;
            *(s16 *)((u8 *)(D_004707FC + var_a0) + 0x134) = var_a3;
            var_a0 += 2;
        }
        var_a3 += 1;
        var_t1 += 1;
        var_t0 += 0x28;
        if (var_a3 < 0x253) {
            goto loop_2;
        }
        var_t3 += 1;
        var_a1 += 4;
    } while (var_t3 < 0x2D);
    var_t1_2 = 1;
    if (var_t3 < 0x30) {
        var_t0_2 = var_t3 * 4;
        var_a3_2 = var_t2 * 2;
        do {
            var_a2 = (unsigned char *)(temp_t4 + 1);
            var_a1_2 = &D_004E0688;
            var_a0_2 = 1;
            *(s32 *)((u8 *)(D_004707FC + var_t0_2) + 0x5DC) = -1;
loop_13:
            if (((*(u8 *)((u8 *)var_a1_2 + 0xA) & 3) == var_t1_2) && ((s32) *var_a2 > 0)) {
                temp_t5_2 = (unsigned char *)(var_t0_2 + D_004707FC);
                if (*(s32 *)((u8 *)temp_t5_2 + 0x5DC) == -1) {
                    *(s32 *)((u8 *)temp_t5_2 + 0x5DC) = var_t2;
                    *(s32 *)((u8 *)(var_t0_2 + D_004707FC) + 0x69C) = var_t2;
                }
                var_t2 += 1;
                *(s16 *)((u8 *)(D_004707FC + var_a3_2) + 0x134) = var_a0_2;
                var_a3_2 += 2;
            }
            var_a0_2 += 1;
            var_a2 += 1;
            var_a1_2 += 0x28;
            if (var_a0_2 < 0x253) {
                goto loop_13;
            }
            var_t3 += 1;
            var_t1_2 += 1;
            var_t0_2 += 4;
        } while (var_t3 < 0x30);
    }
    *(s32 *)((u8 *)D_004707FC + 0x60) = (s32) *(s16 *)((u8 *)((var_t2 * 2) + D_004707FC) + 0x132);
    *(s32 *)((u8 *)D_004707FC + 0x5C) = (s32) *(s16 *)((u8 *)D_004707FC + 0x134);
    *(s32 *)((u8 *)D_004707FC + 0x58) = var_t2;
}
