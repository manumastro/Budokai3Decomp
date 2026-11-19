/* Draft (not built): func_001AD2E0 at 0x001AD2E0, size 0x288, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x25C, original 0x288
 * Original: asm/nonmatchings/battle/btl_main/func_001AD2E0.s */

// src/battle/btl_main.c func_001AD2E0 size diff=88/151
extern s8 D_004B4B59[];
extern s8 D_004B4B63;
extern s16 D_005C9F04;
void func_001AD2E0(void) {
    s16 temp_a1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gBattle);
    *(f32 *)((u8 *)temp_s0 + 0x8910) = (f32) *(f32 *)((u8 *)temp_s0 + 0x890C);
    *(f32 *)((u8 *)gBattle + 0x890C) = (f32) (*(f32 *)((u8 *)gBattle + 0x890C) + *(f32 *)((u8 *)gBattle + 0x88F0));
    if (!(*(f32 *)((u8 *)gBattle + 0x890C) <= 1e8f)) {
        *(f32 *)((u8 *)gBattle + 0x8910) = 0.0f;
        *(f32 *)((u8 *)gBattle + 0x890C) = (f32) *(f32 *)((u8 *)gBattle + 0x88F0);
    }
    var_a0 = func_001AC110();
    if (!(*(f32 *)((u8 *)temp_s0 + 0x890C) < 390.0f)) {
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        temp_a1 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
        switch (temp_a1) {                          /* irregular */
        case 0:
            D_004682FC(2, temp_a1);
            return;
        case 1:
            D_00470574 = 2;
            D_004682FC(2, temp_a1);
            return;
        case 2:
            temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x8904);
            if (temp_v1 >= 0) {
                if (D_004B4B59 == 0) {
                    var_v0 = -1;
                    if (temp_v1 == D_004B4B63) {

                    } else {
                        var_v0 = 1;
                    }
                } else {
                    var_v0 = -1;
                }
                goto block_24;
            }
            if (*(s32 *)((u8 *)temp_s0 + 0x8900) < 0) {
                D_00470574 = 0;
            } else {
                var_v0 = 1;
block_24:
                D_00470574 = var_v0;
            }
            ((s32 (*)(s32, s32))D_00468300[0])(2, temp_a1);
            return;
        case 5:
            if ((D_004B4B59 == 0) || ((s32)(D_004B4B59) == (s32)(3))) {
                D_00470574 = 2;
                D_004682FC(2, temp_a1);
                return;
            }
            var_v0_2 = 4;
            if (D_005C9F04 < 0) {
                goto block_38;
            }
            var_v0_2 = -1;
            if (*(s32 *)((u8 *)temp_s0 + 0x8904) >= 0) {
                goto block_38;
            }
            if (*(s32 *)((u8 *)temp_s0 + 0x8900) < 0) {
                D_00470574 = 0;
            } else {
                var_v0_2 = 1;
block_38:
                D_00470574 = var_v0_2;
            }
            ((s32 (*)(s32, s32))D_00468300[0])(2, temp_a1);
            break;
        }
    }
}
