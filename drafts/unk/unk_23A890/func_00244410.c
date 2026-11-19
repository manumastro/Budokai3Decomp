/* Draft (not built): func_00244410 at 0x00244410, size 0x168, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 49 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x164, original 0x168
 * Original: asm/nonmatchings/unk/unk_23A890/func_00244410.s */

// src/unk/unk_23A890.c func_00244410 size diff=49/89
void func_00244410(u8 *arg0, s32 arg1) {
    s32 temp_s1;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_v0 = D_0046FE4C + (temp_s1 * 0x480);
    temp_a0 = *(u8 **)((u8 *)temp_v0 + 0x40);
    temp_s0 = temp_v0 + 0x10;
    if (temp_a0 == NULL) {
        goto block_2;
    }
    Obj_ResetF38((s32)(temp_a0));
    *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
block_2:
    temp_a2 = *(u8 **)((u8 *)(D_0058D3CC + *(s32 *)((u8 *)D_0058D3CC + 0xC)) + 0x24);
    temp_a1 = *(u8 **)((u8 *)temp_a2 + 0x28);
    *(s32 *)((u8 *)temp_a2 + 0xA4) = (s32) ((*(s32 *)((u8 *)arg0 + 0xBA4) * 2) + 0x1A);
    *(s32 *)((u8 *)temp_a1 + 0xA4) = (s32) ((*(s32 *)((u8 *)arg0 + 0xBA4) * 2) + 0x1A);
    if (arg1 == 0x24) {
        goto block_9;
    }
    if (arg1 == 0x23) {
        goto block_8;
    }
    if (arg1 == 0x21) {
        goto block_7;
    }
    if (arg1 == 0x22) {
        goto block_7;
    }
    goto block_10;
block_7:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41700000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x40E00000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
    goto block_11;
block_8:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41B00000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x41800000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
    goto block_11;
block_9:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x41A00000;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0x41400000;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 2;
    goto block_11;
block_10:
    *(s32 *)((u8 *)temp_a2 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_a2 + 0xA0) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x5C) = 0;
    *(s32 *)((u8 *)temp_a1 + 0xA0) = 1;
block_11:
    *(s32 *)((u8 *)temp_s0 + 0x30) = func_00209540((s32)(D_0058D3CC), (s32)((temp_s1 == 0) ? 0x04000010 : 0x04000020), 0);
    return;
}
