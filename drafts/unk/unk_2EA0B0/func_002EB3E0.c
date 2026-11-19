/* Draft (not built): func_002EB3E0 at 0x002EB3E0, size 0x174, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x180, original 0x174
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EB3E0.s */

// src/unk/unk_2EA0B0.c func_002EB3E0 size diff=37/96
void func_002EB3E0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;

    temp_s0 = D_00470958;
    if (temp_s0 != NULL) {
        *(s32 *)((u8 *)temp_s0 + 0) = arg0;
        *(u8 **)((u8 *)temp_s0 + 0x14) = (u8 *) (D_00457E50[arg0] + (arg1 * 0xC));
        *(s32 *)((u8 *)temp_s0 + 0x18) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
        *(s32 *)((u8 *)temp_s0 + 0x20) = 0;
        *(s32 *)((u8 *)temp_s0 + 0xC) = -1;
        *(s32 *)((u8 *)temp_s0 + 0x48) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0);
        *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
        temp_s1 = gBattle + 0x830;
        temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 8) + 0x2D8;
        if (*(s32 *)((u8 *)gBattle + 0x13A0) != temp_v1) {
            *(s16 *)((u8 *)temp_s1 + 0xCB4) = 1;
            *(s32 *)((u8 *)temp_s1 + 0xB70) = temp_v1;
            *(s16 *)((u8 *)temp_s1 + 0xCB6) = 1;
            func_001C75D0(temp_s1, 0xF);
            *(s32 *)((u8 *)temp_s1 + 0xCA4) = 0x3F800000;
            *(s32 *)((u8 *)temp_s1 + 0xCA8) = 0;
        }
        temp_s1_2 = gBattle + 0x2850;
        temp_v1_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0xA) + 0x2D8;
        if (*(s32 *)((u8 *)gBattle + 0x33C0) != temp_v1_2) {
            *(s16 *)((u8 *)temp_s1_2 + 0xCB4) = 1;
            *(s32 *)((u8 *)temp_s1_2 + 0xB70) = temp_v1_2;
            *(s16 *)((u8 *)temp_s1_2 + 0xCB6) = 1;
            func_001C75D0(temp_s1_2, 0xF);
            *(s32 *)((u8 *)temp_s1_2 + 0xCA4) = 0x3F800000;
            *(s32 *)((u8 *)temp_s1_2 + 0xCA8) = 0;
        }
        func_002E9BA0(0);
        func_002E9B90(0);
        func_002EAC30();
        if (*(s32 *)((u8 *)temp_s0 + 8) == 0) {
            *(s32 *)((u8 *)temp_s0 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x50)) + 0x1C)) + 0xC0), 0.0f);
            temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x54);
            D_00470704 = temp_a0;
            D_0047070C = 0x05000000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0, 0x05000000);
            D_00470238 = 0;
            func_0022C060(*(s32 *)((u8 *)temp_s0 + 8), 0.0f);
        }
    }
}
