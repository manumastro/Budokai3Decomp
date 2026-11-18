/* Draft (not built): func_002F4780 at 0x002F4780, size 0x100, segment menu/mn_ipsyswnd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 110: ((u8 *)temp_s2 + 0xC)) + 0x1C) + ((*(s16 *)((u8 *)temp_s0 + 0x10) + 0x40) * 4)), 0);
 * Original: asm/nonmatchings/menu/mn_ipsyswnd/func_002F4780.s */

// src/menu/mn_ipsyswnd.c func_002F4780 cerr diff=-1/0
extern void *gInputName;
extern void func_0022D0E0(void *, s32);
extern void amModel_SetCurrent(s32, s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
s32 func_0022D670(s32, s32);
extern void func_002F44E0(void);
void func_002F4780(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f1;
    s16 temp_a0;
    s32 temp_a0_3;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    func_002F4330(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x14) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x14) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s16 *)((u8 *)temp_s0 + 0xE) = 2;
        temp_a0 = *(s16 *)((u8 *)temp_s0 + 0xC);
        temp_s2 = gInputName;
        if ((temp_a0 != 6) && (temp_a0 != 4) && (temp_a0 != 0)) {

        } else {
            temp_a0_2 = *(u8 **)((u8 *)temp_s2 + 0x10);
            D_00470704 = (s32)(temp_a0_2);
            D_0047070C = 0x5000;
            D_00470708 = 0;
            amModel_SetCurrent((s32)(temp_a0_2), 0x5000);
            D_00470238 = 0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 8);
            if (temp_a0_3 != 0) {
                func_0022D0E0((void *)(temp_a0_3), 1);
            }
            *(s32 *)((u8 *)temp_s0 + 8) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x1C) + ((*(s16 *)((u8 *)temp_s0 + 0x10) + 0x40) * 4)), 0);
        }
        var_v1 = (s32 *)(&func_002F44E0);
        if (&func_002F44E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}
