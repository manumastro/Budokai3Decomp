/* Draft (not built): func_00287C60 at 0x00287C60, size 0x1F8, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00287C60.s */

// src/menu/mn_StageSel.c func_00287C60 diff diff=17/126
s32 amCdFs_Close(s32, s32);
s32 amSofdec_Destroy(s32);
s32 func_00285C10(void *);
extern void *D_0047082C;
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void amNode_Free(void *);
extern void Help_Exit();
void func_00287C60(void) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;

    var_s2 = D_0047082C;
    var_s0 = *(u8 **)((u8 *)var_s2 + 0x14);
    if (var_s0 != NULL) {
        var_s1 = *(u8 **)((u8 *)var_s0 + 0x30);
        func_00285C10(var_s1);
        temp_a0 = *(u8 **)((u8 *)var_s1 + 0);
        if (temp_a0 != NULL) {
            amHeap_Free(temp_a0);
        }
        temp_a0_2 = *(u8 **)((u8 *)var_s1 + 4);
        if (temp_a0_2 != NULL) {
            amHeap_Free(temp_a0_2);
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s1 + 8);
        if (temp_a0_3 != NULL) {
            amHeap_Free(temp_a0_3);
        }
        temp_a0_4 = *(u8 **)((u8 *)var_s1 + 0xC);
        if (temp_a0_4 != NULL) {
            amHeap_Free(temp_a0_4);
        }
        temp_a0_5 = *(u8 **)((u8 *)var_s1 + 0x10);
        if (temp_a0_5 != NULL) {
            amHeap_Free(temp_a0_5);
        }
        temp_a0_6 = *(u8 **)((u8 *)var_s1 + 0xE0);
        if (temp_a0_6 != NULL) {
            amHeap_Free(temp_a0_6);
        }
        temp_a0_7 = *(u8 **)((u8 *)var_s1 + 0xE4);
        if (temp_a0_7 != NULL) {
            amHeap_Free(temp_a0_7);
        }
        var_s4 = 0;
        var_s3 = var_s1;
        do {
            amNode_Free(*(u8 **)((u8 *)var_s3 + 0x170));
            var_s4 += 1;
            var_s3 += 0x30;
        } while (var_s4 < 4);
        temp_v0 = *(u8 **)((u8 *)var_s1 + 0x230);
        if (temp_v0 != NULL) {
            temp_a0_8 = *(s32 *)((u8 *)temp_v0 + 0x30);
            var_s3 = temp_v0 + 0x30;
            if (temp_a0_8 >= 0) {
                amSofdec_Destroy(temp_a0_8);
            }
            *(s32 *)((u8 *)temp_v0 + 0x30) = -1;
            *(s16 *)((u8 *)var_s3 + 4) = -1;
            *(s16 *)((u8 *)var_s3 + 6) = -1;
            amTask_Kill(*(u8 **)((u8 *)var_s1 + 0x230));
        }
        amHeap_Free(var_s1);
        amTask_Kill(var_s0);
    }
    temp_a0_9 = *(s32 *)((u8 *)var_s2 + 8);
    if (temp_a0_9 != 0) {
        amCdFs_Close(temp_a0_9, 0);
    }
    temp_a0_10 = *(s32 *)((u8 *)var_s2 + 0xC);
    if (temp_a0_10 != 0) {
        amCdFs_Close(temp_a0_10, 0);
    }
    temp_a0_11 = *(s32 *)((u8 *)var_s2 + 0x10);
    if (temp_a0_11 != 0) {
        amCdFs_Close(temp_a0_11, 0);
    }
    temp_a0_12 = *(s32 *)((u8 *)var_s2 + 0);
    if (temp_a0_12 != 0) {
        amCdFs_Close(temp_a0_12, 0);
    }
    temp_a0_13 = *(s32 *)((u8 *)var_s2 + 4);
    if (temp_a0_13 != 0) {
        amCdFs_Close(temp_a0_13, 0);
    }
    amHeap_Free(var_s2);
    D_0047082C = NULL;
    Help_Exit();
}
