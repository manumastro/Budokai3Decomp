/* Draft (not built): func_00310080 at 0x00310080, size 0x150, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x16C, original 0x150
 * Original: asm/nonmatchings/story/str_dataerase/func_00310080.s */

// src/story/str_dataerase.c func_00310080 size diff=44/91
s32 SoundRpc_SetVolume(s32, s32, f32);
extern f32 D_004E0614;
extern void amFile_Load(void *);
extern void SoundRpc_Send3();
extern void func_0022E0B0(void *);
void func_00310080(u8 *arg0) {
    s32 *var_v1;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;

    temp_s0 = (u8 *)(D_0047099C);
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    if (*(u8 **)((u8 *)temp_s0 + 0xC) == NULL) {
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 4) == 3) {
            *(s32 *)((u8 *)temp_s0 + 8) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54);
            *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x54) = 0;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 0), 0);
            *(s32 *)((u8 *)temp_s0 + 0) = 0;
            *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54);
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0x54) = NULL;
            amCdFs_Close(*(u8 **)((u8 *)temp_s0 + 4), 0);
            *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            func_0022E0B0(*(u8 **)((u8 *)temp_s0 + 8));
            amFile_Load(*(u8 **)((u8 *)temp_s0 + 0xC));
            goto block_3;
        }
    } else {
block_3:
        temp_s0_2 = (u8 *)(D_0047099C);
        temp_a0 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x6000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x6000);
        D_00470238 = 0;
        *(s32 *)((u8 *)temp_s1 + 0) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x14), 0);
        *(s8 *)((u8 *)temp_s1 + 0xE) = 2;
        *(s32 *)((u8 *)temp_s1 + 0x10) = 0x41F00000;
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
        var_v1 = (s32 *)(&func_0030FF30);
        if (&func_0030FF30 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
