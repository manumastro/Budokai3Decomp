/* Draft (not built): func_001B10D0 at 0x001B10D0, size 0x320, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 108 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x304, original 0x320
 * Original: asm/nonmatchings/battle/btl_main/func_001B10D0.s */

// src/battle/btl_main.c func_001B10D0 size diff=108/193
extern s32 func_0012EAE0(s32);
s64 func_00218990(s8);
s64 func_00218A60(s8, s8);
s64 func_00218B60(s16, s32);
s32 memcpy(void *, s8 *, s32);
extern s32 D_00431250;
extern s16 D_00447490;
extern s8 D_00447492;
extern s8 D_004B4B57;
extern s8 D_004B4B58;
extern void Scene_SetReady(void);
void func_001B10D0(s8 *arg0, s8 arg1) {
    s32 sp60;
    s32 *var_a2;
    s128 temp_v0;
    s16 temp_v1_2;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s4;
    s8 *var_s3;
    s8 temp_v1;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s1_3;
    u8 *var_s2;

    if (gBattle == NULL) {
        gBattle = (struct BattleWork *)(D_00495B70);
    }
    temp_s0 = (unsigned char *)(gBattle);
    memset(temp_s0, 0, 0x8AC0);
    memcpy(temp_s0 + 0x690, arg0, 0x180);
    var_s4 = 0;
    *(s8 *)((u8 *)temp_s0 + 0x8AB6) = arg1;
    var_s3 = D_004B4B40;
    var_s2 = temp_s0;
    var_s1 = temp_s0;
    do {
        memcpy(var_s2 + 0x88B0, var_s3 + 0x2BA88, 8);
        var_s4 += 1;
        temp_v1 = *(s8 *)((u8 *)var_s3 + 0x2BA87);
        var_s2 += 8;
        var_s3 += 0xA;
        *(s16 *)((u8 *)var_s1 + 0x88D0) = (s16) temp_v1;
        var_s1 += 2;
    } while (var_s4 < 4);
    temp_v1_2 = *(s16 *)((u8 *)temp_s0 + 0x7E2);
    switch (temp_v1_2) {                            /* irregular */
    case 2:
        *(s16 *)((u8 *)temp_s0 + 0x7E6) = (s16) ((s64) (func_00218A60(D_004B4B57, D_004B4B58) << 0x38) >> 0x38);
        break;
    case 5:
    case 3:
    case 1:
        *(s16 *)((u8 *)temp_s0 + 0x7E6) = (s16) ((s64) (func_00218B60(*(s16 *)((u8 *)temp_s0 + 0x7E4), 0) << 0x38) >> 0x38);
        break;
    case 4:
        *(s16 *)((u8 *)temp_s0 + 0x7E6) = (s16) ((s64) (func_00218990(*(s8 *)((u8 *)temp_s0 + 0x8AB6)) << 0x38) >> 0x38);
        break;
    }
    temp_v1_3 = *(s32 *)((u8 *)temp_s0 + 0x7EC);
    if (temp_v1_3 > 0) {
        *(s32 *)((u8 *)temp_s0 + 0x7EC) = (s32) (temp_v1_3 * 0x3C);
    }
    if (*(s16 *)((u8 *)temp_s0 + 0x7E2) == 5) {
        func_001ABF10(temp_s0 + 0x690);
    }
    func_001AF100(0);
    var_a1 = &sp60;
    var_a2 = &D_00431250;
    var_a0 = 4;
    do {
        var_a0 -= 1;
        temp_v0 = *(s128 *)((u8 *)var_a2 + 0x10);
        *(s128 *)((u8 *)var_a1 + 0) = (s128) *(s128 *)((u8 *)var_a2 + 0);
        var_a2 += 0x20;
        *(s128 *)((u8 *)var_a1 + 0x10) = temp_v0;
        var_a1 += 0x20;
    } while (var_a0 > 0);
    *(s64 *)((u8 *)var_a1 + 0) = (s64) *(s64 *)((u8 *)var_a2 + 0);
    *(f32 *)((u8 *)var_a1 + 8) = (f32) *(f32 *)((u8 *)var_a2 + 8);
    var_s2_2 = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0x88D8) > 0) {
        var_s1_2 = temp_s0;
        do {
            temp_s3 = var_s1_2 + 0x6A0;
            if (*(s16 *)((u8 *)var_s1_2 + 0x6B0) < 0) {
                *(s16 *)((u8 *)temp_s3 + 0x10) = (s16) (func_0012EAE0(0x20) % 105U);
            }
            var_a1_2 = &sp60;
            if (sp60 != -1) {
loop_28:
                if (*(s16 *)((u8 *)temp_s3 + 0x10) == *var_a1_2) {
                    *(s16 *)((u8 *)temp_s3 + 0x10) = 0;
                    *(s16 *)((u8 *)temp_s3 + 0x34) = (s16) D_00447490;
                    memcpy(temp_s3 + 0x36, &D_00447492, 0xE);
                } else {
                    var_a1_2 += 4;
                    if (*var_a1_2 != -1) {
                        goto loop_28;
                    }
                }
            }
            var_s2_2 += 1;
            var_s1_2 += 0x50;
        } while (var_s2_2 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
    }
    var_s2_3 = 0;
    if (*(s32 *)((u8 *)temp_s0 + 0x88D8) > 0) {
        var_s1_3 = temp_s0;
        do {
            func_001C9440(var_s1_3 + 0x6A0);
            var_s2_3 += 1;
            var_s1_3 += 0x50;
        } while (var_s2_3 < *(s32 *)((u8 *)temp_s0 + 0x88D8));
    }
    Scene_SetReady();
}
