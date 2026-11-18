/* Draft (not built): func_002B06B0 at 0x002B06B0, size 0x384, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 75 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x37C, original 0x384
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B06B0.s */

// src/unk/unk_2AF860.c func_002B06B0 size diff=75/223
s32 func_002AE810(void **);
s32 memset(void **, s32, s32);
extern s32 D_005BC440;
extern s32 D_005BC560;
extern s32 D_005BC9E0;
extern s32 D_005BCF38;
extern s32 D_005BCF3C;
extern void amHeap_Free(void *);
extern void amNode_Free(void *);
void func_002B06B0(s32 arg0) {
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_s5_4;
    s32 var_s5_5;
    u8 **temp_s0;
    u8 **temp_s1;
    u8 **temp_s2;
    u8 **temp_s3;
    u8 **temp_s4;
    u8 **temp_s7;
    u8 **var_s0;
    u8 **var_s1_2;
    u8 **var_s1_3;
    u8 **var_s2;
    u8 **var_s5_2;
    u8 **var_s5_3;
    u8 **var_s6;
    u8 **var_s6_2;
    u8 *temp_a0;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_13;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;

    temp_s3 = &D_005ABA80 + (arg0 * 0x8380);
    var_s1 = 0;
    var_s0 = temp_s3;
    do {
        temp_a0 = *(u8 **)((u8 *)var_s0 + 0);
        if (temp_a0 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0)));
        }
        temp_a0_2 = *(u8 **)((u8 *)var_s0 + 4);
        if (temp_a0_2 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_2)));
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s0 + 8);
        if (temp_a0_3 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_3)));
        }
        var_s5 = 0;
        var_s2 = var_s0;
loop_8:
        temp_a0_4 = *(u8 **)((u8 *)var_s2 + 0xC);
        if (temp_a0_4 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_4)));
        }
        var_s5 += 1;
        var_s2 += 4;
        if (var_s5 < 2) {
            goto loop_8;
        }
        var_s2_2 = 0;
        var_s5_2 = var_s0;
loop_12:
        temp_a0_5 = *(u8 **)((u8 *)var_s5_2 + 0x14);
        if (temp_a0_5 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_5)));
        }
        var_s2_2 += 1;
        var_s5_2 += 4;
        if (var_s2_2 < 2) {
            goto loop_12;
        }
        temp_a0_6 = *(u8 **)((u8 *)var_s0 + 0x38);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
        temp_a0_7 = *(u8 **)((u8 *)var_s0 + 0x3C);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        temp_a0_8 = *(u8 **)((u8 *)var_s0 + 0x2084);
        if (temp_a0_8 != NULL) {
            amHeap_Free(temp_a0_8);
        }
        var_s1 += 1;
        var_s0 += 0x20E0;
    } while (var_s1 < 4);
    var_s0_2 = 0;
    temp_s7 = (u8 **)(&D_005BC9E0 + (arg0 * 0x1A0));
    var_s1_2 = temp_s7;
    do {
        temp_a0_9 = *var_s1_2;
        if (temp_a0_9 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_9)));
        }
        var_s0_2 += 1;
        var_s1_2 += 0xD0;
    } while (var_s0_2 < 2);
    var_s0_3 = 0;
    temp_s2 = &D_005BC180 + (arg0 * 0x160);
    var_s1_3 = temp_s2;
    do {
        temp_a0_10 = *var_s1_3;
        if (temp_a0_10 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_10)));
        }
        var_s0_3 += 1;
        var_s1_3 += 0xB0;
    } while (var_s0_3 < 2);
    var_s0_4 = 0;
    temp_s1 = (u8 **)(&D_005BC440 + (arg0 * 0x90));
    var_s5_3 = temp_s1;
    do {
        temp_a0_11 = *(u8 **)((u8 *)var_s5_3 + 0);
        if (temp_a0_11 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_11)));
        }
        temp_a0_12 = *(u8 **)((u8 *)var_s5_3 + 8);
        if (temp_a0_12 != NULL) {
            amNode_Free(temp_a0_12);
        }
        var_s0_4 += 1;
        var_s5_3 += 0x30;
    } while (var_s0_4 < 3);
    var_s5_4 = 0;
    temp_s0 = (u8 **)(&D_005BC560 + (arg0 * 0x240));
    var_s6 = temp_s0;
    do {
        temp_a0_13 = *var_s6;
        if (temp_a0_13 != NULL) {
            amCdFs_ReleaseCache((s32)((void *)(temp_a0_13)));
        }
        var_s5_4 += 1;
        var_s6 += 0xC;
    } while (var_s5_4 < 0x30);
    var_s5_5 = 0;
    temp_s4 = &D_005BCD20 + (arg0 * 0xA0);
    var_s6_2 = temp_s4;
    do {
        func_002AE810((void **)(var_s6_2));
        var_s5_5 += 1;
        var_s6_2 += 0x28;
    } while (var_s5_5 < 4);
    D_005BCF38 = 0x45000000;
    D_005BCF3C = 0x45000000;
    memset((void **)(temp_s3), 0, 0x8380);
    memset((void **)(temp_s2), 0, 0x160);
    memset((void **)(temp_s1), 0, 0x90);
    memset((void **)(temp_s0), 0, 0x240);
    memset((void **)(temp_s7), 0, 0x1A0);
    memset((void **)(temp_s4), 0, 0xA0);
    amCdFs_SetHeap(0);
}
