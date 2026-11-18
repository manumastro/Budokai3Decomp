/* Draft (not built): func_001ACBC0 at 0x001ACBC0, size 0x410, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 126 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3BC, original 0x410
 * Original: asm/nonmatchings/battle/btl_main/func_001ACBC0.s */

// src/battle/btl_main.c func_001ACBC0 size diff=126/239
s32 func_001ACBC0(void) {
    f32 temp_f0;
    f32 temp_f3;
    s16 temp_v1_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *var_a0;
    u8 *var_s0;

    temp_s4 = (u8 *)(gBattle);
    temp_s3 = temp_s4 + 0x830;
    if (*(s8 *)((u8 *)temp_s4 + 0x8AB1) > 0) {
        *(s32 *)((u8 *)temp_s4 + 0x88FC) = 4;
        *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) (*(s8 *)((u8 *)temp_s4 + 0x8AB1) - 1);
        *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s4 + 0x8900) * 0x2020) + temp_s3) + 0x13A4);
        *(s32 *)((u8 *)(((1 - *(s32 *)((u8 *)temp_s4 + 0x8900)) * 0x2020) + temp_s3) + 0x1AC4) = 0;
        *(s8 *)((u8 *)temp_s4 + 0x8AB1) = (s8) -*(s8 *)((u8 *)temp_s4 + 0x8AB1);
        return 1;
    }
    var_s2 = 0;
    var_s1 = 0;
    if (*(s32 *)((u8 *)temp_s4 + 0x88D8) > 0) {
        var_s0 = temp_s3;
        do {
            func_001D9480(var_s0);
            if (M2C_ERROR(/* Read from unset register $v0 */) == 0) {
                var_s2 |= 1 << var_s1;
            }
            var_s1 += 1;
            var_s0 += 0x2020;
        } while (var_s1 < *(s32 *)((u8 *)temp_s4 + 0x88D8));
    }
    switch (var_s2) {                               /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s4 + 0x88FC) = (s32) ((*(s8 *)((u8 *)temp_s3 + 0x201D) == 0) ? 0 : 2);
        *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)temp_s3 + 0x1350);
        *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)temp_s3 + 0x13A4);
        break;
    case 1:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s4 + 0x88FC) = (s32) ((*(s8 *)((u8 *)temp_s3 + 0x403D) == 0) ? 0 : 2);
        *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)temp_s3 + 0x3370);
        *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)temp_s3 + 0x33C4);
        break;
    case 3:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s4 + 0x88FC) = 1;
        *(s32 *)((u8 *)temp_s4 + 0x8900) = -1;
        *(s32 *)((u8 *)temp_s4 + 0x8904) = -1;
        break;
    }
    if (var_s2 != 0) {
        return 1;
    }
    temp_v1 = *(s32 *)((u8 *)temp_s4 + 0x7EC);
    if ((temp_v1 > 0) && (*(s32 *)((u8 *)temp_s4 + 0x8908) >= temp_v1)) {
        *(s32 *)((u8 *)temp_s4 + 0x88FC) = 3;
        var_a0 = temp_s3;
        if (*(s8 *)((u8 *)temp_s3 + 0x2015) != 0) {
            var_a0 = *(u8 **)((u8 *)temp_s3 + 0x1354);
        }
        temp_v1_2 = *(s16 *)((u8 *)temp_s4 + 0x7FE);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)var_a0 + 0x1350);
            *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)var_a0 + 0x13A4);
            break;
        case 2:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)var_a0 + 0x1354)) + 0x1350);
            *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)var_a0 + 0x1354)) + 0x13A4);
            break;
        default:                                    /* switch 2 */
            var_v0 = (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1CF4)) + 0x1E) - *(s32 *)((u8 *)temp_s3 + 0x1894)) - 1;
            if (var_v0 > 0) {

            } else {
                var_v0 = 0;
            }
            var_v0_2 = (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x3D14)) + 0x1E) - *(s32 *)((u8 *)temp_s3 + 0x38B4)) - 1;
            temp_f3 = *(f32 *)((u8 *)temp_s3 + 0x17C0) + ((f32) var_v0 * *(f32 *)((u8 *)temp_s3 + 0x17C4));
            if (var_v0_2 > 0) {

            } else {
                var_v0_2 = 0;
            }
            temp_f0 = *(f32 *)((u8 *)temp_s3 + 0x37E0) + ((f32) var_v0_2 * *(f32 *)((u8 *)temp_s3 + 0x37E4));
            if (!(temp_f3 <= temp_f0)) {
                *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)temp_s3 + 0x1350);
                *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)temp_s3 + 0x13A4);
            } else if (temp_f3 < temp_f0) {
                *(s32 *)((u8 *)temp_s4 + 0x8900) = (s32) *(s32 *)((u8 *)temp_s3 + 0x3370);
                *(s32 *)((u8 *)temp_s4 + 0x8904) = (s32) *(s16 *)((u8 *)temp_s3 + 0x33C4);
            } else {
                *(s32 *)((u8 *)temp_s4 + 0x8900) = -1;
                *(s32 *)((u8 *)temp_s4 + 0x8904) = -1;
            }
            break;
        }
        return 1;
    }
    return 0;
}
