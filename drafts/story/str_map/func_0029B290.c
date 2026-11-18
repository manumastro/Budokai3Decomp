/* Draft (not built): func_0029B290 at 0x0029B290, size 0x2BC, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ';' expected mwccps2.exe Compiler: 369: extern s3232 D_00470430; @ 368: extern s3232 D_0047042C;
 * Original: asm/nonmatchings/story/str_map/func_0029B290.s */

// src/story/str_map.c func_0029B290 cerr diff=-1/0
extern void amSofdec_Destroy(s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 amSofdec_Draw(s32);
s32 amSofdec_IsStopped(s32, s32, s8);
s32 amSofdec_Stop(s32);
s32 amVram_Apply(s32);
s32 func_00136E80(s32, s32, s32, s32);
extern s3232 D_0047042C;
extern s3232 D_00470430;
extern s8 D_004B4B63;
extern f32 D_004E0610;
extern s32 gSofdecMovie;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern char D_00492FCE[];
extern void func_0029B550(void);
void func_0029B290(u8 *arg0) {
    f32 sp30;
    f32 sp34;
    s32 sp38;
    s32 sp3C;
    s3232 sp40;
    s3232 sp44;
    s32 sp48;
    s32 sp4C;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 temp_v0;
    u16 temp_s1;

    temp_s1 = *(D_00492FCE + (D_004B4B63 * 0xB8));
    if (amSofdec_IsStopped(*(s32 *)((u8 *)gStrTitle + 0xD0), D_004B4B63 * 3, D_004B4B63) != 0) {
        amSofdec_Stop(*(s32 *)((u8 *)gStrTitle + 0xD0));
        amSofdec_Destroy(*(s32 *)((u8 *)gStrTitle + 0xD0));
        *(s32 *)((u8 *)gStrTitle + 0xD0) = -1;
        amVram_Apply(2);
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x2106F, 0);
        var_v1 = &func_0029B550;
        if (&func_0029B550 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s1 & 0x1000) {
        amSofdec_Stop(*(s32 *)((u8 *)gStrTitle + 0xD0));
        amSofdec_Destroy(*(s32 *)((u8 *)gStrTitle + 0xD0));
        *(s32 *)((u8 *)gStrTitle + 0xD0) = -1;
        amVram_Apply(2);
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x2106F, 0);
        var_v1_2 = &func_0029B550;
        if (&func_0029B550 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        return;
    }
    temp_v0 = amSofdec_Draw(*(s32 *)((u8 *)gStrTitle + 0xD0));
    switch (temp_v0) {                              /* irregular */
    case 0:
    case -1:
        return;
    case 1:
        if (*(s32 *)((u8 *)gStrTitle + 0xD4) == 0) {
            *(s32 *)((u8 *)gStrTitle + 0xD4) = 1;
            return;
        }
    default:
block_19:
        func_00136E80(0x40000420, 0, -1, 0x44);
        sp40 = 0;
        sp44 = 0;
        sp48 = 0;
        sp4C = 0x3F800000;
        sp30 = 0.0f;
        sp34 = 0.0f;
        sp38 = 0x3F800000;
        sp3C = 0x3F800000;
        func_00137560(&sp40, &sp30);
        sp40 = D_0047042C;
        sp44 = D_00470430;
        sp30 = (f32) *(&gSofdecMovie + 0x20 + (*(s32 *)((u8 *)gStrTitle + 0xD0) * 0x108));
        sp34 = (f32) *(&gSofdecMovie + 0x24 + (*(s32 *)((u8 *)gStrTitle + 0xD0) * 0x108));
        func_00137560(&sp40, &sp30);
        amDraw_FlushPacket();
        return;
    case 2:
        if (*(s32 *)((u8 *)gStrTitle + 0xD4) == 1) {
            *(s32 *)((u8 *)gStrTitle + 0xD4) = 2;
            return;
        }
        goto block_19;
    }
}
