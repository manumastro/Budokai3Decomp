/* Draft (not built): func_00224480 at 0x00224480, size 0x200, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'float' mwccps2.exe Compiler: @ 417: ) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C)) + 0x3C), &sp40, 0);
 * Original: asm/nonmatchings/unk/unk_21D260/func_00224480.s */

// src/unk/unk_21D260.c func_00224480 cerr diff=-1/0
void *func_0021C660(s32);
s32 memset(s32 *, s32, s32);
extern s32 D_0058BB3C;
void func_00224480(u8 *arg0) {
    s32 sp40;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    s32 sp84;
    f32 sp88;
    f32 sp8C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    s16 temp_a2;
    s16 temp_s2;
    s32 temp_a1_2;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a3;
    u8 *temp_s0;
    u8 *temp_t0;

    temp_s0 = (u8 *)(gBtlSys);
    temp_s2 = *(s16 *)((u8 *)(func_0021C660(D_0058BB3C)) + 0x3E);
    if (temp_s2 != -1) {
        memset(&sp40, 0, 0x60);
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xED8);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04040000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04040000);
        D_00470238 = 0;
        func_00228430(0);
        func_0022B900(*(s32 *)((u8 *)(((temp_s2 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xEDC)) + 0x1C)) + 0x3C), &sp40, 0);
        func_00228410();
        temp_t0 = *(u8 **)((u8 *)temp_s0 + 0xED8);
        temp_a3 = *(s32 *)((u8 *)temp_t0 + 0x14) + temp_t0;
        temp_a1 = temp_t0 + *(temp_a3 + ((sp58 - *(s32 *)((u8 *)temp_t0 + 0x18)) * 4));
        temp_a2 = *(s16 *)((u8 *)temp_a1 + 0x10);
        temp_f12 = (f32) temp_a2;
        sp80 = 0x3F000000;
        sp84 = 0x3F000000;
        temp_f13 = (f32) *(s16 *)((u8 *)temp_a1 + 0x12);
        sp70 = -temp_f12 / 2.0f;
        sp78 = temp_f12 / 2.0f;
        sp74 = -temp_f13 / 2.0f;
        sp7C = temp_f13 / 2.0f;
        sp88 = temp_f12 - 0.5f;
        sp8C = temp_f13 - 0.5f;
        temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x28);
        temp_f12_2 = temp_f12 + 15.0f;
        temp_f13_2 = temp_f13 + 10.0f;
        switch (temp_a1_2) {                        /* irregular */
        case 0:
            temp_f0 = *(f32 *)((u8 *)arg0 + 0x2C) / 8.0f;
            func_0021D6C0(1, temp_a1_2, temp_a2, temp_a3, temp_f12_2 * temp_f0, temp_f13_2 * temp_f0);
            return;
        case 1:
            func_0021D6C0(1, temp_a1_2, temp_a2, temp_a3, temp_f12_2, temp_f13_2);
            func_0022C6B0(&sp40);
            return;
        case 2:
            temp_f0_2 = (8.0f - *(f32 *)((u8 *)arg0 + 0x2C)) / 8.0f;
            func_0021D6C0(1, temp_a1_2, temp_a2, temp_a3, temp_f12_2 * temp_f0_2, temp_f13_2 * temp_f0_2);
            break;
        }
    }
}
