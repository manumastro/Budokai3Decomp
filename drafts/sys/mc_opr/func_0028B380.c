/* Draft (not built): func_0028B380 at 0x0028B380, size 0x3A0, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK BtbEntry_DecodeColors(void *, M2C_UNK *);   /* extern */
M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32, u16, f32); /* extern */
void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK);            /* extern */
s16 func_0012EAE0(s32);                             /* extern */
M2C_UNK func_001EF730(void *);                      /* extern */
M2C_UNK func_001EFDB0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_001F0280(M2C_UNK *);                   /* extern */
M2C_UNK func_002880B0(s32);                         /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern M2C_UNK D_0046B9F8;
extern M2C_UNK D_00470840;
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
extern void *D_0047088C;
extern M2C_UNK *D_00470894;
extern void *D_004708A0;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern M2C_UNK D_004B4B40;
extern f32 D_004E0614;
extern M2C_UNK func_0028B270;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;
extern M2C_UNK func_0028DDF0;

void func_0028B380(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = D_00492FCE | D_00493086;
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        D_00470858 = 2;
        func_00288870(-1);
        var_v1 = &func_0028DDB0;
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(D_0047088C, M2C_UNK **, 0x1C) = var_v1;
        D_00470894 = &func_0028DDA0;
        return;
    }
    if (temp_a0 & 0x4000) {
        if (D_00470854 != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            D_00470858 = 2;
            func_00288870(-1);
            var_v1_2 = &func_0028DDB0;
            if (&func_0028DDB0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(D_0047088C, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470894 = &func_0028DDA0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            D_004708A0 = amHeap_Alloc(0xD680, 0, &D_0046B9F8, 0x8B8);
            func_001F0280(&D_004B4B40);
            func_001EFDB0(D_004708A0, &D_004B4B40);
            M2C_FIELD(D_004708A0, u8 *, 0x30) = (u8) D_00470847;
            M2C_FIELD(D_004708A0, u8 *, 0x31) = (u8) D_00470846;
            M2C_FIELD(D_004708A0, u8 *, 0x32) = (u8) D_00470845;
            M2C_FIELD(D_004708A0, u8 *, 0x33) = (u8) D_00470843;
            M2C_FIELD(D_004708A0, u8 *, 0x34) = (u8) D_00470842;
            M2C_FIELD(D_004708A0, u8 *, 0x35) = (u8) D_00470841;
            M2C_FIELD(D_004708A0, s16 *, 0x36) = func_0012EAE0(D_00470841 & 0x1F);
            M2C_FIELD(D_004708A0, s32 *, 0x38) = func_0012EAE0(D_00470842 & 0x1F);
            M2C_FIELD(D_004708A0, s32 *, 0x3C) = func_0012EAE0(D_00470845 & 0x1F);
            M2C_FIELD(D_004708A0, s32 *, 0x50) = 0;
            BtbEntry_DecodeColors(D_004708A0, &D_00470840);
            func_001EF730(D_004708A0);
            D_00470870 = D_004708A0;
            if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                func_00288870(4);
                var_v1_3 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1_3 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
                D_00470858 = 3;
                D_00470894 = &func_0028C580;
                D_00470854 = 1;
            } else {
                D_00470864 = 0;
                D_00470868 = 0;
                func_00288870(0x20);
                var_v1_4 = &func_0028B270;
                if (&func_0028B270 == NULL) {
                    var_v1_4 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
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
