/* Draft (not built): func_00275230 at 0x00275230, size 0x7B4, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 399 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/ess_shop/func_00275230.s */

// src/menu/ess_shop.c func_00275230 diff diff=399/493
extern f32 D_004E0618[];
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
s32 EssMain_SetByte(s32, u8, s32, u32);
s32 Help_Open(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 Zenie_SetStep(s32, s32);
s32 Zenie_SetValue(s32, s32);
s32 func_0012EAE0(s32, s32, s32, s32);
s32 func_0026D530(s32, s32);
s32 func_0026D9C0(void *, s32);
extern s32 D_00452FBC;
extern s32 D_00452FC0;
extern s32 D_00453020;
extern s32 D_00453030;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern s32 D_004E066D;
extern s32 D_0058F680;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void func_00274C10(void);
void func_00275230(u8 *arg0) {
    s32 *var_s3;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s3_5;
    s32 var_a0;
    s32 var_s1;
    s32 var_s4;
    u32 temp_a3;
    u8 var_a1;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s3_6;
    u8 *temp_s4;
    u8 *temp_s4_2;
    u8 *temp_s4_3;
    u8 *temp_s5;

    temp_s5 = arg0 + 0x30;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x1D4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x204) = (s32) (*(s32 *)((u8 *)gEssShop + 0x204) + 1);
    *(s32 *)((u8 *)gEssShop + 0x234) = (s32) (*(s32 *)((u8 *)gEssShop + 0x234) + 1);
    *(s32 *)((u8 *)gEssShop + 0x264) = (s32) (*(s32 *)((u8 *)gEssShop + 0x264) + 1);
    *(s32 *)((u8 *)gEssShop + 0x294) = (s32) (*(s32 *)((u8 *)gEssShop + 0x294) + 1);
    *(s32 *)((u8 *)gEssShop + 0x2C4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2C4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x3B4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x3B4) + 1);
    func_00274120();
    *(s32 *)((u8 *)gEssShop + 0x2F4) = (s32) (*(s32 *)((u8 *)gEssShop + 0x2F4) + 1);
    *(s32 *)((u8 *)gEssShop + 0x324) = (s32) (*(s32 *)((u8 *)gEssShop + 0x324) + 1);
    *(s32 *)((u8 *)gEssShop + 0x354) = (s32) (*(s32 *)((u8 *)gEssShop + 0x354) + 1);
    *(s32 *)((u8 *)gEssShop + 0x384) = (s32) (*(s32 *)((u8 *)gEssShop + 0x384) + 1);
    func_00273E20();
    temp_s3 = *D_00492FCE | D_00493086;
    var_s4 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    if (temp_s3 & 0x1000) {
        *(s32 *)((u8 *)gEssShop + 0x2F4) = 0;
        *(s32 *)((u8 *)gEssShop + 0x2EC) = 8;
        *(s32 *)((u8 *)gEssShop + 0x2FC) = 0x32;
        *(s32 *)((u8 *)gEssShop + 0x300) = 0x31;
        *(s32 *)((u8 *)gEssShop + 0x324) = 0;
        *(s32 *)((u8 *)gEssShop + 0x31C) = 0x34;
        *(s32 *)((u8 *)gEssShop + 0x354) = 0;
        *(s32 *)((u8 *)gEssShop + 0x34C) = 0x37;
        temp_s0 = func_0012EAE0(0x20, gEssShop, 0x32, 8) & 3;
        temp_s1 = (unsigned char *)(gEssShop + 0x1FC);
        *(s32 *)((u8 *)temp_s1 + 0x10) = (s32) *(temp_s0 + (&D_00452FC0 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
        func_0026D530(1, 4);
        temp_s0_2 = *((temp_s0 * 4) + (&D_00453030 + ((EssMain_GetFlag() & 0xFF) * 0x70)));
        amAdx_SetVolume(1, *D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s0_2 | 0x20000, 0);
        var_v0 = (int *)(&func_00274E70);
        if (&func_00274E70 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x16, 0);
        }
    }
    if (temp_s3 & 0x4000) {
        *(s32 *)((u8 *)gEssShop + 0x2F4) = 0;
        *(s32 *)((u8 *)gEssShop + 0x2EC) = 8;
        *(s32 *)((u8 *)gEssShop + 0x2FC) = 0x32;
        *(s32 *)((u8 *)gEssShop + 0x300) = 0x31;
        if (*(s32 *)((u8 *)temp_s5 + 8) != 0) {
            var_s1 = 0x34;
            temp_s3_2 = func_0012EAE0(0x20, gEssShop, 0, 0) & 3;
            temp_s4 = (unsigned char *)(gEssShop + 0x1FC);
            *(s32 *)((u8 *)temp_s4 + 0x10) = (s32) *(temp_s3_2 + (&D_00452FC0 + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
            func_0026D530(1, 4);
            temp_s3_3 = *((temp_s3_2 * 4) + (&D_00453030 + ((EssMain_GetFlag() & 0xFF) * 0x70)));
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s3_3 | 0x20000, 0);
            var_s3 = (int *)(&func_00274E70);
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x16, 0);
            }
        } else {
            var_s1 = 0x35;
            temp_s3_4 = func_0012EAE0(0x20, gEssShop, 0, 0) & 3;
            temp_s4_2 = (unsigned char *)(gEssShop + 0x1FC);
            *(s32 *)((u8 *)temp_s4_2 + 0x10) = (s32) *(temp_s3_4 + (&D_00452FBC + ((EssMain_GetFlag() & 0xFF) * 0x1C)));
            func_0026D530(1, 3);
            temp_s3_5 = *((temp_s3_4 * 4) + (&D_00453020 + ((EssMain_GetFlag() & 0xFF) * 0x70)));
            amAdx_SetVolume(1, *D_004E0618);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, temp_s3_5 | 0x20000, 0);
            func_002735D0();
            temp_s4_3 = *(u8 **)((u8 *)((*(s32 *)((u8 *)gEssShop + 0x68) * 4) + gEssShop) + 0x1B8);
            var_a0 = (*(u32 *)((u8 *)temp_s4_3 + 8) / 100) + ((u32) *(u32 *)((u8 *)temp_s4_3 + 8) >> 0x1F);
            if (var_a0 < 0x64) {
                var_a0 = 0x64;
            }
            Zenie_SetStep(var_a0, 0x64);
            temp_a0 = *(s32 *)((u8 *)gEssShop + 0x70);
            Zenie_SetValue(temp_a0, temp_a0 - *(u32 *)((u8 *)temp_s4_3 + 8));
            temp_a3 = *(u32 *)((u8 *)temp_s4_3 + 8);
            *(s32 *)((u8 *)gEssShop + 0x70) = (s32) (*(s32 *)((u8 *)gEssShop + 0x70) - temp_a3);
            temp_a2 = *(s32 *)((u8 *)gEssShop + 0x50);
            temp_s3_6 = (unsigned char *)(&D_0058F680 + (temp_a2 * 0xD680));
            *(s32 *)((u8 *)temp_s3_6 + 0x98) = (s32) *(s32 *)((u8 *)gEssShop + 0x70);
            *(s32 *)((u8 *)temp_s3_6 + 0x9C) = (s32) (*(s32 *)((u8 *)temp_s3_6 + 0x9C) + ((*(u32 *)((u8 *)temp_s4_3 + 8) / 100) + ((u32) *(u32 *)((u8 *)temp_s4_3 + 8) >> 0x1F)));
            if (*(s32 *)((u8 *)temp_s3_6 + 0x9C) < 0) {
                *(s32 *)((u8 *)temp_s3_6 + 0x9C) = 0x7FFFFFFF;
            }
            temp_a1 = *(s32 *)((u8 *)temp_s4_3 + 4);
            temp_a0_2 = temp_a1 + temp_s3_6;
            var_a1 = *(u8 *)((u8 *)temp_a0_2 + 0xD41D);
            if ((s32) var_a1 < (s32) *(&D_004E066D + (temp_a1 * 0x28))) {
                var_a1 += 1;
            }
            *(u8 *)((u8 *)temp_a0_2 + 0xD41D) = var_a1;
            *(s32 *)((u8 *)gEssShop + 0x5C) = (s32) (*(s32 *)((u8 *)gEssShop + 0x5C) + 1);
            EssMain_SetByte(1, var_a1, temp_a2, temp_a3);
            func_0026D9C0(temp_s3_6, *(s32 *)((u8 *)temp_s4_3 + 4));
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            if (*(s32 *)((u8 *)temp_s4_3 + 0) == 0x242) {
                var_s3 = (int *)(&func_00274C10);
            } else {
                var_s3 = (int *)(&func_00274E70);
                *(s32 *)((u8 *)temp_s4_3 + 0x10) = (s32) (*(s32 *)((u8 *)temp_s4_3 + 0x10) | 1);
                *(s32 *)((u8 *)temp_s4_3 + 0x10) = (s32) (*(s32 *)((u8 *)temp_s4_3 + 0x10) & ~2);
            }
        }
        *(s32 *)((u8 *)gEssShop + 0x324) = 0;
        *(s32 *)((u8 *)gEssShop + 0x31C) = var_s1;
        *(s32 *)((u8 *)gEssShop + 0x354) = 0;
        *(s32 *)((u8 *)gEssShop + 0x34C) = 0x37;
        if (var_s3 == NULL) {
            var_s3 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_s3;
        return;
    }
    if (temp_s3 & 1) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        Help_Open(0x80000 | (0x800040 << 0x20), 3);
        var_s4 = 0;
    }
    temp_a0_3 = var_s4 & 0xF0;
    if (temp_a0_3 != 0x40) {
        if (temp_a0_3 != 0x10) {
            return;
        }
        *(s32 *)((u8 *)temp_s5 + 8) = (s32) (*(s32 *)((u8 *)temp_s5 + 8) ^ 1);
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    } else {
        *(s32 *)((u8 *)temp_s5 + 8) = (s32) (*(s32 *)((u8 *)temp_s5 + 8) ^ 1);
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
    }
}
