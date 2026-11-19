/* Draft (not built): func_0026E000 at 0x0026E000, size 0x2E8, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 149 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2D0, original 0x2E8
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E000.s */

// src/menu/ess_main_2.c func_0026E000 size diff=149/180
extern s32 D_00452F00;
extern s32 D_004E0660;
void func_0026E000(u8 *arg0, s32 arg1) {
    u8 sp[0x400];
    s32 *var_t0;
    s32 *var_t2;
    s32 *var_t2_2;
    s32 temp_a3;
    s32 temp_t2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t1_7;
    s32 var_t2_3;
    s32 var_t3;
    s32 var_v1;
    u8 *var_t0_4;
    u8 *var_t1;
    u8 *var_t1_2;
    u8 *var_t1_3;
    u8 *var_t1_4;
    u8 *var_t1_5;
    u8 *var_t1_6;
    u8 *var_t1_8;
    u8 *var_t3_2;

    var_t2 = (int *)(sp);
    var_a2 = 0;
    var_t3 = 0;
    var_t1 = arg0;
    *(s128 *)((u8 *)sp + 0) = (s128) *(s128 *)((u8 *)(&D_00452F00) + 0);
    var_t0 = (int *)(sp);
    *(s64 *)((u8 *)sp + 0x10) = (s64) *(s64 *)((u8 *)(&D_00452F00) + 0x10);
    *(f32 *)((u8 *)sp + 0x18) = (f32) *(f32 *)((u8 *)(&D_00452F00) + 0x18);
    do {
        temp_v1 = *(s32 *)((u8 *)var_t1 + 4);
        if (temp_v1 > 0) {
            *var_t0 = temp_v1;
            var_a2 += 1;
            var_t0 += 4;
        }
        var_t3 += 1;
        var_t1 += 4;
    } while (var_t3 < 7);
    var_t0_2 = 0;
    if (var_a2 > 0) {
        if (var_a2 >= 9) {
            var_t1_2 = arg0;
            do {
                var_t0_2 += 8;
                *(s32 *)((u8 *)var_t1_2 + 4) = (s32) *(s32 *)((u8 *)var_t2 + 0);
                *(s32 *)((u8 *)var_t1_2 + 8) = (s32) *(s32 *)((u8 *)var_t2 + 4);
                *(s32 *)((u8 *)var_t1_2 + 0xC) = (s32) *(s32 *)((u8 *)var_t2 + 8);
                *(s32 *)((u8 *)var_t1_2 + 0x10) = (s32) *(s32 *)((u8 *)var_t2 + 0xC);
                *(s32 *)((u8 *)var_t1_2 + 0x14) = (s32) *(s32 *)((u8 *)var_t2 + 0x10);
                *(s32 *)((u8 *)var_t1_2 + 0x18) = (s32) *(s32 *)((u8 *)var_t2 + 0x14);
                *(s32 *)((u8 *)var_t1_2 + 0x1C) = (s32) *(s32 *)((u8 *)var_t2 + 0x18);
                *(s32 *)((u8 *)var_t1_2 + 0x20) = (s32) *(s32 *)((u8 *)var_t2 + 0x1C);
                var_t2 += 0x20;
                var_t1_2 += 0x20;
            } while (var_t0_2 < (var_a2 - 8));
        }
        temp_a3 = var_t0_2 * 4;
        if (var_t0_2 < var_a2) {
            var_t1_3 = arg0 + temp_a3;
            var_t2_2 = (int *)(temp_a3 + sp);
            do {
                var_t0_2 += 1;
                *(s32 *)((u8 *)var_t1_3 + 4) = (s32) *var_t2_2;
                var_t2_2 += 4;
                var_t1_3 += 4;
            } while (var_t0_2 < var_a2);
        }
    }
    var_t0_3 = var_a2;
    if (var_a2 < 7) {
        var_t1_4 = arg0 + (var_a2 * 4);
        do {
            var_t0_3 += 1;
            *(s32 *)((u8 *)var_t1_4 + 4) = -1;
            var_t1_4 += 4;
        } while (var_t0_3 < 7);
    }
    *(s32 *)((u8 *)arg0 + 0) = var_a2;
    var_v1 = 0;
    if (var_a2 > 0) {
        if (var_a2 >= 9) {
            var_t1_5 = arg0;
            do {
                var_v1 += 8;
                *(s32 *)((u8 *)var_t1_5 + 4) = (s32) (*(s32 *)((u8 *)var_t1_5 + 4) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 8) = (s32) (*(s32 *)((u8 *)var_t1_5 + 8) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0xC) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0xC) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0x10) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0x10) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0x14) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0x14) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0x18) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0x18) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0x1C) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0x1C) & 0xFFF);
                *(s32 *)((u8 *)var_t1_5 + 0x20) = (s32) (*(s32 *)((u8 *)var_t1_5 + 0x20) & 0xFFF);
                var_t1_5 += 0x20;
            } while (var_v1 < (var_a2 - 8));
        }
        if (var_v1 < var_a2) {
            var_t1_6 = arg0 + (var_v1 * 4);
            do {
                var_v1 += 1;
                *(s32 *)((u8 *)var_t1_6 + 4) = (s32) (*(s32 *)((u8 *)var_t1_6 + 4) & 0xFFF);
                var_t1_6 += 4;
            } while (var_v1 < var_a2);
        }
    }
    temp_t2 = arg1 & 0xF0;
    if (temp_t2 != 0xF0) {
        var_t1_7 = 0;
        if (var_a2 > 0) {
            var_t3_2 = arg0;
            do {
                if (!(temp_t2 & *(u8 *)((u8 *)(&D_004E0660 + (*(s32 *)((u8 *)var_t3_2 + 4) * 0x28)) + 0xB))) {
                    *(s32 *)((u8 *)var_t3_2 + 4) = -1;
                    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) - 1);
                }
                var_t1_7 += 1;
                var_t3_2 += 4;
            } while (var_t1_7 < var_a2);
        }
        var_a3 = 6;
        var_t1_8 = arg0 + 0x18;
        do {
            if (*(s32 *)((u8 *)var_t1_8 + 4) == -1) {
                var_t2_3 = var_a3;
                if (var_a3 < 5) {
                    var_t0_4 = arg0 + (var_a3 * 4);
                    do {
                        var_t2_3 += 1;
                        *(s32 *)((u8 *)var_t0_4 + 4) = (s32) *(s32 *)((u8 *)var_t0_4 + 8);
                        var_t0_4 += 4;
                    } while (var_t2_3 < 5);
                }
                *(s32 *)((u8 *)arg0 + 0x1C) = -1;
            }
            var_a3 -= 1;
            var_t1_8 -= 4;
        } while (var_a3 >= 0);
    }
}
