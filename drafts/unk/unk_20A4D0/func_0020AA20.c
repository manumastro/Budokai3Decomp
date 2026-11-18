/* Draft (not built): func_0020AA20 at 0x0020AA20, size 0x18C, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); icit conversion from 'unsigned char *' to 'int' @ 587: *(&D_005687C0 + (arg0 * 4)) = func_002096D0(temp_s0, 0x10002, 0);
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_0020AA20.s */

// src/unk/unk_20A4D0.c func_0020AA20 cerr diff=-1/0
void func_0020AA20(s32 arg0, u8 *arg1) {
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;

    func_0020A7F0(0);
    temp_s0 = &D_005684C0 + (arg0 << 6);
    temp_s1 = &D_005685C0 + (arg0 << 7);
    memset(temp_s0, 0, 0x40);
    memset(temp_s1, 0, 0x80);
    *(s32 *)((u8 *)temp_s0 + 4) = 0x10005;
    *(s32 *)((u8 *)temp_s1 + 4) = 0x20005;
    *(u8 **)((u8 *)temp_s0 + 0x24) = temp_s1;
    *(f32 *)((u8 *)temp_s0 + 0x30) = (f32) *(f32 *)((u8 *)arg1 + 0x10);
    *(f32 *)((u8 *)temp_s0 + 0x34) = (f32) *(f32 *)((u8 *)arg1 + 8);
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) *(f32 *)((u8 *)arg1 + 0xC);
    *(s32 *)((u8 *)temp_s1 + 8) = (s32) ((*(s32 *)((u8 *)arg1 + 4) << 0x10) + *(s32 *)((u8 *)arg1 + 0));
    *(s128 *)((u8 *)temp_s1 + 0x30) = (s128) *(s128 *)((u8 *)arg1 + 0x20);
    *(s128 *)((u8 *)temp_s1 + 0x40) = (s128) *(s128 *)((u8 *)arg1 + 0x20);
    *(f32 *)((u8 *)temp_s1 + 0x50) = (f32) *(f32 *)((u8 *)arg1 + 0x14);
    *(f32 *)((u8 *)temp_s1 + 0x54) = (f32) *(f32 *)((u8 *)arg1 + 0x18);
    *(s32 *)((u8 *)temp_s1 + 0x7C) = (s32) *(s32 *)((u8 *)arg1 + 0x1C);
    temp_v1 = *(s32 *)((u8 *)arg1 + 0);
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(f32 *)((u8 *)temp_s1 + 0x58) = (f32) *(f32 *)((u8 *)arg1 + 0x30);
        *(f32 *)((u8 *)temp_s1 + 0x5C) = (f32) *(f32 *)((u8 *)arg1 + 0x34);
        *(f32 *)((u8 *)temp_s1 + 0x60) = (f32) *(f32 *)((u8 *)arg1 + 0x38);
        *(f32 *)((u8 *)temp_s1 + 0x64) = (f32) *(f32 *)((u8 *)arg1 + 0x3C);
        break;
    case 1:
        *(f32 *)((u8 *)temp_s1 + 0x68) = (f32) *(f32 *)((u8 *)arg1 + 0x30);
        *(f32 *)((u8 *)temp_s1 + 0x6C) = (f32) *(f32 *)((u8 *)arg1 + 0x34);
        *(f32 *)((u8 *)temp_s1 + 0x70) = (f32) *(f32 *)((u8 *)arg1 + 0x38);
        *(f32 *)((u8 *)temp_s1 + 0x74) = (f32) *(f32 *)((u8 *)arg1 + 0x3C);
        *(f32 *)((u8 *)temp_s1 + 0x78) = (f32) *(f32 *)((u8 *)arg1 + 0x40);
        break;
    }
    *(&D_005687C0 + (arg0 * 4)) = func_002096D0(temp_s0, 0x10002, 0);
}
