/* Draft (not built): func_00207D90 at 0x00207D90, size 0x4C8, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oes not match 'func_00208BD0(unsigned char *)' @ 664: temp_v0_6 = func_00208BD0((u8 *)(&sp90), &sp80, temp_a2, temp_a3);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00207D90.s */

// src/unk/unk_1FB760.c func_00207D90 cerr diff=-1/0
extern u8 *func_00208BD0(u8 *);
extern f32 D_0051D9A8;
s32 func_00207D90(u8 *arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    s32 *sp94;
    u8 *sp98;
    s32 *sp9C;
    s32 *spA0;
    s32 *spA4;
    u8 *spA8;
    u8 *spAC;
    s32 spB0;
    s32 *temp_a2_2;
    s32 *temp_v0_6;
    s32 *var_s1;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x20);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x14);
    temp_f2 = *(f32 *)((u8 *)temp_s2 + 8) + D_0051D9A8;
    *(f32 *)((u8 *)temp_s2 + 8) = temp_f2;
    if (temp_f2 <= 0.0f) {
        return 0;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s3 + 0x50);
    if ((temp_f1 != -1.0f) && !(temp_f2 < temp_f1)) {
        return 1;
    }
    func_00146F10((void *)(&spB0), (void *)(temp_s2 + 0x20),(*(f32 *)(D_0051D9AC)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s1 = *(s32 **)((u8 *)arg0 + 0x28);
loop_39:
    if ((s32)(var_s1) != (s32)((arg0 + 0x30))) {
        *(f32 *)((u8 *)var_s1 + 0x24) = (f32) (*(f32 *)((u8 *)var_s1 + 0x24) + (*(f32 *)((u8 *)temp_s3 + 0x78) * D_0051D9A8));
loop_37:
        if (!(*(f32 *)((u8 *)var_s1 + 0x24) < 1.0f)) {
            *(f32 *)((u8 *)var_s1 + 0x24) = (f32) (*(f32 *)((u8 *)var_s1 + 0x24) - 1.0f);
            temp_f1_2 = *(f32 *)((u8 *)temp_s3 + 0x74);
            if ((temp_f1_2 != -1.0f) && ((f32) *(s32 *)((u8 *)var_s1 + 0x4C) < temp_f1_2)) {
                temp_v0 = func_0012EAE0(8) & 0xFF;
                if (temp_v0 >= 0) {
                    var_f2 = (f32) temp_v0;
                } else {
                    var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                }
                sp60 = (var_f2 / 255.0f) - 0.5f;
                temp_v0_2 = func_0012EAE0(8) & 0xFF;
                if (temp_v0_2 >= 0) {
                    var_f2_2 = (f32) temp_v0_2;
                } else {
                    var_f2_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                }
                sp64 = (var_f2_2 / 255.0f) - 0.5f;
                temp_v0_3 = func_0012EAE0(8) & 0xFF;
                if (temp_v0_3 >= 0) {
                    var_f2_3 = (f32) temp_v0_3;
                } else {
                    var_f2_3 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                }
                sp6C = 0x3F800000;
                sp68 = (var_f2_3 / 255.0f) - 0.5f;
                func_00146F30(&sp60);
                temp_v0_4 = func_0012EAE0(8) & 0xFF;
                if (temp_v0_4 >= 0) {
                    var_f3 = (f32) temp_v0_4;
                } else {
                    var_f3 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
                }
                func_00146F10(&sp70, &sp60, *(f32 *)((u8 *)temp_s3 + 0x5C) + (*(f32 *)((u8 *)temp_s3 + 0x60) * (var_f3 / 255.0f)));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                temp_v0_5 = func_0012EAE0(8) & 0xFF;
                if (temp_v0_5 >= 0) {
                    var_f3_2 = (f32) temp_v0_5;
                } else {
                    var_f3_2 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
                }
                func_00146F10(&sp70, &sp60, *(f32 *)((u8 *)temp_s3 + 0x68) + (*(f32 *)((u8 *)temp_s3 + 0x6C) * (var_f3_2 / 255.0f)));
                temp_a3 = temp_s2 + 0x10;
                temp_a2 = temp_s2 + 0x20;
                sp90 = *(s32 *)((u8 *)arg0 + 0x10);
                sp94 = var_s1;
                sp98 = *(u8 **)((u8 *)var_s1 + 0x14);
                spA8 = temp_a3;
                spAC = temp_a2;
                spA0 = &sp80;
                spA4 = &sp70;
                temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x14)) + 4) & 0xFFFF0000;
                switch (temp_v1) {                  /* irregular */
                case 0x10000:
                    temp_v0_6 = func_00208BD0((u8 *)(&sp90), &sp80, temp_a2, temp_a3);
                    *(s32 **)((u8 *)temp_v0_6 + 0x18) = sp94;
                    *(s32 **)((u8 *)temp_v0_6 + 4) = (s32 *) *(s32 **)((u8 *)sp94 + 0x48);
                    *(s32 **)((u8 *)temp_v0_6 + 0) = (int *)(**(s32 **)((u8 *)sp94 + 0x48));
                    **(s32 **)((u8 *)sp94 + 0x48) = (int)(temp_v0_6);
                    *(s32 **)((u8 *)sp94 + 0x48) = temp_v0_6;
                    *(s32 *)((u8 *)sp94 + 0x4C) = (s32) (*(s32 *)((u8 *)sp94 + 0x4C) + 1);
                    sp94 = temp_v0_6;
                    sp98 = *(u8 **)((u8 *)temp_v0_6 + 0x14);
                    sp9C = *(s32 **)((u8 *)temp_v0_6 + 0x20);
                    break;
                case 0x20000:
                    temp_a2_2 = (int *)(*(((u8 *)&D_00526440) + (D_00470668 * 4)));
                    D_00470668 += 1;
                    if (D_00470668 >= 0x800) {
                        D_00470668 = 0;
                    }
                    *(s32 **)((u8 *)temp_a2_2 + 4) = (s32 *) *(s32 **)((u8 *)sp94 + 0x48);
                    *(s32 **)((u8 *)temp_a2_2 + 0) = (int *)(**(s32 **)((u8 *)sp94 + 0x48));
                    **(s32 **)((u8 *)sp94 + 0x48) = (int)(temp_a2_2);
                    *(s32 **)((u8 *)sp94 + 0x48) = temp_a2_2;
                    *(s32 *)((u8 *)sp94 + 0x4C) = (s32) (*(s32 *)((u8 *)sp94 + 0x4C) + 1);
                    sp9C = temp_a2_2;
                    *(((u8 *)&D_0044B860) + (*(u16 *)((u8 *)sp98 + 4) * 0x10))(&sp90, sp94, temp_a2_2, temp_a3);
                    break;
                }
            }
            goto loop_37;
        }
        var_s1 = *(s32 **)((u8 *)var_s1 + 0);
        goto loop_39;
    }
    return 0;
}
