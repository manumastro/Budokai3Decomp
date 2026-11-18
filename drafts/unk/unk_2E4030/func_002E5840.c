/* Draft (not built): func_002E5840 at 0x002E5840, size 0x13C, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); type mismatch 'short *' and 'int' @ 508: if (D_005C9F04 >= 0x3E8) {
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E5840.s */

// src/unk/unk_2E4030.c func_002E5840 cerr diff=-1/0
s32 IpSysWnd_Start(s32, s16, s64, s128);
extern s32 D_00453490;
extern s32 D_00456DB0;
extern s8 D_004B4B5B;
extern s16 D_005C9ED4;
extern s32 D_005C9EE0;
void func_002E5840(u8 *arg0) {
    s32 sp30;
    s32 *var_v1;
    f32 temp_f1;
    s16 temp_v0;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002E4D60((struct Sub57 *)(temp_s0));
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x10C) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x10C) = temp_f1;
    if (temp_f1 <= 0.0f) {
        if (D_005C9F04 >= 0x3E8) {
            temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
            *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00456DB0) + 0);
            *(s64 *)((u8 *)(&sp30) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456DB0) + 0x10);
            *(f32 *)((u8 *)(&sp30) + 0x18) = (f32) *(f32 *)((u8 *)(&D_00456DB0) + 0x18);
            *(s16 *)((u8 *)(&sp30) + 0x1C) = (s16) *(s16 *)((u8 *)(&D_00456DB0) + 0x1C);
            temp_v0 = *(&D_00453490 + (*(s16 *)((u8 *)((((s64) ((D_005C9F04 - 0x3E8) << 0x30) >> 0x30) * 2) + sp) + 0x30) * 4));
            D_005C9ED4 = temp_v0;
            D_004B4B5B = (s8) temp_v0;
            var_v1 = (s32 *)(&func_002E57A0);
            *(s32 *)((u8 *)temp_s0_2 + 0xC) = IpSysWnd_Start(7, *(s16 *)((u8 *)(&D_00456DB0) + 0x1C), *(s64 *)((u8 *)(&D_00456DB0) + 0x10), *(s128 *)((u8 *)(&D_00456DB0) + 0));
            if (&func_002E57A0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        D_005C9EE0 = -1;
        if (*(u16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0xD0) & 0x80) {
            func_0028DF20();
        }
        ArenaStageSel_Exit(0);
        Scene_Request(0x19, 0);
        func_001F07E0(0, 0);
    }
}
