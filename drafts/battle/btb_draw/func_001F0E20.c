/* Draft (not built): func_001F0E20 at 0x001F0E20, size 0x364, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 153 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2BC, original 0x364
 * Original: asm/nonmatchings/battle/btb_draw/func_001F0E20.s */

// src/battle/btb_draw.c func_001F0E20 size diff=153/175
extern void func_0013B160(s32);
s32 FlushCache(s32, f32 *);
s32 func_0012FBF0(s32 *, s32, f32 *, s32);
s32 func_00146F10(void *, void *, f32);
f32 func_00146F90(s32 *, s32 *);
extern s128 D_0044B600;
extern s32 D_00459290;
extern f32 D_0047040C;
extern f32 D_00470410;
void func_001F0E20(u8 *arg0) {
    f32 sp30;
    f32 sp34;
    s32 sp40;
    s32 sp140;
    s32 sp150;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 var_f0;
    s32 *var_t1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_t0;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x30;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_f0 = func_00146F90(&sp150, &sp140);
    *(f32 *)((u8 *)temp_s0 + 0x2C) = temp_f0;
    if (temp_f0 < 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    func_0013B160((s32)(&D_00459290));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf1, $vf31, $vf0w */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_00146F10(temp_s0 + 0x10, temp_s0 + 0x10, 1.0f / *(f32 *)((u8 *)temp_s0 + 0x1C));
    temp_f20 = *(f32 *)((u8 *)temp_s0 + 0x18);
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf3 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf4 */);
    M2C_ERROR(/* unknown instruction: vsubx.x $vf5, $vf5, $vf1x */);
    M2C_ERROR(/* unknown instruction: vsubx.y $vf5, $vf5, $vf2x */);
    M2C_ERROR(/* unknown instruction: vsubx.z $vf5, $vf5, $vf3x */);
    M2C_ERROR(/* unknown instruction: vsubx.w $vf5, $vf5, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($a0) */);
    if (*(f32 *)((u8 *)temp_s0 + 0x18) < 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    temp_f3 = *(f32 *)((u8 *)temp_s0 + 0x10);
    if (temp_f3 < -8.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    temp_f2 = *(f32 *)((u8 *)temp_s0 + 0x14);
    if (temp_f2 < -20.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    if (!(temp_f3 <= (8.0f + D_0047040C))) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    if (!(temp_f2 <= (20.0f + D_00470410))) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
        return;
    }
    memset(&sp40, 0, 0x100);
    sp30 = (s128) D_0044B600;
    sp30 = *(f32 *)((u8 *)temp_s0 + 0x10) - 4.0f;
    sp34 = *(f32 *)((u8 *)temp_s0 + 0x14) - 4.0f;
    FlushCache(0, &sp30);
    func_0012FBF0(&sp40, 2, &sp30, 1);
    var_t1 = &sp40;
    var_t0 = 0;
    *(f32 *)((u8 *)temp_s0 + 0x24) = 1.0f;
loop_25:
    if (var_t0 < 8) {
        var_a1 = 0;
loop_23:
        if (var_a1 < 8) {
            *var_t1 = (s32) ((u64) ((s64) *var_t1 << 0x28) >> 0x28);
            temp_v1 = *var_t1;
            if (temp_v1 >= 0) {
                var_f0 = (f32) temp_v1;
            } else {
                var_f0 = 2.0f * (f32) (((u32) temp_v1 >> 1) | (temp_v1 & 1));
            }
            if (temp_f20 < var_f0) {
                *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x24) - 0.02f);
            }
            var_t1 += 4;
            var_a1 += 1;
            goto loop_23;
        }
        var_t0 += 1;
        goto loop_25;
    }
    if (*(f32 *)((u8 *)temp_s0 + 0x24) < 0.0f) {
        *(f32 *)((u8 *)temp_s0 + 0x18) = -1.0f;
    }
}
