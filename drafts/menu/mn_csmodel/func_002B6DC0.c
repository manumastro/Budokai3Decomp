/* Draft (not built): func_002B6DC0 at 0x002B6DC0, size 0x380, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x358, original 0x380
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B6DC0.s */

// src/menu/mn_csmodel.c func_002B6DC0 size diff=99/214
extern void func_0029E450(void *);
void *func_0029E9B0(s16, s32, s16, s32);
extern s32 D_004580B0;
extern s32 D_004580B4;
extern s32 D_004580B8;
extern s32 D_004580BC;
extern s32 D_004580C0;
extern s32 D_004580C4;
extern s32 D_004580C8;
extern s32 D_00458A50;
extern s32 D_00458A54;
extern s32 D_00458A58;
extern s32 D_00458A5C;
extern s32 D_00458A60;
extern s32 D_00458A64;
extern s32 D_00458A68;
extern void func_002B6C30(void);
void func_002B6DC0(u8 *arg0) {
    s32 *var_v1_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f2;
    s16 temp_a0_2;
    s32 temp_s0;
    s32 temp_t1;
    s32 temp_v1_2;
    s32 var_v1;
    u16 temp_v1;
    u8 *temp_a0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_f3 = *(f32 *)((u8 *)temp_s1 + 0xC0);
    temp_s0 = (*(u16 *)((u8 *)temp_s1 + 0xB2) & 1) != 0;
    if (temp_f3 != 0.0f) {
        temp_f0 = temp_f3 - (0.125f * gFrameDelta);
        *(f32 *)((u8 *)temp_s1 + 0xC0) = temp_f0;
        if (temp_f0 < 0.0f) {
            *(f32 *)((u8 *)temp_s1 + 0xC0) = 0.0f;
        }
    }
    temp_v1 = *(u16 *)((u8 *)temp_s1 + 0xB0);
    if (temp_v1 == 3) {
        *(f32 *)((u8 *)temp_s1 + 0xBC) = 0.0f;
    } else if (temp_v1 == 2) {
        temp_f3_2 = *(f32 *)((u8 *)temp_s1 + 0xBC);
        var_f2 = 0.0f;
        if (!(temp_f3_2 <= 0.0f)) {
            temp_f0_2 = temp_f3_2 - (2.0f * gFrameDelta);
            *(f32 *)((u8 *)temp_s1 + 0xBC) = temp_f0_2;
            if (temp_f0_2 < 0.0f) {
                goto block_12;
            }
        }
    } else if (temp_v1 == 4) {
        temp_f3_3 = *(f32 *)((u8 *)temp_s1 + 0xBC);
        var_f2 = 20.0f;
        if (temp_f3_3 < 20.0f) {
            temp_f0_3 = temp_f3_3 + (2.0f * gFrameDelta);
            *(f32 *)((u8 *)temp_s1 + 0xBC) = temp_f0_3;
            if (!(temp_f0_3 <= 20.0f)) {
block_12:
                *(f32 *)((u8 *)temp_s1 + 0xBC) = var_f2;
            }
        }
    }
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0);
    if (temp_a0 != NULL) {
        func_0029E450(temp_a0);
    }
    temp_a0_2 = *(s16 *)((u8 *)temp_s1 + 0xB4);
    if (temp_a0_2 >= 0) {
        *(u8 **)((u8 *)temp_s1 + 0) = func_0029E9B0(temp_a0_2, 0, *(s16 *)((u8 *)temp_s1 + 0xB6), (temp_s0 & 0xFFFF) + 1);
        temp_v1_2 = (temp_s0 & 0xFFFF) * 0x1C;
        *(f32 *)((u8 *)temp_s1 + 0xC4) = (f32) *(temp_v1_2 + (&D_004580B0 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        *(f32 *)((u8 *)temp_s1 + 0xC8) = (f32) *(temp_v1_2 + (&D_004580B4 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        *(f32 *)((u8 *)temp_s1 + 0xCC) = (f32) *(temp_v1_2 + (&D_004580B8 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        *(f32 *)((u8 *)temp_s1 + 0xD0) = (f32) *(temp_v1_2 + (&D_004580BC + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        *(s32 *)((u8 *)temp_s1 + 0xD4) = (s32) *(temp_v1_2 + (&D_004580C0 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        *(s32 *)((u8 *)temp_s1 + 0xD8) = (s32) *(temp_v1_2 + (&D_004580C4 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
        var_v1 = *(temp_v1_2 + (&D_004580C8 + (*(s16 *)((u8 *)temp_s1 + 0xB4) * 0x38)));
    } else {
        *(u8 **)((u8 *)temp_s1 + 0) = func_0029E9B0(temp_a0_2, 0, 0, (temp_s0 & 0xFFFF) + 1);
        temp_t1 = (temp_s0 & 0xFFFF) * 0x1C;
        *(f32 *)((u8 *)temp_s1 + 0xC4) = (f32) *(&D_00458A50 + temp_t1);
        *(f32 *)((u8 *)temp_s1 + 0xC8) = (f32) *(&D_00458A54 + temp_t1);
        *(f32 *)((u8 *)temp_s1 + 0xCC) = (f32) *(&D_00458A58 + temp_t1);
        *(f32 *)((u8 *)temp_s1 + 0xD0) = (f32) *(&D_00458A5C + temp_t1);
        *(s32 *)((u8 *)temp_s1 + 0xD4) = (s32) *(&D_00458A60 + temp_t1);
        *(s32 *)((u8 *)temp_s1 + 0xD8) = (s32) *(&D_00458A64 + temp_t1);
        var_v1 = *(&D_00458A68 + temp_t1);
    }
    *(s32 *)((u8 *)temp_s1 + 0xDC) = var_v1;
    var_v1_2 = (s32 *)(&func_002B6C30);
    if (&func_002B6C30 == NULL) {
        var_v1_2 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
}
