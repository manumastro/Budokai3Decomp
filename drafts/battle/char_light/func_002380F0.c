/* Draft (not built): func_002380F0 at 0x002380F0, size 0x110, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_light/func_002380F0.s */

s32 func_0022C060(void *, s32);
s32 func_002535B0(s32, s32);
void func_002380F0(u8 *arg0) {
    f32 temp_f1;
    u8 **temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_v1;
    *(f32 *)((u8 *)arg0 + 0) = (f32)(*(f32 *)((u8 *)arg0 + 0) + D_00470710);
    if (*(u8 **)((u8 *)arg0 + 0x10) != NULL) {
        temp_a0 = *(u8 **)((u8 *)gBtlSys + 0xE84);
        D_00470704 = (int)temp_a0;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)temp_a0, 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        func_002284D0(0);
        func_0022C060(*(u8 **)((u8 *)arg0 + 0x10), 0x3F800000);
        func_002535B0((s32)*(s32 *)((u8 *)arg0 + 0x28), (s32)(*(u8 **)((u8 *)*(u8 **)((u8 *)arg0 + 0x10) + 0x30) + 0x40));
        func_00228410();
        if (*(s32 *)((u8 *)arg0 + 0xC) == 0x1C) {
            temp_v1 = *(u8 **)((u8 *)*(u8 **)((u8 *)arg0 + 0x10) + 0x30);
            temp_f1 = *(f32 *)((u8 *)temp_v1 + 0x40);
            *(f32 *)((u8 *)*(u8 **)((u8 *)*(u8 **)((u8 *)arg0 + 0x10) + 0x30) + 0x48) = temp_f1;
            *(f32 *)((u8 *)temp_v1 + 0x40) = (f32)*(f32 *)((u8 *)temp_v1 + 0x48);
        }
        if (*(s32 *)((u8 *)*(u8 **)((u8 *)arg0 + 0x10) + 8) == 0xFF && D_0047072C != 0) {
            temp_a0_2 = *temp_s0;
            temp_s0 = (unsigned char **)((u8 *)&D_0058BEB0 + *(s32 *)((u8 *)arg0 + 0xC) * 4);
            if (temp_a0_2 != NULL) {
                amTask_Kill(temp_a0_2);
                *temp_s0 = NULL;
            }
        }
    }
}
