/* Draft (not built): func_00240390 at 0x00240390, size 0x52C, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ccps2.exe Compiler: @ 682: D_0058BF70 = (*(f32 *)(*(f32 *)((u8 *)temp_v0_3 + 0x38))) - *(f32 *)((u8 *)temp_v0_3 + 0x30);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00240390.s */

// src/unk/unk_23A890.c func_00240390 cerr diff=-1/0
void *A2d_AllocObj(s32, s32);
s16 *func_0021C610();
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_00228AC0(s32, void *, s32, void *, s32);
s32 func_00229440(s32, void *, s32, void *, s32);
s32 func_00229800(s32, void *, s32, void *, s32);
s32 func_0022D860(s32, s32);
s32 func_002541D0(s32);
s32 memcpy(void *, void *, s32);
extern s32 D_0046AC40;
extern s32 D_0058BF60;
extern f32 D_0058BF74;
extern s32 D_0058C4D0;
extern s32 D_0058C4D4;
extern s32 D_0058C4D8;
extern s32 D_0058C4DC;
extern void func_00228410(void);
void func_00240390(void) {
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_t6;
    s32 var_s0;
    s32 var_s2;
    s32 var_t7;
    s32 var_v0;
    s32 var_v0_2;
    u8 **temp_a0;
    u8 **temp_a2;
    u8 *temp_a0_3;
    u8 *temp_a1_2;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_a3_3;
    u8 *temp_s1;
    u8 *temp_s3;
    u8 *temp_t3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s3 = gBtlSys;
    var_s0 = 0;
loop_5:
    if (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        temp_a1 = var_s0 * 4;
        temp_a2 = (unsigned char **)(((u8 *)&D_0058BF50) + temp_a1);
        temp_v0 = *temp_a2;
        if (temp_v0 != NULL) {
            temp_a0 = (unsigned char **)(&D_0058BF60 + temp_a1);
            *temp_a0 = *(u8 **)((u8 *)temp_v0 + 0x40);
            *(u8 **)((u8 *)(*temp_a2) + 0x40) = NULL;
            *(s32 *)((u8 *)(temp_a1 + temp_s3) + 0xE8C) = (s32) *(s32 *)((u8 *)(*temp_a0) + 0x50);
            amCdFs_Close((s32)(*temp_a2), 0);
            temp_a0_2 = var_s0 * 4;
            *(((u8 *)&D_0058BF50) + temp_a0_2) = 0;
            amFile_Load(*(u8 **)((u8 *)(temp_a0_2 + temp_s3) + 0xE8C));
        }
        var_s0 += 1;
        goto loop_5;
    }
    memset(&D_0058BF70, 0, 0x640);
    func_00228430(0);
    func_002284D0(0);
    var_s2 = 0;
loop_25:
    if (var_s2 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        temp_a0_3 = *(u8 **)((u8 *)temp_s3 + 0xE84);
        temp_v0_2 = ((u8 *)&D_0058BF70) + (var_s2 * 0x64);
        D_00470704 = (int)(temp_a0_3);
        temp_s1 = temp_v0_2 + 0x210;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x04010000);
        D_00470238 = 0;
        if (*func_0021C610() == 2) {
            var_v0 = var_s2 + 0xA2;
        } else {
            var_v0 = var_s2 + 0x9E;
        }
        *(u8 **)((u8 *)temp_s1 + 8) = A2d_AllocObj(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_v0 * 4)), 0);
        *(u8 **)((u8 *)temp_v0_2 + 0x210) = A2d_AllocObj(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_s2 * 4)), 0);
        *(u8 **)((u8 *)temp_s1 + 4) = A2d_AllocObj(*(s32 *)((u8 *)((var_s2 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x160), 0);
        temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)((var_s2 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x10), 0);
        D_0058BF70 = (*(f32 *)(*(f32 *)((u8 *)temp_v0_3 + 0x38))) - *(f32 *)((u8 *)temp_v0_3 + 0x30);
        D_0058BF74 = *(f32 *)((u8 *)temp_v0_3 + 0x3C) - *(f32 *)((u8 *)temp_v0_3 + 0x34);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        memcpy(((u8 *)&D_0058BF70) + (var_s2 * 0x10) + 0x50, temp_v0_3 + 0x40, 0x10);
        func_0022D4B0((s32)(temp_v0_3), 1);
        func_0021C660(var_s2);
        *(u8 **)((u8 *)temp_s1 + 0x4C) = A2d_AllocObj(*(s32 *)((u8 *)((var_s2 * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0xB0), 0);
        *(u8 **)((u8 *)temp_s1 + 0x10) = A2d_AllocObj(*(s32 *)((u8 *)((var_s2 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0xA8), 0);
        if (*(s32 *)((u8 *)((var_s2 * 4) + temp_s3) + 0xE8C) != 0) {
            temp_a3 = *(u8 **)((u8 *)temp_s3 + 0xE9C);
            func_00229800(*(s32 *)(*(s32 *)((u8 *)temp_a3 + 0x1C) + ((D_0046AC40 + var_s2) * 4)),((u8 *)&D_0058BF70) + (var_s2 * 0x60) + 0x90, 0, temp_a3, 0);
            temp_a3_2 = *(u8 **)((u8 *)temp_s3 + 0xE9C);
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)temp_a3_2 + 0x1C) + ((D_0046AC40 + var_s2) * 4)),((u8 *)&D_0058BF70) + (var_s2 * 0x60) + 0xB0, 0, temp_a3_2, 0);
            temp_a3_3 = *(u8 **)((u8 *)temp_s3 + 0xE9C);
            func_00229440(*(s32 *)(*(s32 *)((u8 *)temp_a3_3 + 0x1C) + ((D_0046AC40 + var_s2) * 4)),((u8 *)&D_0058BF70) + (var_s2 * 0x60) + 0xD0, 0, temp_a3_3, 0);
        }
        if (func_0021C280(0x100000) != 0) {
            var_v0_2 = 0x30;
            if (var_s2 & 1) {

            } else {
                var_v0_2 = 0x2F;
            }
            *(s32 *)((u8 *)temp_s1 + 0xC) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x14) + (var_v0_2 * 4)), 0);
        }
        if (*(s16 *)((u8 *)temp_s3 + 0xDF0) == 3) {
            func_0023AEE0(var_s2);
        }
        temp_a0_4 = *(s32 *)((u8 *)((var_s2 * 4) + temp_s3) + 0xEC0);
        if (temp_a0_4 != 0) {
            func_002541D0(temp_a0_4);
        }
        var_s2 += 1;
        goto loop_25;
    }
    func_00228410();
    var_t7 = 0;
loop_32:
    if (var_t7 < 0xE) {
        temp_t6 = var_t7 * 0x10;
        temp_a1_2 = *(u8 **)((u8 *)temp_s3 + 0xE88);
        if (((((u8 *)&D_0058BF70) + temp_t6 + 0x560) != NULL) && (temp_a1_2 != NULL)) {
            temp_t3 = (unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_a1_2 + 0x24)) + 0x10)) + 0x1C) + (var_t7 << 5));
            *(&D_0058C4D0 + temp_t6) = *(f32 *)((u8 *)temp_t3 + 0);
            *(&D_0058C4D4 + temp_t6) = *(f32 *)((u8 *)temp_t3 + 4);
            *(&D_0058C4D8 + temp_t6) = *(f32 *)((u8 *)temp_t3 + 8);
            *(&D_0058C4DC + temp_t6) = *(f32 *)((u8 *)temp_t3 + 0xC);
        }
        var_t7 += 1;
        goto loop_32;
    }
    if (*(s16 *)((u8 *)temp_s3 + 0xDF0) == 3) {
        amTask_Create(func_0023F370, 0, 0x3A10, 0x1000);
    }
}
