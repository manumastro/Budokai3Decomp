/* Draft (not built): func_001D7450 at 0x001D7450, size 0x5A0, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 302 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x4BC, original 0x5A0
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D7450.s */

// src/unk/unk_1D5B30.c func_001D7450 size diff=302/303
extern void func_0011F4C0(void);
void func_001D7450(void *arg0) {
    f32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    u8 sp58;
    u8 sp59;
    u8 sp5A;
    u8 sp5C;
    u8 sp5D;
    u8 sp5E;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f4;
    f32 var_f0;
    f32 var_f20;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f2_4;
    f32 var_v1;
    f32 var_v1_2;
    f32 var_v1_3;
    f32 var_v1_4;
    f32 var_v1_5;
    f32 var_v1_6;
    s32 temp_a1;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_s1;

    var_f20 = *(f32 *)((u8 *)arg0 + 0x44);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_f0 = 30.0f;
    sp5C = (f32) *(f32 *)((u8 *)arg0 + 0x3C);
    sp58 = (f32) *(f32 *)((u8 *)arg0 + 0x40);
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x38);
    temp_s1 = ((u8 *)arg0) + 0x30;
    if (temp_f1 <= 30.0f) {
        var_f0 = temp_f1 / 30.0f;
        var_f20 *= var_f0;
        if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
            if (*(s32 *)((u8 *)temp_s1 + 4) < 2) {
                var_f0 = temp_f1 + *(f32 *)((u8 *)gBattle + 0x88F0);
                *(f32 *)((u8 *)temp_s1 + 8) = var_f0;
            } else {
                var_f0 = temp_f1 - *(f32 *)((u8 *)gBattle + 0x88F0);
                *(f32 *)((u8 *)temp_s1 + 8) = var_f0;
            }
        }
    }
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 4);
    switch (temp_a1) {                              /* irregular */
    case 0:
        if (((f32) var_f0 / 45.0f) != ((f32) (*(f32 *)((u8 *)gBattle + 0x8918) - *(f32 *)((u8 *)gBattle + 0x88F0)) / 45.0f)) {
            *(s32 *)((u8 *)temp_s1 + 4) = 1;
        case 1:
            func_0011F4C0();
            if (M2C_ERROR(/* Read from unset register $f0 */) < 0.0f) {

            }
            temp_f1_2 = 1.0f - M2C_ERROR(/* Read from unset register $f0 */);
            if ((s32) sp5C >= 0) {
                var_f2 = (f32) sp5C;
            } else {
                var_f2 = 2.0f * (f32) ((sp5C >> 1) | (sp5C & 1));
            }
            temp_f3 = (200.0f * M2C_ERROR(/* Read from unset register $f0 */)) + (var_f2 * temp_f1_2);
            if (!(temp_f3 >= 2.1474836e9f)) {
                var_v1 = temp_f3;
            } else {
                var_v1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3 - 2.1474836e9f)) | 0x80000000));
            }
            sp5C = M2C_BITWISE(u8, var_v1);
            if ((s32) sp5D >= 0) {

            }
            M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
            temp_f3_2 = M2C_ERROR(/* unknown instruction: madd.s $f3, $f3, $f0 */);
            if (!(temp_f3_2 >= 2.1474836e9f)) {
                var_v1_2 = temp_f3_2;
            } else {
                var_v1_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_2 - 2.1474836e9f)) | 0x80000000));
            }
            sp5D = M2C_BITWISE(u8, var_v1_2);
            if ((s32) sp5E >= 0) {

            }
            M2C_ERROR(/* unknown instruction: mula.s $f2, $f1 */);
            temp_f3_3 = M2C_ERROR(/* unknown instruction: madd.s $f3, $f3, $f0 */);
            if (!(temp_f3_3 >= 2.1474836e9f)) {
                var_v1_3 = temp_f3_3;
            } else {
                var_v1_3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_3 - 2.1474836e9f)) | 0x80000000));
            }
            sp5E = M2C_BITWISE(u8, var_v1_3);
            if ((s32) sp58 >= 0) {
                var_f2_2 = (f32) sp58;
            } else {
                var_f2_2 = 2.0f * (f32) ((sp58 >> 1) | (sp58 & 1));
            }
            temp_f3_4 = (255.0f * M2C_ERROR(/* Read from unset register $f0 */)) + (var_f2_2 * temp_f1_2);
            if (!(temp_f3_4 >= 2.1474836e9f)) {
                var_v1_4 = temp_f3_4;
            } else {
                var_v1_4 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_4 - 2.1474836e9f)) | 0x80000000));
            }
            sp58 = M2C_BITWISE(u8, var_v1_4);
            temp_v0 = sp59;
            temp_f4 = 240.0f * M2C_ERROR(/* Read from unset register $f0 */);
            if ((s32) temp_v0 >= 0) {
                var_f2_3 = (f32) temp_v0;
            } else {
                var_f2_3 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
            }
            temp_f3_5 = temp_f4 + (var_f2_3 * temp_f1_2);
            if (!(temp_f3_5 >= 2.1474836e9f)) {
                var_v1_5 = temp_f3_5;
            } else {
                var_v1_5 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_5 - 2.1474836e9f)) | 0x80000000));
            }
            sp59 = M2C_BITWISE(u8, var_v1_5);
            temp_v0_2 = sp5A;
            if ((s32) temp_v0_2 >= 0) {
                var_f2_4 = (f32) temp_v0_2;
            } else {
                var_f2_4 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
            }
            temp_f3_6 = temp_f4 + (var_f2_4 * temp_f1_2);
            if (!(temp_f3_6 >= 2.1474836e9f)) {
                var_v1_6 = temp_f3_6;
            } else {
                var_v1_6 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f3_6 - 2.1474836e9f)) | 0x80000000));
            }
            sp5A = M2C_BITWISE(u8, var_v1_6);
            M2C_ERROR(/* unknown instruction: mula.s $f22, $f1 */);
            var_f20 = M2C_ERROR(/* unknown instruction: madd.s $f20, $f21, $f0 */);
            if (*(s8 *)((u8 *)temp_s0 + 0x2010) == 0) {
                *(f32 *)((u8 *)temp_s1 + 8) = 30.0f;
                *(s32 *)((u8 *)temp_s1 + 4) = 2;
                *(f32 *)((u8 *)temp_s1 + 0x14) = var_f20;
                *(f32 *)((u8 *)temp_s1 + 0xC) = (f32) sp5C;
                *(f32 *)((u8 *)temp_s1 + 0x10) = (f32) sp58;
            }
        }
        break;
    case 2:
        if (*(f32 *)((u8 *)temp_s1 + 8) <= 0.0f) {
            *(s32 *)((u8 *)temp_s0 + 0x1AB4) = 0;
            amTask_Kill(arg0);
        }
        break;
    }
    sp44 = 0x2000;
    sp40 = var_f20;
    sp48 = (s32) sp5C;
    sp4C = (s32) sp58;
    func_001E11E0((s32)(temp_s0), (void *)(&sp40));
}
