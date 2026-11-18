/* Draft (not built): func_00201300 at 0x00201300, size 0x3D4, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 435: temp_a2 = *(&D_00526440 + (D_00470668 * 4)); @ 382: if (var_s2 != temp_s1) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00201300.s */

// src/unk/unk_1FB760.c func_00201300 cerr diff=-1/0
extern u32 func_0012EAE0(s32);
extern s32 D_003F0830;
extern f32 D_0051D9A8;
s32 func_00201300(u8 *arg0) {
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spBC;
    s32 spC0;
    u8 *spC4;
    u8 *spC8;
    s32 *spCC;
    f32 *spD0;
    f32 *spD4;
    s32 *spD8;
    s32 *spDC;
    s32 *temp_a2;
    f32 temp_f1;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *temp_v1;
    u8 *var_s2;

    temp_s1 = (s32)(arg0 + 0x30);
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x20);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x14);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) (*(f32 *)((u8 *)temp_v1 + 8) + D_0051D9A8);
    var_s2 = *(u8 **)((u8 *)arg0 + 0x28);
    spD8 = &D_003F0830;
    spDC = &D_003F0830;
    if (var_s2 != temp_s1) {
        do {
            if ((f32) *(s32 *)((u8 *)var_s2 + 0x4C) < *(f32 *)((u8 *)temp_s3 + 0x30)) {
                temp_f1 = *(f32 *)((u8 *)var_s2 + 0x24) + (*(f32 *)((u8 *)temp_s3 + 0x34) * D_0051D9A8);
                *(f32 *)((u8 *)var_s2 + 0x24) = temp_f1;
                if (!(temp_f1 < 1.0f)) {
                    do {
                        *(f32 *)((u8 *)var_s2 + 0x24) = (f32) (*(f32 *)((u8 *)var_s2 + 0x24) - 1.0f);
                        temp_s0 = *(u8 **)((u8 *)temp_s3 + 0x24);
                        temp_v0 = func_0012EAE0(0x20);
                        if (temp_v0 >= 0) {
                            var_f2 = (f32) temp_v0;
                        } else {
                            var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                        }
                        spB0 = (var_f2 / 4294967296.0f) - 0.5f;
                        temp_v0_2 = func_0012EAE0(0x20);
                        if (temp_v0_2 >= 0) {
                            var_f2_2 = (f32) temp_v0_2;
                        } else {
                            var_f2_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
                        }
                        spB4 = (var_f2_2 / 4294967296.0f) - 0.5f;
                        temp_v0_3 = func_0012EAE0(0x20);
                        if (temp_v0_3 >= 0) {
                            var_f2_3 = (f32) temp_v0_3;
                        } else {
                            var_f2_3 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
                        }
                        spB8 = (var_f2_3 / 4294967296.0f) - 0.5f;
                        spBC = 0x3F800000;
                        func_00146F10(&spB0, &spB0, *(f32 *)((u8 *)temp_s0 + 0x50));
                        temp_v0_4 = func_0012EAE0(0x20);
                        if (temp_v0_4 >= 0) {
                            var_f3 = (f32) temp_v0_4;
                        } else {
                            var_f3 = 2.0f * (f32) (((u32) temp_v0_4 >> 1) | (temp_v0_4 & 1));
                        }
                        spA0 = *(f32 *)((u8 *)temp_s3 + 0x44) + (*(f32 *)((u8 *)temp_s3 + 0x40) * (var_f3 / 4294967296.0f));
                        temp_v0_5 = func_0012EAE0(0x20);
                        if (temp_v0_5 >= 0) {
                            var_f3_2 = (f32) temp_v0_5;
                        } else {
                            var_f3_2 = 2.0f * (f32) (((u32) temp_v0_5 >> 1) | (temp_v0_5 & 1));
                        }
                        spA8 = *(f32 *)((u8 *)temp_s3 + 0x4C) + (*(f32 *)((u8 *)temp_s3 + 0x48) * (var_f3_2 / 4294967296.0f));
                        spA4 = *(f32 *)((u8 *)temp_s3 + 0x38);
                        spAC = 0x3F800000;
                        spC0 = *(s32 *)((u8 *)arg0 + 0x10);
                        spC4 = var_s2;
                        spC8 = *(u8 **)((u8 *)var_s2 + 0x14);
                        spD0 = &spB0;
                        spD4 = &spA0;
                        temp_a2 = *(&D_00526440 + (D_00470668 * 4));
                        D_00470668 += 1;
                        if (D_00470668 >= 0x800) {
                            D_00470668 = 0;
                        }
                        temp_a1 = spC4;
                        *(s32 **)((u8 *)temp_a2 + 4) = (s32 *) *(s32 **)((u8 *)temp_a1 + 0x48);
                        *(s32 **)((u8 *)temp_a2 + 0) = **(s32 **)((u8 *)temp_a1 + 0x48);
                        **(s32 **)((u8 *)temp_a1 + 0x48) = temp_a2;
                        *(s32 **)((u8 *)temp_a1 + 0x48) = temp_a2;
                        *(s32 *)((u8 *)temp_a1 + 0x4C) = (s32) (*(s32 *)((u8 *)temp_a1 + 0x4C) + 1);
                        spCC = temp_a2;
                        *(&D_0044B860 + (*(u16 *)((u8 *)spC8 + 4) * 0x10))(&spC0, temp_a1, temp_a2);
                    } while (!(*(f32 *)((u8 *)var_s2 + 0x24) < 1.0f));
                }
            }
            var_s2 = *(u8 **)((u8 *)var_s2 + 0);
        } while (var_s2 != temp_s1);
    }
    return 0;
}
