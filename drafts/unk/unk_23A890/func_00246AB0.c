/* Draft (not built): func_00246AB0 at 0x00246AB0, size 0x1EC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1DC, original 0x1EC
 * Original: asm/nonmatchings/unk/unk_23A890/func_00246AB0.s */

// src/unk/unk_23A890.c func_00246AB0 size diff=64/119
extern void *D_0058D42C;
void func_00246AB0(u8 *arg0) {
    s32 temp_a3;
    s32 var_a2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_a3_2;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *temp_t2;
    u8 *temp_t3;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_a0;

    temp_a3 = *(s32 *)((u8 *)arg0 + 0x1350);
    if (*(s32 *)((u8 *)arg0 + 0x1CFC) == 0) {
        if (temp_a3 == -1) {
            var_a0 = D_0058D42C;
        } else {
            temp_a0 = gBattle + (temp_a3 * 0x2020);
            if (*(s32 *)((u8 *)temp_a0 + 0x252C) == 0x23) {
                var_a2 = 1;
                if (*(s32 *)((u8 *)(temp_a0 + 0x830) + 0xBA4) != 0) {

                } else {
                    var_a2 = 0;
                }
            } else {
                var_a2 = 0;
            }
            temp_v1 = D_0046FE4C + (temp_a3 * 0x480) + (var_a2 * 0x220);
            var_a0 = *(u8 **)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0x60) * 4) + (temp_v1 + 0x50)) + 0x88);
        }
        temp_a0_2 = var_a0 + *(s32 *)((u8 *)var_a0 + 0xC);
        temp_v1_2 = *(u8 **)((u8 *)temp_a0_2 + 0x24);
        temp_a0_3 = *(u8 **)((u8 *)temp_a0_2 + 0x28);
        temp_t3 = *(u8 **)((u8 *)temp_a0_3 + 0x28);
        temp_t1 = *(u8 **)((u8 *)temp_t3 + 0x28);
        temp_t2 = *(u8 **)((u8 *)temp_t3 + 0x24);
        temp_t0 = *(u8 **)((u8 *)temp_t1 + 0x28);
        temp_a3_2 = *(u8 **)((u8 *)temp_t0 + 0x24);
        temp_a2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_t0 + 0x28)) + 0x24);
        *(s32 *)((u8 *)temp_v1_2 + 0x5C) = 0x431B0000;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 0x28)) + 0x5C) = 0x43820000;
        *(s32 *)((u8 *)temp_a0_3 + 0x5C) = 0x43AF0000;
        *(s32 *)((u8 *)temp_t3 + 0x74) = 0x43960000;
        *(s32 *)((u8 *)temp_t3 + 0x78) = 0x41200000;
        *(s32 *)((u8 *)temp_t3 + 0x7C) = 0x42700000;
        *(s32 *)((u8 *)temp_t2 + 0x5C) = 0x41C80000;
        *(s32 *)((u8 *)temp_t2 + 0x60) = 0x420C0000;
        *(s32 *)((u8 *)temp_t2 + 0x64) = 0x41700000;
        *(s32 *)((u8 *)temp_t2 + 0x68) = 0x41700000;
        *(s32 *)((u8 *)temp_t2 + 0x6C) = 0x41700000;
        *(s32 *)((u8 *)temp_t2 + 0x70) = 0x41700000;
        *(s32 *)((u8 *)temp_t1 + 0x70) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x74) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x78) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x7C) = 0x3F800000;
        *(s32 *)((u8 *)temp_t1 + 0x80) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x84) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x88) = 0x41580000;
        *(s32 *)((u8 *)temp_t1 + 0x8C) = 0x3F800000;
        *(s32 *)((u8 *)temp_t0 + 0x74) = 0x43960000;
        *(s32 *)((u8 *)temp_t0 + 0x78) = 0x3F000000;
        *(s32 *)((u8 *)temp_t0 + 0x7C) = 0x42700000;
        *(s32 *)((u8 *)temp_a3_2 + 0x5C) = 0x425C0000;
        *(s32 *)((u8 *)temp_a3_2 + 0x60) = 0x42820000;
        *(s32 *)((u8 *)temp_a3_2 + 0x64) = 0x41C00000;
        *(s32 *)((u8 *)temp_a3_2 + 0x68) = 0x41C00000;
        *(s32 *)((u8 *)temp_a3_2 + 0x6C) = 0x41C00000;
        *(s32 *)((u8 *)temp_a3_2 + 0x70) = 0x41C00000;
        *(s32 *)((u8 *)temp_a2 + 0x5C) = 0x43200000;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a2 + 0x24)) + 0x5C) = 0x43200000;
    }
}
