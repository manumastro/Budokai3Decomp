/* Draft (not built): func_002984A0 at 0x002984A0, size 0x2D0, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'void' to 'unsigned char *' mwccps2.exe Compiler: @ 250: temp_s1 = *(s32 *)((u8 *)(**D_005AA608) + 0x4C);
 * Original: asm/nonmatchings/unk/unk_297C60/func_002984A0.s */

// src/unk/unk_297C60.c func_002984A0 cerr diff=-1/0
s32 amMotion_BindAnim(s32, s32, s32);
s32 func_001CA8F0(void *, s32, s32, s32);
s32 func_00290330(s32, s32);
s32 func_00290780(s32);
s32 func_00290A70(s32, s32);
s32 func_00290C90();
s32 func_002920E0(s32);
s32 func_0029AEF0();
s32 func_002BFE60(void *);
extern s32 D_0046FD80;
extern void *D_005AA578;
extern void *D_005AA57C;
extern void *D_005AA580;
extern void *D_005AA584;
extern void *D_005AA588;
extern void *D_005AA58C;
extern void *D_005AA590;
extern void *D_005AA594;
extern void *D_005AA598;
extern s32 D_005AA5CC;
extern s32 D_005AA5D0;
extern s32 D_005AA5D4;
extern s32 D_005AA5D8;
extern s32 D_005AA5DC;
extern s32 D_005AA5E0;
extern s32 D_005AA600;
extern s32 D_005AA60C;
extern s32 D_005AA610;
extern f32 D_005AA614;
extern s32 D_005AA618;
extern s32 D_005AA61C;
extern s32 D_005AA628;
extern s32 D_005AA62C;
extern void amFile_Load(void *);
extern void amSound_LoadStream();
void func_002984A0(u8 *arg0) {
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    u8 **var_s1;

    if ((func_00290C90() == 0) && (func_0029AEF0() == 0)) {
        var_s2 = 0;
        var_s1 = (u8 **)(D_005AA550);
        do {
            *(u8 **)((u8 *)var_s1 + 0x28) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 0x40);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0)) + 0x40) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)var_s1 + 0), 0);
            *(u8 **)((u8 *)var_s1 + 0) = NULL;
            if (var_s2 < 7) {
                amFile_Load(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x28)) + 0x50));
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0xA);
        D_005AA5CC = *(s32 *)((u8 *)D_005AA578 + 0x50);
        D_005AA5D8 = *(s32 *)((u8 *)D_005AA57C + 0x50);
        temp_a3 = *(s32 *)((u8 *)D_005AA580 + 0x50);
        D_005AA5D0 = temp_a3;
        temp_a2 = *(s32 *)((u8 *)D_005AA584 + 0x50);
        D_005AA5DC = temp_a2;
        temp_a1 = *(s32 *)((u8 *)D_005AA588 + 0x50);
        D_005AA5D4 = temp_a1;
        D_005AA5E0 = *(s32 *)((u8 *)D_005AA58C + 0x50);
        D_005AA600 = *(s32 *)((u8 *)D_005AA590 + 0x50);
        func_001CA8F0(*D_005AA608, temp_a1, temp_a2, temp_a3);
        func_002BFE60(*D_005AA608);
        D_0046FD80 = 0x3E19999A;
        temp_s1 = *(s32 *)((u8 *)(**D_005AA608) + 0x4C);
        D_005AA60C = temp_s1;
        amMotion_BindAnim(temp_s1, 0, D_005AA600);
        D_005AA618 = 0;
        D_005AA610 = 0x10000;
        temp_a1_2 = (((s32) D_005AA610 >> 0x10) - 1) * 4;
        D_005AA61C = 0;
        D_005AA628 = 0;
        D_005AA614 = (f32) *(s32 *)((u8 *)(((D_005AA610 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)(temp_a1_2 + temp_s1) + 0x46C)) + 0x14)) + 8);
        func_00290A70(D_005AA604 + 0x1080, temp_a1_2);
        func_00290780((s32)(D_005AA604 + 0x11A0));
        var_s1_2 = 0;
        var_s2_2 = 0;
        do {
            func_002904C0((struct Slot *)(D_005AA604 + var_s2_2 + 0x80));
            func_00290330(*(s32 *)((u8 *)(D_005AA604 + var_s2_2) + 0x80), func_002920E0(D_005AA604 + var_s2_2 + 0x80));
            var_s1_2 += 1;
            var_s2_2 += 0x40;
        } while (var_s1_2 < 0x40);
        D_005AA62C = -1;
        SoundRpc_SendWord2(-1);
        SoundRpc_SendWord(0);
        amAdx_Stop(-1);
        sp40 = 1;
        sp44 = *(s32 *)((u8 *)D_005AA594 + 0x44);
        sp48 = *(s32 *)((u8 *)D_005AA598 + 0x44);
        sp4C = *(s32 *)((u8 *)D_005AA594 + 0x50);
        sp50 = *(s32 *)((u8 *)D_005AA598 + 0x50);
        amSound_LoadStream(&sp40, D_005AA594);
        var_v1 = (s32 *)(&func_00298420);
        if (&func_00298420 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
