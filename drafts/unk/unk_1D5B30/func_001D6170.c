/* Draft (not built): func_001D6170 at 0x001D6170, size 0x300, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 485: func_001E11E0(arg0, &sp20);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6170.s */

// src/unk/unk_1D5B30.c func_001D6170 cerr diff=-1/0
extern void func_0011F4C0(void);
void func_001D6170(u8 *arg0) {
    f32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f3;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_t0;
    s32 temp_a0;
    s32 var_a3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t5;
    u8 var_a0_2;
    u8 *temp_a2_2;
    u8 *temp_a3;
    u8 *temp_t1;
    u8 *temp_t7;
    u8 *var_a0;
    u8 *var_t0;
    u8 *var_t3;
    u8 *var_t4;

    var_t5 = 0;
    var_f3 = 0.0f;
    temp_t1 = *(u8 **)((u8 *)arg0 + 0x1CF4);
    temp_t0 = *(s16 *)((u8 *)temp_t1 + 0x34);
    var_t3 = (u8 *)(gBattle + 0x830);
    if (temp_t0 > 0) {
        var_t4 = temp_t1;
        var_t2 = 0;
loop_2:
        if (*(s16 *)((u8 *)var_t4 + 0x36) > 0) {
            temp_a3 = &D_004E0660 + (*(s16 *)((u8 *)(temp_t1 + var_t2) + 0x36) * 0x28);
            if (*(u8 *)((u8 *)temp_a3 + 0x15) == 5) {
                temp_f2 = *(f32 *)((u8 *)arg0 + 0x17C0);
                if (!(temp_f2 <= 500.0f)) {
                    *(f32 *)((u8 *)arg0 + 0x17C0) = (f32) (temp_f2 - (*(f32 *)((u8 *)gBattle + 0x88F0) * (f32) *(s16 *)((u8 *)temp_a3 + 0x18)));
                }
            } else {
                var_t5 += 1;
                var_t4 += 2;
                var_t2 += 2;
                if (var_t5 >= temp_t0) {

                } else {
                    goto loop_2;
                }
            }
        }
    }
    temp_a2 = *(s16 *)((u8 *)arg0 + 0x1FF0);
    if (temp_a2 == 0) {
        var_a0 = NULL;
    } else {
        var_a0 = &D_004E0660 + (temp_a2 * 0x28);
    }
    if (var_a0 != NULL) {
        var_a0_2 = *(u8 *)((u8 *)var_a0 + 0x15);
    } else {
        var_a0_2 = 0;
    }
    if ((var_a0_2 & 0xFF) != 0x6F) {
        temp_a0 = *(s32 *)((u8 *)gBattle + 0x88D8);
        var_t2_2 = 0;
        if (temp_a0 > 0) {
            do {
                temp_a2_2 = *(u8 **)((u8 *)var_t3 + 0x1CF4);
                temp_a1 = *(s16 *)((u8 *)temp_a2_2 + 0x34);
                var_t1 = 0;
                if (temp_a1 > 0) {
                    var_t0 = temp_a2_2;
                    var_a3 = 0;
loop_20:
                    if (*(s16 *)((u8 *)var_t0 + 0x36) > 0) {
                        temp_t7 = &D_004E0660 + (*(s16 *)((u8 *)(temp_a2_2 + var_a3) + 0x36) * 0x28);
                        if (*(u8 *)((u8 *)temp_t7 + 0x15) == 0x14) {
                            var_f3 += ((f32) *(s16 *)((u8 *)temp_t7 + 0x16) * (100.0f + *(f32 *)((u8 *)var_t3 + 0x1FB8))) / 100.0f;
                        }
                        var_t1 += 1;
                        var_t0 += 2;
                        var_a3 += 2;
                        if (var_t1 >= temp_a1) {

                        } else {
                            goto loop_20;
                        }
                    }
                }
                var_t2_2 += 1;
                var_t3 += 0x2020;
            } while (var_t2_2 < temp_a0);
        }
    }
    if (*(s16 *)((u8 *)gBattle + 0x7F8) == 3) {
        var_f3 += 1.0f;
    }
    if (!(var_f3 <= 0.0f)) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x17C0);
        if (!(temp_f1 <= 500.0f)) {
            *(f32 *)((u8 *)arg0 + 0x17C0) = (f32) (temp_f1 - (var_f3 * *(f32 *)((u8 *)gBattle + 0x88F0)));
        }
        func_0011F4C0();
        if (M2C_ERROR(/* Read from unset register $f0 */) < 0.0f) {

        }
        sp24 = 0x4000;
        sp28 = 0xC000C0;
        M2C_ERROR(/* unknown instruction: mula.s $f3, $f2 */);
        sp2C = 0xC000C0;
        sp20 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f1, $f0 */);
        func_001E11E0(arg0, &sp20);
    }
}
