/* Draft (not built): func_002A5870 at 0x002A5870, size 0x288, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oid (*)(struct Task *), int, int, @ 2067: *(u8 **)((u8 *)temp_s0 + 8) = amTask_Create(func_002A5420, 0, 0x3000, 0x4000);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A5870.s */

// src/story/evt_scrp.c func_002A5870 cerr diff=-1/0
extern s32 D_004700A8;
s32 func_002A94B0(s32, s32, s32);
extern void func_002A5420(void);
extern void func_002A7160(void);
void func_002A5870(void) {
    s32 temp_a0;
    s32 temp_a2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *var_s0;

    temp_a0 = D_004700A0;
    if (D_004708D8 > 0) {
        EvtScrp_Init();
        temp_s0 = (u8 *)(gEvtWork);
        func_0029AC30();
        *(u8 **)((u8 *)temp_s0 + 8) = amTask_Create(func_002A5420, 0, 0x3000, 0x4000);
        return;
    }
    temp_a2 = D_004700A8;
    switch (temp_a2) {                              /* irregular */
    case -1:
        if (temp_a0 != -1) {
            D_004700A0 = -1;
            func_002A94B0(temp_a0, -1, temp_a2);
            temp_s0_2 = (u8 *)(gEvtWork);
            if (temp_s0_2 != NULL) {
                *(s32 *)((u8 *)temp_s0_2 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0xC) | 1);
                if (*(s32 *)((u8 *)temp_s0_2 + 0x124) >= 0) {
                    *(u8 **)((u8 *)temp_s0_2 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                    *(s32 *)((u8 *)temp_s0_2 + 0x12C) = 0;
                }
            }
        }
        return;
    case -3221225469:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = (u8 *)(gEvtWork);
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(u8 **)((u8 *)var_s0 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
block_27:
                *(s32 *)((u8 *)var_s0 + 0x12C) = 0;
            }
        }
        return;
    case -3221225471:
    case -3221225467:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = (u8 *)(gEvtWork);
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(u8 **)((u8 *)var_s0 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                goto block_27;
            }
        }
        break;
    case -3221225472:
    case -3221225468:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = (u8 *)(gEvtWork);
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(u8 **)((u8 *)var_s0 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                goto block_27;
            }
        }
        break;
    case -3221225470:
        D_004700A8 = -1;
        func_002A94B0(temp_a2, -1, temp_a2);
        var_s0 = (u8 *)(gEvtWork);
        if (var_s0 != NULL) {
            *(s32 *)((u8 *)var_s0 + 0xC) = (s32) (*(s32 *)((u8 *)var_s0 + 0xC) | 1);
            if (*(s32 *)((u8 *)var_s0 + 0x124) >= 0) {
                *(u8 **)((u8 *)var_s0 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                goto block_27;
            }
        }
        break;
    }
}
