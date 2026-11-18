/* Draft (not built): func_001E28F0 at 0x001E28F0, size 0x210, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 94 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x200, original 0x210
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E28F0.s */

// src/unk/unk_1D5B30.c func_001E28F0 size diff=94/128
extern void func_001C8480(s32, s32);
s32 func_00246EB0(void *);
extern void func_001C8860(void *, int);
void func_001E28F0(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    s16 sp38;
    s32 sp50;
    s32 sp54;
    f32 sp58;
    s32 sp60;
    s32 sp64;
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f1;

    if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0x2A) {
        func_001C8860(arg0, 1);
        func_001C8480((s32)((void *)(arg0)), 1);
        if (*(s32 *)((u8 *)arg0 + 0x1DBC) != 0) {
            func_001E7070(arg0 + 0x650, 1);
            sp50 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp54 = 1;
            if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
                var_f0 = 0.0f;
            } else {
                var_f0 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
            }
            sp58 = var_f0;
            A2d_CallHandler(8, &sp50);
            sp30 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp38 = (s16) *(s32 *)((u8 *)arg0 + 0xBA4);
            Sp_CallHandler(1, &sp20);
        }
        *(s32 *)((u8 *)arg0 + 0x1A4C) = 1;
        *(f32 *)((u8 *)arg0 + 0x1A50) = 600.0f;
        sp60 = *(s32 *)((u8 *)arg0 + 0x1350);
        sp64 = 1;
        A2d_CallHandler(0x33, &sp60);
        func_001D5B30(arg0);
        *(f32 *)((u8 *)arg0 + 0x1A54) = (f32) *(f32 *)((u8 *)arg0 + 0x1A50);
        var_f1 = *(f32 *)((u8 *)arg0 + 0x1A50) - 0.0f;
        *(f32 *)((u8 *)arg0 + 0x1A50) = var_f1;
        if (!(var_f1 <= 0.0f)) {

        } else {
            var_f1 = 0.0f;
        }
        *(f32 *)((u8 *)arg0 + 0x1A50) = var_f1;
        *(f32 *)((u8 *)(func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350))) + 0xF4) = (f32) *(f32 *)((u8 *)arg0 + 0x1A50);
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x1A54);
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x1A50);
        if ((((s32) (MULT_HI(0x88888889, M2C_BITWISE(s32, temp_f0)) + M2C_BITWISE(s32, temp_f0)) >> 5) + (M2C_BITWISE(u32, temp_f0) >> 0x1F)) < (((s32) (MULT_HI(0x88888889, M2C_BITWISE(s32, temp_f1)) + M2C_BITWISE(s32, temp_f1)) >> 5) + (M2C_BITWISE(u32, temp_f1) >> 0x1F))) {
            func_001E9B00((void *)(*(s32 *)((u8 *)arg0 + 0x1350) + 2), 0x34, 0, 0, 0, 0x3F800000);
        }
        func_00246EB0(arg0);
    }
}
