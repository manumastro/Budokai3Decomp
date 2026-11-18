/* Draft (not built): func_00222280 at 0x00222280, size 0x1B8, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 87 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_21D260/func_00222280.s */

// src/unk/unk_21D260.c func_00222280 diff diff=87/110
extern void func_00222BF0(void);
extern void func_0021F3A0(void);
void func_00222280(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 temp_a1;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s2 = (u8 *)(gBtlSys);
    temp_s0 = arg0 + 0x30;
    func_00224680(temp_s0);
    if (*(s32 *)((u8 *)temp_s2 + 0xE30) & 2) {
        temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x28);
        switch (temp_a1) {                          /* irregular */
        case 1:
            break;
        case 0:
            temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)temp_s0 + 0x2C) = temp_f1;
            if (!(temp_f1 < 8.0f)) {
                *(s32 *)((u8 *)temp_s0 + 0x28) = 1;
            }
            break;
        case 2:
            temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x2C) + D_00470710;
            *(f32 *)((u8 *)temp_s0 + 0x2C) = temp_f1_2;
            if (!(temp_f1_2 < 8.0f)) {
                *(s32 *)((u8 *)gBtlSys + 0xE30) = (s32) (*(s32 *)((u8 *)gBtlSys + 0xE30) & ~2);
            }
            break;
        }
        *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x20) + D_00470710);
        goto block_19;
    }
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (D_0058BB38 == 0) {
        if (D_0058BB36 != 0) {
            *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x20) + D_00470710);
        } else {
            *(f32 *)((u8 *)temp_s0 + 0x20) = 0.0f;
        }
        return;
    }
block_19:
    temp_f1_3 = *(f32 *)((u8 *)temp_s0 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s0 + 0x1C) = temp_f1_3;
    if (!(temp_f1_3 < 8.0f)) {
        *(s32 *)((u8 *)temp_s0 + 4) = 1;
        var_v1 = (s32 *)(&func_00222BF0);
        *(f32 *)((u8 *)temp_s0 + 0x1C) = 0.0f;
        *(s16 *)((u8 *)temp_s0 + 0xA) = 0;
        if (&func_00222BF0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        var_v1_2 = (s32 *)(&func_0021F3A0);
        if (&func_0021F3A0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = var_v1_2;
    }
}
