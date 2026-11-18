/* Draft (not built): func_0026E640 at 0x0026E640, size 0x138, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gF
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E640.s */

// src/menu/ess_main_2.c func_0026E640 cerr diff=-1/0
extern void *gEssEdit;
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022BC30(s32, f32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_002B4C80(s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void func_0026D6A0(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_0026E640(u8 *arg0) {
    s8 **temp_s2;
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
    temp_s2 = *(s32 *)((u8 *)gEssEdit + 0x14) + 0x30;
    if (((-1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x1C)) + 0xC), (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta)) == 0xFF) && (**temp_s2 >= 7) && (func_002B4C80(0) == 9)) {
        func_0026D6A0();
        *(s32 *)((u8 *)arg0 + 0x1C) = 0;
    }
}
