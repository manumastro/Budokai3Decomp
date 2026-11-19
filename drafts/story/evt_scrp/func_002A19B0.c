/* Draft (not built): func_002A19B0 at 0x002A19B0, size 0x174, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 53 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D4, original 0x174
 * Original: asm/nonmatchings/story/evt_scrp/func_002A19B0.s */

// src/story/evt_scrp.c func_002A19B0 size diff=53/117
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0022E0B0(s32);
void func_002A19B0(u8 *arg0) {
    s32 *var_v1;
    s32 *temp_s0;
    s32 temp_a0_2;
    s32 temp_a1;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s0 = gEvtWork;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x44);
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x48);
    if ((*(s16 *)((u8 *)temp_s2 + 4) == 3) && (*(s16 *)((u8 *)temp_s1 + 4) == 3)) {
        *(u8 **)((u8 *)temp_s0 + 0x44) = (u8 *) *(u8 **)((u8 *)temp_s2 + 0x40);
        *(u8 **)((u8 *)temp_s0 + 0x48) = (u8 *) *(u8 **)((u8 *)temp_s1 + 0x40);
        *(u8 **)((u8 *)temp_s0 + 0x4C) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x50);
        *(s32 *)((u8 *)temp_s0 + 0x50) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x50);
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x4C);
        if ((u32) temp_a0 >= (u32) *(u32 *)((u8 *)temp_a0 + 0x14)) {
            func_0022E0B0((s32) temp_a0);
        }
        *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
        *(u8 **)((u8 *)temp_s1 + 0x40) = NULL;
        amCdFs_Close((s32) temp_s2, 0);
        amCdFs_Close((s32) temp_s1, 0);
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x50);
        D_00470704 = temp_a0_2;
        D_0047070C = 0x860000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, 0x860000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s0 + 0x54) = func_0022D860(*(s32 *)((u8 *)(*(u32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x4C)) + 0x14)) + 0x20), (f32) *(s32 *)((u8 *)temp_s0 + 0xF4));
        temp_a1 = *(s32 *)((u8 *)temp_s0 + 0xF4);
        if (temp_a1 >= 0x2710) {
            *(s32 *)((u8 *)temp_s0 + 0x58) = func_0022D860(*(s32 *)((u8 *)(*(u32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x4C)) + 0x14)) + 0x24), (f32) ((*(s32 *)((u8 *)temp_s0 + 0xF4) / 10000) + ((u32) temp_a1 >> 0x1F)));
        }
        *(s32 *)((u8 *)temp_s0 + 0x68) = 1;
        *(s32 *)((u8 *)temp_s0 + 0x5C) = 0;
        var_v1 = (int *)(&func_002A1980);
        *(s32 *)((u8 *)temp_s0 + 0x60) = 0x41200000;
        if (&func_002A1980 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
