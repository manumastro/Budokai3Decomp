/* Draft (not built): func_00287110 at 0x00287110, size 0x184, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 70 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1A0, original 0x184
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00287110.s */

// src/menu/mn_StageSel.c func_00287110 size diff=70/104
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
extern s32 D_0046B860;
extern s32 D_0046B861;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_002872A0(void);
void func_00287110(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f1;
    s16 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    u8 *temp_a0_2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(s32 *)((u8 *)temp_s0 + 0x26C) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x26C) + *(s32 *)((u8 *)temp_s0 + 0x274));
    *(s32 *)((u8 *)temp_s0 + 0x26C) = (s32) (u16) *(s32 *)((u8 *)temp_s0 + 0x26C);
    func_00284AA0((s32)(temp_s0));
    func_002861B0(temp_s0);
    func_00285EF0((s32)(temp_s0));
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x27C) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x27C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x230)) + 0x34) = (s16) *(s16 *)((u8 *)temp_s0 + 0x25C);
        *(s8 *)((u8 *)temp_s0 + 0x263) = 0;
        temp_a0 = *(s16 *)((u8 *)temp_s0 + 0x25C);
        if (*(s16 *)((u8 *)temp_s0 + 0x25E) != temp_a0) {
            *(s16 *)((u8 *)temp_s0 + 0x25E) = temp_a0;
            temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
            D_00470704 = temp_a0_2;
            D_0047070C = 0x7000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_2, 0x7000);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x18);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 0x18) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + (*(&D_0046B860 + (*(s16 *)((u8 *)temp_s0 + 0x25C) * 2)) * 4)), 0);
            temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x28);
            if (temp_a0_4 != 0) {
                func_0022D0E0(temp_a0_4, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 0x28) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + (*(&D_0046B861 + (*(s16 *)((u8 *)temp_s0 + 0x25C) * 2)) * 4)), 0);
        }
        var_v1 = (int *)(&func_002872A0);
        *(s32 *)((u8 *)temp_s0 + 0x26C) = (s32) *(s32 *)((u8 *)temp_s0 + 0x270);
        *(s8 *)((u8 *)temp_s0 + 0x262) = 2;
        *(s8 *)((u8 *)temp_s0 + 0x264) = 2;
        if (&func_002872A0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
