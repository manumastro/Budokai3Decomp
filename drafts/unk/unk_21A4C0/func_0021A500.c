/* Draft (not built): func_0021A500 at 0x0021A500, size 0x118, segment unk/unk_21A4C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE8, original 0x118
 * Original: asm/nonmatchings/unk/unk_21A4C0/func_0021A500.s */

// src/unk/unk_21A4C0.c func_0021A500 size diff=35/58
s32 func_0013B110(s32);
s32 func_00209D70(s32 *);
void *func_00243DC0(s32);
extern s32 D_00470238;
extern void *gBattle;
extern void func_0013B0B0(void *);
extern void func_00209C50(void);
extern void func_0013B060(void *);
extern void amModel_SetCurrent();
extern void func_00208D70(void *);
void func_0021A500(u8 *arg0) {
    s32 sp40;
    s16 temp_s0;
    s32 temp_a3;
    u8 *temp_a2;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_a0;

    temp_s0 = *(s16 *)((u8 *)arg0 + 0x54);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    D_00470238 = 0;
    temp_v0 = func_00243DC0(*(s32 *)((u8 *)temp_s2 + 0x1350));
    temp_a3 = *(s32 *)((u8 *)temp_v0 + 8) + temp_s0;
    temp_a2 = (temp_a3 * 4) + temp_v0;
    amModel_SetCurrent(*(s32 *)((u8 *)temp_a2 + 0x14), (*(s32 *)((u8 *)temp_s2 + 0x1350) * 0x600) + 0x03004000 + (temp_s0 * 0x30), temp_a2, temp_a3);
    var_a0 = ((u8 *)gBattle) + 0x60;
    if (gBattle != NULL) {

    } else {
        var_a0 = NULL;
    }
    func_0013B0B0(var_a0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00209D70(&sp40);
    if (*(u8 **)((u8 *)arg0 + 0x40) != NULL) {
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
        M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
        M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
        M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
        func_00208D70(*(u8 **)((u8 *)arg0 + 0x40));
    }
    func_0013B110(1);
    func_00209C50();
}
