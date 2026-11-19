/* Draft (not built): func_002CBEB0 at 0x002CBEB0, size 0x94, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CBEB0.s */

void func_002CBEB0(void) {
    s32 sp20;
    u8 *temp_s0;
    u8 *temp_v1;
    *(s8 *)((u8 *)gBattle + 0x8AAD) = 1;
    temp_s0 = (unsigned char *)gTutWork;
    if (*(s32 *)((u8 *)temp_s0 + 0xC) != 0x1E) {
    } else {
        Fighter_CreateHyperCtrl(*(u8 **)((u8 *)temp_s0 + 0));
    }
    temp_v1 = *(u8 **)((u8 *)temp_s0 + 0);
    *(s16 *)((u8 *)temp_v1 + 0x13A4) = (s16)*(s16 *)((u8 *)*(u8 **)((u8 *)temp_v1 + 0x1CF4) + 0x1A);
    func_002EB3E0(*(s32 *)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 0xC) - *(u32 *)((u8 *)temp_s0 + 0x10));
    sp20 = 0;
    A2d_CallHandler(0x27, &sp20);
    func_002E9BA0(0);
}
