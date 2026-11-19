/* Draft (not built): func_00216A60 at 0x00216A60, size 0x2C0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ar *)' redeclared was declared as: 'void (unsigned char *)' now declared as: 'void ()' @ 4107: void func_00216A60(void);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00216A60.s */

// src/unk/unk_20A4D0.c func_00216A60 cerr diff=-1/0
void func_00216A60(u8 *arg0) {
    s32 sp60;
    s32 *sp70;
    s16 sp90;
    s16 sp92;
    f32 temp_f20;
    f32 temp_f2;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s3 = arg0 + 0x30;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x30);
        temp_s0 = gBattle + (temp_a1 * 0x2020) + 0x830;
        if (gBattle != NULL) {
            var_f3 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f3 = 1.0f;
        } else {
            var_f3 = 1.2f;
        }
        temp_f20 = *(f32 *)((u8 *)temp_s0 + 0xC9C) * var_f3;
        if (*(f32 *)((u8 *)temp_s3 + 0xC) < (f32) *(s32 *)((u8 *)temp_s3 + 8)) {
            temp_v1 = func_0012EAE0(4) & 0xF;
            if (temp_v1 >= 0) {
                var_f3_2 = (f32) temp_v1;
            } else {
                var_f3_2 = 2.0f * (f32) (((u32) temp_v1 >> 1) | (temp_v1 & 1));
            }
            temp_f2 = var_f3_2 / 15.0f;
            if (*(f32 *)((u8 *)temp_s3 + 0xC) < 10.0f) {
                if (!(temp_f2 < 0.5f)) {
                    goto block_17;
                }
                goto block_20;
            }
block_17:
            if (!(*(f32 *)((u8 *)temp_s3 + 0xC) < 10.0f) && (temp_f2 < 0.35f)) {
block_20:
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                sp90 = 0xE;
                sp70 = &sp60;
                sp92 = 0;
                temp_v0 = func_00215320(-1, 0x10);
                if (temp_v0 != NULL) {
                    temp_s0_2 = temp_v0 + 0x20;
                    *(s32 **)((u8 *)temp_v0 + 8) = (int *)(&func_00212480);
                    *(s32 **)((u8 *)temp_v0 + 0xC) = (int *)(&func_00212650);
                    memset(temp_s0_2, 0, 0x50);
                    temp_a0 = *(D_0046FDD0 + (sp90 * 4));
                    if (temp_a0 != 0) {
                        *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(temp_a0, 0x04000002, 0);
                    }
                    if (*(s32 *)((u8 *)temp_v0 + 0x10) != 0) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
                        *(s32 *)((u8 *)temp_s0_2 + 0x20) = (s32) *(D_0046FDD0 + (((s64) ((s64) sp92 << 0x30) >> 0x30) * 4));
                        *(s32 *)((u8 *)temp_s0_2 + 0x28) = (s32) ((((s64) ((s64) sp92 << 0x30) >> 0x30) << 5) + 0x03001000);
                    }
                }
            }
            *(f32 *)((u8 *)temp_s3 + 0xC) = (f32) (*(f32 *)((u8 *)temp_s3 + 0xC) + temp_f20);
            return;
        }
        amTask_Kill((s32)(arg0));
        *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x30) * 4) + D_0046FDD0) + 0x188) = 0;
    }
}
