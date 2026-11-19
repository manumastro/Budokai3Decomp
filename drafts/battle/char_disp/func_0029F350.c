/* Draft (not built): func_0029F350 at 0x0029F350, size 0x118, segment battle/char_disp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_disp/func_0029F350.s */

void func_0029F350(u8 *arg0, u8 *arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x18);
    switch (temp_a0) {
        case 0:
            break;

        default:

        case 2:

        case 1:
            if (*(s32 *)((u8 *)arg0 + 4) >= 0) {
            func_00228430(0);
            func_00227A30(arg1);
            temp_s2 = *(s32 *)((u8 *)arg1 + 0x20);
            temp_a1 = *(s32 *)((u8 *)arg1 + 0x1C);
            temp_a0_2 = *(s32 *)((u8 *)arg1 + 0x18);
            D_00470704 = temp_a0_2;
            D_0047070C = temp_a1;
            D_00470708 = temp_s2;
            amModel_SetCurrent(temp_a0_2, temp_a1);
            D_00470238 = temp_s2;
            func_00228410();
            func_0022C060(1.0f, *(s32 *)((u8 *)arg1 + 0x10));
            func_0022CD00(*(s32 *)((u8 *)arg1 + 0x10));
        }
            if (*(s32 *)((u8 *)arg0 + 0) >= 0) {
            func_00228430(0);
            func_00227A30(arg1);
            temp_s2_2 = *(s32 *)((u8 *)arg1 + 0x20);
            temp_a1_2 = *(s32 *)((u8 *)arg1 + 0x1C);
            temp_a0_3 = *(s32 *)((u8 *)arg1 + 0x18);
            D_00470704 = temp_a0_3;
            D_0047070C = temp_a1_2;
            D_00470708 = temp_s2_2;
            amModel_SetCurrent(temp_a0_3, temp_a1_2);
            func_0022C060(1.0f, *(s32 *)((u8 *)arg0 + 0x1C));
            D_00470238 = temp_s2_2;
            func_00228410();
            func_0022CD00(*(s32 *)((u8 *)arg0 + 0x1C));
        }
            break;
    }
}
