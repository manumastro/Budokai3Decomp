/* Draft (not built): func_002D12B0 at 0x002D12B0, size 0x210, segment unk/unk_2D04B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x210
 * Original: asm/nonmatchings/unk/unk_2D04B0/func_002D12B0.s */

// src/unk/unk_2D04B0.c func_002D12B0 size diff=63/125
s32 amAdx_GetStat(s32);
s32 func_0012EAE0(s32);
s32 func_0022C060(void *, s32);
extern s64 D_00470158;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0618;
extern f32 gFrameDelta;
extern void A2d_FlushList(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern void Obj_SetF3C();
extern void func_002D0C90(void);
void func_002D12B0(u8 *arg0) {
    u8 sp[0x400];
    u8 *sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s64 sp78;
    s32 *var_v1_2;
    f32 temp_f1;
    s32 var_s1;
    s32 var_v0;
    u8 **var_s0;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_s4;

    var_s4 = arg0;
    var_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)var_s3 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    var_v1 = &sp60;
    D_00470238 = 0;
    var_v0 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(u8 **)((u8 *)var_s3 + 8);
    sp64 = *(s32 *)((u8 *)var_s3 + 0xC);
    sp68 = *(s32 *)((u8 *)var_s3 + 0x10);
    sp6C = *(s32 *)((u8 *)var_s3 + 0x14);
    sp70 = *(s32 *)((u8 *)var_s3 + 0x24);
    sp74 = *(s32 *)((u8 *)var_s3 + 0x2C);
    temp_a0_2 = *(u8 **)((u8 *)var_s3 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x1000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp60;
    do {
        var_s2 = *var_s0;
        if (var_s2 != NULL) {
            func_0022C060(var_s2, 0x3F800000);
            func_0022CD00(var_s2);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 6);
    if ((s32) *(u8 *)((u8 *)var_s3 + 0x37) >= 3) {
        func_002D0530(var_s3);
    }
    A2d_FlushList();
    if ((*(u8 *)((u8 *)var_s3 + 0x44) == 0) && (amAdx_GetStat(*(s32 *)((u8 *)var_s3 + 0x40)) == 5)) {
        var_s0 = (u8 **) (func_0012EAE0(0x20) & 1);
        *(u8 *)((u8 *)var_s3 + 0x3A) = (u8) (var_s0 + 7);
        Obj_SetF3C(*(s32 *)((u8 *)var_s3 + 0x30), *(u8 *)((u8 *)var_s3 + 0x3A));
        sp78 = D_00470158;
        amAdx_PlayAfs(1, *(s32 *)((u8 *)(((s32) var_s0 * 4) + sp) + 0x78) | 0x20000, 0);
        *(s32 *)((u8 *)var_s3 + 0x40) = (s32) M2C_ERROR(/* Read from unset register $v0 */);
        amAdx_SetVolume(*(s32 *)((u8 *)var_s3 + 0x40), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)var_s3 + 0x40), 0);
        *(u8 *)((u8 *)var_s3 + 0x44) = 1U;
    }
    temp_f1 = *(f32 *)((u8 *)var_s3 + 0x3C) - gFrameDelta;
    *(f32 *)((u8 *)var_s3 + 0x3C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(f32 *)((u8 *)var_s3 + 0x3C) = 0.0f;
        *(u8 *)((u8 *)var_s3 + 0x37) = 4U;
        var_v1_2 = (int *)(&func_002D0C90);
        if (&func_002D0C90 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)var_s4 + 0x1C) = var_v1_2;
    }
}
