/* Draft (not built): func_002E44A0 at 0x002E44A0, size 0x1FC, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x1FC
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E44A0.s */

// src/unk/unk_2E4030.c func_002E44A0 size diff=88/77
void func_002E4AC0(u8 *a0);
s32 amSofdec_Draw(s32);
s32 func_0013B110(s32);
s32 func_0013B500(s32);
s32 func_0013BC00(s32, s32, s32);
extern void func_0013B0B0(void *);
extern char D_003F0800[];
void func_002E44A0(u8 *arg0) {
    s32 sp30;
    f32 sp38;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a0;
    u8 temp_a0;
    u8 temp_v1;
    u8 temp_v1_2;

    if (*(u8 *)((u8 *)arg0 + 0xF4) != 2) {
        goto block_20;
    }
    temp_s1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x114)) + 0x30);
    var_a0 = 4;
    if (temp_s1 < 0) {
        goto block_20;
    }
    if (temp_s1 < 0) {
        goto block_4;
    }
    var_a0 = amSofdec_GetStat(temp_s1);
block_4:
    if (var_a0 != 2) {
        goto block_20;
    }
    temp_v0 = amSofdec_Draw(temp_s1);
    if (temp_v0 == 2) {
        goto block_11;
    }
    if (temp_v0 == 1) {
        goto block_8;
    }
    goto block_15;
block_8:
    temp_v1 = *(u8 *)((u8 *)arg0 + 0xCE);
    if ((s32) temp_v1 >= 2) {
        goto block_16;
    }
    *(u8 *)((u8 *)arg0 + 0xCE) = (u8) (temp_v1 + 1);
    return;
block_11:
    temp_a0 = *(u8 *)((u8 *)arg0 + 0xCE);
    if ((s32) temp_a0 <= 0) {
        goto block_20;
    }
    if (temp_a0 != 1) {
        goto block_16;
    }
    *(u8 *)((u8 *)arg0 + 0xCE) = 2U;
    return;
block_15:
    return;
block_16:
    temp_v1_2 = *(u8 *)((u8 *)arg0 + 0xCE);
    if ((s32) temp_v1_2 >= 5) {
        goto block_19;
    }
    *(u8 *)((u8 *)arg0 + 0xCE) = (u8) (temp_v1_2 + 1);
    return;
block_19:
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
    func_002E40D0();
    sp38 += 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($v0) */);
    func_002E4AC0(arg0);
    func_0013B110(1);
block_20:
    return;
}
