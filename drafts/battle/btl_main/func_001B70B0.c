/* Draft (not built): func_001B70B0 at 0x001B70B0, size 0x2B0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 91 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A4, original 0x2B0
 * Original: asm/nonmatchings/battle/btl_main/func_001B70B0.s */

// src/battle/btl_main.c func_001B70B0 size diff=91/169
extern void func_001D9960(Fighter *f, s32 a, s32 b);
s32 func_001E39F0(void *);
s32 func_001E3AA0(void *, s32, s16);
void func_001B70B0(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp50;
    u8 *sp68;
    u8 *sp6C;
    s16 temp_a2;
    s16 temp_v1;
    s32 temp_a1;
    s32 var_a0;
    s32 var_v1;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0xCB4);
    if (temp_v1 != 1) {
        if (temp_v1 != 0) {
            return;
        }
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= 60.0f)) {
            *(s32 *)((u8 *)arg0 + 0x1864) = 0;
            if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                *(s32 *)((u8 *)arg0 + 0x1864) = 1;
            } else {
                *(s32 *)((u8 *)arg0 + 0x1864) = 5;
            }
            func_001E5040(arg0);
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
            func_001E3AA0(arg0, 0, 0);
            func_001E3460(arg0);
            func_001E39F0(arg0);
            sp50 = *(s32 *)((u8 *)arg0 + 0x1350);
            A2d_CallHandler(0x2F, &sp50);
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
            *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3E4CCCCD;
            *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E19999A;
            *(s16 *)((u8 *)arg0 + 0x1A38) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A38) + *(s16 *)((u8 *)arg0 + 0x1A36));
            *(s16 *)((u8 *)arg0 + 0x1A36) = 0;
            func_001D9960((struct Fighter *)(arg0), 0xE, 0);
        }
    } else {
        Btl_UpdateLimitXY(0, 0x3F0CCCCD, 0);
        func_001E3BB0(arg0);
        Fighter_ResetMotion(arg0, 0);
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= 6.0f) && (*(s16 *)((u8 *)arg0 + 0x1A3C) >= 0)) {
            sp30 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp34 = (s32) *(s16 *)((u8 *)arg0 + 0x1A3A);
            sp38 = 1;
            func_00218440(*(s16 *)((u8 *)arg0 + 0x1A3C), &sp20);
            *(s16 *)((u8 *)arg0 + 0x1A3C) = -1;
        }
        if (!(*(f32 *)((u8 *)arg0 + 0xCB8) <= 8.0f)) {
            *(s16 *)((u8 *)arg0 + 0x1A34) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A34) + 1);
            temp_a2 = *(s16 *)((u8 *)arg0 + 0x1A34);
            temp_a1 = temp_a2 % 8;
            if (temp_a1 == 0) {
                var_a0 = *(s16 *)((u8 *)arg0 + 0x1A38) - *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1A38);
                if (var_a0 == 0) {
                    var_a0 = -1;
                    if (*(s16 *)((u8 *)arg0 + 0x1A32) < 0) {

                    } else {
                        var_a0 = 1;
                    }
                }
                var_v1 = var_a0;
                if (var_a0 < 0) {
                    var_v1 = -var_a0;
                }
                if ((var_v1 >= 0x4C) || (temp_a2 >= 0x33)) {
                    if (var_a0 >= 0) {
                        sp68 = arg0;
                        sp6C = *(u8 **)((u8 *)arg0 + 0x1354);
                        func_00237000(1, &sp68);
                    }
                    *(s8 *)((u8 *)arg0 + 0x1FFE) = 0;
                    return;
                }
                goto block_27;
            }
block_27:
            if (temp_a1 == 7) {
                *(s16 *)((u8 *)arg0 + 0x1A38) = (s16) (*(s16 *)((u8 *)arg0 + 0x1A38) + *(s16 *)((u8 *)arg0 + 0x1A36));
                *(s16 *)((u8 *)arg0 + 0x1A36) = 0;
            }
            func_001E3AA0(arg0, temp_a1, temp_a2);
            func_001E3460(arg0);
            func_001E39F0(arg0);
            *(f32 *)((u8 *)arg0 + 0xCB8) = 0.0f;
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3E4CCCCD;
            *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E19999A;
        }
    }
}
