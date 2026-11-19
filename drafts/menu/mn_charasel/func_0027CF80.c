/* Draft (not built): func_0027CF80 at 0x0027CF80, size 0x244, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 83 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x24C, original 0x244
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027CF80.s */

// src/menu/mn_charasel.c func_0027CF80 size diff=83/147
extern void *D_00470810;
extern void SoundRpc_Send3();
s32 CsModel_Create(s32, s16, s8);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
s32 func_0027A4C0(void *);
s32 func_00280E70(s32, s8);
extern s32 D_0046B560;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0027C2F0(void);
extern void func_0027CB20(void);
void func_0027CF80(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_a0_2;
    s32 var_s0;
    s32 var_s2;
    u8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;

    var_s5 = arg0;
    var_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s4 = D_00470810;
    func_0027A4C0(var_s3);
    temp_f2 = *(f32 *)((u8 *)var_s3 + 0x68);
    if (temp_f2 < 30.0f) {
        temp_f0 = temp_f2 + gFrameDelta;
        *(f32 *)((u8 *)var_s3 + 0x68) = temp_f0;
        if (!(temp_f0 < 30.0f)) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 9, 0);
            }
        }
    }
    temp_f1 = *(f32 *)((u8 *)var_s3 + 0x54) - gFrameDelta;
    *(f32 *)((u8 *)var_s3 + 0x54) = temp_f1;
    if (temp_f1 <= 0.0f) {
        temp_v1 = *(u8 *)((u8 *)var_s3 + 7);
        var_s2 = 0;
        if (temp_v1 != 0) {
            var_s2 = 1 & 0xFFFF;
        }
        if (!(*(u8 *)((u8 *)var_s3 + 6) & 8)) {
            var_s0 = temp_v1 == 0;
            var_s1 = D_00470810;
            if (*(s8 *)((u8 *)var_s3 + 1) != 1) {
                *(s8 *)((u8 *)var_s3 + 1) = 1;
                temp_a0 = *(u8 **)((u8 *)var_s1 + 0xC);
                D_00470704 = temp_a0;
                D_0047070C = 0x3000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0, 0x3000);
                D_00470238 = 0;
                temp_a0_2 = *(s32 *)((u8 *)var_s3 + 0x50);
                if (temp_a0_2 != 0) {
                    func_0022D0E0(temp_a0_2, 1);
                }
                *(s32 *)((u8 *)var_s3 + 0x50) = func_0022D860(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s1 + 8)) + 0x14) + (var_s0 * 4)), 0);
            }
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s4 + 0xC);
        D_00470704 = temp_a0_3;
        D_0047070C = 0x3000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_3, 0x3000);
        D_00470238 = 0;
        *(s32 *)((u8 *)var_s3 + 0x4C) = func_0022D670(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 8)) + 0x1C) + ((*(s8 *)((u8 *)var_s3 + 4) + 0x69) * 4)), 0);
        *(s32 *)((u8 *)var_s3 + 0x2C) = func_00280E70(var_s2, *(s8 *)((u8 *)var_s3 + 4));
        *(s32 *)((u8 *)var_s3 + 0x30) = CsModel_Create(var_s2, *(&D_0046B560 + (*(s8 *)((u8 *)var_s3 + 4) * 2)), *(s8 *)((u8 *)var_s3 + 5));
        if (*(u8 *)((u8 *)var_s3 + 6) & 8) {
            var_v1 = (int *)(&func_0027C2F0);
            *(s8 *)((u8 *)var_s3 + 0) = 5;
            if (&func_0027C2F0 == NULL) {
                var_v1 = NULL;
            }
        } else {
            *(s8 *)((u8 *)var_s3 + 0) = 4;
            var_v1 = (int *)(&func_0027CB20);
            if (&func_0027CB20 == NULL) {
                var_v1 = NULL;
            }
        }
        *(s32 **)((u8 *)var_s5 + 0x1C) = var_v1;
    }
}
