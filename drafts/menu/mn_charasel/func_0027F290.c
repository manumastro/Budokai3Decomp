/* Draft (not built): func_0027F290 at 0x0027F290, size 0x208, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x248, original 0x208
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027F290.s */

// src/menu/mn_charasel.c func_0027F290 size diff=96/146
extern void SoundRpc_Send3();
s32 SoundRpc_SetVolume(s32, s32, f32);
extern u16 D_00493086;
extern f32 D_004E0614;
extern void PracMode_Load(void);
extern void VsMode_Load(void);
extern void func_0027F8B0(void);
void func_0027F290(u8 *arg0) {
    s32 *var_v0;
    s32 var_s4;
    s8 temp_v1;
    u16 temp_s0;
    u8 temp_v1_2;
    u8 **temp_s2;
    u8 **temp_s3;
    u8 **var_s3;
    u8 *temp_s1;

    temp_s2 = *(u8 ***)((u8 *)arg0 + 0x38);
    temp_s0 = D_00493086;
    if ((((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s2 + 4)) << 0x38) >> 0x38) == 4) && (temp_s0 & 0xFFFF & 0x1000)) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_s4 = 0;
        var_s3 = temp_s2;
        do {
            func_0027DB20(*var_s3);
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 2);
        temp_s3 = *(u8 ***)((u8 *)arg0 + 0x38);
        func_0027E9C0(temp_s3);
        *(s32 *)((u8 *)temp_s3 + 0x40) = 0x42700000;
        temp_v1 = *(s8 *)((u8 *)(arg0 + 0x30) + 4);
        switch (temp_v1) {                          /* irregular */
        case 0:
            VsMode_Load();
            break;
        case 1:
            PracMode_Load();
            break;
        }
        var_v0 = (int *)(&func_0027F8B0);
        if (&func_0027F8B0 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
    }
    if (((s64) (func_0027DAA0(*(u8 **)((u8 *)temp_s2 + 4)) << 0x38) >> 0x38) == 1) {
        temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0)) + 0x30);
        temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 6);
        if (temp_v1_2 & 8) {
            *(u8 *)((u8 *)temp_s1 + 6) = (u8) (temp_v1_2 & 0xF7);
            func_0027DAC0(*(u8 **)((u8 *)temp_s2 + 0), 4);
        }
        if ((((s64) (func_0027DAB0(*(u8 **)((u8 *)temp_s2 + 0)) << 0x38) >> 0x38) == 4) && (temp_s0 & 0xFFFF & 0x1000)) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            *(u8 *)((u8 *)temp_s1 + 6) = (u8) (*(u8 *)((u8 *)temp_s1 + 6) | 8);
            func_0027DAC0(*(u8 **)((u8 *)temp_s2 + 4), 4);
        }
    }
}
