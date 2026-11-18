/* Draft (not built): func_001ABF10 at 0x001ABF10, size 0x1F4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 97 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001ABF10.s */

// src/battle/btl_main.c func_001ABF10 diff diff=97/125
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_00468360;
extern s32 D_004E0660;
void func_001ABF10(u8 *arg0) {
    s16 *temp_s2;
    s16 *var_a1;
    s16 *var_v0;
    s16 temp_a2;
    s16 var_s5;
    s32 *temp_a2_2;
    s32 temp_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_v1;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_t2;
    u8 *var_a0;
    u8 *var_s4;

    var_s5 = *(s16 *)((u8 *)arg0 + 0x150);
    var_s4 = arg0;
    if (var_s5 > 0) {

    } else {
        var_s5 = 2;
    }
    temp_s1 = amHeap_Alloc(0x980, 0, &D_00468360, 0x13C6);
    var_s0 = 0;
    if (var_s5 > 0) {
        do {
            temp_s3 = var_s4 + 0x10;
            temp_s2 = (s16 *)(temp_s3 + 0x36);
            memset(temp_s1, 0, 0x980);
            *(s16 *)((u8 *)temp_s3 + 0x34) = 0;
            var_v1 = 0;
            var_v0 = temp_s2;
loop_5:
            temp_a2 = *var_v0;
            if (temp_a2 > 0) {
                if (temp_a2 >= 0x253) {
                    goto block_8;
                }
                temp_t2 = (u8 *)(&D_004E0660 + (temp_a2 * 0x28));
                if (!(*(s64 *)((u8 *)temp_t2 + 0) & (1 << (s64) *(s16 *)((u8 *)temp_s3 + 0x10)))) {
                    *var_v0 = 0;
                } else if ((s32) *(u8 *)((u8 *)temp_t2 + 0xD) <= 0) {
                    *var_v0 = 0;
                } else {
                    temp_a2_2 = (s32 *)(temp_s1 + (temp_a2 * 4));
                    temp_a0 = *temp_a2_2;
                    if ((temp_a0 > 0) && ((temp_a0 == 2) || !(*(u8 *)((u8 *)temp_t2 + 0xB) & 8))) {
                        *var_v0 = 0;
                    } else {
                        *temp_a2_2 += 1;
                        *(s16 *)((u8 *)temp_s3 + 0x34) = (s16) (*(s16 *)((u8 *)temp_s3 + 0x34) + 1);
                    }
                }
            } else {
block_8:
                *var_v0 = 0;
            }
            var_v1 += 1;
            var_v0 += 2;
            if (var_v1 < 7) {
                goto loop_5;
            }
            var_a3 = 0;
            var_a1 = temp_s2;
loop_21:
            var_a2 = var_a3 + 1;
            if (*var_a1 <= 0) {
                if (var_a2 < 7) {
                    var_a0 = (u8 *)(temp_s2 + (var_a2 * 2));
                    do {
                        var_a2 += 1;
                        *(s16 *)((u8 *)var_a0 + -2) = (s16) *(s16 *)((u8 *)var_a0 + 0);
                        var_a0 += 2;
                    } while (var_a2 < 7);
                }
                *(s16 *)((u8 *)temp_s2 + 0xC) = 0;
            }
            var_a3 += 1;
            var_a1 += 2;
            if (var_a3 < 7) {
                goto loop_21;
            }
            var_s0 += 1;
            var_s4 += 0x50;
        } while (var_s0 < var_s5);
    }
    amHeap_Free(temp_s1);
}
