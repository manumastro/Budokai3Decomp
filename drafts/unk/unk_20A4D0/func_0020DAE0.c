/* Draft (not built): func_0020DAE0 at 0x0020DAE0, size 0x2F0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal function definition mwccps2.exe Compiler: 1211: s3232 sp40; @ 1209: s32 func_00135F10(f32 *, s3232 *);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020DAE0.s */

// src/unk/unk_20A4D0.c func_0020DAE0 cerr diff=-1/0
s32 amDma_Request(s32, s32, s32, s32);
s32 func_00134690(s32, s32, s32, s32);
s32 func_00135F10(f32 *, s3232 *);
void func_0020DAE0(s32 arg0) {
    s3232 sp40;
    s3232 sp44;
    s3232 sp48;
    s3232 sp4C;
    f32 sp50;
    f32 sp54;
    s3232 sp58;
    s3232 sp5C;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f21;
    f32 temp_f22;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = &D_00568C90 + (arg0 * 0x2140);
    temp_s0 = gWave;
    if (*(s8 *)((u8 *)gBattle + 0x8975) != 1) {
        func_0013B0B0(NULL);
        func_0013B960(temp_s1 + 0x40);
        temp_f12 = *(f32 *)((u8 *)temp_s1 + 0x2130);
        func_0013BC30(temp_f12, temp_f12, temp_f12);
        func_00134690(1, 0x404, 0, -1);
        temp_f0 = *(f32 *)((u8 *)temp_s0 + 0x64);
        temp_f21 = 1.1f * temp_f0;
        sp58 = 0;
        sp5C = 0x3F800000;
        sp40 = 0;
        sp44 = 0;
        sp48 = 0x3F800000;
        sp4C = 0x3F800000;
        temp_f22 = 1.1f * *(f32 *)((u8 *)temp_s0 + 0x60);
        sp54 = temp_f21;
        sp50 = -temp_f22 / 2.0f;
        func_00135F10(&sp50, &sp40);
        sp44 = 0x3F800000;
        sp54 -= temp_f21;
        func_00135F10(&sp50, &sp40);
        sp40 = 0x3F800000;
        sp44 = 0;
        sp50 += temp_f22;
        sp54 += temp_f21;
        func_00135F10(&sp50, &sp40);
        sp44 = 0x3F800000;
        sp54 -= temp_f21;
        func_00135F10(&sp50, &sp40);
        amDraw_FlushPacket();
        amDma_Request(0, 1, 1, 0);
        func_00134690(1, 0x424, 0, -1);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        sp50 = 0.5f * -*(f32 *)((u8 *)temp_s0 + 0x60);
        sp58 = 0x3C23D70A;
        sp5C = 0x3F800000;
        sp40 = 0;
        sp44 = 0;
        sp54 = *(f32 *)((u8 *)temp_s0 + 0x64) + ((temp_f21 - temp_f0) / 2.0f);
        sp48 = 0x3F800000;
        sp4C = 0x3F800000;
        func_00135F10(&sp50, &sp40);
        sp44 = 0x3F800000;
        sp54 -= *(f32 *)((u8 *)temp_s0 + 0x64);
        func_00135F10(&sp50, &sp40);
        sp50 += *(f32 *)((u8 *)temp_s0 + 0x60);
        sp40 = 0x3F800000;
        sp44 = 0;
        sp54 += *(f32 *)((u8 *)temp_s0 + 0x64);
        func_00135F10(&sp50, &sp40);
        sp44 = 0x3F800000;
        sp54 -= *(f32 *)((u8 *)temp_s0 + 0x64);
        func_00135F10(&sp50, &sp40);
        amDraw_FlushPacket();
        func_0013B110(1);
    }
}
