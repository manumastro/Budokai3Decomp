/* Draft (not built): func_002BB490 at 0x002BB490, size 0x158, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ersion from 'struct W98D *' to 'float' mwccps2.exe Compiler: @ 335: func_0013BBD0(gStrStatus, 0, 0, (f32)(s32)(-32.0f));
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BB490.s */

// src/unk/unk_2B98D0.c func_002BB490 cerr diff=-1/0
void func_002BB490(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp2C;
    s32 sp30;
    u8 *temp_s0;

    func_0029DD30((void *)(*(s32 *)((u8 *)gStrStatus + 0x25C)), gFrameDelta);
    func_002BF850(gStrStatus);
    temp_s0 = ((u8 *)&D_00455920) + (*(s32 *)((u8 *)gStrStatus + 0x28C) * 0x1C);
    sp20 = *(f32 *)((u8 *)temp_s0 + 0x10);
    sp2C = 0x3F800000;
    sp24 = *(f32 *)((u8 *)temp_s0 + 0x14);
    sp28 = *(f32 *)((u8 *)temp_s0 + 0x18);
    func_0029D6C0(&sp20);
    D_0046FD80 = *(f32 *)((u8 *)temp_s0 + 0xC);
    func_0013B0B0(D_003F0800);
    func_00131B90(&sp30);
    func_00131D00(&sp30, 0, *(f32 *)((u8 *)temp_s0 + 0), *(f32 *)((u8 *)temp_s0 + 4));
    func_00131F00(&sp30, 0, 0);
    func_00132DF0(NULL);
    if (*(s32 *)((u8 *)gStrStatus + 0x28C) == 0x22) {
        if (*(s32 *)((u8 *)gStrStatus + 0x294) != 0) {
            goto block_3;
        }
        func_0013BBD0(gStrStatus, 0, 0, (f32)(s32)(-32.0f));
    } else {
block_3:
        func_0013BBD0(gStrStatus, 0, 0, (f32)(s32)(*(f32 *)((u8 *)temp_s0 + 8)));
    }
    func_00133D10(0);
    func_0029D8B0(-1, 4);
    func_0029DB00(*(s32 *)((u8 *)gStrStatus + 0x25C),(void *)(0x3F800000));
    func_002BF610();
    func_0013B110(1);
    func_002BF520();
}
