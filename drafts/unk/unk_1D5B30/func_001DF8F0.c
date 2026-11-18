/* Draft (not built): func_001DF8F0 at 0x001DF8F0, size 0x198, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); && func_001DF8F0(0, 0x1B) > 0) { @ 2760: if (*(s16 *)*(void **)((char *)c + 0xBB0) != 0 && func_001DF8F0(0, 0x1B) > 0) {
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DF8F0.s */

// src/unk/unk_1D5B30.c func_001DF8F0 cerr diff=-1/0
void func_001DF8F0(u8 *arg0, s32 arg1) {
    s16 temp_t0;
    s32 var_a2;
    s32 var_a3;
    s32 var_t1;
    u8 var_v1_2;
    u8 *var_a0;
    u8 *var_v1;

    var_a0 = arg0;
    if (var_a0 == NULL) {
        var_a3 = *(s32 *)((u8 *)gBattle + 0x88D8);
        var_a0 = (u8 *)(gBattle + 0x830);
    } else {
        var_a3 = 1;
    }
    if (arg1 < 0x64) {
        var_a2 = 0;
        if (var_a3 > 0) {
            if (var_a3 >= 9) {
                do {
                    var_a2 += 8;
                } while (var_a2 < (var_a3 - 8));
            }
            if (var_a2 < var_a3) {
                do {
                    var_a2 += 1;
                } while (var_a2 < var_a3);
            }
        }
    } else {
        var_t1 = 0;
        if (var_a3 > 0) {
            do {
                temp_t0 = *(s16 *)((u8 *)var_a0 + 0x1FF0);
                if (temp_t0 == 0) {
                    var_v1 = NULL;
                } else {
                    var_v1 = &D_004E0660 + (temp_t0 * 0x28);
                }
                if (var_v1 != NULL) {
                    var_v1_2 = *(u8 *)((u8 *)var_v1 + 0x15);
                } else {
                    var_v1_2 = 0;
                }
                if (arg1 == (var_v1_2 & 0xFF)) {

                }
                var_t1 += 1;
                var_a0 += 0x2020;
            } while (var_t1 < var_a3);
        }
    }
}
