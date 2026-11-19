/* Draft (not built): func_001C3120 at 0x001C3120, size 0x3DC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 144 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3D0, original 0x3DC
 * Original: asm/nonmatchings/battle/btl_main/func_001C3120.s */

// src/battle/btl_main.c func_001C3120 size diff=144/244
s32 func_001E2B00();
s32 func_001E39C0(s32);
void func_001C3120(u8 *arg0) {
    u8 *sp58;
    s32 sp5C;
    f32 temp_f1;
    s16 temp_a0_4;
    s16 temp_a1;
    s16 temp_v1_3;
    s32 *var_a1;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_s2;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a2;
    s32 var_v1;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_s1;

    temp_s0 = arg0 + 0x1360;
    func_001E2B00();
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x8AA8) & 1;
    } else {
        var_v1 = 0;
    }
    if ((var_v1 == 0) && (*(s8 *)((u8 *)arg0 + 0x1FFD) == 0) && (*(s8 *)((u8 *)arg0 + 0x2013) == 0) && (*(s8 *)((u8 *)arg0 + 0x200F) == 0)) {
        temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x3FC);
        temp_s2 = (temp_a0 + 1) & 0x1F;
        temp_a0_2 = (temp_a0 * 0x10) + temp_s0;
        if (*(s32 *)((u8 *)temp_a0_2 + 0x204) != 0) {
            var_a1 = (int *)(temp_a0_2 + 0x1F8);
            temp_a0_3 = *(s32 *)((u8 *)temp_a0_2 + 0x1F8);
            if (temp_a0_3 & 1) {
                var_s1 = *(u8 **)((u8 *)var_a1 + 0xC);
                var_a2 = 0;
                *(s32 *)((u8 *)temp_a0_2 + 0x1F8) = (s32) (temp_a0_3 & ~1);
                goto block_12;
            }
        }
        if (temp_s2 != *(s32 *)((u8 *)temp_s0 + 0x3F8)) {
            var_a2 = 1;
            temp_v1 = temp_s0 + (temp_s2 * 0x10);
            var_s1 = *(u8 **)((u8 *)temp_v1 + 0x204);
            var_a1 = (int *)(temp_v1 + 0x1F8);
block_12:
            if (var_s1 != NULL) {
                if ((*(u16 *)((u8 *)var_s1 + 0xC) & 0x4000) && (*(s32 *)((u8 *)gBattle + 0x88F8) != 4)) {
                    func_001ABD30((struct Fighter *)(arg0 + 0x1360));
                    return;
                }
                if (*var_a1 & 2) {
                    if (var_a2 != 0) {
                        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                        func_001E5040(arg0);
                        *(s32 *)((u8 *)temp_s0 + 0x3FC) = temp_s2;
                    }
                    *(u8 **)((u8 *)arg0 + 0x17A0) = var_s1;
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3C23D70A;
                    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
                    if (*(u16 *)((u8 *)var_s1 + 0xC) & 0x4000) {
                        sp58 = arg0;
                        sp5C = *(s32 *)((u8 *)arg0 + 0x1354);
                        func_00237000(2, &sp58);
                        return;
                    }
                    temp_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 8);
                    if (temp_v1_2 & 4) {
                        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                        D_00468528(arg0);
                        func_002CBFF0(1, arg0);
                        return;
                    }
                    if (temp_v1_2 & 0x200) {
                        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                        D_00468518(arg0);
                        func_002CBFF0(1, arg0);
                        return;
                    }
                    if (temp_v1_2 & 0x2000) {
                        func_001E39C0(*(s32 *)((u8 *)arg0 + 0x1354));
                    }
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_0046849C[0](arg0);
                    func_002CBFF0(1, arg0);
                    return;
                }
                temp_a0_4 = *(s16 *)((u8 *)var_s1 + 4);
                temp_a1 = *(s16 *)((u8 *)var_s1 + 6);
                temp_v1_3 = temp_a0_4 + 1;
                if (var_a2 != 0) {
                    temp_f1 = *(f32 *)((u8 *)arg0 + 0xC58);
                    if (!(temp_f1 <= (f32) temp_a0_4) && (temp_f1 <= (f32) ((temp_v1_3 >= temp_a1) ? temp_v1_3 : temp_a1))) {
                        goto block_37;
                    }
                } else {
block_37:
                    if (var_a2 != 0) {
                        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                        func_001E5040(arg0);
                        *(s32 *)((u8 *)temp_s0 + 0x3FC) = temp_s2;
                    }
                    *(u8 **)((u8 *)arg0 + 0x17A0) = var_s1;
                    *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3C23D70A;
                    *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3DCCCCCD;
                    temp_v1_4 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 8);
                    if (temp_v1_4 & 0x200) {
                        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                        D_00468518(arg0);
                        func_002CBFF0(1, arg0);
                        return;
                    }
                    if (temp_v1_4 & 0x2000) {
                        func_001E39C0(*(s32 *)((u8 *)arg0 + 0x1354));
                    }
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
                    *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                    *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                    *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                    *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                    D_0046849C[0](arg0);
                    func_002CBFF0(1, arg0);
                }
            }
        }
    }
}
