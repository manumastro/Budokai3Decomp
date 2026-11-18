/* Draft (not built): func_0029C2E0 at 0x0029C2E0, size 0x394, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  to 'int' mwccps2.exe Compiler: @ 468: 0, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
 * Original: asm/nonmatchings/story/str_map/func_0029C2E0.s */

// src/story/str_map.c func_0029C2E0 cerr diff=-1/0
extern void func_0028EBB0(char *, s32, s32 *, s32);
s32 SoundRpc_SetVolume(s32, s32, u16, u16, f32);
extern s32 D_00454160;
extern s128 D_00454180;
extern s32 D_00454260;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_0028EAE0(void);
extern void Scene_Request();
extern void func_0029C110(void);
void func_0029C2E0(u8 *arg0) {
    s32 sp30;
    s8 sp50;
    s16 sp52;
    s8 sp60;
    s16 sp62;
    s8 sp68;
    s16 sp6A;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s0;
    u16 temp_a2;
    u16 temp_a3_2;

    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00454160) + 0);
    *(s64 *)((u8 *)(&sp60) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00454160) + 0x10);
    temp_s1 = *(s32 *)((u8 *)gStrTitle + 0xB0);
    temp_a3 = D_004B4B63 * 0xB8;
    temp_a3_2 = *(D_00492FCE + temp_a3);
    temp_a2 = *(&D_00492FD2 + temp_a3);
    if (temp_a3_2 & 0x1000) {
        SoundRpc_SetVolume(0, 0, temp_a2, temp_a3_2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        Scene_Request(5, 0);
        Scene_FadeTo(-1, 0);
        *(s32 **)((u8 *)arg0 + 0x1C) = NULL;
        return;
    }
    if (temp_a3_2 & 0x4000) {
        sp50 = (s128) D_00454180;
        sp52 = temp_s1 + 3;
        sp50 = temp_s1 + 5;
        func_0028EC80(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
        SoundRpc_SetVolume(0, 0, M2C_BITWISE(u16, D_004E0614));
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        switch (temp_s1) {                          /* switch 1; irregular */
        case 2:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            Scene_Request(7, temp_s1);
            var_v1 = (s32 *)(&StrMap_FadeWhenDone);
            if (&StrMap_FadeWhenDone == NULL) {
                var_v1 = NULL;
            }
block_17:
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            break;
        case 3:                                     /* switch 1 */
            *(s128 *)((u8 *)(&sp30) + 0) = (s128) *(s128 *)((u8 *)(&D_00454260) + 0);
            *(s64 *)((u8 *)(&sp30) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00454260) + 0x10);
            func_0028EE90(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
            var_v1 = (s32 *)(&func_0029C110);
            *(u8 **)((u8 *)gStrTitle + 0x5C) = amTask_Create(func_0028EAE0, 0, 0x8013, 2);
            if (&func_0029C110 == NULL) {
                var_v1 = NULL;
            }
            goto block_17;
        }
        return;
    }
    temp_a1 = (temp_a2 | *(&D_00493032 + temp_a3)) & 0x50;
    switch (temp_a1) {                              /* switch 2; irregular */
    case 0x10:                                      /* switch 2 */
        temp_v1 = *(s32 *)((u8 *)gStrTitle + 0xAC);
        var_s0 = (s32) (temp_s1 - 1 + temp_v1) % temp_v1;
block_26:
        SoundRpc_SetVolume(0, 0, temp_a2, temp_a3_2, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        sp60 = temp_s1 + 5;
        sp62 = temp_s1 + 3;
        sp68 = var_s0 + 5;
        sp6A = var_s0 + 3;
        func_0028EC80(((u8 *)gStrTitle) + 0x10, ((u8 *)gStrTitle) + 0x64, ((u8 *)gStrTitle) + 0x68, ((u8 *)gStrTitle) + 0x6C);
        func_0028EBB0(*(s32 *)((u8 *)gStrTitle + 0x34), 0, *(s32 *)((u8 *)gStrTitle + 0x64), var_s0 + 0xF);
        *(s32 *)((u8 *)gStrTitle + 0xB0) = var_s0;
        return;
    case 0x40:                                      /* switch 2 */
        var_s0 = (s32) (temp_s1 + 1) % (s32) *(s32 *)((u8 *)gStrTitle + 0xAC);
        goto block_26;
    }
}
