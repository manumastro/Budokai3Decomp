/* Draft (not built): func_002DF740 at 0x002DF740, size 0x1F0, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x20C, original 0x1F0
 * Original: asm/nonmatchings/menu/mn_option/func_002DF740.s */

// src/menu/mn_option.c func_002DF740 size diff=72/131
void Option_ReadSound(void);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, s64 *, s8 *, f32);
s32 func_002D2E50(s32);
extern f32 D_004E0618;
extern void amAdx_Pause();
extern char D_00456C80[];
extern void func_002D8D00(void);
extern void func_002D9C20(void);
extern void func_002D9F80(void);
extern void func_002DA310(void);
void func_002DF740(void) {
    s32 sp30;
    s64 sp20;
    s32 (*temp_v0)();
    s32 (*temp_v0_5)();
    s32 (*temp_v0_6)();
    f32 temp_f1;
    f32 var_f2;
    s128 temp_v0_7;
    s32 var_a0;
    s64 *var_a1;
    s8 *var_a2;
    u8 *temp_s0;
    void (*temp_v0_2)();
    void (*temp_v0_3)();
    void (*temp_v0_4)();
    void (*var_v1)();

    temp_s0 = gOptionWork;
    A2d_SetMode((s32) *D_004E05F8);
    temp_v0 = *(s32 (**)())((u8 *)temp_s0 + 0x360);
    if (temp_v0 != NULL) {
        temp_v0();
    }
    temp_v0_2 = *(void (**)())((u8 *)temp_s0 + 0x348);
    if (temp_v0_2 != NULL) {
        temp_v0_2();
    }
    temp_v0_3 = *(void (**)())((u8 *)temp_s0 + 0x34C);
    if (temp_v0_3 != NULL) {
        temp_v0_3();
    }
    temp_v0_4 = *(void (**)())((u8 *)temp_s0 + 0x350);
    if (temp_v0_4 != NULL) {
        temp_v0_4();
    }
    temp_v0_5 = *(s32 (**)())((u8 *)temp_s0 + 0x354);
    if (temp_v0_5 != NULL) {
        temp_v0_5();
    }
    temp_v0_6 = *(s32 (**)())((u8 *)temp_s0 + 0x35C);
    if (temp_v0_6 != NULL) {
        temp_v0_6();
    }
    func_002D8D00();
    A2d_FlushList();
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x3A4) + var_f2;
    *(f32 *)((u8 *)temp_s0 + 0x3A4) = temp_f1;
    if (!(temp_f1 < 110.0f)) {
        func_002D2E50(4);
    }
    if (!(*(f32 *)((u8 *)temp_s0 + 0x3A4) < 120.0f)) {
        var_a1 = &sp20;
        var_a2 = (signed char *)(D_00456C80);
        var_a0 = 4;
        do {
            var_a0 -= 1;
            temp_v0_7 = *(s128 *)((u8 *)var_a2 + 0x10);
            *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
            var_a2 += 0x20;
            *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0_7;
            var_a1 += 0x20;
        } while (var_a0 > 0);
        *var_a1 = *var_a2;
        amAdx_SetVolume(1, var_a1, var_a2, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, sp30 | 0x20000, 0);
        *(f32 *)((u8 *)temp_s0 + 0x3A4) = 0.0f;
        *(s32 *)((u8 *)temp_s0 + 0x39C) = 0x42BE0000;
        *(void (**)())((u8 *)temp_s0 + 0x348) = func_002DA310;
        *(void (**)())((u8 *)temp_s0 + 0x34C) = func_002D9F80;
        *(void (**)())((u8 *)temp_s0 + 0x350) = func_002D9C20;
        var_v1 = Option_ReadSound;
        if (Option_ReadSound == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x320)) + 0x1C) = var_v1;
    }
}
