/* Draft (not built): func_002AF330 at 0x002AF330, size 0xE4, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ar *, unsigned char *, int)' does not match 'func_00228430(int)' @ 420: func_00228430(0, temp_a1, &D_005BCD20, temp_a3);
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AF330.s */

// src/unk/unk_2AE760.c func_002AF330 cerr diff=-1/0
s32 func_002AF330(u8 *arg0, u8 *arg1) {
    f32 sp40;
    f32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_t0;

    temp_t0 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a3 = **(s32 **)((u8 *)arg0 + 0);
    temp_s0 = *(s32 *)((u8 *)temp_t0 + 0xC);
    *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(f32 *)((u8 *)temp_t0 + 8);
    temp_a1 = &D_005BCD20 + (temp_a3 * 0xA0);
    temp_s1 = (*(s32 *)((u8 *)temp_t0 + 0x10) * 0x28) + temp_a1;
    sp4C = 0x3F800000;
    sp40 = *(f32 *)((u8 *)temp_t0 + 4);
    sp48 = 0;
    sp44 = *(f32 *)((u8 *)temp_t0 + 0);
    func_00228430(0, temp_a1, &D_005BCD20, temp_a3);
    func_00227A30((u8 *)(&sp40));
    temp_s0_2 = temp_s0 * 4;
    func_0022C060(*(*(s32 *)((u8 *)temp_s1 + 0x20) + temp_s0_2), 0x3F800000);
    func_00228410();
    func_0022CD00(*(*(s32 *)((u8 *)temp_s1 + 0x20) + temp_s0_2));
    *(s32 **)((u8 *)arg0 + 0x10) = &func_002AF220;
    return 3;
}
