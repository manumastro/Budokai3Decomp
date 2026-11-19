/* Draft (not built): func_00309050 at 0x00309050, size 0x98, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309050.s */

s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
void func_00309050(u8 *arg0) {
    u8 *temp_a0;
    u8 **var_v1;
    u8 *sp2C;
    u32 var_v0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    var_v1 = &sp2C;
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_v0 = 4;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        }
        while (var_v0 != 0);
    }
    sp2C = *(u8 **)((u8 *)temp_a0 + 0x14);
    temp_a0_2 = *(u8 **)((u8 *)temp_a0 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x2000);
    D_00470238 = 0;
    temp_s0 = sp2C;
    if (temp_s0 != NULL) {
        func_0022C060(temp_s0, 0x3F800000);
        func_0022CD00(temp_s0);
    }
}
