/* Draft (not built): func_00145D70 at 0x00145D70, size 0x460, segment sys/unk_145B40 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 254 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/unk_145B40/func_00145D70.s */

// src/sys/unk_145B40.c func_00145D70 diff diff=254/279
void *func_00146260(void *, void *, s8);
s32 func_00146C20(void *, void *);
s32 func_00145D70(s32 arg0, s32 arg1, s8 arg2, s32 arg3) {
    s32 temp_s5;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    u8 **temp_s7;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s7 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s2 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_s1 = (unsigned char *)(D_0047E4C0 + ((arg0 & D_0047038C) << 6));
    temp_s0 = gModelBlock + *(gModelEnd + ((arg1 - *(s32 *)((u8 *)gModelBlock + 0x18)) * 4));
    temp_v0 = func_001461D0(temp_s1,((s32)(((u8 *)*(s32 *)((u8 *)temp_s0 + 0)))) + ((s32)(gModelUser)));
    if (temp_v0 != NULL) {
        goto block_10;
    }
    temp_v0_2 = func_00146260(temp_s1, temp_s0, arg2);
    func_00146C20(temp_s1, temp_v0_2);
    *temp_s7 = temp_v0_2;
    if (*(s32 *)((u8 *)temp_s0 + 0x1C) == 0) {
        goto block_8;
    }
    if (arg3 == 3) {
        goto block_5;
    }
    if (arg3 == 2) {
        goto block_5;
    }
    goto block_6;
block_5:
    temp_v1 = *(s32 *)((u8 *)temp_v0_2 + 0x28) | 0x30000000;
    *(s64 *)((u8 *)temp_s2 + 0) = (s64) *(s64 *)((u8 *)temp_v1 + 0);
    *(s64 *)((u8 *)temp_s2 + 8) = (s64) *(s64 *)((u8 *)temp_v1 + 8);
    *(s128 *)((u8 *)temp_s2 + 0x10) = (s128) *(s128 *)((u8 *)temp_v1 + 0x10);
    *(s128 *)((u8 *)temp_s2 + 0x20) = (s128) *(s128 *)((u8 *)temp_v1 + 0x20);
    *(s128 *)((u8 *)temp_s2 + 0x30) = (s128) *(s128 *)((u8 *)temp_v1 + 0x30);
    *(s128 *)((u8 *)temp_s2 + 0x40) = (s128) *(s128 *)((u8 *)temp_v1 + 0x40);
    *(s128 *)((u8 *)temp_s2 + 0x50) = (s128) *(s128 *)((u8 *)temp_v1 + 0x50);
    *(s128 *)((u8 *)temp_s2 + 0x60) = (s128) *(s128 *)((u8 *)temp_v1 + 0x60);
    *(s64 *)((u8 *)temp_s2 + 0x70) = (s64) *(s64 *)((u8 *)temp_v1 + 0x70);
    *(s64 *)((u8 *)temp_s2 + 0x78) = (s64) *(s64 *)((u8 *)temp_v1 + 0x78);
    *(s128 *)((u8 *)temp_s2 + 0x80) = (s128) *(s128 *)((u8 *)temp_v1 + 0x80);
    *(s128 *)((u8 *)temp_s2 + 0x90) = (s128) *(s128 *)((u8 *)temp_v1 + 0x90);
block_6:
    return 3;
block_8:
    return 1;
block_10:
    temp_s5 = *(s32 *)((u8 *)temp_v0 + 0x1C);
    *temp_s7 = temp_v0;
    *(s32 *)((u8 *)temp_v0 + 0x1C) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x1C) & ~0x3000);
    if (*(s8 *)((u8 *)temp_v0 + 0x23) != -1) {
        goto block_12;
    }
    func_00146C20(temp_s1, temp_v0);
    return (s32) (temp_s5 & 0x1000) >> 0xC;
block_12:
    if (*(s8 *)((u8 *)temp_v0 + 0x23) != arg2) {
        goto block_19;
    }
    if (temp_s5 & 0x2000) {
        goto block_19;
    }
    if (arg3 == 3) {
        goto block_17;
    }
    if (arg3 == 2) {
        goto block_17;
    }
    goto block_18;
block_17:
    temp_v1_2 = *(s32 *)((u8 *)temp_v0 + 0x28) | 0x30000000;
    *(s64 *)((u8 *)temp_s2 + 0) = (s64) *(s64 *)((u8 *)temp_v1_2 + 0);
    *(s64 *)((u8 *)temp_s2 + 8) = (s64) *(s64 *)((u8 *)temp_v1_2 + 8);
    *(s128 *)((u8 *)temp_s2 + 0x10) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x10);
    *(s128 *)((u8 *)temp_s2 + 0x20) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x20);
    *(s128 *)((u8 *)temp_s2 + 0x30) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x30);
    *(s128 *)((u8 *)temp_s2 + 0x40) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x40);
    *(s128 *)((u8 *)temp_s2 + 0x50) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x50);
    *(s128 *)((u8 *)temp_s2 + 0x60) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x60);
    *(s64 *)((u8 *)temp_s2 + 0x70) = (s64) *(s64 *)((u8 *)temp_v1_2 + 0x70);
    *(s64 *)((u8 *)temp_s2 + 0x78) = (s64) *(s64 *)((u8 *)temp_v1_2 + 0x78);
    *(s128 *)((u8 *)temp_s2 + 0x80) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x80);
    *(s128 *)((u8 *)temp_s2 + 0x90) = (s128) *(s128 *)((u8 *)temp_v1_2 + 0x90);
block_18:
    func_00146C20(temp_s1, temp_v0);
    return (s32) (temp_s5 & 0x1000) >> 0xC;
block_19:
    if (arg3 == 3) {
        goto block_28;
    }
    if (arg3 == 2) {
        goto block_26;
    }
    if (arg3 == 1) {
        goto block_25;
    }
    if (arg3 == 0) {
        goto block_29;
    }
    goto block_29;
block_25:
    *(s8 *)((u8 *)temp_v0 + 0x23) = arg2;
    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_v0 + 0x28) | 0x20000000) + 0x64) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x24) + ((*(s32 *)((u8 *)temp_s0 + 0x28) + 0x20) * arg2));
    goto block_29;
block_26:
    temp_v1_3 = *(s32 *)((u8 *)temp_v0 + 0x28) | 0x20000000;
    *(s64 *)((u8 *)temp_s2 + 0) = (s64) *(s64 *)((u8 *)temp_v1_3 + 0);
    *(s64 *)((u8 *)temp_s2 + 8) = (s64) *(s64 *)((u8 *)temp_v1_3 + 8);
    *(s128 *)((u8 *)temp_s2 + 0x10) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x10);
    *(s128 *)((u8 *)temp_s2 + 0x20) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x20);
    *(s128 *)((u8 *)temp_s2 + 0x30) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x30);
    *(s128 *)((u8 *)temp_s2 + 0x40) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x40);
    *(s128 *)((u8 *)temp_s2 + 0x50) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x50);
    *(s128 *)((u8 *)temp_s2 + 0x60) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x60);
    *(s64 *)((u8 *)temp_s2 + 0x70) = (s64) *(s64 *)((u8 *)temp_v1_3 + 0x70);
    *(s64 *)((u8 *)temp_s2 + 0x78) = (s64) *(s64 *)((u8 *)temp_v1_3 + 0x78);
    *(s128 *)((u8 *)temp_s2 + 0x80) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x80);
    *(s128 *)((u8 *)temp_s2 + 0x90) = (s128) *(s128 *)((u8 *)temp_v1_3 + 0x90);
    *(s32 *)((u8 *)temp_s2 + 0x64) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x24) + ((*(s32 *)((u8 *)temp_s0 + 0x28) + 0x20) * arg2));
    goto block_29;
block_28:
    *(s8 *)((u8 *)temp_v0 + 0x23) = arg2;
    temp_v0_3 = *(s32 *)((u8 *)temp_v0 + 0x28) | 0x20000000;
    *(s32 *)((u8 *)temp_v0_3 + 0x64) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x24) + ((*(s32 *)((u8 *)temp_s0 + 0x28) + 0x20) * arg2));
    *(s64 *)((u8 *)temp_s2 + 0) = (s64) *(s64 *)((u8 *)temp_v0_3 + 0);
    *(s64 *)((u8 *)temp_s2 + 8) = (s64) *(s64 *)((u8 *)temp_v0_3 + 8);
    *(s128 *)((u8 *)temp_s2 + 0x10) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x10);
    *(s128 *)((u8 *)temp_s2 + 0x20) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x20);
    *(s128 *)((u8 *)temp_s2 + 0x30) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x30);
    *(s128 *)((u8 *)temp_s2 + 0x40) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x40);
    *(s128 *)((u8 *)temp_s2 + 0x50) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x50);
    *(s128 *)((u8 *)temp_s2 + 0x60) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x60);
    *(s64 *)((u8 *)temp_s2 + 0x70) = (s64) *(s64 *)((u8 *)temp_v0_3 + 0x70);
    *(s64 *)((u8 *)temp_s2 + 0x78) = (s64) *(s64 *)((u8 *)temp_v0_3 + 0x78);
    *(s128 *)((u8 *)temp_s2 + 0x80) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x80);
    *(s128 *)((u8 *)temp_s2 + 0x90) = (s128) *(s128 *)((u8 *)temp_v0_3 + 0x90);
block_29:
    func_00146C20(temp_s1, temp_v0);
    return ((s32) (temp_s5 & 0x1000) >> 0xC) | 2;
}
