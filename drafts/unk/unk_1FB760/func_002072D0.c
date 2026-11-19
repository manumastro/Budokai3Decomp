/* Draft (not built): func_002072D0 at 0x002072D0, size 0x4F4, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oes not match 'func_00208BD0(unsigned char *)' @ 664: temp_v0_3 = func_00208BD0((u8 *)(&spA0), &sp90, temp_a2, temp_a3);
 * Original: asm/nonmatchings/unk/unk_1FB760/func_002072D0.s */

// src/unk/unk_1FB760.c func_002072D0 cerr diff=-1/0
extern u8 *func_00208BD0(u8 *);
extern f32 D_0051D9A8;
s32 func_002072D0(u8 *arg0) {
    s32 sp70;
    f32 sp74;
    s32 sp78;
    f32 sp7C;
    s32 sp80;
    f32 sp90;
    s32 sp94;
    f32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 *spA4;
    u8 *spA8;
    s32 *spAC;
    f32 *spB0;
    s32 *spB4;
    u8 *spB8;
    u8 *spBC;
    s32 spC0;
    s32 *temp_a2_2;
    s32 *temp_v0_3;
    s32 *var_s1;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_v0;
    s32 temp_v0_2;
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
    func_00146F10((void *)(&spC0), (void *)(temp_s2 + 0x20),(*(f32 *)(D_0051D9AC)));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s1 = *(s32 **)((u8 *)arg0 + 0x28);
loop_35:
    if ((s32)(var_s1) != (s32)((arg0 + 0x30))) {
        *(f32 *)((u8 *)var_s1 + 0x24) = (f32) (*(f32 *)((u8 *)var_s1 + 0x24) + (*(f32 *)((u8 *)temp_s3 + 0x78) * D_0051D9A8));
loop_33:
        if (!(*(f32 *)((u8 *)var_s1 + 0x24) < 1.0f)) {
            *(f32 *)((u8 *)var_s1 + 0x24) = (f32) (*(f32 *)((u8 *)var_s1 + 0x24) - 1.0f);
            temp_f1_2 = *(f32 *)((u8 *)temp_s3 + 0x74);
            if ((temp_f1_2 != -1.0f) && ((f32) *(s32 *)((u8 *)var_s1 + 0x4C) < temp_f1_2)) {
                sp70 = 0;
                sp74 = 1.0f;
                sp78 = 0;
                sp7C = 1.0f;
                if ((func_0012EAE0(8) & 0xFF) >= 0) {

                }
                M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                if ((func_0012EAE0(8) & 0xFF) >= 0) {

                }
                sp94 = 0;
                M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
                sp9C = 0x3F800000;
                sp98 = M2C_ERROR(/* unknown instruction: msub.s $f0, $f0, $f1 */);
                sp90 = M2C_ERROR(/* unknown instruction: msub.s $f20, $f0, $f1 */);
                func_0013B160(D_003F0800);
                func_00141CF0(0, temp_s2 + 0x30, 0);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
                M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
                M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
                M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
                temp_v0 = func_0012EAE0(8) & 0xFF;
                if (temp_v0 >= 0) {
                    var_f3 = (f32) temp_v0;
                } else {
                    var_f3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                }
                func_00146F10(&sp80, &sp70, *(f32 *)((u8 *)temp_s3 + 0x5C) + (*(f32 *)((u8 *)temp_s3 + 0x60) * (var_f3 / 255.0f)));
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                temp_v0_2 = func_0012EAE0(8) & 0xFF;
                if (temp_v0_2 >= 0) {
                    var_f3_2 = (f32) temp_v0_2;
                } else {
                    var_f3_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                }
                func_00146F10(&sp80, &sp70, *(f32 *)((u8 *)temp_s3 + 0x68) + (*(f32 *)((u8 *)temp_s3 + 0x6C) * (var_f3_2 / 255.0f)));
                temp_a3 = temp_s2 + 0x10;
                temp_a2 = temp_s2 + 0x20;
                spA0 = *(s32 *)((u8 *)arg0 + 0x10);
                spA4 = var_s1;
                spA8 = *(u8 **)((u8 *)var_s1 + 0x14);
                spB8 = temp_a3;
                spBC = temp_a2;
                spB0 = &sp90;
                spB4 = &sp80;
                temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x14)) + 4) & 0xFFFF0000;
                switch (temp_v1) {                  /* irregular */
                case 0x10000:
                    temp_v0_3 = func_00208BD0((u8 *)(&spA0), &sp90, temp_a2, temp_a3);
                    *(s32 **)((u8 *)temp_v0_3 + 0x18) = spA4;
                    *(s32 **)((u8 *)temp_v0_3 + 4) = (s32 *) *(s32 **)((u8 *)spA4 + 0x48);
                    *(s32 **)((u8 *)temp_v0_3 + 0) = (int *)(**(s32 **)((u8 *)spA4 + 0x48));
                    **(s32 **)((u8 *)spA4 + 0x48) = (int)(temp_v0_3);
                    *(s32 **)((u8 *)spA4 + 0x48) = temp_v0_3;
                    *(s32 *)((u8 *)spA4 + 0x4C) = (s32) (*(s32 *)((u8 *)spA4 + 0x4C) + 1);
                    spA4 = temp_v0_3;
                    spA8 = *(u8 **)((u8 *)temp_v0_3 + 0x14);
                    spAC = *(s32 **)((u8 *)temp_v0_3 + 0x20);
                    break;
                case 0x20000:
                    temp_a2_2 = (int *)(*(((u8 *)&D_00526440) + (D_00470668 * 4)));
                    D_00470668 += 1;
                    if (D_00470668 >= 0x800) {
                        D_00470668 = 0;
                    }
                    *(s32 **)((u8 *)temp_a2_2 + 4) = (s32 *) *(s32 **)((u8 *)spA4 + 0x48);
                    *(s32 **)((u8 *)temp_a2_2 + 0) = (int *)(**(s32 **)((u8 *)spA4 + 0x48));
                    **(s32 **)((u8 *)spA4 + 0x48) = (int)(temp_a2_2);
                    *(s32 **)((u8 *)spA4 + 0x48) = temp_a2_2;
                    *(s32 *)((u8 *)spA4 + 0x4C) = (s32) (*(s32 *)((u8 *)spA4 + 0x4C) + 1);
                    spAC = temp_a2_2;
                    *(((u8 *)&D_0044B860) + (*(u16 *)((u8 *)spA8 + 4) * 0x10))(&spA0, spA4, temp_a2_2, temp_a3);
                    break;
                }
            }
            goto loop_33;
        }
        var_s1 = *(s32 **)((u8 *)var_s1 + 0);
        goto loop_35;
    }
    return 0;
}
