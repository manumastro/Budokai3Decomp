/* Draft (not built): func_002CB550 at 0x002CB550, size 0xF8, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork); @ 387: temp_v0 = *(&D_004564E0 + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4))();
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CB550.s */

// src/unk/unk_2CAED0.c func_002CB550 cerr diff=-1/0
s32 func_00218CD0(s32, s32);
s32 func_002E9BE0(s32);
extern s32 D_004564E0;
void func_002CB550(void) {
    s32 temp_v0;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gTutWork);
    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        func_002E9BE0(0);
    } else {
        func_002E9BE0(1);
    }
    temp_v0 = *(&D_004564E0 + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4))();
    switch (temp_v0) {                              /* irregular */
    case 1:
        A2d_CallHandler(0x23, 0);
        func_00218CD0(0xB, 0);
        /* fallthrough */
    case 2:
        if (gTutWork != NULL) {
            *(s32 *)((u8 *)gTutWork + 8) = 2;
            *(f32 *)((u8 *)gTutWork + 0x1C) = (f32) -*(f32 *)((u8 *)gBattle + 0x88F0);
            *(s32 *)((u8 *)gTutWork + 0x18) = 0;
            *(((u8 *)&D_004564A0) + (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork);
        }
        return;
    }
}
