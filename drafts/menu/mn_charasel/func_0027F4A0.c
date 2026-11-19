/* Draft (not built): func_0027F4A0 at 0x0027F4A0, size 0x1D8, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1FC, original 0x1D8
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027F4A0.s */

// src/menu/mn_charasel.c func_0027F4A0 size diff=45/127
extern void SoundRpc_Send3();
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00492FC0;
extern f32 D_004E0614;
extern void PracMode_Load(void);
extern void VsMode_Load(void);
extern void func_0027F8B0(void);
void func_0027F4A0(u8 *arg0) {
    s32 *var_s1;
    s32 *var_v1;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s64 temp_a0_2;
    s8 temp_a0_3;
    u8 **temp_s0;
    u8 **var_s0;
    u8 **var_s5;
    u8 *temp_a0;
    u8 *temp_s4;

    var_s3 = 0;
    var_s2 = 0;
    var_s5 = *(u8 ***)((u8 *)arg0 + 0x38);
    var_s1 = &D_00492FC0;
    var_s0 = var_s5;
    do {
        if (*(u16 *)((u8 *)var_s1 + 0xE) & 0x1000) {
            temp_a0 = *var_s0;
            temp_s4 = *(u8 **)((u8 *)temp_a0 + 0x30);
            temp_a0_2 = (s64) (func_0027DAB0(temp_a0) << 0x38) >> 0x38;
            switch (temp_a0_2) {                    /* switch 1; irregular */
            case 4:                                 /* switch 1 */
                var_s3 = 1;
                break;
            case 5:                                 /* switch 1 */
                if (((s64) (func_0027DAA0(*var_s0) << 0x38) >> 0x38) == 1) {
                    *(u8 *)((u8 *)temp_s4 + 6) = (u8) (*(u8 *)((u8 *)temp_s4 + 6) & 0xF7);
                    func_0027DAC0(*var_s0, 4);
                }
                break;
            }
        }
        var_s2 += 1;
        var_s1 += 0xB8;
        var_s0 += 4;
    } while (var_s2 < 2);
    if (var_s3 != 0) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        var_s0_2 = 0;
        do {
            func_0027DB20(*var_s5);
            var_s0_2 += 1;
            var_s5 += 4;
        } while (var_s0_2 < 2);
        temp_s0 = *(u8 ***)((u8 *)arg0 + 0x38);
        func_0027E9C0(temp_s0);
        *(s32 *)((u8 *)temp_s0 + 0x40) = 0x42700000;
        temp_a0_3 = *(s8 *)((u8 *)(arg0 + 0x30) + 4);
        switch (temp_a0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            VsMode_Load();
            break;
        case 1:                                     /* switch 2 */
            PracMode_Load();
            break;
        }
        var_v1 = (int *)(&func_0027F8B0);
        if (&func_0027F8B0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
