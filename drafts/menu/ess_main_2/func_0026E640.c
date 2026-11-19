/* Draft (not built): func_0026E640 at 0x0026E640, size 0x138, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x124, original 0x138
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E640.s */

// src/menu/ess_main_2.c func_0026E640 size diff=21/73
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
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s1;

    var_s1 = arg0;
    temp_a0 = *(u8 **)((u8 *)gEssEdit + 0x1C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401100);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    var_s0 = ((u8 *)gEssEdit) + 0x28;
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)var_s0 + 8) = (s32) (*(s32 *)((u8 *)var_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    var_s0 = (u8 *)-1;
    temp_v1 = *(u8 **)((u8 *)gEssEdit + 0x14);
    var_s2 = (int)(temp_v1 + 0x30);
    var_s0 = (u8 *) (-1 & func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x1C)) + 0xC), (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta));
    if ((var_s0 == (u8 *)0xFF) && (**(s8 **)((u8 *)temp_v1 + 0x30) >= 7) && (func_002B4C80(0) == 9)) {
        func_0026D6A0();
        *(s32 *)((u8 *)var_s1 + 0x1C) = 0;
    }
}

/* Similar function already in C: func_0026EC70 (src/menu/ess_main_2.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
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
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    if (func_002B4C80(0) == 4) {
        var_v1 = (int *)(&func_0026E950);
        if (&func_0026E950 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
#endif
