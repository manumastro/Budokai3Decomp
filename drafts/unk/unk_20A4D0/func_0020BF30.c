/* Draft (not built): func_0020BF30 at 0x0020BF30, size 0x6C4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); es not match 'func_0020CCF0(short, void *)' @ 884: func_0020CCF0(*(s16 *)((u8 *)arg0 + 0x7C), &sp88, D_0044BA60, &sp70);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020BF30.s */

// src/unk/unk_20A4D0.c func_0020BF30 cerr diff=-1/0
s32 func_00141E70(void *, s32);
extern s128 D_0044BA60;
extern s128 D_0044BA70;
extern void func_0013BA20(void *);
void func_0020BF30(u8 *arg0) {
    s32 sp30;
    s32 sp40;
    s32 sp50;
    s128 sp60;
    s128 sp70;
    s32 sp88;
    s16 temp_v1;
    s32 temp_s1;

    sp70 = D_0044BA60;
    sp60 = D_0044BA70;
    temp_v1 = *(s16 *)((u8 *)arg0 + 0x56);
    switch (temp_v1) {
    case 1:
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        return;
    case 2:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 5:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 3:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 6:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 4:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 7:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 8:
        func_0020CCF0(*(s16 *)((u8 *)arg0 + 0x7C), &sp88, D_0044BA60, &sp70);
        temp_s1 = amMotion_FindBone(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0xB88)) + 4), &sp88);
        func_0013B0B0(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
        func_0013BA20(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x17A4));
        func_00141E70(arg0 + 0x40, 0);
        func_0013B110(1);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        return;
    case 9:
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        return;
    case 10:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 11:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 12:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp70, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 2;
        return;
    case 13:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 14:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 15:
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        func_00146F30(&sp50);
        func_00141C30(arg0 + 0x40, &sp60, &sp50);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x10);
        *(s32 *)((u8 *)arg0 + 0x8C) = 4;
        return;
    case 16:
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x80);
        return;
    case 17:
        *(s32 *)((u8 *)arg0 + 0x74) = (s32) (*(s32 *)((u8 *)arg0 + 0x74) | 0x80);
        *(s16 *)((u8 *)arg0 + 0xAE) = 1;
        /* fallthrough */
    default:
        return;
    }
}
