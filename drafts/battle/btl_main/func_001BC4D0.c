/* Draft (not built): func_001BC4D0 at 0x001BC4D0, size 0x2F0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 75 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2BC, original 0x2F0
 * Original: asm/nonmatchings/battle/btl_main/func_001BC4D0.s */

// src/battle/btl_main.c func_001BC4D0 size diff=75/175
extern f32 func_001E52B0(s32);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
s32 func_0013B460(f32);
s32 func_00142280(void *, s32 *, s32 *, s32);
extern s128 D_00431410;
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
extern char D_003F0800[];
void func_001BC4D0(u8 *arg0) {
    s128 sp40;
    s32 sp50;
    s32 sp60;
    f32 temp_f21;
    f32 var_f20;
    f32 var_f4;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_f21 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    func_001C37F0((Fighter *)(arg0 + 0xD0), 0);
    *(s32 *)((u8 *)arg0 + 0xD4) = 0;
    var_f20 = *(f32 *)((u8 *)arg0 + 0xB64);
    if (var_f20 == 0.0f) {
        var_f20 = 1.5f;
    }
    if (!(func_001E52B0(0) < 15.0f)) {
        temp_s0 = arg0 + 0x1360;
        if ((*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) && (*(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x60) * 4) + temp_s0) + 0x164) != 0)) {
            sp40 = D_00431410;
            func_0013B0B0(D_003F0800);
            var_f4 = (f32) *(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x60) * 4) + temp_s0) + 0x166) / 30.0f;
            if (var_f4 > 1.0f) {
                var_f4 = 1.0f;
            }
            if (*(s16 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0x60) * 4) + temp_s0) + 0x164) == -1) {
                func_0013B460((3.1415927f * (2.0f * (30.0f * var_f4))) / 360.0f);
            } else {
                var_v0 = 1;
                if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {

                } else {
                    var_v0 = 0;
                }
                if (var_v0 == 0) {
                    func_0013B460((3.1415927f * (2.0f * (-30.0f * var_f4))) / 360.0f);
                }
            }
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
            M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
            M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            func_0013B110(1);
            func_00146F30(arg0 + 0xD0);
            func_00141C30(&sp60, &sp40, arg0 + 0xD0);
            func_00142280(arg0 + 0xD0, &sp50, &sp60, 0);
        }
    }
    temp_a0 = arg0 + 0xD0;
    *(f32 *)((u8 *)arg0 + 0xD0) = (f32) (*(f32 *)((u8 *)arg0 + 0xD0) * 0.4f);
    *(f32 *)((u8 *)arg0 + 0xD8) = (f32) (*(f32 *)((u8 *)arg0 + 0xD8) * 0.4f);
    func_00146ED0((f32 *)(temp_a0), (f32 *)(temp_a0), var_f20 * temp_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_001E4FA0(arg0, -1);
    func_001E4E20(arg0, 0);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        *(f32 *)((u8 *)arg0 + 0x44) = (f32) *(f32 *)((u8 *)arg0 + 0x1844);
    }
    *(s32 *)((u8 *)arg0 + 0x17BC) = 0x3DCCCCCD;
}
