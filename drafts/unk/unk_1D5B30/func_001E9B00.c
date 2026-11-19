/* Draft (not built): func_001E9B00 at 0x001E9B00, size 0x210, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x208, original 0x210
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E9B00.s */

// src/unk/unk_1D5B30.c func_001E9B00 size diff=64/130
s32 func_001441F0(s32 *, s32, void *, s32 *, f32, s32, s32);
void func_001E9B00(void *arg0, s32 arg1, s32 arg2, void *arg3, f32 fparg0, f32 fparg1) {
    s32 sp40;
    s32 *var_a3;
    f32 temp_f13;
    s32 temp_a0_2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_t0;
    u8 *temp_v1;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *var_s0;

    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    var_s0 = (unsigned char *)(gBattle);
    var_s2 = var_a1;
    if ((s32)(arg0) >= (s32)(0)) {
        if ((s32)(arg0) >= (s32)(4)) {

        } else {
            var_s1 = ((s32)(arg0)) * 0xCC;
            temp_v1 = var_s0 + var_s1;
            temp_f13 = fparg1 * *(f32 *)((u8 *)temp_v1 + 0x2CC);
            temp_t0 = temp_v1 + 0x290;
            if (!(temp_f13 <= 0.0f) && !(*(s32 *)((u8 *)temp_t0 + 0x40) & var_a2)) {
                if (!(fparg0 <= 0.0f)) {
                    var_a1 = *(s32 *)((u8 *)temp_t0 + 0xC4);
                    temp_v1_2 = *(s32 *)((u8 *)temp_t0 + 0xC8);
                    var_a2 = 0;
                    if (var_a1 == temp_v1_2) {

                    } else {
                        var_a0 = (s32) (temp_v1_2 + 0xF) % 16;
loop_10:
                        temp_v1_3 = temp_t0 + (var_a0 * 8);
                        var_a2 = (s32) (temp_v1_3 + 0x44);
                        if (*(s32 *)((u8 *)temp_v1_3 + 0x44) == var_s2) {

                        } else {
                            var_a0 = (s32) (var_a0 + 0xF) % 16;
                            var_a2 = 0;
                            if (var_a1 != var_a0) {
                                goto loop_10;
                            }
                        }
                    }
                    if ((var_a2 == 0) || ((*(f32 *)((u8 *)var_a2 + 4) + fparg0) <= *(f32 *)((u8 *)var_s0 + 0x8908))) {
                        goto block_15;
                    }
                } else {
block_15:
                    if (var_a3 == NULL) {
                        var_a3 = &sp40;
                    }
                    *(s32 *)((u8 *)var_a3 + 0) = (s32) *(s32 *)((u8 *)temp_t0 + 0x20);
                    *(u32 *)((u8 *)var_a3 + 4) = (u32) *(u32 *)((u8 *)var_s0 + 0x5C0);
                    *(s32 *)((u8 *)var_a3 + 0xC) = var_s2;
                    *(s32 *)((u8 *)var_a3 + 8) = 0;
                    func_001441F0(var_a3, var_a1, (u8 *) var_a2, var_a3, temp_f13, 0, 0);
                    *(u32 *)((u8 *)var_s0 + 0x5C0) = (u32) (*(u32 *)((u8 *)var_s0 + 0x5C0) + 1);
                    if ((u32) *(u32 *)((u8 *)var_s0 + 0x5C0) >= 0x12100000U) {
                        *(u32 *)((u8 *)var_s0 + 0x5C0) = 0x12000000U;
                    }
                    temp_a0 = (unsigned char *)(gBattle + var_s1);
                    temp_a2 = temp_a0 + 0x290;
                    temp_v1_4 = temp_a2 + (*(s32 *)((u8 *)temp_a0 + 0x358) * 8);
                    *(s32 *)((u8 *)temp_v1_4 + 0x44) = var_s2;
                    *(f32 *)((u8 *)temp_v1_4 + 0x48) = (f32) *(f32 *)((u8 *)gBattle + 0x8908);
                    *(s32 *)((u8 *)temp_a2 + 0xC8) = (s32) ((s32) (*(s32 *)((u8 *)temp_a0 + 0x358) + 1) % 16);
                    temp_a0_2 = *(s32 *)((u8 *)temp_a2 + 0xC4);
                    if (temp_a0_2 == *(s32 *)((u8 *)temp_a2 + 0xC8)) {
                        *(s32 *)((u8 *)temp_a2 + 0xC4) = (s32) ((s32) (temp_a0_2 + 1) % 16);
                    }
                }
            }
        }
    }
}
