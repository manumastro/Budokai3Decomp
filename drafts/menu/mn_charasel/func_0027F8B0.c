/* Draft (not built): func_0027F8B0 at 0x0027F8B0, size 0x13C, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027F8B0.s */

s32 PracMode_Start(s32, s32);
s32 func_00269820(s32, s8);
extern f32 gFrameDelta;
extern void func_0022CF70();
void func_0027F8B0(u8 *arg0) {
    f32 temp_f1;
    s8 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x38);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x40);
    temp_s1 = arg0 + 0x30;
    if (!(temp_f1 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s0 + 0x40) = (f32)(temp_f1 - gFrameDelta);
        func_0027EA60(temp_s0);
        *(f32 *)((u8 *)*(u8 **)((u8 *)temp_s0 + 0x38) + 0x5C) = (f32)((60.0f - *(f32 *)((u8 *)temp_s0 + 0x40)) / 60.0f);
        func_0022CF70(*(u8 **)((u8 *)temp_s0 + 0x38));
        return;
    }
    if ((s64)(func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 0)) << 0x38) >> 0x38 == 7 && (s64)(func_0027DAB0(*(u8 **)((u8 *)temp_s0 + 4)) << 0x38) >> 0x38 == 7) {
        temp_v1 = *(s8 *)((u8 *)temp_s1 + 4);
        switch (temp_v1) {
            case 0:
                func_00269820(0, *(s8 *)((u8 *)temp_s1 + 5));
                break;

            case 1:
                PracMode_Start(0, 0);
                break;
        }

        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0);
        if (temp_a0 != NULL) {
            func_0027E120(temp_a0);
            *(u8 **)((u8 *)temp_s0 + 0) = NULL;
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 4);
        if (temp_a0_2 != NULL) {
            *(u8 **)((u8 *)temp_s0 + 4) = NULL;
            func_0027E120(temp_a0_2);
        }
        func_002804A0();
    }
}
