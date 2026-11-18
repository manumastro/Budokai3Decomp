/* Draft (not built): func_002401A0 at 0x002401A0, size 0x1E8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 78 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x1E8
 * Original: asm/nonmatchings/unk/unk_23A890/func_002401A0.s */

// src/unk/unk_23A890.c func_002401A0 size diff=78/125
s32 func_0022D0E0(s32, s32);
void func_002401A0(void) {
    s32 *var_s1;
    s32 *var_s2;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_s6;
    u8 *var_s0;
    u8 *var_s5;

    var_s4 = 0;
    var_s2 = (s32 *)(&D_0058BF70);
    var_s1 = (s32 *)(&D_0058BF70);
    do {
        temp_a0 = *(s32 *)((u8 *)var_s2 + 0x210);
        temp_s6 = (u8 *)(var_s2 + 0x210);
        var_s5 = (u8 *)(var_s1 + 0x3A0);
        if (temp_a0 != 0) {
            func_0022D4B0(temp_a0, 1);
        }
        *(s32 *)((u8 *)var_s2 + 0x210) = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s6 + 4);
        if (temp_a0_2 != 0) {
            func_0022D4B0(temp_a0_2, 1);
        }
        *(s32 *)((u8 *)temp_s6 + 4) = 0;
        temp_a0_3 = *(s32 *)((u8 *)temp_s6 + 8);
        if (temp_a0_3 != 0) {
            func_0022D4B0(temp_a0_3, 1);
        }
        *(s32 *)((u8 *)temp_s6 + 8) = 0;
        temp_a0_4 = *(s32 *)((u8 *)temp_s6 + 0x10);
        if (temp_a0_4 != 0) {
            func_0022D4B0(temp_a0_4, 1);
        }
        *(s32 *)((u8 *)temp_s6 + 0x10) = 0;
        temp_a0_5 = *(s32 *)((u8 *)temp_s6 + 0x4C);
        if (temp_a0_5 != 0) {
            func_0022D4B0(temp_a0_5, 1);
        }
        *(s32 *)((u8 *)temp_s6 + 0x4C) = 0;
        temp_a0_6 = *(s32 *)((u8 *)temp_s6 + 0xC);
        if (temp_a0_6 != 0) {
            func_0022D0E0(temp_a0_6, 1);
        }
        *(s32 *)((u8 *)temp_s6 + 0xC) = 0;
        var_s3 = 0;
        var_s0 = var_s5;
loop_14:
        temp_a0_7 = *(s32 *)((u8 *)var_s0 + 0x30);
        if (temp_a0_7 != 0) {
            func_0022D0E0(temp_a0_7, 1);
        }
        var_s3 += 1;
        *(s32 *)((u8 *)var_s0 + 0x30) = 0;
        var_s0 += 4;
        if (var_s3 < 8) {
            goto loop_14;
        }
        var_s0_2 = 0;
loop_18:
        temp_a0_8 = *(s32 *)((u8 *)var_s5 + 0x50);
        if (temp_a0_8 != 0) {
            func_0022D4B0(temp_a0_8, 1);
        }
        var_s0_2 += 1;
        *(s32 *)((u8 *)var_s5 + 0x50) = 0;
        var_s5 += 4;
        if (var_s0_2 < 6) {
            goto loop_18;
        }
        temp_a0_9 = *(s32 *)((u8 *)var_s2 + 0x260);
        if (temp_a0_9 != 0) {
            func_0022D0E0(temp_a0_9, 1);
        }
        *(s32 *)((u8 *)var_s2 + 0x260) = 0;
        temp_a0_10 = *(s32 *)((u8 *)var_s2 + 0x26C);
        if (temp_a0_10 != 0) {
            func_0022D0E0(temp_a0_10, 1);
        }
        *(s32 *)((u8 *)var_s2 + 0x26C) = 0;
        temp_a0_11 = *(s32 *)((u8 *)var_s2 + 0x270);
        if (temp_a0_11 != 0) {
            func_0022D0E0(temp_a0_11, 1);
        }
        *(s32 *)((u8 *)var_s2 + 0x270) = 0;
        temp_a0_12 = *(u8 **)((u8 *)temp_s6 + 0x54);
        if (temp_a0_12 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_12)));
        }
        *(u8 **)((u8 *)temp_s6 + 0x54) = NULL;
        temp_a0_13 = *(u8 **)((u8 *)temp_s6 + 0x58);
        if (temp_a0_13 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_13)));
        }
        var_s4 += 1;
        *(u8 **)((u8 *)temp_s6 + 0x58) = NULL;
        var_s2 += 0x64;
        var_s1 += 0x70;
    } while (var_s4 < 4);
}
