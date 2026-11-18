/* Draft (not built): func_002A17D0 at 0x002A17D0, size 0xCC, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); A1510(...)' redeclared was declared as: 'int (...)' now declared as: 'void (int)' @ 146: extern void func_002A1510(s32);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A17D0.s */

// src/story/evt_scrp.c func_002A17D0 cerr diff=-1/0
extern f32 func_002B06A0(void);
extern s32 D_00511448;
extern void Zenie_SetValue(s32, s32);
extern s8 D_004E6560[];
extern void func_002A1700(void);
void func_002A17D0(u8 *arg0) {
    s32 *var_v0;
    s32 var_a1;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gEvtWork);
    *(f32 *)((u8 *)temp_s0 + 0x5C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x5C) + func_002B06A0());
    func_002A1510(0);
    Zenie_Update();
    Zenie_Draw();
    if (func_002A1020(3) == 0) {
        *(f32 *)((u8 *)temp_s0 + 0x5C) = 10.0f;
        var_v0 = (s32 *)(&func_002A1700);
        *(s32 *)((u8 *)temp_s0 + 0x60) = 0x41200000;
        if (&func_002A1700 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        var_a1 = D_00511448 + *(s32 *)((u8 *)temp_s0 + 0xF4);
        if (var_a1 >= 0xF1B31) {
            var_a1 = 0xF1B30;
        }
        Zenie_SetValue(*(s32 *)((u8 *)D_004E6560 + 0x2AEE8), var_a1);
        Zenie_SetStep(0xA);
    }
}
