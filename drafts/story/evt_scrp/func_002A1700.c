/* Draft (not built): func_002A1700 at 0x002A1700, size 0xC4, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); A1510(...)' redeclared was declared as: 'int (...)' now declared as: 'void (int)' @ 145: extern void func_002A1510(s32);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A1700.s */

// src/story/evt_scrp.c func_002A1700 cerr diff=-1/0
extern f32 func_002B06A0(void);
void func_002A1700(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    f32 sp3C;
    s32 *var_v1;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gEvtWork);
    sp30 = 0x3F800000;
    sp34 = 0x3F800000;
    sp38 = 0x3F800000;
    sp3C = 1.0f;
    sp3C = *(f32 *)((u8 *)temp_s0 + 0x5C) / *(f32 *)((u8 *)temp_s0 + 0x60);
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x5C) - func_002B06A0());
    func_002A1510(&sp30);
    Zenie_Update();
    Zenie_Draw();
    if (!(*(f32 *)((u8 *)temp_s0 + 0x5C) < 0.0f)) {
        if (func_002A1020(4) == 0) {
            goto block_3;
        }
    } else {
block_3:
        var_v1 = (int *)(&EvtZenie_TaskMain);
        if (&EvtZenie_TaskMain == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
