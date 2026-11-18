/* Draft (not built): func_001B0160 at 0x001B0160, size 0x214, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); clared was declared as: 'void (void *)' now declared as: 'void (unsigned char *)' @ 1706: void func_001B0160(u8 *arg0) {
 * Original: asm/nonmatchings/battle/btl_main/func_001B0160.s */

// src/battle/btl_main.c func_001B0160 cerr diff=-1/0
void func_001B0160(u8 *arg0) {
    s32 (**var_s0)();
    s32 (*temp_v0)(u8 *);
    s32 (*var_v0)();

    temp_v0 = *(&D_00468270 + (*(s32 *)((u8 *)arg0 + 0x30) * 4));
    if (temp_v0 != NULL) {
        temp_v0((u8 *)(gBattle));
        *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)gBattle + 0x8970) = 0;
    *(s8 *)((u8 *)gBattle + 0x8AAC) = 1;
    var_v0 = D_004682B0;
    var_s0 = &D_004682B0;
    if (var_v0 != NULL) {
        do {
            var_v0();
            var_s0 += 4;
            var_v0 = *var_s0;
        } while (var_v0 != NULL);
    }
    Fade_Request(0xA, 0, 0);
    amTask_Create(func_001AFFA0, 0, 0x4100, 0x20);
    amTask_Create(func_001AFDF0, 0, 0x3000, 0x20);
    amTask_Create(Btl_TaskPostDraw, 0, 0x3F00, 0x20);
    amTask_Create(func_001AFC50, 0, 0x3900, 0x20);
    amTask_Create(func_001AF9A0, 0, 0x9F10, 0x20);
    if (*(s32 *)((u8 *)gBattle + 0x88D8) >= 3) {
        amTask_Create(Btl_ToggleF8975, 0, 0x9FF0, 0x20);
    }
    *(&D_004682E0 + (*(s32 *)((u8 *)gBattle + 0x88F8) * 4))();
    func_001482C0(0);
    amTask_Kill(arg0);
}
