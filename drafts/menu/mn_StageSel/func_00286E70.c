/* Draft (not built): func_00286E70 at 0x00286E70, size 0x15C, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of keyword mwccps2.exe Compiler: 75: } @ 74: default:
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00286E70.s */

// src/menu/mn_StageSel.c func_00286E70 cerr diff=-1/0
s32 amSofdec_Destroy(s32);
s32 amSofdec_GetStat(s32, s128, s128, s32 *);
s32 amSofdec_StartAfs(s32, s32, s32);
extern s32 D_004534C0;
extern void func_00286FD0(void);
void func_00286E70(u8 *arg0) {
    u8 sp[0x400];
    s32 sp30;
    s32 *var_v1;
    s16 temp_a0_2;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v0;
    u8 *temp_s0;

    *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_004534C0) + 0);
    *(s128 *)((u8 *)(&sp30) + 0x10) = (s128) *(s128 *)((u8 *)(&D_004534C0) + 0x10);
    *(s128 *)((u8 *)(&sp30) + 0x20) = (s128) *(s128 *)((u8 *)(&D_004534C0) + 0x20);
    *(f32 *)((u8 *)(&sp30) + 0x30) = (f32) *(f32 *)((u8 *)(&D_004534C0) + 0x30);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_s0 = arg0 + 0x30;
    if (temp_a0 >= 0) {
        temp_v0 = amSofdec_GetStat(temp_a0, *(s128 *)((u8 *)(&D_004534C0) + 0x10), *(s128 *)((u8 *)(&D_004534C0) + 0), &sp30);
        switch (temp_v0) {
        case 0:
        case 3:
            temp_v1 = *(s16 *)((u8 *)temp_s0 + 4);
            if (temp_v1 >= 0) {
                amSofdec_StartAfs(*(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)((temp_v1 * 4) + sp) + 0x30), -1);
            }
            *(s16 *)((u8 *)temp_s0 + 6) = (s16) *(s16 *)((u8 *)temp_s0 + 4);
            return;
        case 2:
            temp_a0_2 = *(s16 *)((u8 *)temp_s0 + 4);
            if ((temp_a0_2 < 0) || (temp_a0_2 != *(s16 *)((u8 *)temp_s0 + 6))) {
                temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x30);
                if (temp_a0_3 >= 0) {
                    amSofdec_Destroy(temp_a0_3);
                }
                *(s32 *)((u8 *)arg0 + 0x30) = -1;
                var_v1 = (int *)(&func_00286FD0);
                if (&func_00286FD0 == NULL) {
                    var_v1 = NULL;
                }
block_20:
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            }
            break;
        case -1:
        case 4:
            temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x30);
            if (temp_a0_4 >= 0) {
                amSofdec_Destroy(temp_a0_4);
            }
            *(s32 *)((u8 *)arg0 + 0x30) = -1;
            var_v1 = (int *)(&func_00286FD0);
            if (&func_00286FD0 == NULL) {
                var_v1 = NULL;
            }
            goto block_20;
        }
    } else {
    default:
    }
}

/* Similar function already in C: func_002E54A0 (src/unk/unk_2E4030.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void func_002E54A0(SofTask *s) {
    SofIds ids = D_00456DD0;
    SofPlay *p = &s->p;
    s32 v;
    s32 st;

    if (p->h >= 0) {
        st = amSofdec_GetStat(p->h);
        /* FAKEMATCH: the original has the trapping addi v1,v0,1 (stat + 1) that the compiler never emits; it is an asm
         * statement here and the cases are shifted by one. */
        asm { addi v, st, 1 }
        switch (v) {
        case 1:
        case 4:
            if (p->cur >= 0) {
                amSofdec_StartAfs(p->h, ids.f0[p->cur], -1);
            }
            p->prev = p->cur;
            break;
        case 3:
            if (p->cur >= 0 && p->cur == p->prev) {
                break;
            }
            if (p->h >= 0) {
                amSofdec_Destroy(p->h);
            }
            p->h = -1;
            s->f1C = (Sofdec_TaskMain == NULL) ? NULL : (void *)Sofdec_TaskMain;
            break;
        case 2:
            break;
        case 5:
        case 0:
            if (p->h >= 0) {
                amSofdec_Destroy(p->h);
            }
            p->h = -1;
            s->f1C = (Sofdec_TaskMain == NULL) ? NULL : (void *)Sofdec_TaskMain;
            break;
        }
    }
}
#endif
