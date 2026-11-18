/* Draft (not built): func_0029CA40 at 0x0029CA40, size 0x1D8, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); void (*)(struct Task *), int, int, @ 546: *(u8 **)((u8 *)gStrTitle + 0x14) = amTask_Create(func_0028EB30, 0, 0x8001, 2);
 * Original: asm/nonmatchings/story/str_map/func_0029CA40.s */

// src/story/str_map.c func_0029CA40 cerr diff=-1/0
s32 Fade_Request(s32, s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
extern s128 D_00454250;
extern f32 D_004E0610;
extern void func_0028EAE0(void);
extern void func_0028EB30(void);
void func_0029CA40(u8 *arg0) {
    s128 sp40;
    s32 *var_v1;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_v1;

    var_s1 = 0;
    var_s0 = 0;
    do {
        temp_v1 = ((u8 *)gStrTitle) + var_s0;
        *(s32 *)((u8 *)temp_v1 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0)) + 0x40);
        *(s32 *)((u8 *)(*(((u8 *)gStrTitle) + var_s0)) + 0x40) = 0;
        amCdFs_Close(*(((u8 *)gStrTitle) + var_s0), 0);
        *(((u8 *)gStrTitle) + var_s0) = 0;
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(((u8 *)gStrTitle) + var_s0) + 8)) + 0x50))));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    *(s32 *)((u8 *)gStrTitle + 0x64) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrTitle + 8)) + 0x50);
    *(s32 *)((u8 *)gStrTitle + 0x68) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)gStrTitle + 0xC)) + 0x50);
    *(s32 *)((u8 *)gStrTitle + 0xAC) = 4;
    *(s32 *)((u8 *)gStrTitle + 0xB0) = 0;
    *(s32 *)((u8 *)gStrTitle + 0xC0) = 0x3F000000;
    *(s32 *)((u8 *)gStrTitle + 0xC4) = 0x3F000000;
    *(s32 *)((u8 *)gStrTitle + 0xC8) = 0x3F000000;
    *(s32 *)((u8 *)gStrTitle + 0xCC) = 0x3F800000;
    sp40 = D_00454250;
    func_0028EE90(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
    *(u8 **)((u8 *)gStrTitle + 0x14) = amTask_Create(func_0028EB30, 0, 0x8001, 2);
    *(u8 **)((u8 *)gStrTitle + 0x38) = amTask_Create(func_0028EAE0, 0, 0x800A, 2);
    amAdx_SetVolume(0, D_004E0610);
    amAdx_PlayAfs(0, 0x2106F, 0);
    Fade_Request(-1, 0, 0);
    var_v1 = (s32 *)(&func_0029C9B0);
    if (&func_0029C9B0 == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
}
