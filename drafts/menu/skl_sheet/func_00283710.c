/* Draft (not built): func_00283710 at 0x00283710, size 0x2E8, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 68: func_0022C1D0(*(*(s32 *)((u8 *)temp_s4 + 0x14) + (var_s1 * 4)), 1, (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
 * Original: asm/nonmatchings/menu/skl_sheet/func_00283710.s */

// src/menu/skl_sheet.c func_00283710 cerr diff=-1/0
extern u8 *D_00470820;
extern void Obj_ResetF38(void *);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amCamera_SetScreen(s32 *, s32 *, s32);
s32 amGs_SetReg32(s32, s32);
s32 func_00131F00(s32 *, s32, s32);
s32 func_00133780(s32, s32);
s32 func_0013B110(s32);
s32 func_0022BC30(s32, f32);
s32 func_0022C1D0(s32, s32, f32);
s32 func_0022C430(s32, f32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void func_00131B90(void *);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern void amCamera_Init(void *);
extern void func_00209E50(void *);
extern void func_0013B160(void *);
extern void func_00208F70(void *);
extern void SoundRpc_Send3();
extern void *D_00470704;
extern void func_0013AFA0(void *);
extern void amModel_SetCurrent();
extern void func_00208D70(void *);
extern void func_002832E0(void);
void func_00283710(u8 *arg0) {
    s32 sp60;
    s32 spC0;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_a0_2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_a0 = *(s32 *)((u8 *)D_00470820 + 0x48);
    if (temp_a0 >= 2) {
        if (temp_a0 == 2) {
            *(s32 *)((u8 *)D_00470820 + 0x48) = 3;
        }
        if (*(s32 *)((u8 *)D_00470820 + 0x48) == 8) {
            Obj_ResetF38(*(u8 **)((u8 *)D_00470820 + 0x44));
            *(u8 **)((u8 *)D_00470820 + 0x44) = NULL;
            amTask_Kill(arg0);
            return;
        }
        temp_s4 = *(u8 **)((u8 *)D_00470820 + 0x30);
        temp_s3 = D_00470820 + 0xC4;
        func_00133780(0, 1);
        temp_s2 = amGs_SetReg32(0, 0x30000);
        var_s1 = 1;
        var_s0 = 0x16;
        if (*(s32 *)((u8 *)D_00470820 + 0x48) == 7) {
            var_s1 = 2;
            var_s0 = 0x1B;
        }
        temp_a0_2 = *(u8 **)((u8 *)D_00470820 + 0x34);
        temp_a1 = *(s32 *)((u8 *)D_00470820 + 0x54) + 0x500;
        D_00470704 = temp_a0_2;
        D_0047070C = temp_a1;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0_2, temp_a1);
        D_00470238 = 0;
        func_0022C430(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (var_s0 * 4)), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
        if (func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x5C), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta) == 0xFF) {
            if (!(*(s16 *)((u8 *)D_00470820 + 0x62) & 2)) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 1, 0);
                }
                *(s16 *)((u8 *)D_00470820 + 0x62) = (s16) (*(s16 *)((u8 *)D_00470820 + 0x62) | 2);
            }
            func_0013AFA0(NULL);
            amCamera_Init(&spC0);
            func_00131B90(&sp60);
            func_00131F00(&sp60, 0, 0);
            func_0013B160(NULL);
            amCamera_SetScreen(&sp60, &spC0, 0x43F00000);
            func_00209E50(NULL);
            func_00132DF0(NULL);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
            M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
            func_0013B0B0(NULL);
            func_0013AFA0(NULL);
            func_00208F70(*(u8 **)((u8 *)D_00470820 + 0x44));
            func_00208D70(*(u8 **)((u8 *)D_00470820 + 0x44));
            func_0013B110(1);
        }
        func_0022C1D0(*(*(s32 *)((u8 *)temp_s4 + 0x14) + (var_s1 * 4)), 1, (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta);
        *(s32 *)((u8 *)temp_s3 + 8) = (s32) (*(s32 *)((u8 *)temp_s3 + 8) + 1);
        if (func_0022BC30(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x60), (f32) *(s32 *)((u8 *)temp_s3 + 8) * gFrameDelta) == 0xFF) {
            var_v1 = (s32 *)(&func_002832E0);
            if (&func_002832E0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)(*(u8 **)((u8 *)D_00470820 + 0x28)) + 0x1C) = var_v1;
        }
        amGs_SetReg32(0, temp_s2);
        func_00133780(0, 0);
    }
}
