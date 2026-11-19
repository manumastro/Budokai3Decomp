/* Draft (not built): func_001D16F0 at 0x001D16F0, size 0x1C8, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x230, original 0x1C8
 * Original: asm/nonmatchings/battle/char_acsr/func_001D16F0.s */

// src/battle/char_acsr.c func_001D16F0 size diff=56/140
void func_001D16F0(u8 *arg0) {
    s32 var_a1;
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;

    if (arg0 == NULL) {
        goto block_24;
    }
    temp_s4 = *(s16 *)((u8 *)arg0 + 0x6E);
    temp_s5 = *(s16 *)((u8 *)arg0 + 0x6C);
    if (*(s32 *)((u8 *)arg0 + 0x64) < 0) {
        goto block_5;
    }
    var_s3 = 2;
    if ((s32)(D_003F01C8) == (s32)(0x42)) {
        goto block_4;
    }
    goto block_5;
block_4:
    goto block_6;
block_5:
    var_s3 = 1;
block_6:
    func_0013B0B0(D_003F0800);
    amDraw_SetPacketMode(1);
    var_s0 = 0;
    if (var_s3 <= 0) {
        goto block_23;
    }
loop_8:
    var_s1 = 0;
    if ((temp_s4 - 1) <= 0) {
        goto block_22;
    }
loop_9:
    if (var_s1 == 0) {
        goto block_11;
    }
    amDraw_ClosePacket(-1);
    goto block_16;
block_11:
    if (var_s0 != 0) {
        goto block_14;
    }
    var_a3 = *(s32 *)((u8 *)arg0 + 0x60);
    var_a1 = 0x425;
    goto block_15;
block_14:
    var_a3 = *(s32 *)((u8 *)arg0 + 0x64);
    var_a1 = 0x01402C2D;
block_15:
    func_00134690(1, var_a1, 0, var_a3, 0, 0);
block_16:
    var_s2 = 0;
    if (temp_s5 <= 0) {
        goto block_20;
    }
loop_18:
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x54) + ((var_s2 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s1)) << 7);
    func_00135C60((ClothPt *)(temp_a0), (Vec4 *)(temp_a0 + 0x20), (Vec4 *)(temp_a0 + 0x50));
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x54) + ((var_s2 + (*(s16 *)((u8 *)arg0 + 0x6C) * (var_s1 + 1))) << 7);
    func_00135C60((ClothPt *)(temp_a0_2), (Vec4 *)(temp_a0_2 + 0x20), (Vec4 *)(temp_a0_2 + 0x50));
    var_s2 += 1;
    if (var_s2 < temp_s5) {
        goto loop_18;
    }
block_20:
    var_s1 += 1;
    if (var_s1 < (temp_s4 - 1)) {
        goto loop_9;
    }
block_22:
    var_s0 += 1;
    if (var_s0 < var_s3) {
        goto loop_8;
    }
block_23:
    amDraw_FlushPacket();
    amDraw_SetPacketMode(0);
    func_0013B110(1);
block_24:
    return;
}
