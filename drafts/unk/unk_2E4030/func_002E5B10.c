/* Draft (not built): func_002E5B10 at 0x002E5B10, size 0x104, segment unk/unk_2E4030 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); pointer/array required @ 546: )temp_s0 + 0)) + 0x1C) + (*(&D_0046F4B8 + *(s16 *)((u8 *)temp_s0 + 0xF0)) * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_2E4030/func_002E5B10.s */

// src/unk/unk_2E4030.c func_002E5B10 cerr diff=-1/0
void func_002E5B10(u8 *arg0) {
    f32 temp_f1;
    s32 temp_a0_2;
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(s32 *)((u8 *)temp_s0 + 0xF8) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xF8) + *(s32 *)((u8 *)temp_s0 + 0x100));
    *(s32 *)((u8 *)temp_s0 + 0xF8) = (s32) (u16) *(s32 *)((u8 *)temp_s0 + 0xF8);
    func_002E4D60((struct Sub57 *)(temp_s0));
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x108) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x108) = temp_f1;
    if (temp_f1 <= 0.0f) {
        *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x114)) + 0x34) = (s16) *(s16 *)((u8 *)temp_s0 + 0xF0);
        *(s8 *)((u8 *)temp_s0 + 0xCE) = 0;
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 4);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x7000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x7000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x20);
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 0);
        }
        *(s32 *)((u8 *)temp_s0 + 0x20) = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0)) + 0x1C) + (*(&D_0046F4B8 + *(s16 *)((u8 *)temp_s0 + 0xF0)) * 4)), 0);
        *(s8 *)((u8 *)temp_s0 + 0xF4) = 2;
        var_v1 = func_002E5C20;
        *(s32 *)((u8 *)temp_s0 + 0xF8) = (s32) *(s32 *)((u8 *)temp_s0 + 0xFC);
        if (func_002E5C20 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
    }
}
