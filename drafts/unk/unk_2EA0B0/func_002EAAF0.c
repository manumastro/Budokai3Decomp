/* Draft (not built): func_002EAAF0 at 0x002EAAF0, size 0x138, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EAAF0.s */

void func_002EAAF0(void) {
    s8 temp_s3;
    u8 *temp_a0_2;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 var_a1;
    s8 temp_s2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v1;
    *(s32 *)((u8 *)D_00470958 + 0xC) = 0;
    temp_s1 = *(s32 *)((u8 *)D_00470958 + 0xC);
    temp_s0 = D_00470958;
    temp_v0 = *(u8 **)((u8 *)D_00470958 + 0x18);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 4);
    temp_s3 = *(s8 *)((u8 *)temp_v0 + 1);
    temp_s2 = *(s8 *)((u8 *)temp_v0 + 2);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
        *(s32 *)((u8 *)temp_s0 + 4) = 0;
    }
    var_a1 = temp_s2 + temp_s3 * 8;
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0x4C);
    temp_v1 = temp_s2 * 4 + temp_s0;
    if (!(0.75f * (f32)*(s32 *)((u8 *)temp_v1 + 0x28) < (f32)*(s16 *)((u8 *)temp_a0_2 + 0x10))) {
        if (0.75f * (f32)*(s32 *)((u8 *)temp_v1 + 0x38) < (f32)*(s16 *)((u8 *)temp_a0_2 + 0x12)) {
            goto block_5;
        }
    } else {
        block_5:
        var_a1 += 4;
    }
    *(s32 *)((u8 *)temp_s0 + 4) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)*(u8 **)((u8 *)temp_s0 + 0x50) + 0x1C) + ((s8)D_00457440[var_a1] + temp_s1) * 4), 0.0f);
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x54);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x05000000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x05000000);
    D_00470238 = 0;
    func_0022C060(*(s32 *)((u8 *)temp_s0 + 4), 0.0f);
}
