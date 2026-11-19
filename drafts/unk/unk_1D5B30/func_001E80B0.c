/* Draft (not built): func_001E80B0 at 0x001E80B0, size 0x1DC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x1DC
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E80B0.s */

// src/unk/unk_1D5B30.c func_001E80B0 size diff=47/125
void func_001E80B0(u8 *arg0) {
    s16 var_a3;
    s32 temp_t0;
    s32 temp_t3;
    s32 var_t4;
    s32 var_t5;
    u8 *temp_a2;
    u8 *var_a1;
    u8 *var_t2;
    u8 *var_t4_2;
    u8 *var_v1;

    temp_t3 = *(s32 *)((u8 *)arg0 + 0x520);
    temp_a2 = *(u8 **)((u8 *)arg0 + 0x568);
    var_v1 = NULL;
    if (temp_t3 < 0x10000) {
        var_t4 = 0;
        var_t2 = arg0;
loop_2:
        var_a1 = *(u8 **)((u8 *)var_t2 + 0x2C0);
        if ((var_a1 == NULL) || (temp_t3 >= *(s32 *)((u8 *)var_a1 + 0x10)) || (var_v1 = (unsigned char *)(*(s32 *)((temp_t3 * 4) + *(s32 *)((u8 *)var_a1 + 0x14))), (var_v1 == NULL))) {
            var_t4 += 1;
            var_t2 += 4;
            if (var_t4 < 3) {
                goto loop_2;
            }
        }
        if (var_v1 == NULL) {
            *(s32 *)((u8 *)arg0 + 0x520) = 0;
            if (*(s8 *)((u8 *)temp_a2 + 0x1FF9) != 0) {
                *(s32 *)((u8 *)arg0 + 0x520) = (s32) (*(s32 *)((u8 *)arg0 + 0x520) + 0x100);
            }
            var_a1 = *(u8 **)((u8 *)gBattle + 0x824);
            var_v1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)var_a1 + 0x14) + (*(s32 *)((u8 *)arg0 + 0x520) * 4)));
        }
        *(s32 *)((u8 *)arg0 + 0x604) = (s32) (((*(s16 *)((u8 *)var_v1 + 2) + 1) << 0x10) | *(s16 *)((u8 *)var_v1 + 0));
        *(s32 *)((u8 *)arg0 + 0x634) = (s32) (*(s16 *)((u8 *)var_v1 + 2) + 1);
    } else {
        var_t4_2 = *(u8 **)((u8 *)temp_a2 + 0x1354);
        var_t5 = 0;
loop_12:
        var_a1 = *(u8 **)((u8 *)var_t4_2 + 0x910);
        if ((var_a1 != NULL) && (((temp_t3 - 0x8000) - 0x8000) < *(s32 *)((u8 *)var_a1 + 0x10))) {
            var_v1 = (unsigned char *)(*(s32 *)(0xFFFC0000 + (s32) ((temp_t3 * 4) + *(s32 *)((u8 *)var_a1 + 0x14))));
            if (var_v1 == NULL) {
                goto block_16;
            }
        } else {
block_16:
            var_t5 += 1;
            var_t4_2 += 4;
            if (var_t5 < 3) {
                goto loop_12;
            }
        }
        if (var_v1 == NULL) {
            *(s32 *)((u8 *)arg0 + 0x520) = 0;
            if (*(s8 *)((u8 *)temp_a2 + 0x1FF9) != 0) {
                *(s32 *)((u8 *)arg0 + 0x520) = (s32) (*(s32 *)((u8 *)arg0 + 0x520) + 0x100);
            }
            var_a1 = *(u8 **)((u8 *)gBattle + 0x824);
            var_v1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)var_a1 + 0x14) + (*(s32 *)((u8 *)arg0 + 0x520) * 4)));
        }
        var_a3 = *(s16 *)((u8 *)var_v1 + 2);
        switch (var_a3) {                           /* irregular */
        case 3:
            var_a3 = 8;
            break;
        case 5:
            var_a3 = 0xA;
            break;
        }
        temp_t0 = var_a3 + 1;
        *(s32 *)((u8 *)arg0 + 0x604) = (s32) ((temp_t0 << 0x10) | *(s16 *)((u8 *)var_v1 + 0));
        *(s32 *)((u8 *)arg0 + 0x634) = temp_t0;
    }
    *(u8 **)((u8 *)arg0 + 0x474) = var_a1;
    *(u8 **)((u8 *)arg0 + 0x524) = var_v1;
    *(s32 *)((u8 *)arg0 + 0x624) = (s32) *(s32 *)((u8 *)var_v1 + 0x18);
    *(s32 *)((u8 *)arg0 + 0x62C) = (s32) *(s32 *)((u8 *)var_v1 + 0x1C);
    *(s32 *)((u8 *)arg0 + 0x638) = (s32) *(s32 *)((u8 *)var_v1 + 0x20);
}
