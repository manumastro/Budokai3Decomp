/* Draft (not built): func_001F41E0 at 0x001F41E0, size 0x334, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ifier 'sp78' mwccps2.exe Compiler: 5727: var_a1 = (D_0051CD20 << 7) + 0x6B; @ 5726: sp74 = func_00200270(0, sp70, sp78);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F41E0.s */

// src/battle/btb_draw.c func_001F41E0 cerr diff=-1/0
extern f32 func_00200270(s32, f32, f32);
extern void func_00209A90(void *, void *);
extern void *amObject_Create(void *, s32);
s32 amMotion_BindAnim(void *, s32, void *);
void *amMotion_CreateFromObj(void *, s32, s32);
extern s32 D_00469778;
extern s32 D_00469788;
extern void func_001F1190(void);
void func_001F41E0(s32 arg3) {
    f32 sp70;
    f32 sp74;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a1_4;
    s32 var_a1_5;
    s8 *temp_s4;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s4 = (s8 *)(*D_0051CD0C);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp74 = func_00200270(0, sp70, sp78);
    var_a1 = (D_0051CD20 << 7) + 0x6B;
    if (arg3 & 4) {
        var_a1 += 0x100;
    }
    temp_s3 = (char *)func_001A50F0(temp_s4, var_a1);
    var_a1_2 = (D_0051CD20 << 7) + 0x6C;
    if (arg3 & 4) {
        var_a1_2 += 0x100;
    }
    temp_s2 = (char *)func_001A50F0(temp_s4, var_a1_2);
    var_a1_3 = (D_0051CD20 << 7) + 0x6D;
    if (arg3 & 4) {
        var_a1_3 += 0x100;
    }
    temp_s1 = (char *)func_001A50F0(temp_s4, var_a1_3);
    if ((temp_s2 != NULL) && (temp_s3 != NULL) && (temp_s1 != NULL)) {
        temp_v0 = (char *)func_001F5FD0(0x85000000, &D_00469788, 0, func_001F1190);
        *(s32 *)((u8 *)temp_v0 + 0x20) = 0x4800;
        memset(temp_v0 + 0x30, 0, 0x80);
        temp_s0 = temp_v0 + 0x30;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(u8 **)((u8 *)temp_s0 + 8) = temp_s1;
        *(u8 **)((u8 *)temp_s0 + 0xC) = amObject_Create((void *)(temp_s2), (void *)(NULL));
        *(u8 **)((u8 *)temp_s0 + 0x14) = amMotion_CreateFromObj(*(u8 **)((u8 *)temp_s0 + 0xC), 0, 0);
        amMotion_BindAnim(*(u8 **)((u8 *)temp_s0 + 0x14), 0, temp_s3);
        temp_a3 = *(u8 **)((u8 *)temp_s0 + 0x14);
        temp_a2 = temp_a3 + 0x41C;
        if (*(s32 *)((u8 *)temp_a3 + 0x41C) != 0x10000) {
            var_a1_4 = 0;
loop_12:
            if (var_a1_4 < *(s32 *)((u8 *)temp_a3 + 0x418)) {
                temp_v1 = var_a1_4 << 6;
                var_a1_4 += 1;
                *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x30) = -1;
                *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x34) = -1;
                *(s32 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_a2 + 0x10)) + 0x38) = -1;
                goto loop_12;
            }
            *(s32 *)((u8 *)temp_a2 + 0xC) = 0xBF800000;
        }
        *(s32 *)((u8 *)temp_a3 + 0x41C) = 0x10000;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0x424) = 0;
        amMotion_Apply((char *)(*(u8 **)((u8 *)temp_s0 + 0x14)), 0, 0x3F800000);
        *(s32 *)((u8 *)temp_s0 + 0x30) = (s32) (*(s32 *)((u8 *)(((0x10000 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((0x10000 >> 0x10) - 1) * 4) + *(u8 **)((u8 *)temp_s0 + 0x14)) + 0x46C)) + 0x14)) + 8) - 1);
        *(s32 *)((u8 *)temp_v0 + 0x30) = (s32) (arg3 & 2);
    }
    temp_s1_2 = (char *)func_001A50F0(temp_s4, 0x280);
    var_a1_5 = (D_0051CD20 << 7) + 0x64;
    if (arg3 & 4) {
        var_a1_5 += 0x100;
    }
    temp_s2_2 = (char *)func_001A50F0(temp_s4, var_a1_5);
    temp_s0_2 = (char *)func_001A50F0(temp_s4, 0x204);
    if ((temp_s2_2 != NULL) && (temp_s1_2 != NULL) && (temp_s0_2 != NULL)) {
        temp_v0_2 = (char *)func_00209540(temp_s2_2, 0x02000001, 0);
        func_00209A90(temp_v0_2, &sp70);
        temp_v0_3 = (char *)func_001F5FD0(0x85000000, &D_00469778, 0, func_001F1490);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = 0x4800;
        memset(temp_v0_3 + 0x30, 0, 0x80);
        *(u8 **)((u8 *)temp_v0_3 + 0x40) = temp_v0_2;
        temp_s2_3 = temp_v0_3 + 0x30;
        *(u8 **)((u8 *)temp_s2_3 + 0xC) = amObject_Create((void *)(temp_s0_2), (void *)(NULL));
        *(u8 **)((u8 *)temp_s2_3 + 8) = temp_s1_2;
        *(s32 *)((u8 *)temp_v0_3 + 0x30) = (s32) (arg3 & 2);
    }
}
