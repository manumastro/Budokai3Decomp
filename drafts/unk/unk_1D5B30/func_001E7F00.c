/* Draft (not built): func_001E7F00 at 0x001E7F00, size 0x1AC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'float' to 'unsigned char *' @ 4454: ((u8 *)(*(f32 *)((u8 *)arg0 + 0x608)))
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E7F00.s */

// src/unk/unk_1D5B30.c func_001E7F00 cerr diff=-1/0
void func_001E7F00(u8 *arg0) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 var_v1;
    u8 *temp_a2;
    u8 *temp_s0;

    temp_s0 = arg0 + 0x2D0;
    func_001E80B0(0);
    *(f32 *)((u8 *)arg0 + 0x608) = 0.0f;
    *(s32 *)((u8 *)arg0 + 0x650) = 0;
    *(f32 *)((u8 *)arg0 + 0x628) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x630) = 0.0f;
    *(f32 *)((u8 *)arg0 + 0x63C) = 0.0f;
    temp_a3 = (s32)(temp_s0 + 0x90);
    *(s16 *)((u8 *)temp_s0 + 0x1C4) = 0;
    temp_a2 = temp_s0 + 0xC0;
    *(f32 *)((u8 *)temp_s0 + 0x1BC) = -1.0f;
    *(f32 *)((u8 *)temp_s0 + 0x1B4) = 1.0f;
    *(s32 *)((u8 *)temp_s0 + 0x1B8) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AE) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AF) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1B0) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1A8) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x1A0) = 0;
    *(u8 **)((u8 *)temp_s0 + 0x180) = temp_s0;
    *(s32 *)((u8 *)temp_s0 + 0x184) = (s32) (temp_s0 + 0x30);
    *(s32 *)((u8 *)temp_s0 + 0x188) = (s32) (temp_s0 + 0x60);
    *(s32 *)((u8 *)temp_s0 + 0x18C) = temp_a3;
    *(u8 **)((u8 *)temp_s0 + 0x190) = temp_a2;
    *(u8 **)((u8 *)temp_s0 + 0x194) = (u8 *) (temp_s0 + 0xF0);
    *(u8 **)((u8 *)temp_s0 + 0x198) = (u8 *) (temp_s0 + 0x120);
    *(u8 **)((u8 *)temp_s0 + 0x19C) = (u8 *) (temp_s0 + 0x150);
    *(s8 *)((u8 *)temp_s0 + 0x1A9) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AA) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AB) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AC) = 0;
    *(s8 *)((u8 *)temp_s0 + 0x1AD) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x244) = 0;
    func_001D0A20(temp_s0, *(u8 **)((u8 *)arg0 + 0x524), temp_a2, temp_a3, 0);
    *(f32 *)((u8 *)temp_s0 + 0x1BC) = -1.0f;
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x1B4);
    if (!(temp_f1 <= 1.0f)) {
        *(f32 *)((u8 *)arg0 + 0x608) = temp_f1;
        *(f32 *)((u8 *)arg0 + 0x628) = (f32) *(f32 *)((u8 *)temp_s0 + 0x1B4);
        *(f32 *)((u8 *)arg0 + 0x630) = (f32) *(f32 *)((u8 *)temp_s0 + 0x1B4);
        *(f32 *)((u8 *)arg0 + 0x63C) = (f32) *(f32 *)((u8 *)temp_s0 + 0x1B4);
        func_001D0A20(temp_s0, *(u8 **)((u8 *)arg0 + 0x524), M2C_BITWISE(u8 *, *(f32 *)((u8 *)arg0 + 0x608)));
        *(f32 *)((u8 *)temp_s0 + 0x1BC) = (f32) (*(f32 *)((u8 *)arg0 + 0x608) - 1.0f);
    }
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x604);
    temp_a3_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x524)) + 4);
    var_v1 = *(s32 *)((u8 *)(((temp_a0 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_a0 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)arg0 + 0x538)) + 0x46C)) + 0x14)) + 8);
    if ((temp_a3_2 > 0) && (temp_a3_2 < var_v1)) {
        var_v1 = temp_a3_2;
    }
    *(s32 *)((u8 *)arg0 + 0x60C) = var_v1;
    *(f32 *)((u8 *)arg0 + 0x610) = (f32) ((f32) var_v1 - *(f32 *)((u8 *)arg0 + 0x608));
    *(s32 *)((u8 *)arg0 + 0x614) = 0;
    *(s32 *)((u8 *)arg0 + 0x618) = 0;
}
