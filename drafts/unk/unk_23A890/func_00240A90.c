/* Draft (not built): func_00240A90 at 0x00240A90, size 0x1A0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x1A0
 * Original: asm/nonmatchings/unk/unk_23A890/func_00240A90.s */

// src/unk/unk_23A890.c func_00240A90 size diff=68/122
void func_00240A90(s32 arg0) {
    s16 temp_v1_2;
    s32 temp_t0;
    s8 temp_a1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_t0 = arg0 * 0xC0;
    temp_s2 = D_0046FE44 + (arg0 << 7);
    temp_a1 = *(s8 *)((u8 *)temp_s2 + 0x3B);
    if (temp_a1 != -1) {
        temp_s1 = *(u8 **)((u8 *)(D_004502F0 + temp_t0) + 0x24);
        temp_s0 = *(u8 **)((u8 *)(D_00450470 + temp_t0) + 0x24);
        temp_a2 = D_00450AF0 + (temp_a1 * 0x10);
        temp_v1 = D_00450AF0 + (*(s8 *)((u8 *)temp_s2 + 0x3C) * 0x10);
        *(f32 *)((u8 *)temp_s1 + 0x8C) = (f32) *(f32 *)((u8 *)temp_a2 + 0);
        *(f32 *)((u8 *)temp_s1 + 0x9C) = (f32) *(f32 *)((u8 *)temp_a2 + 4);
        *(f32 *)((u8 *)temp_s1 + 0xAC) = (f32) *(f32 *)((u8 *)temp_a2 + 8);
        *(f32 *)((u8 *)temp_s1 + 0xBC) = (f32) *(f32 *)((u8 *)temp_a2 + 0xC);
        *(f32 *)((u8 *)temp_s0 + 0x8C) = (f32) *(f32 *)((u8 *)temp_v1 + 0);
        *(f32 *)((u8 *)temp_s0 + 0x9C) = (f32) *(f32 *)((u8 *)temp_v1 + 4);
        *(f32 *)((u8 *)temp_s0 + 0xAC) = (f32) *(f32 *)((u8 *)temp_v1 + 8);
        *(f32 *)((u8 *)temp_s0 + 0xBC) = (f32) *(f32 *)((u8 *)temp_v1 + 0xC);
        temp_v1_2 = *(s16 *)((u8 *)D_0046FE44 + 0x100);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            func_002433F0();
            break;
        case 1:
            func_002BF3B0();
            break;
        }
        *(f32 *)((u8 *)temp_s1 + 0x8C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x8C) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s1 + 0x9C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x9C) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s1 + 0xAC) = (f32) (*(f32 *)((u8 *)temp_s1 + 0xAC) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s1 + 0xBC) = (f32) (*(f32 *)((u8 *)temp_s1 + 0xBC) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s0 + 0x8C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x8C) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s0 + 0x9C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x9C) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s0 + 0xAC) = (f32) (*(f32 *)((u8 *)temp_s0 + 0xAC) * *(f32 *)((u8 *)temp_s2 + 0x28));
        *(f32 *)((u8 *)temp_s0 + 0xBC) = (f32) (*(f32 *)((u8 *)temp_s0 + 0xBC) * *(f32 *)((u8 *)temp_s2 + 0x28));
        func_00208F70(*(s32 *)((u8 *)temp_s2 + 0x40));
        func_00208F70(*(s32 *)((u8 *)temp_s2 + 0x44));
    }
}
