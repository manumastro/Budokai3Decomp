/* Draft (not built): func_002A5B00 at 0x002A5B00, size 0x264, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 83 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x240, original 0x264
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5B00.s */

// src/story/evt_scrp.c func_002A5B00 size diff=83/144
extern void amHeap_Free(void *);
s32 func_0022D0E0(s32, s32);
s32 func_00298E30(s32 *, s32);
extern s32 D_005AB380;
extern s32 D_005AB3A0;
extern void Zenie_Release();
extern void func_002A9080(void *);
void func_002A5B00(void) {
    Task *temp_a0_3;
    Task *temp_a0_4;
    s32 *temp_s0;
    s32 *temp_s1;
    s32 *temp_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1_2;
    s8 temp_v1;
    u32 temp_v0;

    temp_s0 = gEvtWork;
    if ((((s32) *(s32 *)((u8 *)temp_s0 + 0x14) >> 0x10) & 0xFFFF) < 0x7D0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)(&D_005AB3A0) + 0x10) = (s32) *(s32 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210)) + 0x1250);
    }
    if (D_004708D8 > 0) {
        temp_v1 = *(s8 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210)) + 0x1267);
        if ((temp_v1 + D_004708D8) >= 0x64) {
            D_004708D8 = 0x63 - temp_v1;
        }
    }
    if (*(s32 *)((u8 *)temp_s0 + 0xF8) > 0) {
        SklSheet_Free();
        *(s32 *)((u8 *)temp_s0 + 0xF8) = 0;
    }
    temp_v1_2 = *(s32 *)((u8 *)temp_s0 + 0xF4);
    if (temp_v1_2 > 0) {
        temp_v0 = *(u32 *)((u8 *)D_004E6560 + 0x2AEE8) + temp_v1_2;
        if (temp_v0 < 0xF1B30U) {
            *(u32 *)((u8 *)D_004E6560 + 0x2AEE8) = temp_v0;
        } else {
            *(u32 *)((u8 *)D_004E6560 + 0x2AEE8) = 0xF1B30U;
        }
        *(s32 *)((u8 *)temp_s0 + 0xF4) = 0;
        temp_s1 = gEvtWork;
        temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x54);
        if (temp_a0 != 0) {
            func_0022D0E0(temp_a0, 1);
            *(s32 *)((u8 *)temp_s1 + 0x54) = 0;
        }
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 0x58);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)temp_s1 + 0x58) = 0;
        }
        if (*(s32 *)((u8 *)temp_s1 + 0x4C) != 0) {
            amCdFs_ReleaseCache(*(s32 *)((u8 *)temp_s1 + 0x44));
            *(s32 *)((u8 *)temp_s1 + 0x4C) = 0;
        }
        if (*(s32 *)((u8 *)temp_s1 + 0x50) != 0) {
            amCdFs_ReleaseCache(*(s32 *)((u8 *)temp_s1 + 0x48));
            *(s32 *)((u8 *)temp_s1 + 0x50) = 0;
        }
        temp_a0_3 = *(Task **)((u8 *)temp_s0 + 0x40);
        if (temp_a0_3 != NULL) {
            amTask_Kill(temp_a0_3);
            *(Task **)((u8 *)temp_s0 + 0x40) = NULL;
        }
        Zenie_Release();
    }
    func_002A9080((u8 *) *(s32 *)((u8 *)temp_s0 + 0));
    temp_s1_2 = gEvtWork;
    temp_a0_4 = *(Task **)((u8 *)temp_s1_2 + 8);
    if (temp_a0_4 != NULL) {
        amTask_Kill(temp_a0_4);
        *(s32 *)((u8 *)temp_s1_2 + 8) = 0;
    }
    if (gEvtWork != NULL) {
        amHeap_Free(gEvtWork);
        gEvtWork = NULL;
    }
    func_002A5870();
    if (*(s32 *)((u8 *)temp_s0 + 0x140) != -1) {
        func_00298E30(temp_s0 + 0xE0, *(s32 *)((u8 *)temp_s0 + 0xF0));
        *(s32 *)((u8 *)temp_s0 + 0x140) = -1;
        return;
    }
    if (*D_005AA604 != 0) {
        func_00298E30(&D_005AB380, *(s32 *)((u8 *)(*D_005AA604) + 0x11D0));
    }
}
