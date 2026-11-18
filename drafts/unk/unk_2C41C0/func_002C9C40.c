/* Draft (not built): func_002C9C40 at 0x002C9C40, size 0x2A4, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); signed char *, unsigned char *)' @ 731: 0 = *(&D_004563C0 + (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x20)) + 0x84) * 4));
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C9C40.s */

// src/unk/unk_2C41C0.c func_002C9C40 cerr diff=-1/0
extern s32 D_004563C0;
extern void *D_0046FE44;
void func_002C9C40(u8 *arg0) {
    s32 (*temp_s0)(u8 *, u8 *);
    s32 var_a0;
    s32 var_s1;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_4;
    s8 var_v1_3;
    u8 *temp_a1;
    u8 *temp_s2;

    temp_s2 = arg0 + 0x20;
    if (*(s16 *)((u8 *)arg0 + 0x58) & 0x80) {
        var_s1 = 0;
    } else {
        var_s1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x14)) + 0x1350);
    }
    temp_s0 = *(&D_004563C0 + (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x20)) + 0x84) * 4));
    if (func_002C5FC0(arg0) == 0) {
        temp_a1 = arg0 + 0x20;
        if (*(s16 *)((u8 *)arg0 + 0x58) & 0x80) {
            var_a0 = 0;
        } else {
            var_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a1 + 0x14)) + 0x1350);
        }
        if ((var_a0 == 0) && (*(s16 *)((u8 *)gEffWork + 0x4D86) & 0x800)) {
            if (!(*(f32 *)((u8 *)temp_a1 + 0x20) <= 10.0f)) {
                *(f32 *)((u8 *)temp_a1 + 0x28) = 10.0f;
                *(f32 *)((u8 *)temp_a1 + 0x20) = 10.0f;
            }
        } else if ((var_a0 == 1) && (*(s16 *)((u8 *)gEffWork + 0x4D86) & 0x400) && !(*(f32 *)((u8 *)temp_a1 + 0x20) <= 10.0f)) {
            *(f32 *)((u8 *)temp_a1 + 0x28) = 10.0f;
            *(f32 *)((u8 *)temp_a1 + 0x20) = 10.0f;
        }
        if (*(s16 *)((u8 *)D_0046FE44 + 0x100) == 0) {
            var_v1 = 0;
            if (gBattle != NULL) {
                var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
            }
            if (var_v1 == 0) {
                var_v1_2 = 0;
                if (gBattle != NULL) {
                    var_v1_2 = *(s8 *)((u8 *)gBattle + 0x8AB2) != 0;
                    if (var_v1_2 != 0) {
                        var_v1_2 = 1;
                        if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                            var_v1_2 = 0;
                        }
                    }
                }
                if (var_v1_2 != 0) {
                    var_v1_3 = -1;
                    if (gBattle != NULL) {
                        var_v1_3 = -1;
                        if (*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) {
                            if (*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f) {
                                var_v1_3 = -1;
                            } else {
                                var_v1_3 = *(s8 *)((u8 *)gBattle + 0x8AB3);
                            }
                        }
                    }
                    if (var_s1 == var_v1_3) {
                        var_v1_4 = 1;
                    } else {
                        goto block_40;
                    }
                } else {
block_40:
                    var_v1_4 = 0;
                }
                if ((var_v1_4 == 0) && (temp_s0(temp_s2, temp_a1) != 0)) {
                    func_002152E0();
                    return;
                }
                goto block_47;
            }
            goto block_47;
        }
        if ((*(s16 *)((u8 *)temp_s2 + 0x38) & 0x80) && (temp_s0(temp_s2, temp_a1) != 0)) {
            func_002152E0();
            return;
        }
block_47:
        *(s16 *)((u8 *)temp_s2 + 0x3A) = 1;
    }
}
