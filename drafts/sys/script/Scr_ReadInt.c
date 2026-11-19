/* Draft (not built): Scr_ReadInt at 0x0014D3C0, size 0x1B0, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  $v0 */)) + 2) << 0x10) | (*M2C_ERROR(/* Read from unset register $v0 */) | (*(u8 *)((u8 *)(M2C_ERROR(/* Read from unset
 * Original: asm/nonmatchings/sys/script/Scr_ReadInt.s */

// src/sys/script.c Scr_ReadInt cerr diff=-1/0
s32 Scr_ReadInt(ScrCtx *arg0, u8 **arg1) {
    s32 temp_a2;
    s32 temp_a2_3;
    s8 temp_a2_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 temp_v1;

    temp_v1 = *(u8 *)((u8 *)(*arg1) + 0);
    *arg1 += 1;
    temp_a2 = (s32) temp_v1 >> 4;
    switch (temp_a2) {
    case 0:
        return *(s32 *)(arg0 + ((temp_v1 & 0xF) * 4));
    case 1:
        temp_v0 = *arg1;
        *arg1 += 1;
        return (s32) *(s8 *)((u8 *)temp_v0 + 0);
    case 2:
        temp_v0_2 = *arg1;
        *arg1 += 2;
        return *(u8 *)((u8 *)temp_v0_2 + 0) | (*(s8 *)((u8 *)temp_v0_2 + 1) << 8);
    case 3:
        *arg1 += 4;
    default:
block_12:
        return (*(u8 *)((u8 *)(M2C_ERROR(/* Read from unset register $v0 */)) + 3) << 0x18) | ((*(u8 *)((u8 *)(M2C_ERROR(/* Read from unset register $v0 */)) + 2) << 0x10) | (*M2C_ERROR(/* Read from unset register $v0 */) | (*(u8 *)((u8 *)(M2C_ERROR(/* Read from unset register $v0 */)) + 1) << 8)));
        goto block_12;
    case 5:
        temp_a2_2 = (s8) *(u8 *)((u8 *)(*arg1) + 0);
        *arg1 += 1;
        goto block_12;
    case 6:
        temp_v0_3 = *arg1;
        *arg1 += 2;
        goto block_12;
    case 7:
        temp_a2_3 = *(s32 *)(arg0 + ((((s8) *(u8 *)((u8 *)(*arg1) + 0) >> 4) & 0xF) * 4));
        *arg1 += 1;
        goto block_12;
    }
}
