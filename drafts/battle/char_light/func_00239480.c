/* Draft (not built): func_00239480 at 0x00239480, size 0x298, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 156: *)temp_s0 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s1 + 4) * 3) + 0x3B) * 4)), *(u8 **)((u8 *)temp_s1 + 0x18), *(
 * Original: asm/nonmatchings/battle/char_light/func_00239480.s */

// src/battle/char_light.c func_00239480 cerr diff=-1/0
extern void func_00239720(void);
void func_00239480(u8 *arg0) {
    s32 *var_v0;
    s32 temp_v1;
    void (*var_v0_2)(s8 *);
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v1_2;
    u8 *temp_v1_3;

    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_s1 = arg0 + 0x30;
        temp_v0 = (u8 *)func_0021C400(func_0021C3D0(*(s32 *)((u8 *)arg0 + 0x34)));
        *(f32 *)((u8 *)arg0 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) + D_00470710);
        if (*(s32 *)((u8 *)temp_v0 + 0) & 1) {
            temp_v1 = *(s32 *)((u8 *)temp_v0 + 0x14);
            if ((temp_v1 >= 2) && (temp_v1 != *(s32 *)((u8 *)temp_s1 + 8))) {
                var_v0 = (s32 *)(&func_00239720);
                if (&func_00239720 == NULL) {
                    var_v0 = NULL;
                }
                *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
                var_v0_2 = func_00239200;
                if (func_00239200 == NULL) {
                    var_v0_2 = NULL;
                }
                *(void (**)(s8 *))((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1C)) + 0x1C) = var_v0_2;
                *(f32 *)((u8 *)arg0 + 0x30) = 0.0f;
                temp_s0 = (u8 *)(gBtlSys);
                temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xE84);
                D_00470704 = (s32)(temp_a0);
                D_0047070C = 0x04010000;
                D_00470708 = 0;
                amModel_SetCurrent((s32)(temp_a0), 0x04010000);
                D_00470238 = 0;
                func_00228430(0);
                func_002284D0(0);
                func_00238790(temp_s1 + 0xC, *(s32 *)((u8 *)temp_s1 + 4), *(s32 *)((u8 *)temp_s1 + 8), 1, *(f32 *)((u8 *)arg0 + 0x30));
                if (*(s32 *)((u8 *)temp_s1 + 4) & 1) {
                    func_00228410();
                }
                temp_v1_2 = *(u8 **)((u8 *)temp_s1 + 0x18);
                if (temp_v1_2 != NULL) {
                    *(s32 *)((u8 *)temp_v1_2 + 4) = (s32) (*(s32 *)((u8 *)temp_v1_2 + 4) ^ 1);
                    func_00228430(0);
                    func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s1 + 4) * 3) + 0x3B) * 4)), *(u8 **)((u8 *)temp_s1 + 0x18), *(f32 *)((u8 *)arg0 + 0x30));
                    func_00228410();
                }
                if (!(*(s32 *)((u8 *)temp_s1 + 4) & 1)) {
                    func_00228410();
                }
                return;
            }
        }
        temp_s0_2 = (u8 *)(gBtlSys);
        temp_a0_2 = *(u8 **)((u8 *)temp_s0_2 + 0xE84);
        D_00470704 = (s32)(temp_a0_2);
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x04010000);
        D_00470238 = 0;
        func_00228430(0);
        func_002284D0(0);
        func_00238790(temp_s1 + 0xC, *(s32 *)((u8 *)temp_s1 + 4), *(s32 *)((u8 *)temp_s1 + 8), 2, *(f32 *)((u8 *)arg0 + 0x30));
        if (*(s32 *)((u8 *)temp_s1 + 4) & 1) {
            func_00228410();
        }
        temp_v1_3 = *(u8 **)((u8 *)temp_s1 + 0x18);
        if (temp_v1_3 != NULL) {
            *(s32 *)((u8 *)temp_v1_3 + 4) = (s32) (*(s32 *)((u8 *)temp_v1_3 + 4) ^ 1);
            func_00228430(0);
            func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0xE88)) + 0x1C) + (((*(s32 *)((u8 *)temp_s1 + 4) * 3) + 0x3C) * 4)), *(u8 **)((u8 *)temp_s1 + 0x18), *(f32 *)((u8 *)arg0 + 0x30));
            func_00228410();
        }
        if (!(*(s32 *)((u8 *)temp_s1 + 4) & 1)) {
            func_00228410();
        }
        if (!(*(f32 *)((u8 *)arg0 + 0x30) < 7.0f)) {
            amTask_Kill(arg0);
        }
    }
}
