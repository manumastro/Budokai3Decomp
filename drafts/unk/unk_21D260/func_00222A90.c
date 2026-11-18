/* Draft (not built): func_00222A90 at 0x00222A90, size 0x158, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'int' @ 329: D_0058BAE0 = 0;
 * Original: asm/nonmatchings/unk/unk_21D260/func_00222A90.s */

// src/unk/unk_21D260.c func_00222A90 cerr diff=-1/0
void func_00222A90(u8 *arg0) {
    f32 temp_f1;
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v1;

    temp_s1 = (u8 *)(gBtlSys);
    temp_s0 = arg0 + 0x30;
    func_00224680(temp_s0);
    if (*(s32 *)((u8 *)temp_s1 + 0xE30) & 2) {
        var_v1 = func_00223660;
        if (func_00223660 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
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
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s0 + 0x1C) = temp_f1;
    if (!(temp_f1 < 8.0f)) {
        amTask_Kill((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x30))));
        amTask_Kill((s32)((void *)(arg0)));
        *(s32 *)((u8 *)temp_s1 + 0xEF0) = 0;
        temp_s0_2 = (u8 *)(gBtlSys);
        *(s32 *)((u8 *)temp_s0_2 + 0xE30) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0xE30) & ~1);
        func_0022D4B0((s32)(D_0058BAE0), 1);
        D_0058BAE0 = 0;
        temp_v1 = *(u8 **)((u8 *)temp_s0_2 + 0xEF0);
        if (temp_v1 != NULL) {
            temp_a0 = *(u8 **)((u8 *)temp_v1 + 0x30);
            if (temp_a0 != NULL) {
                amTask_Kill((s32)((void *)(temp_a0)));
            }
            amTask_Kill((s32)((void *)(*(u8 **)((u8 *)temp_s0_2 + 0xEF0))));
            *(u8 **)((u8 *)temp_v1 + 0x30) = NULL;
            *(u8 **)((u8 *)temp_s0_2 + 0xEF0) = NULL;
        }
    }
}
