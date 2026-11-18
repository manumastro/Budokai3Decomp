/* Draft (not built): func_001C90D0 at 0x001C90D0, size 0x240, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  conversion from 'unsigned char *' to 'float' mwccps2.exe Compiler: @ 6387: func_001E4820((f32)(var_s0), 1, 0x3F800000);
 * Original: asm/nonmatchings/battle/btl_main/func_001C90D0.s */

// src/battle/btl_main.c func_001C90D0 cerr diff=-1/0
void func_001C90D0(void) {
    u8 *sp60;
    s32 sp64;
    s16 sp68;
    f32 sp6C;
    s32 var_s2;
    s32 var_s4;
    s32 var_v1;
    u8 *var_s0;
    u8 *var_s1;

    var_s2 = 0;
    var_v1 = *(s32 *)((u8 *)gBattle + 0x88D8);
    var_s0 = (u8 *)(gBattle + 0x830);
    if (var_v1 > 0) {
        var_s1 = var_s0;
        do {
            func_001C7670((struct Fighter *)(var_s1), 0);
            func_001C80E0((struct Fighter *)(var_s1), -1);
            func_001C8050((struct Fighter *)(var_s1), -1);
            var_s2 += 1;
            var_v1 = *(s32 *)((u8 *)gBattle + 0x88D8);
            var_s1 += 0x2020;
        } while (var_s2 < var_v1);
    }
    var_s4 = 0;
    if (var_v1 > 0) {
        do {
            func_001E4820((f32)(var_s0), 1, 0x3F800000);
            func_001E4800(var_s0);
            func_001E5230(var_s0, 0);
            func_001E4FA0(var_s0, -1);
            func_001E4F40(var_s0);
            func_001D41F0((void *)(*(s32 *)((u8 *)var_s0 + 0xB84)));
            func_001D8CD0(var_s0);
            sp60 = var_s0;
            sp64 = 0;
            sp68 = -1;
            func_00200270(&sp60, *(f32 *)((u8 *)var_s0 + 0x650), *(f32 *)((u8 *)var_s0 + 0x658));
            var_s4 += 1;
            *(f32 *)((u8 *)var_s0 + 0x1890) = (f32) (1.0f - sp6C);
            var_s0 += 0x2020;
        } while (var_s4 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
    func_001D96F0();
    func_001DA4C0();
    amTask_Create(func_001C6860, 0, 0x5000, 0x20);
    amTask_Create(func_001C6780, 0, 0x5100, 0x20);
    amTask_Create(func_001C63F0, 0, 0x5300, 0x20);
    amTask_Create(func_001C6350, 0, 0x3500, 0x20);
    amTask_Create(func_001C61A0, 0, 0x3580, 0x20);
    amVram_Apply(2);
}
