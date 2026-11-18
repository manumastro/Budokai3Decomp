/* Draft (not built): func_0020BBD0 at 0x0020BBD0, size 0x1E0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); har *, int)' now declared as: 'int (unsigned char *, int, int)' @ 745: s32 func_0020BBD0(u8 *arg0, s32 arg1, s32 arg2) {
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020BBD0.s */

// src/unk/unk_20A4D0.c func_0020BBD0 cerr diff=-1/0
s32 func_0020BBD0(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f2;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_v0;
    u8 *temp_a3;
    u8 *temp_t1;

    var_a2 = arg2;
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x20F8) - 1.0f;
    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return 0;
    }
    if (*(u8 **)((u8 *)arg0 + 0x9C) == NULL) {
        return 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0x20EC) & 0x10) {
        var_f0 = *(f32 *)((u8 *)arg0 + 0x20F0) + *(f32 *)((u8 *)arg0 + 0x20FC);
    } else {
        if (gBattle != NULL) {
            var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f2 = 1.0f;
        } else {
            var_f2 = 1.2f;
        }
        var_f0 = *(f32 *)((u8 *)arg0 + 0x20F0) + (*(f32 *)((u8 *)arg0 + 0x20FC) * var_f2);
    }
    *(f32 *)((u8 *)arg0 + 0x20F0) = var_f0;
    if (*(f32 *)((u8 *)arg0 + 0x20F0) < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x20F0) = 0.0f;
    }
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x20F0);
    if (!(temp_f0 <= temp_f3)) {
        if (arg1 != 0) {
            *(f32 *)((u8 *)arg0 + 0x20F0) = (f32) (temp_f0 - temp_f3);
        } else {
            *(f32 *)((u8 *)arg0 + 0x20F0) = temp_f3;
        }
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    temp_t1 = *(u8 **)((u8 *)arg0 + 0x9C);
    temp_t0 = *(s32 *)((u8 *)arg0 + 0x2100);
    temp_a3 = temp_t1 + 0x41C;
    if (*(s32 *)((u8 *)temp_t1 + 0x41C) != temp_t0) {
        var_a2 = 0;
        if (*(s32 *)((u8 *)temp_t1 + 0x418) > 0) {
            var_a1 = 0;
            do {
                var_a2 += 1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x30) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x34) = -1;
                *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3 + 0x10) + var_a1) + 0x38) = -1;
                var_a1 += 0x40;
            } while (var_a2 < *(s32 *)((u8 *)temp_t1 + 0x418));
        }
        *(s32 *)((u8 *)temp_a3 + 0xC) = 0xBF800000;
    }
    *(s32 *)((u8 *)temp_t1 + 0x41C) = temp_t0;
    *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x9C)) + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x20F0);
    amMotion_Update(*(u8 **)((u8 *)arg0 + 0x9C), 0, var_a2, temp_a3);
    return var_s0;
}
