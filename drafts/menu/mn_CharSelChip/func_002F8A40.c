/* Draft (not built): func_002F8A40 at 0x002F8A40, size 0x218, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK amModel_SetCurrent(s32, u16);               /* extern */
M2C_UNK func_00227A30(f32 *);                       /* extern */
M2C_UNK func_00228410();                            /* extern */
M2C_UNK func_00228430(f32 *);                       /* extern */
M2C_UNK func_002284D0(f32 *);                       /* extern */
M2C_UNK func_0022C060(s32, M2C_UNK);                /* extern */
M2C_UNK func_0022CD00(s32);                         /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;

void func_002F8A40(void *arg0) {
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp54;
    f32 sp50;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f3;
    f32 var_f0;
    s32 temp_a0;
    s32 var_s0;
    u16 temp_a1;
    void *temp_s1;
    void *temp_v0;

    temp_f3 = M2C_FIELD(arg0, f32 *, 0x2C);
    if (temp_f3 != 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + (temp_f3 * gFrameDelta));
        if (!(M2C_FIELD(arg0, f32 *, 0x2C) <= 0.0f)) {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x28);
            if (!(M2C_FIELD(arg0, f32 *, 0x24) <= temp_f0)) {
                M2C_FIELD(arg0, f32 *, 0x24) = temp_f0;
                M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
            }
        } else {
            temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x28);
            if (M2C_FIELD(arg0, f32 *, 0x24) < temp_f0_2) {
                M2C_FIELD(arg0, f32 *, 0x24) = temp_f0_2;
                M2C_FIELD(arg0, f32 *, 0x2C) = 0.0f;
            }
        }
    }
    func_002284D0(&sp50);
    temp_f0_3 = M2C_FIELD(arg0, f32 *, 0x24);
    sp68 = temp_f0_3;
    sp64 = temp_f0_3;
    sp60 = temp_f0_3;
    sp50 = M2C_FIELD(arg0, f32 *, 0x18);
    sp54 = M2C_FIELD(arg0, f32 *, 0x1C);
    if (M2C_FIELD(arg0, s8 *, 9) == 0) {
        var_f0 = sp50 - 75.0f;
    } else {
        var_f0 = sp50 - 520.0f;
    }
    sp50 = var_f0;
    func_00228430(&sp50);
    temp_a1 = M2C_FIELD(arg0, u16 *, 0xE);
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    D_00470704 = temp_a0;
    D_0047070C = (s32) temp_a1;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, temp_a1);
    D_00470238 = 0;
    var_s0 = 0;
loop_18:
    if (var_s0 < M2C_FIELD(arg0, s8 *, 0xC)) {
        temp_v0 = arg0 + (var_s0 * 0x1C);
        temp_s1 = temp_v0 + 0x38;
        if ((M2C_FIELD(temp_v0, s16 *, 0x38) != 0) && (M2C_FIELD(temp_s1, s8 *, 0xD) != 0) && (M2C_FIELD(temp_s1, s32 *, 4) != 0) && (M2C_FIELD(temp_s1, s32 *, 8) != 0)) {
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
            sp40 = M2C_FIELD(temp_s1, f32 *, 0x14);
            sp44 = M2C_FIELD(temp_s1, f32 *, 0x18);
            sp48 = 2500.0f;
            func_00228430(NULL);
            func_00227A30(&sp40);
            func_0022C060(M2C_FIELD(temp_s1, s32 *, 4), 0x3F800000);
            func_0022CD00(M2C_FIELD(temp_s1, s32 *, 4));
            func_0022C060(M2C_FIELD(temp_s1, s32 *, 8), 0x3F800000);
            func_0022CD00(M2C_FIELD(temp_s1, s32 *, 8));
            func_00228410();
        }
        var_s0 += 1;
        goto loop_18;
    }
    func_00228410();
}
