/* Draft (not built): func_002B8070 at 0x002B8070, size 0x1F0, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); type mismatch 'signed char *' and 'int' @ 326: if (D_004B4BEA < 0xC) {
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B8070.s */

// src/menu/mn_csmodel.c func_002B8070 cerr diff=-1/0
s32 func_0022C060(void *, s32);
s32 func_00283BF0();
extern s32 D_00455350;
extern s8 D_004B4BEB;
extern s32 D_004DFB19;
extern void SklSheet_Free(void);
extern void func_0022CD00(void *);
extern void Save_Load();
extern void Save_Request();
extern void func_002B7F00(void);
void func_002B8070(u8 *arg0) {
    u8 *sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 *var_v1_2;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_v1;
    u8 **var_s2;
    u8 **var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s4;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    var_v1 = &sp60;
    D_00470238 = 0;
    var_v0 = 0x18;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = *(u8 **)((u8 *)temp_s0 + 0);
    sp64 = *(s32 *)((u8 *)temp_s0 + 4);
    sp68 = *(s32 *)((u8 *)temp_s0 + 8);
    sp6C = *(s32 *)((u8 *)temp_s0 + 0xC);
    sp70 = *(s32 *)((u8 *)temp_s0 + 0x40);
    sp74 = *(s32 *)((u8 *)temp_s0 + 0x44);
    temp_a0_2 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0_2);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x1000);
    D_00470238 = 0;
    var_s3 = 0;
    var_s2 = &sp60;
    do {
        temp_s4 = *var_s2;
        if (temp_s4 != NULL) {
            func_0022C060(temp_s4, 0x3F800000);
            func_0022CD00(temp_s4);
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 6);
    A2d_FlushList();
    if (func_00283BF0() == 8) {
        SklSheet_Free();
        temp_v1 = (u8 *)(&D_004DFB19 + *(&D_00455350 + (*(u8 *)((u8 *)temp_s0 + 0x5E) * 2)));
        *temp_v1 += 1;
        if (D_004B4BEA < 0xC) {
            *(u8 *)((u8 *)temp_s0 + 0x5E) = (u8) (*(u8 *)((u8 *)temp_s0 + 0x5E) + 1);
            D_004B4BEA += 1;
        } else {
            D_004B4BEB = 1;
        }
        Save_Load(0x2000, 0);
        Save_Request(6, -1, 0);
        var_v1_2 = (s32 *)(&func_002B7F00);
        if (&func_002B7F00 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
