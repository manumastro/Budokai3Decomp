/* Draft (not built): func_002F0D70 at 0x002F0D70, size 0x260, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  mwccps2.exe Compiler: 237: *(s8 *)((u8 *)temp_s1 + 0xB7) = (s8) sp44; @ 236: *(s8 *)((u8 *)temp_s1 + 0xB6) = (s8) sp42;
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F0D70.s */

// src/menu/mn_InputPass.c func_002F0D70 cerr diff=-1/0
s32 StrStatus_Start(s32, s32);
s32 func_002BFEE0(s8, s8, s32);
s32 func_002F6E00(s16 *, void *, s32);
extern void func_002BD6B0(void *);
extern void func_002F1500(void);
extern void func_002F1650(void);
void func_002F0D70(u8 *arg0) {
    s16 sp40;
    s32 *var_v1;
    s16 *var_a0;
    s32 var_a2;
    s8 var_v0;
    u8 *temp_s1;
    u8 *var_a1;

    var_a2 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    var_a0 = &sp40;
    var_a1 = temp_s1;
    do {
        var_a2 += 6;
        *(u16 *)((u8 *)var_a0 + 0x20) = (u16) *(u16 *)((u8 *)var_a1 + 0x128);
        *(u16 *)((u8 *)var_a0 + 0x22) = (u16) *(u16 *)((u8 *)var_a1 + 0x12A);
        *(u16 *)((u8 *)var_a0 + 0x24) = (u16) *(u16 *)((u8 *)var_a1 + 0x12C);
        *(u16 *)((u8 *)var_a0 + 0x26) = (u16) *(u16 *)((u8 *)var_a1 + 0x12E);
        *(u16 *)((u8 *)var_a0 + 0x28) = (u16) *(u16 *)((u8 *)var_a1 + 0x130);
        *(u16 *)((u8 *)var_a0 + 0x2A) = (u16) *(u16 *)((u8 *)var_a1 + 0x132);
        var_a1 += 0xC;
        var_a0 += 0xC;
    } while (var_a2 < 0x24);
    if (func_002F6E00(&sp40, var_a1, var_a2) >= 0) {
        *(s8 *)((u8 *)temp_s1 + 0xB4) = 1;
        *(s8 *)((u8 *)temp_s1 + 0xB5) = (s8) sp40;
        *(s8 *)((u8 *)temp_s1 + 0xB6) = (s8) sp42;
        *(s8 *)((u8 *)temp_s1 + 0xB7) = (s8) sp44;
        *(s8 *)((u8 *)temp_s1 + 0xB8) = (s8) sp46;
        *(s8 *)((u8 *)temp_s1 + 0xB9) = (s8) sp48;
        *(s8 *)((u8 *)temp_s1 + 0xBA) = (s8) sp4A;
        *(s8 *)((u8 *)temp_s1 + 0xBB) = (s8) sp4C;
        *(s8 *)((u8 *)temp_s1 + 0xBC) = (s8) sp4E;
        *(s8 *)((u8 *)temp_s1 + 0xBD) = (s8) sp50;
        *(s16 *)((u8 *)temp_s1 + 0xBE) = sp52;
        *(s16 *)((u8 *)temp_s1 + 0xC0) = sp54;
        *(s16 *)((u8 *)temp_s1 + 0xC2) = sp56;
        *(s16 *)((u8 *)temp_s1 + 0xC4) = sp58;
        *(s16 *)((u8 *)temp_s1 + 0xC6) = sp5A;
        *(s16 *)((u8 *)temp_s1 + 0xC8) = sp5C;
        *(s16 *)((u8 *)temp_s1 + 0xCA) = sp5E;
        *(s16 *)((u8 *)temp_s1 + 0xCC) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xCE) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xD0) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xD2) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xD4) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xD6) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xD8) = -1;
        *(s16 *)((u8 *)temp_s1 + 0xDA) = -1;
        var_v0 = *(s8 *)((u8 *)temp_s1 + 0xB6);
        if (var_v0 < 0x64) {

        } else {
            var_v0 = 0x63;
        }
        *(s8 *)((u8 *)temp_s1 + 0xB6) = var_v0;
        *(s8 *)((u8 *)temp_s1 + 0xDC) = (s8) *(s8 *)((u8 *)temp_s1 + 0xB5);
        *(s8 *)((u8 *)temp_s1 + 0xDD) = (s8) *(s8 *)((u8 *)temp_s1 + 0xDC);
        *(s8 *)((u8 *)temp_s1 + 0xDE) = 0;
        *(s8 *)((u8 *)temp_s1 + 0xDF) = 0;
        *(s8 *)((u8 *)temp_s1 + 0xE1) = (s8) *(s8 *)((u8 *)temp_s1 + 0xB7);
        *(s8 *)((u8 *)temp_s1 + 0xE2) = (s8) *(s8 *)((u8 *)temp_s1 + 0xB8);
        *(s8 *)((u8 *)temp_s1 + 0xE3) = (s8) *(s8 *)((u8 *)temp_s1 + 0xB9);
        *(s8 *)((u8 *)temp_s1 + 0xE4) = (s8) *(s8 *)((u8 *)temp_s1 + 0xBA);
        *(s8 *)((u8 *)temp_s1 + 0xE5) = (s8) *(s8 *)((u8 *)temp_s1 + 0xBB);
        *(s8 *)((u8 *)temp_s1 + 0xE6) = (s8) *(s8 *)((u8 *)temp_s1 + 0xBC);
        *(s8 *)((u8 *)temp_s1 + 0xE7) = (s8) *(s8 *)((u8 *)temp_s1 + 0xBD);
        *(s8 *)((u8 *)temp_s1 + 0xE0) = (s8) *(s8 *)((u8 *)temp_s1 + 0xB6);
        *(s32 *)((u8 *)temp_s1 + 0xE8) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xEC) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xF0) = 0;
        *(s32 *)((u8 *)temp_s1 + 0xF4) = (s32) *(s16 *)((u8 *)temp_s1 + 0xBE);
        *(s32 *)((u8 *)temp_s1 + 0xF8) = (s32) *(s16 *)((u8 *)temp_s1 + 0xC0);
        *(s32 *)((u8 *)temp_s1 + 0xFC) = (s32) *(s16 *)((u8 *)temp_s1 + 0xC2);
        *(s32 *)((u8 *)temp_s1 + 0x100) = (s32) *(s16 *)((u8 *)temp_s1 + 0xC4);
        *(s32 *)((u8 *)temp_s1 + 0x104) = (s32) *(s16 *)((u8 *)temp_s1 + 0xC6);
        *(s32 *)((u8 *)temp_s1 + 0x108) = (s32) *(s16 *)((u8 *)temp_s1 + 0xC8);
        *(s32 *)((u8 *)temp_s1 + 0x10C) = (s32) *(s16 *)((u8 *)temp_s1 + 0xCA);
        func_002BFEE0(*(s8 *)((u8 *)temp_s1 + 0xDD), *(s8 *)((u8 *)temp_s1 + 0xDF), 1);
        func_002BD6B0(temp_s1 + 0xDC);
        StrStatus_Start(0x5000, 0x80000);
        var_v1 = (s32 *)(&func_002F1500);
        if (&func_002F1500 == NULL) {
            var_v1 = NULL;
        }
    } else {
        var_v1 = (s32 *)(&func_002F1650);
        *(s32 *)((u8 *)temp_s1 + 0x110) = IpSysWnd_Start(3);
        if (&func_002F1650 == NULL) {
            var_v1 = NULL;
        }
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
}
