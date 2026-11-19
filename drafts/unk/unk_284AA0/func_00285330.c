/* Draft (not built): func_00285330 at 0x00285330, size 0x1FC, segment unk/unk_284AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x124, original 0x1FC
 * Original: asm/nonmatchings/unk/unk_284AA0/func_00285330.s */

// src/unk/unk_284AA0.c func_00285330 size diff=89/73
void func_00285950(Disp *o, s32 n);
s32 amSofdec_Draw(s32);
s32 amVram_Apply(s32, s32);
s32 func_0013B110(s32);
s32 func_0013B500(s32);
s32 func_0013BC00(s32, s32, s32);
extern void func_0013B0B0(void *);
extern char D_003F0800[];
void func_00285330(u8 *arg0) {
    s32 sp30;
    f32 sp38;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 temp_a0;
    s32 temp_v0;
    u8 temp_a0_2;
    u8 temp_v1;
    u8 *temp_s0;

    if (*(u8 *)((u8 *)arg0 + 0x262) != 2) {
        goto block_14;
    }
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x230)) + 0x30);
    if (temp_a0 < 0) {
        goto block_14;
    }
    temp_v0 = amSofdec_Draw(temp_a0);
    if (temp_v0 == 2) {
        goto block_8;
    }
    if (temp_v0 == 1) {
        goto block_5;
    }
    goto block_12;
block_5:
    temp_v1 = *(u8 *)((u8 *)arg0 + 0x263);
    if ((s32) temp_v1 >= 2) {
        goto block_13;
    }
    *(u8 *)((u8 *)arg0 + 0x263) = (u8) (temp_v1 + 1);
    return;
block_8:
    temp_a0_2 = *(u8 *)((u8 *)arg0 + 0x263);
    if ((s32) temp_a0_2 <= 0) {
        goto block_14;
    }
    if (temp_a0_2 != 1) {
        goto block_13;
    }
    *(u8 *)((u8 *)arg0 + 0x263) = 2U;
    return;
block_12:
    return;
block_13:
    amVram_Apply(2, 2);
    temp_s0 = arg0 + (*(u8 *)((u8 *)arg0 + 0x260) * 0xC) + 0x44;
    func_0013B0B0(D_003F0800);
    func_0013BC00(0, 0x43E60000, 0xC57A0000);
    func_0013B500(0x1600);
    func_0013BC00(0, 0, 0x44AA0000);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    temp_f1 = sp38 + 4000.0f;
    sp38 = temp_f1;
    temp_f1_2 = temp_f1 * 2.0f;
    sp38 = temp_f1_2;
    sp38 = temp_f1_2 - 3992.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
    func_00285950((Disp *)(arg0), (s32)(*(s16 *)((u8 *)temp_s0 + 8)));
    temp_f1_3 = sp38 + 3992.0f;
    sp38 = temp_f1_3;
    sp38 = temp_f1_3 - 3990.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
    func_00284F10(arg0);
    func_0013B110(1);
block_14:
    return;
}
