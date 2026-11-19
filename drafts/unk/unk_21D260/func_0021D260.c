/* Draft (not built): func_0021D260 at 0x0021D260, size 0x458, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ersion from 'float' to 'void *' @ 147: u8 *)temp_s2 + 0xEDC)) + 0x1C) + (var_s6 * 4))), &sp80, (void *)((f32)(s32)(0)));
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021D260.s */

// src/unk/unk_21D260.c func_0021D260 cerr diff=-1/0
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_0022B900(s32, f32, void *);
s32 func_0021C460(s16);
extern s32 D_0044F720;
extern s32 D_0044F810;
extern s32 D_0044FA20;
extern s32 D_0046FE10;
extern s32 D_0046FE18;
void func_0021D260(f32 *arg0, f32 *arg1, s32 *arg2) {
    s32 spB4;
    s32 spB0;
    s32 spBC;
    s32 spB8;
    s32 saved_reg_s6;
    s32 sp80;
    s32 *var_s0;
    s32 *var_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;
    s16 temp_a0_3;
    s16 temp_v1;
    s32 *var_a2;
    s32 *var_t0_2;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s6;
    s32 var_t2;
    s32 var_t3;
    u8 *temp_a0;
    u8 *temp_s2;
    u8 *temp_s5;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t2;
    u8 *temp_v1_2;
    u8 *var_t0;

    var_s6 = saved_reg_s6;
    var_a2 = arg2;
    temp_s2 = (unsigned char *)(gBtlSys);
    temp_s5 = (unsigned char *)(*(s32 *)((u8 *)temp_s2 + 0xEF0) + 0x30);
    if ((*(s16 *)((u8 *)temp_s2 + 0xE42) == -1) && (*(s16 *)((u8 *)temp_s2 + 0xE46) == 0)) {
        var_s1 = &D_0044F720;
    } else {
        var_s1 = (int *)(*(&D_0046FE10 + (*(s16 *)((u8 *)temp_s2 + 0xE46) * 4)) + (*(s16 *)((u8 *)temp_s2 + 0xDF0) * 0x10));
    }
    temp_v1 = *(s16 *)((u8 *)temp_s2 + 0xE42);
    var_a1 = 0;
    if ((temp_v1 == -1) && (*(s16 *)((u8 *)temp_s2 + 0xE46) == 0)) {
        var_a1 = 1;
    }
    if (var_a1 != 0) {
        var_s0 = &D_0044F810;
    } else {
        var_a2 = &D_0046FE18 + (*(s16 *)((u8 *)temp_s2 + 0xE46) * 4);
        var_s0 = (int *)(*(s32 *)(*var_a2 + (*(s16 *)((u8 *)temp_s2 + 0xDF0) * 4)));
    }
    var_f2 = 0.0f;
    if ((*(s16 *)((u8 *)temp_s2 + 0xDF0) != 3) || (temp_v1 == -1)) {
        temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xED8);
        D_00470704 = (int)(temp_a0);
        D_0047070C = 0x04040000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04040000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)var_s1 + 4);
        switch (temp_a0_2) {                        /* irregular */
        case 0:
            temp_a0_3 = *(s16 *)((u8 *)temp_s2 + 0xE42);
            if (temp_a0_3 == -1) {
                var_s6 = 7;
            } else {
                var_s6 = (func_0021C460(temp_a0_3) != 0) ? 3 : 2;
            }
            break;
        case 1:
            var_s6 = 4;
            break;
        case 2:
            var_s6 = 7;
            break;
        case 3:
            var_s6 = 5;
            break;
        case 4:
            var_s6 = 6;
            break;
        }
        func_0022B900((s32)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xEDC)) + 0x1C) + (var_s6 * 4))), &sp80, (void *)((f32)(s32)(0)));
        var_f3 = spBC - spB4;
        if (var_f3 < 0.0f) {
            var_f3 = -spBC - spB4;
        }
        var_f4 = spB8 - spB0;
        if (var_f4 < 0.0f) {
            var_f4 = -spB8 - spB0;
        }
        temp_a1 = *(s32 *)((u8 *)var_s1 + 0);
        var_a2_2 = 0;
        if (temp_a1 > 0) {
            do {
                if ((*(s32 *)((u8 *)var_s0 + 4) == 1) && (*(s32 *)((u8 *)temp_s5 + 0x18) == 0)) {
                    temp_t1 = *(u8 **)((u8 *)temp_s2 + 0xED8);
                    var_t0 = temp_t1 + *(*(s32 *)((u8 *)temp_t1 + 0x14) + temp_t1 + ((9 - *(s32 *)((u8 *)temp_t1 + 0x18)) * 4));
                } else {
                    temp_t2 = *(u8 **)((u8 *)temp_s2 + 0xED8);
                    var_t0 = temp_t2 + *(*(s32 *)((u8 *)temp_t2 + 0x14) + temp_t2 + ((*(s32 *)((u8 *)var_s0 + 8) - *(s32 *)((u8 *)temp_t2 + 0x18)) * 4));
                }
                if (var_t0 != NULL) {
                    temp_f0 = (f32) *(s16 *)((u8 *)var_t0 + 0x10);
                    if (!(temp_f0 <= var_f4)) {
                        var_f4 = temp_f0;
                    }
                }
                if (var_t0 != NULL) {
                    var_f3 += (f32) *(s16 *)((u8 *)var_t0 + 0x12);
                }
                var_a2_2 += 1;
                var_s0 += 0xC;
            } while (var_a2_2 < *(s32 *)((u8 *)var_s1 + 0));
        }
        *arg0 = 30.0f + var_f4;
        *arg1 = var_f3 + (40.0f + (8.0f * (f32) (temp_a1 - 1)));
    } else {
        var_t3 = 0;
        var_t0_2 = &D_0044FA20;
        do {
            temp_a2 = *var_t0_2;
            if (temp_a2 != 0) {
                var_t2 = 0;
                temp_t1_2 = *(u8 **)((u8 *)temp_s2 + 0xED8);
                var_a3 = 0;
loop_51:
                if (var_t2 <= 0) {
                    temp_v1_2 = temp_t1_2 + *(*(s32 *)((u8 *)temp_t1_2 + 0x14) + temp_t1_2 + ((*(s32 *)(temp_a2 + var_a3) - *(s32 *)((u8 *)temp_t1_2 + 0x18)) * 4));
                    if (temp_v1_2 != NULL) {
                        temp_f0_2 = (f32) *(s16 *)((u8 *)temp_v1_2 + 0x10);
                        if (!(temp_f0_2 <= var_f2)) {
                            var_f2 = temp_f0_2;
                        }
                    }
                    var_a3 += 4;
                    var_t2 += 1;
                    goto loop_51;
                }
            }
            var_t3 += 1;
            var_t0_2 += 4;
        } while (var_t3 < 0xB);
        if (var_f2 != 0.0f) {
            *arg0 = 50.0f + (2.0f * var_f2);
        }
    }
}
