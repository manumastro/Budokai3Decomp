/* Draft (not built): func_002A0830 at 0x002A0830, size 0x170, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 49 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x170
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0830.s */

// src/sys/cnv_sys.c func_002A0830 size diff=49/94
s32 func_0022C7D0(s32, s32, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002A0830(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *temp_a2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s1_2;
    s32 temp_s4;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;

    if (*(s32 *)((u8 *)D_004708CC + 0) == 0) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)D_004708CC + 0xC) != 0) {
        goto block_4;
    }
block_3:
    return;
block_4:
    temp_a3 = *(s32 *)((u8 *)D_004708CC + 0x4C);
    temp_a2 = (int *)(temp_a3 + (arg0 * 4));
    temp_s0 = (unsigned char *)(*(s32 *)((u8 *)D_004708CC + 0x58) + (arg1 * 0x30));
    temp_s1 = (unsigned char *)(*temp_a2 + (arg1 * 0x2C));
    *(s32 *)((u8 *)temp_s1 + 0) = arg2;
    *(s32 *)((u8 *)temp_s1 + 4) = arg3;
    *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x28) = 0;
    if (arg2 < 0) {
        goto block_6;
    }
    temp_s4 = *(s32 *)((u8 *)temp_s0 + 0x20);
    temp_a1 = *(s32 *)((u8 *)temp_s0 + 0x1C);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x18);
    D_00470704 = temp_a0;
    D_0047070C = temp_a1;
    D_00470708 = temp_s4;
    amModel_SetCurrent(temp_a0, temp_a1, temp_a2, temp_a3);
    D_00470238 = temp_s4;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0x1C) + (arg2 * 4)), 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s1 + 0x1C), 1, 0);
block_6:
    if (arg3 < 0) {
        goto block_10;
    }
    temp_s1_2 = *(s32 *)((u8 *)temp_s0 + 0x20);
    temp_a1_2 = *(s32 *)((u8 *)temp_s0 + 0x1C);
    temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0x18);
    D_00470704 = temp_a0_2;
    D_0047070C = temp_a1_2;
    D_00470708 = temp_s1_2;
    amModel_SetCurrent(temp_a0_2, temp_a1_2);
    D_00470238 = temp_s1_2;
    if (*(s32 *)((u8 *)temp_s0 + 0x10) != 0) {
        goto block_9;
    }
    *(s32 *)((u8 *)temp_s0 + 0x10) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 0x14) + (arg3 * 4)), 0);
block_9:
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x10), 1, 0);
block_10:
    return;
}
