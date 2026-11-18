/* Draft (not built): func_002B89E0 at 0x002B89E0, size 0x168, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *)temp_s1 + 0x5E) * 4) + sp) + 0x40); @ 359: var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x78);
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B89E0.s */

// src/menu/mn_csmodel.c func_002B89E0 cerr diff=-1/0
extern s32 D_00455370;
extern s64 D_00470110;
extern void func_002B85F0(void);
void func_002B89E0(u8 *arg0) {
    s32 sp40;
    s64 sp78;
    s32 *var_v1_2;
    f32 temp_f1;
    s32 var_s0;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)gPracMode + 0xC);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    D_00470238 = 0;
    func_002B7690(temp_s1);
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x68) - gFrameDelta;
    *(f32 *)((u8 *)temp_s1 + 0x68) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s8 *)((u8 *)temp_s1 + 0x61) = 8;
        Obj_SetF3C(*(s32 *)((u8 *)temp_s1 + 0x54), (s64) ((*(u8 *)((u8 *)temp_s1 + 0x5E) + 3) << 0x30) >> 0x30);
        sp78 = D_00470110;
        *(s128 *)((u8 *)(&sp40) + 0) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0);
        *(s128 *)((u8 *)(&sp40) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x10);
        *(s128 *)((u8 *)(&sp40) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00455370) + 0x20);
        var_s0 = 0;
        if ((s32) *(u8 *)((u8 *)temp_s1 + 0x5D) < 3) {
            var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x78);
        } else {
            var_s0 = 3;
            var_v1 = *(s32 *)((u8 *)((*(u8 *)((u8 *)temp_s1 + 0x5E) * 4) + sp) + 0x40);
        }
        *(s32 *)((u8 *)temp_s1 + 0x58) = amAdx_PlayAfs(1, var_v1 | 0x20000, 0);
        amAdx_SetVolume(*(s32 *)((u8 *)temp_s1 + 0x58), D_004E0618);
        amAdx_Pause(*(s32 *)((u8 *)temp_s1 + 0x58), 0);
        var_v1_2 = (s32 *)(&func_002B85F0);
        *(s8 *)((u8 *)temp_s1 + 0x5C) = (s8) (*(u8 *)((u8 *)temp_s1 + 0x5E) + var_s0 + 1);
        if (&func_002B85F0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
