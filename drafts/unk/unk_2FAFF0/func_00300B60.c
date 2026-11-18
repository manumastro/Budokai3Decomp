/* Draft (not built): func_00300B60 at 0x00300B60, size 0x140, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *)((u8 *)temp_v1 + 0x38) + sp28); @ 910: *(f32 *)((u8 *)temp_v1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x34) + sp24);
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_00300B60.s */

// src/unk/unk_2FAFF0.c func_00300B60 cerr diff=-1/0
f32 func_00146E90(f32 *, f32 *, f32 *, f32 *);
s32 func_00146ED0(f32 *, f32 *, f32);
extern s128 D_00458B80;
extern s128 D_00458B90;
void func_00300B60(u8 *arg0) {
    f32 sp20;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 temp_f12;
    s32 var_t7;
    u8 *temp_s0;
    u8 *temp_v1;

    temp_s0 = arg0 + 0x30;
    sp40 = (s128) D_00458B80;
    sp40 = *(f32 *)((u8 *)arg0 + 0x30);
    sp44 = *(f32 *)((u8 *)arg0 + 0x34);
    sp48 = *(f32 *)((u8 *)arg0 + 0x38);
    sp30 = (s128) D_00458B90;
    sp30 = *(f32 *)((u8 *)arg0 + 0x3C);
    sp34 = *(f32 *)((u8 *)arg0 + 0x40);
    sp38 = *(f32 *)((u8 *)arg0 + 0x44);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
    temp_f12 = *(f32 *)((u8 *)gTourMap + 0x50) * *(f32 *)((u8 *)temp_s0 + 0x18);
    if (func_00146E90(&sp20, &sp40, &sp30, &sp20) <= temp_f12) {
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(f32 *)((u8 *)temp_s0 + 0xC);
        *(f32 *)((u8 *)temp_s0 + 4) = (f32) *(f32 *)((u8 *)temp_s0 + 0x10);
        *(f32 *)((u8 *)temp_s0 + 8) = (f32) *(f32 *)((u8 *)temp_s0 + 0x14);
        return;
    }
    func_00146ED0(&sp20, &sp20, temp_f12);
    var_t7 = 0;
    temp_v1 = *(u8 **)((u8 *)gTourMap + 0x44);
    *(f32 *)((u8 *)temp_v1 + 0x30) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x30) + sp20);
    *(f32 *)((u8 *)temp_v1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x34) + sp24);
    *(f32 *)((u8 *)temp_v1 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v1 + 0x38) + sp28);
loop_6:
    if (var_t7 < 4) {
        func_002FFD20(var_t7);
        var_t7 = M2C_ERROR(/* Read from unset register $t7 */) + 1;
        goto loop_6;
    }
}
