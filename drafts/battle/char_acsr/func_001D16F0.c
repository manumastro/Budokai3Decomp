/* Draft (not built): func_001D16F0 at 0x001D16F0, size 0x1C8, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rand mwccps2.exe Compiler: 329: func_00135C60(temp_a0, temp_a0 + 0x20, temp_a0 + 0x50); @ 298: if (D_003F01C8 != 0x42) {
 * Original: asm/nonmatchings/battle/char_acsr/func_001D16F0.s */

// src/battle/char_acsr.c func_001D16F0 cerr diff=-1/0
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

    if (arg0 != NULL) {
        temp_s4 = *(s16 *)((u8 *)arg0 + 0x6E);
        temp_s5 = *(s16 *)((u8 *)arg0 + 0x6C);
        if (*(s32 *)((u8 *)arg0 + 0x64) >= 0) {
            var_s3 = 2;
            if (D_003F01C8 != 0x42) {
                goto block_5;
            }
        } else {
block_5:
            var_s3 = 1;
        }
        func_0013B0B0(D_003F0800);
        amDraw_SetPacketMode(1);
        var_s0 = 0;
        if (var_s3 > 0) {
            do {
                var_s1 = 0;
                if ((temp_s4 - 1) > 0) {
                    do {
                        if (var_s1 != 0) {
                            amDraw_ClosePacket(-1);
                        } else {
                            if (var_s0 == 0) {
                                var_a3 = *(s32 *)((u8 *)arg0 + 0x60);
                                var_a1 = 0x425;
                            } else {
                                var_a3 = *(s32 *)((u8 *)arg0 + 0x64);
                                var_a1 = 0x01402C2D;
                            }
                            func_00134690(1, var_a1, 0, var_a3, 0, 0);
                        }
                        var_s2 = 0;
                        if (temp_s5 > 0) {
                            do {
                                temp_a0 = *(s32 *)((u8 *)arg0 + 0x54) + ((var_s2 + (*(s16 *)((u8 *)arg0 + 0x6C) * var_s1)) << 7);
                                func_00135C60(temp_a0, temp_a0 + 0x20, temp_a0 + 0x50);
                                temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x54) + ((var_s2 + (*(s16 *)((u8 *)arg0 + 0x6C) * (var_s1 + 1))) << 7);
                                func_00135C60(temp_a0_2, temp_a0_2 + 0x20, temp_a0_2 + 0x50);
                                var_s2 += 1;
                            } while (var_s2 < temp_s5);
                        }
                        var_s1 += 1;
                    } while (var_s1 < (temp_s4 - 1));
                }
                var_s0 += 1;
            } while (var_s0 < var_s3);
        }
        amDraw_FlushPacket();
        amDraw_SetPacketMode(0);
        func_0013B110(1);
    }
}
