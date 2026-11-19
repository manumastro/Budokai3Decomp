/* Draft (not built): func_00309250 at 0x00309250, size 0x350, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x384, original 0x350
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309250.s */

// src/menu/mn_ArenaCharasel_pvsp.c func_00309250 size diff=86/225
s32 ArenaList_SetF0(s32, s32);
s32 Scene_FadeTo(s32, s32);
s32 SoundRpc_SetVolume(s32, s32, f32);
s32 func_0022C060(s32 *, s32);
s32 func_0027D330(void *, s64, s32, s32 *);
s32 func_0027DAC0(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470838;
extern s32 D_00492FC0;
extern s64 D_004B4B48;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0022CD00(void *);
extern void SoundRpc_Send3();
extern void ArenaStageSel_Load(void);
extern void Scene_Request();
extern void func_00309050(void);
extern void func_003090F0(void);
void func_00309250(u8 *arg0) {
    s32 *sp8C;
    s32 **var_v1;
    s32 *var_s1;
    s32 *var_v1_2;
    s32 *var_a3;
    s32 temp_a0_4;
    s32 var_a0;
    s32 var_a2;
    s32 var_s3;
    s32 var_s4;
    s32 var_t0;
    s32 var_v0;
    s64 temp_a0_3;
    s64 temp_a0_5;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s5;
    u8 *var_s6;

    var_v0 = 4;
    var_v1 = &sp8C;
    var_s6 = arg0;
    var_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    var_s4 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp8C = *(s32 **)((u8 *)var_s0 + 0x14);
    temp_a0 = *(u8 **)((u8 *)var_s0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    var_s1 = sp8C;
    if (var_s1 != NULL) {
        func_0022C060(var_s1, 0x3F800000);
        func_0022CD00(var_s1);
    }
    var_s1 = &D_00492FC0;
    var_s3 = 0;
    var_s2 = var_s0;
    var_s1 = &D_00492FC0;
    do {
        temp_v0 = *(u8 **)((u8 *)var_s2 + 8);
        var_t0 = 0;
        var_a3 = &D_00470838;
        var_a2 = 0;
        var_s5 = temp_v0 + 0x30;
loop_6:
        if ((*var_a3 & 0x7FFF) == 4) {
            D_004B4B48 |= *(s64 *)((u8 *)(&D_0058F680 + var_a2) + 0x90);
        }
        var_t0 += 1;
        var_a2 = var_a2 + 0x7FFF + 0x5681;
        var_a3 += 4;
        if (var_t0 < 2) {
            goto loop_6;
        }
        func_0027D330(*(u8 **)((u8 *)temp_v0 + 0x30), D_004B4B48, var_a2, var_a3);
        if (*(u16 *)((u8 *)var_s1 + 0xE) & 0x1000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            temp_a0_2 = *(u8 **)((u8 *)temp_v0 + 0x30);
            if (temp_a0_2 != NULL) {
                temp_a0_3 = (s64) (func_0027DAB0(temp_a0_2) << 0x38) >> 0x38;
                switch (temp_a0_3) {                /* switch 1; irregular */
                case 4:                             /* switch 1 */
                    var_s4 = 1;
                    break;
                case 5:                             /* switch 1 */
                    if (((s64) (func_0027DAA0(*(u8 **)((u8 *)temp_v0 + 0x30)) << 0x38) >> 0x38) == 1) {
                        temp_v1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x30)) + 0x30);
                        *(u8 *)((u8 *)temp_v1 + 6) = (u8) (*(u8 *)((u8 *)temp_v1 + 6) & 0xF7);
                        func_0027DAC0(*(u8 **)((u8 *)temp_v0 + 0x30), 4);
                    }
                    break;
                }
            }
            temp_a0_4 = *(s32 *)((u8 *)var_s5 + 4);
            if (temp_a0_4 != 0) {
                temp_a0_5 = (s64) (ArenaList_GetF2((void *)(temp_a0_4)) << 0x30) >> 0x30;
                switch (temp_a0_5) {                /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    ArenaList_SetF0(*(s32 *)((u8 *)var_s5 + 4), 4);
                    break;
                case -1:                            /* switch 2 */
                    var_s4 = 1;
                    break;
                }
            }
        }
        var_s3 += 1;
        var_s2 += 4;
        var_s1 += 0xB8;
    } while (var_s3 < 2);
    var_s2 = NULL;
    if (var_s4 != 0) {
        do {
            temp_v0_2 = *(u8 **)((u8 *)var_s0 + 8);
            temp_a0_6 = *(u8 **)((u8 *)temp_v0_2 + 0x30);
            var_s1 = (int *)(temp_v0_2 + 0x30);
            if (temp_a0_6 != NULL) {
                func_0027DB20(temp_a0_6);
            }
            temp_a0_7 = *(u8 **)((u8 *)var_s1 + 4);
            if (temp_a0_7 != NULL) {
                func_0030D300(temp_a0_7);
            }
            var_s2 += 1;
            var_s0 += 4;
        } while ((s32) var_s2 < 2);
        Scene_Request(0x17, 1);
        Scene_FadeTo(0xA, 0);
        var_v1_2 = (int *)(&func_00309050);
        if (&func_00309050 == NULL) {
            var_v1_2 = NULL;
        }
        goto block_43;
    }
    var_a0 = 0;
loop_39:
    if (*(u8 *)((u8 *)(var_s0 + var_a0) + 0x11) != 0) {
        var_a0 += 1;
        if (var_a0 >= 2) {
            ArenaStageSel_Load();
            var_v1_2 = (int *)(&func_003090F0);
            if (&func_003090F0 == NULL) {
                var_v1_2 = NULL;
            }
block_43:
            *(s32 **)((u8 *)var_s6 + 0x1C) = var_v1_2;
        } else {
            goto loop_39;
        }
    }
}
