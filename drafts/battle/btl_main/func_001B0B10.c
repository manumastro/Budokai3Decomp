/* Draft (not built): func_001B0B10 at 0x001B0B10, size 0x1FC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 120 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B0B10.s */

// src/battle/btl_main.c func_001B0B10 diff diff=120/127
s32 func_001B0B10(s32 *arg0) {
    BattleWork *temp_s1;
    Fighter *temp_a0;
    Fighter *temp_a0_2;
    s32 var_s0;
    u8 *temp_v1;

    temp_s1 = gBattle;
    if (temp_s1 == NULL) {
        return 0;
    }
    if (*arg0 != *(s16 *)((u8 *)temp_s1 + 0x8946)) {
        return 0;
    }
    *(s32 *)((u8 *)temp_s1 + 0x8914) = 0;
    func_001E1300(0);
    temp_s1->unk8954[0x159] = 1;
    temp_s1->unk8954[0x15A] = 0;
    temp_s1->unk8954[0x15B] = 0;
    *(s16 *)((u8 *)temp_s1 + 0x894C) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x894E) = 0;
    *(s16 *)((u8 *)temp_s1 + 0x8950) = 0;
    temp_s1->unk8952 = 0;
    func_00219650(0);
    func_00219790(0);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    *(f32 *)((u8 *)temp_s1 + 0x8964) = func_00200270(0, *(f32 *)((u8 *)temp_s1 + 0x8960), *(f32 *)((u8 *)temp_s1 + 0x8968));
    temp_a0 = temp_s1->fighter[0];
    if (temp_a0->unk1FF8 == -1) {
        *(s16 *)((u8 *)temp_s1 + 0x8950) = 1;
        temp_a0->unk1FF8 = 2;
        func_001DD680(temp_a0);
    } else {
        func_001DA4C0();
    }
    var_s0 = 0;
loop_13:
    if (var_s0 < *(s32 *)((u8 *)temp_s1 + 0x88D8)) {
        temp_v1 = (unsigned char *)(temp_s1 + (var_s0 * 0x2020));
        temp_a0_2 = (struct Fighter *)(temp_v1 + 0x830);
        if (*(s8 *)((u8 *)temp_v1 + 0x2828) != -1) {
            temp_a0_2->unk1FF8 = 0;
        }
        temp_a0_2->unk0000[0xCBE] = 0;
        temp_a0_2->unk17EC[0x53] = -1U;
        func_001C81D0(temp_a0_2, -1);
        var_s0 += 1;
        goto loop_13;
    }
    func_001C7D90(temp_s1->fighter[0], -1, temp_s1->fighter[1]);
    func_001C7D90(temp_s1->fighter[1], -1, temp_s1->fighter[0]);
    return 0;
}
