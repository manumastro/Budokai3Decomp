/* Draft (not built): func_002FBAE0 at 0x002FBAE0, size 0x2A4, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x290, original 0x2A4
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FBAE0.s */

// src/unk/unk_2FAFF0.c func_002FBAE0 size diff=90/164
extern s32 D_004DFAE8[];
extern void func_0029DD30(s32, f32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 amAdx_IsStopped(s32);
extern u16 D_00493086;
extern s8 D_004B4B57;
extern s32 D_004B4BE5;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern void Save_Load();
extern void Save_Request();
extern char D_00492FCE[];
void func_002FBAE0(struct Task2FAFF0 *arg0) {
    s32 *var_v1;
    s32 temp_a0;
    s32 var_v0;
    s8 *temp_v1;
    s8 temp_v0;
    u8 *temp_s0;

    *(s32 *)((u8 *)gTourMap + 0x294) = (s32) (*(s32 *)((u8 *)gTourMap + 0x294) + 1);
    if ((*(s32 *)((u8 *)gTourMap + 0x4C) == 0) && (fabsf(gFrameDelta * (f32) (*(s32 *)((u8 *)(gTourMap + 0x28C) + 8) - 0x8C)) == 0.0f)) {
        SoundRpc_SetVolume(1, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(1, 0, 7, 0);
        }
    }
    temp_s0 = (unsigned char *)(arg0 + 0x30);
    if (amAdx_IsStopped(1) & 5) {
        *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
    } else {
        *(s32 *)((u8 *)temp_s0 + 8) = 0;
    }
    func_00208F70((s32)(*(u8 **)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x40)) + 0x38)));
    temp_a0 = *(s32 *)((u8 *)gTourMap + 0x74);
    if (temp_a0 != 0) {
        func_0029DD30(temp_a0, 0x3F800000);
    }
    if (!((*D_00492FCE | D_00493086) & 0x4008)) {
        if (!(((f32) *(s32 *)((u8 *)temp_s0 + 8) * gFrameDelta) <= 120.0f)) {
            goto block_12;
        }
    } else {
block_12:
        var_v0 = 0;
        if (*(s32 *)((u8 *)gTourMap + 0x4C) == 0) {

        } else {
            var_v0 = 0;
            if (D_005CA030[0] >= 2) {

            } else {
                D_004DFAE8[0] += *(s32 *)((u8 *)gTourMap + 0x58);
                if ((u32) D_004DFAE8 >= 0xF1B30U) {
                    D_004DFAE8[0] = 0xF1B30;
                }
                if (*(s32 *)((u8 *)gTourMap + 0x4C) == 2) {
                    temp_v1 = (signed char *)(&D_004B4BE5 + D_004B4B57);
                    temp_v0 = *temp_v1 + 1;
                    *temp_v1 = temp_v0;
                    if (((s64) ((s64) temp_v0 << 0x38) >> 0x38) >= 0x65) {
                        *(&D_004B4BE5 + D_004B4B57) = 0x64;
                    }
                }
                var_v0 = 1;
            }
        }
        if (var_v0 != 0) {
            Save_Load(0x3000, 0);
            Save_Request(6, -1, 0);
            var_v1 = (int *)(&TourMap_TaskSaveWait);
            if (&TourMap_TaskSaveWait == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            return;
        }
        Scene_FadeTo(-1, 0);
        if (0 == 0) {

        }
        *(s32 **)((u8 *)arg0 + 0x1C) = NULL;
    }
}
