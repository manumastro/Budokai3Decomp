/* Draft (not built): func_001B13F0 at 0x001B13F0, size 0x4B8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);                  /* switch 3; irregular */ @ 2135: switch (D_004B4B59) {                       /* switch 2; irregular */
 * Original: asm/nonmatchings/battle/btl_main/func_001B13F0.s */

// src/battle/btl_main.c func_001B13F0 cerr diff=-1/0
extern s8 D_004B4B59[];
s32 memcpy(s32 *, s8 *, s32);
extern s32 D_0042FDC0;
extern s32 D_004310D0;
extern s8 D_004B4B41;
extern s8 D_004B4B5A;
extern s8 D_004B4B5B;
extern s8 D_004B4B63;
extern s16 D_004E05E0;
extern char D_005C4140[];
extern s32 D_00447440;
void func_001B13F0(s32 arg0) {
    s32 sp70;
    s16 sp9A;
    s16 spEA;
    s16 sp1C2;
    s16 sp1C4;
    s16 sp1C6;
    s32 sp1CC;
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_s1;
    s32 *var_s2_3;
    s32 *var_s3_2;
    s32 *var_s3_4;
    s128 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s5_2;
    s8 *var_s1_2;
    s8 *var_s1_3;
    s8 *var_s1_4;
    s8 *var_s2;
    s8 *var_s2_2;
    s8 *var_s2_4;
    s8 *var_s3_3;
    s8 *var_s4;
    s8 *var_s4_3;
    u8 *temp_v1;

    var_a2 = &D_004310D0;
    var_a1 = &sp70;
    var_a0 = 0xC;
    do {
        var_a0 -= 1;
        temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
        *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
        var_a2 += 0x20;
        *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
        var_a1 += 0x20;
    } while (var_a0 > 0);
    switch (D_004B4B41) {                           /* switch 1 */
    case 0:                                         /* switch 1 */
        var_s3 = 0;
        var_s2 = D_004B4B40;
        var_s1 = &sp70;
        do {
            *(s16 *)((u8 *)var_s1 + 0x20) = (s16) *(s8 *)((u8 *)var_s2 + 0x1C);
            *(s16 *)((u8 *)var_s1 + 0x22) = (s16) *(s8 *)((u8 *)var_s2 + 0x1E);
            temp_v1 = (u8 *)(&D_00447440 + (*(s16 *)((u8 *)var_s1 + 0x20) * 0x60));
            *(s16 *)((u8 *)var_s1 + 0x44) = (s16) *(s16 *)((u8 *)temp_v1 + 0x50);
            memcpy(var_s1 + 0x46, temp_v1 + 0x52, *(s16 *)((u8 *)temp_v1 + 0x50) * 2);
            var_s3 += 1;
            *(s16 *)((u8 *)var_s1 + 0x2A) = -1;
            var_s2 += 1;
            var_s1 += 0x50;
        } while (var_s3 < 2);
        sp1C2 = 6;
        sp1C6 = -1;
        sp1CC = -2;
        sp1C4 = (s16) D_004B4B5B;
        break;
    case 3:                                         /* switch 1 */
        var_s2_2 = (s8 *)(D_005C4140[0]);
        var_s5 = 0;
        var_s4 = D_004B4B40;
        var_s3_2 = &sp70;
        var_s1_2 = (s8 *)(D_005C4140[0]);
        do {
            *(s16 *)((u8 *)var_s3_2 + 0x20) = (s16) *(s8 *)((u8 *)var_s4 + 0x1C);
            *(s16 *)((u8 *)var_s3_2 + 0x22) = (s16) *(s8 *)((u8 *)var_s4 + 0x1E);
            temp_v0_2 = *(s8 *)((u8 *)var_s2_2 + 0x5C10) * 0x3E8;
            *(s32 *)((u8 *)var_s3_2 + 0x34) = temp_v0_2;
            *(s32 *)((u8 *)var_s3_2 + 0x38) = temp_v0_2;
            *(s16 *)((u8 *)var_s3_2 + 0x44) = (s16) *(s16 *)((u8 *)var_s1_2 + 0x5C12);
            memcpy(var_s3_2 + 0x46, var_s1_2 + 0x5C14, 0xE);
            var_s5 += 1;
            var_s4 += 1;
            var_s3_2 += 0x50;
            var_s2_2 += 1;
            var_s1_2 += 0x10;
        } while (var_s5 < 2);
        switch (D_004B4B59) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            sp9A = (s16) D_004B4B63;
            spEA = 1 - D_004B4B63;
            break;
        case 2:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            *(&sp9A + (D_004B4B5A * 0x50)) = (s16) D_004B4B63;
            *(&sp9A + ((1 - D_004B4B5A) * 0x50)) = -1;
            break;
        }
        sp1C2 = 2;
        sp1C4 = (s16) D_004B4B5B;
        sp1CC = (s32) D_004E05E0;
        break;
    case 4:                                         /* switch 1 */
        var_s4_2 = 0;
        var_s3_3 = D_004B4B40;
        var_s2_3 = &sp70;
        var_s1_3 = (s8 *)(D_005C4140[0]);
        do {
            *(s16 *)((u8 *)var_s2_3 + 0x20) = (s16) *(s8 *)((u8 *)var_s3_3 + 0x1C);
            *(s16 *)((u8 *)var_s2_3 + 0x22) = (s16) *(s8 *)((u8 *)var_s3_3 + 0x1E);
            *(s16 *)((u8 *)var_s2_3 + 0x44) = (s16) *(s16 *)((u8 *)var_s1_3 + 0x5C12);
            memcpy(var_s2_3 + 0x46, var_s1_3 + 0x5C14, 0xE);
            var_s4_2 += 1;
            var_s3_3 += 1;
            var_s2_3 += 0x50;
            var_s1_3 += 0x10;
        } while (var_s4_2 < 2);
        if (D_004B4B63 < 2) {
            *(&sp9A + (D_004B4B63 * 0x50)) = (s16) D_004B4B63;
            *(&sp9A + ((1 - D_004B4B63) * 0x50)) = -1;
        } else {
            sp9A = (s16) D_004B4B63;
            spEA = -1;
        }
        sp1C2 = 3;
        sp1CC = -2;
        sp1C4 = (s16) D_004B4B5B;
        break;
    case 2:                                         /* switch 1 */
    case 6:                                         /* switch 1 */
        var_s2_4 = (s8 *)(D_005C4140[0]);
        var_s5_2 = 0;
        var_s4_3 = D_004B4B40;
        var_s3_4 = &sp70;
        var_s1_4 = (s8 *)(D_005C4140[0]);
        do {
            *(s16 *)((u8 *)var_s3_4 + 0x20) = (s16) *(s8 *)((u8 *)var_s4_3 + 0x1C);
            *(s16 *)((u8 *)var_s3_4 + 0x22) = (s16) *(s8 *)((u8 *)var_s4_3 + 0x1E);
            temp_v0_3 = *(s8 *)((u8 *)var_s2_4 + 0x5C10) * 0x3E8;
            *(s32 *)((u8 *)var_s3_4 + 0x34) = temp_v0_3;
            *(s32 *)((u8 *)var_s3_4 + 0x38) = temp_v0_3;
            *(s16 *)((u8 *)var_s3_4 + 0x44) = (s16) *(s16 *)((u8 *)var_s1_4 + 0x5C12);
            memcpy(var_s3_4 + 0x46, var_s1_4 + 0x5C14, 0xE);
            var_s5_2 += 1;
            var_s4_3 += 1;
            var_s3_4 += 0x50;
            var_s2_4 += 1;
            var_s1_4 += 0x10;
        } while (var_s5_2 < 2);
        switch (D_004B4B59) {                       /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            spEA = 1;
            sp9A = 0;
            break;
        case 1:                                     /* switch 3 */
            sp9A = 0;
            spEA = -1;
            break;
        case 2:                                     /* switch 3 */
            sp9A = -1;
            spEA = 1;
            break;
        case 3:                                     /* switch 3 */
            sp9A = -1;
            spEA = -1;
            break;
        }
        sp1C2 = 1;
        sp1C4 = (s16) D_004B4B5B;
        sp1CC = (s32) D_004E05E0;
        break;
    case 5:                                         /* switch 1 */
        memcpy(&sp70, &D_0042FDC0 + (arg0 * 0x180), 0x180);
        sp9A = (s16) D_004B4B63;
        break;
    }
    func_001B10D0(&sp70, arg0);
}
