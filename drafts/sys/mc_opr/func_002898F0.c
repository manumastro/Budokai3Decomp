/* Draft (not built): func_002898F0 at 0x002898F0, size 0x2F0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 124 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2B8, original 0x2F0
 * Original: asm/nonmatchings/sys/mc_opr/func_002898F0.s */

// src/sys/mc_opr.c func_002898F0 size diff=124/174
extern s32 D_00470838;
s32 amMc_GetInfo(s32, s32, s32);
s32 amMc_Load(s32, s32, s32 *, void *);
extern s32 D_0046B8F0;
extern s32 D_0047084C;
extern s32 D_0058F680;
extern s32 D_005AA380;
extern s32 D_005AA388;
extern s32 D_005AA390;
extern u16 D_005AA394;
extern u16 D_005AA396;
extern s32 D_005AA398;
extern s32 D_005AA39C;
extern s32 D_005AA3A0;
extern s32 D_005AA3C0;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_00289DF0(void);
extern void func_00289BE0(void);
extern void func_002893F0(void);
void func_002898F0(u8 *arg0) {
    s32 *var_a1_2;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_4;
    s32 *var_v1_3;
    s32 var_a0;
    s32 var_a1;
    s8 temp_v0_2;
    u8 *temp_v0;
    u8 *var_a2;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    if ((&D_00470838)[D_0047084C] & 0x8000) {
        var_v1 = (int *)(&func_00289DF0);
        D_0047084C ^= 1;
        if (&func_00289DF0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        if ((&D_00470838)[D_0047084C] & 0x8000) {
            D_0047084C ^= 1;
        } else if (amMc_GetInfo(D_0047084C, 0, 0) != 0) {
            D_0047084C ^= 1;
        } else {
            var_v1_2 = (int *)(&func_00289BE0);
            if (&func_00289BE0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        }
        return;
    }
    temp_v0 = (unsigned char *)(func_00288AF0(&D_005AA3C0, gMcResult, 0));
    switch (gMcResult) {
    case -2:
        var_a1 = 5;
        var_v1_3 = &(&D_00470838)[D_0047084C];
block_32:
        *var_v1_3 = var_a1;
block_33:
        var_v1_4 = (int *)(&func_00289DF0);
        D_0047084C ^= 1;
        if (&func_00289DF0 == NULL) {
            var_v1_4 = NULL;
        }
        break;
    default:
        if (gMcResult < 0) {
            var_a1 = 1;
            var_v1_3 = &(&D_00470838)[D_0047084C];
            goto block_32;
        }
    case -6:
    case -5:
    case -4:
    case -1:
    case 0:
        if (temp_v0 != NULL) {
            var_a2 = temp_v0 + 0x20;
            var_a1_2 = &D_005AA3A0;
            var_a0 = 0x10;
            *(s16 *)((u8 *)(&D_005AA380) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 0);
            *(s16 *)((u8 *)(&D_005AA380) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 2);
            *(s16 *)((u8 *)(&D_005AA380) + 4) = (s16) *(s16 *)((u8 *)temp_v0 + 4);
            *(s16 *)((u8 *)(&D_005AA380) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 6);
            *(s16 *)((u8 *)(&D_005AA388) + 0) = (s16) *(s16 *)((u8 *)temp_v0 + 8);
            *(s16 *)((u8 *)(&D_005AA388) + 2) = (s16) *(s16 *)((u8 *)temp_v0 + 0xA);
            *(s16 *)((u8 *)(&D_005AA388) + 4) = (s16) *(s16 *)((u8 *)temp_v0 + 0xC);
            *(s16 *)((u8 *)(&D_005AA388) + 6) = (s16) *(s16 *)((u8 *)temp_v0 + 0xE);
            D_005AA390 = *(s32 *)((u8 *)temp_v0 + 0x10);
            D_005AA394 = *(u16 *)((u8 *)temp_v0 + 0x14);
            D_005AA396 = *(u16 *)((u8 *)temp_v0 + 0x16);
            D_005AA398 = *(s32 *)((u8 *)temp_v0 + 0x18);
            D_005AA39C = *(s32 *)((u8 *)temp_v0 + 0x1C);
            do {
                var_a0 -= 1;
                temp_v0_2 = *(s8 *)((u8 *)var_a2 + 1);
                *(s8 *)((u8 *)var_a1_2 + 0) = (s8) *(s8 *)((u8 *)var_a2 + 0);
                var_a2 += 2;
                *(s8 *)((u8 *)var_a1_2 + 1) = temp_v0_2;
                var_a1_2 += 2;
            } while (var_a0 > 0);
            if (amMc_Load(D_0047084C, 0, &D_0046B8F0, &D_0058F680 + (D_0047084C * 0xD680)) == 0) {
                var_v1_4 = (int *)(&func_002893F0);
                (&D_00470838)[D_0047084C] = 3;
                if (&func_002893F0 == NULL) {
                    var_v1_4 = NULL;
                }
            } else {
                goto block_33;
            }
        } else {
            var_a1 = 5;
            var_v1_3 = &(&D_00470838)[D_0047084C];
            goto block_32;
        }
        break;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
}
