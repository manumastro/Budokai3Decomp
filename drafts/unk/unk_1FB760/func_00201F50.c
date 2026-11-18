/* Draft (not built): func_00201F50 at 0x00201F50, size 0x248, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); al implicit conversion from 'int' to 'int *' mwccps2.exe Compiler: @ 409: temp_v0_2 = *(&D_00526440 + (D_00470668 * 4));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00201F50.s */

// src/unk/unk_1FB760.c func_00201F50 cerr diff=-1/0
extern f32 D_0051D9A8;
s32 func_00201F50(u8 *arg0) {
    u8 *spA0;
    s32 spB0;
    u8 *spB4;
    u8 *spB8;
    s32 *spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 *temp_v0_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    u8 *temp_a2;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *var_s3;

    temp_v0 = *(u8 **)((u8 *)arg0 + 0x14);
    spA0 = temp_v0;
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x20);
    *(f32 *)((u8 *)temp_v1 + 8) = (f32) (*(f32 *)((u8 *)temp_v1 + 8) + D_0051D9A8);
    temp_f1 = *(f32 *)((u8 *)temp_v0 + 0x30);
    if ((temp_f1 != -1.0f) && !(*(f32 *)((u8 *)temp_v1 + 8) < temp_f1)) {
        return 1;
    }
    var_s3 = *(u8 **)((u8 *)arg0 + 0x28);
    temp_s2 = arg0 + 0x30;
    if (var_s3 != temp_s2) {
        do {
            temp_f1_2 = *(f32 *)((u8 *)var_s3 + 0x24) + (*(f32 *)((u8 *)spA0 + 0x38) * D_0051D9A8);
            *(f32 *)((u8 *)var_s3 + 0x24) = temp_f1_2;
            if (!(temp_f1_2 < 1.0f)) {
                do {
                    *(f32 *)((u8 *)var_s3 + 0x24) = (f32) (*(f32 *)((u8 *)var_s3 + 0x24) - 1.0f);
                    temp_f1_3 = *(f32 *)((u8 *)spA0 + 0x34);
                    if ((temp_f1_3 != -1.0f) && ((f32) *(s32 *)((u8 *)var_s3 + 0x4C) < temp_f1_3)) {
                        spB0 = *(s32 *)((u8 *)arg0 + 0x10);
                        spB4 = var_s3;
                        spB8 = *(u8 **)((u8 *)var_s3 + 0x14);
                        spC8 = 0;
                        spCC = 0;
                        spC0 = 0;
                        spC4 = 0;
                        temp_v0_2 = *(&D_00526440 + (D_00470668 * 4));
                        D_00470668 += 1;
                        if (D_00470668 >= 0x800) {
                            D_00470668 = 0;
                        }
                        temp_a2 = spB4;
                        *(s32 **)((u8 *)temp_v0_2 + 4) = (s32 *) *(s32 **)((u8 *)temp_a2 + 0x48);
                        *(s32 **)((u8 *)temp_v0_2 + 0) = **(s32 **)((u8 *)temp_a2 + 0x48);
                        **(s32 **)((u8 *)temp_a2 + 0x48) = temp_v0_2;
                        *(s32 **)((u8 *)temp_a2 + 0x48) = temp_v0_2;
                        *(s32 *)((u8 *)temp_a2 + 0x4C) = (s32) (*(s32 *)((u8 *)temp_a2 + 0x4C) + 1);
                        spBC = temp_v0_2;
                        *(&D_0044B860 + (*(u16 *)((u8 *)spB8 + 4) * 0x10))(&spB0, &D_0044B860, temp_a2);
                    }
                } while (!(*(f32 *)((u8 *)var_s3 + 0x24) < 1.0f));
            }
            var_s3 = *(u8 **)((u8 *)var_s3 + 0);
        } while (var_s3 != temp_s2);
    }
    return 0;
}
