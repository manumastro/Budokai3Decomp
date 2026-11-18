/* Draft (not built): func_001AF840 at 0x001AF840, size 0x138, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); clared was declared as: 'void (void *)' now declared as: 'void (unsigned char *)' @ 1413: void func_001AF840(u8 *arg0) {
 * Original: asm/nonmatchings/battle/btl_main/func_001AF840.s */

// src/battle/btl_main.c func_001AF840 cerr diff=-1/0
void func_001AF840(u8 *arg0) {
    s32 (**var_s1)(u8 *);
    s32 (*var_v0)(u8 *);
    s32 temp_v0;
    u8 *temp_s2;

    if ((*D_004B4B40 != 0x19) && (*D_004B4B40 != 0x15) && (*D_004B4B40 != 0x14) && (*D_004B4B40 != 0x12) && (*D_004B4B40 != 0xF) && (*D_004B4B40 != 9) && (*D_004B4B40 != 3)) {
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) - 1);
    if (*(s32 *)((u8 *)arg0 + 0x30) < 0) {
        func_001CA460(2, 0);
        var_v0 = D_00468240;
        temp_s2 = (u8 *)(gBattle);
        var_s1 = &D_00468240;
        if (var_v0 != NULL) {
            do {
                temp_v0 = var_v0(temp_s2 + 0x690);
                if (temp_v0 != 0) {
                    *(s32 *)((u8 *)temp_s2 + 0x8970) = temp_v0;
                }
                var_s1 += 4;
                var_v0 = *var_s1;
            } while (var_v0 != NULL);
        }
        amTask_Kill(arg0);
        amTask_Create(&Btl_TaskInit, 0, 0x4000, 0x20);
    }
}
