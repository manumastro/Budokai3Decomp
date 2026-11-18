/* Draft (not built): func_00286FD0 at 0x00286FD0, size 0x88, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

s32 amSofdec_Create(s32 *);                         /* extern */
extern s32 D_0046FD5C;
extern M2C_UNK func_00286E70;

void func_00286FD0(void *arg0) {
    s16 sp40;
    s32 sp3C;
    s32 sp38;
    s32 sp34;
    s32 sp30;
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    M2C_UNK *var_v1;

    sp24 = 1;
    sp20 = 0;
    sp28 = 0x1C2000;
    sp2C = 0x400;
    sp30 = 0x200;
    sp34 = 3;
    sp38 = -1;
    sp40 = 0x60;
    sp3C = D_0046FD5C;
    var_v1 = &func_00286E70;
    M2C_FIELD(arg0, s32 *, 0x30) = amSofdec_Create(&sp20);
    if (&func_00286E70 == NULL) {
        var_v1 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
}
