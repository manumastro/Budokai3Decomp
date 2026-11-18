/* Draft (not built): func_0028D810 at 0x0028D810, size 0x588, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK amDraw_FlushPacket();                       /* extern */
M2C_UNK amModel_SetCurrent(void *, M2C_UNK, M2C_UNK, s16); /* extern */
M2C_UNK func_00136E80(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00137650(f32 *, s128 *, f32 *);        /* extern */
s32 func_001484A0(s32);                             /* extern */
M2C_UNK func_00288500();                            /* extern */
extern s128 D_00453730;
extern s32 D_00470048;
extern f32 D_0047042C;
extern void *D_00470848;
extern s32 D_0047084C;
extern s32 D_00470888;

void func_0028D810(void) {
    s32 spCC;
    s128 spC0;
    s32 spBC;
    s32 spB8;
    f32 spB4;
    f32 spB0;
    s32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    s32 sp98;
    s32 sp94;
    f32 sp90;
    s32 sp88;
    f32 sp84;
    f32 sp80;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a3;
    s32 temp_a3_2;
    s32 temp_s2_2;
    s32 temp_s6;
    s32 var_s3;
    void *temp_s1;
    void *temp_s2;
    void *temp_s4;

    spC0 = D_00453730;
    func_00288500();
    temp_s6 = func_001484A0(0);
    temp_s4 = D_00470848 + M2C_FIELD(D_00470848, s32 *, 0x14);
    if ((D_00470888 >= 4) && (D_00470888 < 0x21) && (D_00470048 < 0xB)) {
        var_s3 = D_0047084C + 0x22;
        if ((D_00470048 >= 8) && ((D_00470888 == 0x1A) || (D_00470888 == 0x20))) {
            var_s3 = 0x24;
        }
        temp_s2 = D_00470848 + *(temp_s4 + (var_s3 * 4));
        temp_a3 = M2C_FIELD(temp_s2, s16 *, 0x10);
        M2C_ERROR(/* unknown instruction: suba.s $f1, $f0 */);
        temp_f0 = ((D_0047042C / 2.0f) - (0.5f * (f32) temp_a3)) - 0.5f;
        spB0 = temp_f0;
        spB4 = M2C_ERROR(/* unknown instruction: madd.s $f0, $f5, $f0 */) - 0.5f;
        spB8 = 0x42C80000;
        sp90 = 0.0f;
        sp94 = 0;
        sp98 = 0x3F800000;
        spA0 = 0.5f + (temp_f0 + (f32) M2C_FIELD(temp_s2, s16 *, 0x10));
        spA4 = 0.5f + (spB4 + (f32) M2C_FIELD(temp_s2, s16 *, 0x12));
        spA8 = 100.0f;
        sp80 = (f32) M2C_FIELD(temp_s2, s16 *, 0x10);
        sp88 = 0x3F800000;
        sp84 = (f32) M2C_FIELD(temp_s2, s16 *, 0x12);
        amModel_SetCurrent(D_00470848, 0x43322110, 0x42C80000, temp_a3);
        func_00136E80(0x40000C26, 0, var_s3, 0x44);
        func_00137650(&spB0, &spC0, &sp90);
        func_00137650(&spA0, &spC0, &sp80);
        spB4 -= 1.0f;
        spA4 -= 1.0f;
        spA8 -= 1.0f;
        spCC = 0x3E800000;
        func_00137650(&spB0, &spC0, &sp90);
        func_00137650(&spA0, &spC0, &sp80);
        spB4 += 2.0f;
        spA4 += 2.0f;
        spA8 -= 1.0f;
        func_00137650(&spB0, &spC0, &sp90);
        func_00137650(&spA0, &spC0, &sp80);
        amDraw_FlushPacket();
    }
    temp_s2_2 = D_00470888;
    temp_a3_2 = *(temp_s4 + (temp_s2_2 * 4));
    spCC = 0x3F800000;
    temp_s1 = D_00470848 + temp_a3_2;
    M2C_ERROR(/* unknown instruction: adda.s $f0, $f6 */);
    temp_f0_2 = ((D_0047042C / 2.0f) - (0.5f * (f32) M2C_FIELD(temp_s1, s16 *, 0x10))) - 0.5f;
    spB0 = temp_f0_2;
    spB4 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f4, $f0 */) - 0.5f;
    spB8 = 0x42C80000;
    spBC = 0x3F800000;
    sp90 = 0.0f;
    sp94 = 0;
    sp98 = 0x3F800000;
    spA0 = 0.5f + (temp_f0_2 + (f32) M2C_FIELD(temp_s1, s16 *, 0x10));
    spA4 = 0.5f + (spB4 + (f32) M2C_FIELD(temp_s1, s16 *, 0x12));
    spA8 = 100.0f;
    spAC = 0x3F800000;
    sp80 = (f32) M2C_FIELD(temp_s1, s16 *, 0x10);
    sp88 = 0x3F800000;
    sp84 = (f32) M2C_FIELD(temp_s1, s16 *, 0x12);
    amModel_SetCurrent(D_00470848, 0x43322110, 0x3F800000, (s16) temp_a3_2);
    func_00136E80(0x40000C26, 0, temp_s2_2, 0x44);
    func_00137650(&spB0, &spC0, &sp90);
    func_00137650(&spA0, &spC0, &sp80);
    spB4 -= 1.0f;
    spA4 -= 1.0f;
    spA8 -= 1.0f;
    spCC = 0x3E800000;
    func_00137650(&spB0, &spC0, &sp90);
    func_00137650(&spA0, &spC0, &sp80);
    spB4 += 2.0f;
    spA4 += 2.0f;
    spA8 -= 1.0f;
    func_00137650(&spB0, &spC0, &sp90);
    func_00137650(&spA0, &spC0, &sp80);
    amDraw_FlushPacket();
    func_001484A0(temp_s6);
}
