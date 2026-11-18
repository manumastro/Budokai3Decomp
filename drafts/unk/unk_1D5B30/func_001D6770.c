/* Draft (not built): func_001D6770 at 0x001D6770, size 0x414, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal implicit conversion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 491: func_00146F60(&sp70, arg0 + 0x10);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D6770.s */

// src/unk/unk_1D5B30.c func_001D6770 cerr diff=-1/0
extern char D_003F0800[];
s32 func_0013B110(s32);
s32 func_0013B580(s32);
s32 func_00146F60(s32 *, s32);
s32 func_0021AFE0(s32, void **);
s32 func_00246D50(void *);
extern void func_0013B0B0(void *);
s32 func_001D6770(u8 *arg0, u32 arg1) {
    s32 sp60;
    f32 sp64;
    s32 sp70;
    u8 *sp80;
    s32 *sp84;
    u8 *sp88;
    s32 var_s3;
    s8 temp_s0;
    u8 *temp_s1;

    var_s3 = 1;
    temp_s0 = *(s8 *)((u8 *)arg0 + 0x4F);
    temp_s1 = (u8 *)(gBattle + ((1 - *(s8 *)((u8 *)arg0 + 0x4E)) * 0x2020) + 0x830);
    func_00146F60(&sp70, arg0 + 0x10);
    switch (arg1) {                                 /* switch 1 */
    case 0:                                         /* switch 1 */
        var_s3 = func_001DB320(temp_s1);
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        switch (var_s3) {                           /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            sp80 = temp_s1 + 0x130;
            sp84 = &sp70;
            sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
            func_0021AFE0(2, (void **)(&sp80));
            break;
        case 4:                                     /* switch 2 */
        case 3:                                     /* switch 2 */
            func_001E9B00(1, 0x19, 0, 0, 0, 0x3F800000);
            func_0013B0B0(D_003F0800);
            func_0013B580(0x3F490FDB);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            if (sp64 < 0.0f) {
                sp64 = -sp64;
            }
            sp64 += 1.9f;
            func_0013B110(1);
            func_001DA5C0(temp_s1, 1, 2, -(*(s8 *)((u8 *)arg0 + 0x4F) + 1));
            sp80 = temp_s1 + 0x130;
            sp84 = &sp70;
            sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
            func_0021AFE0(3, (void **)(&sp80));
            if (var_s3 == 3) {
                func_001D6640(temp_s1, 3);
            }
            break;
        case 6:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
            func_001E9B00(1, 0x1A, 0, 0, 0, 0x3F800000);
            func_001DA5C0(temp_s1, 1, 3, -(*(s8 *)((u8 *)arg0 + 0x4F) + 1));
            sp80 = temp_s1 + 0x130;
            sp84 = &sp70;
            sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
            func_0021AFE0(4, (void **)(&sp80));
            func_001D6640(temp_s1, 5);
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        if (*(s8 *)((u8 *)arg0 + 0x4E) == 0) {
            func_001E9B00(1, 0x1D, 0, 0, 0, 0x3F800000);
        }
        sp84 = &sp70;
        sp80 = arg0;
        sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
        func_0021AFE0(2, (void **)(&sp80));
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
block_24:
        *(s32 *)((u8 *)arg0 + 0x40) = 0;
        break;
    case 2:                                         /* switch 1 */
        var_s3 = 0;
        break;
    case 3:                                         /* switch 1 */
        func_001E9B00(1, 0x1D, 0, 0, 0, 0x3F800000);
        sp84 = &sp70;
        sp80 = arg0;
        sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
        func_0021AFE0(2, (void **)(&sp80));
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
        goto block_24;
    case 4:                                         /* switch 1 */
        func_001E9B00(1, 0x1E, 0, 0, 0, 0x3F800000);
        sp84 = &sp70;
        sp80 = arg0;
        sp88 = (u8 *)(gBattle + (temp_s0 * 0x2020) + 0x830);
        func_0021AFE0(6, (void **)(&sp80));
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
        goto block_24;
    case 6:                                         /* switch 1 */
        func_00246D50(temp_s1);
        *(s16 *)((u8 *)arg0 + 0x48) = 0;
        goto block_24;
    }
    return var_s3;
}
