/* Draft (not built): func_002AF0A0 at 0x002AF0A0, size 0xC8, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 327: amModel_SetCurrent(temp_a0_2, temp_a1_2);
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AF0A0.s */

// src/unk/unk_2AE760.c func_002AF0A0 cerr diff=-1/0
s32 func_002AF0A0(u8 *arg0, u8 *arg1) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s1;
    u8 *temp_a0_2;
    u8 *temp_s2;

    temp_a1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 4);
    temp_a0 = temp_a1 * 0x28;
    temp_s2 = temp_a0 + (&D_005BCD20 + (**(s32 **)((u8 *)arg0 + 0) * 0xA0));
    func_00228410(temp_a0, temp_a1 * 5);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x10);
    temp_a1_2 = *(s32 *)((u8 *)temp_s2 + 0x14);
    temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 8);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = temp_a1_2;
    D_00470708 = temp_s1;
    amModel_SetCurrent(temp_a0_2, temp_a1_2);
    D_00470238 = temp_s1;
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x30) - 1.0f;
    *(f32 *)((u8 *)arg0 + 0x30) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    return 3;
}
