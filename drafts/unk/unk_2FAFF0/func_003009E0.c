/* Draft (not built): func_003009E0 at 0x003009E0, size 0x180, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x170, original 0x180
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_003009E0.s */

// src/unk/unk_2FAFF0.c func_003009E0 size diff=56/92
void func_003009E0(void) {
    s32 sp18;
    f32 sp10;
    f32 sp14;
    Pos3_2FAFF0 *temp_v0;
    s32 temp_v1_2;
    s32 var_t7;
    u16 temp_v1;

    sp10 = (s128) *D_00458BA0;
    if (*D_005CA030 == 1) {
        temp_v1 = *(D_00492FCC + (*D_004B4B63 * 0xB8));
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
        temp_v1_2 = *D_00492FCC | *D_00493084;
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
    func_00146F10(gTourMap->f50, &sp10);
    var_t7 = 0;
    temp_v0 = gTourMap->f44;
    temp_v0->f30 += sp10;
    temp_v0->f34 += sp14;
    temp_v0->f38 += sp18;
    do {
        func_002FFD20(var_t7);
        var_t7 = M2C_ERROR(/* Read from unset register $t7 */) + 1;
    } while (var_t7 < 4);
    func_002FC9F0();
}
