/* Draft (not built): func_002D7DC0 at 0x002D7DC0, size 0x1F4, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 71 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x1F4
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D7DC0.s */

// src/unk/unk_2D2530.c func_002D7DC0 size diff=71/99
extern s32 D_00456BC8;
void func_002D7DC0(void) {
    u8 sp[0x400];
    f32 sp50;
    f32 sp54;
    s32 sp60;
    s32 temp_v1;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s3;

    var_s2 = (unsigned char *)(gOptionWork);
    *(s64 *)((u8 *)(&sp60) + 0) = (s64) *(s64 *)((u8 *)(&D_00456BC8) + 0);
    *(f32 *)((u8 *)(&sp60) + 8) = (f32) *(f32 *)((u8 *)(&D_00456BC8) + 8);
    var_s1 = *(s32 *)((u8 *)var_s2 + 0x37C);
    if (var_s1 != 3) {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
        sp54 = 40.0f * (f32) var_s1;
        if (((s64) ((s64) **(s16 **)((u8 *)((var_s1 * 4) + var_s2) + 0x3D0) << 0x30) >> 0x30) != (*(s32 *)((u8 *)((var_s1 * 4) + var_s2) + 0x3DC) - 1)) {
            var_s0 = *(u8 **)((u8 *)var_s2 + 0x98);
            var_s3 = (unsigned char *)(gOptionWork);
            func_00228430(0);
            func_00228430(0);
            if (&sp50 != NULL) {
                func_00227A30((Vec4 *)(&sp50));
            }
            temp_a0 = *(u8 **)((u8 *)var_s3 + 0xC);
            D_00470704 = (int)(temp_a0);
            D_00470708 = 0;
            D_0047070C = 0;
            amModel_SetCurrent((s32)(temp_a0), 0);
            D_00470238 = 0;
            func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
            func_00228410();
            func_0022CD00((Model2D2530 *)(var_s0));
            func_00228410();
        }
        temp_v1 = var_s1 * 4;
        sp50 = *(f32 *)((u8 *)(temp_v1 + sp) + 0x60);
        if (**(s16 **)((u8 *)(temp_v1 + var_s2) + 0x3D0) != 0) {
            var_s0 = *(u8 **)((u8 *)var_s2 + 0x94);
            var_s1 = (s32) gOptionWork;
            func_00228430(0);
            func_00228430(0);
            if (&sp50 != NULL) {
                func_00227A30((Vec4 *)(&sp50));
            }
            temp_a0_2 = *(u8 **)((u8 *)var_s1 + 0xC);
            D_00470704 = (int)(temp_a0_2);
            D_00470708 = 0;
            D_0047070C = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0);
            D_00470238 = 0;
            func_0022C060((Model2D2530 *)(var_s0), 0x3F800000);
            func_00228410();
            func_0022CD00((Model2D2530 *)(var_s0));
            func_00228410();
        }
    }
}

/* Similar function already in C: func_002D34E0 (src/unk/unk_2D2530.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void func_002D34E0(void) {
    Obj2D2530 *s = gOptionWork;
    Model2D2530 *m;

    if (s->f37C == 0) {
        if (*s->f3EC != s->f3F8 - 1) {
            DrawModel(gOptionWork, s->f31C, 0, 0);
        }
        if (*s->f3EC != 0) {
            m = s->f318;
            DrawModel(gOptionWork, m, 0, 0);
        }
    }
}
#endif
