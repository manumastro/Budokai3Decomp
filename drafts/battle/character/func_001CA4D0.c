/* Draft (not built): func_001CA4D0 at 0x001CA4D0, size 0x2A8, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 144 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x26C, original 0x2A8
 * Original: asm/nonmatchings/battle/character/func_001CA4D0.s */

// src/battle/character.c func_001CA4D0 size diff=144/155
extern s32 D_00447440;
extern f32 D_00469050;
extern s32 **D_004702E8;
extern s32 *D_0049E7B0;
extern s32 D_0049E960;
extern s32 D_004B41F4;
extern s32 D_004B41F8;
extern s32 D_004B41FC;
extern s32 D_004B4200;
extern s32 D_004B4204;
extern s32 D_004B4208;
extern void func_0029D8E0(void);
void func_001CA4D0(void) {
    s32 **var_a3_3;
    s32 *var_a0_2;
    s32 *var_t0;
    s32 *var_t0_2;
    f32 *var_a2_2;
    f32 *var_t1;
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_t2;
    s32 var_t3;
    u8 *temp_a0_2;
    u8 *var_a3;
    u8 *var_a3_2;

    var_a2 = 0;
    var_t0 = &D_00447440;
    do {
        var_a3 = *(u8 **)((u8 *)var_t0 + 8);
        temp_a0 = *(s8 *)((u8 *)var_t0 + 4) * *(s8 *)((u8 *)var_t0 + 5);
        var_a1 = 0;
        if (temp_a0 > 0) {
            if (temp_a0 >= 9) {
                do {
                    *(s32 *)((u8 *)var_a3 + 8) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x14) = 0;
                    var_a1 += 8;
                    *(s32 *)((u8 *)var_a3 + 0x20) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x2C) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x38) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x44) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x50) = 0;
                    *(s32 *)((u8 *)var_a3 + 0x5C) = 0;
                    var_a3 += 0x60;
                } while (var_a1 < (temp_a0 - 8));
            }
            if (var_a1 < temp_a0) {
                do {
                    var_a1 += 1;
                    *(s32 *)((u8 *)var_a3 + 8) = 0;
                    var_a3 += 0xC;
                } while (var_a1 < temp_a0);
            }
        }
        var_a3_2 = *(u8 **)((u8 *)var_t0 + 0xC);
        temp_v1 = *(s8 *)((u8 *)var_t0 + 4) * *(s8 *)((u8 *)var_t0 + 6);
        var_a0 = 0;
        if (temp_v1 > 0) {
            if (temp_v1 >= 9) {
                do {
                    *(s32 *)((u8 *)var_a3_2 + 4) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0xC) = 0;
                    var_a0 += 8;
                    *(s32 *)((u8 *)var_a3_2 + 0x14) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0x1C) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0x24) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0x2C) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0x34) = 0;
                    *(s32 *)((u8 *)var_a3_2 + 0x3C) = 0;
                    var_a3_2 += 0x40;
                } while (var_a0 < (temp_v1 - 8));
            }
            if (var_a0 < temp_v1) {
                do {
                    var_a0 += 1;
                    *(s32 *)((u8 *)var_a3_2 + 4) = 0;
                    var_a3_2 += 8;
                } while (var_a0 < temp_v1);
            }
        }
        var_a2 += 1;
        var_t0 += 0x60;
    } while (var_a2 < 0x69);
    var_t3 = 0;
    var_t1 = &D_00469050;
    var_t0_2 = &D_0049E960;
    var_a3_3 = &D_0049E7B0;
    do {
        var_t2 = 0;
        var_a2_2 = &D_00469050;
        var_a0_2 = var_t0_2;
loop_18:
        var_t2 += 8;
        *(f32 *)((u8 *)var_a0_2 + 4) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 0));
        *(s32 *)((u8 *)var_a0_2 + 0) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0xC) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 4));
        *(s32 *)((u8 *)var_a0_2 + 8) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0x14) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 8));
        *(s32 *)((u8 *)var_a0_2 + 0x10) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0x1C) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 0xC));
        *(s32 *)((u8 *)var_a0_2 + 0x18) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0x24) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 0x10));
        *(s32 *)((u8 *)var_a0_2 + 0x20) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0x2C) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 0x14));
        *(s32 *)((u8 *)var_a0_2 + 0x28) = 0x3F800000;
        *(f32 *)((u8 *)var_a0_2 + 0x34) = (f32) (*var_t1 / *(f32 *)((u8 *)var_a2_2 + 0x18));
        *(s32 *)((u8 *)var_a0_2 + 0x30) = 0x3F800000;
        temp_f0 = *(f32 *)((u8 *)var_a2_2 + 0x1C);
        var_a2_2 += 0x20;
        *(f32 *)((u8 *)var_a0_2 + 0x3C) = (f32) (*var_t1 / temp_f0);
        *(s32 *)((u8 *)var_a0_2 + 0x38) = 0x3F800000;
        var_a0_2 += 0x40;
        if (var_t2 < 0x61) {
            goto loop_18;
        }
        temp_a0_2 = (u8 *)(var_t0_2 + (var_t2 * 8));
        temp_f1 = *var_t1;
        var_t3 += 1;
        var_t1 += 4;
        *(f32 *)((u8 *)temp_a0_2 + 4) = (f32) (temp_f1 / (&D_00469050)[var_t2]);
        *(f32 *)((u8 *)temp_a0_2 + 0) = 1.0f;
        *var_a3_3 = var_t0_2;
        var_t0_2 += 0x348;
        var_a3_3 += 4;
    } while (var_t3 < 0x69);
    D_004B4208 = 1;
    D_004B4204 = 1;
    D_004702E8 = &D_0049E7B0;
    D_004B4200 = 1;
    D_004B41FC = 1;
    D_004B41F8 = 1;
    D_004B41F4 = 1;
    func_0029D8E0();
}
