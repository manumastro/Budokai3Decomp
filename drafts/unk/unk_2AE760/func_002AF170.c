/* Draft (not built): func_002AF170 at 0x002AF170, size 0xB0, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 357: amModel_SetCurrent(temp_a0, temp_a1);
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AF170.s */

// src/unk/unk_2AE760.c func_002AF170 cerr diff=-1/0
s32 func_002AF170(u8 *arg0, u8 *arg1) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s1;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_s2;

    temp_a3 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a2 = **(s32 **)((u8 *)arg0 + 0);
    temp_s2 = (*(s32 *)((u8 *)temp_a3 + 4) * 0x28) + (&D_005BCD20 + (temp_a2 * 0xA0));
    *(f32 *)((u8 *)arg0 + 0x30) = (f32) (1.0f + *(f32 *)((u8 *)temp_a3 + 0));
    func_00228410(&D_005BCD20, temp_a2, temp_a3);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x10);
    temp_a1 = *(s32 *)((u8 *)temp_s2 + 0x14);
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = temp_a1;
    D_00470708 = temp_s1;
    amModel_SetCurrent(temp_a0, temp_a1);
    D_00470238 = temp_s1;
    *(s32 **)((u8 *)arg0 + 0x10) = &func_002AF0A0;
    return 3;
}
