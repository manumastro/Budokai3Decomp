/* Draft (not built): func_003062B0 at 0x003062B0, size 0xF4, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); r *' * 'int' mwccps2.exe Compiler: 86: if (!(D_004E0614 <= 0.0f)) { @ 76: temp_s0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
 * Original: asm/nonmatchings/story/evt_shenron/func_003062B0.s */

// src/story/evt_shenron.c func_003062B0 cerr diff=-1/0
void func_003062B0(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u16 temp_s0;

    temp_s0 = *(D_00492FCE + (D_004B4B63 * 0xB8));
    func_00133B50(0, 0x2710);
    sp34 = 0x43B40000;
    sp30 = 0x43A00000;
    sp3C = 0x3F800000;
    sp38 = 0x41200000;
    func_003053D0(&sp30, *(s32 *)((u8 *)D_0047097C + 0xF4), 0, 0x600000);
    func_00305680();
    if (temp_s0 & 0x4000) {
        SoundRpc_SetVolume(0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        amTask_Kill(arg0);
    }
}
