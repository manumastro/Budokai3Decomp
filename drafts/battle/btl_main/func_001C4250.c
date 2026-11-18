/* Draft (not built): func_001C4250 at 0x001C4250, size 0x4C0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'struct Fighter *' to 'int' mwccps2.exe Compiler: @ 5245: var_v0 = (struct Fighter *)func_001C2A00(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001C4250.s */

// src/battle/btl_main.c func_001C4250 cerr diff=-1/0
f32 func_001D7DF0(void *);
s32 func_001D7E50(void *, s32, s32);
s32 func_001D97D0(void *);
s32 func_001D9EB0(void *, s32);
s32 func_001DA930(void *, s16, s16, s32);
s32 func_001DFC80(void *, s32, s32);
s32 func_001E2C50(void *);
s32 func_001E3100(void *);
s32 func_001E39B0(s32);
s32 func_001E8D90(void *, s32);
extern void Fighter_CreateHitEffect(void *, int);
s32 func_001C4250(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_s0_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;

    var_s2 = 0;
    *(s8 *)((u8 *)gBattle + 0x8AAD) = 0;
    if (*(s8 *)((u8 *)gBattle + 0x8AB9) != 0) {
        func_00237000(3, NULL);
        var_s2 = 1;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if ((var_s2 == 0) && !(*(s32 *)((u8 *)arg1 + 0x38) & 0x10) && (func_001D7E50(arg0, 0, 0) != 0)) {
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v0 = (struct Fighter *)func_001C2A00(arg0);
        } else {
            var_a1 = 1;
            if (*(s32 *)((u8 *)arg1 + 0x24) == 1) {

            } else {
                var_a1 = 2;
            }
            var_v0 = func_001E8D90(arg0, var_a1);
        }
        if (var_v0 != 0) {
            func_001DFE60(arg0, 8, func_001D7DF0(arg0));
            func_001DFC80(arg0, 0, 0x42C80000);
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            D_004684FC(arg0);
            func_002CBFF0(1, arg0);
            return 1;
        }
        goto block_14;
    }
block_14:
    temp_v0 = (*(s32 (**)(s32, s32, s32))((u8 *)arg1 + 0x28))(*(s32 *)((u8 *)arg1 + 0x2C), 0, 0);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 6:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        break;
    case 2:                                         /* switch 1 */
        if (*(s8 *)((u8 *)arg0 + 0x2004) != 0) {
            func_001E1300(0);
            var_a3 = 0;
            if (var_s2 != 0) {

            } else {
                var_a3 = 1;
            }
            var_s0 = func_001DA930(arg0, *(s16 *)((u8 *)arg1 + 0x30), *(s16 *)((u8 *)arg1 + 0x36), var_a3);
            if (var_s0 != -1) {
                func_001E3100(arg0);
                func_001E2C50(arg0);
                func_001E39B0(*(s32 *)((u8 *)arg0 + 0x1354));
                func_001D9C00(arg0);
                Fighter_CreateHitEffect(arg0, 0);
                if ((var_s0 == 0x14) && !(func_001E52B0(0) <= 75.0f)) {
                    *(s16 *)((u8 *)arg0 + 0x181E) = 0;
                    var_s0 = 0x10;
                    *(s32 *)((u8 *)arg0 + 0x1814) = 0x3E828F5D;
                    *(s32 *)((u8 *)arg0 + 0x1810) = 0x3FCCCCCD;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                }
                if ((var_s0 != 1) && (var_s0 != 0x1A)) {
                    func_001D97D0(arg0);
                }
                var_a1_2 = 1;
                switch (var_s0) {                   /* switch 2; irregular */
                case 20:                            /* switch 2 */
                    *(s8 *)((u8 *)arg0 + 0x183C) = 0;
                    *(s32 *)((u8 *)arg0 + 0x1828) = 0x42200000;
                    if (*(s32 *)((u8 *)arg1 + 0x38) & 0x20) {
                        var_a1_2 = 0;
                    }
                    func_001C0130(arg0, var_a1_2);
                    var_s0_2 = 0x66;
                    break;
                case 26:                            /* switch 2 */
                case 1:                             /* switch 2 */
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    if (var_s0 != 0xF) {
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    *(&D_00468460 + (var_s0 * 4))(arg0, 1);
                    func_002CBFF0(1, arg0);
                    func_001DD680(arg0);
                    var_s0_2 = 0x190;
                    break;
                default:                            /* switch 2 */
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    if (var_s0 != 0xF) {
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    }
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    *(&D_00468460 + (var_s0 * 4))(arg0, 1);
                    func_002CBFF0(1, arg0);
                    var_s0_2 = 0x6B;
                    break;
                }
                if (var_s2 != 0) {
                    func_001E9B00(1, 0x25, 0, 0, 0, 0x3F800000);
                }
                func_001D9EB0(arg0, var_s0_2);
            }
        }
        break;
    case 3:                                         /* switch 1 */
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684DC(arg0);
        func_002CBFF0(1, arg0);
        break;
    case 5:                                         /* switch 1 */
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_004684E0(arg0);
        func_002CBFF0(1, arg0);
        break;
    }
    if (temp_v0 != 0) {
        *(s32 *)((u8 *)arg1 + 0x38) = (s32) (*(s32 *)((u8 *)arg1 + 0x38) | 2);
    }
    return 0;
}
