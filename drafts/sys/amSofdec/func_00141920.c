/* Draft (not built): func_00141920 at 0x00141920, size 0x310, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp78' @ 227: temp_f2 = 2.0f * ((sp70 * sp78) - (sp74 * sp7C));
 * Original: asm/nonmatchings/sys/amSofdec/func_00141920.s */

// src/sys/amSofdec.c func_00141920 cerr diff=-1/0
extern void func_0011F680(void);
void func_00141920(f32 *arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    f32 sp70;
    f32 temp_f21;
    f32 temp_f2;

    func_00142370(&sp70, arg3);
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f0 */);
    temp_f21 = 1.0f - (2.0f * M2C_ERROR(/* unknown instruction: madd.s $f1, $f3, $f2 */));
    temp_f2 = 2.0f * ((sp70 * sp78) - (sp74 * sp7C));
    if (!((1.0f - (temp_f2 * temp_f2)) <= 0.0f)) {
        M2C_ERROR(/* unknown instruction: c1 0x10344 */);
    }
    func_0011F680();
    *arg1 = (32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.141592f;
    M2C_ERROR(/* unknown instruction: c1 0x44 */);
    if ((temp_f21 * temp_f21) == 0.0f) {

    }
    M2C_ERROR(/* unknown instruction: mula.s $f3, $f22 */);
    M2C_ERROR(/* unknown instruction: msub.s $f12, $f0, $f20 */);
    M2C_ERROR(/* unknown instruction: mula.s $f2, $f20 */);
    M2C_ERROR(/* unknown instruction: msub.s $f13, $f4, $f22 */);
    func_0011F680();
    *arg0 = (32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.141592f;
    func_0011F680();
    *arg2 = (32768.0f * M2C_ERROR(/* Read from unset register $f0 */)) / 3.141592f;
}
