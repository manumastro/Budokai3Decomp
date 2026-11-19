/* Draft (not built): func_0027FEB0 at 0x0027FEB0, size 0x238, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x250, original 0x238
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027FEB0.s */

// src/menu/mn_charasel.c func_0027FEB0 size diff=68/148
s32 SoundRpc_SetVolume(s32, s32, f32);
extern s32 D_00470838;
extern s64 D_004B4B48;
extern f32 D_004E0614;
extern s32 D_0058F680;
extern f32 gFrameDelta;
extern void func_0027FE10(void);
void func_0027FEB0(u8 *arg0) {
    s32 *var_a1;
    s32 *var_v1;
    f32 temp_f0;
    f32 temp_f2;
    s32 *var_a2;
    s32 *var_s0;
    s32 *var_s1;
    s32 *var_s3;
    s32 var_a3;
    s32 var_s4;
    s8 temp_v1;
    u8 *var_s2;

    var_s2 = arg0;
    var_s1 = (int *)(var_s2 + 0x30);
    var_s0 = *(s32 **)((u8 *)arg0 + 0x38);
    func_0027EA60(var_s0);
    var_a3 = 0;
    var_a2 = &D_00470838;
    var_a1 = &D_0058F680;
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            D_004B4B48 |= *(s64 *)((u8 *)var_a1 + 0x90);
        }
        var_a3 += 1;
        var_a1 = var_a1 + 0x7FFF + 0x5681;
        var_a2 += 4;
    } while (var_a3 < 2);
    var_s4 = 0;
    var_s3 = var_s0;
    do {
        func_0027D330(*var_s3, D_004B4B48);
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
    temp_f2 = *(f32 *)((u8 *)var_s0 + 0x44);
    if (temp_f2 < 40.0f) {
        temp_f0 = temp_f2 + gFrameDelta;
        *(f32 *)((u8 *)var_s0 + 0x44) = temp_f0;
        if (!(temp_f0 < 40.0f)) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xA, 0);
            }
        }
    }
    var_s4 = 0;
    var_s3 = var_s0;
loop_11:
    if (((s64) (func_0027DAB0((unsigned char *)(*var_s3)) << 0x38) >> 0x38) >= 4) {
        var_s4 += 1;
        var_s3 += 4;
        if (var_s4 >= 2) {
            temp_v1 = *(s8 *)((u8 *)var_s1 + 5);
            switch (temp_v1) {                      /* irregular */
            case 0:
                func_0027F680(var_s2);
                break;
            case 1:
                func_0027F4A0(var_s2);
                break;
            case 2:
                func_0027F290(var_s2);
                break;
            case 3:
                func_0027F070(var_s2);
                break;
            }
            var_s3 = NULL;
            var_s1 = var_s0;
loop_23:
            if (((s64) (func_0027DAA0((unsigned char *)(*var_s1)) << 0x38) >> 0x38) == 1) {
                var_s3 += 1;
                var_s1 += 4;
                if ((s32) var_s3 >= 2) {
                    *(s32 *)((u8 *)var_s0 + 0x40) = 0x41F00000;
                    var_v1 = (int *)(&func_0027FE10);
                    *(s8 *)((u8 *)var_s0 + 0x3D) = 3;
                    if (&func_0027FE10 == NULL) {
                        var_v1 = NULL;
                    }
                    *(s32 **)((u8 *)var_s2 + 0x1C) = var_v1;
                } else {
                    goto loop_23;
                }
            }
        } else {
            goto loop_11;
        }
    }
}
