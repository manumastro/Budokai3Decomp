/* Draft (not built): func_001F4E70 at 0x001F4E70, size 0x1C8, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ar *)((s32)((char *)(temp_v0))))), 0x02000001, 0); @ 6395: temp_v0 = func_001A50F0(temp_s2, var_a1 + (D_0051CD20 << 7));
 * Original: asm/nonmatchings/battle/btb_draw/func_001F4E70.s */

// src/battle/btb_draw.c func_001F4E70 cerr diff=-1/0
s32 func_00209950(s32, s32 *, s32);
extern s128 D_0044B5B0;
extern s128 D_0044B5C0;
extern s32 D_00469818;
extern void func_00146F30(void *);
void func_001F4E70(s32 arg1, s32 arg2, s32 arg3) {
    s32 sp60;
    s32 sp70;
    f32 sp74;
    s128 sp80;
    s128 sp90;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s1;
    s8 *temp_s2;
    u8 *temp_v0_2;

    var_a1 = 8;
    temp_s2 = (s8 *)(*D_0051CD0C);
    if (arg3 & 4) {
        var_a1 = 0x108;
    }
    var_s1 = 0;
    temp_v0 = func_001A50F0(temp_s2, var_a1 + (D_0051CD20 << 7));
    if (temp_v0 != 0) {
        var_s1 = func_00209540((s32)((char *)((s32)((char *)((s32)((char *)(temp_v0)))))), 0x02000001, 0);
    }
    if (var_s1 != 0) {
        func_00209B50(var_s1, arg1, 0);
        sp90 = D_0044B5B0;
        sp80 = D_0044B5C0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        sp74 = 0.0f;
        func_00146F30(&sp70);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp70);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        func_00141C30(&sp60, &sp80, &sp70);
        func_00209950(var_s1, &sp60, 0);
        temp_v0_2 = (char *)func_001F5FD0(0x85000000, &D_00469818, 0, func_001F2150);
        temp_a3 = *(s32 *)((u8 *)temp_v0_2 + 0x20);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (temp_a3 & ~0x800);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x800);
        memset(temp_v0_2 + 0x30, 0, 0x80);
        *(s32 *)((u8 *)temp_v0_2 + 0x38) = var_s1;
        *(s32 *)((u8 *)(temp_v0_2 + 0x30) + 4) = (char *)func_001A50F0(temp_s2, 0x280);
        *(s32 *)((u8 *)temp_v0_2 + 0x30) = (s32) (arg3 & 2);
    }
}
