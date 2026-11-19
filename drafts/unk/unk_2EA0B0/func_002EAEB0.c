/* Draft (not built): func_002EAEB0 at 0x002EAEB0, size 0xB8, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0xB8
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EAEB0.s */

// src/unk/unk_2EA0B0.c func_002EAEB0 size diff=18/56
void func_002EAEB0(void) {
    s32 (*temp_v1)();
    u8 *temp_s0;

    temp_s0 = D_00470958;
    if (*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0) & 4) {
        goto block_8;
    }
loop_2:
    *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x20) + 1);
    if (!(*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0) & 1)) {
        goto block_4;
    }
    *(s32 *)((u8 *)temp_s0 + 0x48) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x48) + 1);
block_4:
    *(u8 **)((u8 *)temp_s0 + 0x18) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0x18) + 8);
    temp_v1 = *(s32 (**)())((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 4);
    if (temp_v1 == NULL) {
        goto block_6;
    }
    temp_v1();
block_6:
    if (!(*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x18)) + 0) & 4)) {
        goto loop_2;
    }
block_8:
    return;
}
