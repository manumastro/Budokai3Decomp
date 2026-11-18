/* Draft (not built): func_002A7940 at 0x002A7940, size 0x208, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); Compiler: 2599: SoundRpc_SetVolume(0, 0, (f32)(D_004E0614)); @ 2598: if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
 * Original: asm/nonmatchings/story/evt_scrp/func_002A7940.s */

// src/story/evt_scrp.c func_002A7940 cerr diff=-1/0
extern s32 D_005AB3A0;
extern void func_001F0530(void);
extern void func_001F0660(void);
extern void Save_Request();
extern char D_004E05DC[];
extern void func_002A7820(void);
void func_002A7940(u8 *arg0) {
    void (*var_v1)();
    void (*var_v1_2)();
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = (u8 *)(gEvtWork);
    func_00133B50(0, 0);
    A2d_SetMode(*(s16 *)((u8 *)D_004E05DC + 0x1C));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x78);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x890000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x890000);
    D_00470238 = 0;
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x80);
    func_00228430(0);
    func_00228430(0);
    func_0022C060((s32)(temp_s2), 0x3F800000);
    func_00228410();
    func_0022CD00((s32)((void *)(temp_s2)));
    func_00228410();
    func_002A6FD0();
    A2d_FlushList();
    if (*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000) {
        SoundRpc_SetVolume(0, 0, (f32)(D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s32 *)((u8 *)temp_s0 + 0x98) = 0;
        if (*(s32 *)((u8 *)temp_s0 + 0x7C) == 0) {
            func_001F0530();
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
            *(s32 *)((u8 *)(&D_005AB3A0) + 0x10) = (s32) *(s32 *)((u8 *)(D_004E6560 + (*(s8 *)((u8 *)D_004E6560 + 0x2AEF0) * 0x1210)) + 0x1250);
            Save_Request(2, -1, 0, &D_005AB3A0);
            var_v1 = func_002A7820;
            if (func_002A7820 == NULL) {
                var_v1 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        if (*(s32 *)((u8 *)temp_s0 + 0x14) == 0x40000002) {
            func_001F0660();
        }
        var_v1_2 = func_002A76E0;
        if (func_002A76E0 == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
