/* Draft (not built): func_001C7D90 at 0x001C7D90, size 0x288, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B8, original 0x288
 * Original: asm/nonmatchings/battle/btl_main/func_001C7D90.s */

// src/battle/btl_main.c func_001C7D90 size diff=65/174
s32 BtlSlots_Clear(s32, s32);
s32 BtlSlots_Set(s32, s32, s32);
s32 amMotion_BindAnim(void *, s32, void *);
extern void * func_001F9A10(void);
void func_001C7D90(u8 *arg0, s32 arg1, u8 *arg2) {
    s32 temp_s6_2;
    s32 temp_v1_5;
    s32 var_s3;
    s32 var_s4;
    u8 **temp_v1;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_4;
    u8 *temp_a2_5;
    u8 *temp_a2_6;
    u8 *temp_s2;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;

    temp_s5 = (u8 *)(gBattle);
    if (arg1 < 0) {
        goto block_2;
    }
    var_s4 = arg1;
    var_s3 = arg1 + 1;
    goto block_3;
block_2:
    var_s4 = 0;
    var_s3 = 8;
block_3:
    if (arg2 == NULL) {
        goto block_34;
    }
    if (var_s4 >= var_s3) {
        goto block_33;
    }
    var_s1 = arg0 + (var_s4 * 4);
loop_6:
    temp_v1 = *(u8 ***)((u8 *)var_s1 + 0x1DB8);
    if (temp_v1 == NULL) {
        goto block_19;
    }
    temp_v1_2 = *temp_v1;
    if (temp_v1_2 == NULL) {
        goto block_19;
    }
    temp_s2 = *(u8 **)((u8 *)temp_v1_2 + 0x4C);
    if (temp_s2 == NULL) {
        goto block_19;
    }
    *(s32 *)((u8 *)temp_s2 + 0x474) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x48C) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x490) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x494) = 0;
    *(s32 *)((u8 *)temp_s2 + 0x498) = 0;
    temp_v0 = func_001F9A10();
    if (temp_v0 == NULL) {
        goto block_11;
    }
    amMotion_BindAnim(temp_s2, 2, temp_v0);
block_11:
    temp_a2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg2 + 0xB88)) + 0x478);
    if (temp_a2 == NULL) {
        goto block_13;
    }
    amMotion_BindAnim(temp_s2, 8, temp_a2);
block_13:
    temp_a2_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg2 + 0xB88)) + 0x47C);
    if (temp_a2_2 == NULL) {
        goto block_15;
    }
    amMotion_BindAnim(temp_s2, 9, temp_a2_2);
block_15:
    temp_a2_3 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg2 + 0xB88)) + 0x480);
    if (temp_a2_3 == NULL) {
        goto block_17;
    }
    amMotion_BindAnim(temp_s2, 0xA, temp_a2_3);
block_17:
    temp_a2_4 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg2 + 0xB88)) + 0x484);
    if (temp_a2_4 == NULL) {
        goto block_19;
    }
    amMotion_BindAnim(temp_s2, 0xB, temp_a2_4);
block_19:
    var_s4 += 1;
    var_s1 += 4;
    if (var_s4 < var_s3) {
        goto loop_6;
    }
    goto block_33;
block_21:
    temp_v1_3 = *(u8 **)((u8 *)var_s2 + 0x1DB8);
    if (temp_v1_3 == NULL) {
        goto block_30;
    }
    temp_v1_4 = *(u8 **)((u8 *)temp_v1_3 + 0);
    if (temp_v1_4 == NULL) {
        goto block_30;
    }
    temp_s6 = *(u8 **)((u8 *)temp_v1_4 + 0x4C);
    if (temp_s6 == NULL) {
        goto block_30;
    }
    *(s32 *)((u8 *)temp_s6 + 0x46C) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x470) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x478) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x47C) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x480) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x484) = 0;
    *(s32 *)((u8 *)temp_s6 + 0x488) = 0;
    amMotion_BindAnim(temp_s6, 0, *(u8 **)((u8 *)temp_s5 + 0x814));
    amMotion_BindAnim(temp_s6, 1, *(u8 **)((u8 *)temp_s5 + 0x818));
    amMotion_BindAnim(temp_s6, 3, *(u8 **)((u8 *)arg0 + 0x1E00));
    amMotion_BindAnim(temp_s6, 4, *(u8 **)((u8 *)arg0 + 0x1E04));
    amMotion_BindAnim(temp_s6, 7, *(u8 **)((u8 *)arg0 + 0x1E08));
    temp_a2_5 = *(u8 **)((u8 *)var_s0 + 0x1E00);
    if (temp_a2_5 == NULL) {
        goto block_26;
    }
    amMotion_BindAnim(temp_s6, 5, temp_a2_5);
block_26:
    temp_a2_6 = *(u8 **)((u8 *)var_s0 + 0x1E04);
    if (temp_a2_6 == NULL) {
        goto block_28;
    }
    amMotion_BindAnim(temp_s6, 6, temp_a2_6);
block_28:
    temp_v1_5 = *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x1DB8)) + 4);
    temp_s6_2 = temp_v1_5 + 0x20;
    if (temp_v1_5 == 0) {
        goto block_30;
    }
    BtlSlots_Clear(temp_s6_2, 0);
    BtlSlots_Set(temp_s6_2, 0, *(s32 *)((u8 *)arg0 + 0x1EF0));
block_30:
    var_s2 += 4;
    var_s0 += 0x1C;
    var_s4 += 1;
loop_31:
    if (var_s4 < var_s3) {
        goto block_21;
    }
block_33:
    return;
block_34:
    var_s2 = arg0 + (var_s4 * 4);
    var_s0 = arg0 + (var_s4 * 0x1C);
    goto loop_31;
}
