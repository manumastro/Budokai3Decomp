/* Draft (not built): func_001C5FE0 at 0x001C5FE0, size 0x13C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x13C
 * Original: asm/nonmatchings/battle/btl_main/func_001C5FE0.s */

// src/battle/btl_main.c func_001C5FE0 size diff=32/77
void func_001C5FE0(s32 arg0) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 *temp_s0;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_v1;
    u8 *var_v1_2;

    temp_s0 = (u8 *)(gBattle);
    if (arg0 != 0) {
        func_001D8710(0);
        return;
    }
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x88D8);
    if (temp_v1 >= 3) {
        var_a2 = 0;
        if (temp_v1 > 0) {
            var_a1 = temp_s0;
            var_a0 = temp_s0;
            do {
                *(u8 **)((u8 *)var_a0 + 0x8934) = (u8 *) (var_a1 + 0x830);
                var_a2 += 1;
                var_a1 += 0x2020;
                var_a0 += 4;
            } while (var_a2 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
        }
        return;
    }
    var_s3 = 0;
    var_s2 = 0;
    var_s1 = 0;
    do {
        if (func_001D89E0(temp_s0 + 0x830, var_s1) != 0) {
            var_s3 = var_s1;
        }
        if (func_001D89E0(temp_s0 + 0x2850, var_s1) != 0) {
            var_s2 = var_s1;
        }
        var_s1 += 1;
    } while (var_s1 < 2);
    var_v1 = temp_s0 + 0x830;
    if (var_s3 < var_s2) {
        var_v1 = temp_s0 + 0x2850;
    }
    *(u8 **)((u8 *)temp_s0 + 0x8934) = var_v1;
    if (var_s3 < var_s2) {
        var_v1_2 = temp_s0 + 0x830;
    } else {
        var_v1_2 = temp_s0 + 0x2850;
    }
    *(u8 **)((u8 *)temp_s0 + 0x8938) = var_v1_2;
}
