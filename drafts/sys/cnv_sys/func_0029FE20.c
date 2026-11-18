/* Draft (not built): func_0029FE20 at 0x0029FE20, size 0x234, segment sys/cnv_sys (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/cnv_sys.s */

s32 amHeap_Alloc(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK memset(s32, M2C_UNK, s32, s32);             /* extern */
extern M2C_UNK D_0046EA58;
extern void *D_004708CC;

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
    void *temp_s3;

    temp_s3 = D_004708CC;
    temp_s2 = M2C_FIELD(temp_s3, s32 *, 0);
    temp_s1 = M2C_FIELD(temp_s3, s32 *, 0xC);
    if ((temp_s2 != 0) && (temp_s1 != 0)) {
        M2C_FIELD(temp_s3, s32 *, 0x4C) = amHeap_Alloc(temp_s2 * 4, 0, &D_0046EA58, 0x53F);
        var_s0 = 0;
loop_7:
        if (var_s0 < temp_s2) {
            temp_a3 = var_s0 * 4;
            *(M2C_FIELD(temp_s3, s32 *, 0x4C) + temp_a3) = amHeap_Alloc(temp_s1 * 0x2C, 0, &D_0046EA58, 0x541);
            memset(*(M2C_FIELD(temp_s3, s32 *, 0x4C) + temp_a3), 0, temp_s1 * 0x2C, temp_a3);
            var_a3 = 0;
            temp_a1 = var_s0 * 4;
loop_5:
            if (var_a3 < temp_s1) {
                temp_v1 = var_a3 * 0x2C;
                var_a3 += 1;
                *(*(M2C_FIELD(temp_s3, s32 *, 0x4C) + temp_a1) + temp_v1) = -1;
                M2C_FIELD((temp_v1 + *(M2C_FIELD(temp_s3, s32 *, 0x4C) + temp_a1)), s32 *, 4) = -1;
                goto loop_5;
            }
            var_s0 += 1;
            goto loop_7;
        }
        M2C_FIELD(temp_s3, s32 *, 0x58) = amHeap_Alloc(temp_s1 * 0x30, 0, &D_0046EA58, 0x549);
        memset(M2C_FIELD(temp_s3, s32 *, 0x58), 0, temp_s1 * 0x30);
        var_s0_2 = 0;
loop_11:
        if (var_s0_2 < temp_s1) {
            M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
            temp_a2 = var_s0_2 * 0x30;
            M2C_FIELD(((var_s0_2 * 0x30) + M2C_FIELD(temp_s3, s32 *, 0x58)), s32 *, 0x14) = 0;
            temp_a1_2 = var_s0_2 * 0x30;
            temp_a0 = var_s0_2 * 0x30;
            temp_v1_2 = var_s0_2 * 0x30;
            var_s0_2 += 1;
            M2C_FIELD((temp_a2 + M2C_FIELD(temp_s3, s32 *, 0x58)), s32 *, 0x10) = 0;
            M2C_FIELD((temp_a1_2 + M2C_FIELD(temp_s3, s32 *, 0x58)), s32 *, 0x18) = 0;
            M2C_FIELD((temp_a0 + M2C_FIELD(temp_s3, s32 *, 0x58)), s32 *, 0x1C) = 0;
            M2C_FIELD((temp_v1_2 + M2C_FIELD(temp_s3, s32 *, 0x58)), s32 *, 0x20) = 0;
            goto loop_11;
        }
        return;
    }
    M2C_FIELD(temp_s3, s32 *, 0x4C) = 0;
}
