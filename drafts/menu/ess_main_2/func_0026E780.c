/* Draft (not built): func_0026E780 at 0x0026E780, size 0x1CC, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 44 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E780.s */

// src/menu/ess_main_2.c func_0026E780 diff diff=44/115
extern void *gEssEdit;
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0027DA00(s32, s32 *, s16 *, s32, s32, s32);
s32 func_002B4C80(s32);
s32 func_002B4CC0(s32, s32 *);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_0058F680;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0026E950(void);
void func_0026E780(u8 *arg0) {
    s32 sp30;
    s32 *var_v1;
    s16 *temp_a2;
    s16 *var_a0;
    s32 *var_a1;
    s32 temp_a3;
    s32 var_v0;
    u8 **temp_s0_2;
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
    temp_s0_2 = (unsigned char **)(*(s32 *)((u8 *)gEssEdit + 0x14) + 0x30);
    if (func_002B4C80(0) == 4) {
        func_002B4CC0(0, &sp30);
        var_v0 = 0;
        temp_a3 = *(s32 *)((u8 *)gEssEdit + 0x20) * 0xD680;
        var_a1 = &D_0058F680 + temp_a3;
        temp_a2 = (short *)((*(s8 *)((u8 *)(*temp_s0_2) + 4) * 0xE) + var_a1 + 0x8A2);
        if (sp30 > 0) {
            var_a1 = &sp30;
            var_a0 = temp_a2;
            do {
                var_v0 += 1;
                *var_a0 = (s16) *(s32 *)((u8 *)var_a1 + 4);
                var_a1 += 4;
                var_a0 += 2;
            } while (var_v0 < sp30);
        }
        if (var_v0 < 7) {
            var_a1 = (int *)(temp_a2 + (var_v0 * 2));
            do {
                var_v0 += 1;
                *var_a1 = -1;
                var_a1 += 2;
            } while (var_v0 < 7);
        }
        *(s8 *)((u8 *)(*temp_s0_2) + 0xB) = 3;
        func_0027DA00(*(s32 *)((u8 *)gEssEdit + 0x14), var_a1, temp_a2, temp_a3, 0x3F800000, 0x3F800000);
        var_v1 = (int *)(&func_0026E950);
        if (&func_0026E950 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
