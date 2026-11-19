/* Draft (not built): func_00239920 at 0x00239920, size 0x394, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 98 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3CC, original 0x394
 * Original: asm/nonmatchings/battle/char_light/func_00239920.s */

// src/battle/char_light.c func_00239920 size diff=98/243
void func_00239920(u8 *arg0) {
    s32 var_v1;
    void (*var_v0)();
    void (*var_v0_2)(s8 *);
    void (*var_v0_3)();
    void (*var_v0_4)(s8 *);
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;

    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_s0 = arg0 + 0x30;
        temp_v0 = (unsigned char *)(func_0021C400(func_0021C3D0(*(s32 *)((u8 *)arg0 + 0x34))));
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) + D_00470710);
        var_v1 = 0x3E7;
        if (*(s32 *)((u8 *)temp_v0 + 0xC) >= 0x3E8) {

        } else {
            var_v1 = *(s32 *)((u8 *)temp_v0 + 0x14);
        }
        *(s32 *)((u8 *)temp_s0 + 8) = var_v1;
        if (!(*(f32 *)((u8 *)arg0 + 0x30) < 7.0f)) {
            var_v0 = func_00239720;
            if (func_00239720 == NULL) {
                var_v0 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0;
            var_v0_2 = func_00239200;
            if (func_00239200 == NULL) {
                var_v0_2 = NULL;
            }
            *(void (**)(s8 *))((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x1C) = var_v0_2;
            *(f32 *)((u8 *)arg0 + 0x30) = 0.0f;
            temp_s1 = (unsigned char *)(gBtlSys);
            temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xE84);
            D_00470704 = (int)(temp_a0);
            D_0047070C = 0x04010000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0), 0x04010000);
            D_00470238 = 0;
            func_00228430(0);
            func_002284D0(0);
            func_00238790(temp_s0 + 0xC, *(s32 *)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 8), 1, *(f32 *)((u8 *)arg0 + 0x30));
            if (*(s32 *)((u8 *)temp_s0 + 4) & 1) {
                func_00228410();
            }
            temp_v1 = *(u8 **)((u8 *)temp_s0 + 0x18);
            if (temp_v1 != NULL) {
                *(s32 *)((u8 *)temp_v1 + 4) = (s32) (*(s32 *)((u8 *)temp_v1 + 4) ^ 1);
                func_00228430(0);
                func_0022B900((s32)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s0 + 4) * 3) + 0x3B) * 4))), (s32)(*(u8 **)((u8 *)temp_s0 + 0x18)), *(f32 *)((u8 *)arg0 + 0x30));
                func_00228410();
            }
            if (!(*(s32 *)((u8 *)temp_s0 + 4) & 1)) {
                func_00228410();
            }
            return;
        }
        if (!(*(s32 *)((u8 *)temp_v0 + 0) & 1)) {
            var_v0_3 = func_00239480;
            if (func_00239480 == NULL) {
                var_v0_3 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v0_3;
            var_v0_4 = func_00239110;
            if (func_00239110 == NULL) {
                var_v0_4 = NULL;
            }
            *(void (**)(s8 *))((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1C)) + 0x1C) = var_v0_4;
            *(f32 *)((u8 *)arg0 + 0x30) = 0.0f;
            temp_s1_2 = (unsigned char *)(gBtlSys);
            temp_a0_2 = *(u8 **)((u8 *)temp_s1_2 + 0xE84);
            D_00470704 = (int)(temp_a0_2);
            D_0047070C = 0x04010000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0x04010000);
            D_00470238 = 0;
            func_00228430(0);
            func_002284D0(0);
            func_00238790(temp_s0 + 0xC, *(s32 *)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 8), 2, *(f32 *)((u8 *)arg0 + 0x30));
            if (*(s32 *)((u8 *)temp_s0 + 4) & 1) {
                func_00228410();
            }
            temp_v1_2 = *(u8 **)((u8 *)temp_s0 + 0x18);
            if (temp_v1_2 != NULL) {
                *(s32 *)((u8 *)temp_v1_2 + 4) = (s32) (*(s32 *)((u8 *)temp_v1_2 + 4) ^ 1);
                func_00228430(0);
                func_0022B900((s32)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1_2 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s0 + 4) * 3) + 0x3C) * 4))), (s32)(*(u8 **)((u8 *)temp_s0 + 0x18)), *(f32 *)((u8 *)arg0 + 0x30));
                func_00228410();
            }
            if (!(*(s32 *)((u8 *)temp_s0 + 4) & 1)) {
                func_00228410();
            }
        }
        temp_s1_3 = (unsigned char *)(gBtlSys);
        temp_a0_3 = *(u8 **)((u8 *)temp_s1_3 + 0xE84);
        D_00470704 = (int)(temp_a0_3);
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_3), 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        func_002284D0(0);
        func_00238790(temp_s0 + 0xC, *(s32 *)((u8 *)temp_s0 + 4), *(s32 *)((u8 *)temp_s0 + 8), 0, *(f32 *)((u8 *)arg0 + 0x30));
        if (*(s32 *)((u8 *)temp_s0 + 4) & 1) {
            func_00228410();
        }
        temp_v1_3 = *(u8 **)((u8 *)temp_s0 + 0x18);
        if (temp_v1_3 != NULL) {
            *(s32 *)((u8 *)temp_v1_3 + 4) = (s32) (*(s32 *)((u8 *)temp_v1_3 + 4) ^ 1);
            func_00228430(0);
            func_0022B900((s32)(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1_3 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s0 + 4) * 3) + 0x3A) * 4))), (s32)(*(u8 **)((u8 *)temp_s0 + 0x18)), *(f32 *)((u8 *)arg0 + 0x30));
            func_00228410();
        }
        if (!(*(s32 *)((u8 *)temp_s0 + 4) & 1)) {
            func_00228410();
        }
    }
}
