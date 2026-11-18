/* Draft (not built): func_00272A20 at 0x00272A20, size 0x148, segment menu/ess_list (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0x148
 * Original: asm/nonmatchings/menu/ess_list/func_00272A20.s */

// src/menu/ess_list.c func_00272A20 size diff=44/78
void func_00272A20(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_v0;

    *(u8 **)((u8 *)D_004707FC + 0x18) = amTask_Create(&func_00272510, 0, 0x3200, 0x200);
    *(u8 **)((u8 *)D_004707FC + 0x1C) = amTask_Create(NULL, 0, 0x3200, 0x200);
    temp_v0 = *(u8 **)((u8 *)D_004707FC + 0x18);
    memset(temp_v0 + 0x30, 0, 0x1C);
    *(s32 *)((u8 *)temp_v0 + 0x30) = 0x3C;
    *(s32 *)((u8 *)D_004707FC + 0x40) = arg0;
    *(s32 *)((u8 *)D_004707FC + 0x48) = arg2;
    *(s32 *)((u8 *)D_004707FC + 0x4C) = arg1;
    func_002700E0();
    *(s32 *)((u8 *)D_004707FC + 0x74) = 0;
    if (arg1 > 0) {
        *(s32 *)((u8 *)D_004707FC + 0xA4) = 2;
    } else {
        *(s32 *)((u8 *)D_004707FC + 0xA4) = 3;
        *(s32 *)((u8 *)(D_004707FC + 0xA4) + 8) = 0x2710;
    }
    if ((arg1 + arg2 + 9) < *(s32 *)((u8 *)D_004707FC + 0x58)) {
        *(s32 *)((u8 *)D_004707FC + 0xD4) = 4;
    } else {
        *(s32 *)((u8 *)D_004707FC + 0xD4) = 5;
        *(s32 *)((u8 *)(D_004707FC + 0xD4) + 8) = 0x2710;
    }
    *(s32 *)((u8 *)D_004707FC + 0x104) = 8;
}
