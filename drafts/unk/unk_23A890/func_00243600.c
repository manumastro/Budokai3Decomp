/* Draft (not built): func_00243600 at 0x00243600, size 0x3E0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 228 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00243600.s */

// src/unk/unk_23A890.c func_00243600 diff diff=228/248
void func_00243600(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a1_7;
    s32 var_s4;
    s32 var_v1_2;
    s8 temp_v1;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_14;
    u8 *temp_a0_15;
    u8 *temp_a0_16;
    u8 *temp_a0_17;
    u8 *temp_a0_18;
    u8 *temp_a0_19;
    u8 *temp_a0_20;
    u8 *temp_a0_21;
    u8 *temp_a0_22;
    u8 *temp_a0_23;
    u8 *temp_a0_24;
    u8 *temp_a0_25;
    u8 *temp_a0_26;
    u8 *temp_a0_27;
    u8 *temp_a0_28;
    u8 *temp_a0_29;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_v1;

    var_s4 = arg0;
    temp_s3 = D_0046FE44 + (arg0 << 7);
    temp_s2 = func_00240F40(0, 0);
    temp_s1 = func_00240F40(var_s4, 1);
    temp_s0 = func_00240F40(var_s4, 2);
    temp_v0 = func_00240F10(*(s16 *)((u8 *)temp_s3 + 0x36), *(s16 *)((u8 *)temp_s3 + 0x34));
    *(s8 *)((u8 *)temp_s3 + 0x39) = (s8) *(s8 *)((u8 *)temp_v0 + 0);
    *(s8 *)((u8 *)temp_s3 + 0x3A) = (s8) *(s8 *)((u8 *)temp_v0 + 1);
    *(s8 *)((u8 *)temp_s3 + 0x3B) = (s8) *(s8 *)((u8 *)temp_v0 + 2);
    *(s8 *)((u8 *)temp_s3 + 0x3C) = (s8) *(s8 *)((u8 *)temp_v0 + 3);
    *(s8 *)((u8 *)temp_s3 + 0x3D) = (s8) *(s8 *)((u8 *)temp_v0 + 4);
    if (*(s32 *)((u8 *)temp_s3 + 0x2C) & 0x80) {
        if (var_s4 == 0) {
            var_s4 = 1;
        } else {
            var_s4 = 0;
        }
    }
    temp_v1 = *(s8 *)((u8 *)temp_s3 + 0x39);
    switch (temp_v1) {
    case 2:
        temp_a0 = var_s4 * 0x1A4;
        temp_a1 = D_0046FE48 + temp_a0;
        temp_a1_2 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a1 + 0xC) * 4) + temp_a1) + 0x18);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a1_2 + *(s32 *)((u8 *)temp_a1_2 + 0xC));
        temp_a0_2 = D_0046FE48 + temp_a0;
        temp_a0_3 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_2 + 0xC) * 4) + temp_a0_2) + 0x1C);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_3 + *(s32 *)((u8 *)temp_a0_3 + 0xC));
        break;
    case 3:
        temp_a1_3 = var_s4 * 0x1A4;
        temp_a0_4 = D_0046FE48 + temp_a1_3;
        temp_a0_5 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_4 + 0xC) * 4) + temp_a0_4) + 0x20);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a0_5 + *(s32 *)((u8 *)temp_a0_5 + 0xC));
        temp_a0_6 = D_0046FE48 + temp_a1_3;
        temp_a0_7 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_6 + 0xC) * 4) + temp_a0_6) + 0x24);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_7 + *(s32 *)((u8 *)temp_a0_7 + 0xC));
        break;
    case 4:
        temp_a1_4 = var_s4 * 0x1A4;
        temp_a0_8 = D_0046FE48 + temp_a1_4;
        temp_a0_9 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_8 + 0xC) * 4) + temp_a0_8) + 0x28);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a0_9 + *(s32 *)((u8 *)temp_a0_9 + 0xC));
        temp_a0_10 = D_0046FE48 + temp_a1_4;
        temp_a0_11 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_10 + 0xC) * 4) + temp_a0_10) + 0x2C);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_11 + *(s32 *)((u8 *)temp_a0_11 + 0xC));
        break;
    case 5:
        temp_a1_5 = var_s4 * 0x1A4;
        temp_a0_12 = D_0046FE48 + temp_a1_5;
        temp_a0_13 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_12 + 0xC) * 4) + temp_a0_12) + 0x30);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a0_13 + *(s32 *)((u8 *)temp_a0_13 + 0xC));
        temp_a0_14 = D_0046FE48 + temp_a1_5;
        temp_a0_15 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_14 + 0xC) * 4) + temp_a0_14) + 0x34);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_15 + *(s32 *)((u8 *)temp_a0_15 + 0xC));
        temp_a0_16 = D_0046FE48 + temp_a1_5;
        temp_a0_17 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_16 + 0xC) * 4) + temp_a0_16) + 0x38);
        var_v1 = temp_a0_17 + *(s32 *)((u8 *)temp_a0_17 + 0xC);
block_15:
        *(u8 **)((u8 *)temp_s0 + 0x24) = var_v1;
        break;
    case 6:
        temp_a1_6 = var_s4 * 0x1A4;
        temp_a0_18 = D_0046FE48 + temp_a1_6;
        temp_a0_19 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_18 + 0xC) * 4) + temp_a0_18) + 0x40);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a0_19 + *(s32 *)((u8 *)temp_a0_19 + 0xC));
        temp_a0_20 = D_0046FE48 + temp_a1_6;
        temp_a0_21 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_20 + 0xC) * 4) + temp_a0_20) + 0x44);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_21 + *(s32 *)((u8 *)temp_a0_21 + 0xC));
        temp_a0_22 = D_0046FE48 + temp_a1_6;
        temp_a0_23 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_22 + 0xC) * 4) + temp_a0_22) + 0x38);
        var_v1 = temp_a0_23 + *(s32 *)((u8 *)temp_a0_23 + 0xC);
        goto block_15;
    case 7:
        temp_a1_7 = var_s4 * 0x1A4;
        temp_a0_24 = D_0046FE48 + temp_a1_7;
        temp_a0_25 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_24 + 0xC) * 4) + temp_a0_24) + 0x48);
        *(u8 **)((u8 *)temp_s2 + 0x24) = (u8 *) (temp_a0_25 + *(s32 *)((u8 *)temp_a0_25 + 0xC));
        temp_a0_26 = D_0046FE48 + temp_a1_7;
        temp_a0_27 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_26 + 0xC) * 4) + temp_a0_26) + 0x4C);
        *(u8 **)((u8 *)temp_s1 + 0x24) = (u8 *) (temp_a0_27 + *(s32 *)((u8 *)temp_a0_27 + 0xC));
        temp_a0_28 = D_0046FE48 + temp_a1_7;
        temp_a0_29 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_a0_28 + 0xC) * 4) + temp_a0_28) + 0x50);
        var_v1 = temp_a0_29 + *(s32 *)((u8 *)temp_a0_29 + 0xC);
        goto block_15;
    }
    *(s32 *)((u8 *)temp_s2 + 0x60) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x60) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x60) = 0;
    var_v1_2 = 0x40C00000;
    if (*(s16 *)((u8 *)temp_s3 + 0x36) == 0x28) {

    } else {
        var_v1_2 = 0x40800000;
    }
    *(s32 *)((u8 *)temp_s2 + 0x58) = var_v1_2;
}
