/* Draft (not built): func_00288E70 at 0x00288E70, size 0x3A0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 124 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x378, original 0x3A0
 * Original: asm/nonmatchings/sys/mc_opr/func_00288E70.s */

// src/sys/mc_opr.c func_00288E70 size diff=124/222
extern s32 D_00470894;
extern s32 D_00470838;
void func_0028DDB0(u8 *arg0);
s32 amMc_GetInfo(s32, s32, s32, s16);
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_005AA380;
extern s32 D_005AA388;
extern s32 D_005AA390;
extern u16 D_005AA394;
extern u16 D_005AA396;
extern s32 D_005AA398;
extern s32 D_005AA39C;
extern s32 D_005AA3A0;
extern s32 D_005AA3C0;
extern s32 gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDA0(void);
extern void func_0028DDF0(void);
extern void func_00288BF0(void);
void func_00288E70(u8 *arg0) {
    s32 *var_a1;
    s32 *var_a2;
    s32 *var_a2_2;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s16 temp_a3;
    s16 temp_a3_2;
    s32 var_a0;
    s32 var_t0;
    s32 var_t1;
    s8 temp_v0_2;
    u32 var_a1_2;
    u8 *temp_v0;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    temp_v0 = (unsigned char *)(func_00288AF0(&D_005AA3C0, gMcResult, 0));
    switch (gMcResult) {
    case -2:
        (&D_00470838)[D_0047084C] = 5;
        func_00288870(-1, (s32 *)5);
        var_v1 = (int *)(&func_0028DDB0);
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470894 = (s32) func_0028DDA0;
        D_00470858 = 1;
        return;
    default:
        if (gMcResult < 0) {
            (&D_00470838)[D_0047084C] = 1;
            func_00288870(5, (s32 *)1);
            var_v1_2 = (int *)(&func_0028DDF0);
            if (&func_0028DDF0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            D_00470894 = (s32) &func_00288BF0;
            goto block_37;
        }
    case -6:
    case -5:
    case -4:
    case -1:
    case 0:
        temp_a3 = D_0047084C << 6;
        if (*(&gMcInfo + 4 + temp_a3) == 0) {
            (&D_00470838)[D_0047084C] = 5;
            func_00288870(-1, (s32 *)5);
            var_v1_3 = (int *)(&func_0028DDB0);
            if (&func_0028DDB0 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            D_00470894 = (s32) func_0028DDA0;
            D_00470858 = 1;
            return;
        }
        if (temp_v0 != NULL) {
            var_a2 = (int *)(temp_v0 + 0x20);
            var_a1 = &D_005AA3A0;
            var_a0 = 0x10;
            *(s16 *)((u8 *)(&D_005AA380) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 0);
            *(s16 *)((u8 *)(&D_005AA380) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 2);
            *(s16 *)((u8 *)(&D_005AA380) + 4) = (s16) *(s16 *)((u8 *)temp_v0 + 4);
            *(s16 *)((u8 *)(&D_005AA380) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 6);
            temp_a3_2 = *(s16 *)((u8 *)temp_v0 + 0xC);
            *(s16 *)((u8 *)(&D_005AA388) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 8);
            *(s16 *)((u8 *)(&D_005AA388) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 0xA);
            *(s16 *)((u8 *)(&D_005AA388) + 4) = temp_a3_2;
            *(s16 *)((u8 *)(&D_005AA388) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 0xE);
            D_005AA390 = *(s32 *)((u8 *)temp_v0 + 0x10);
            D_005AA394 = *(u16 *)((u8 *)temp_v0 + 0x14);
            D_005AA396 = *(u16 *)((u8 *)temp_v0 + 0x16);
            D_005AA398 = *(s32 *)((u8 *)temp_v0 + 0x18);
            D_005AA39C = *(s32 *)((u8 *)temp_v0 + 0x1C);
            do {
                var_a0 -= 1;
                temp_v0_2 = *(s8 *)((u8 *)var_a2 + 1);
                *(s8 *)((u8 *)var_a1 + 0) = (s8) *(s8 *)((u8 *)var_a2 + 0);
                var_a2 += 2;
                *(s8 *)((u8 *)var_a1 + 1) = temp_v0_2;
                var_a1 += 2;
            } while (var_a0 > 0);
            func_00288870(-1, var_a1, var_a2, temp_a3_2);
            var_v1_4 = (int *)(&func_0028DDB0);
            if (&func_0028DDB0 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
            D_00470894 = (s32) func_0028DDA0;
            D_00470858 = 1;
            return;
        }
        var_a1_2 = D_0047084C * 4;
        (&D_00470838)[D_0047084C] = 5;
        var_t0 = 0x6B;
        var_t1 = 0;
        var_a2_2 = &D_005AA3C0;
        if (gMcResult > 0) {
            do {
                var_a1_2 = (u32) (*(s32 *)((u8 *)var_a2_2 + 0x10) + 0x3FF) >> 0xA;
                var_t0 -= var_a1_2;
                if (*(u16 *)((u8 *)var_a2_2 + 0x14) & 0x20) {
                    var_t0 -= 1;
                }
                var_t1 += 1;
                var_a2_2 += 0x40;
            } while (var_t1 < gMcResult);
        }
        if (*(&gMcInfo + 8 + temp_a3) >= var_t0) {
            func_00288870(-1, (s32 *) var_a1_2, var_a2_2, temp_a3);
            var_v1_5 = (int *)(&func_0028DDB0);
            if (&func_0028DDB0 == NULL) {
                var_v1_5 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
            D_00470894 = (s32) func_0028DDA0;
            D_00470858 = 1;
            return;
        }
        amMc_GetInfo(D_0047084C, 0, 0, temp_a3);
        func_00288870(0x10);
        var_v1_6 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1_6 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
        D_00470894 = (s32) &func_00288BF0;
block_37:
        D_00470854 = 1;
        return;
    }
}
