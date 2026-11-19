/* Draft (not built): func_00221950 at 0x00221950, size 0x4B4, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 182: 8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x1C)), &spB0, (void *)((f32)(s32)(0)));
 * Original: asm/nonmatchings/unk/unk_21D260/func_00221950.s */

// src/unk/unk_21D260.c func_00221950 cerr diff=-1/0
s32 func_0021C460(s16);
extern s32 D_0044F720;
extern s32 D_0044F810;
extern s32 D_0046FE10;
extern s32 D_0046FE18;
void func_00221950(u8 *arg0) {
    s32 spB0;
    s16 spC8;
    f32 spD4;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    f32 spEC;
    s32 spF0;
    s32 spF4;
    f32 spF8;
    f32 spFC;
    s32 *var_s0;
    s32 *var_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 var_f20;
    s16 temp_a0_2;
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s3;
    s32 var_s5;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a3;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gBtlSys);
    if ((*(s16 *)((u8 *)temp_s1 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s1 + 0xE46) == 0)) {
        var_s0 = &D_0044F720;
    } else {
        var_s0 = (int *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s1 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s1 + 0xDF0) * 0x10));
    }
    if ((*(s16 *)((u8 *)temp_s1 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s1 + 0xE46) == 0)) {
        var_s4 = &D_0044F810;
    } else {
        var_s4 = (int *)(*(s32 *)(*(&D_0046FE18 + (*(s16 *)((u8 *)temp_s1 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s1 + 0xDF0) * 4)));
    }
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xED8);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x04040000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04040000);
    D_00470238 = 0;
    temp_v1 = *(s32 *)((u8 *)var_s0 + 4);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_a0_2 = *(s16 *)((u8 *)temp_s1 + 0xE42);
        if (temp_a0_2 == -1) {
            func_00228430(0);
            func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x1C)), &spB0, (void *)((f32)(s32)(0)));
            func_00228410();
        } else {
            temp_s2 = (func_0021C460(temp_a0_2) != 0) ? 3 : 2;
            func_00228430(0);
            func_0022B900((s32)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C) + (temp_s2 * 4))), &spB0, (void *)((f32)(s32)(0)));
            func_00228410();
        }
        break;
    case 1:
        func_00228430(0);
        func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x10)), &spB0, (void *)((f32)(s32)(0)));
        func_00228410();
        break;
    case 2:
        func_00228430(0);
        func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x1C)), &spB0, (void *)((f32)(s32)(0)));
        func_00228410();
        break;
    case 3:
        func_00228430(0);
        func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x14)), &spB0, (void *)((f32)(s32)(0)));
        func_00228410();
        break;
    case 4:
        func_00228430(0);
        func_0022B900((s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C)) + 0x18)), &spB0, (void *)((f32)(s32)(0)));
        func_00228410();
        break;
    }
    spD4 -= ((*(f32 *)((u8 *)var_s0 + 0xC) / 2.0f) + spE4) - 15.0f;
    func_0022C6B0(&spB0);
    var_s5 = 0;
    var_f20 = 10.0f + (spD4 + spEC);
    if (*(s32 *)((u8 *)var_s0 + 0) > 0) {
        do {
            var_s3 = 0xA;
            if (*(s16 *)((u8 *)arg0 + 8) == var_s5) {
                var_s3 = 8;
            }
            func_00228430(0);
            func_0022B900((s32)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xEDC)) + 0x1C) + (var_s3 * 4))), &spB0, (void *)((f32)(s32)(0)));
            func_00228410();
            if ((*(s32 *)((u8 *)var_s4 + 4) == 1) && (*(s32 *)((u8 *)arg0 + 0x18) == 0)) {
                var_v0 = 9;
            } else {
                var_v0 = *(s32 *)((u8 *)var_s4 + 8);
            }
            spC8 = (s16) var_v0;
            temp_a3 = *(u8 **)((u8 *)temp_s1 + 0xED8);
            temp_a1 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((spC8 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
            temp_f0 = -((f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 1.0f) / 2.0f;
            spE0 = temp_f0;
            spE8 = -temp_f0;
            temp_f0_2 = -((f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 1.0f) / 2.0f;
            spE4 = temp_f0_2;
            temp_f2 = -temp_f0_2;
            spEC = temp_f2;
            spD4 = var_f20 + temp_f2;
            spF4 = 0x3F000000;
            spF0 = 0x3F000000;
            spFC = (f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 0.5f;
            spF8 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 0.5f;
            func_0022C6B0(&spB0);
            var_s5 += 1;
            var_s4 += 0xC;
            var_f20 = 8.0f + (spD4 + spEC);
        } while (var_s5 < *(s32 *)((u8 *)var_s0 + 0));
    }
}
