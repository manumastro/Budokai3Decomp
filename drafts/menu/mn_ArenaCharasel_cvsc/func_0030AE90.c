/* Draft (not built): func_0030AE90 at 0x0030AE90, size 0x188, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x188
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030AE90.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030AE90 size diff=26/101
s32 Help_TaskKill(s32);
s32 amCdFs_Close(s32, s32);
s32 func_0022D0E0(s32, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void ArenaList_Exit(void);
void func_0030AE90(void) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 var_s1;
    s32 var_s4_2;
    u8 *temp_a0;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_s1_2;
    u8 *var_s4;

    temp_s0 = D_00470990;
    if (temp_s0 != NULL) {
        temp_v0 = *(u8 **)((u8 *)temp_s0 + 0xC);
        var_s1 = 0;
        temp_s2 = *(u8 **)((u8 *)temp_v0 + 0x30);
        var_s4 = temp_s2;
        do {
            temp_a0 = *(u8 **)((u8 *)var_s4 + 8);
            if (temp_a0 != NULL) {
                func_0027E120(temp_a0);
            }
            var_s1 += 1;
            var_s4 += 4;
        } while (var_s1 < 2);
        var_s4_2 = 0;
        var_s1_2 = temp_s2;
        do {
            temp_a0_2 = *(s32 *)((u8 *)var_s1_2 + 0x10);
            if (temp_a0_2 != 0) {
                Help_TaskKill(temp_a0_2);
            }
            var_s4_2 += 1;
            var_s1_2 += 4;
        } while (var_s4_2 < 2);
        temp_a0_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x30)) + 0x1C);
        if (temp_a0_3 != 0) {
            func_0022D0E0(temp_a0_3, 1);
        }
        temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        temp_a0_5 = *(u8 **)((u8 *)temp_s2 + 4);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        amHeap_Free(temp_s2);
        temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0);
        if (temp_a0_6 != 0) {
            amCdFs_Close(temp_a0_6, 0);
        }
        temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 4);
        if (temp_a0_7 != 0) {
            amCdFs_Close(temp_a0_7, 0);
        }
        temp_a0_8 = *(u8 **)((u8 *)temp_s0 + 8);
        if (temp_a0_8 != NULL) {
            amTask_Kill(temp_a0_8);
        }
        temp_a0_9 = *(u8 **)((u8 *)temp_s0 + 0x10);
        if (temp_a0_9 != NULL) {
            amTask_Kill(temp_a0_9);
        }
        amTask_Kill(*(u8 **)((u8 *)temp_s0 + 0xC));
        amHeap_Free(temp_s0);
        D_00470990 = NULL;
        func_0027E070();
        ArenaList_Exit();
    }
}

/* Similar function already in C: OutputPass_Release (src/menu/mn_ipsyswnd.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void OutputPass_Release(void) {
    u8 *s0;
        u8 *base;
    s32 cnt;
    u8 *lp;
    s0 = gOutputPass;
    if (s0 == 0) {
        return;
    }
    if (s0 != 0 && *(void **)(s0 + 0x10) != 0) {
        base = *(u8 **)(*(u8 **)(s0 + 0x10) + 0x30);
        if (*(void **)base != 0) {
            func_0022D0E0(*(void **)base, 1);
            *(s32 *)base = 0;
        }
        cnt = 0;
        lp = base;
        do {
            func_0022D4B0(*(void **)(lp + 0x4), 1);
            cnt++;
            lp += 4;
        } while (cnt < 0x24);
        amHeap_Free(base);
        amTask_Kill(*(void **)(s0 + 0x10));
        *(s32 *)(s0 + 0x10) = 0;
    }
    if (*(void **)s0 != 0) {
        amCdFs_Close(*(void **)s0, 0);
    }
    if (*(void **)(s0 + 0x4) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x4), 0);
    }
    if (*(void **)(s0 + 0x8) != 0) {
        amHeap_Free(*(void **)(s0 + 0x8));
    }
    if (*(void **)(s0 + 0xC) != 0) {
        amHeap_Free(*(void **)(s0 + 0xC));
    }
    amHeap_Free(s0);
    gOutputPass = 0;
    Help_Exit();
}
#endif
