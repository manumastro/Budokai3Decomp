/* Draft (not built): func_002B1FF0 at 0x002B1FF0, size 0x404, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 842: BITWISE(f32, temp_a1_2), (f32) (*(*(s32 *)((u8 *)gSklEdit + 0x44) + temp_a1_2) - 1));
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1FF0.s */

// src/unk/unk_2AF860.c func_002B1FF0 cerr diff=-1/0
void *A2d_AllocObj(s32, f32);
s32 func_00227830(s32, s32);
s32 func_00227B20(s32, s32, s32, s32, f32);
s32 func_00228430(s32);
s32 func_0022C430(s32, f32, f32);
s32 func_0022D4B0(void *, s32);
extern s32 D_00455230;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 gFrameDelta;
extern void Title_StepCounters(void);
extern void func_00228410(void);
extern void func_0022C6B0(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002B1FF0(u8 *arg0) {
    f32 var_f20;
    s16 temp_a1_2;
    s16 temp_s0_2;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *var_s3;

    temp_s4 = *(u8 **)((u8 *)gSklEdit + 0x10);
    func_00228430(0);
    func_00227830(0, 0);
    temp_s0 = arg0 + 0x108;
    if (*(s32 *)((u8 *)arg0 + 0x114) == 0) {
        temp_s2 = ((s32) *(s32 *)((u8 *)arg0 + 0x10) >> 1) << 0xC;
        temp_a0 = *(u8 **)((u8 *)gSklEdit + 0x14);
        var_s3 = arg0 + (*(s32 *)((u8 *)arg0 + 0x24) * 0x1C) + 0x48;
        temp_a1 = *(s32 *)((u8 *)gSklEdit + 0x3C) + 0x500 + temp_s2;
        D_00470704 = temp_a0;
        D_0047070C = temp_a1;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, temp_a1);
        D_00470238 = 0;
        func_00228430(0);
        func_00227B20(*(s32 *)((u8 *)(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)arg0 + 0x108) * 4))) + 0xC), 0, 0, 0, (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta);
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)temp_s0 + 0x10) * 4)), (f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta, 0);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x28), (f32) *(s32 *)((u8 *)arg0 + 0x24), 0);
        temp_s1 = *(s32 *)((u8 *)var_s3 + 4);
        var_s0 = 0;
        func_00228430(0);
        temp_v0 = (temp_s1 * 2) + var_s3;
        if (func_002B1780(arg0, *(s16 *)((u8 *)temp_v0 + 8)) != 0) {
            var_s0 = 1;
        } else if (func_002B0BF0(*(s16 *)((u8 *)temp_v0 + 8)) == 0) {
            var_s0 = 2;
        }
        func_00227B20(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xF8)) + 0xC), 0, 0, 0, (f32) var_s0);
        func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xF4), (f32) temp_s1, 0);
        func_00228410();
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)arg0 + 0x168) * 4)), (f32) *(s32 *)((u8 *)arg0 + 0x170) * gFrameDelta, 0);
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(s32 *)((u8 *)arg0 + 0x198) * 4)), (f32) *(s32 *)((u8 *)arg0 + 0x1A0) * gFrameDelta, 0);
        temp_a1_2 = *(s16 *)((u8 *)((*(s32 *)((u8 *)var_s3 + 4) * 2) + var_s3) + 8);
        if (temp_a1_2 > 0) {
            func_0022C430(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x104), M2C_BITWISE(f32, temp_a1_2), (f32) (*(*(s32 *)((u8 *)gSklEdit + 0x44) + temp_a1_2) - 1));
        }
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (*(&D_00455230 + *(s32 *)((u8 *)arg0 + 0x1C)) * 4)), 0.0f, 0);
        temp_a0_2 = *(u8 **)((u8 *)arg0 + 8);
        temp_a1_3 = *(s32 *)((u8 *)gSklEdit + 0x3C) + temp_s2;
        D_00470704 = temp_a0_2;
        D_0047070C = temp_a1_3;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, temp_a1_3);
        D_00470238 = 0;
        var_s1 = 0;
loop_9:
        temp_s0_2 = *(s16 *)((u8 *)var_s3 + 8);
        if (temp_s0_2 > 0) {
            var_f20 = 1.0f;
            temp_v0_2 = func_002B1780(arg0, temp_s0_2);
            switch (temp_v0_2) {                    /* irregular */
            case 0:
                break;
            case 1:
block_19:
                var_f20 = 1.0f * 0.5f;
                break;
            case 2:
                goto block_19;
            case 3:
                goto block_19;
            }
            temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xF4), (f32) var_s1);
            *(s16 *)((u8 *)temp_v0_3 + 0x18) = temp_s0_2;
            *(s32 *)((u8 *)temp_v0_3 + 0x50) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0_3 + 0x54) = 0x3F800000;
            *(s32 *)((u8 *)temp_v0_3 + 0x58) = 0x3F800000;
            *(f32 *)((u8 *)temp_v0_3 + 0x5C) = var_f20;
            func_002B1E90(temp_v0_3, *(u8 **)((u8 *)arg0 + 8), temp_s0_2, 0xC);
            *(f32 *)((u8 *)temp_v0_3 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x38) * 0.8f);
            *(f32 *)((u8 *)temp_v0_3 + 0x34) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x34) * 0.9f);
            *(f32 *)((u8 *)temp_v0_3 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_v0_3 + 0x3C) * 0.9f);
            func_0022C6B0(M2C_ERROR(/* Read from unset register $a0 */));
            func_0022D4B0(temp_v0_3, 1);
            var_s1 += 1;
            var_s3 += 2;
            if (var_s1 >= 9) {

            } else {
                goto loop_9;
            }
        }
        func_00228410();
    }
    Title_StepCounters();
    func_00228410();
}
