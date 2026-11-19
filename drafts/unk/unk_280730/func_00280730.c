/* Draft (not built): func_00280730 at 0x00280730, size 0xA0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_280730/func_00280730.s */

extern void func_0022CF70();
void func_00280730(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f3;
    u8 *temp_v0;
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x24);
    temp_v0 = *(u8 **)((u8 *)arg0 + 8);
    if (temp_f3 != 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x1C) = (f32)(*(f32 *)((u8 *)arg0 + 0x1C) + temp_f3 * gFrameDelta);
        if (!(*(f32 *)((u8 *)arg0 + 0x24) <= 0.0f)) {
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x20);
            if (!(*(f32 *)((u8 *)arg0 + 0x1C) <= temp_f1)) {
                *(f32 *)((u8 *)arg0 + 0x1C) = temp_f1;
                *(f32 *)((u8 *)arg0 + 0x24) = 0.0f;
            }
        } else {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x20);
            if (*(f32 *)((u8 *)arg0 + 0x1C) < temp_f1_2) {
                *(f32 *)((u8 *)arg0 + 0x1C) = temp_f1_2;
                *(f32 *)((u8 *)arg0 + 0x24) = 0.0f;
            }
        }
    }
    *(f32 *)((u8 *)temp_v0 + 0x50) = (f32)*(f32 *)((u8 *)arg0 + 0x1C);
    *(f32 *)((u8 *)temp_v0 + 0x54) = (f32)*(f32 *)((u8 *)arg0 + 0x1C);
    func_0022CF70();
    *(f32 *)((u8 *)temp_v0 + 0x58) = (f32)*(f32 *)((u8 *)arg0 + 0x1C);
}
