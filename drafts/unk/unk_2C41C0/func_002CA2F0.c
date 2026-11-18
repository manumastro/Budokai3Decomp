/* Draft (not built): func_002CA2F0 at 0x002CA2F0, size 0x100, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'saved_reg_s1' @ 810: var_s1 = saved_reg_s1;
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002CA2F0.s */

// src/unk/unk_2C41C0.c func_002CA2F0 cerr diff=-1/0
void func_002CA2F0(u8 *arg0) {
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s1;
    u8 *var_v0;

    var_s1 = saved_reg_s1;
    var_s0 = 0;
    if (*(s16 *)((u8 *)arg0 + 0x2C) & 0x2000) {
        var_v0 = *(&D_005BD154 + (*(s16 *)((u8 *)arg0 + 0x2A) * 4));
    } else {
        var_v0 = (u8 *)func_0020B020(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 0x1350), *(s16 *)((u8 *)arg0 + 0x28), *(s16 *)((u8 *)arg0 + 0x2A));
    }
    if (func_00127E88(var_v0, D_0046EF90, 4) == 0) {
        var_s0 = *(s32 *)((u8 *)var_v0 + 8);
        var_s1 = var_v0 + *(s32 *)((u8 *)var_v0 + 0xC);
    }
    var_s4 = 0;
    if (var_s0 > 0) {
        var_s3 = 0;
        do {
            var_s1 += var_s3;
            func_002C5EB0(var_s1, arg0);
            if (!(*(f32 *)((u8 *)var_s1 + 0x30) <= 0.0f)) {
                func_002C9EF0(0, 0);
            }
            var_s4 += 1;
            var_s3 += 0xB0;
        } while (var_s4 < var_s0);
    }
}
