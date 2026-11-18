/* Draft (not built): func_002A7CB0 at 0x002A7CB0, size 0x2C0, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); )temp_s0 + 0x94) * 4)), 0); @ 2711: *(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), 0);
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7CB0.s */

// src/story/evt_scrp.c func_002A7CB0 cerr diff=-1/0
s32 func_00264140(s32, s32);
void func_002A7CB0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    u16 temp_s1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;

    temp_s0 = (u8 *)(gEvtWork);
    temp_s1 = *(u16 *)((u8 *)temp_s0 + 0x14);
    if (*(s32 *)((u8 *)temp_s0 + 0xC) & 1) {
        func_00264140(-1, 0);
        *(s32 *)((u8 *)temp_s0 + 0x98) = 0;
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x78);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x870000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x870000);
        D_00470238 = 0;
        switch (temp_s1) {                          /* irregular */
        case 4:
        case 0:
            *(s32 *)((u8 *)temp_s0 + 0x90) = 4;
            *(s32 *)((u8 *)temp_s0 + 0x94) = 5;
            *(s32 *)((u8 *)temp_s0 + 0x80) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), 0);
            *(s32 *)((u8 *)temp_s0 + 0x84) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), 0);
            temp_s0_2 = (u8 *)(gEvtWork);
            if (temp_s0_2 != NULL) {
                *(s32 *)((u8 *)temp_s0_2 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0xC) | 1);
                if (*(s32 *)((u8 *)temp_s0_2 + 0x124) >= 0) {
                    *(u8 **)((u8 *)temp_s0_2 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                    *(s32 *)((u8 *)temp_s0_2 + 0x12C) = 0;
                }
            }
            var_v1 = (s32 *)(&func_002A7B50);
            D_004700A8 = temp_s1 + 0x40000001;
            if (&func_002A7B50 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        case 5:
        case 1:
            *(s32 *)((u8 *)temp_s0 + 0x90) = 6;
            *(s32 *)((u8 *)temp_s0 + 0x94) = 7;
            *(s32 *)((u8 *)temp_s0 + 0x80) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), 0);
            *(s32 *)((u8 *)temp_s0 + 0x84) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), 0);
            temp_s0_3 = (u8 *)(gEvtWork);
            if (temp_s0_3 != NULL) {
                *(s32 *)((u8 *)temp_s0_3 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0_3 + 0xC) | 1);
                if (*(s32 *)((u8 *)temp_s0_3 + 0x124) >= 0) {
                    *(u8 **)((u8 *)temp_s0_3 + 0x128) = amTask_Create(func_002A7160, 0, 0x8000, 0x4000);
                    *(s32 *)((u8 *)temp_s0_3 + 0x12C) = 0;
                }
            }
            var_v1_2 = (s32 *)(&func_002A75C0);
            if (&func_002A75C0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
            D_004700A8 = -1;
            return;
        case 2:
            *(s32 *)((u8 *)temp_s0 + 0x90) = 0;
            *(s32 *)((u8 *)temp_s0 + 0x94) = 1;
            *(s32 *)((u8 *)temp_s0 + 0x80) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x90) * 4)), 0);
            *(s32 *)((u8 *)temp_s0 + 0x84) = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x74)) + 0x14) + (*(s32 *)((u8 *)temp_s0 + 0x94) * 4)), 0);
            D_004700A8 = -1;
            var_v1_3 = (s32 *)(&func_002A7B50);
            if (&func_002A7B50 == NULL) {
                var_v1_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
            break;
        }
    }
}
