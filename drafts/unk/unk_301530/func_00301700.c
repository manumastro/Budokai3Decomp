/* Draft (not built): func_00301700 at 0x00301700, size 0x118, segment unk/unk_301530 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 56 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_301530/func_00301700.s */

// src/unk/unk_301530.c func_00301700 diff diff=56/70
s32 Scene_FadeTo(s32, s32);
s32 func_0029DD30(s32, s32);
s32 memcpy(s32 *, void *, s32);
extern u16 D_00493086;
extern s32 D_005CFE00;
extern void *gTourMap;
extern char D_00492FCE[];
void func_00301700(u8 *arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    u16 var_a2;

    var_s1 = 0;
    var_s0 = 0;
    do {
        func_0029DD30(*(s32 *)((u8 *)(((u8 *)gTourMap) + var_s0) + 0x74), 0x3F800000);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    *(s32 *)((u8 *)gTourMap + 0x174) = (s32) (*(s32 *)((u8 *)gTourMap + 0x174) + 1);
    temp_a0 = *(s32 *)((u8 *)gTourMap + 0x60);
    var_a2 = 0;
    switch (temp_a0) {                              /* irregular */
    case 1:
        var_a2 = *D_00492FCE;
        break;
    case 2:
        var_a2 = D_00493086;
        break;
    case 3:
        var_a2 = *D_00492FCE | D_00493086;
        break;
    }
    if ((*(s32 *)((u8 *)arg0 + 0x30) == 0) && (var_a2 & 0x4008)) {
        memcpy(&D_005CFE00, ((u8 *)gTourMap) + 0x2EC, 0x280);
        Scene_FadeTo(-1, 0);
        *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
    }
}
