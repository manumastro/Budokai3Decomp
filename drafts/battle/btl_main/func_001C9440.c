/* Draft (not built): func_001C9440 at 0x001C9440, size 0x1A8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A0, original 0x1A8
 * Original: asm/nonmatchings/battle/btl_main/func_001C9440.s */

// src/battle/btl_main.c func_001C9440 size diff=56/104
void func_001C9440(u8 *arg0) {
    u8 sp[0x400];
    s32 *var_t0;
    s128 temp_v1;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_a2_4;
    s32 temp_a2_3;
    s32 var_a2;
    s32 var_t1;
    u8 *var_a3;
    u8 *var_t0_2;
    u8 *var_v1;

    var_t0 = (int *)(&D_00431340);
    var_a3 = sp;
    var_a2 = 5;
    do {
        var_a2 -= 1;
        temp_v1 = *(s128 *)((u8 *)var_t0 + 0x10);
        *(s128 *)((u8 *)var_a3 + 0) = (s128) *(s128 *)((u8 *)var_t0 + 0);
        var_t0 += 0x20;
        *(s128 *)((u8 *)var_a3 + 0x10) = temp_v1;
        var_a3 += 0x20;
    } while (var_a2 > 0);
    temp_a2 = *(s16 *)((u8 *)gBattle + 0x7E2);
    var_v1 = sp;
    if ((temp_a2 != 0) && (temp_a2 != 2)) {
        temp_a2_2 = *(s16 *)((u8 *)arg0 + 0x10);
        if ((temp_a2_2 != 0x2B) && (temp_a2_2 != 0x2A)) {

        } else if (*(s16 *)((u8 *)arg0 + 0x1E) == 1) {
            *(s16 *)((u8 *)arg0 + 0x1E) = (s16) ((*(u32 *)((u8 *)arg0 + 0x24) / 1000) + ((u32) *(u32 *)((u8 *)arg0 + 0x24) >> 0x1F));
            temp_a1 = *(s16 *)((u8 *)arg0 + 0x1E);
            if (temp_a1 < 0) {
                *(s16 *)((u8 *)arg0 + 0x1E) = 1;
            } else {
                *(u32 *)((u8 *)arg0 + 0x24) = (u32) (*(u32 *)((u8 *)arg0 + 0x24) - ((temp_a1 - 1) * 0x3E8));
            }
            *(s32 *)((u8 *)arg0 + 0x28) = 0x3E8;
        }
    }
loop_22:
    temp_a2_3 = *(s32 *)((u8 *)var_v1 + 0);
    if (temp_a2_3 == -1) {
        return;
    }
    if (temp_a2_3 == *(s16 *)((u8 *)arg0 + 0x10)) {
        temp_a2_4 = *(s16 *)((u8 *)arg0 + 0x34);
        var_t1 = 0;
        if (temp_a2_4 > 0) {
            var_t0_2 = arg0;
loop_17:
            if (*(s16 *)((u8 *)var_t0_2 + 0x36) == *(s32 *)((u8 *)var_v1 + 4)) {
                *(s16 *)((u8 *)arg0 + 0x34) = 1;
                *(s16 *)((u8 *)arg0 + 0x36) = (s16) *(s32 *)((u8 *)var_v1 + 4);
                *(s16 *)((u8 *)arg0 + 0x10) = (s16) *(s32 *)((u8 *)var_v1 + 8);
                *(s16 *)((u8 *)arg0 + 0x14) = (s16) *(s32 *)((u8 *)var_v1 + 0xC);
                *(s16 *)((u8 *)arg0 + 0x16) = (s16) *(s32 *)((u8 *)var_v1 + 0xC);
                *(s16 *)((u8 *)arg0 + 0x38) = 0;
                *(s16 *)((u8 *)arg0 + 0x3A) = 0;
                *(s16 *)((u8 *)arg0 + 0x3C) = 0;
                *(s16 *)((u8 *)arg0 + 0x3E) = 0;
                *(s16 *)((u8 *)arg0 + 0x40) = 0;
                *(s16 *)((u8 *)arg0 + 0x42) = 0;
                return;
            }
            var_t1 += 1;
            var_t0_2 += 2;
            if (var_t1 >= temp_a2_4) {
                goto block_21;
            }
            goto loop_17;
        }
    }
block_21:
    var_v1 += 0x10;
    goto loop_22;
}
