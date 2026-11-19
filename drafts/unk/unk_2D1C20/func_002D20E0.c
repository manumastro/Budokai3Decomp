/* Draft (not built): func_002D20E0 at 0x002D20E0, size 0x278, segment unk/unk_2D1C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x298, original 0x278
 * Original: asm/nonmatchings/unk/unk_2D1C20/func_002D20E0.s */

// src/unk/unk_2D1C20.c func_002D20E0 size diff=61/166
void *A2d_AllocObj(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C430(s32, f32);
s32 func_0022D4B0(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022C6B0(void *);
void func_002D20E0(void) {
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f20;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a1_3;
    u8 *temp_s3;
    u8 *temp_t0;
    u8 *temp_v0;

    temp_a0 = *(s32 *)((u8 *)gSmsgTask + 0x4C);
    temp_s3 = (unsigned char *)(gSmsgTask + 0x30);
    if ((temp_a0 >= 3) && (temp_a0 < 6)) {
        if (temp_a0 < 5) {
            var_s2 = 0;
            var_f20 = 1.0f;
            var_s0 = 3;
        } else {
            var_s2 = 1;
            var_s0 = 4;
            var_f20 = 1.0f - (((f32) *(s32 *)((u8 *)temp_s3 + 0x20) * gFrameDelta) / 10.0f);
            if (var_f20 < 0.0f) {
                var_f20 = 0.0f;
            }
        }
        temp_a1 = *(s32 *)((u8 *)temp_s3 + 0x18);
        temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 0x10);
        D_00470704 = temp_a0_2;
        D_0047070C = temp_a1;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, temp_a1);
        D_00470238 = 0;
        func_00133780(0, 1);
        temp_s1 = amGs_SetReg32(0, 0x30000);
        func_00228430(0);
        func_002284D0(0);
        func_0022C430(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xC)) + 0x1C) + (var_s0 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 0x20) * gFrameDelta);
        func_0022C430(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xC)) + 0x1C) + (var_s2 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 0x20) * gFrameDelta);
        if (*(s32 *)((u8 *)temp_s3 + 0x1C) >= 4) {
            temp_a0_3 = *(u8 **)((u8 *)temp_s3 + 0x14);
            temp_a1_2 = *(s32 *)((u8 *)temp_s3 + 0x18) + 0x10;
            D_00470704 = temp_a0_3;
            D_0047070C = temp_a1_2;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_3, temp_a1_2);
            D_00470238 = 0;
            temp_v0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xC)) + 0x1C)) + 8), 0);
            *(s16 *)((u8 *)temp_v0 + 0x18) = (s16) *(s32 *)((u8 *)temp_s3 + 0x24);
            temp_t0 = *(u8 **)((u8 *)temp_s3 + 0x14);
            temp_a1_3 = temp_t0 + *(*(s32 *)((u8 *)temp_t0 + 0x14) + temp_t0 + ((*(s32 *)((u8 *)temp_s3 + 0x24) - *(s32 *)((u8 *)temp_t0 + 0x18)) * 4));
            temp_f4 = (f32) *(s16 *)((u8 *)temp_a1_3 + 0x10);
            temp_f3 = (f32) *(s16 *)((u8 *)temp_a1_3 + 0x12);
            *(f32 *)((u8 *)temp_v0 + 0x30) = (f32) (-temp_f4 / 2.0f);
            *(f32 *)((u8 *)temp_v0 + 0x34) = (f32) (-temp_f3 / 2.0f);
            *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (temp_f4 / 2.0f);
            *(f32 *)((u8 *)temp_v0 + 0x3C) = (f32) (temp_f3 / 2.0f);
            *(s32 *)((u8 *)temp_v0 + 0x40) = 0x3F000000;
            *(s32 *)((u8 *)temp_v0 + 0x44) = 0x3F000000;
            *(f32 *)((u8 *)temp_v0 + 0x48) = (f32) (0.5f + temp_f4);
            *(f32 *)((u8 *)temp_v0 + 0x4C) = (f32) (0.5f + temp_f3);
            *(f32 *)((u8 *)temp_v0 + 0x5C) = var_f20;
            func_0022C6B0(temp_v0);
            func_0022D4B0(temp_v0, 1);
        }
        func_00228410();
        amGs_SetReg32(0, temp_s1);
        func_00133780(0, 0);
    }
}
