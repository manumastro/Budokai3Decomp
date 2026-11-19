/* Draft (not built): func_0028B380 at 0x0028B380, size 0x3A0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 128 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3A8, original 0x3A0
 * Original: asm/nonmatchings/sys/mc_opr/func_0028B380.s */

// src/sys/mc_opr.c func_0028B380 size diff=128/234
extern s32 D_00470894;
extern void *D_0047088C;
extern void *D_004708A0;
void func_0028DDB0(u8 *arg0);
s32 SoundRpc_SetVolume(s32, s32, f32, u16, f32);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 amMc_GetInfo(s32, s32, s32);
s16 func_0012EAE0(s32);
s32 func_001F0280(s8 *);
extern s32 D_0046B9F8;
extern s32 D_00470840;
extern u8 D_00470841;
extern u8 D_00470842;
extern u8 D_00470843;
extern u8 D_00470845;
extern u8 D_00470846;
extern u8 D_00470847;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470864;
extern s32 D_00470868;
extern void *D_00470870;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_004B4B40[];
extern void func_001EF730(char *);
extern void BtbEntry_DecodeColors(char *, void *);
extern void func_001EFDB0(char *, char *);
extern char D_00492FCE[];
extern void func_0028DDA0(void);
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028B270(void);
void func_0028B380(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = *D_00492FCE | D_00493086;
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        D_00470858 = 2;
        func_00288870(-1);
        var_v1 = (int *)(&func_0028DDB0);
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)D_0047088C + 0x1C) = var_v1;
        D_00470894 = (s32) func_0028DDA0;
        return;
    }
    if (temp_a0 & 0x4000) {
        if (D_00470854 != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            D_00470858 = 2;
            func_00288870(-1);
            var_v1_2 = (int *)(&func_0028DDB0);
            if (&func_0028DDB0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)D_0047088C + 0x1C) = var_v1_2;
            D_00470894 = (s32) func_0028DDA0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            D_004708A0 = amHeap_Alloc(0xD680, 0, &D_0046B9F8, 0x8B8);
            func_001F0280((s8 *)(D_004B4B40));
            func_001EFDB0((char *)((s8 *) D_004708A0), (char *)(D_004B4B40));
            *(u8 *)((u8 *)D_004708A0 + 0x30) = (u8) D_00470847;
            *(u8 *)((u8 *)D_004708A0 + 0x31) = (u8) D_00470846;
            *(u8 *)((u8 *)D_004708A0 + 0x32) = (u8) D_00470845;
            *(u8 *)((u8 *)D_004708A0 + 0x33) = (u8) D_00470843;
            *(u8 *)((u8 *)D_004708A0 + 0x34) = (u8) D_00470842;
            *(u8 *)((u8 *)D_004708A0 + 0x35) = (u8) D_00470841;
            *(s16 *)((u8 *)D_004708A0 + 0x36) = func_0012EAE0(D_00470841 & 0x1F);
            *(s32 *)((u8 *)D_004708A0 + 0x38) = func_0012EAE0(D_00470842 & 0x1F);
            *(s32 *)((u8 *)D_004708A0 + 0x3C) = func_0012EAE0(D_00470845 & 0x1F);
            *(s32 *)((u8 *)D_004708A0 + 0x50) = 0;
            BtbEntry_DecodeColors((char *)((s8 *) D_004708A0), (void *)(&D_00470840));
            func_001EF730((char *)((s8 *) D_004708A0));
            D_00470870 = D_004708A0;
            if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                func_00288870(4);
                var_v1_3 = (int *)(&func_0028DDF0);
                if (&func_0028DDF0 == NULL) {
                    var_v1_3 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
                D_00470858 = 3;
                D_00470894 = (s32) &func_0028C580;
                D_00470854 = 1;
            } else {
                D_00470864 = 0;
                D_00470868 = 0;
                func_00288870(0x20);
                var_v1_4 = (int *)(&func_0028B270);
                if (&func_0028B270 == NULL) {
                    var_v1_4 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
            }
        }
        return;
    }
    temp_a2 = D_00492FD2 | D_00493032;
    temp_a0_2 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
    if ((temp_a0_2 != 0x40) && (temp_a0_2 != 0x10)) {
        return;
    }
    SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(0, 0, 2, 0);
    }
    D_00470854 ^= 1;
}
