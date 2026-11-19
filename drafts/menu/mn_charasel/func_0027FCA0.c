/* Draft (not built): func_0027FCA0 at 0x0027FCA0, size 0x164, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x184, original 0x164
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027FCA0.s */

// src/menu/mn_charasel.c func_0027FCA0 size diff=24/97
s32 func_00287E60(s32, u8);
extern u8 D_004B4B56;
extern f32 gFrameDelta;
extern void func_0027FAE0(void);
void func_0027FCA0(u8 *arg0) {
    s32 saved_reg_s0;
    s32 *var_v1;
    f32 temp_f1;
    s32 var_s0;
    s8 temp_a0_3;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;

    var_s0 = saved_reg_s0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x38);
    func_0027EA60(temp_s1);
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x40);
    if (!(temp_f1 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s1 + 0x40) = (f32) (temp_f1 - gFrameDelta);
        return;
    }
    if ((((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s1 + 0)) << 0x38) >> 0x38) == 7) && (((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s1 + 4)) << 0x38) >> 0x38) == 7)) {
        temp_a0 = *(u8 **)((u8 *)temp_s1 + 0);
        if (temp_a0 != NULL) {
            func_0027E120(temp_a0);
            *(u8 **)((u8 *)temp_s1 + 0) = NULL;
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 4);
        if (temp_a0_2 != NULL) {
            func_0027E120(temp_a0_2);
            *(u8 **)((u8 *)temp_s1 + 4) = NULL;
        }
        temp_a0_3 = *(s8 *)((u8 *)(arg0 + 0x30) + 5);
        switch (temp_a0_3) {                        /* irregular */
        case 0:
            var_s0 = 2 & 0xFF;
            break;
        case 1:
            var_s0 = 6;
            break;
        case 2:
            var_s0 = 4;
            break;
        case 3:
            var_s0 = 6;
            break;
        }
        *(s32 *)((u8 *)temp_s1 + 8) = func_00287E60(var_s0, D_004B4B56);
        *(s8 *)((u8 *)temp_s1 + 0x3D) = 6;
        var_v1 = (int *)(&func_0027FAE0);
        if (&func_0027FAE0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
