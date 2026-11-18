/* Draft (not built): func_002800F0 at 0x002800F0, size 0x1E8, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK func_0027D820(M2C_UNK, void *);             /* extern */
s32 func_0027E2D0(M2C_UNK, s32, s32, M2C_UNK);      /* extern */
M2C_UNK func_0027EE70(void *);                      /* extern */
M2C_UNK func_0028DF20();                            /* extern */
M2C_UNK func_0028DFC0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64); /* extern */
extern s8 D_004B4B59;

void func_002800F0(void *arg0) {
    M2C_UNK var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s8 temp_a0;
    s8 temp_v1;
    void *temp_a1;
    void *temp_s5;

    var_s0 = saved_reg_s0;
    var_s1 = saved_reg_s1;
    var_s2 = saved_reg_s2;
    var_s3 = saved_reg_s3;
    var_s4 = saved_reg_s4;
    temp_a1 = arg0 + 0x30;
    temp_s5 = M2C_FIELD(arg0, void **, 0x38);
    temp_a0 = M2C_FIELD(arg0, s8 *, 0x35);
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
    temp_v1 = M2C_FIELD(temp_a1, s8 *, 4);
    switch (temp_v1) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_s0 = 2;
        break;
    case 1:                                         /* switch 2 */
        var_s0 = 4;
        break;
    }
    func_0027D820(0, temp_a1);
    M2C_FIELD(temp_s5, s32 *, 0) = func_0027E2D0(var_s0, var_s4, var_s2, -1);
    M2C_FIELD(temp_s5, s32 *, 4) = func_0027E2D0(var_s0, var_s3, var_s1, -1);
    func_0027EE70(temp_s5);
    func_0028DF20();
    func_0028DFC0(6, 0, 0, 0, 0x1F);
    M2C_FIELD(temp_s5, s8 *, 0x3D) = 1;
    M2C_FIELD(temp_s5, s8 *, 0x3C) = 0;
    M2C_FIELD(temp_s5, s32 *, 0x44) = 0;
}
