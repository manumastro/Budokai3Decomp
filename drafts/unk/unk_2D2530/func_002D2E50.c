/* Draft (not built): func_002D2E50 at 0x002D2E50, size 0x1FC, segment unk/unk_2D2530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x1FC
 * Original: asm/nonmatchings/unk/unk_2D2530/func_002D2E50.s */

// src/unk/unk_2D2530.c func_002D2E50 size diff=90/99
extern s32 D_00456D10;
extern void Obj_CopyVec4F50(void *, void *);
extern void Obj_SetF3C();
void func_002D2E50(s32 arg0) {
    u8 sp[0x400];
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    u32 var_s1;
    u8 *var_s0;

    var_s1 = arg0;
    *(s128 *)((u8 *)(&sp90) + 0) = (s128) *(s128 *)((u8 *)(&D_00456D10) + 0);
    *(s128 *)((u8 *)(&sp90) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00456D10) + 0x10);
    *(s16 *)((u8 *)(&sp90) + 0x20) = (s16) *(s16 *)((u8 *)(&D_00456D10) + 0x20);
    switch (var_s1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 32:
    case 33:
        var_s0 = (unsigned char *)(gOptionWork);
        sp88 = 0;
        sp80 = 0x43CF8000;
        sp84 = 0x43BE0000;
        sp8C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x33C), &sp80);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x33C), *(s8 *)((u8 *)(var_s1 + sp) + 0x90));
        var_s0 = (unsigned char *)(gOptionWork);
        sp78 = 0;
        sp70 = 0x43DE8000;
        sp74 = 0x43C30000;
        sp7C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x340), &sp70);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x340), -1);
        return;
    case 20:
    case 21:
    case 22:
    case 23:
    case 30:
    case 31:
        var_s0 = (unsigned char *)(gOptionWork);
        sp68 = 0;
        sp60 = 0x43CF8000;
        sp64 = 0x43BE0000;
        sp6C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x33C), &sp60);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x33C), -1);
        var_s0 = (unsigned char *)(gOptionWork);
        sp58 = 0;
        sp50 = 0x43DE8000;
        sp54 = 0x43C30000;
        sp5C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x340), &sp50);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x340), *(s8 *)((u8 *)(var_s1 + sp) + 0x90));
        return;
    default:
        var_s0 = (unsigned char *)(gOptionWork);
        sp48 = 0;
        sp40 = 0x43CF8000;
        sp44 = 0x43BE0000;
        sp4C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x33C), &sp40);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x33C), -1);
        var_s0 = (unsigned char *)(gOptionWork);
        sp38 = 0;
        sp30 = 0x43DE8000;
        sp34 = 0x43C30000;
        sp3C = 0x3F800000;
        Obj_CopyVec4F50(*(u8 **)((u8 *)var_s0 + 0x340), &sp30);
        Obj_SetF3C(*(u8 **)((u8 *)var_s0 + 0x340), -1);
        return;
    }
}
