/* Draft (not built): func_0029BA80 at 0x0029BA80, size 0x68C, segment story/str_map (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); oid (*)(struct Task *), int, int, @ 524: *(u8 **)((u8 *)gStrTitle + 0x60) = amTask_Create(&func_0029B130, 0, 0x8014, 2);
 * Original: asm/nonmatchings/story/str_map/func_0029BA80.s */

// src/story/str_map.c func_0029BA80 cerr diff=-1/0
extern void func_0029C2E0(void);
s32 SoundRpc_SetVolume(s32, s32, f32, f32);
s32 StrBg_SetPos(s32, s32, s32);
s32 StrBg_SetValue(s32, void *);
s32 amAdx_IsStopped(s32, u16 *, u16 *, s32);
s32 amAdx_SetVolume(s32, f32);
extern s32 D_00453F10;
extern s32 D_00453F14;
extern s32 D_004541D0;
extern s128 D_004541F0;
extern s32 D_00492FD2;
extern s32 D_0049302E;
extern s32 D_00493032;
extern s8 D_004B4B63;
extern s32 D_004DFAEC;
extern s32 D_004DFB19;
extern u8 D_004DFD56;
extern f32 D_004E0610;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_004B4B40[];
extern char D_00492FCE[];
extern void func_0029B130(void);
extern void func_0029B550(void);
void func_0029BA80(u8 *arg0) {
    s128 sp50;
    s16 sp54;
    s32 sp60;
    s16 temp_t3;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 temp_a0;
    s32 temp_a0_4;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_t5;
    s8 *var_t4;
    u16 *temp_a1;
    u16 *temp_a2;
    u16 temp_s3;
    u8 var_v0;
    u8 var_v0_2;
    void (*var_v1)();
    void (*var_v1_2)();
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_5;
    u8 *temp_v0_2;

    temp_s1 = *(s32 *)((u8 *)gStrTitle + 0xB4);
    temp_v0 = D_004B4B63 * 0xB8;
    temp_a2 = (unsigned short *)(D_00492FCE + temp_v0);
    temp_a1 = (unsigned short *)(&D_00492FD2 + temp_v0);
    temp_s3 = *temp_a2;
    temp_s2 = *temp_a1 | *(&D_00493032 + temp_v0);
    if (amAdx_IsStopped(1, temp_a1, temp_a2, D_004B4B63 * 0x18) != 0) {
        amAdx_SetVolume(0, D_004E0610);
    }
    if (temp_s3 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        amAdx_Stop(1);
        amAdx_SetVolume(0, D_004E0610);
        var_s2 = 0;
        var_s1 = 0;
        do {
            temp_a0 = *(s32 *)((u8 *)(((u8 *)gStrTitle) + var_s1) + 0x8C);
            if (temp_a0 != 0) {
                func_0022D0E0(temp_a0, 1);
                *(s32 *)((u8 *)(((u8 *)gStrTitle) + var_s1) + 0x8C) = 0;
            }
            temp_a0_2 = *(u8 **)((u8 *)(((u8 *)gStrTitle) + var_s1) + 0x3C);
            if (temp_a0_2 != NULL) {
                amTask_Kill((Task *)(temp_a0_2));
                *(s32 *)((u8 *)(((u8 *)gStrTitle) + var_s1) + 0x3C) = 0;
            }
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 8);
        temp_a0_3 = *(u8 **)((u8 *)gStrTitle + 0x60);
        if (temp_a0_3 != NULL) {
            amTask_Kill((Task *)(temp_a0_3));
            *(u8 **)((u8 *)gStrTitle + 0x60) = NULL;
        }
        var_v1 = func_0029C2E0;
        if (func_0029C2E0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (!(temp_s3 & 0x4000)) {
        temp_a1_2 = D_004B4B63 * 0xB8;
        if ((*(D_00492FCE + temp_a1_2) | *(&D_0049302E + temp_a1_2)) & 0x40) {
            goto block_20;
        }
        temp_a0_4 = temp_s2 & 0xA0;
        switch (temp_a0_4) {                        /* irregular */
        case 0x80:
            var_s0 = (s32) (temp_s1 + 0x29) % 42;
block_37:
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, D_004B4B63), D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            sp50 = D_004541F0;
            if (var_s0 == 0x29) {
                sp54 = 0x2A;
                temp_v1 = var_s0 * 8;
                var_t5 = 0;
                if (*(&D_00453F14 + temp_v1) > 0) {
                    temp_v0_2 = (unsigned char *)(&D_00453F10 + temp_v1);
                    temp_t3 = *(s16 *)((u8 *)temp_v0_2 + 0);
                    var_t4 = (signed char *)(D_004B4B40);
loop_42:
                    if (temp_t3 != -1) {
                        var_v0 = *(u8 *)((u8 *)(&D_004B4B40[temp_t3]) + 0x2AFD9);
                    } else if (var_s0 == 0x28) {
                        var_v0 = D_004DFAEC & (1 << var_t5);
                    } else if (var_s0 == 0x29) {
                        var_v0 = *(u8 *)((u8 *)var_t4 + 0x2B216);
                    } else {
                        var_v0 = 0;
                    }
                    if (var_v0 != 0) {
                        sp54 = 0x29;
                    } else {
                        var_t5 += 1;
                        var_t4 += 1;
                        if (var_t5 >= *(s32 *)((u8 *)temp_v0_2 + 4)) {

                        } else {
                            goto loop_42;
                        }
                    }
                }
            } else if (var_s0 == 0x28) {
                if (D_004DFAEC == 0) {
                    sp54 = 0x2A;
                }
            } else {
                temp_v1_2 = *(&D_00453F10 + (var_s0 * 8));
                if ((temp_v1_2 != -1) && (*(&D_004DFB19 + temp_v1_2) == 0)) {
                    sp54 = 0x2A;
                }
            }
            if (sp54 != 0x2B) {
                temp_a0_5 = *(u8 **)((u8 *)gStrTitle + 0x60);
                if (temp_a0_5 != NULL) {
                    amTask_Kill((Task *)(temp_a0_5));
                    *(u8 **)((u8 *)gStrTitle + 0x60) = NULL;
                }
            } else if (*(u8 **)((u8 *)gStrTitle + 0x60) == NULL) {
                *(u8 **)((u8 *)gStrTitle + 0x60) = amTask_Create(&func_0029B130, 0, 0x8014, 2);
            }
            func_0028EC80((s32)(((u8 *)gStrTitle) + 0x10), (s32)(((u8 *)gStrTitle) + 0x64), (s32)(((u8 *)gStrTitle) + 0x68), (s32)(((u8 *)gStrTitle) + 0x6C), 0, 0, 0, 0);
            StrBg_SetPos(*(s32 *)((u8 *)gStrTitle + 0x58), 0, 0);
            temp_v1_3 = *(&D_00453F10 + (var_s0 * 8));
            if (temp_v1_3 != -1) {
                var_v0_2 = *(&D_004DFB19 + temp_v1_3);
            } else if (var_s0 == 0x28) {
                var_v0_2 = D_004DFAEC & 1;
            } else if (var_s0 == 0x29) {
                var_v0_2 = D_004DFD56;
            } else {
                var_v0_2 = 0;
            }
            if (var_v0_2 == 0) {
                StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58),((u8 *)gStrTitle) + 0xC0);
            } else {
                StrBg_SetValue(*(s32 *)((u8 *)gStrTitle + 0x58), NULL);
            }
            *(s32 *)((u8 *)gStrTitle + 0xB4) = var_s0;
            *(s32 *)((u8 *)gStrTitle + 0xB8) = 0;
            return;
        case 0x20:
            var_s0 = (s32) (temp_s1 + 1) % 42;
            goto block_37;
        }
    } else {
block_20:
        *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_004541D0) + 0);
        *(s64 *)((u8 *)(&sp60) + 0x10) = (s64) *(s64 *)((u8 *)(&D_004541D0) + 0x10);
        temp_v1_4 = *(&D_00453F10 + (temp_s1 * 8));
        if ((temp_v1_4 != -1) && (*(&D_004DFB19 + temp_v1_4) == 0)) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, &sp60), D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            return;
        }
        func_0028EC80((s32)(((u8 *)gStrTitle) + 0x10), (s32)(((u8 *)gStrTitle) + 0x64), (s32)(((u8 *)gStrTitle) + 0x68), (s32)(((u8 *)gStrTitle) + 0x6C), 0, 0, 0, 0);
        SoundRpc_SetVolume(0, 0, D_004E0614, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        var_v1_2 = func_0029B550;
        if (func_0029B550 == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
