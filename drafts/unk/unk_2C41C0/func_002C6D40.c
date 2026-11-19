/* Draft (not built): func_002C6D40 at 0x002C6D40, size 0x1A4, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x154, original 0x1A4
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C6D40.s */

// src/unk/unk_2C41C0.c func_002C6D40 size diff=63/85
s32 func_00209540(s32, s32, s32);
s32 func_00209950(s32, s32 *, s32);
s32 func_0020AD30(s32, s32, s32);
s32 func_0020D500(s32 *, s32 *, void *, s32);
void *func_00215320(s64, s32);
extern s32 D_00456400;
extern s32 D_00456410;
extern s32 func_00212480;
extern s32 func_00212650;
extern void func_00141C30(void *, void *, void *);
extern void func_00146F30(void *);
void func_002C6D40(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp90;
    s32 spA0;
    s32 var_a1;
    s32 temp_s2;
    s32 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_v0 = func_00215320((s64) ((s64) temp_s2 << 0x30) >> 0x30, 2);
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = &func_00212480;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_00212650;
        memset(temp_s0, 0, 0x50);
        temp_v0_2 = (int)(func_0020B020(temp_s2, 1, arg2));
        if (temp_v0_2 != 0) {
            if (temp_s2 != 0) {
                var_a1 = 0x04000008;
            } else {
                var_a1 = 0x04000004;
            }
            *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(temp_v0_2, var_a1, 0);
        }
        if (*(s32 *)((u8 *)temp_v0 + 0x10) != 0) {
            func_0020D500(&spA0, &D_00456400, arg0, 0xF);
            func_0020D500(&sp90, &D_00456410, arg0, 0xF);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
            func_00146F30(&spA0);
            sp74 = 0x3F800000;
            sp7C = 0x3F800000;
            sp70 = 0;
            sp78 = 0;
            func_00141C30(&sp80, &sp70, &spA0);
            func_00209950(*(s32 *)((u8 *)temp_v0 + 0x10), &sp80, 0);
            *(s32 *)((u8 *)temp_s0 + 0x20) = (int)(func_0020B020(temp_s2, 1, arg1));
            *(s32 *)((u8 *)temp_s0 + 0x28) = func_0020AD30(temp_s2, 1, arg1);
        }
    }
}
