/* Draft (not built): func_001D2B40 at 0x001D2B40, size 0x170, segment battle/char_mant (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x184, original 0x170
 * Original: asm/nonmatchings/battle/char_mant/func_001D2B40.s */

// src/battle/char_mant.c func_001D2B40 size diff=62/97
void *amHeap_Alloc(s32, s32, s32 *, s32);
void *func_001D1ED0(s16, s32, s16, void *);
s32 func_001D2300(s16, s32, s16);
s32 memset(void *, s32, s32);
extern s32 D_00469370;
u8 *func_001D2B40(u8 *arg0) {
    f32 temp_f0;
    s32 temp_s2;
    s32 var_a0;
    s32 var_a1;
    u8 *temp_a2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_v1;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_s2 = func_001D2300(*(s16 *)((u8 *)arg0 + 6), *(s32 *)((u8 *)arg0 + 8), *(s16 *)((u8 *)arg0 + 4)) + 0x80;
    temp_v0 = amHeap_Alloc(temp_s2, 1, &D_00469370, 0x84);
    memset(temp_v0, 0, temp_s2);
    *(u8 **)((u8 *)temp_v0 + 0x68) = arg0;
    *(u8 **)((u8 *)temp_v0 + 0) = func_001D1ED0(*(s16 *)((u8 *)arg0 + 6), *(s32 *)((u8 *)arg0 + 8), *(s16 *)((u8 *)arg0 + 4), temp_v0 + 0x80);
    *(s32 *)((u8 *)temp_v0 + 4) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0)) + 0x7C);
    *(s32 *)((u8 *)temp_v0 + 0x64) = (s32) *(s16 *)((u8 *)arg0 + 4);
    *(s32 *)((u8 *)temp_v0 + 0x48) = (s32) *(s16 *)((u8 *)arg0 + 6);
    temp_a2 = *(u8 **)((u8 *)temp_v0 + 0);
    *(s32 *)((u8 *)temp_a2 + 0x60) = (s32) *(s16 *)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)temp_a2 + 0x64) = (s32) *(s16 *)((u8 *)arg0 + 2);
    *(f32 *)((u8 *)temp_a2 + 0x40) = (f32) *(f32 *)((u8 *)arg0 + 0x10);
    *(f32 *)((u8 *)temp_a2 + 0x44) = (f32) *(f32 *)((u8 *)arg0 + 0x14);
    *(f32 *)((u8 *)temp_a2 + 0x48) = (f32) *(f32 *)((u8 *)arg0 + 0x18);
    *(f32 *)((u8 *)temp_a2 + 0x4C) = (f32) *(f32 *)((u8 *)arg0 + 0x1C);
    *(s16 *)((u8 *)temp_a2 + 0x68) = (s16) *(s32 *)((u8 *)arg0 + 0xC);
    *(s32 *)((u8 *)temp_a2 + 0) = 0;
    *(f32 *)((u8 *)temp_a2 + 4) = (f32) (-0.027222225f * *(f32 *)((u8 *)temp_a2 + 0x40));
    *(s32 *)((u8 *)temp_a2 + 8) = 0;
    *(s32 *)((u8 *)temp_a2 + 0xC) = 0x3F800000;
    var_a1 = 0;
    if (*(s16 *)((u8 *)arg0 + 4) > 0) {
        var_a0 = 0;
        var_v1 = arg0;
        do {
            temp_f0 = *(f32 *)((u8 *)var_v1 + 0xDC);
            var_a1 += 1;
            temp_v0_2 = (u8 *)(*(s32 *)((u8 *)temp_a2 + 0x7C) + var_a0);
            *(f32 *)((u8 *)temp_v0_2 + 0x30) = temp_f0;
            var_a0 += 0x40;
            *(f32 *)((u8 *)temp_v0_2 + 0x34) = (f32) (temp_f0 * temp_f0);
            var_v1 += 0x20;
        } while (var_a1 < *(s16 *)((u8 *)arg0 + 4));
    }
    return temp_v0;
}
