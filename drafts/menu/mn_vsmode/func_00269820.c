/* Draft (not built): func_00269820 at 0x00269820, size 0x158, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00269820.s */

extern char D_0046B430[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
s32 VsCharasel_Start(s32, s32);
s32 amAdx_PlayAfs(s32, s32, s32);
s32 amAdx_SetVolume(s32, f32);
s32 func_0028DFC0(s32, s32, s32, s32, s64);
s32 func_002C0630(s32, s32, s32);
s32 memset(void *, s32, s32);
extern f32 D_004E0610;
extern void Scene_SetReady(void);
extern void *amTask_Create();
extern void Help_Load();
extern void VsCharasel_Load(void);
extern void amAdx_Pause();
extern void func_002695B0(void);
void func_00269820(s64 arg0, s8 arg1) {
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    temp_s1 = D_004707DC;
    Scene_SetReady();
    Help_Load();
    func_0028DF20();
    func_0028DFC0(6, 0, 0, 0, 0x1F);
    if ((s64)(arg0 << 0x30) >> 0x30 == 1) {
        amAdx_SetVolume(0, D_004E0610);
        amAdx_PlayAfs(0, 0x210A5, 0);
        amAdx_Pause(0, 0);
        VsCharasel_Load();
        VsCharasel_Start(-1, -1);
        VsMode_Exit();
        return;
    }
    *(u8 **)((u8 *)temp_s1 + 0x10) = temp_v0;
    temp_v0 = amTask_Create(&func_002695B0, 0, 0x1001, 8);
    temp_v0_2 = amHeap_Alloc(0x58, 0, D_0046B430, 0xC2);
    *(u8 **)((u8 *)temp_v0 + 0x30) = temp_v0_2;
    memset(temp_v0_2, 0, 0x58);
    *(s32 *)((u8 *)temp_v0_2 + 0x44) = func_002C0630(0x107FE, 0x2000, 0);
    *(s8 *)((u8 *)temp_v0_2 + 0x53) = arg1;
}
