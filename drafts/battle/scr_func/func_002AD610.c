/* Draft (not built): func_002AD610 at 0x002AD610, size 0x1E8, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); _002AD610(unsigned char *, int *)' does not match 'func_002AD610(unsigned char *)' @ 1360: return func_002AD610(a0, a1);
 * Original: asm/nonmatchings/battle/scr_func/func_002AD610.s */

// src/battle/scr_func.c func_002AD610 cerr diff=-1/0
s32 amMotion_Update(void *, s32, s32, void *);
s32 func_002AD610(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_t0;
    s32 var_a1;
    s32 var_a2;
    s8 temp_a1;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_s0;
    u8 *temp_t1;

    temp_a3 = *(u8 **)((u8 *)arg0 + 0);
    var_a2 = *(s32 *)((u8 *)temp_a3 + 0);
    temp_s0 = (*(s8 *)((u8 *)arg0 + 0x2A) * 0x20E0) + (&D_005ABA80 + (var_a2 * 0x8380));
    temp_f2 = *(f32 *)((u8 *)arg0 + 0x30);
    if (*(u8 **)((u8 *)temp_s0 + 0x3C) == NULL) {
        return 3;
    }
    if (*(s32 *)((u8 *)temp_a3 + 0xC) != 3) {
        *(f32 *)((u8 *)arg0 + 0x2C) = (f32) (*(f32 *)((u8 *)arg0 + 0x2C) + *(f32 *)((u8 *)arg0 + 0x38));
        if (*(s8 *)((u8 *)arg0 + 0x2B) == 1) {
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x2C);
            temp_f2_2 = temp_f2 - 1.0f;
            if (!(temp_f0 <= temp_f2_2)) {
                *(f32 *)((u8 *)arg0 + 0x2C) = (f32) (temp_f0 - temp_f2_2);
                *(s8 *)((u8 *)arg0 + 0x2B) = (s8) (*(s8 *)((u8 *)arg0 + 0x2B) - 1);
                *(s32 *)((u8 *)arg0 + 0x10) = 0;
                return 1;
            }
            goto block_12;
        }
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x2C);
        if (!(temp_f0_2 < temp_f2)) {
            *(f32 *)((u8 *)arg0 + 0x2C) = (f32) (temp_f0_2 - temp_f2);
            temp_a1 = *(s8 *)((u8 *)arg0 + 0x2B);
            if (temp_a1 != -1) {
                *(s8 *)((u8 *)arg0 + 0x2B) = (s8) (temp_a1 - 1);
                if (*(s8 *)((u8 *)arg0 + 0x2B) <= 0) {
                    *(s32 *)((u8 *)arg0 + 0x10) = 0;
                    return 1;
                }
            }
        }
block_12:
        temp_t1 = *(u8 **)((u8 *)temp_s0 + 0x3C);
        temp_t0 = *(s32 *)((u8 *)arg0 + 0x34);
        temp_a3_2 = temp_t1 + 0x41C;
        if (*(s32 *)((u8 *)temp_t1 + 0x41C) != temp_t0) {
            var_a2 = 0;
            if (*(s32 *)((u8 *)temp_t1 + 0x418) > 0) {
                var_a1 = 0;
                do {
                    var_a2 += 1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1) + 0x30) = -1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1) + 0x34) = -1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a3_2 + 0x10) + var_a1) + 0x38) = -1;
                    var_a1 += 0x40;
                } while (var_a2 < *(s32 *)((u8 *)temp_t1 + 0x418));
            }
            *(s32 *)((u8 *)temp_a3_2 + 0xC) = 0xBF800000;
        }
        *(s32 *)((u8 *)temp_t1 + 0x41C) = temp_t0;
        if (*(s8 *)((u8 *)temp_s0 + 0x20A2) != 0) {
            *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x3C)) + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x2C);
        } else {
            *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x3C)) + 0x424) = (f32) *(f32 *)((u8 *)arg0 + 0x2C);
        }
        amMotion_Update(*(u8 **)((u8 *)temp_s0 + 0x3C), *(s8 *)((u8 *)temp_s0 + 0x20A0) != 0, var_a2, temp_a3_2);
        *(s8 *)((u8 *)temp_s0 + 0x20A0) = 1;
        goto block_21;
    }
block_21:
    return 3;
}
