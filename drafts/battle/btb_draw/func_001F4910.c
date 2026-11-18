/* Draft (not built): func_001F4910 at 0x001F4910, size 0x1BC, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 1F5FD0(0x85000000, &D_004697D8, 0, func_001F1AB0); @ 6342: temp_s1 = func_001A50F0(temp_s2, var_a1 + (D_0051CD20 << 7));
 * Original: asm/nonmatchings/battle/btb_draw/func_001F4910.s */

// src/battle/btb_draw.c func_001F4910 cerr diff=-1/0
extern void *amObject_Create(void *, s32);
extern s32 D_004697D8;
extern s32 D_0051CD46;
void func_001F4910(s32 arg0, s32 arg3) {
    s16 *temp_s5;
    s32 temp_a3;
    s32 var_a1;
    s8 *temp_s2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s6;
    u8 *temp_v0;

    temp_s5 = (s16 *)(&D_0051CD46 + (arg0 * 0x10));
    if (*temp_s5 == 0) {
        temp_a0 = (u8 *)(gBattle + (arg0 * 0x2020));
        if ((*(f32 *)((u8 *)temp_a0 + 0x874) - *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x13E4)) + 0xC)) <= (5.0f + *(f32 *)((u8 *)temp_a0 + 0x2074))) {
            temp_s2 = (s8 *)(*D_0051CD0C);
            var_a1 = 6;
            if (arg3 & 4) {
                var_a1 = 0x106;
            }
            temp_s1 = func_001A50F0(temp_s2, var_a1 + (D_0051CD20 << 7));
            temp_s0 = (char *)func_001A50F0(temp_s2, 0x204);
            if ((temp_s1 != NULL) && (temp_s0 != NULL)) {
                temp_v0 = (char *)func_001F5FD0(0x85000000, &D_004697D8, 0, func_001F1AB0);
                temp_a3 = *(s32 *)((u8 *)temp_v0 + 0x20);
                *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (temp_a3 & ~0x1800);
                *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x1800);
                memset(temp_v0 + 0x30, 0, 0x80);
                temp_s6 = temp_v0 + 0x30;
                *(u8 **)((u8 *)temp_s6 + 8) = (char *)func_001A50F0(temp_s2, 0x280);
                *(u8 **)((u8 *)temp_s6 + 0xC) = amObject_Create((void *)(temp_s0), (void *)(NULL));
                func_00208D60((s32)(*(u8 **)((u8 *)temp_s6 + 0xC)));
                *(s32 *)((u8 *)temp_s6 + 0x10) = (char *)func_00209540(temp_s1, (1 << arg0) | 0x02000008, 0);
                *(u8 **)((u8 *)temp_s6 + 4) = (u8 *) (temp_a0 + 0x830 + 0xC0);
                *(s32 *)((u8 *)temp_v0 + 0x30) = (s32) (arg3 & 2);
                *temp_s5 = 1;
            }
        }
    }
}
