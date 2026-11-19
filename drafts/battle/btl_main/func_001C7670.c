/* Draft (not built): func_001C7670 at 0x001C7670, size 0x6B8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 285 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x658, original 0x6B8
 * Original: asm/nonmatchings/battle/btl_main/func_001C7670.s */

// src/battle/btl_main.c func_001C7670 size diff=285/406
extern void amMotion_BuildMatrices(void *o);
s32 amMotion_SavePose(s8 *);
f32 func_00146EB0(void *);
s32 func_001D9280(void *, s32);
s32 func_001D9A10(void *, s32);
s32 func_001D9B20(void *);
s32 func_001D9C80(void *);
s32 func_001DA150(void *);
s32 func_001DCB60(void *);
s32 func_001DCC80(void *);
s32 func_001E09E0(void *);
s32 func_001E1850(void *, s16);
s32 func_001E2190(void *, s16);
s32 func_001E3310(void *);
s32 func_001E39B0(void *);
s32 func_001E5AD0(void *);
extern void func_001E18B0(void *, int);
extern void func_001E1A40(void *, int);
extern void func_001E1BD0(void *, int, int);
extern void func_001E3550();
extern void func_001D80A0(void *, int);
void func_001C7670(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s16 temp_s2;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0_2;
    s8 var_v0;
    s8 var_v0_3;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gBattle);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (func_00146EB0(*(u8 **)((u8 *)arg0 + 0x1CF4)) == 0.0f) {
        if (*(s32 *)((u8 *)arg0 + 0x1350) == 0) {
            var_f0 = -15.0f;
        } else {
            var_f0 = 15.0f;
        }
        *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0) = var_f0;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 4) = 0;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 8) = 0;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0xC) = 0x3F800000;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    var_v0 = 1;
    if (((s64) ((s64) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x20) << 0x30) >> 0x30) & 1) {

    } else {
        var_v0 = 0;
    }
    *(s8 *)((u8 *)arg0 + 0x1FF9) = var_v0;
    func_0013AFA0((s32)(arg0));
    func_001E5AD0(arg0 + 0x650);
    func_001E5AD0(arg0 + 0xCD0);
    *(s32 *)((u8 *)arg0 + 0x1A48) = -1;
    *(s32 *)((u8 *)arg0 + 0x1A44) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x1A40) = 0xBF800000;
    *(s8 *)((u8 *)arg0 + 0x1FE4) = 0;
    temp_s2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x14);
    temp_v0 = func_001E1850(arg0, temp_s2);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        func_001E1BD0(arg0, (s32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x16), (s32) temp_s2);
        break;
    case 2:                                         /* switch 1 */
        func_001E1A40(arg0, (s32) temp_s2);
        break;
    case 3:                                         /* switch 1 */
        func_001E18B0(arg0, (s32) temp_s2);
        break;
    case 4:                                         /* switch 1 */
        *(s8 *)((u8 *)arg0 + 0x1FE4) = 1;
        /* fallthrough */
    default:                                        /* switch 1 */
        func_001E2190(arg0, *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x14));
        break;
    }
    func_001E3550(arg0);
    *(s16 *)((u8 *)arg0 + 0xCAE) = -1;
    *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    D_00468460[0](arg0);
    func_002CBFF0(1, arg0);
    func_001DCC80(arg0);
    func_001DCB60(arg0);
    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0xCA8) = 0;
    func_001E3310(arg0);
    amMotion_BuildMatrices(*(s8 **)((u8 *)arg0 + 0xB88));
    amMotion_SavePose(*(s8 **)((u8 *)arg0 + 0xB88));
    *(s32 *)((u8 *)arg0 + 0x1544) = (s32) *(s32 *)((u8 *)arg0 + 0x1EE4);
    *(s32 *)((u8 *)arg0 + 0x17A0) = 0;
    func_001ABD80((struct Fighter *)(arg0 + 0x1360));
    var_v0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x24);
    if (var_v0_2 > 0) {

    } else {
        var_v0_2 = 0xBB8;
    }
    temp_f0 = (f32) var_v0_2;
    *(f32 *)((u8 *)arg0 + 0x17C0) = temp_f0;
    *(f32 *)((u8 *)arg0 + 0x17CC) = temp_f0;
    temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x17C0);
    var_f1 = (f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x28);
    if (!(var_f1 < temp_f0_2)) {

    } else {
        var_f1 = temp_f0_2;
    }
    *(f32 *)((u8 *)arg0 + 0x17C4) = var_f1;
    temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x2C);
    if (temp_v1 != -1) {
        var_f0_2 = (f32) temp_v1;
    } else if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
        var_f0_2 = 0.0f;
    } else {
        var_f0_2 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
    }
    *(f32 *)((u8 *)arg0 + 0x17D0) = var_f0_2;
    temp_f0_3 = *(f32 *)((u8 *)arg0 + 0x17D0);
    var_f1_2 = (f32) *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x30);
    if (!(var_f1_2 < temp_f0_3)) {

    } else {
        var_f1_2 = temp_f0_3;
    }
    *(f32 *)((u8 *)arg0 + 0x17D4) = var_f1_2;
    *(s32 *)((u8 *)arg0 + 0x17E4) = 0;
    *(s32 *)((u8 *)arg0 + 0x17E8) = 0x447A0000;
    *(s32 *)((u8 *)arg0 + 0x17EC) = 0;
    var_v0_3 = 1;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x20) & 4) {

    } else {
        var_v0_3 = 0;
    }
    *(s8 *)((u8 *)arg0 + 0x200B) = var_v0_3;
    *(s8 *)((u8 *)arg0 + 0x2009) = 0;
    temp_v1_2 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 3:                                         /* switch 2 */
        *(s8 *)((u8 *)arg0 + 0x200B) = 1;
        *(s8 *)((u8 *)arg0 + 0x2009) = 1;
        break;
    case 4:                                         /* switch 2 */
        *(s8 *)((u8 *)arg0 + 0x200B) = 1;
        break;
    case 6:                                         /* switch 2 */
        *(s8 *)((u8 *)arg0 + 0x200B) = 1;
        *(s8 *)((u8 *)arg0 + 0x2009) = 1;
        break;
    }
    *(s32 *)((u8 *)arg0 + 0x17E0) = 0;
    *(s32 *)((u8 *)arg0 + 0x1864) = 0;
    *(s32 *)((u8 *)arg0 + 0x17BC) = 0;
    *(s32 *)((u8 *)arg0 + 0x17A4) = 0;
    *(s32 *)((u8 *)arg0 + 0x17A8) = 0;
    *(s32 *)((u8 *)arg0 + 0x17AC) = 0;
    *(s32 *)((u8 *)arg0 + 0x17F0) = 0;
    *(s32 *)((u8 *)arg0 + 0x17F4) = 0;
    *(s16 *)((u8 *)arg0 + 0x17F8) = 0;
    *(s16 *)((u8 *)arg0 + 0x17FA) = 0;
    *(s32 *)((u8 *)arg0 + 0x1804) = 0;
    *(s32 *)((u8 *)arg0 + 0x1808) = 0;
    *(s8 *)((u8 *)arg0 + 0x183F) = -1;
    *(s32 *)((u8 *)arg0 + 0x1848) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0x184C) = 0x3F800000;
    *(s32 *)((u8 *)arg0 + 0x1850) = 0;
    *(s32 *)((u8 *)arg0 + 0x1854) = 0;
    *(s32 *)((u8 *)arg0 + 0x1858) = 0;
    func_001D9280(arg0, -1);
    *(s32 *)((u8 *)arg0 + 0x1864) = 0;
    *(s16 *)((u8 *)arg0 + 0x1868) = 0;
    func_001E09E0(arg0);
    *(s32 *)((u8 *)arg0 + 0x1890) = 0;
    *(s32 *)((u8 *)arg0 + 0x1894) = 0;
    *(s32 *)((u8 *)arg0 + 0x1898) = -1;
    *(s32 *)((u8 *)arg0 + 0x189C) = 0;
    *(s32 *)((u8 *)arg0 + 0x18A0) = 0x3F800000;
    var_f1_3 = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x18A4) = 0;
    if (*(s8 *)((u8 *)arg0 + 0x1FFF) != 0) {

    } else {
        var_f1_3 = 0.0f;
    }
    *(f32 *)((u8 *)arg0 + 0x18C0) = var_f1_3;
    *(s32 *)((u8 *)arg0 + 0x18C8) = 0;
    *(s32 *)((u8 *)arg0 + 0x18CC) = 0;
    *(s32 *)((u8 *)arg0 + 0x18D0) = 0;
    *(s32 *)((u8 *)arg0 + 0x18D4) = 0;
    *(s32 *)((u8 *)arg0 + 0x18D8) = 1;
    *(s16 *)((u8 *)arg0 + 0x19E8) = 0;
    *(s16 *)((u8 *)arg0 + 0x19EA) = 0;
    *(s16 *)((u8 *)arg0 + 0x19EC) = 0;
    *(s16 *)((u8 *)arg0 + 0x19EE) = 0;
    *(s16 *)((u8 *)arg0 + 0x19F0) = 0;
    *(s32 *)((u8 *)arg0 + 0x19F4) = 0;
    *(s32 *)((u8 *)arg0 + 0x19F8) = 0;
    *(s32 *)((u8 *)arg0 + 0x19FC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A00) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A04) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A08) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A24) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A28) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A4C) = 0;
    *(s32 *)((u8 *)arg0 + 0x1A50) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0x1A54) = 0xBF800000;
    *(s32 *)((u8 *)arg0 + 0x185C) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A58) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A5A) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A5C) = 0;
    *(s8 *)((u8 *)arg0 + 0x1A5E) = -1;
    *(s8 *)((u8 *)arg0 + 0x1A64) = 0;
    *(s32 *)((u8 *)arg0 + 0x1AB4) = 0;
    *(s16 *)((u8 *)arg0 + 0x1AB8) = -1;
    *(s32 *)((u8 *)arg0 + 0x1AC0) = 0;
    *(s32 *)((u8 *)arg0 + 0x1AC4) = 0;
    *(s32 *)((u8 *)arg0 + 0x1AC8) = 0;
    *(s16 *)((u8 *)arg0 + 0x1ACC) = 0;
    *(s16 *)((u8 *)arg0 + 0x1ACE) = 0;
    *(s16 *)((u8 *)arg0 + 0x1AD0) = 0;
    *(s32 *)((u8 *)arg0 + 0x1CF0) = -1;
    *(s32 *)((u8 *)arg0 + 0x1AE0) = 0;
    *(s16 *)((u8 *)arg0 + 0x1DB4) = 0;
    func_001D9A10(arg0, 1);
    *(s8 *)((u8 *)arg0 + 0x1FFA) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFC) = 0;
    *(s8 *)((u8 *)arg0 + 0x1FFE) = 0;
    *(s8 *)((u8 *)arg0 + 0x2001) = 0;
    *(s8 *)((u8 *)arg0 + 0x2002) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = 0;
    *(s8 *)((u8 *)arg0 + 0x2005) = 0;
    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
    *(s8 *)((u8 *)arg0 + 0x2007) = 0;
    *(s8 *)((u8 *)arg0 + 0x2008) = 0;
    *(s8 *)((u8 *)arg0 + 0x200C) = 0;
    *(s8 *)((u8 *)arg0 + 0x200D) = 0;
    *(s8 *)((u8 *)arg0 + 0x200E) = 0;
    *(s8 *)((u8 *)arg0 + 0x200F) = 0;
    *(s8 *)((u8 *)arg0 + 0x2010) = 0;
    *(s8 *)((u8 *)arg0 + 0x2011) = 0;
    *(s8 *)((u8 *)arg0 + 0x2013) = 0;
    *(s8 *)((u8 *)arg0 + 0x2014) = 0;
    *(s8 *)((u8 *)arg0 + 0x2016) = 0;
    *(s8 *)((u8 *)arg0 + 0x2017) = 0;
    *(s8 *)((u8 *)arg0 + 0x2018) = 0;
    *(s8 *)((u8 *)arg0 + 0x2019) = 0;
    *(s8 *)((u8 *)arg0 + 0x201A) = 0;
    *(s8 *)((u8 *)arg0 + 0x201B) = 0;
    *(s8 *)((u8 *)arg0 + 0x201C) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FE6) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FE8) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FEA) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FEC) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FEE) = 0;
    *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
    *(s32 *)((u8 *)arg0 + 0x1FF4) = 0xBF800000;
    *(s8 *)((u8 *)arg0 + 0x201E) = 0;
    *(s8 *)((u8 *)arg0 + 0x201F) = 0;
    *(s8 *)((u8 *)arg0 + 0x201D) = 1;
    func_001DF1F0(arg0);
    func_001D9CA0(arg0, 1);
    func_001DA150(arg0);
    func_001D9C00(arg0);
    func_001D9C80(arg0);
    func_001D9B20(arg0);
    func_001D9BF0(arg0);
    func_001E1460(arg0, 0);
    func_001E39B0(arg0);
    func_001D80A0(arg0, 1);
    temp_v1_3 = **(s16 **)((u8 *)arg0 + 0xBB0);
    if (temp_v1_3 != 0) {
        *(s16 *)((u8 *)arg0 + 0x1A58) = temp_v1_3;
        func_001D80A0(arg0, 2);
        *(s16 *)((u8 *)arg0 + 0x1A58) = 0;
    }
}
