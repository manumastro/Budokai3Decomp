/* Draft (not built): func_002800F0 at 0x002800F0, size 0x1E8, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 85 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x17C, original 0x1E8
 * Original: asm/nonmatchings/menu/mn_charasel/func_002800F0.s */

// src/menu/mn_charasel.c func_002800F0 size diff=85/95
s32 func_0028DFC0(s32, s32, s32, s32, s64);
extern s8 D_004B4B59;
extern void func_0028DF20(void);
void func_002800F0(u8 *arg0) {
    s32 saved_reg_s4;
    s32 saved_reg_s3;
    s32 saved_reg_s2;
    s32 saved_reg_s1;
    s32 saved_reg_s0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s8 temp_a0;
    s8 temp_v1;
    u8 *temp_a1;
    u8 *temp_s5;

    var_s0 = saved_reg_s0;
    var_s1 = saved_reg_s1;
    var_s2 = saved_reg_s2;
    var_s3 = saved_reg_s3;
    var_s4 = saved_reg_s4;
    temp_a1 = arg0 + 0x30;
    temp_s5 = *(u8 **)((u8 *)arg0 + 0x38);
    temp_a0 = *(s8 *)((u8 *)arg0 + 0x35);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_s4 = 2 & 0xFF;
        D_004B4B59 = 1;
        var_s2 = 1 & 0xFF;
        var_s3 = 0xB;
block_12:
        var_s1 = 0;
        break;
    case 1:                                         /* switch 1 */
        var_s4 = 2 & 0xFF;
        var_s2 = 1 & 0xFF;
        D_004B4B59 = 0;
        var_s3 = 5;
        var_s1 = var_s4;
        break;
    case 2:                                         /* switch 1 */
        D_004B4B59 = 2;
        var_s1 = 2 & 0xFF;
        var_s4 = 0xC;
        var_s3 = 5;
        var_s2 = 0;
        break;
    case 3:                                         /* switch 1 */
        D_004B4B59 = 3;
        var_s4 = 6;
        var_s3 = 0xF;
        var_s2 = 0;
        goto block_12;
    }
    temp_v1 = *(s8 *)((u8 *)temp_a1 + 4);
    switch (temp_v1) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_s0 = 2;
        break;
    case 1:                                         /* switch 2 */
        var_s0 = 4;
        break;
    }
    func_0027D820(0, temp_a1);
    *(s32 *)((u8 *)temp_s5 + 0) = func_0027E2D0(var_s0, var_s4, var_s2, -1);
    *(s32 *)((u8 *)temp_s5 + 4) = func_0027E2D0(var_s0, var_s3, var_s1, -1);
    func_0027EE70(temp_s5);
    func_0028DF20();
    func_0028DFC0(6, 0, 0, 0, 0x1F);
    *(s8 *)((u8 *)temp_s5 + 0x3D) = 1;
    *(s8 *)((u8 *)temp_s5 + 0x3C) = 0;
    *(s32 *)((u8 *)temp_s5 + 0x44) = 0;
}
