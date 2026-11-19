/* Draft (not built): func_002880B0 at 0x002880B0, size 0x450, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 242 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x210, original 0x450
 * Original: asm/nonmatchings/sys/mc_opr/func_002880B0.s */

// src/sys/mc_opr.c func_002880B0 size diff=242/132
extern s32 D_00470848;
s32 func_00136E80(s32, s32 *, s32, s32);
s32 func_00137650(f32 *, s32 *, f32 *);
s32 func_001484A0(s32);
extern f32 D_0047042C;
extern f32 D_00470430;
extern void amDraw_FlushPacket(void);
extern void amModel_SetCurrent();
extern void func_00137C10(void *, void *);
void func_002880B0(s32 arg0) {
    f32 spA0;
    f32 spA4;
    s32 spA8;
    f32 spB0;
    s32 spB4;
    s32 spB8;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    s32 spCC;
    f32 spD0;
    f32 spD4;
    f32 spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    s32 spE8;
    s32 spEC;
    f32 temp_f0;
    s32 temp_s5;
    u8 *temp_s3;

    temp_s5 = func_001484A0(0);
    spE0 = 0;
    spE4 = 0;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spD0 = (D_0047042C / 2.0f) - 40.0f;
    spD4 = (64.0f + (D_00470430 / 2.0f)) - 22.0f;
    spD8 = 90.0f;
    spDC = 0x3F800000;
    spC0 = 80.0f + spD0;
    spC4 = 44.0f + spD4;
    spC8 = spD8;
    spCC = 0x3F800000;
    func_00136E80(0x100, &spE0, -1, 0);
    func_00137C10(&spD0, &spC0);
    amDraw_FlushPacket();
    temp_s3 = (unsigned char *)(D_00470848 + *(s32 *)((u8 *)(D_00470848 + *(s32 *)((u8 *)D_00470848 + 0x14)) + 0x84));
    spE0 = 0x3F800000;
    spE4 = 0x3F800000;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    M2C_ERROR(/* unknown instruction: adda.s $f0, $f1 */);
    temp_f0 = ((D_0047042C / 2.0f) - (0.5f * (f32) *(s16 *)((u8 *)temp_s3 + 0x10))) - 0.5f;
    spD0 = temp_f0;
    spD4 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f4, $f0 */) - 0.5f;
    spD8 = 80.0f;
    spB0 = 0.0f;
    spB4 = 0;
    spB8 = 0x3F800000;
    spC0 = 0.5f + (temp_f0 + (f32) *(s16 *)((u8 *)temp_s3 + 0x10));
    spC4 = 0.5f + (spD4 + (f32) *(s16 *)((u8 *)temp_s3 + 0x12));
    spC8 = 80.0f;
    spA0 = (f32) *(s16 *)((u8 *)temp_s3 + 0x10);
    spA8 = 0x3F800000;
    spA4 = (f32) *(s16 *)((u8 *)temp_s3 + 0x12);
    amModel_SetCurrent(D_00470848, 0x43322110, 0x42A00000);
    func_00136E80(0x40000C26, NULL, 0x21, 0x44);
    func_00137650(&spD0, &spE0, &spB0);
    func_00137650(&spC0, &spE0, &spA0);
    spD4 -= 1.0f;
    spC4 -= 1.0f;
    spC8 -= 1.0f;
    spEC = 0x3E800000;
    func_00137650(&spD0, &spE0, &spB0);
    func_00137650(&spC0, &spE0, &spA0);
    spD4 += 2.0f;
    spC4 += 2.0f;
    spC8 -= 1.0f;
    func_00137650(&spD0, &spE0, &spB0);
    func_00137650(&spC0, &spE0, &spA0);
    amDraw_FlushPacket();
    spE0 = 0;
    spE4 = 0;
    spE8 = 0;
    spEC = 0x3F000000;
    spD0 = (D_0047042C / 2.0f) - 40.0f;
    M2C_ERROR(/* unknown instruction: adda.s $f1, $f3 */);
    spD4 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f2, $f0 */);
    spD8 = 70.0f;
    spC0 = 80.0f + spD0;
    spC4 = 22.0f + spD4;
    spC8 = 70.0f;
    func_00136E80(0x900, &spE0, -1, 0x44);
    func_00137C10(&spD0, &spC0);
    amDraw_FlushPacket();
    func_001484A0(temp_s5);
}
