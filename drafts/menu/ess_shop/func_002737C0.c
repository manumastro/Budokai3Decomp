/* Draft (not built): func_002737C0 at 0x002737C0, size 0x32C, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 110 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x390, original 0x32C
 * Original: asm/nonmatchings/menu/ess_shop/func_002737C0.s */

// src/menu/ess_shop.c func_002737C0 size diff=110/228
extern s128 D_00453260;
extern s32 D_0058F680;
extern s32 D_0058F71C;
void func_002737C0(void) {
    s128 sp70;
    s128 *var_s4;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_t0;
    s8 var_s2;
    u8 temp_a1_2;
    u8 temp_t1;
    u8 *temp_a0;
    u8 *temp_a1_3;
    u8 *temp_s0;
    u8 *var_a0;
    u8 *var_s5;

    sp70 = D_00453260;
    memset(gEssShop + 0x74, 0, 0x140);
    temp_s0 = *(u8 **)((u8 *)gEssShop + 0x54);
    var_s1 = 1;
    if (*(u8 *)((u8 *)temp_s0 + 0x1FC) == 0) {
        goto block_2;
    }
    var_s1 = 1;
block_2:
    if (*(u8 *)((u8 *)temp_s0 + 0x1FD) == 0) {
        goto block_4;
    }
    var_s1 = 1 | 2;
block_4:
    if (*(u8 *)((u8 *)temp_s0 + 0x1FE) == 0) {
        goto block_6;
    }
    var_s1 |= 4;
block_6:
    if (*(u8 *)((u8 *)temp_s0 + 0x1FF) == 0) {
        goto block_8;
    }
    var_s1 |= 8;
block_8:
    *(s32 *)((u8 *)gEssShop + 0x58) = var_s1;
    var_s4 = &sp70;
    var_s3 = 0;
    var_s5 = (u8 *)(gEssShop + 0x74);
loop_9:
    var_s2 = *(s8 *)((u8 *)var_s4 + 0);
    if (var_s2 <= 0) {
        goto block_15;
    }
loop_11:
    temp_a1 = func_00273330(*(s8 *)((u8 *)var_s4 + 1), var_s1, *(s8 *)((u8 *)var_s4 + 2));
    if (*(s8 *)((u8 *)var_s4 + 2) != 0) {
        goto block_13;
    }
    *(s32 *)((u8 *)var_s5 + 0) = temp_a1;
    goto block_14;
block_13:
    *(s32 *)((u8 *)var_s5 + 0) = 0x242;
block_14:
    *(s32 *)((u8 *)var_s5 + 0x10) = 0;
    func_002730B0(var_s5, temp_a1);
    var_s2 -= 1;
    var_s5 += 0x14;
    if (var_s2 > 0) {
        goto loop_11;
    }
block_15:
    var_s3 += 1;
    var_s4 += 4;
    if (var_s3 < 4) {
        goto loop_9;
    }
    temp_v0 = func_00273210();
    if (temp_v0 <= 0) {
        goto block_18;
    }
    *(s32 *)((u8 *)var_s5 + 0x10) = 0;
    *(s32 *)((u8 *)var_s5 + 0) = temp_v0;
    func_002730B0(var_s5, temp_v0);
block_18:
    func_00272E20();
    temp_t1 = *(u8 *)((u8 *)temp_s0 + 0x1FD);
    temp_a3 = *(s32 *)((u8 *)gEssShop + 0x6C);
    temp_a2 = *(&D_0058F71C + (*(s32 *)((u8 *)gEssShop + 0x50) * 0xD680));
    temp_a0 = (u8 *)(gEssShop + (temp_a3 * 0x14));
    var_a0 = temp_a0 + 0x74;
    if (temp_t1 != 0) {
        goto block_21;
    }
    if (temp_a2 < 0x96) {
        goto block_21;
    }
    *(s32 *)((u8 *)temp_a0 + 0x74) = 0x1FD;
    *(s32 *)((u8 *)var_a0 + 0x10) = 0;
    func_002730B0(var_a0, 0x1FD, temp_a2, temp_a3);
    var_a0 = (u8 *)(M2C_ERROR(/* Read from unset register $a0 */) + 0x14);
    *(s32 *)((u8 *)gEssShop + 0x6C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x6C) + 1);
    goto block_30;
block_21:
    temp_a1_2 = *(u8 *)((u8 *)temp_s0 + 0x1FE);
    if (temp_a1_2 != 0) {
        goto block_26;
    }
    if (temp_t1 == 0) {
        goto block_26;
    }
    if (temp_a2 < 0x3E8) {
        goto block_26;
    }
    *(s32 *)((u8 *)temp_a0 + 0x74) = 0x1FE;
    *(s32 *)((u8 *)var_a0 + 0x10) = 0;
    func_002730B0(var_a0, 0x1FE, temp_a2, temp_a3);
    var_a0 = (u8 *)(M2C_ERROR(/* Read from unset register $a0 */) + 0x14);
    *(s32 *)((u8 *)gEssShop + 0x6C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x6C) + 1);
    goto block_30;
block_26:
    if (*(u8 *)((u8 *)temp_s0 + 0x1FF) != 0) {
        goto block_30;
    }
    if (temp_a1_2 == 0) {
        goto block_30;
    }
    if (temp_a2 < 0x9C4) {
        goto block_30;
    }
    *(s32 *)((u8 *)temp_a0 + 0x74) = 0x1FF;
    *(s32 *)((u8 *)var_a0 + 0x10) = 0;
    func_002730B0(var_a0, 0x1FF, temp_a2, temp_a3);
    var_a0 = (u8 *)(M2C_ERROR(/* Read from unset register $a0 */) + 0x14);
    *(s32 *)((u8 *)gEssShop + 0x6C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x6C) + 1);
block_30:
    var_t0 = 0;
    var_a1 = 0x1C9;
loop_31:
    if (*(temp_s0 + var_a1) == 0) {
        goto block_33;
    }
    var_t0 += 1;
block_33:
    var_a1 += 1;
    if (var_a1 < 0x1EF) {
        goto loop_31;
    }
    temp_a3_2 = *(s32 *)((u8 *)gEssShop + 0x50);
    temp_a2_2 = temp_a3_2 * 0xD680;
    temp_a1_3 = (u8 *)(&D_0058F680 + temp_a2_2);
    if (*(u8 *)((u8 *)temp_s0 + 0x201) != 0) {
        goto block_38;
    }
    if (*(s8 *)((u8 *)temp_a1_3 + 0xA1) == 0) {
        goto block_38;
    }
    if (var_t0 < 0x10) {
        goto block_38;
    }
    *(s32 *)((u8 *)var_a0 + 0) = 0x201;
    *(s32 *)((u8 *)var_a0 + 0x10) = 0;
    func_002730B0(var_a0, 0x201, temp_a2_2, temp_a3_2);
    *(s32 *)((u8 *)gEssShop + 0x6C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x6C) + 1);
    return;
block_38:
    if (*(u8 *)((u8 *)temp_s0 + 0x202) != 0) {
        goto block_42;
    }
    if (*(s8 *)((u8 *)(temp_a1_3 + 0xA1) + 1) == 0) {
        goto block_42;
    }
    if (var_t0 < 0x20) {
        goto block_42;
    }
    *(s32 *)((u8 *)var_a0 + 0) = 0x202;
    *(s32 *)((u8 *)var_a0 + 0x10) = 0;
    func_002730B0(var_a0, 0x202, temp_a2_2, temp_a3_2);
    *(s32 *)((u8 *)gEssShop + 0x6C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x6C) + 1);
block_42:
    return;
}
