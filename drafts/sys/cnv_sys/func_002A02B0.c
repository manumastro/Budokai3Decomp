/* Draft (not built): func_002A02B0 at 0x002A02B0, size 0x444, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 142 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x458, original 0x444
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A02B0.s */

// src/sys/cnv_sys.c func_002A02B0 size diff=142/278
extern u8 *D_004708CC;
s32 amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(s32, s32, s32);
extern s32 D_0046EA58;
void func_002A02B0(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_t1;
    s32 var_t2;
    s32 var_t4;
    s32 var_v1;
    u8 *temp_s5;
    u8 *temp_t3;
    u8 *temp_t4;
    u8 *temp_t4_2;
    u8 *temp_t4_3;
    u8 *temp_t4_4;
    u8 *temp_t4_5;
    u8 *temp_t4_6;
    u8 *temp_t4_7;
    u8 *temp_t4_8;

    temp_s5 = D_004708CC;
    temp_s4 = *(s32 *)((u8 *)temp_s5 + 0);
    temp_s3 = *(s32 *)((u8 *)temp_s5 + 4);
    if (temp_s4 == 0) {
        goto block_14;
    }
    if (temp_s3 == 0) {
        goto block_14;
    }
    *(s32 *)((u8 *)temp_s5 + 0x44) = amHeap_Alloc(temp_s4 * 4, 0, &D_0046EA58, 0x4DF);
    var_s2 = 0;
    if (temp_s4 <= 0) {
        goto block_13;
    }
    var_s1 = 0;
    temp_s0 = temp_s3 * 0xE0;
loop_4:
    *(s32 *)(*(s32 *)((u8 *)temp_s5 + 0x44) + var_s1) = amHeap_Alloc(temp_s0, 0, &D_0046EA58, 0x4E1);
    memset(*(s32 *)(*(s32 *)((u8 *)temp_s5 + 0x44) + var_s1), 0, temp_s0);
    var_a1 = 0;
    if (temp_s3 <= 0) {
        goto block_12;
    }
    if (temp_s3 < 9) {
        goto block_8;
    }
    var_v1 = 0;
loop_7:
    var_a1 += 8;
    *(s32 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0xE0) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x1C0) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x2A0) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x380) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x460) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x540) = -1;
    *(s32 *)((u8 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_v1) + 0x620) = -1;
    var_v1 += 0x700;
    if (var_a1 < (temp_s3 - 8)) {
        goto loop_7;
    }
block_8:
    if (var_a1 >= temp_s3) {
        goto block_12;
    }
    var_a2 = var_a1 * 0xE0;
loop_10:
    var_a1 += 1;
    *(s32 *)(*(s32 *)(var_s1 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2) = -1;
    var_a2 += 0xE0;
    if (var_a1 < temp_s3) {
        goto loop_10;
    }
block_12:
    var_s2 += 1;
    var_s1 += 4;
    if (var_s2 < temp_s4) {
        goto loop_4;
    }
block_13:
    temp_s0_2 = temp_s3 * 8;
    *(s32 *)((u8 *)temp_s5 + 0x50) = amHeap_Alloc(temp_s0_2, 0, &D_0046EA58, 0x4E8);
    memset(*(s32 *)((u8 *)temp_s5 + 0x50), 0, temp_s0_2);
    goto block_15;
block_14:
    *(s32 *)((u8 *)temp_s5 + 0x44) = 0;
    return;
block_15:
    var_t2 = 0;
    if (temp_s4 <= 0) {
        goto block_25;
    }
    var_a3 = 0;
loop_17:
    var_t1 = 0;
    if (temp_s3 <= 0) {
        goto block_24;
    }
    var_a2_2 = 0;
    if (temp_s3 < 9) {
        goto block_20;
    }
loop_19:
    var_t1 += 8;
    temp_t4 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4 + 0x30) = 0x44;
    *(s32 *)((u8 *)temp_t4 + 0x60) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4 + 0x64) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4 + 0xB0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4 + 0xB4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4 + 0x20) = 0x43960000;
    *(s32 *)((u8 *)temp_t4 + 0x24) = 0x43960000;
    temp_t4_2 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_2 + 0x110) = 0x44;
    *(s32 *)((u8 *)temp_t4_2 + 0x140) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_2 + 0x144) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_2 + 0x190) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_2 + 0x194) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_2 + 0x100) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_2 + 0x104) = 0x43960000;
    temp_t4_3 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_3 + 0x1F0) = 0x44;
    *(s32 *)((u8 *)temp_t4_3 + 0x220) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_3 + 0x224) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_3 + 0x270) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_3 + 0x274) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_3 + 0x1E0) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_3 + 0x1E4) = 0x43960000;
    temp_t4_4 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_4 + 0x2D0) = 0x44;
    *(s32 *)((u8 *)temp_t4_4 + 0x300) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_4 + 0x304) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_4 + 0x350) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_4 + 0x354) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_4 + 0x2C0) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_4 + 0x2C4) = 0x43960000;
    temp_t4_5 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_5 + 0x3B0) = 0x44;
    *(s32 *)((u8 *)temp_t4_5 + 0x3E0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_5 + 0x3E4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_5 + 0x430) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_5 + 0x434) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_5 + 0x3A0) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_5 + 0x3A4) = 0x43960000;
    temp_t4_6 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_6 + 0x490) = 0x44;
    *(s32 *)((u8 *)temp_t4_6 + 0x4C0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_6 + 0x4C4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_6 + 0x510) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_6 + 0x514) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_6 + 0x480) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_6 + 0x484) = 0x43960000;
    temp_t4_7 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_7 + 0x570) = 0x44;
    *(s32 *)((u8 *)temp_t4_7 + 0x5A0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_7 + 0x5A4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_7 + 0x5F0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_7 + 0x5F4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_7 + 0x560) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_7 + 0x564) = 0x43960000;
    temp_t4_8 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_a2_2);
    *(s32 *)((u8 *)temp_t4_8 + 0x650) = 0x44;
    var_a2_2 += 0x700;
    *(s32 *)((u8 *)temp_t4_8 + 0x680) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_8 + 0x684) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_8 + 0x6D0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_8 + 0x6D4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t4_8 + 0x640) = 0x43960000;
    *(s32 *)((u8 *)temp_t4_8 + 0x644) = 0x43960000;
    if (var_t1 < (temp_s3 - 8)) {
        goto loop_19;
    }
block_20:
    if (var_t1 >= temp_s3) {
        goto block_24;
    }
    var_t4 = var_t1 * 0xE0;
loop_22:
    var_t1 += 1;
    temp_t3 = (unsigned char *)(*(s32 *)(var_a3 + *(s32 *)((u8 *)temp_s5 + 0x44)) + var_t4);
    *(s32 *)((u8 *)temp_t3 + 0x30) = 0x44;
    var_t4 += 0xE0;
    *(s32 *)((u8 *)temp_t3 + 0x60) = 0x3F800000;
    *(s32 *)((u8 *)temp_t3 + 0x64) = 0x3F800000;
    *(s32 *)((u8 *)temp_t3 + 0xB0) = 0x3F800000;
    *(s32 *)((u8 *)temp_t3 + 0xB4) = 0x3F800000;
    *(s32 *)((u8 *)temp_t3 + 0x20) = 0x43960000;
    *(s32 *)((u8 *)temp_t3 + 0x24) = 0x43960000;
    if (var_t1 < temp_s3) {
        goto loop_22;
    }
block_24:
    var_t2 += 1;
    var_a3 += 4;
    if (var_t2 < temp_s4) {
        goto loop_17;
    }
block_25:
    return;
}
