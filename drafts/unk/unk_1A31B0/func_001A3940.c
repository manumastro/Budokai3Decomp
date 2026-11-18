/* Draft (not built): func_001A3940 at 0x001A3940, size 0x518, segment unk/unk_1A31B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' to 'int' mwccps2.exe Compiler: @ 199: func_00116978(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), var_a2);
 * Original: asm/nonmatchings/unk/unk_1A31B0/func_001A3940.s */

// src/unk/unk_1A31B0.c func_001A3940 cerr diff=-1/0
s32 func_00116DC8(s32, s32, u8 *);
s32 func_00116E40(s32, s32);
s32 func_00117038(s32, s32, s32, s32);
s32 func_00117268(s32, s32, s32, s32);
s32 scePadEnterPressMode(s32, s32);
s32 scePadInfoPressMode(s32, s32);
s32 scePadSetActAlign(s32, s32, void *);
s32 scePadSetMainMode(s32, s32, s32, s32);
extern s32 D_00493B00;
s32 func_001A3940(s32 arg0) {
    s32 *var_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s8 var_a0;
    u8 *temp_s3;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s3 = (u8 *)(D_00492EC0 + (arg0 << 5));
    temp_s2 = &D_00492FC0 + (arg0 * 0xB8);
    temp_s1 = &D_00493580 + (arg0 * 0x2C);
    if (*(s32 *)((u8 *)temp_s1 + 8) == 0) {
        if (arg0 == 0) {
            var_a2 = (s32 *)(&D_00493700);
        } else {
            var_a2 = &D_00493B00;
        }
        *(s32 *)((u8 *)temp_s1 + 8) = (u8 *)func_00116978(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), var_a2);
        if (*(s32 *)((u8 *)temp_s1 + 8) != 0) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_v0 = func_00116E40(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4));
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s2 + 0) = 0;
        *(s32 *)((u8 *)temp_s2 + 4) = 0;
        *(s16 *)((u8 *)temp_s2 + 8) = 0;
        *(s32 *)((u8 *)temp_s1 + 0x10) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
        func_001A3E60(temp_s2);
        memset(temp_s3, 0, 0x20);
        return 0;
    case 7:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s2 + 0) = 1;
        *(s32 *)((u8 *)temp_s2 + 4) = 0;
        *(s16 *)((u8 *)temp_s2 + 8) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
        func_001A3E60(temp_s2);
        memset(temp_s3, 0, 0x20);
        return 0;
    case 5:                                         /* switch 1 */
        *(s32 *)((u8 *)temp_s2 + 0) = 2;
        func_001A3E60(temp_s2);
        memset(temp_s3, 0, 0x20);
        return 0;
    default:                                        /* switch 1 */
        var_s0 = func_00117268(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), 1, 0);
        temp_v0_2 = func_00117268(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), 2, 0);
        if (temp_v0_2 > 0) {
            var_s0 = temp_v0_2;
        }
        temp_v1 = *(s32 *)((u8 *)temp_s1 + 0xC);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            *(s32 *)((u8 *)temp_s2 + 4) = var_s0;
            switch (*(s32 *)((u8 *)temp_s2 + 4)) { /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                break;
            case 4:                                 /* switch 3 */
                if (*(s32 *)((u8 *)temp_s1 + 0x10) == 0) {
                    *(s32 *)((u8 *)temp_s1 + 0xC) = 1;
                } else {
                    *(s32 *)((u8 *)temp_s1 + 0xC) = 3;
                }
                break;
            default:                                /* switch 3 */
                *(s32 *)((u8 *)temp_s1 + 0xC) = 3;
                break;
            }
        default:                                    /* switch 2 */
block_62:
            *(s32 *)((u8 *)temp_s2 + 0) = 2;
            func_001A3E60(temp_s2);
            memset(temp_s3, 0, 0x20);
            return 0;
        case 1:                                     /* switch 2 */
            if (func_00117268(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), 4, -1) <= 0) {
                *(s32 *)((u8 *)temp_s1 + 0xC) = 3;
            } else if (scePadSetMainMode(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), 1, 0) == 1) {
                *(s32 *)((u8 *)temp_s1 + 0x10) = 1;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
            }
            goto block_62;
        case 3:                                     /* switch 2 */
            var_v0 = func_00117038(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), -1, 0);
            if (var_v0 >= 7) {
                var_v0 = 6;
            }
            *(s32 *)((u8 *)temp_s1 + 0x14) = var_v0;
            *(s16 *)((u8 *)temp_s2 + 0xA) = (s16) *(s32 *)((u8 *)temp_s1 + 0x14);
            if (*(s32 *)((u8 *)temp_s1 + 0x14) == 0) {
                *(s32 *)((u8 *)temp_s1 + 0xC) = 2;
            } else {
                var_a0 = 0;
loop_45:
                if (var_a0 < 8) {
                    if (var_a0 < *(s32 *)((u8 *)temp_s1 + 0x14)) {
                        *(s8 *)((u8 *)(var_a0 + temp_s1) + 0x18) = var_a0;
                    } else {
                        *(s8 *)((u8 *)(var_a0 + temp_s1) + 0x18) = 0xFF;
                    }
                    var_a0 += 1;
                    goto loop_45;
                }
                if (scePadSetActAlign(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), temp_s1 + 0x18) == 1) {
                    *(s32 *)((u8 *)temp_s1 + 0xC) = 2;
                }
            }
            goto block_62;
        case 2:                                     /* switch 2 */
            if (scePadInfoPressMode(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4)) != 1) {
                *(s32 *)((u8 *)temp_s1 + 0xC) = 4;
            }
            if (scePadEnterPressMode(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4)) == 1) {
                *(s16 *)((u8 *)temp_s2 + 8) = 1;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 4;
            }
            goto block_62;
        case 4:                                     /* switch 2 */
            if (*(s32 *)((u8 *)temp_s2 + 4) != var_s0) {
                *(s32 *)((u8 *)temp_s2 + 4) = 0;
                *(s16 *)((u8 *)temp_s2 + 8) = 0;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
                goto block_62;
            }
            if (func_00116DC8(*(s32 *)((u8 *)temp_s1 + 0), *(s32 *)((u8 *)temp_s1 + 4), temp_s3) == 0) {
                *(s32 *)((u8 *)temp_s2 + 4) = 0;
                *(s16 *)((u8 *)temp_s2 + 8) = 0;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
                goto block_62;
            }
            if (*temp_s3 != 0) {
                *(s32 *)((u8 *)temp_s2 + 4) = 0;
                *(s16 *)((u8 *)temp_s2 + 8) = 0;
                *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
                goto block_62;
            }
            *(s32 *)((u8 *)temp_s2 + 0) = 3;
            return 1;
        }
        break;
    }
}
