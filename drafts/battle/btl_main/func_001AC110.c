/* Draft (not built): func_001AC110 at 0x001AC110, size 0x130, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x130
 * Original: asm/nonmatchings/battle/btl_main/func_001AC110.s */

// src/battle/btl_main.c func_001AC110 size diff=47/72
extern u8 D_00492FC0[];
s32 func_001AC110(void) {
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_t4;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t5;
    s32 var_v0;
    u8 *temp_v1;
    u8 *var_a2;
    u8 *var_a2_2;

    var_v0 = 0;
    var_a3 = 0;
    temp_a1 = *(s32 *)((u8 *)gBattle + 0x88D8);
    temp_v1 = (unsigned char *)(gBattle + 0x830);
    if (temp_a1 > 0) {
        var_a2 = temp_v1;
        do {
            if (*(s16 *)((u8 *)var_a2 + 0x13A4) >= 0) {
                var_v0 += 1;
            }
            var_a3 += 1;
            var_a2 += 0x2020;
        } while (var_a3 < temp_a1);
    }
    var_t3 = 0;
    temp_a3 = *(s32 *)((u8 *)gBattle + 0x88D8);
loop_6:
    var_t2 = 0;
loop_7:
    temp_t4 = (var_t2 & 1) | ((var_t3 & 3) * 2);
    var_t5 = -1;
    var_t1 = 0;
    if (temp_a3 > 0) {
        var_a2_2 = temp_v1;
loop_9:
        if (temp_t4 == *(s16 *)((u8 *)var_a2_2 + 0x13A4)) {
            var_t5 = var_t1;
        } else {
            var_t1 += 1;
            var_a2_2 += 0x2020;
            if (var_t1 < temp_a3) {
                goto loop_9;
            }
        }
    }
    if (((var_t5 >= 0) || (var_v0 <= 0)) && (*(u16 *)((u8 *)(((u8 *)&D_00492FC0) + (temp_t4 * 0xB8)) + 0xE) & 8)) {
        return 1;
    }
    var_t2 += 1;
    if (var_t2 >= 2) {
        var_t3 += 1;
        if (var_t3 >= 4) {
            return 0;
        }
        goto loop_6;
    }
    goto loop_7;
}
