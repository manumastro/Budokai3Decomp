/* Draft (not built): func_0021DCF0 at 0x0021DCF0, size 0x55C, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); to 'float' mwccps2.exe Compiler: @ 119: *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C)) + 0x18), &spE0, 0);
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021DCF0.s */

// src/unk/unk_21D260.c func_0021DCF0 cerr diff=-1/0
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_0022B900(s32, f32, void *);
extern void func_0022C6B0(void *);
s32 func_00139620(s32, s128 *, s32, s32, s32);
extern s128 D_0044FA50;
extern s64 D_0046FE28;
void func_0021DCF0(u8 *arg0) {
    s128 spB0;
    f32 spBC;
    s128 spC0;
    f32 spCC;
    s128 spD0;
    f32 spDC;
    s32 spE0;
    s16 spF8;
    f32 sp104;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    f32 sp11C;
    s32 sp120;
    s32 sp124;
    f32 sp128;
    f32 sp12C;
    s64 sp148;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 var_f12;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_a0_3;
    s32 temp_s5;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s64 *var_a2;
    s64 *var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gBtlSys);
    sp148 = D_0046FE28;
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xED8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04040000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04040000);
    D_00470238 = 0;
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C)) + 0x18), &spE0, 0);
    func_00228410();
    temp_f2 = sp110;
    temp_f1 = sp118;
    var_f12 = temp_f1 - temp_f2;
    if (var_f12 < 0.0f) {
        var_f12 = -temp_f1 - temp_f2;
    }
    temp_f2_2 = sp114;
    temp_f1_2 = sp11C;
    var_f20 = temp_f1_2 - temp_f2_2;
    if (var_f20 < 0.0f) {
        var_f20 = -temp_f1_2 - temp_f2_2;
    }
    var_t0 = 0;
    temp_a3 = *(u8 **)((u8 *)temp_s0 + 0xED8);
    var_s2 = &sp148;
    var_a2 = var_s2;
loop_11:
    if (var_t0 < 2) {
        temp_a0_2 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((*var_a2 - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
        if (temp_a0_2 != NULL) {
            temp_f0 = (f32) *(s16 *)((u8 *)temp_a0_2 + 0x10);
            if (var_f12 < temp_f0) {
                var_f12 = temp_f0;
            }
            var_f20 += (f32) *(s16 *)((u8 *)temp_a0_2 + 0x12);
        }
        var_a2 += 4;
        var_t0 += 1;
        goto loop_11;
    }
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 4);
    temp_f20 = var_f20 + 48.0f;
    temp_f12 = var_f12 + 30.0f;
    switch (temp_a0_3) {                            /* irregular */
    case 3:
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x1C) / 8.0f;
        func_0021D6C0(0, temp_f12 * temp_f0_2, temp_f20 * temp_f0_2);
        if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
            spD0 = D_0044FA50;
            spDC *= 1.0f;
            func_00139620(0x902, &spD0, -1, 0x44, 0);
            func_00224480(arg0);
        }
        break;
    case 4:
        func_0021D6C0(0, temp_f12, temp_f20);
        func_00228430(0);
        func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C)) + 0x18), &spE0, 0);
        func_00228410();
        sp104 -= ((temp_f20 / 2.0f) + sp114) - 10.0f;
        func_0022C6B0(&spE0);
        var_s4 = 0;
        var_f20_2 = 10.0f + (sp104 + sp11C);
        do {
            var_s3 = 0xA;
            if (*(s16 *)((u8 *)arg0 + 0xA) == var_s4) {
                var_s3 = 8;
            }
            temp_s5 = *var_s2;
            func_00228430(0);
            func_0022B900(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C) + (var_s3 * 4)), &spE0, 0);
            func_00228410();
            spF8 = (s16) temp_s5;
            temp_a2 = *(u8 **)((u8 *)temp_s0 + 0xED8);
            temp_a1 = temp_a2 + *(*(s32 *)((u8 *)temp_a2 + 0x14) + temp_a2 + ((temp_s5 - *(s32 *)((u8 *)temp_a2 + 0x18)) * 4));
            temp_f0_3 = -((f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 1.0f) / 2.0f;
            sp110 = temp_f0_3;
            sp118 = -temp_f0_3;
            temp_f0_4 = -((f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 1.0f) / 2.0f;
            sp114 = temp_f0_4;
            temp_f2_3 = -temp_f0_4;
            sp11C = temp_f2_3;
            sp104 = var_f20_2 + temp_f2_3;
            sp124 = 0x3F000000;
            sp120 = 0x3F000000;
            sp12C = (f32) *(s16 *)((u8 *)temp_a1 + 0x12) - 0.5f;
            sp128 = (f32) *(s16 *)((u8 *)temp_a1 + 0x10) - 0.5f;
            func_0022C6B0(&spE0);
            var_s4 += 1;
            var_s2 += 4;
            var_f20_2 = 8.0f + (sp104 + sp11C);
        } while (var_s4 < 2);
        if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
            spC0 = D_0044FA50;
            spCC *= 1.0f;
            func_00139620(0x902, &spC0, -1, 0x44, 0);
            func_00224480(arg0);
        }
        break;
    case 5:
        temp_f0_5 = (8.0f - *(f32 *)((u8 *)arg0 + 0x1C)) / 8.0f;
        func_0021D6C0(0, temp_f12 * temp_f0_5, temp_f20 * temp_f0_5);
        if (*(s32 *)((u8 *)temp_s0 + 0xE30) & 2) {
            spB0 = D_0044FA50;
            spBC *= 1.0f;
            func_00139620(0x902, &spB0, -1, 0x44, 0);
            func_00224480(arg0);
        }
        break;
    }
}
