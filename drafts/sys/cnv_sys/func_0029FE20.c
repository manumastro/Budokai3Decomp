/* Draft (not built): func_0029FE20 at 0x0029FE20, size 0x234, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 116 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x208, original 0x234
 * Original: asm/nonmatchings/sys/cnv_sys/func_0029FE20.s */

// src/sys/cnv_sys.c func_0029FE20 size diff=116/130
extern u8 *D_004708CC;
s32 amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(s32, s32, s32, s32);
extern s32 D_0046EA58;
void func_0029FE20(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    u8 *temp_s3;

    temp_s3 = D_004708CC;
    temp_s2 = *(s32 *)((u8 *)temp_s3 + 0);
    temp_s1 = *(s32 *)((u8 *)temp_s3 + 0xC);
    if (temp_s2 == 0) {
        goto block_14;
    }
    if (temp_s1 == 0) {
        goto block_14;
    }
    *(s32 *)((u8 *)temp_s3 + 0x4C) = amHeap_Alloc(temp_s2 * 4, 0, &D_0046EA58, 0x53F);
    var_s0 = 0;
    goto loop_7;
block_3:
    temp_a3 = var_s0 * 4;
    *(s32 *)(*(s32 *)((u8 *)temp_s3 + 0x4C) + temp_a3) = amHeap_Alloc(temp_s1 * 0x2C, 0, &D_0046EA58, 0x541);
    memset(*(s32 *)(*(s32 *)((u8 *)temp_s3 + 0x4C) + temp_a3), 0, temp_s1 * 0x2C, temp_a3);
    var_a3 = 0;
    temp_a1 = var_s0 * 4;
    goto loop_5;
block_4:
    temp_v1 = var_a3 * 0x2C;
    var_a3 += 1;
    *(s32 *)(*(s32 *)(*(s32 *)((u8 *)temp_s3 + 0x4C) + temp_a1) + temp_v1) = -1;
    *(s32 *)((u8 *)(temp_v1 + *(s32 *)(*(s32 *)((u8 *)temp_s3 + 0x4C) + temp_a1)) + 4) = -1;
loop_5:
    if (var_a3 < temp_s1) {
        goto block_4;
    }
    var_s0 += 1;
loop_7:
    if (var_s0 < temp_s2) {
        goto block_3;
    }
    *(s32 *)((u8 *)temp_s3 + 0x58) = amHeap_Alloc(temp_s1 * 0x30, 0, &D_0046EA58, 0x549);
    memset(*(s32 *)((u8 *)temp_s3 + 0x58), 0, temp_s1 * 0x30, 0);
    var_s0_2 = 0;
    goto loop_11;
block_10:
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    temp_a2 = var_s0_2 * 0x30;
    *(s32 *)((u8 *)((var_s0_2 * 0x30) + *(s32 *)((u8 *)temp_s3 + 0x58)) + 0x14) = 0;
    temp_a1_2 = var_s0_2 * 0x30;
    temp_a0 = var_s0_2 * 0x30;
    temp_v1_2 = var_s0_2 * 0x30;
    var_s0_2 += 1;
    *(s32 *)((u8 *)(temp_a2 + *(s32 *)((u8 *)temp_s3 + 0x58)) + 0x10) = 0;
    *(s32 *)((u8 *)(temp_a1_2 + *(s32 *)((u8 *)temp_s3 + 0x58)) + 0x18) = 0;
    *(s32 *)((u8 *)(temp_a0 + *(s32 *)((u8 *)temp_s3 + 0x58)) + 0x1C) = 0;
    *(s32 *)((u8 *)(temp_v1_2 + *(s32 *)((u8 *)temp_s3 + 0x58)) + 0x20) = 0;
loop_11:
    if (var_s0_2 < temp_s1) {
        goto block_10;
    }
    return;
block_14:
    *(s32 *)((u8 *)temp_s3 + 0x4C) = 0;
    return;
}
