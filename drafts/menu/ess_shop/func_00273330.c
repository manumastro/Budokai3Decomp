/* Draft (not built): func_00273330 at 0x00273330, size 0x298, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B0, original 0x298
 * Original: asm/nonmatchings/menu/ess_shop/func_00273330.s */

// src/menu/ess_shop.c func_00273330 size diff=84/172
s32 *amHeap_Alloc(s32, s32, s32 *, s32);
u32 func_0012EAE0(s32, u8 *, s64, s32);
extern s32 D_0046B520;
extern s32 D_0058F710;
s32 func_00273330(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s6;
    s32 *temp_v0;
    s32 *var_a0_2;
    s32 *var_t0;
    s32 *var_t1;
    s32 temp_a3_2;
    s32 var_s1;
    s32 var_t3;
    s32 var_t6;
    s64 temp_a2;
    u32 var_s1_2;
    u32 var_s2;
    u32 var_v1;
    u8 *var_a0;
    u8 *var_a1;
    u8 temp_a3;
    u8 temp_t2;
    u8 *var_t4;

    temp_s6 = amHeap_Alloc(0x94C, 0, &D_0046B520, 0x7E6);
    temp_v0 = amHeap_Alloc(0x94C, 0, &D_0046B520, 0x7E7);
    var_a1 = D_004E0660;
    var_t1 = temp_s6;
    var_t0 = temp_v0;
    var_s2 = 0;
    var_s1_2 = 0;
    var_t3 = 0;
    var_a0 = *(u8 **)((u8 *)gEssShop + 0x54);
    temp_a2 = *(&D_0058F710 + (*(s32 *)((u8 *)gEssShop + 0x50) * 0xD680));
loop_1:
    *var_t1 = 0;
    *var_t0 = 0;
    temp_a3 = *(u8 *)((u8 *)var_a1 + 0xC);
    if ((s32) temp_a3 <= 0) {
        goto block_19;
    }
    temp_t2 = *(u8 *)((u8 *)var_a1 + 0xA);
    if (arg2 != 0) {
        goto block_4;
    }
    if (!((1 << ((s32) temp_t2 >> 4)) & arg1)) {
        goto block_19;
    }
block_4:
    if (*(u8 *)((u8 *)var_a1 + 0xD) == 0) {
        goto block_19;
    }
    if (!(*(s64 *)((u8 *)var_a1 + 0) & temp_a2)) {
        goto block_19;
    }
    if (!((1 << (temp_t2 & 3)) & arg0)) {
        goto block_19;
    }
    if (arg2 != 0) {
        goto block_16;
    }
    var_t6 = 0;
    var_t4 = (unsigned char *)(gEssShop + 0x74);
loop_9:
    if (*(s32 *)((u8 *)var_t4 + 0) == 0x242) {
        goto block_11;
    }
    if (*(s32 *)((u8 *)var_t4 + 4) == var_t3) {
        goto block_12;
    }
block_11:
    var_t6 += 1;
    var_t4 += 0x14;
    if (var_t6 < 0x10) {
        goto loop_9;
    }
block_12:
    if (var_t6 != 0x10) {
        goto block_19;
    }
    *var_t0 = (s32) temp_a3;
    var_s1_2 += temp_a3;
    if ((s32) *var_a0 >= (s32) *(u8 *)((u8 *)var_a1 + 0xD)) {
        goto block_19;
    }
    *var_t1 = (s32) temp_a3;
    goto block_18;
block_16:
    *var_t0 = (s32) temp_a3;
    var_s1_2 += temp_a3;
    if ((s32) *var_a0 >= (s32) *(u8 *)((u8 *)var_a1 + 0xD)) {
        goto block_19;
    }
    *var_t1 = (s32) temp_a3;
block_18:
    var_s2 += temp_a3;
block_19:
    var_t3 += 1;
    temp_a3_2 = var_t3 < 0x253;
    var_a1 += 0x28;
    var_a0 += 1;
    var_t1 += 4;
    var_t0 += 4;
    if (temp_a3_2 != 0) {
        goto loop_1;
    }
    if (var_s2 == 0) {
        goto block_23;
    }
    var_v1 = func_0012EAE0(0x20, var_a1, temp_a2, temp_a3_2) % var_s2;
    var_a0_2 = temp_s6;
    goto block_26;
block_23:
    if (var_s1_2 == 0) {
        goto block_25;
    }
    var_v1 = func_0012EAE0(0x20, var_a1, temp_a2, temp_a3_2) % var_s1_2;
    var_a0_2 = temp_v0;
    goto block_26;
block_25:
    amHeap_Free(temp_v0);
    amHeap_Free(temp_s6);
    return 0;
block_26:
    var_s1 = -1;
    if ((s32) var_v1 < 0) {
        goto block_29;
    }
loop_27:
    var_s1 += 1;
    var_v1 -= *var_a0_2;
    var_a0_2 += 4;
    if ((s32) var_v1 >= 0) {
        goto loop_27;
    }
block_29:
    amHeap_Free(temp_v0);
    amHeap_Free(temp_s6);
    return var_s1;
}
