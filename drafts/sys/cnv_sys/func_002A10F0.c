/* Draft (not built): func_002A10F0 at 0x002A10F0, size 0xD0, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A10F0.s */

// src/sys/cnv_sys.c func_002A10F0 diff diff=42/52
void func_002A10F0(s32 arg0, s32 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    u8 **temp_a2;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_t0;

    temp_a2 = (unsigned char **)(*(s32 *)((u8 *)D_004708CC + 0x50) + (arg1 * 8));
    temp_t0 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_004708CC + 0x44) + (arg0 * 4)) + (arg1 * 0xE0));
    if (temp_a2 == NULL) {
        goto block_3;
    }
    temp_a3 = *temp_a2;
    if (temp_a3 != NULL) {
        goto block_4;
    }
block_3:
    return;
block_4:
    temp_a0 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((*(s32 *)((u8 *)temp_t0 + 0) - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
    temp_f1 = (f32) *(s16 *)((u8 *)temp_a0 + 0x10);
    *(f32 *)((u8 *)temp_t0 + 0x20) = temp_f1;
    temp_f0 = (f32) *(s16 *)((u8 *)temp_a0 + 0x12);
    *(f32 *)((u8 *)temp_t0 + 0x24) = temp_f0;
    *(s32 *)((u8 *)temp_t0 + 0x28) = 0;
    *(s32 *)((u8 *)temp_t0 + 0x2C) = 0x3F800000;
    *(s32 *)((u8 *)temp_t0 + 0x80) = 0;
    *(s32 *)((u8 *)temp_t0 + 0x84) = 0;
    *(f32 *)((u8 *)temp_t0 + 0x88) = temp_f1;
    *(f32 *)((u8 *)temp_t0 + 0x8C) = 1.0f;
    *(f32 *)((u8 *)temp_t0 + 0x8C) = temp_f0;
    *(s32 *)((u8 *)temp_t0 + 0xD0) = 0;
    *(s32 *)((u8 *)temp_t0 + 0xD4) = 0;
    *(f32 *)((u8 *)temp_t0 + 0xD8) = temp_f1;
    *(f32 *)((u8 *)temp_t0 + 0xDC) = 1.0f;
    *(f32 *)((u8 *)temp_t0 + 0xDC) = temp_f0;
    return;
}
