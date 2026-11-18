/* Draft (not built): func_002BF970 at 0x002BF970, size 0x28C, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0x28) + (0.01f * D_0051D9A8)); @ 664: *)temp_s0 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x24) + (0.01f * D_0051D9A8));
 * Original: asm/nonmatchings/story/str_status/func_002BF970.s */

// src/story/str_status.c func_002BF970 cerr diff=-1/0
s32 func_00215500(s32);
extern void func_00208F70(void *);
extern void func_00209390(void *);
void func_002BF970(u8 *arg0) {
    f32 temp_f1;
    s16 temp_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;
    u8 *temp_s0_2;

    temp_s0 = (u8 *)(D_0046FE44);
    if ((*(s16 *)((u8 *)temp_s0 + 0x100) == 1) && !(*(s32 *)((u8 *)D_0047011C + 0x1BC) & 1)) {
        func_002BE0B0(*(s32 *)((u8 *)arg0 + 0xB8));
        temp_f1 = (f32) *(s8 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB4)) + 0x11E7) / 99.0f;
        if (*(s32 *)((u8 *)temp_s0 + 0x2C) & 2) {
            *(f32 *)((u8 *)temp_s0 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x24) + (0.01f * D_0051D9A8));
            *(f32 *)((u8 *)temp_s0 + 0x28) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x28) + (0.01f * D_0051D9A8));
            if (!(*(f32 *)((u8 *)temp_s0 + 0x24) <= 1.0f)) {
                *(f32 *)((u8 *)temp_s0 + 0x24) = 1.0f;
            }
            if (!(*(f32 *)((u8 *)temp_s0 + 0x28) <= 1.0f)) {
                *(f32 *)((u8 *)temp_s0 + 0x28) = 1.0f;
            }
        } else {
            *(f32 *)((u8 *)temp_s0 + 0x24) = temp_f1;
            if (!(temp_f1 <= 1.0f)) {
                *(f32 *)((u8 *)temp_s0 + 0x24) = 1.0f;
            }
            if ((*(s16 *)((u8 *)temp_s0 + 0x34) == 0) && (temp_v1 = *(s16 *)((u8 *)temp_s0 + 0x36), (temp_v1 != 0x28))) {
                if (temp_v1 >= 0x40) {
                    goto block_14;
                }
                *(f32 *)((u8 *)temp_s0 + 0x28) = 0.0f;
            } else {
block_14:
                func_00243280(0);
            }
        }
        func_00240FF0(0, *(s8 *)((u8 *)temp_s0 + 0x39));
        if (*(s16 *)((u8 *)temp_s0 + 0x36) == 0xE) {
            func_002BDD10(arg0);
        }
        temp_a0 = *(u8 **)((u8 *)D_0047011C + 0x1B0);
        temp_s0_2 = (u8 *)(D_0046FE44);
        if (temp_a0 != NULL) {
            func_00208F70(temp_a0);
        }
        temp_a0_2 = *(u8 **)((u8 *)D_0047011C + 0x1B8);
        if (temp_a0_2 != NULL) {
            func_00208F70(temp_a0_2);
        }
        if ((*(s32 *)((u8 *)arg0 + 0xD8) != 5) && (*(s32 *)((u8 *)temp_s0_2 + 0x2C) & 0x20)) {
            temp_a0_3 = *(u8 **)((u8 *)D_0047011C + 0x1B0);
            if (temp_a0_3 != NULL) {
                func_00209390(temp_a0_3);
            }
            temp_a0_4 = *(u8 **)((u8 *)D_0047011C + 0x1B8);
            if (temp_a0_4 != NULL) {
                func_00209390(temp_a0_4);
            }
            *(s32 *)((u8 *)temp_s0_2 + 0x2C) = (s32) (*(s32 *)((u8 *)temp_s0_2 + 0x2C) & ~0x20);
        }
        func_00208E50(0x400010, 1);
        if (*(s32 *)((u8 *)gWave + 0x98) != 0) {
            func_00215500(0x400);
        }
        temp_a0_5 = *(u8 **)((u8 *)D_0047011C + 0x1A4);
        if (temp_a0_5 != NULL) {
            func_00208F70(temp_a0_5);
            if (*(s32 *)((u8 *)(*(u8 **)((u8 *)D_0047011C + 0x1A4)) + 0x38) < 0) {
                *(u8 **)((u8 *)D_0047011C + 0x1A4) = NULL;
            }
        }
    }
}
