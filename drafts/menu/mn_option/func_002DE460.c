/* Draft (not built): func_002DE460 at 0x002DE460, size 0x138, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x138
 * Original: asm/nonmatchings/menu/mn_option/func_002DE460.s */

// src/menu/mn_option.c func_002DE460 size diff=39/79
s32 Scene_FadeTo(s32, s32);
extern s32 func_002D9DE0;
extern void amAdx_Stop();
extern void Save_Request();
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
extern void Scene_Request();
extern void func_002D91C0(void);
extern void func_002DEFF0(void);
extern void func_002DEA00(void);
extern void func_002DEFE0(void);
void func_002DE460(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 *var_v0;
    s32 *var_v0_2;
    f32 temp_f0;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s0 = gOptionWork;
    *(f32 *)((u8 *)D_004E05DC + 0x34) = (f32) ((f32) *(s32 *)((u8 *)temp_s0 + 0x404) / 255.0f);
    temp_f0 = (f32) *(s32 *)((u8 *)temp_s0 + 0x408) / 255.0f;
    *(f32 *)((u8 *)D_004E05DC + 0x38) = temp_f0;
    *(f32 *)((u8 *)D_004E05DC + 0x3C) = temp_f0;
    if (func_002DE2C0() != 0) {
        Save_Request(6, -1, 0);
        var_v0 = (s32 *)(&func_002DEFF0);
        if (&func_002DEFF0 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x320)) + 0x1C) = var_v0;
    } else {
        var_v0_2 = (s32 *)(&func_002DEA00);
        if (&func_002DEA00 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x320)) + 0x1C) = var_v0_2;
        *(s32 **)((u8 *)gOptionWork + 0x34C) = &func_002D9DE0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x38C) = 0;
        Scene_Request(5, 0);
        Scene_FadeTo(0xA, 0);
    }
    amAdx_Stop(1);
    *(void (**)())((u8 *)temp_s0 + 0x344) = func_002DEFE0;
    temp_s1 = gOptionWork;
    sp30 = 0x43CF8000;
    sp38 = 0;
    sp34 = 0x43BE0000;
    sp3C = 0x3F800000;
    Obj_CopyVec4F50(*(u8 **)((u8 *)temp_s1 + 0x33C), &sp30);
    Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x33C), -1);
    *(void (**)())((u8 *)temp_s0 + 0x35C) = func_002D91C0;
}
