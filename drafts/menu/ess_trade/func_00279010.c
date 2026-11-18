/* Draft (not built): func_00279010 at 0x00279010, size 0x3A8, segment menu/ess_trade (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3C8, original 0x3A8
 * Original: asm/nonmatchings/menu/ess_trade/func_00279010.s */

// src/menu/ess_trade.c func_00279010 size diff=111/242
extern void amAdx_Pause(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32, s32, f32);
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern void SoundRpc_Send3();
extern char D_00492FCE[];
void func_00279010(u8 *arg0) {
    s32 *var_v0;
    s32 *var_v0_2;
    s32 temp_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s0;
    u8 *var_s1;

    var_s1 = arg0;
    *(s32 *)((u8 *)gEssTrade + 0xA0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xA0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x100) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x100) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x130) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x130) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x190) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x190) + 1);
    *(s32 *)((u8 *)gEssTrade + 0xD0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0xD0) + 1);
    func_00277310();
    *(s32 *)((u8 *)gEssTrade + 0x1C0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x1C0) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x220) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x220) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x250) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x250) + 1);
    *(s32 *)((u8 *)gEssTrade + 0x1F0) = (s32) (*(s32 *)((u8 *)gEssTrade + 0x1F0) + 1);
    func_00277010();
    var_s0 = var_s1 + 0x30;
    var_s2 = *D_00492FCE | D_00493086;
    var_s3 = D_00492FD2 | D_00493032 | (D_0049308A | D_004930EA);
    if (var_s2 & 0x1000) {
        var_v0 = (s32 *)(&func_00278D40);
        *(s32 *)((u8 *)gEssTrade + 0x1B8) = 6;
        *(s32 *)((u8 *)gEssTrade + 0x1C8) = 0x16;
        *(s32 *)((u8 *)gEssTrade + 0x1CC) = 0x15;
        *(s32 *)((u8 *)gEssTrade + 0x1C0) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x218) = 0x18;
        *(s32 *)((u8 *)gEssTrade + 0x220) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x248) = 0x1B;
        *(s32 *)((u8 *)gEssTrade + 0x250) = 0;
        *(s32 *)((u8 *)var_s0 + 4) = 0;
        if (&func_00278D40 == NULL) {
            var_v0 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v0;
        SoundRpc_SetVolume(0, 0, 3.1e-44f, 6, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
    }
    if (var_s2 & 0x4000) {
        *(s32 *)((u8 *)gEssTrade + 0x1B8) = 6;
        *(s32 *)((u8 *)gEssTrade + 0x1C8) = 0x16;
        *(s32 *)((u8 *)gEssTrade + 0x1CC) = 0x15;
        *(s32 *)((u8 *)gEssTrade + 0x1C0) = 0;
        if (*(s32 *)((u8 *)var_s0 + 8) != 0) {
            var_s4 = 0x18;
            var_s3 = 0x1B;
            var_s2 = 0;
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
        } else {
            var_s4 = 0x19;
            var_s3 = 0x1B;
            var_s2 = 1;
            SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
        }
        var_v0_2 = (s32 *)(&func_00278D40);
        *(s32 *)((u8 *)gEssTrade + 0x218) = var_s4;
        *(s32 *)((u8 *)gEssTrade + 0x220) = 0;
        *(s32 *)((u8 *)gEssTrade + 0x248) = var_s3;
        *(s32 *)((u8 *)gEssTrade + 0x250) = 0;
        *(s32 *)((u8 *)var_s0 + 4) = var_s2;
        if (&func_00278D40 == NULL) {
            var_v0_2 = NULL;
        }
        *(s32 **)((u8 *)var_s1 + 0x1C) = var_v0_2;
        amAdx_Pause(1, 1);
        return;
    }
    temp_a0 = var_s3 & 0xF0;
    switch (temp_a0) {                              /* irregular */
    case 0x10:
        *(s32 *)((u8 *)var_s0 + 8) = (s32) (*(s32 *)((u8 *)var_s0 + 8) ^ 1);
        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
            return;
        }
        return;
    case 0x40:
        *(s32 *)((u8 *)var_s0 + 8) = (s32) (*(s32 *)((u8 *)var_s0 + 8) ^ 1);
        SoundRpc_SetVolume(0, 0, D_004E0614, 0, 0);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        break;
    }
}
