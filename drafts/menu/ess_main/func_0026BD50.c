/* Draft (not built): func_0026BD50 at 0x0026BD50, size 0xA70, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal explicit conversion from 'float *' to 'float' mwccps2.exe Compiler: @ 580: amAdx_SetVolume(1, (f32)(D_004E0618));
 * Original: asm/nonmatchings/menu/ess_main/func_0026BD50.s */

// src/menu/ess_main.c func_0026BD50 cerr diff=-1/0
s32 Help_Open(s64, s32);
s32 SoundRpc_SetVolume(s32, s32, s32, u16, f32);
s32 func_0027A370();
extern s32 D_00452EC8;
extern s32 D_00452ED4;
extern s32 D_00452ED8;
extern s32 D_00452EF4;
extern s32 D_00470838;
extern s32 D_0047083C;
extern s32 D_00470840;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void EssInfo_Start(void);
extern void EssInfo_Load(void);
extern void SoundRpc_Send3();
extern void func_0028DF20(void);
extern void func_00119BF0(void *);
extern char D_00492FCE[];
extern void Scene_Request();
extern void func_0026CF80(void);
extern void func_0026CC30(void);
extern void func_0026C910(void);
void func_0026BD50(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *temp_s1_2;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_7;
    s32 var_v1_8;

    func_0026B770();
    func_0026B880();
    var_s3 = *(s32 *)((u8 *)gEssMain + 0x50);
    temp_a2 = D_0049308A | D_004930EA;
    temp_s1 = *D_00492FCE | D_00493086;
    var_s2 = D_00492FD2 | D_00493032 | temp_a2;
    if (temp_s1 & 0x1000) {
        SoundRpc_SetVolume(0, 0, temp_a2, D_0049308A, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        func_0028DF20();
        amAdx_Pause(1, 1);
        Scene_Request(5, 0);
        var_v1 = (s32 *)(&func_0026CF80);
        *(s32 *)((u8 *)gEssMain + 0x90) = 3;
        *(s32 *)((u8 *)gEssMain + 0x98) = 0;
        *(s32 *)((u8 *)gEssMain + 0xC0) = 9;
        *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
        *(s32 *)((u8 *)gEssMain + 0xF0) = 0x30;
        *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x120) = 0xE;
        *(s32 *)((u8 *)gEssMain + 0x128) = 0;
        *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
        *(s32 *)((u8 *)gEssMain + 0x158) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xF;
        *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
        *(s32 *)((u8 *)gEssMain + 0x190) = -1;
        *(s32 *)((u8 *)gEssMain + 0x188) = 0;
        *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x12;
        *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
        if (&func_0026CF80 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    if (temp_s1 & 0x4000) {
        func_00119BF0(&D_00470840);
        switch (var_s3) {                           /* switch 1; irregular */
        case 1:                                     /* switch 1 */
        case 0:                                     /* switch 1 */
            temp_s2 = var_s3 * 4;
            temp_s1_2 = &(&D_00470838)[var_s3];
            if ((*temp_s1_2 & 0x7FFF) != 4) {
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 6, 0);
                }
                if ((*temp_s1_2 & 0x7FFF) == 5) {
                    var_v1_2 = var_s3 + 6;
                    if (var_v1_2 >= 0) {

                    } else {
                        var_v1_2 = -1;
                    }
                    *(s32 *)((u8 *)(gEssMain + 0x1B0) + 0x10) = var_v1_2;
                    temp_v1 = var_s3 + 6;
                    *(s32 *)((u8 *)gEssMain + 0x190) = temp_v1;
                    *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                    if (temp_v1 >= 0) {
                        temp_s0 = *(&D_00452ED8 + temp_s2);
                        amAdx_SetVolume(1, (f32)(D_004E0618));
                        amAdx_Pause(1, 0);
                        amAdx_PlayAfs(1, temp_s0 | 0x20000, 0);
                    }
                } else {
                    var_v1_3 = var_s3 + 0xD;
                    if (var_v1_3 >= 0) {

                    } else {
                        var_v1_3 = -1;
                    }
                    *(s32 *)((u8 *)(gEssMain + 0x1B0) + 0x10) = var_v1_3;
                    temp_v1_2 = var_s3 + 0xD;
                    *(s32 *)((u8 *)gEssMain + 0x190) = temp_v1_2;
                    *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                    if (temp_v1_2 >= 0) {
                        temp_s0_2 = *(&D_00452EF4 + temp_s2);
                        amAdx_SetVolume(1, (f32)(D_004E0618));
                        amAdx_Pause(1, 0);
                        amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
                    }
                }
                return;
            }
            amAdx_Pause(1, 1);
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            func_0028DF20();
            var_v1_4 = (s32 *)(&func_0026CC30);
            *(s8 *)((u8 *)gEssMain + 0x5C) = 0;
            *(s32 *)((u8 *)gEssMain + 0xC0) = 0xA;
            *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
            *(s32 *)((u8 *)gEssMain + 0xF0) = 0x32;
            *(s32 *)((u8 *)gEssMain + 0x100) = 0x31;
            *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x12;
            *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
            *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
            *(s32 *)((u8 *)gEssMain + 0x190) = -1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            *(s32 *)((u8 *)gEssMain + 0x240) = 0;
            *(s32 *)((u8 *)gEssMain + 0x248) = 0;
            if (&func_0026CC30 == NULL) {
                var_v1_4 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
            return;
        case 2:                                     /* switch 1 */
            if ((D_00470838 & 0x7FFF) == 4) {
                if ((D_0047083C & 0x7FFF) != 4) {
                    goto block_39;
                }
                amAdx_Pause(1, 1);
                SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                func_0028DF20();
                func_0027A370();
                var_v1_5 = &Ess_TaskTradeStart;
                *(s32 *)((u8 *)gEssMain + 0xC0) = 9;
                *(s32 *)((u8 *)gEssMain + 0xC8) = 0;
                *(s32 *)((u8 *)gEssMain + 0x90) = 3;
                *(s32 *)((u8 *)gEssMain + 0x98) = 0;
                *(s32 *)((u8 *)gEssMain + 0xF0) = 0x30;
                *(s32 *)((u8 *)gEssMain + 0x100) = 0x31;
                *(s32 *)((u8 *)gEssMain + 0xF8) = 0;
                *(s32 *)((u8 *)gEssMain + 0x120) = 0xE;
                *(s32 *)((u8 *)gEssMain + 0x128) = 0;
                *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
                *(s32 *)((u8 *)gEssMain + 0x158) = 0;
                *(s32 *)((u8 *)gEssMain + 0x1B0) = 0xF;
                *(s32 *)((u8 *)gEssMain + 0x1B8) = 0;
                *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
                *(s32 *)((u8 *)gEssMain + 0x190) = -1;
                *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                *(s32 *)((u8 *)gEssMain + 0x1E0) = 0x12;
                *(s32 *)((u8 *)gEssMain + 0x1E8) = 0;
                if (&Ess_TaskTradeStart == NULL) {
                    var_v1_5 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
                return;
            }
block_39:
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 6, 0);
            }
            *(s32 *)((u8 *)gEssMain + 0x1C0) = 5;
            *(s32 *)((u8 *)gEssMain + 0x190) = 5;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            temp_s0_3 = D_00452ED4;
            amAdx_SetVolume(1, (f32)(D_004E0618));
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s0_3 | 0x20000, 0);
            return;
        case 3:                                     /* switch 1 */
            amAdx_Pause(1, 1);
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            *(s32 *)((u8 *)gEssMain + 0x15C) = 1;
            *(s32 *)((u8 *)gEssMain + 0x158) = 0;
            *(s32 *)((u8 *)gEssMain + 0x1C0) = -1;
            *(s32 *)((u8 *)gEssMain + 0x190) = -1;
            *(s32 *)((u8 *)gEssMain + 0x188) = 0;
            *(s32 *)((u8 *)gEssMain + 0x50) = var_s3;
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            EssInfo_Load();
            EssInfo_Start();
            var_v1_6 = (s32 *)(&func_0026C910);
            if (&func_0026C910 == NULL) {
                var_v1_6 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
            return;
        }
    } else {
        if (temp_s1 & 1) {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            Help_Open(0x800041 << 0x20, 3);
            var_s2 = 0;
        }
        temp_a0 = var_s2 & 0xF0;
        switch (temp_a0) {                          /* switch 2; irregular */
        case 0x10:                                  /* switch 2 */
            var_v1_7 = var_s3 >> 1;
            if (var_s3 < 0) {
                var_v1_7 = (s32) (var_s3 + 1) >> 1;
            }
            if (var_v1_7 == 1) {
                var_s3 -= 2;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            break;
        case 0x40:                                  /* switch 2 */
            var_v0 = var_s3 >> 1;
            if (var_s3 < 0) {
                var_v0 = (s32) (var_s3 + 1) >> 1;
            }
            if (var_v0 == 0) {
                var_s3 += 2;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            break;
        case 0x80:                                  /* switch 2 */
            var_v1_8 = var_s3 & 1;
            if (var_s3 < 0) {
                if (var_v1_8 != 0) {
                    var_v1_8 -= 2;
                }
            }
            if (var_v1_8 == 1) {
                var_s3 -= 1;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            break;
        case 0x20:                                  /* switch 2 */
            if ((var_s3 % 2) == 0) {
                var_s3 += 1;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(s32, D_004E0614), 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            break;
        }
        if (*(s32 *)((u8 *)gEssMain + 0x50) != var_s3) {
            *(s32 *)((u8 *)gEssMain + 0x50) = var_s3;
            switch (var_s3) {                       /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                *(s32 *)((u8 *)gEssMain + 0x1C0) = 1;
                *(s32 *)((u8 *)gEssMain + 0x190) = 1;
                *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                temp_s0_4 = (s32)(D_00452EC4);
                amAdx_SetVolume(1, 4e-45f);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s0_4 | 0x20000, 0);
                return;
            case 1:                                 /* switch 3 */
                *(s32 *)((u8 *)gEssMain + 0x1C0) = 2;
                *(s32 *)((u8 *)gEssMain + 0x190) = 2;
                *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                temp_s0_5 = D_00452EC8;
                amAdx_SetVolume(1, 4e-45f);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s0_5 | 0x20000, 0);
                return;
            case 2:                                 /* switch 3 */
                *(s32 *)((u8 *)gEssMain + 0x1C0) = 3;
                *(s32 *)((u8 *)gEssMain + 0x190) = 3;
                *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                temp_s0_6 = (s32)(D_00452ECC);
                amAdx_SetVolume(1, 4e-45f);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s0_6 | 0x20000, 0);
                return;
            case 3:                                 /* switch 3 */
                *(s32 *)((u8 *)gEssMain + 0x1C0) = 4;
                *(s32 *)((u8 *)gEssMain + 0x190) = 4;
                *(s32 *)((u8 *)gEssMain + 0x188) = 0;
                temp_s0_7 = (s32)(D_00452ED0);
                amAdx_SetVolume(1, 4e-45f);
                amAdx_Pause(1, 0);
                amAdx_PlayAfs(1, temp_s0_7 | 0x20000, 0);
                break;
            }
        }
    }
}
