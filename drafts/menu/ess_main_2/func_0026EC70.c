/* Draft (not built): func_0026EC70 at 0x0026EC70, size 0xE4, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gF
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026EC70.s */

// src/menu/ess_main_2.c func_0026EC70 cerr diff=-1/0
extern void *gEssEdit;
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_002B4C80(s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0026E950(void);
void func_0026EC70(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_a0 = *(u8 **)((u8 *)gEssEdit + 0x1C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401100);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    temp_s0 = ((u8 *)gEssEdit) + 0x28;
    func_0022C1D0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    if (func_002B4C80(0) == 4) {
        var_v1 = (s32 *)(&func_0026E950);
        if (&func_0026E950 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
