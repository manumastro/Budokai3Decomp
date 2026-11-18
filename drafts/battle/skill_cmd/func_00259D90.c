/* Draft (not built): func_00259D90 at 0x00259D90, size 0x114, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); implicit conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 3388: temp_v0 = *(&D_0058D4D0 + (arg0 * 4));
 * Original: asm/nonmatchings/battle/skill_cmd/func_00259D90.s */

// src/battle/skill_cmd.c func_00259D90 cerr diff=-1/0
s32 func_00259D90(s32 arg0, s32 arg1) {
    s32 sp50;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_s1 = gBtlSys;
    *(s64 *)((u8 *)(&sp50) + 0) = (s64) *(s64 *)((u8 *)(&D_004529B8) + 0);
    *(f32 *)((u8 *)(&sp50) + 8) = (f32) *(f32 *)((u8 *)(&D_004529B8) + 8);
    temp_v0 = *(&D_0058D4D0 + (arg0 * 4));
    if (temp_v0 == NULL) {
        return 0;
    }
    temp_s0 = temp_v0 + 0x30;
    if (*(s32 *)((u8 *)temp_v0 + 0x34) == arg1) {
        return 1;
    }
    func_0022D0B0(*(s32 *)((u8 *)temp_s0 + 0x18), 1);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xE84);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04010000);
    D_00470238 = 0;
    *(s32 *)((u8 *)temp_s0 + 0x18) = func_0022D570(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x14) + (((arg0 & 1) + *(s32 *)((u8 *)((arg1 * 4) + sp) + 0x50)) * 4)), 0x1000, 0x02000008, 0x3A30);
    *(s32 *)((u8 *)temp_s0 + 4) = arg1;
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    return 1;
}
