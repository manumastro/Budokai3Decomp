/* Draft (not built): func_00212730 at 0x00212730, size 0x280, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A4, original 0x280
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00212730.s */

// src/unk/unk_20A4D0.c func_00212730 size diff=67/169
void func_00212730(u8 *arg0) {
    s32 var_a1;
    s16 temp_a2;
    s16 var_s4;
    s32 temp_v0;
    s32 var_s0;
    s64 temp_a0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;

    var_s3 = arg0;
    var_s2 = func_00215320(*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350), *(s16 *)((u8 *)var_s3 + 0x50));
    if (var_s2 != NULL) {
        var_s1 = var_s2 + 0x20;
        *(s32 **)((u8 *)var_s2 + 8) = (int *)(&func_002116B0);
        *(s32 **)((u8 *)var_s2 + 0xC) = (int *)(&func_00212650);
        *(f32 *)((u8 *)var_s2 + 0x18) = (f32) *(f32 *)((u8 *)var_s3 + 0x84);
        memset(var_s1, 0, 0x50);
        var_s4 = *(s16 *)((u8 *)var_s3 + 0x50);
        var_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x6C)) + 0x1350);
        temp_v0 = (int)((unsigned char *)func_0020B020((u8 *)(var_s0), (s32)(*(s16 *)((u8 *)var_s3 + 0x96)), (s32)(*(s16 *)((u8 *)var_s3 + 0xA2)), 0));
        if (temp_v0 != 0) {
            temp_a0 = (s64) ((s64) var_s4 << 0x30) >> 0x30;
            switch (temp_a0) {                      /* irregular */
            case 0x1:
                if (var_s0 != 0) {
                    var_a1 = 0x04000020;
                } else {
                    var_a1 = 0x04000010;
                }
                break;
            case 0x2:
                if (var_s0 != 0) {
                    var_a1 = 0x04000008;
                } else {
                    var_a1 = 0x04000004;
                }
                break;
            case 0x4:
                if (var_s0 != 0) {
                    var_a1 = 0x400020;
                } else {
                    var_a1 = 0x400010;
                }
                break;
            case 0x8:
                var_a1 = 0x400008;
                break;
            case 0x10:
                var_a1 = 0x04000002;
                break;
            case 0x400:
                var_a1 = 0x04000040;
                break;
            case 0x800:
                if (var_s0 != 0) {
                    var_a1 = 0x04000100;
                } else {
                    var_a1 = 0x04000080;
                }
                break;
            default:
                var_a1 = 0;
                break;
            }
            *(s32 *)((u8 *)var_s2 + 0x10) = func_00209540(temp_v0, var_a1, 0);
        }
        var_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0x6C)) + 0x1350);
        *(s32 *)((u8 *)var_s1 + 0x20) = (int)((unsigned char *)func_0020B020((u8 *)(var_s0), (s32)(*(s16 *)((u8 *)var_s3 + 0x94)), (s32)(*(s16 *)((u8 *)var_s3 + 0xA0)), 0));
        *(s32 *)((u8 *)var_s1 + 0x28) = func_0020AD30(var_s0, *(s16 *)((u8 *)var_s3 + 0x94), *(s16 *)((u8 *)var_s3 + 0xA0));
        temp_a2 = *(s16 *)((u8 *)var_s3 + 0xA4);
        if (temp_a2 > 0) {
            *(s32 *)((u8 *)var_s1 + 0x24) = func_0020AE80(var_s0, *(s16 *)((u8 *)var_s3 + 0x98), temp_a2);
        } else {
            *(s32 *)((u8 *)var_s1 + 0x24) = 0;
        }
        if (*(s32 *)((u8 *)var_s2 + 0x10) != 0) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
            *(s32 *)((u8 *)var_s1 + 0x3C) = (s32) *(s32 *)((u8 *)var_s3 + 0x78);
            *(s16 *)((u8 *)var_s1 + 0x48) = (s16) *(s16 *)((u8 *)var_s3 + 0x5A);
            *(s16 *)((u8 *)var_s1 + 0x4A) = (s16) *(s16 *)((u8 *)var_s3 + 0x5C);
            *(s32 *)((u8 *)var_s1 + 0x34) = (s32) *(s32 *)((u8 *)var_s3 + 0x70);
            *(s16 *)((u8 *)var_s1 + 0x44) = (s16) ((s64) ((s64) *(s32 *)((u8 *)var_s3 + 0x68) << 0x30) >> 0x30);
            *(f32 *)((u8 *)var_s1 + 0x30) = (f32) *(f32 *)((u8 *)var_s3 + 0x88);
            *(s32 *)((u8 *)var_s1 + 0x2C) = (s32) *(s32 *)((u8 *)var_s3 + 0x74);
        }
    }
}
