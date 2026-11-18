/* Draft (not built): func_001D9480 at 0x001D9480, size 0x264, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x27C, original 0x264
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D9480.s */

// src/unk/unk_1D5B30.c func_001D9480 size diff=80/159
s32 func_001D9480(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp40;
    s32 sp50;
    s32 sp54;
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 var_v0;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBattle);
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) {
        *(s32 *)((u8 *)arg0 + 0x1898) = -1;
        return *(s32 *)((u8 *)arg0 + 0x1898);
    }
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x1898);
    if (temp_v0 >= 0) {
        return temp_v0;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0x8944) == 0) {
        temp_v0_2 = func_001E1D60(0);
        if ((*(s32 *)((u8 *)arg0 + 0xBA4) != temp_v0_2) && (*(s32 *)((u8 *)arg0 + 0xBA8) != temp_v0_2)) {
            if (*(s8 *)((u8 *)arg0 + 0x200F) == 2) {
                *(s32 *)((u8 *)arg0 + 0x1A48) = -1;
                *(s8 *)((u8 *)arg0 + 0x200F) = 0;
            }
            func_001E6F70(arg0 + 0x650, temp_v0_2);
        }
    }
    *(s8 *)((u8 *)arg0 + 0x2010) = 0;
    sp30 = *(s32 *)((u8 *)arg0 + 0x1350);
    sp34 = (s32) *(s8 *)((u8 *)arg0 + 0x2010);
    A2d_CallHandler(0x35, &sp30);
    *(s32 *)((u8 *)arg0 + 0x17E0) = 0xBF800000;
    if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
        sp50 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp54 = 2;
        Sp_CallHandler(2, &sp40);
    }
    *(s32 *)((u8 *)arg0 + 0x1898) = 0;
    var_v0 = *(s8 *)((u8 *)temp_s0 + 0x8AB1);
    if (var_v0 != 0) {
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if ((1 - (var_v0 - 1)) == *(s32 *)((u8 *)arg0 + 0x1350)) {
            *(s32 *)((u8 *)arg0 + 0x1AC4) = 0;
            return *(s32 *)((u8 *)arg0 + 0x1898);
        }
        goto block_18;
    }
block_18:
    if (*(s8 *)((u8 *)arg0 + 0x1FE4) == 0) {
        if (!(*(f32 *)((u8 *)arg0 + 0x17C0) <= 0.0f) && (*(s8 *)((u8 *)arg0 + 0x1FDA) > 0)) {
            *(s32 *)((u8 *)arg0 + 0x1AC0) = (s32) *(s32 *)((u8 *)arg0 + 0x1EE8);
            *(s32 *)((u8 *)arg0 + 0x1AC4) = 0x20;
            *(s8 *)((u8 *)arg0 + 0x1FE4) = 1;
            *(s32 *)((u8 *)arg0 + 0x1898) = 2;
            func_001D7CC0((void *)(arg0), 1);
        }
        if (*(s8 *)((u8 *)arg0 + 0x1FD9) > 0) {
            *(s32 *)((u8 *)arg0 + 0x1AC0) = (s32) *(s32 *)((u8 *)arg0 + 0x1EE8);
            *(s32 *)((u8 *)arg0 + 0x1AC4) = 0x1F;
            *(s8 *)((u8 *)arg0 + 0x1FE4) = 1;
            *(s32 *)((u8 *)arg0 + 0x1898) = 2;
        }
    }
    *(s32 *)((u8 *)arg0 + 0x1894) = (s32) (*(s32 *)((u8 *)arg0 + 0x1894) + 1);
    temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x1E);
    if (temp_v1 >= 0) {
        if (*(s32 *)((u8 *)arg0 + 0x1894) < temp_v1) {
            goto block_27;
        }
    } else {
block_27:
        *(s32 *)((u8 *)arg0 + 0x1AC0) = (s32) *(s32 *)((u8 *)arg0 + 0x1EE8);
        *(s32 *)((u8 *)arg0 + 0x1AC4) = 0x1E;
        *(s32 *)((u8 *)arg0 + 0x1898) = 2;
    }
    if ((*(s32 *)((u8 *)arg0 + 0x1898) == 2) && (func_001D9480(*(u8 **)((u8 *)arg0 + 0x1354)) == 0)) {
        *(s32 *)((u8 *)arg0 + 0x1AC0) = 0;
        *(s32 *)((u8 *)arg0 + 0x1AC4) = 0;
        *(s32 *)((u8 *)arg0 + 0x1898) = 1;
    }
    return *(s32 *)((u8 *)arg0 + 0x1898);
}
