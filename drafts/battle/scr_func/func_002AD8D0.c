/* Draft (not built): func_002AD8D0 at 0x002AD8D0, size 0x19C, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'int *' @ 1320: return func_002AD610(temp_a2, temp_a3);
 * Original: asm/nonmatchings/battle/scr_func/func_002AD8D0.s */

// src/battle/scr_func.c func_002AD8D0 cerr diff=-1/0
extern s32 D_004700E0;
s32 func_002AD8D0(u8 *arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_v1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_t1 = *(s32 *)((u8 *)temp_v1 + 0xC);
    temp_v0 = (temp_t1 * 0x20E0) + (&D_005ABA80 + (**(s32 **)((u8 *)arg0 + 0) * 0x8380));
    if ((*(s32 *)((u8 *)temp_v0 + 0) != 0) || (*(s32 *)((u8 *)temp_v0 + 4) != 0)) {
        if (*(s32 *)((u8 *)temp_v0 + 0x3C) == 0) {
            goto block_4;
        }
        *(s8 *)((u8 *)arg0 + 0x2A) = (s8) temp_t1;
        *(s32 *)((u8 *)arg0 + 0x34) = (s32) (((*(s32 *)((u8 *)temp_v1 + 8) + 1) << 0x10) | *(s32 *)((u8 *)temp_v1 + 4));
        *(f32 *)((u8 *)arg0 + 0x2C) = (f32) -*(f32 *)((u8 *)arg0 + 0x38);
        temp_a2_2 = *(s32 *)((u8 *)arg0 + 0x34);
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(s32 *)((u8 *)(((temp_a2_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_a2_2 >> 0x10) - 1) * 4) + *(s32 *)((u8 *)temp_v0 + 0x3C)) + 0x46C)) + 0x14)) + 8);
        *(s8 *)((u8 *)arg0 + 0x2B) = (s8) *(s32 *)((u8 *)temp_v1 + 0);
        temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x34);
        temp_a3 = *(s32 *)((u8 *)temp_v0 + 0x3C);
        temp_v0_2 = *(u8 **)((u8 *)arg1 + 0x38);
        temp_a2 = *(s32 *)((u8 *)(((temp_v1_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1_2 >> 0x10) - 1) * 4) + temp_a3) + 0x46C)) + 0x14)) + 8);
        if (*(s32 *)((u8 *)temp_v0_2 + 0x6C) == 0) {
            *(s32 *)((u8 *)temp_v0_2 + 0x68) = (s32) (temp_a2 + *(&gScrTimers + (**(s32 **)((u8 *)arg0 + 0) * 4)));
        } else {
            *(s32 *)((u8 *)temp_v0_2 + 0x68) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x68) + temp_a2);
        }
        *(s32 *)((u8 *)(temp_v0_2 + 0x68) + 4) = 1;
        *(s32 (**)(s32, s32))((u8 *)arg0 + 0x10) = func_002AD610;
        return func_002AD610(temp_a2, temp_a3);
    }
block_4:
    *(s32 **)((u8 *)arg1 + 0) = &D_004700E0;
    *(s32 *)((u8 *)arg1 + 4) = 0;
    return 5;
}
