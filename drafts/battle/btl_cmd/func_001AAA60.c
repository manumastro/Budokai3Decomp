/* Draft (not built): func_001AAA60 at 0x001AAA60, size 0x43C, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); char *)' does not match 'func_001A8BD0(unsigned char *)' @ 1460: func_001A8BD0(&spA0, temp_a1,(unsigned char *)(&spB0));
 * Original: asm/nonmatchings/battle/btl_cmd/func_001AAA60.s */

// src/battle/btl_cmd.c func_001AAA60 cerr diff=-1/0
s32 A2d_CallHandler(s32, s32 *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_001E9400(s16 *);
extern s32 D_00468230;
extern s32 D_00495A40;
extern void amHeap_Free(void *);
void func_001AAA60(u8 *arg0) {
    s32 sp90;
    s32 sp94;
    s16 spA0;
    s16 spA2;
    s8 spA6;
    s8 spA7;
    u8 *spA8;
    u8 *spAC;
    u8 *spB0;
    u8 *spB4;
    s32 *temp_s3;
    s32 *var_s2;
    s32 *var_v1;
    s16 temp_a0;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s5;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_s3 = *(s32 **)((u8 *)arg0 + 0x1E8);
    if ((temp_s3 != NULL) && (*(s32 *)((u8 *)arg0 + 0x40C) <= 0)) {
        if (*(s16 *)((u8 *)temp_s3 + 0xE) == 0) {
            *(s32 *)((u8 *)arg0 + 0x1EC) = 0;
            temp_v1 = *(u8 **)((u8 *)arg0 + 0x1E4);
            if (temp_v1 != NULL) {
                var_v1 = *(s32 **)((u8 *)temp_v1 + 8);
            } else {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1E8) = var_v1;
            *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = -1;
            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = 0;
            *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
            *(s32 *)((u8 *)arg0 + 0x40C) = (s32) (*(s32 *)((u8 *)arg0 + 0x40C) + 1);
            return;
        }
        if ((temp_s3 == *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8)) || ((s32)(temp_s3) == (s32)(*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3FC) * 0x10) + arg0) + 0x204)))) {
            temp_a0 = *(s16 *)((u8 *)arg0 + 0x46);
            spA6 = (s8) temp_a0;
            temp_s7 = (unsigned char *)(gBattle + (temp_a0 * 0x2020) + 0x830);
            spA7 = (s32) temp_s3 != (s32) *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8);
            spA2 = 0;
            temp_v0 = amHeap_Alloc(*(s16 *)((u8 *)temp_s3 + 0xE) * 8, 1, &D_00468230, 0x2FF);
            spAC = temp_v0;
            spB0 = spAC + (*(s16 *)((u8 *)temp_s3 + 0xE) * 4);
            temp_a1 = *(s16 *)((u8 *)temp_s3 + 0xE) * 2;
            spB4 = spB0 + temp_a1;
            spA0 = *(s16 *)((u8 *)temp_s3 + 0xE);
            spA8 = (unsigned char *)(temp_s3 + 0x40);
            func_001A8BD0(&spA0, temp_a1,(unsigned char *)(&spB0));
            if (spA2 > 0) {
                var_s1 = func_001E9400(&spA0);
                if (var_s1 < 0) {
                    var_s2 = NULL;
                } else {
                    var_s2 = (int *)(*(spAC + (var_s1 * 4)));
                }
            } else {
                var_s1 = -1;
                var_s2 = NULL;
            }
            amHeap_Free(temp_v0);
            if (var_s2 == NULL) {
                if ((temp_s3 != *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8)) && (var_s1 == -2)) {
                    *(s32 **)((u8 *)arg0 + 0x1E8) = &D_00495A40;
                    *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                    *(s32 *)((u8 *)arg0 + 0x1EC) = 0;
                    *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
                    *(s32 **)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
                    *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                    *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
                }
                return;
            }
            *(s32 **)((u8 *)arg0 + 0x1E8) = var_s2;
            *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
            *(s32 *)((u8 *)arg0 + 0x1F4) = 0;
            temp_s2 = (unsigned char *)(gBattle + (*(s16 *)((u8 *)arg0 + 0x46) * 0x2020) + 0x830);
            var_s1_2 = 0;
            if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE) > 0) {
                var_s5 = 0;
                do {
                    temp_s0 = *(u8 **)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8) + var_s5) + 0x40);
                    if ((*(s32 *)((u8 *)temp_s0 + 8) & 2) && (func_001DF420(temp_s2, *(s16 *)((u8 *)temp_s0 + 0x10), 2) != 0)) {
                        sp90 = *(s32 *)((u8 *)temp_s2 + 0x1350);
                        sp94 = (s32) *(s16 *)((u8 *)temp_s0 + 0x10);
                        A2d_CallHandler(0x30, &sp90);
                    }
                    var_s1_2 += 1;
                    var_s5 += 4;
                } while (var_s1_2 < *(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE));
            }
            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
            *(s32 **)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
            if ((s32)(temp_s3) == (s32)(*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3FC) * 0x10) + arg0) + 0x204))) {
                *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = (s32) *(s32 *)((u8 *)temp_s7 + 0xC58);
            } else {
                *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = -1;
            }
            if (temp_s3 == *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8)) {
                temp_a0_2 = (*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0;
                *(s32 *)((u8 *)temp_a0_2 + 0x1F8) = (s32) (*(s32 *)((u8 *)temp_a0_2 + 0x1F8) | 2);
            }
            *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
        }
    }
}
