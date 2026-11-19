/* Draft (not built): func_002A5030 at 0x002A5030, size 0x1AC, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); red was declared as: 'int (...)' now declared as: 'void (float *, float)' @ 1890: extern void func_002A21F0(f32 *, f32);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5030.s */

// src/story/evt_scrp.c func_002A5030 cerr diff=-1/0
extern f32 D_004708DC;
s32 func_002A5030(u8 *arg0, u8 *arg1) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 *var_v1;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    f32 temp_f25;
    f32 temp_f26;
    f32 var_f1;
    s32 var_v0;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_f25 = *(f32 *)((u8 *)temp_v0 + 0x14);
    temp_f26 = *(f32 *)((u8 *)temp_v0 + 0x18);
    temp_f24 = *(f32 *)((u8 *)temp_v0 + 0x10);
    temp_f23 = *(f32 *)((u8 *)temp_v0 + 0xC);
    temp_f22 = *(f32 *)((u8 *)temp_v0 + 8);
    temp_f21 = *(f32 *)((u8 *)temp_v0 + 4);
    temp_f20 = *(f32 *)((u8 *)temp_v0 + 0);
    if (!(temp_f25 < 0.0f)) {
        temp_f0 = D_004708DC - ((f32) D_004700B0 * func_002B06A0());
        D_004708DC = temp_f0;
        if (temp_f0 < 0.0f) {
            D_004708DC = 0.0f;
            *(s32 *)((u8 *)arg0 + 0x10) = 0;
            return 1;
        }
        if (temp_f0 < temp_f25) {
            var_f1 = 1.0f;
        } else {
            var_f1 = 1.0f - ((temp_f0 - temp_f25) / temp_f26);
        }
        goto block_12;
    }
    if (D_004708DC < 0.0f) {
        var_f1 = 1.0f;
        D_004708DC = 0.0f;
    } else {
        var_f1 = 1.0f - (D_004708DC / temp_f26);
    }
block_12:
    if (var_f1 <= 0.0f) {
        return 3;
    }
    var_v1 = &sp40;
    var_v0 = 0x10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp40 = temp_f24 * var_f1;
    sp44 = temp_f23 * var_f1;
    sp48 = temp_f22 * var_f1;
    sp4C = temp_f21 * var_f1;
    func_002A21F0(&sp40, temp_f20);
    return 3;
}
