/* Draft (not built): func_002016F0 at 0x002016F0, size 0x424, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 205 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x238, original 0x424
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002016F0.s */

// src/unk/unk_1FB760.c func_002016F0 size diff=205/142
extern void func_00146ED0(f32 *, f32 *, f32);
s32 amDraw_ClosePacket(s32, s32);
s32 func_001363D0(s32, s32, s32, s32);
s32 func_00136870(s32, s32, s32, s32);
s32 func_001377E0(s32 *, void *);
s32 func_00137920(void *, void *, void *, void *);
extern s128 D_0044B8F0;
extern s32 D_00470294;
extern s32 D_00470298;
extern s32 gPacketPtr;
extern s32 gPacketQwc;
extern void amDraw_FlushPacket(void);
void func_002016F0(u8 *arg0) {
    s128 sp40;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 spA0;
    s32 spB0;
    s32 spC0;
    f32 spD0;
    f32 spD4;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    f32 sp120;
    f32 sp124;
    s32 *var_s1;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x14);
    temp_s0 = arg0 + 0x44;
    var_s1 = *(s32 **)((u8 *)arg0 + 0x3C);
    func_00133780(0, 1);
    temp_v1 = *(s32 *)((u8 *)var_s1 + 0xC);
    if (temp_v1 != 0) {
        goto block_5;
    }
    func_001363D0(0, 0x812, 0, 0x44);
    goto loop_3;
block_2:
    func_00137920(var_s1 + 0x10, var_s1 + 0x30, var_s1 + 0x20, var_s1 + 0x40);
    var_s1 = (s32 *)(*var_s1);
loop_3:
    if (var_s1 != temp_s0) {
        goto block_2;
    }
    amDraw_FlushPacket();
    goto block_25;
block_5:
    if (temp_v1 != 1) {
        goto block_10;
    }
    func_00136870(1, 0x812, 0, -1);
    goto loop_8;
block_7:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp120 = *(f32 *)((u8 *)var_s1 + 0x24) - *(f32 *)((u8 *)var_s1 + 0x14);
    sp124 = *(f32 *)((u8 *)var_s1 + 0x10) - *(f32 *)((u8 *)var_s1 + 0x20);
    func_00146ED0(&sp120, &sp120, *(f32 *)((u8 *)temp_s2 + 0x50));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146ED0(&sp120, &sp120, *(f32 *)((u8 *)temp_s2 + 0x54));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_001377E0(&spE0, var_s1 + 0x30);
    func_001377E0(&spF0, var_s1 + 0x30);
    func_001377E0(&sp100, var_s1 + 0x40);
    func_001377E0(&sp110, var_s1 + 0x40);
    amDraw_ClosePacket(-1, 0);
    var_s1 = *(s32 **)((u8 *)var_s1 + 0);
loop_8:
    if (var_s1 != temp_s0) {
        goto block_7;
    }
    amDraw_FlushPacket();
    goto block_25;
block_10:
    if (temp_v1 != 2) {
        goto block_25;
    }
    sp50 = 0;
    sp54 = 0;
    sp58 = 0x3F800000;
    sp5C = 0x3F800000;
    sp60 = 0x3F800000;
    sp64 = 0;
    sp68 = 0x3F800000;
    sp6C = 0x3F800000;
    sp70 = 0;
    sp74 = 0x3F800000;
    sp78 = 0x3F800000;
    sp7C = 0x3F800000;
    sp80 = 0x3F800000;
    sp84 = 0x3F800000;
    sp88 = 0x3F800000;
    sp8C = 0x3F800000;
    func_00136870(1, 0x836, 0, *(s32 *)((u8 *)temp_s2 + 0x7C));
    goto loop_23;
block_13:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spD0 = *(f32 *)((u8 *)var_s1 + 0x24) - *(f32 *)((u8 *)var_s1 + 0x14);
    spD4 = *(f32 *)((u8 *)var_s1 + 0x10) - *(f32 *)((u8 *)var_s1 + 0x20);
    func_00146ED0(&spD0, &spD0, *(f32 *)((u8 *)temp_s2 + 0x50));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146ED0(&spD0, &spD0, *(f32 *)((u8 *)temp_s2 + 0x54));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    sp40 = D_0044B8F0;
    if (D_00470298 < 0x3E) {
        goto block_15;
    }
    amDraw_ClosePacket(-1, 0);
block_15:
    var_a1 = 0;
    goto loop_21;
block_17:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
    if (var_a1 >= 2) {
        goto block_19;
    }
    goto block_20;
block_19:
block_20:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    var_a1 += 1;
    gPacketPtr = gPacketPtr - 0x10 + 0x40;
loop_21:
    if (var_a1 < 4) {
        goto block_17;
    }
    temp_a1 = gPacketQwc + 0xC;
    gPacketQwc = temp_a1;
    D_00470294 += 0xC;
    D_00470298 += 4;
    amDraw_ClosePacket(-1, temp_a1);
    var_s1 = *(s32 **)((u8 *)var_s1 + 0);
loop_23:
    if (var_s1 != temp_s0) {
        goto block_13;
    }
    amDraw_FlushPacket();
block_25:
    func_00133780(0, 0);
    return;
}
