/* Draft (not built): func_0027FAE0 at 0x0027FAE0, size 0x1C0, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK func_0027E9C0(void *);                      /* extern */
M2C_UNK func_0027EA60(void *);                      /* extern */
M2C_UNK func_002800F0(void *);                      /* extern */
M2C_UNK func_00287C30(void *, s32, s32 *, s32);     /* extern */
M2C_UNK func_00287C60(u8);                          /* extern */
extern s32 D_00470838;
extern s32 D_004B4B50;
extern M2C_UNK D_0058F680;
extern M2C_UNK func_0027F9F0;
extern M2C_UNK func_0027FEB0;

void func_0027FAE0(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1_2;
    s32 *var_a2;
    s32 var_a3;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 var_v1;
    void *temp_s0;
    void *temp_s1;

    var_a3 = 0;
    var_a2 = &D_00470838;
    var_a1 = &D_0058F680;
    temp_s1 = M2C_FIELD(arg0, void **, 0x38);
    temp_s0 = M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), void **, 0x30);
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            D_004B4B50 |= M2C_FIELD(var_a1, u16 *, 0xA4);
        }
        var_a3 += 1;
        var_a1 = var_a1 + 0x7FFF + 0x5681;
        var_a2 += 4;
    } while (var_a3 < 2);
    func_00287C30(M2C_FIELD(temp_s1, void **, 8), D_004B4B50, var_a2, var_a3);
    func_0027EA60(temp_s1);
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0x262);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_v1 = 7;
block_17:
        M2C_FIELD(temp_s1, u8 *, 0x3D) = var_v1;
        break;
    case 3:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
        var_v1 = 8;
        goto block_17;
    case 4:                                         /* switch 1 */
        var_v1 = 9;
        goto block_17;
    case 5:                                         /* switch 1 */
        var_v1 = 0xA;
        goto block_17;
    }
    temp_a0_2 = M2C_FIELD(temp_s1, u8 *, 0x3D);
    switch (temp_a0_2) {                            /* switch 2; irregular */
    case 8:                                         /* switch 2 */
    case 7:                                         /* switch 2 */
        return;
    case 9:                                         /* switch 2 */
        func_0027E9C0(temp_s1);
        var_v1_2 = &func_0027F9F0;
        if (&func_0027F9F0 == NULL) {
            var_v1_2 = NULL;
        }
block_33:
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
        return;
    case 10:                                        /* switch 2 */
        if (M2C_FIELD(temp_s1, void **, 8) != NULL) {
            func_00287C60(temp_a0_2);
            M2C_FIELD(temp_s1, void **, 8) = NULL;
        }
        func_002800F0(arg0);
        var_v1_2 = &func_0027FEB0;
        if (&func_0027FEB0 == NULL) {
            var_v1_2 = NULL;
        }
        goto block_33;
    }
}
