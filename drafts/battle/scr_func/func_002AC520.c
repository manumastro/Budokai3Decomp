/* Draft (not built): func_002AC520 at 0x002AC520, size 0x140, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'int *' @ 1114: func_002AC3D0(temp_a2_3, temp_a3);
 * Original: asm/nonmatchings/battle/scr_func/func_002AC520.s */

// src/battle/scr_func.c func_002AC520 cerr diff=-1/0
void func_002AC520(u8 *arg0, u8 *arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_t1;
    u8 *temp_a3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_t1 = *(s32 *)((u8 *)temp_v1 + 0xC);
    *(s8 *)((u8 *)arg0 + 0x2A) = (s8) temp_t1;
    temp_v0 = (temp_t1 * 0x20E0) + (&D_005ABA80 + (**(s32 **)((u8 *)arg0 + 0) * 0x8380));
    *(s32 *)((u8 *)arg0 + 0x34) = (s32) (((*(s32 *)((u8 *)temp_v1 + 8) + 1) << 0x10) | *(s32 *)((u8 *)temp_v1 + 4));
    *(f32 *)((u8 *)arg0 + 0x2C) = (f32) -*(f32 *)((u8 *)arg0 + 0x38);
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x34);
    *(f32 *)((u8 *)arg0 + 0x30) = (f32) *(s32 *)((u8 *)(((temp_a2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_a2 >> 0x10) - 1) * 4) + temp_v0) + 0x44)) + 0x14)) + 8);
    *(s8 *)((u8 *)arg0 + 0x2B) = (s8) *(s32 *)((u8 *)temp_v1 + 0);
    temp_a2_2 = *(s32 *)((u8 *)arg0 + 0x34);
    temp_v1_2 = *(u8 **)((u8 *)arg1 + 0x38);
    temp_a3 = (((temp_a2_2 >> 0x10) - 1) * 4) + temp_v0;
    temp_a2_3 = *(s32 *)((u8 *)(((temp_a2_2 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a3 + 0x44)) + 0x14)) + 8);
    if (*(s32 *)((u8 *)temp_v1_2 + 0x6C) == 0) {
        *(s32 *)((u8 *)temp_v1_2 + 0x68) = (s32) (temp_a2_3 + *(&gScrTimers + (**(s32 **)((u8 *)arg0 + 0) * 4)));
    } else {
        *(s32 *)((u8 *)temp_v1_2 + 0x68) = (s32) (*(s32 *)((u8 *)temp_v1_2 + 0x68) + temp_a2_3);
    }
    *(s32 *)((u8 *)(temp_v1_2 + 0x68) + 4) = 1;
    func_002AC3D0(temp_a2_3, temp_a3);
}
