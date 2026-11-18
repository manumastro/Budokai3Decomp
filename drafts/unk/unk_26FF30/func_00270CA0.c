/* Draft (not built): func_00270CA0 at 0x00270CA0, size 0x214, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 103 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x214
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00270CA0.s */

// src/unk/unk_26FF30.c func_00270CA0 size diff=103/80
s32 func_00136E80(s32, s128 *, s32, s32);
s32 func_00137B60(s32 *);
extern f32 D_00452F44;
extern s128 D_00452F60;
extern f32 D_00470018;
extern void *D_004706CC;
extern void amDraw_FlushPacket(void);
void func_00270CA0(void) {
    s32 sp30;
    f32 sp34;
    s32 sp40;
    f32 sp44;
    s128 sp50;
    s32 temp_a1;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s0;

    temp_a1 = *(s32 *)((u8 *)D_004707FC + 0x50);
    temp_s1 = *(s32 *)((u8 *)((temp_a1 * 4) + D_004707FC) + 0x5DC) - *(s32 *)((u8 *)D_004707FC + 0x4C);
    if (temp_a1 < 0x2F) {
        var_a0 = temp_a1 + 1;
loop_7:
        if (var_a0 >= 0x30) {
            var_a0 = -1;
        } else if (*(s32 *)((u8 *)((var_a0 * 4) + D_004707FC) + 0x5DC) >= 0) {

        } else {
            var_a0 += 1;
            goto loop_7;
        }
        var_s0 = *(s32 *)((u8 *)((var_a0 * 4) + D_004707FC) + 0x5DC) - *(s32 *)((u8 *)D_004707FC + 0x4C);
        if (var_s0 >= 0xA) {
            var_s0 = 9;
        }
    } else {
        var_s0 = 9;
    }
    sp50 = D_00452F60;
    if (temp_s1 > 0) {
        func_00136E80(0x900, &sp50, -1, 0x44);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp44 += *(f32 *)((u8 *)D_004706CC + 4);
        func_00137B60(&sp40);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp44 = *(f32 *)((u8 *)D_004706CC + 4) + (D_00452F44 + (D_00470018 * (f32) (temp_s1 + 1)));
        func_00137B60(&sp40);
        amDraw_FlushPacket();
    }
    if (var_s0 < 9) {
        func_00136E80(0x900, &sp50, -1, 0x44);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp34 = *(f32 *)((u8 *)D_004706CC + 4) + (*(f32 *)0x452F40 + (D_00470018 * (f32) var_s0));
        func_00137B60(&sp30);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp34 += *(f32 *)((u8 *)D_004706CC + 4);
        func_00137B60(&sp30);
        amDraw_FlushPacket();
    }
}
