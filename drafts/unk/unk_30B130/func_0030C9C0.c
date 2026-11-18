/* Draft (not built): func_0030C9C0 at 0x0030C9C0, size 0x3C0, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 157 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x37C, original 0x3C0
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C9C0.s */

// src/unk/unk_30B130.c func_0030C9C0 size diff=157/223
s32 Help_Open(s32, s32, u16, u16);
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00458F50;
extern s32 D_00458F80;
extern s32 D_00458FB0;
extern s32 D_00458FE0;
extern s32 D_00459010;
extern s32 D_00459040;
extern s32 D_00459070;
extern s32 D_0046B560;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void *gArenaRegCharList;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
extern char D_005C4140[];
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0030C8F0(void);
void func_0030C9C0(u8 *arg0, u16 arg2, u16 arg3) {
    s32 *var_v0_3;
    f32 var_f0;
    s16 temp_a3;
    s32 temp_a0_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;
    s32 var_v1;
    s64 var_a1_2;
    s8 temp_a0;
    s8 temp_t0;
    u16 temp_a3_2;
    u16 var_a2;
    u16 var_a3;
    u8 *temp_a0_2;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_v0_2;
    u8 *var_v1_2;

    var_a2 = arg2;
    var_a3 = arg3;
    var_v1 = 0;
    var_v0 = 0;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_t0 = *(s8 *)((u8 *)temp_s0 + 0xA);
    var_a1 = 0;
    if (temp_t0 & 1) {
        var_a3 = *D_00492FCE;
        var_a1 = 1 & 0xFF;
        var_a2 = D_00492FD2;
        var_v0 = (0 | var_a3) & 0xFFFF;
        var_v1 = (0 | ((var_a2 | D_00493032) & 0xFFFF)) & 0xFFFF;
    }
    if (temp_t0 & 4) {
        var_a3 = D_00493086;
        var_a1 = (var_a1 | 2) & 0xFF;
        var_a2 = D_0049308A;
        var_v0 = (var_v0 | var_a3) & 0xFFFF;
        var_v1 = (var_v1 | ((var_a2 | D_004930EA) & 0xFFFF)) & 0xFFFF;
    }
    if (var_v0 & 0xFFFF & 1) {
        Help_Open(0x40008 | (0x02800040 << 0x20), var_a1, var_a2, var_a3);
        var_v1 = 0;
        var_v0 = 0;
    }
    if (var_v0 & 0xFFFF & 0x4000) {
        if (*(s8 *)((u8 *)temp_s0 + 0xD) != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            temp_a0 = *(s8 *)((u8 *)temp_s0 + 0xB);
            temp_v0 = (u8 *)(D_005C4140 + (temp_a0 * 0x50));
            temp_a2 = temp_v0 + 0x5C50;
            if (temp_a0 != 0) {
                var_f0 = 15.0f;
            } else {
                var_f0 = -15.0f;
            }
            *(f32 *)((u8 *)temp_v0 + 0x5C50) = var_f0;
            *(s32 *)((u8 *)temp_a2 + 4) = 0;
            *(s32 *)((u8 *)temp_a2 + 8) = 0;
            *(s32 *)((u8 *)temp_a2 + 0xC) = 0x3F800000;
            var_a1_2 = 0;
            var_a0 = 0;
            var_v1_2 = temp_s0;
            var_v0_2 = temp_a2;
            *(s16 *)((u8 *)temp_a2 + 0x10) = (s16) *(&D_0046B560 + (*(s16 *)((u8 *)temp_s0 + 0x2C) * 2));
            *(s16 *)((u8 *)temp_a2 + 0x12) = 0;
            *(s16 *)((u8 *)temp_a2 + 0x14) = 0;
            *(s16 *)((u8 *)temp_a2 + 0x16) = 0;
            *(s16 *)((u8 *)temp_a2 + 0x18) = 8;
            *(s16 *)((u8 *)temp_a2 + 0x1A) = (s16) *(s8 *)((u8 *)temp_s0 + 0xC);
            *(u16 *)((u8 *)temp_a2 + 0x1C) = (u16) *(&D_00459070 + (*(s8 *)((u8 *)temp_s0 + 0x35) * 2));
            *(s16 *)((u8 *)temp_a2 + 0x1E) = 1;
            *(s16 *)((u8 *)temp_a2 + 0x20) = 0;
            *(s32 *)((u8 *)temp_a2 + 0x24) = (s32) (*(&D_00458F50 + (*(s8 *)((u8 *)temp_s0 + 0x2F) * 2)) + 0xBB8);
            *(s32 *)((u8 *)temp_a2 + 0x28) = (s32) (*(&D_00458F50 + (*(s8 *)((u8 *)temp_s0 + 0x2F) * 2)) + 0xBB8);
            *(s32 *)((u8 *)temp_a2 + 0x2C) = -1;
            *(s32 *)((u8 *)temp_a2 + 0x30) = 0x1B58;
            do {
                temp_a3 = *(s16 *)((u8 *)var_v1_2 + 0x36);
                *(s16 *)((u8 *)var_v0_2 + 0x36) = temp_a3;
                if (temp_a3 != 0) {
                    var_a1_2 = (s64) ((var_a1_2 + 1) << 0x30) >> 0x30;
                }
                var_a0 += 1;
                var_v1_2 += 2;
                var_v0_2 += 2;
            } while (var_a0 < 7);
            *(s16 *)((u8 *)temp_a2 + 0x34) = (s16) var_a1_2;
            *(u16 *)((u8 *)temp_a2 + 0x44) = (u16) *(&D_00458FB0 + (*(s8 *)((u8 *)temp_s0 + 0x31) * 2));
            *(u16 *)((u8 *)temp_a2 + 0x46) = (u16) *(&D_00458FE0 + (*(s8 *)((u8 *)temp_s0 + 0x32) * 2));
            *(u16 *)((u8 *)temp_a2 + 0x48) = (u16) *(&D_00459010 + (*(s8 *)((u8 *)temp_s0 + 0x33) * 2));
            *(u16 *)((u8 *)temp_a2 + 0x4A) = (u16) *(&D_00458F80 + (*(s8 *)((u8 *)temp_s0 + 0x30) * 2));
            temp_a3_2 = *(&D_00459040 + (*(s8 *)((u8 *)temp_s0 + 0x34) * 2));
            *(u16 *)((u8 *)temp_a2 + 0x4C) = temp_a3_2;
            temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
            *(s16 *)((u8 *)temp_s2 + 0) = 5;
            *(s16 *)((u8 *)temp_s2 + 2) = 1;
            *(s16 *)((u8 *)temp_s2 + 4) = 3;
            temp_a0_2 = *(u8 **)((u8 *)gArenaRegCharList + 0xC);
            D_00470704 = temp_a0_2;
            D_0047070C = 0x4000;
            D_00470708 = 0;
            amModel_SetCurrent(temp_a0_2, 0x4000, temp_a2, temp_a3_2);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s2 + 0x64);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
                *(s32 *)((u8 *)temp_s2 + 0x64) = 0;
            }
            var_v0_3 = (s32 *)(&func_0030C8F0);
            if (&func_0030C8F0 == NULL) {
                var_v0_3 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0_3;
        }
    } else if (var_v1 & 0xFFFF & 0xF0) {
        func_0030C400(temp_s0);
    }
    func_0030BFC0((struct Part30C *)(temp_s0));
    func_0030B2E0((struct Part30C *)(temp_s0));
    func_0030C6F0(temp_s0);
}
