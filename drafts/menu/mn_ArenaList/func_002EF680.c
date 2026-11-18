/* Draft (not built): func_002EF680 at 0x002EF680, size 0x13C, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x13C
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EF680.s */

// src/menu/mn_ArenaList.c func_002EF680 size diff=37/82
s32 InputPass_CopyName(s32, s32 *);
s64 InputPass_GetKind(s32);
s32 func_002F2600(s32);
void func_002EF680(u8 *arg0) {
    s32 sp30;
    s64 temp_a0;
    void (*var_v1)();
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002EE1C0(temp_s0);
    func_002ECFD0(temp_s0, 1);
    temp_a0 = (s64) (InputPass_GetKind(*(s32 *)((u8 *)temp_s0 + 0x54)) << 0x30) >> 0x30;
    switch (temp_a0) {                              /* irregular */
    case 6:
        InputPass_CopyName(*(s32 *)((u8 *)temp_s0 + 0x54), &sp30);
        func_002F2600(*(s32 *)((u8 *)temp_s0 + 0x54));
        *(s32 *)((u8 *)temp_s0 + 0x54) = 0;
        if (((s64) (func_002EE7A0(temp_s0, &sp30) << 0x30) >> 0x30) < 0) {
            var_v1 = func_002EF440;
            *(s32 *)((u8 *)temp_s0 + 0x1C) = 0x43960000;
            if (func_002EF440 == NULL) {
                var_v1 = NULL;
            }
        } else {
            func_002EE9F0(temp_s0);
            func_002EDC50(temp_s0);
            *(s16 *)((u8 *)temp_s0 + 0x18) = 4;
            Save_Load(0x3000, 0);
            Save_Request(6, -1, 0);
            var_v1 = func_002EF4C0;
            if (func_002EF4C0 == NULL) {
                var_v1 = NULL;
            }
        }
block_14:
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    case 7:
        func_002F2600(*(s32 *)((u8 *)temp_s0 + 0x54));
        *(s32 *)((u8 *)temp_s0 + 0x54) = 0;
        var_v1 = func_002EF7C0;
        if (func_002EF7C0 == NULL) {
            var_v1 = NULL;
        }
        goto block_14;
    }
}
