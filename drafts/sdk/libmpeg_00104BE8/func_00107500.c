/* Draft (not built): func_00107500 at 0x00107500, size 0x2B4, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00107500.s */

s32 func_00107500(u8 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_t2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_t5;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_t0;
    u8 *var_v0;
    u8 *var_v1;

    temp_t1 = *(s32 *)((u8 *)arg0 + 0x184);
    temp_t2 = *(s32 *)((u8 *)arg0 + 0x160);
    var_t0 = NULL;
    var_t5 = 0;
    if (temp_t2 != 3) {
        goto block_19;
    }
    *(u8 **)((u8 *)arg0 + 0x1D0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1D4);
    *(u8 **)((u8 *)arg0 + 0x1E0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1E4);
    *(u8 **)((u8 *)arg0 + 0x1F0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1F4);
    if ((*(s32 *)((u8 *)arg0 + 0xB4) + *(s32 *)((u8 *)arg0 + 0xB8)) < (((temp_t1 ^ 3) == 0) ? 2 : 4)) {
        goto block_3;
    }
    *(s32 *)((u8 *)arg0 + 0xFC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1B8) = 0;
    *(s32 *)((u8 *)arg0 + 0x1B4) = 0;
block_3:
    if (*(s32 *)((u8 *)arg0 + 0xFC) != 0) {
        goto block_5;
    }
    if (*(s32 *)((u8 *)arg0 + 0x1B8) == 0) {
        goto block_7;
    }
block_5:
    if (*(s32 *)((u8 *)arg0 + 0x1B4) != 0) {
        goto block_7;
    }
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C8)) + 0x28) = 0;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1D8)) + 0x28) = 0;
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E8)) + 0x28) = 0;
block_7:
    *(s32 *)((u8 *)arg0 + 0xFC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1B8) = 0;
    if (*(s32 *)((u8 *)arg0 + 0x184) != 3) {
        goto block_13;
    }
    var_a0 = 1;
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C8)) + 0x28) != 1) {
        goto block_10;
    }
    var_v1 = *(u8 **)((u8 *)arg0 + 0x1CC);
    goto block_18;
block_10:
    if (*(s32 *)((u8 *)arg0 + 0x1B4) == 0) {
        goto block_32;
    }
    var_v1 = *(u8 **)((u8 *)arg0 + 0x1CC);
    goto block_18;
block_13:
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1D8)) + 0x28);
    if (temp_a0 != 1) {
        goto block_15;
    }
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E8)) + 0x28) == temp_a0) {
        goto block_16;
    }
block_15:
    if (*(s32 *)((u8 *)arg0 + 0x1B4) == 0) {
        goto block_32;
    }
block_16:
    var_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1DC)) + 0x28);
    if (var_a0 != 1) {
        goto block_32;
    }
    var_v1 = *(u8 **)((u8 *)arg0 + 0x1EC);
block_18:
    var_t5 = ((*(s32 *)((u8 *)var_v1 + 0x28) ^ 1) != 0) ? 0 : var_a0;
    goto block_31;
block_19:
    if (arg1 != 0) {
        goto block_21;
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x1CC);
    *(u8 **)((u8 *)arg0 + 0x1CC) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1C8);
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1DC);
    *(u8 **)((u8 *)arg0 + 0x1DC) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1D8);
    temp_a2 = *(u8 **)((u8 *)arg0 + 0x1E8);
    *(u8 **)((u8 *)arg0 + 0x1C8) = temp_a0_2;
    *(u8 **)((u8 *)arg0 + 0x1D8) = temp_v1;
    *(u8 **)((u8 *)arg0 + 0x1E8) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1EC);
    *(u8 **)((u8 *)arg0 + 0x1EC) = temp_a2;
block_21:
    temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x1DC);
    temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x1EC);
    *(u8 **)((u8 *)arg0 + 0x1D0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1CC);
    *(u8 **)((u8 *)arg0 + 0x1E0) = temp_a0_3;
    *(u8 **)((u8 *)arg0 + 0x1F0) = temp_v1_2;
    if (temp_t1 != 3) {
        goto block_24;
    }
    if (temp_t2 != 2) {
        goto block_30;
    }
    var_v0 = *(u8 **)((u8 *)arg0 + 0x1C8);
    var_a0_2 = 1;
    goto block_29;
block_24:
    if (temp_t2 != 2) {
        goto block_30;
    }
    if (arg1 == 0) {
        goto block_27;
    }
    if (*(s32 *)((u8 *)(((temp_t1 ^ 1) != 0) ? temp_a0_3 : temp_v1_2) + 0x28) == 1) {
        goto block_30;
    }
block_27:
    var_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1D8)) + 0x28);
    if (var_a0_2 != 1) {
        goto block_32;
    }
    var_v0 = *(u8 **)((u8 *)arg0 + 0x1E8);
block_29:
    if (*(s32 *)((u8 *)var_v0 + 0x28) != var_a0_2) {
        goto block_32;
    }
block_30:
    var_t5 = 1;
block_31:
block_32:
    if (*(s32 *)((u8 *)arg0 + 0x184) == 2) {
        goto block_42;
    }
    if (*(s32 *)((u8 *)arg0 + 0x184) >= 3) {
        goto block_38;
    }
    if (*(s32 *)((u8 *)arg0 + 0x184) != 1) {
        goto block_36;
    }
    var_t0 = *(u8 **)((u8 *)arg0 + 0x1E0);
    goto block_43;
block_36:
    goto block_43;
block_38:
    if (*(s32 *)((u8 *)arg0 + 0x184) != 3) {
        goto block_40;
    }
    var_t0 = *(u8 **)((u8 *)arg0 + 0x1D0);
    goto block_43;
block_40:
    goto block_43;
block_42:
    var_t0 = *(u8 **)((u8 *)arg0 + 0x1F0);
block_43:
    *(s32 *)((u8 *)var_t0 + 0x28) = 0;
    *(s64 *)((u8 *)var_t0 + 0x18) = (s64) *(s64 *)((u8 *)arg0 + 0x838);
    *(s32 *)((u8 *)var_t0 + 0x2C) = (s32) *(s32 *)((u8 *)arg0 + 0x160);
    *(s64 *)((u8 *)var_t0 + 0x20) = (s64) *(s64 *)((u8 *)arg0 + 0x840);
    *(s32 *)((u8 *)var_t0 + 0x30) = (s32) *(s32 *)((u8 *)arg0 + 0x184);
    *(s32 *)((u8 *)var_t0 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0x14C);
    *(s32 *)((u8 *)var_t0 + 0x38) = (s32) *(s32 *)((u8 *)arg0 + 0x198);
    *(s32 *)((u8 *)var_t0 + 0x3C) = (s32) *(s32 *)((u8 *)arg0 + 0x188);
    *(s32 *)((u8 *)var_t0 + 0x40) = (s32) *(s32 *)((u8 *)arg0 + 0x194);
    *(s32 *)((u8 *)var_t0 + 0x44) = (s32) *(s32 *)((u8 *)arg0 + 0x19C);
    *(s32 *)((u8 *)var_t0 + 0x48) = (s32) *(s32 *)((u8 *)arg0 + 0x1A0);
    *(s32 *)((u8 *)var_t0 + 0x4C) = (s32) *(s32 *)((u8 *)arg0 + 0x1A4);
    *(s32 *)((u8 *)var_t0 + 0x50) = (s32) *(s32 *)((u8 *)arg0 + 0x1A8);
    *(s32 *)((u8 *)var_t0 + 0x54) = (s32) *(s32 *)((u8 *)arg0 + 0x1AC);
    *(s32 *)((u8 *)var_t0 + 0x58) = (s32) *(s32 *)((u8 *)arg0 + 0x1B0);
    *(s32 *)((u8 *)var_t0 + 0x5C) = (s32) *(s32 *)((u8 *)arg0 + 0x158);
    *(s32 *)((u8 *)var_t0 + 0x60) = (s32) *(s32 *)((u8 *)arg0 + 0x15C);
    return var_t5;
}
