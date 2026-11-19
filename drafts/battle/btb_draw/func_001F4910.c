/* Draft (not built): func_001F4910 at 0x001F4910, size 0x1BC, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x1BC
 * Original: asm/nonmatchings/battle/btb_draw/func_001F4910.s */

// src/battle/btb_draw.c func_001F4910 size diff=45/109
extern void *amObject_Create(void *, s32);
extern s8 D_004697D8;
extern s32 D_0051CD46;
void func_001F4910(s32 arg0, s32 unused_arg1, s32 unused_arg2, s32 arg3) {
    s16 *var_s5;
    s32 var_a1;
    s32 var_s3;
    s32 var_s4;
    s8 *var_s0;
    s8 *var_s1;
    s8 *var_s2;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *var_s6;
    u8 *var_s7;

    var_s4 = arg0;
    var_s5 = (short *)(&D_0051CD46 + (arg0 * 0x10));
    var_s3 = arg3;
    if (*var_s5 == 0) {
        temp_a0 = (unsigned char *)(gBattle + (var_s4 * 0x2020));
        var_s7 = temp_a0 + 0x830;
        if ((*(f32 *)((u8 *)temp_a0 + 0x874) - *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x13E4)) + 0xC)) <= (5.0f + *(f32 *)((u8 *)temp_a0 + 0x2074))) {
            var_s2 = (signed char *)(*D_0051CD0C);
            var_a1 = 6;
            if (var_s3 & 4) {
                var_a1 = 0x106;
            }
            var_s1 = (signed char *)(func_001A50F0((char *)(var_s2), (s32)(var_a1 + (*D_0051CD20 << 7))));
            var_s0 = (signed char *)(func_001A50F0((char *)(var_s2), 0x204));
            if ((var_s1 != NULL) && (var_s0 != NULL)) {
                temp_v0 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_004697D8), 0, (void *)(func_001F1AB0), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
                var_s6 = temp_v0;
                *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) & ~0x1800);
                *(s32 *)((u8 *)temp_v0 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0 + 0x20) | 0x1800);
                memset(var_s6 + 0x30, 0, 0x80);
                var_s6 += 0x30;
                *(s8 **)((u8 *)var_s6 + 8) = (signed char *)(func_001A50F0((char *)(var_s2), 0x280));
                *(u8 **)((u8 *)var_s6 + 0xC) = amObject_Create(var_s0, 0);
                func_00208D60((s32) *(u8 **)((u8 *)var_s6 + 0xC));
                *(s8 **)((u8 *)var_s6 + 0x10) = (signed char *)(func_00209540((char *)(var_s1), (s32)((1 << var_s4) | 0x02000008), 0));
                *(u8 **)((u8 *)var_s6 + 4) = (u8 *) (var_s7 + 0xC0);
                *(s32 *)((u8 *)var_s6 + 0) = (s32) (var_s3 & 2);
                *var_s5 = 1;
            }
        }
    }
}
