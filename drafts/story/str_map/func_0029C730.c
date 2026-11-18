/* Draft (not built): func_0029C730 at 0x0029C730, size 0x278, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); tle + 0xB0) * 8) + sp) + 0x2E) = 0xC; @ 490: *(s16 *)((u8 *)((*(s32 *)((u8 *)gStrTitle + 0xB0) * 8) + sp) + 0x2C) = 0xB;
 * Original: asm/nonmatchings/story/str_map/func_0029C730.s */

// src/story/str_map.c func_0029C730 cerr diff=-1/0
s32 SoundRpc_SetVolume(s32, s32, s32 *, f32);
s32 func_0028EC10(s32, s32, s32, s32);
extern s32 D_00454120;
extern u16 D_00493086;
extern s8 D_004B4B5A;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void Scene_Request();
void func_0029C730(u8 *arg0) {
    s32 sp20;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    u8 *temp_a0_3;

    *(s128 *)((u8 *)(&sp20) + 0) = (s128) *(s128 *)((u8 *)(&D_00454120) + 0);
    *(s128 *)((u8 *)(&sp20) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00454120) + 0x10);
    *(s128 *)((u8 *)(&sp20) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00454120) + 0x20);
    temp_a0 = *D_00492FCE | D_00493086;
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, &sp20, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        Scene_Request(5, 0);
        Scene_FadeTo(-1, 0);
        *(s32 **)((u8 *)arg0 + 0x1C) = NULL;
        return;
    }
    if (temp_a0 & 8) {
        SoundRpc_SetVolume(0, 0, &sp20, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0, 0);
        }
        if (*D_00492FCE & 8) {
            D_004B4B63 = 0;
        } else {
            D_004B4B63 = 1;
        }
        D_004B4B5A = 0;
        temp_a0_2 = *(s32 *)((u8 *)gStrTitle + 0x70);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
            *(s32 *)((u8 *)gStrTitle + 0x70) = 0;
        }
        temp_a0_3 = *(u8 **)((u8 *)gStrTitle + 0x1C);
        if (temp_a0_3 != NULL) {
            amTask_Kill((void *)(temp_a0_3));
            *(u8 **)((u8 *)gStrTitle + 0x1C) = NULL;
        }
        *(s16 *)((u8 *)((*(s32 *)((u8 *)gStrTitle + 0xB0) * 8) + sp) + 0x2C) = 0xB;
        *(s16 *)((u8 *)((*(s32 *)((u8 *)gStrTitle + 0xB0) * 8) + sp) + 0x2E) = 0xC;
        func_0028EE90(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
        func_0028EC10(*(s32 *)((u8 *)gStrTitle + 0x28), *(s32 *)((u8 *)gStrTitle + 0x64), 0x10, 0);
        func_0028EBB0(*(s32 *)((u8 *)gStrTitle + 0x28), 0, *(s32 *)((u8 *)gStrTitle + 0x64), 0x10);
        func_0028EC10(*(s32 *)((u8 *)gStrTitle + 0x2C), *(s32 *)((u8 *)gStrTitle + 0x64), 0x11, 0);
        func_0028EBB0(*(s32 *)((u8 *)gStrTitle + 0x2C), 0, *(s32 *)((u8 *)gStrTitle + 0x64), 0x11);
        func_0028EC10(*(s32 *)((u8 *)gStrTitle + 0x30), *(s32 *)((u8 *)gStrTitle + 0x64), 0x12, 0);
        func_0028EBB0(*(s32 *)((u8 *)gStrTitle + 0x30), 0, *(s32 *)((u8 *)gStrTitle + 0x64), 0x12);
        var_v1 = (s32 *)(&func_0029C680);
        if (&func_0029C680 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
