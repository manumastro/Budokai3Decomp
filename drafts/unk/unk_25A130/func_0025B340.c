/* Draft (not built): func_0025B340 at 0x0025B340, size 0x188, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x150, original 0x188
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025B340.s */

// src/unk/unk_25A130.c func_0025B340 size diff=40/84
s32 amMotion_FindBone(s32, s32 *);
s32 func_0013B110(s32);
s32 func_00141CF0(s32, s32 *, s32);
s32 func_00141E70(s32 *, s32);
s32 func_0020CCF0(s16, s32 *);
s32 func_0020E390(s32, s32 *, s32, s32);
s32 func_0020E530(s32, s32, s32);
extern void func_0013B0B0(void *);
extern void func_00146F30(void *);
extern void func_0013BA20(void *);
extern void func_0020D780(void *);
void func_0025B340(u8 *arg0) {
    s32 sp40;
    s32 sp50;
    s32 sp60;
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_a1;

    temp_a1 = *(u8 **)((u8 *)arg0 + 0x18);
    temp_a0 = *(s16 *)((u8 *)temp_a1 + 0x56);
    temp_s0 = (int)(func_0020D9F0(*(s32 *)((u8 *)arg0 + 0)));
    if (temp_a0 == 4) {
        goto block_11;
    }
    if (temp_a0 == 3) {
        goto block_10;
    }
    if (temp_a0 == 2) {
        goto block_8;
    }
    if (temp_a0 == 1) {
        goto block_6;
    }
    if (temp_a0 == 0) {
        goto block_12;
    }
    return;
block_6:
    func_0020E530(*(s32 *)((u8 *)arg0 + 0), temp_s0 + 0x30, 1);
    return;
block_8:
    func_0020D780(&sp60);
    func_00146F30(&sp60);
    func_0020E390(*(s32 *)((u8 *)arg0 + 0), &sp60, 1, 4);
    return;
block_10:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F30(&sp60);
    func_0020E390(*(s32 *)((u8 *)arg0 + 0), &sp60, 1, 4);
    return;
block_11:
    func_0020CCF0(*(s16 *)((u8 *)temp_a1 + 0x5A), &sp40);
    temp_s2 = amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0xB88)) + 4), &sp40);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    func_0013BA20(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 8)) + 0x17A4));
    func_00141E70(&sp50, 0);
    func_0013B110(1);
    func_00141CF0(temp_s0 + 0x50, &sp50, 0);
block_12:
    return;
}
