/* Draft (not built): func_002EB560 at 0x002EB560, size 0x244, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *)temp_t0_2 + 0x @ 671: 2 **)((u8 *)(*(u8 **)((u8 *)(*(*(s32 *)((u8 *)temp_v1 + 0x1C) + (D_00457440 * 4))) + 8)) + 0x14)
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EB560.s */

// src/unk/unk_2EA0B0.c func_002EB560 cerr diff=-1/0
extern s8 D_00457441;
extern s8 D_00457442;
extern s8 D_00457443;
extern void amFile_Load(void *);
void func_002EB560(void) {
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_t0;
    u8 *temp_t0_2;
    u8 *temp_t0_3;
    u8 *temp_v1;

    temp_s0 = D_00470958;
    if (temp_s0 != NULL) {
        temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x5C);
        if (temp_s1 != NULL) {
            *(u8 **)((u8 *)temp_s0 + 0x5C) = (u8 *) *(u8 **)((u8 *)temp_s1 + 0x40);
            *(u8 **)((u8 *)temp_s0 + 0x50) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x50);
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0x50));
            *(u8 **)((u8 *)temp_s1 + 0x40) = NULL;
            amCdFs_Close((s32)(temp_s1), 0);
        }
        temp_s1_2 = *(u8 **)((u8 *)temp_s0 + 0x60);
        if (temp_s1_2 != NULL) {
            *(u8 **)((u8 *)temp_s0 + 0x60) = (u8 *) *(u8 **)((u8 *)temp_s1_2 + 0x40);
            *(u8 **)((u8 *)temp_s0 + 0x54) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1_2 + 0x40)) + 0x50);
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0x54));
            *(u8 **)((u8 *)temp_s1_2 + 0x40) = NULL;
            amCdFs_Close((s32)(temp_s1_2), 0);
        }
        temp_s1_3 = *(u8 **)((u8 *)temp_s0 + 0x64);
        if (temp_s1_3 != NULL) {
            *(u8 **)((u8 *)temp_s0 + 0x64) = (u8 *) *(u8 **)((u8 *)temp_s1_3 + 0x40);
            *(u8 **)((u8 *)temp_s0 + 0x58) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1_3 + 0x40)) + 0x50);
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0x58));
            *(u8 **)((u8 *)temp_s1_3 + 0x40) = NULL;
            amCdFs_Close((s32)(temp_s1_3), 0);
        }
        temp_v1 = *(u8 **)((u8 *)temp_s0 + 0x50);
        temp_t0 = *(u8 **)((u8 *)temp_s0 + 0x54);
        temp_a1 = temp_t0 + *(*(s32 *)((u8 *)temp_t0 + 0x14) + temp_t0 + ((**(s32 **)((u8 *)(*(u8 **)((u8 *)(*(*(s32 *)((u8 *)temp_v1 + 0x1C) + (D_00457440 * 4))) + 8)) + 0x14) - *(s32 *)((u8 *)temp_t0 + 0x18)) * 4));
        *(s32 *)((u8 *)temp_s0 + 0x28) = (s32) *(s16 *)((u8 *)temp_a1 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x38) = (s32) *(s16 *)((u8 *)temp_a1 + 0x12);
        temp_t0_2 = *(u8 **)((u8 *)temp_s0 + 0x54);
        temp_a1_2 = temp_t0_2 + *(*(s32 *)((u8 *)temp_t0_2 + 0x14) + temp_t0_2 + ((**(s32 **)((u8 *)(*(u8 **)((u8 *)(*(*(s32 *)((u8 *)temp_v1 + 0x1C) + (D_00457441 * 4))) + 8)) + 0x14) - *(s32 *)((u8 *)temp_t0_2 + 0x18)) * 4));
        *(s32 *)((u8 *)temp_s0 + 0x2C) = (s32) *(s16 *)((u8 *)temp_a1_2 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x3C) = (s32) *(s16 *)((u8 *)temp_a1_2 + 0x12);
        temp_t0_3 = *(u8 **)((u8 *)temp_s0 + 0x54);
        temp_a1_3 = temp_t0_3 + *(*(s32 *)((u8 *)temp_t0_3 + 0x14) + temp_t0_3 + ((**(s32 **)((u8 *)(*(u8 **)((u8 *)(*(*(s32 *)((u8 *)temp_v1 + 0x1C) + (D_00457442 * 4))) + 8)) + 0x14) - *(s32 *)((u8 *)temp_t0_3 + 0x18)) * 4));
        *(s32 *)((u8 *)temp_s0 + 0x30) = (s32) *(s16 *)((u8 *)temp_a1_3 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x40) = (s32) *(s16 *)((u8 *)temp_a1_3 + 0x12);
        temp_a3 = *(u8 **)((u8 *)temp_s0 + 0x54);
        temp_a0 = temp_a3 + *(*(s32 *)((u8 *)temp_a3 + 0x14) + temp_a3 + ((**(s32 **)((u8 *)(*(u8 **)((u8 *)(*(*(s32 *)((u8 *)temp_v1 + 0x1C) + (D_00457443 * 4))) + 8)) + 0x14) - *(s32 *)((u8 *)temp_a3 + 0x18)) * 4));
        *(s32 *)((u8 *)temp_s0 + 0x34) = (s32) *(s16 *)((u8 *)temp_a0 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x44) = (s32) *(s16 *)((u8 *)temp_a0 + 0x12);
    }
}
