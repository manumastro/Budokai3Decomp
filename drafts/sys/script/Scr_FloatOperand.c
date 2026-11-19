/* Draft (not built): Scr_FloatOperand at 0x0014D910, size 0x1C0, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'struct ScrCtx' to 'signed char' @ 931: return (s8) *(arg0 + ((temp_v0 & 0xF) * 4));
 * Original: asm/nonmatchings/sys/script/Scr_FloatOperand.s */

// src/sys/script.c Scr_FloatOperand cerr diff=-1/0
u8 *Scr_FloatOperand(ScrCtx *arg0, u8 **arg1) {
    s32 temp_a2_6;
    s32 temp_v1;
    s8 temp_a2_4;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_a2_3;
    u8 *temp_a2_5;
    u8 temp_v0;

    temp_v0 = *(u8 *)((u8 *)(*arg1) + 0);
    *arg1 += 1;
    temp_v1 = (s32) temp_v0 >> 4;
    switch (temp_v1) {
    case 0:
        return (unsigned char *)(arg0 + ((temp_v0 & 0xF) * 4) + 0x40);
    case 1:
        temp_a2 = *arg1;
        *arg1 += 1;
        return (unsigned char *)(*(s8 *)((u8 *)temp_a2 + 0));
    case 2:
        temp_a2_2 = *arg1;
        *arg1 += 2;
        return (unsigned char *)(*(u8 *)((u8 *)temp_a2_2 + 0) | (*(s8 *)((u8 *)temp_a2_2 + 1) << 8));
    case 3:
        temp_a2_3 = *arg1;
        *arg1 += 4;
        return (unsigned char *)((*(u8 *)((u8 *)temp_a2_3 + 3) << 0x18) | ((*(u8 *)((u8 *)temp_a2_3 + 2) << 0x10) | (*(u8 *)((u8 *)temp_a2_3 + 0) | (*(u8 *)((u8 *)temp_a2_3 + 1) << 8))));
    case 4:
        return (s8) *(arg0 + ((temp_v0 & 0xF) * 4));
    case 5:
        temp_a2_4 = (s8) *(u8 *)((u8 *)(*arg1) + 0);
        *arg1 += 1;
        return (unsigned char *)(*(s32 *)(arg0 + ((temp_v0 & 0xF) * 4)) + temp_a2_4);
    case 6:
        temp_a2_5 = *arg1;
        *arg1 += 2;
        return (unsigned char *)(*(s32 *)(arg0 + ((temp_v0 & 0xF) * 4)) + (*(u8 *)((u8 *)temp_a2_5 + 0) | (*(s8 *)((u8 *)temp_a2_5 + 1) << 8)));
    case 7:
        temp_a2_6 = *(s32 *)(arg0 + ((((s8) *(u8 *)((u8 *)(*arg1) + 0) >> 4) & 0xF) * 4));
        *arg1 += 1;
        return (unsigned char *)(*(s32 *)(arg0 + ((temp_v0 & 0xF) * 4)) + temp_a2_6);
    default:
        return 0;
    }
}
