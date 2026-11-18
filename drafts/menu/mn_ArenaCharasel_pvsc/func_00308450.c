/* Draft (not built): func_00308450 at 0x00308450, size 0xA4, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'sp34' @ 250: *(f32 *)((u8 *)temp_s1 + 0x38) = sp34;
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00308450.s */

// src/menu/mn_ArenaCharasel_pvsc.c func_00308450 cerr diff=-1/0
s32 func_00229800(s32, f32 *, s32, s32);
void func_00308450(u8 *arg0) {
    f32 sp30;
    f32 temp_f0;
    void (*var_v1)();
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    func_003077E0(temp_s1);
    temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x40) - gFrameDelta;
    *(f32 *)((u8 *)temp_s1 + 0x40) = temp_f0;
    if (temp_f0 <= 0.0f) {
        func_00229800(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0)) + 0x1C)) + 0x24), &sp30, -1, 0);
        *(f32 *)((u8 *)temp_s1 + 0x34) = sp30;
        *(f32 *)((u8 *)temp_s1 + 0x38) = sp34;
        *(s32 *)((u8 *)temp_s1 + 0x3C) = 0x42700000;
        func_00307AF0(temp_s1);
        var_v1 = func_003081F0;
        if (func_003081F0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
