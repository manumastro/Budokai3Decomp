/* Draft (not built): func_002ACDB0 at 0x002ACDB0, size 0x3D0, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp30' mwccps2.exe Compiler: 1372: D_005BCF34 = sp34; @ 1371: D_005BCF30 = sp30;
 * Original: asm/nonmatchings/battle/scr_func/func_002ACDB0.s */

// src/battle/scr_func.c func_002ACDB0 cerr diff=-1/0
s32 amCamera_SetScreen(s32 *, void *, s32);
s32 func_0012E100(void *, void *, s32, void *, f32);
s32 func_00131D00(s32 *, s32, s128, s128, f32, f32);
s32 func_00131F00(s32 *, s32, s32);
s32 memcpy(s32 *, void *, s32);
extern s32 D_005BCEE0;
extern s32 D_005BCF20;
extern f32 D_005BCF30;
extern f32 D_005BCF34;
extern f32 D_005BCF38;
extern f32 D_005BCF3C;
extern f32 D_005BCF40;
extern f32 D_005BCF44;
extern f32 D_005BCF48;
extern f32 D_005BCF4C;
extern f32 D_005BCF50;
extern f32 D_005BCF54;
extern f32 D_005BCF58;
extern f32 D_005BCF5C;
extern f32 D_005BCF60;
extern f32 D_005BCF64;
extern s32 D_005BCF68;
extern f32 D_005BCF70;
extern f32 D_005BCF74;
extern s32 D_005BCF78;
extern void func_00132DF0(void *);
extern void func_0013B160(void *);
s32 func_002ACDB0(u8 *arg0, u8 *arg1) {
    s32 sp20;
    s32 sp68;
    s32 sp78;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f3_2;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_a3;
    u8 *temp_s0;

    temp_a3 = *(u8 **)((u8 *)arg0 + 0);
    temp_s0 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 8) * 0xB0) + (&D_005BC180 + (*(s32 *)((u8 *)temp_a3 + 0) * 0x160));
    if (*(s32 *)((u8 *)temp_s0 + 0) == 0) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    temp_f3 = (f32) *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 8) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x14)) + 8);
    if (*(s32 *)((u8 *)temp_a3 + 0xC) != 3) {
        *(f32 *)((u8 *)temp_s0 + 0xC) = (f32) (*(f32 *)((u8 *)temp_s0 + 0xC) + *(f32 *)((u8 *)temp_s0 + 0x10));
        if (*(s32 *)((u8 *)temp_s0 + 0x14) == 1) {
            temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC);
            temp_f3_2 = temp_f3 - 1.0f;
            if (!(temp_f1 <= temp_f3_2)) {
                *(f32 *)((u8 *)temp_s0 + 0xC) = (f32) (temp_f1 - temp_f3_2);
                *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x14) - 1);
                *(s32 *)((u8 *)arg0 + 0x10) = 0;
                return 1;
            }
            if (temp_f1 < 0.0f) {
                *(f32 *)((u8 *)temp_s0 + 0xC) = (f32) (temp_f1 + temp_f3_2);
                *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x14) - 1);
                *(s32 *)((u8 *)arg0 + 0x10) = 0;
                return 1;
            }
            goto block_24;
        }
        temp_f2 = *(f32 *)((u8 *)temp_s0 + 0xC);
        temp_f1_2 = temp_f3 - 1.0f;
        if (!(temp_f2 <= temp_f1_2)) {
            temp_f1_3 = temp_f2 - temp_f3;
            *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1_3;
            if (temp_f1_3 < 0.0f) {
                *(f32 *)((u8 *)temp_s0 + 0xC) = 0.0f;
            }
            temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x14);
            if (temp_v1 != -1) {
                *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (temp_v1 - 1);
                if (*(s32 *)((u8 *)temp_s0 + 0x14) <= 0) {
                    *(s32 *)((u8 *)arg0 + 0x10) = 0;
                    return 1;
                }
            }
            goto block_24;
        }
        temp_f0 = temp_f2 + temp_f3;
        if (temp_f2 < 0.0f) {
            *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f0;
            if (!(temp_f0 <= temp_f1_2)) {
                *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1_2;
            }
            temp_v1_2 = *(s32 *)((u8 *)temp_s0 + 0x14);
            if (temp_v1_2 != -1) {
                *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (temp_v1_2 - 1);
                if (*(s32 *)((u8 *)temp_s0 + 0x14) <= 0) {
                    *(s32 *)((u8 *)arg0 + 0x10) = 0;
                    return 1;
                }
            }
            goto block_24;
        }
        goto block_24;
    }
block_24:
    func_0012E100(temp_s0 + 0x20, *(u8 **)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 8), temp_a3, *(f32 *)((u8 *)temp_s0 + 0xC));
    func_0013B160(NULL);
    *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0);
    *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0x10);
    *(s128 *)((u8 *)(&sp20) + 0x20) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0x20);
    *(s128 *)((u8 *)(&sp20) + 0x30) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0x30);
    *(s128 *)((u8 *)(&sp20) + 0x40) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0x40);
    *(s128 *)((u8 *)(&sp20) + 0x50) = (s128) *(s128 *)((u8 *)(&D_005BCF20) + 0x50);
    func_00131D00(&D_005BCF20, 0, *(s128 *)((u8 *)(&D_005BCF20) + 0x10), *(s128 *)((u8 *)(&D_005BCF20) + 0), *(f32 *)((u8 *)temp_s0 + 0xA0), *(f32 *)((u8 *)temp_s0 + 0xA4));
    amCamera_SetScreen(&D_005BCF20, temp_s0 + 0x20, 0x43F00000);
    func_00131F00(&D_005BCF20, 0, 0);
    func_00132DF0(NULL);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($v0) */);
    memcpy(&D_005BCEE0, temp_s0 + 0x60, 0x40);
    *(s128 *)((u8 *)(&D_005BCF20) + 0) = (s128) *(s128 *)((u8 *)(&sp20) + 0);
    D_005BCF30 = sp30;
    D_005BCF34 = sp34;
    D_005BCF38 = sp38;
    D_005BCF3C = sp3C;
    D_005BCF40 = sp40;
    D_005BCF44 = sp44;
    D_005BCF48 = sp48;
    D_005BCF4C = sp4C;
    D_005BCF50 = sp50;
    D_005BCF54 = sp54;
    D_005BCF58 = sp58;
    D_005BCF5C = sp5C;
    D_005BCF60 = sp60;
    D_005BCF64 = sp64;
    *(f32 *)((u8 *)(&D_005BCF68) + 0) = (f32) *(f32 *)((u8 *)(&sp68) + 0);
    *(f32 *)((u8 *)(&D_005BCF68) + 4) = (f32) *(f32 *)((u8 *)(&sp68) + 4);
    D_005BCF70 = sp70;
    D_005BCF74 = sp74;
    *(f32 *)((u8 *)(&D_005BCF78) + 0) = (f32) *(f32 *)((u8 *)(&sp78) + 0);
    *(f32 *)((u8 *)(&D_005BCF78) + 4) = (f32) *(f32 *)((u8 *)(&sp78) + 4);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    return 3;
}
