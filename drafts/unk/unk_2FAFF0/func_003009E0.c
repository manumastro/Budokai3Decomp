/* Draft (not built): func_003009E0 at 0x003009E0, size 0x180, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand mwccps2.exe Compiler: 833: temp_v1 = *(&D_00492FCC + (D_004B4B63 * 0xB8)); @ 832: if (D_005CA030 == 1) {
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_003009E0.s */

// src/unk/unk_2FAFF0.c func_003009E0 cerr diff=-1/0
void func_003009E0(void) {
    f32 sp10;
    f32 sp14;
    s32 temp_v1_2;
    s32 var_t7;
    u16 temp_v1;
    u8 *temp_v0;

    sp10 = (s128) D_00458BA0;
    if (D_005CA030 == 1) {
        temp_v1 = *(&D_00492FCC + (D_004B4B63 * 0xB8));
        if (temp_v1 & 0x80) {
            sp10 = -1.0f;
        }
        if (temp_v1 & 0x20) {
            sp10 = 1.0f;
        }
        if (temp_v1 & 0x10) {
            sp14 = -1.0f;
        }
        if (temp_v1 & 0x40) {
            goto block_17;
        }
    } else {
        temp_v1_2 = D_00492FCC | D_00493084;
        if (temp_v1_2 & 0x80) {
            sp10 = -1.0f;
        }
        if (temp_v1_2 & 0x20) {
            sp10 = 1.0f;
        }
        if (temp_v1_2 & 0x10) {
            sp14 = -1.0f;
        }
        if (temp_v1_2 & 0x40) {
block_17:
            sp14 = 1.0f;
        }
    }
    func_00146F30(&sp10);
    func_00146F10(&sp10, &sp10, *(f32 *)((u8 *)gTourMap + 0x50));
    var_t7 = 0;
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    *(f32 *)((u8 *)temp_v0 + 0x30) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x30) + sp10);
    *(f32 *)((u8 *)temp_v0 + 0x34) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x34) + sp14);
    *(f32 *)((u8 *)temp_v0 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x38) + sp18);
    do {
        func_002FFD20(var_t7);
        var_t7 = M2C_ERROR(/* Read from unset register $t7 */) + 1;
    } while (var_t7 < 4);
    func_002FC9F0();
}
