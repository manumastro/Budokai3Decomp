/* Draft (not built): func_001E6890 at 0x001E6890, size 0x450, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); hter *' to 'int' mwccps2.exe Compiler: @ 4082: func_001E2190(temp_s1,(struct Fighter *)(*(s32 *)((u8 *)temp_s2 + 0xC)));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E6890.s */

// src/unk/unk_1D5B30.c func_001E6890 cerr diff=-1/0
void func_001E6890(u8 *arg0) {
    s32 saved_reg_s0;
    f32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 spA0;
    s32 spA4;
    s32 spC0;
    s32 spD0;
    s32 spD4;
    f32 var_f0;
    f32 var_f20;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s8 var_v0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    var_s0 = saved_reg_s0;
    temp_s3 = (unsigned char *)(gBattle);
    var_f20 = 0.0f;
    temp_s4 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_v0 = *(s32 *)((u8 *)temp_s3 + 0x88EC);
    temp_s1 = *(u8 **)((u8 *)temp_s4 + 0x568);
    temp_s2 = arg0 + 0x30;
    if ((temp_v0 == 0) && (temp_v0 == 0)) {
        if (*(s8 *)((u8 *)temp_s3 + 0x8AB2) != 0) {
            if (*(f32 *)((u8 *)temp_s3 + 0x891C) <= 0.0f) {
                goto block_6;
            }
            var_v0 = *(s8 *)((u8 *)temp_s3 + 0x8AB3);
        } else {
block_6:
            var_v0 = -1;
        }
        if ((*(s32 *)((u8 *)temp_s1 + 0x1350) != var_v0) || (*(s16 *)((u8 *)temp_s3 + 0x8944) != 0)) {
            if (!(*(f32 *)((u8 *)temp_s4 + 0x64C) <= 0.0f)) {
                var_f0 = *(f32 *)((u8 *)temp_s2 + 4) + (*(f32 *)((u8 *)temp_s3 + 0x88F0) * *(f32 *)((u8 *)temp_s1 + 0xC9C));
            } else {
                var_f0 = *(f32 *)((u8 *)temp_s2 + 4) + *(f32 *)((u8 *)temp_s3 + 0x88F0);
            }
            *(f32 *)((u8 *)temp_s2 + 4) = var_f0;
        }
    }
    temp_v1 = *(s32 *)((u8 *)temp_s2 + 8);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_001C8480((s32)(temp_s1), (s32)(*(s32 *)((u8 *)temp_s2 + 0xC)));
        func_001E2190(temp_s1,(struct Fighter *)(*(s32 *)((u8 *)temp_s2 + 0xC)));
        *(s64 *)((u8 *)temp_s4 + 0x5F8) = 0x44;
        *(s32 *)((u8 *)temp_s4 + 0x600) = 0x3F800000;
        func_001E6E90(temp_s4, 3);
        *(s32 *)((u8 *)temp_s3 + 0x8928) = 0xFFFFFF;
        *(s32 *)((u8 *)temp_s3 + 0x8930) = 0x3F800000;
        spD0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
        spD4 = 3;
        Sp_CallHandler(3, &spC0);
        spD0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
        Sp_CallHandler(5, &spC0);
        *(s32 *)((u8 *)temp_s2 + 0x14) = (s32) *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0xCBD);
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0xCBD) = 1;
        if (*(s16 *)((u8 *)temp_s3 + 0x8944) == 0) {
            *(f32 *)((u8 *)temp_s1 + 0xC9C) = 0.0f;
        }
        *(f32 *)((u8 *)temp_s2 + 4) = 0.0f;
        *(s32 *)((u8 *)temp_s2 + 8) = 1;
    default:                                        /* switch 1 */
block_32:
        temp_v1_2 = *(s32 *)((u8 *)temp_s2 + 8);
        switch (temp_v1_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_s0 = 0xFFFFFF;
            var_f20 = 1.0f;
            break;
        case 1:                                     /* switch 2 */
            var_s0 = 0xFFFFFF;
            var_f20 = 1.0f;
            break;
        case 2:                                     /* switch 2 */
            var_f20 = 0.0f;
            var_s0 = 0;
            break;
        case 3:                                     /* switch 2 */
            var_s0 = 0xFFFFFF;
            var_f20 = (15.0f - *(f32 *)((u8 *)temp_s2 + 4)) / 15.0f;
            break;
        }
        if (!(var_f20 <= 1.0f)) {
            var_f20 = 1.0f;
        } else if (var_f20 < 0.0f) {
            var_f20 = 0.0f;
        }
        sp84 = 0x1000;
        sp80 = var_f20;
        sp88 = var_s0;
        sp8C = var_s0;
        func_001E11E0((s32)(temp_s1), (void *)(&sp80));
        return;
    case 1:                                         /* switch 1 */
        if (!(*(f32 *)((u8 *)temp_s2 + 4) < 4.0f)) {
            *(s64 *)((u8 *)temp_s4 + 0x5F8) = 0x42;
            *(s32 *)((u8 *)temp_s4 + 0x600) = 0;
            func_001E6E90(temp_s4, -1);
            *(s32 *)((u8 *)temp_s3 + 0x8928) = 0;
            *(s32 *)((u8 *)temp_s3 + 0x8930) = 0x3F800000;
            *(s8 *)((u8 *)temp_s4 + 0x66D) = 1;
            *(f32 *)((u8 *)temp_s2 + 4) = 0.0f;
            *(s32 *)((u8 *)temp_s2 + 8) = 2;
        }
        goto block_32;
    case 2:                                         /* switch 1 */
        if (!(*(f32 *)((u8 *)temp_s2 + 4) < 2.0f)) {
            if (*(s16 *)((u8 *)temp_s3 + 0x8944) == 0) {
                *(f32 *)((u8 *)temp_s1 + 0xC9C) = 1.0f;
            }
            *(s8 *)((u8 *)temp_s1 + 0xCBD) = 0;
            temp_a2 = *(s32 *)((u8 *)temp_s2 + 0x14);
            *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0xCBD) = (s8) temp_a2;
            *(s32 *)((u8 *)temp_s3 + 0x8928) = 0x200800;
            spA0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            spA4 = 0;
            Sp_CallHandler(3, &sp90);
            spA0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
            spA4 = 1;
            Sp_CallHandler(4, &sp90);
            *(f32 *)((u8 *)temp_s2 + 4) = 0.0f;
            *(s32 *)((u8 *)temp_s2 + 8) = 3;
        }
        goto block_32;
    case 3:                                         /* switch 1 */
        if (!(*(f32 *)((u8 *)temp_s2 + 4) < 15.0f)) {
            amTask_Kill(arg0);
            return;
        }
        goto block_32;
    }
}
