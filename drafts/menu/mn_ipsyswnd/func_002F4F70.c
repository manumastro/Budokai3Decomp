/* Draft (not built): func_002F4F70 at 0x002F4F70, size 0x1B0, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x1B0
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4F70.s */

// src/menu/mn_ipsyswnd.c func_002F4F70 size diff=46/113
void *func_0022D860(s32, s32);
extern s8 D_004B4B63;
extern char D_00492FCE[];
void func_002F4F70(u8 *arg0) {
    s32 *var_v1;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s1;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gOutputPass;
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x6000);
    D_00470238 = 0;
    temp_a0_2 = *(u8 **)((u8 *)gOutputPass + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x6000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x6000);
    D_00470238 = 0;
    temp_s0_2 = *(u8 **)((u8 *)temp_s3 + 0);
    if (temp_s0_2 != NULL) {
        func_0022C060((s32)(temp_s0_2), 0x3F800000);
        func_0022CD00((s32)((void *)(temp_s0_2)));
    }
    var_s2 = 0;
    if (*(s16 *)((u8 *)temp_s3 + 0xC0) == 2) {
        var_s1 = temp_s3;
        var_s0 = temp_s3;
        do {
            if (*(u16 *)((u8 *)var_s1 + 0xC2) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 0x24);
    }
    A2d_FlushList();
    if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x5000) {
        temp_s0_3 = gOutputPass;
        temp_a0_3 = *(u8 **)((u8 *)temp_s0_3 + 0xC);
        D_00470704 = (s32)(temp_a0_3);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x6000);
        D_00470238 = 0;
        temp_a0_4 = *(u8 **)((u8 *)temp_s3 + 0);
        if (temp_a0_4 != NULL) {
            func_0022D0E0(temp_a0_4, 1);
        }
        *(u8 **)((u8 *)temp_s3 + 0) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 8)) + 0x14)) + 4), 0);
        *(s16 *)((u8 *)temp_s3 + 0xC0) = 3;
        *(s32 *)((u8 *)temp_s3 + 0xBC) = 0x41F00000;
        var_v1 = (s32 *)(&func_002F4E40);
        if (&func_002F4E40 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
