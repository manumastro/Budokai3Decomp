/* Draft (not built): func_002EB140 at 0x002EB140, size 0x13C, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 540: *(&D_00457400 + (temp_v1 * 4))();
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EB140.s */

// src/unk/unk_2EA0B0.c func_002EB140 cerr diff=-1/0
s32 func_002EB140(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_v0;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v1_2;

    temp_s0 = D_00470958;
    if (temp_s0 == NULL) {
        return 1;
    }
    if ((*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0) & 4) && (*(s32 *)((u8 *)temp_s0 + 0xC) == -1)) {
        return 1;
    }
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0xC);
    if (temp_v1 != -1) {
        *(&D_00457400 + (temp_v1 * 4))();
    }
    temp_a2 = *(u8 **)((u8 *)temp_s0 + 0x18);
    if (*(s8 *)((u8 *)temp_a2 + 3) < 0) {
        temp_v1_2 = gBattle + (*(s8 *)((u8 *)temp_a2 + 1) * 0x2020);
        temp_a0 = *(s32 *)((u8 *)temp_v1_2 + 0x13A0);
        temp_s1 = temp_v1_2 + 0x830;
        if (temp_a0 == 0x2D8) {
            var_v0 = 0;
        } else {
            var_v0 = *(s32 *)((u8 *)temp_s1 + 0xC64);
        }
        if (var_v0 != 0) {
            temp_v1_3 = *(s16 *)((u8 *)((*(s8 *)((u8 *)temp_a2 + 1) * 2) + *(s32 *)((u8 *)temp_s0 + 0x14)) + 8) + 0x2D8;
            if (temp_a0 != temp_v1_3) {
                *(s16 *)((u8 *)temp_s1 + 0xCB4) = 1;
                *(s32 *)((u8 *)temp_s1 + 0xB70) = temp_v1_3;
                *(s16 *)((u8 *)temp_s1 + 0xCB6) = 1;
                func_001C75D0(temp_s1, 0xF);
                *(s32 *)((u8 *)temp_s1 + 0xCA4) = 0x3DCCCCCD;
                *(s32 *)((u8 *)temp_s1 + 0xCA8) = 0x3D4CCCCD;
            }
        }
    }
    return 0;
}
