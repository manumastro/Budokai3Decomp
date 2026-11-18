/* Draft (not built): func_0021E420 at 0x0021E420, size 0x314, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); to 'float' mwccps2.exe Compiler: @ 154: *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xEDC)) + 0x1C)) + 0x60), &spB0, 0);
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021E420.s */

// src/unk/unk_21D260.c func_0021E420 cerr diff=-1/0
void func_0021E420(u8 *arg0) {
    s32 spB0;
    f32 spD0;
    f32 spE0;
    f32 spE8;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f20;
    f32 var_f20_2;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_s2;

    var_s1 = *(s32 *)((u8 *)arg0 + 0x18);
    var_s0 = *(s32 *)((u8 *)arg0 + 0x14) + *(s16 *)((u8 *)arg0 + 0xA);
    temp_s2 = (u8 *)(gBtlSys);
    if (var_s0 >= var_s1) {
        var_s0 -= var_s1;
    }
    if (var_s1 > 0) {
        var_s0 += 1;
    }
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 0xED8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04040000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04040000);
    D_00470238 = 0;
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xEDC)) + 0x1C)) + 0x60), &spB0, 0);
    func_00228410();
    func_0022C6B0(&spB0);
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xEDC)) + 0x1C)) + 0x64), &spB0, 0);
    func_00228410();
    var_f20 = spD0;
    if (var_s1 != 0) {
        do {
            temp_hi = var_s1 % 10;
            spD0 = var_f20;
            spF0 = 16.0f * (f32) (temp_hi % 5);
            temp_f0 = 20.0f * (f32) (((var_s1 % 10) / 5) + ((u32) temp_hi >> 0x1F));
            spF8 = 16.0f + spF0;
            spF4 = temp_f0;
            spFC = 20.0f + temp_f0;
            func_0022C6B0(&spB0);
            var_s1 = (var_s1 / 10) + ((u32) var_s1 >> 0x1F);
            var_f20 -= spE8 - spE0;
        } while (var_s1 != 0);
    }
    func_00228430(0);
    func_0022B900(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xEDC)) + 0x1C)) + 0x68), &spB0, 0);
    func_00228410();
    spD0 = var_f20;
    var_f20_2 = var_f20 - (spE8 - spE0);
    func_0022C6B0(&spB0);
    if (var_s0 != 0) {
        do {
            temp_hi_2 = var_s0 % 10;
            spD0 = var_f20_2;
            spF0 = 16.0f * (f32) (temp_hi_2 % 5);
            temp_f0_2 = 20.0f * (f32) (((var_s0 % 10) / 5) + ((u32) temp_hi_2 >> 0x1F));
            spF8 = 16.0f + spF0;
            spF4 = temp_f0_2;
            spFC = 20.0f + temp_f0_2;
            func_0022C6B0(&spB0);
            var_s0 = (var_s0 / 10) + ((u32) var_s0 >> 0x1F);
            var_f20_2 -= spE8 - spE0;
        } while (var_s0 != 0);
    }
}
