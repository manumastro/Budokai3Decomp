/* Draft (not built): func_002FE5A0 at 0x002FE5A0, size 0x1F4, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x1F4
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FE5A0.s */

// src/unk/unk_2FAFF0.c func_002FE5A0 size diff=52/124
void *A2d_AllocObj(s32, f32);
s32 func_00227A30(s32 *);
s32 func_00228430(s32);
s32 func_0022D4B0(void *, s32);
extern s32 D_00458C10;
extern s8 D_004B4B57;
extern s8 D_004B4B58;
extern s8 D_005D0082;
extern void func_00228410(void);
extern void func_0022C6B0(void *);
void func_002FE5A0(void) {
    s8 var_s1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_v0;

    var_s1 = D_004B4B58;
    temp_s0 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_s5 = (u8 *)(gTourMap + 0x10C);
    if (var_s1 != D_005D0082) {
        if ((var_s1 + 1) == D_005D0082) {
            var_s1 = 4;
        }
        func_00228430(0);
        func_00227A30(&D_00458C10);
        temp_s4 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x18), (f32) *(s32 *)((u8 *)temp_s5 + 8) * gFrameDelta);
        temp_s3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x84), (f32) *(s32 *)((u8 *)temp_s5 + 8) * gFrameDelta);
        temp_s2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x6C), (f32) *(s32 *)((u8 *)temp_s5 + 8) * gFrameDelta);
        temp_s1 = A2d_AllocObj(*(s32 *)((u8 *)((var_s1 * 4) + *(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x8C), (f32) *(s32 *)((u8 *)temp_s5 + 8) * gFrameDelta);
        temp_v0 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s0 + 0x1C) + ((D_004B4B57 + 0x1D) * 4)), (f32) *(s32 *)((u8 *)temp_s5 + 8) * gFrameDelta);
        temp_s0_2 = temp_v0;
        *(s16 *)((u8 *)temp_s3 + 0x18) = (s16) *(s16 *)((u8 *)temp_s1 + 0x18);
        *(f32 *)((u8 *)temp_s3 + 0x40) = (f32) *(f32 *)((u8 *)temp_s1 + 0x40);
        *(f32 *)((u8 *)temp_s3 + 0x44) = (f32) *(f32 *)((u8 *)temp_s1 + 0x44);
        *(f32 *)((u8 *)temp_s3 + 0x48) = (f32) *(f32 *)((u8 *)temp_s1 + 0x48);
        *(f32 *)((u8 *)temp_s3 + 0x4C) = (f32) *(f32 *)((u8 *)temp_s1 + 0x4C);
        *(s16 *)((u8 *)temp_s2 + 0x18) = (s16) *(s16 *)((u8 *)temp_v0 + 0x18);
        *(f32 *)((u8 *)temp_s2 + 0x40) = (f32) *(f32 *)((u8 *)temp_v0 + 0x40);
        *(f32 *)((u8 *)temp_s2 + 0x44) = (f32) *(f32 *)((u8 *)temp_v0 + 0x44);
        *(f32 *)((u8 *)temp_s2 + 0x48) = (f32) *(f32 *)((u8 *)temp_v0 + 0x48);
        *(f32 *)((u8 *)temp_s2 + 0x4C) = (f32) *(f32 *)((u8 *)temp_v0 + 0x4C);
        func_0022C6B0(temp_s4);
        func_0022C6B0(temp_s3);
        func_0022C6B0(temp_s2);
        func_0022D4B0(temp_s4, 1);
        func_0022D4B0(temp_s3, 1);
        func_0022D4B0(temp_s2, 1);
        func_0022D4B0(temp_s1, 1);
        func_0022D4B0(temp_s0_2, 1);
        func_00228410();
    }
}
