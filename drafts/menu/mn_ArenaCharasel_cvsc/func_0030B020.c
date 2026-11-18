/* Draft (not built): func_0030B020 at 0x0030B020, size 0x88, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nversion from 'int' to 'char *' @ 153: amHeap_Alloc(0x28, 0, (s32)((char *)((s32)((char *)((s32)(D_0046FB60))))), 0x95);
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030B020.s */

// src/menu/mn_ArenaCharasel_cvsc.c func_0030B020 cerr diff=-1/0
s32 memset(s32, s32, s32);
void func_0030B020(void) {
    s32 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s0 = D_00470990;
    temp_v0 = amTask_Create(func_0030AA40, 0, 0x2000, 8);
    *(u8 **)((u8 *)temp_s0 + 0xC) = temp_v0;
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0xA;
    temp_v0_2 = amHeap_Alloc(0x28, 0, (char *)((s32)((char *)((s32)((char *)((s32)(D_0046FB60)))))), 0x95);
    *(s32 *)((u8 *)temp_v0 + 0x30) = temp_v0_2;
    memset(temp_v0_2, 0, 0x28);
    Scene_SetReady();
}
