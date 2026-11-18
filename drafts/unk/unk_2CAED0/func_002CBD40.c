/* Draft (not built): func_002CBD40 at 0x002CBD40, size 0x164, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0 + (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork); @ 404: *(&D_004564A0 + (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork);
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CBD40.s */

// src/unk/unk_2CAED0.c func_002CBD40 cerr diff=-1/0
s32 func_002EAEB0(s32);
s32 func_002EAF70(s32);
s32 func_002EB140();
extern char D_00492FCE[];
extern void func_002EB380(void);
void func_002CBD40(void) {
    s32 var_a0;
    u16 var_s1;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gTutWork);
    var_s1 = 0;
    if (!(*(f32 *)((u8 *)temp_s0 + 0x18) <= 5.0f)) {
        var_s1 = *(D_00492FCE + (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x13A4) * 0xB8));
    }
    func_002EAF70(var_s1 & 0x4000);
    var_a0 = func_002EB140();
    if ((var_a0 == 0) && (var_s1 & 8)) {
        func_002EAEB0(var_a0);
        var_a0 = 1;
    }
    if (var_a0 != 0) {
        func_002EB380();
        if (*(s32 *)((u8 *)temp_s0 + 0xC) != *(s32 *)((u8 *)temp_s0 + 0x14)) {
            if (gTutWork != NULL) {
                *(s32 *)((u8 *)gTutWork + 8) = 1;
                *(f32 *)((u8 *)gTutWork + 0x1C) = (f32) -*(f32 *)((u8 *)gBattle + 0x88F0);
                *(f32 *)((u8 *)gTutWork + 0x18) = 0.0f;
                *(&D_004564A0 + (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork);
            }
        } else if (gTutWork != NULL) {
            *(s32 *)((u8 *)gTutWork + 8) = 4;
            *(f32 *)((u8 *)gTutWork + 0x1C) = (f32) -*(f32 *)((u8 *)gBattle + 0x88F0);
            *(f32 *)((u8 *)gTutWork + 0x18) = 0.0f;
            *(&D_004564A0 + (*(s32 *)((u8 *)gTutWork + 8) * 4))(gTutWork);
        }
    }
}
