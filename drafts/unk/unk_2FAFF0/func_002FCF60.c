/* Draft (not built): func_002FCF60 at 0x002FCF60, size 0x130, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x130
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FCF60.s */

// src/unk/unk_2FAFF0.c func_002FCF60 size diff=43/80
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
s32 func_002FCF60(void) {
    s32 temp_t3;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_t2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 var_t0;
    u8 *temp_a2;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_t1;

    var_t2 = 1;
    var_t1 = NULL;
    temp_t3 = 1 << D_005D0082;
    var_a3 = 0;
    if (temp_t3 > 0) {
        var_a1 = (unsigned char *)(gTourMap);
loop_2:
        if ((*(s16 *)((u8 *)var_a1 + 0x2F6) >= 0) && ((temp_v0 = *(s8 *)((u8 *)(var_a1 + 0x2EC) + 4), (temp_v0 == 1)) || (temp_v0 == 2))) {
            var_t2 = 0;
        } else {
            var_a3 += 1;
            var_a1 += 0x14;
            if (var_a3 < temp_t3) {
                goto loop_2;
            }
        }
    }
    var_t0 = 0;
    var_a3_2 = 0;
    if (temp_t3 > 0) {
        var_a1_2 = (unsigned char *)(gTourMap);
        do {
            temp_a2 = var_a1_2 + 0x2EC;
            if (*(s16 *)((u8 *)var_a1_2 + 0x2F6) >= 0) {
                temp_v0_2 = *(s8 *)((u8 *)temp_a2 + 7);
                if (var_t0 < temp_v0_2) {
                    var_t0 = temp_v0_2;
                    var_t1 = temp_a2;
                }
            }
            var_a3_2 += 1;
            var_a1_2 += 0x14;
        } while (var_a3_2 < (1 << D_005D0082));
    }
    if (var_t2 != 0) {
        if (var_t0 == (D_005D0082 - 1)) {
            *(u8 **)((u8 *)gTourMap + 0x70) = var_t1;
            return 1;
        }
        return 0;
    }
    if (var_t0 == D_005D0082) {
        *(u8 **)((u8 *)gTourMap + 0x70) = var_t1;
        return 2;
    }
    if ((D_005D0080 == -1) && (D_005D0081 == -1)) {
        return 4;
    }
    return 3;
}
