/* Draft (not built): func_00306140 at 0x00306140, size 0xD0, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xCC, original 0xD0
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00306140.s */

// src/menu/mn_TourMap.c func_00306140 size diff=45/51
extern s32 D_00458DE0;
extern s32 D_00458DE8;
extern s32 D_004E0660;
extern char D_004E6560[];
void func_00306140(void) {
    s32 temp_t4;
    s32 var_t2;
    s32 var_t3;
    s32 var_v1;
    u8 *var_t1;

    var_v1 = 0;
    var_t3 = 0;
    var_t2 = 0;
    var_t1 = (u8 *)(D_0047097C);
    do {
        temp_t4 = *(var_t2 + (&D_00458DE0 + (*(s32 *)((u8 *)D_0047097C + 0xC) * 0xC)));
        if ((s32) *(u8 *)((u8 *)(&D_004E6560[temp_t4]) + 0x2AF19) < (s32) *(u8 *)((u8 *)(&D_004E0660 + (temp_t4 * 0x28)) + 0xD)) {
            *(s32 *)((u8 *)var_t1 + 0x14) = temp_t4;
            var_v1 += 1;
            var_t1 += 4;
        }
        var_t3 += 1;
        var_t2 += 4;
    } while (var_t3 < 2);
    *(s32 *)((u8 *)((var_v1 * 4) + D_0047097C) + 0x14) = (s32) *(&D_00458DE8 + (*(s32 *)((u8 *)D_0047097C + 0xC) * 0xC));
    *(s32 *)((u8 *)D_0047097C + 0x10) = (s32) (var_v1 + 1);
}
