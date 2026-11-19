/* Draft (not built): func_0026E950 at 0x0026E950, size 0x31C, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 77 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x32C, original 0x31C
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E950.s */

// src/menu/ess_main_2.c func_0026E950 size diff=77/203
extern void *gEssEdit;
s32 EssMain_SetByte(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_00133780(s32, s32);
s32 func_00228430(s32);
s32 func_002284D0(s32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0027DA00(void *, s32, s32);
s32 func_002B4AD0(s32, s32);
s32 func_002B4AF0(s32, s8, s32 *, s32 *);
s32 func_002B4C40(s32);
s32 func_002B4D90(s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00493086;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern f32 gFrameDelta;
extern void func_00228410(void);
extern void func_0027DB20(void *);
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0026E640(void);
extern void func_0026E780(void);
void func_0026E950(u8 *arg0) {
    u8 sp[0x400];
    s32 sp30;
    s32 *var_v1;
    s32 *var_v1_2;
    s16 *var_a1;
    s16 temp_v1_2;
    s32 *var_a3;
    s32 temp_a1;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_a1_2;

    temp_a0 = *(u8 **)((u8 *)gEssEdit + 0x1C);
    D_00470704 = temp_a0;
    D_0047070C = 0x11401100;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x11401100);
    D_00470238 = 0;
    func_00133780(0, 1);
    func_00228430(0);
    func_002284D0(0);
    temp_s0 = ((u8 *)gEssEdit) + 0x28;
    func_0022C1D0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gEssEdit + 0x18)) + 0x14) + (*(s32 *)((u8 *)gEssEdit + 0x28) * 4)), 1, (f32) *(s32 *)((u8 *)gEssEdit + 0x30) * gFrameDelta);
    *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    func_00228410();
    func_00133780(0, 0);
    temp_a0_2 = *(u8 **)((u8 *)gEssEdit + 0x14);
    if ((*D_00492FCE | D_00493086) & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        temp_a1 = *(s32 *)((u8 *)gEssEdit + 0x24);
        temp_v1 = (unsigned char *)(&D_0058F680 + (*(s32 *)((u8 *)gEssEdit + 0x20) * 0xD680));
        if (temp_a1 != *(s16 *)((u8 *)temp_v1 + 0x8A0)) {
            *(s16 *)((u8 *)temp_v1 + 0x8A0) = (s16) temp_a1;
            EssMain_SetByte(1, temp_a1);
        } else if (func_002B4AD0(0, temp_a1) != 0) {
            EssMain_SetByte(1, 0);
        }
        func_0027DB20(*(u8 **)((u8 *)gEssEdit + 0x14));
        func_002B4D90(0);
        var_v1 = (int *)(&func_0026E640);
        *(s32 *)((u8 *)gEssEdit + 0x28) = 1;
        *(s32 *)((u8 *)gEssEdit + 0x30) = 0;
        if (&func_0026E640 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    var_v0 = 0;
    var_a3 = &sp30;
    var_a1 = (short *)((*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_a0_2 + 0x30)) + 4) * 0xE) + (&D_0058F680 + (*(s32 *)((u8 *)gEssEdit + 0x20) * 0xD680)) + 0x8A2);
loop_12:
    temp_v1_2 = *var_a1;
    if (temp_v1_2 != -1) {
        *(s32 *)((u8 *)var_a3 + 4) = (s32) temp_v1_2;
        var_v0 += 1;
        var_a1 += 2;
        var_a3 += 4;
        if (var_v0 >= 7) {

        } else {
            goto loop_12;
        }
    }
    sp30 = var_v0;
    if (var_v0 < 7) {
        var_a1_2 = (var_v0 * 4) + sp + 0x30;
        do {
            var_v0 += 1;
            *(s32 *)((u8 *)var_a1_2 + 4) = -1;
            var_a1_2 += 4;
        } while (var_v0 < 7);
    }
    func_002B4AF0(0, *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_a0_2 + 0x30)) + 4), &sp30, var_a3);
    if (*(s8 *)((u8 *)(*(u8 **)((u8 *)temp_a0_2 + 0x30)) + 0) == 5) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        *(s32 *)((u8 *)gEssEdit + 0x24) = (s32) *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_a0_2 + 0x30)) + 4);
        func_002B4C40(0);
        func_0027DA00(*(u8 **)((u8 *)gEssEdit + 0x14), 0x3F000000, 0x3F800000);
        var_v1_2 = (int *)(&func_0026E780);
        if (&func_0026E780 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}
