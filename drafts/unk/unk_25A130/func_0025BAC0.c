/* Draft (not built): func_0025BAC0 at 0x0025BAC0, size 0x274, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); n from 'void *' to 'int' mwccps2.exe Compiler: @ 1016: temp_v0 = func_0020D9F0((s32)((s32)((s32)((s32)((s32)(sp30))))));
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025BAC0.s */

// src/unk/unk_25A130.c func_0025BAC0 cerr diff=-1/0
s32 func_0020D9B0();
extern s32 D_0046AF30;
extern s8 D_004703F4;
extern void func_00146F30(void *);
void func_0025BAC0(u8 *arg0, u8 *arg1) {
    s32 sp30;
    u8 *sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    u8 *sp48;
    s16 sp4C;
    s16 sp4E;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 var_f1;
    s16 temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_a0;

    memset(&sp30, 0, 0x58);
    sp30 = func_0020D9B0();
    sp38 = arg0;
    sp48 = arg1;
    sp40 = (s32) *(s16 *)((u8 *)arg1 + 0x5A);
    sp50 = *(f32 *)((u8 *)arg1 + 0x68);
    temp_v1 = *(s16 *)((u8 *)arg1 + 0x5C);
    var_a0 = 0x20;
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        var_a0 = 0x10;
        break;
    case 2:                                         /* switch 1 */
        var_a0 = 8;
        break;
    }
    sp44 = var_a0;
    sp4C = *(s16 *)((u8 *)arg1 + 0x54);
    sp4E = *(s16 *)((u8 *)arg1 + 0x56);
    sp58 = *(f32 *)((u8 *)arg1 + 0x6C);
    sp60 = *(f32 *)((u8 *)arg1 + 0x74);
    sp64 = *(f32 *)((u8 *)arg1 + 0x88);
    sp68 = *(f32 *)((u8 *)arg1 + 0x8C);
    sp6C = *(f32 *)((u8 *)arg1 + 0x90);
    sp70 = *(f32 *)((u8 *)arg1 + 0x94);
    sp74 = *(f32 *)((u8 *)arg1 + 0x98);
    sp54 = *(f32 *)((u8 *)arg1 + 0x60);
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    sp5C = *(f32 *)((u8 *)arg1 + 0x64) * var_f1;
    sp78 = *(f32 *)((u8 *)arg1 + 0x78);
    sp7C = *(f32 *)((u8 *)arg1 + 0x7C);
    sp80 = *(f32 *)((u8 *)arg1 + 0x80);
    sp84 = *(f32 *)((u8 *)arg1 + 0x84);
    if (*(s16 *)((u8 *)arg1 + 0x5E) != 0) {
        sp3C |= 8;
    }
    if (!(*(f32 *)((u8 *)arg1 + 0x60) <= 1.0f)) {
        sp3C |= 2;
    }
    func_0025B8F0((struct B8F0Arg *)(&sp30));
    func_0025B4D0(&sp30);
    func_0025B340(&sp30);
    temp_v0 = func_0020D9F0((s32)((s32)((s32)((s32)((s32)((s32)(sp30)))))));
    temp_a0 = *(s16 *)((u8 *)sp48 + 0x58);
    switch (temp_a0) {                              /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        break;
    case 1:                                         /* switch 2 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        func_00146F30((void *)(temp_v0 + 0x20));
        break;
    case 2:                                         /* switch 2 */
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        func_00146F30((void *)(temp_v0 + 0x20));
        break;
    }
    *(&D_0046AF30 + (*(s16 *)((u8 *)arg1 + 0x52) * 4))(&sp30);
}
