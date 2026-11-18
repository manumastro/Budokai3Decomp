/* Draft (not built): func_002794D0 at 0x002794D0, size 0x7A8, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal explicit conversion from 'float *' to 'float' mwccps2.exe Compiler: @ 222: amAdx_SetVolume(1, (f32)(D_004E0618));
 * Original: asm/nonmatchings/menu/ess_trade/func_002794D0.s */

// src/menu/ess_trade.c func_002794D0 cerr diff=-1/0
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern f32 D_004E0618[];
s32 Help_Open(s64, s32);
s32 SklSheet_SetIndex(s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0026D530(s32, s32);
s32 func_00272660(s32 *, void *, void *);
s32 func_00283D00(s32, s32, s32, s32);
s32 func_002D2370(s32, void *);
extern s32 D_00453278;
extern s32 D_00453280;
extern s32 D_00470840;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern void func_00119BF0(void *);
extern char D_00492FCE[];
extern void func_00278980(void);
extern void func_00278490(void);
void func_002794D0(u8 *arg0) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    u8 *sp70;
    u8 *sp74;
    s32 sp78;
    s32 sp7C;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1_2;
    s32 temp_s0_2;
    s32 temp_s0_5;
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a2;
    s32 var_s2;
    void (*var_v0)();
    void (*var_v1)();
    void (*var_v1_2)();
    void (*var_v1_3)();
    void (*var_v1_4)();
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_s0_4;
    u8 *temp_s3;
    u8 *var_a1;

    temp_s3 = arg0 + 0x30;
    var_s2 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    temp_s1 = *D_00492FCE | D_00493086;
    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    if (temp_s1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        *(s32 *)((u8 *)gEssTrade + 0x1B8) = 5;
        *(s32 *)((u8 *)gEssTrade + 0x1C8) = 0x14;
        *(s32 *)((u8 *)gEssTrade + 0x1CC) = 0x13;
        *(s32 *)((u8 *)gEssTrade + 0x1C0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x1E8) = 7;
        *(s32 *)((u8 *)gEssTrade + 0x1F0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x218) = 0x17;
        *(s32 *)((u8 *)gEssTrade + 0x220) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x248) = 0x1A;
        *(s32 *)((u8 *)gEssTrade + 0x250) = 0;
        temp_s0 = (u8 *)(gEssTrade + 0xC8);
        *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) ((EssMain_GetFlag(gEssTrade, gEssTrade, 0x14, 5) & 0xFF) + 4);
        func_0026D530(2, 4);
        temp_s0_2 = *(&D_00453280 + ((EssMain_GetFlag() & 0xFF) * 4));
        amAdx_SetVolume(1, (f32)(D_004E0618));
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
        *(s32 *)((u8 *)temp_s3 + 8) = 1;
        var_v1 = func_00278EA0;
        *(s32 **)((u8 *)temp_s3 + 0x18) = &func_00278980;
        if (func_00278EA0 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s1 & 0x4000) {
        sp60 = 1;
        temp_a1 = (u8 *)(gEssTrade + (*(s32 *)((u8 *)gEssTrade + 0x50) << 5));
        temp_a2 = temp_a1 + 0x58;
        sp64 = *(s32 *)((u8 *)gEssTrade + 0x50);
        sp68 = *(s32 *)((u8 *)temp_a1 + 0x70);
        sp6C = *(s32 *)((u8 *)temp_a1 + 0x74);
        sp70 = temp_a2 + 8;
        sp78 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_a1 + 0x58) * 4) + temp_a2) + 8);
        sp74 = temp_a2;
        if (*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_a1 + 0x58) * 4) + temp_a2) + 8) > 0) {
            sp7C = 1;
        } else {
            sp7C = 0;
        }
        func_00272660(&sp60, temp_a1, temp_a2);
        var_v1_2 = Trade_CountFrame;
        if (Trade_CountFrame == NULL) {
            var_v1_2 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_2;
    }
    temp_a0 = (u8 *)(gEssTrade + (*(s32 *)((u8 *)gEssTrade + 0x50) << 5));
    temp_s0_3 = temp_a0 + 0x58;
    if (temp_s1 & 0x2000) {
        if (*(s32 *)((u8 *)((*(s32 *)((u8 *)temp_a0 + 0x58) * 4) + temp_s0_3) + 8) > 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_a0 + 0x58) * 4) + temp_s0_3) + 8) = 0;
            var_a2 = *(s32 *)((u8 *)temp_a0 + 0x58);
            if (var_a2 < 3) {
                var_a1 = temp_s0_3 + (var_a2 * 4);
                do {
                    var_a2 += 1;
                    *(s32 *)((u8 *)var_a1 + 8) = (s32) *(s32 *)((u8 *)var_a1 + 0xC);
                    var_a1 += 4;
                } while (var_a2 < 3);
            }
            *(s32 *)((u8 *)temp_s0_3 + 0x14) = -1;
            *(s32 *)((u8 *)temp_s0_3 + 4) = (s32) (*(s32 *)((u8 *)temp_s0_3 + 4) - 1);
        }
        return;
    }
    if (temp_s1 & 0x8000) {
        temp_a1_2 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_a0 + 0x58) * 4) + temp_s0_3) + 8);
        if (temp_a1_2 > 0) {
            func_00283D00(0x3220, temp_a1_2, 0, 0x11403000);
            SklSheet_SetIndex(0);
            var_v1_3 = func_002793C0;
            if (func_002793C0 == NULL) {
                var_v1_3 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_3;
        }
        return;
    }
    if (temp_s1 & 8) {
        if ((*(s32 *)((u8 *)gEssTrade + 0x5C) + *(s32 *)((u8 *)gEssTrade + 0x7C)) == 0) {
            func_002D2370(0, (void *)(gEssTrade));
            var_v1_4 = func_00278CA0;
            if (func_00278CA0 == NULL) {
                var_v1_4 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1_4;
        } else {
            *(s32 *)((u8 *)gEssTrade + 0x1B8) = 5;
            *(s32 *)((u8 *)gEssTrade + 0x1C8) = 0x14;
            *(s32 *)((u8 *)gEssTrade + 0x1CC) = 0x13;
            *(s32 *)((u8 *)gEssTrade + 0x1C0) = 0;
            *(s32 *)((u8 *)gEssTrade + 0x1E8) = 7;
            *(s32 *)((u8 *)gEssTrade + 0x1F0) = 0;
            *(s32 *)((u8 *)gEssTrade + 0x218) = 0x17;
            *(s32 *)((u8 *)gEssTrade + 0x220) = 0;
            *(s32 *)((u8 *)gEssTrade + 0x248) = 0x1A;
            *(s32 *)((u8 *)gEssTrade + 0x250) = 0;
            temp_s0_4 = (u8 *)(gEssTrade + 0xC8);
            *(s32 *)((u8 *)temp_s0_4 + 0x10) = (s32) ((EssMain_GetFlag(gEssTrade, gEssTrade) & 0xFF) + 2);
            func_0026D530(2, 2);
            temp_s0_5 = *(&D_00453278 + ((EssMain_GetFlag() & 0xFF) * 4));
            amAdx_SetVolume(1, (f32)(D_004E0618));
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_5 | 0x20000, 0);
            *(s32 *)((u8 *)temp_s3 + 8) = 1;
            *(s32 **)((u8 *)temp_s3 + 0x18) = &func_00278490;
            var_v0 = func_00278EA0;
            *(s32 *)((u8 *)gEssTrade + 0x54) = 1;
            if (func_00278EA0 == NULL) {
                var_v0 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
            func_00119BF0(&D_00470840);
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x15, 0);
            }
        }
        return;
    }
    if (temp_s1 & 1) {
        Help_Open(0x804841 << 0x20, 3);
        var_s2 = 0;
    }
    temp_a0_2 = var_s2 & 0xF0;
    switch (temp_a0_2) {                            /* irregular */
    case 0x10:
        temp_v1 = *(s32 *)((u8 *)temp_a0 + 0x58) - 1;
        *(s32 *)((u8 *)temp_a0 + 0x58) = temp_v1;
        if (temp_v1 < 0) {
            *(s32 *)((u8 *)temp_a0 + 0x58) = 0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    case 0x40:
        temp_v1_2 = *(s32 *)((u8 *)temp_a0 + 0x58) + 1;
        *(s32 *)((u8 *)temp_a0 + 0x58) = temp_v1_2;
        if (temp_v1_2 >= 4) {
            *(s32 *)((u8 *)temp_a0 + 0x58) = 3;
        } else {
            temp_a0_3 = *(s32 *)((u8 *)temp_s0_3 + 4);
            if (temp_a0_3 < *(s32 *)((u8 *)temp_a0 + 0x58)) {
                *(s32 *)((u8 *)temp_a0 + 0x58) = temp_a0_3;
                if (*(s32 *)((u8 *)temp_a0 + 0x58) < 0) {
                    *(s32 *)((u8 *)temp_a0 + 0x58) = 0;
                }
            } else {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 2, 0);
                }
            }
        }
        return;
    case 0x80:
        temp_v1_3 = *(s32 *)((u8 *)gEssTrade + 0x50) - 1;
        *(s32 *)((u8 *)gEssTrade + 0x50) = temp_v1_3;
        if (temp_v1_3 < 0) {
            *(s32 *)((u8 *)gEssTrade + 0x50) = 0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    case 0x20:
        temp_v1_4 = *(s32 *)((u8 *)gEssTrade + 0x50) + 1;
        *(s32 *)((u8 *)gEssTrade + 0x50) = temp_v1_4;
        if (temp_v1_4 >= 2) {
            *(s32 *)((u8 *)gEssTrade + 0x50) = 1;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
        }
        return;
    }
}
