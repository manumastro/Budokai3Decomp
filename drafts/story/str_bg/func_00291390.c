/* Draft (not built): func_00291390 at 0x00291390, size 0x508, segment story/str_bg (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  555: mHeap_Alloc(0x3CF0, 0, (s32)((s32 *)((s32)((s32 *)((s32)(&D_0046BAE8))))), 0xE6); @ 552: if (D_004708A4 != NULL) {
 * Original: asm/nonmatchings/story/str_bg/func_00291390.s */

// src/story/str_bg.c func_00291390 cerr diff=-1/0
s32 amCdFs_ReadFileId(s32, s32, s32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
extern s32 D_004537A0;
extern s32 D_004538C0;
extern s32 D_0046BAE8;
extern s32 D_00470058;
void func_00291390(s8 arg0) {
    s32 *var_s1;
    s32 *var_s3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s8 var_s0;

    if (D_004708A4 != NULL) {
        amHeap_Free((void *)(D_004708A4));
    }
    D_004708A4 = amHeap_Alloc(0x3CF0, 0, (s32 *)((s32)((s32 *)((s32)((s32 *)((s32)(&D_0046BAE8)))))), 0xE6);
    memset((void *)(D_004708A4), 0, 0x3CF0);
    var_a1 = 0;
    var_a0 = 0;
    do {
        var_a1 += 6;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x354) = 0x10000;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x364) = 0x10000;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x374) = 0x10000;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x384) = 0x10000;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x394) = 0x10000;
        *(s32 *)((u8 *)(D_004708A4 + var_a0) + 0x3A4) = 0x10000;
        var_a0 += 0x60;
    } while (var_a1 < 7);
    var_v0 = 0;
    var_v1 = 0;
    *(s32 *)((u8 *)((var_a1 * 0x10) + D_004708A4) + 0x354) = 0x10000;
    do {
        var_v0 += 8;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x438) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x488) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x4D8) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x528) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x578) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x5C8) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x618) = -1;
        *(s32 *)((u8 *)(D_004708A4 + var_v1) + 0x668) = -1;
        var_v1 += 0x280;
    } while (var_v0 < 0x48);
    *(s8 *)((u8 *)D_004708A4 + 0x1AB4) = arg0;
    *(s32 *)((u8 *)D_004708A4 + 0x1AB0) = 0;
    *(s8 *)((u8 *)D_004708A4 + 0x1AE0) = (s8) *(&D_00470058 + arg0);
    if (arg0 == 0) {
        *(s32 *)((u8 *)D_004708A4 + 0) = amCdFs_ReadFileId(0xEB1, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 4) = amCdFs_ReadFileId(0xEB2, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 8) = amCdFs_ReadFileId(0xEB3, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0xC) = amCdFs_ReadFileId(0xEB4, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x10) = amCdFs_ReadFileId(0xEB5, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x14) = amCdFs_ReadFileId(0xEB6, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x18) = amCdFs_ReadFileId(0xEB7, 0, 1);
        var_v0_2 = amCdFs_ReadFileId(0xEB8, 0, 1);
    } else {
        *(s32 *)((u8 *)D_004708A4 + 0) = amCdFs_ReadFileId(0xED4, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 4) = amCdFs_ReadFileId(0xED5, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 8) = amCdFs_ReadFileId(0xED6, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0xC) = amCdFs_ReadFileId(0xED7, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x10) = amCdFs_ReadFileId(0xED8, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x14) = amCdFs_ReadFileId(0xED9, 0, 1);
        *(s32 *)((u8 *)D_004708A4 + 0x18) = amCdFs_ReadFileId(0xEDA, 0, 1);
        var_v0_2 = amCdFs_ReadFileId(0xEDB, 0, 1);
    }
    *(s32 *)((u8 *)D_004708A4 + 0x1C) = var_v0_2;
    var_s3 = &D_004537A0 + (arg0 * 0x90);
    var_a0_2 = *var_s3;
    if (var_a0_2 != -1) {
        var_s2 = 0x70;
        do {
            *(D_004708A4 + var_s2) = amCdFs_ReadFileId(var_a0_2, 0, 1);
            temp_a0 = *(s32 *)((u8 *)var_s3 + 4);
            if (temp_a0 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s2) + 4) = amCdFs_ReadFileId(temp_a0, 0, 1);
            }
            temp_a0_2 = *(s32 *)((u8 *)var_s3 + 8);
            if (temp_a0_2 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s2) + 8) = amCdFs_ReadFileId(temp_a0_2, 0, 1);
            }
            temp_a0_3 = *(s32 *)((u8 *)var_s3 + 0xC);
            if (temp_a0_3 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s2) + 0xC) = amCdFs_ReadFileId(temp_a0_3, 0, 1);
            }
            var_s3 += 0x10;
            var_a0_2 = *var_s3;
            var_s2 += 0x10;
        } while (var_a0_2 != -1);
    }
    var_s1 = &D_004538C0 + (arg0 * 0x60);
    var_a0_3 = *var_s1;
    var_s0 = 8;
    if (var_a0_3 != -1) {
        var_s3_2 = 0x20;
        do {
            *(D_004708A4 + var_s3_2) = amCdFs_ReadFileId(var_a0_3, 0, 1);
            *(s8 *)((u8 *)D_004708A4 + 0x1AB5) = var_s0;
            temp_a0_4 = *(s32 *)((u8 *)var_s1 + 4);
            if (temp_a0_4 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s3_2) + 4) = amCdFs_ReadFileId(temp_a0_4, 0, 1);
                *(s8 *)((u8 *)D_004708A4 + 0x1AB5) = (s8) (var_s0 + 1);
            }
            temp_a0_5 = *(s32 *)((u8 *)var_s1 + 8);
            if (temp_a0_5 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s3_2) + 8) = amCdFs_ReadFileId(temp_a0_5, 0, 1);
                *(s8 *)((u8 *)D_004708A4 + 0x1AB5) = (s8) (var_s0 + 2);
            }
            temp_a0_6 = *(s32 *)((u8 *)var_s1 + 0xC);
            if (temp_a0_6 != -1) {
                *(s32 *)((u8 *)(D_004708A4 + var_s3_2) + 0xC) = amCdFs_ReadFileId(temp_a0_6, 0, 1);
                *(s8 *)((u8 *)D_004708A4 + 0x1AB5) = (s8) (var_s0 + 3);
            }
            var_s1 += 0x10;
            var_a0_3 = *var_s1;
            var_s3_2 += 0x10;
            var_s0 += 4;
        } while (var_a0_3 != -1);
    }
}
