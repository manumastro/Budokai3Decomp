/* Draft (not built): func_001F7FA0 at 0x001F7FA0, size 0x47C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); legal implicit conversion from 'int' to 'int (*)(int)' mwccps2.exe Compiler: @ 7526: temp_v1 = *(&D_0044B470 + temp_a0);
 * Original: asm/nonmatchings/battle/btb_draw/func_001F7FA0.s */

// src/battle/btb_draw.c func_001F7FA0 cerr diff=-1/0
s32 func_002D02B0(s32);
extern s32 D_0044B470;
void func_001F7FA0(void) {
    s32 (*temp_v1)(s32);
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s3;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s2;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;

    func_002D02B0(0x3C00);
    amVram_Apply(1);
    temp_a0 = ((s32)(gBtbBg)) * 4;
    temp_v1 = *(&D_0044B470 + temp_a0);
    if (temp_v1 != NULL) {
        temp_v1(temp_a0);
        return;
    }
    var_s1 = 0;
    temp_s2 = (unsigned char *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24));
loop_16:
    if (var_s1 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 4)) + 0x80)) {
        temp_s0 = (unsigned char *)(*(s32 *)((u8 *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24)) + 0xC) + (var_s1 << 5));
        temp_v1_2 = *(u8 **)((u8 *)temp_s0 + 4);
        var_a2 = 0;
loop_6:
        if (var_a2 < *(s32 *)((u8 *)temp_v1_2 + 4)) {
            temp_v0 = (var_a2 * 8) + temp_v1_2;
            var_a2 += 1;
            *(s32 *)((u8 *)temp_v0 + 8) = 0;
            goto loop_6;
        }
        temp_v0_2 = func_001F5FD0(0x80000000, (char *)(D_004698D0), (s32)(temp_s0), (void *)(func_001F3A60));
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~0x10);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x10);
        temp_t1 = **(u8 ***)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 4)) + 0)) + 0x1C);
        var_v1 = 0;
        if (temp_t1 != NULL) {
            var_t0 = 0;
loop_13:
            if (var_t0 < *(s32 *)((u8 *)temp_t1 + 0x10)) {
                if (*(s32 *)(*(s32 *)((u8 *)temp_t1 + 0x1C) + (var_t0 << 5)) == 0x58) {
                    var_v1 |= 0x200;
                }
                var_t0 += 1;
                goto loop_13;
            }
        }
        var_s1 += 1;
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~var_v1);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | var_v1);
        goto loop_16;
    }
    temp_v1_3 = *(u8 **)((u8 *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24)) + 4);
    temp_s1 = *(s32 *)((u8 *)temp_v1_3 + 0x80);
    temp_s2_2 = *(s32 *)((u8 *)temp_v1_3 + 0x84);
    var_s0 = temp_s1;
loop_20:
    if (var_s0 < (temp_s2_2 + temp_s1)) {
        func_001F7990(var_s0);
        var_s0 += 1;
        goto loop_20;
    }
    temp_v1_4 = *(u8 **)((u8 *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24)) + 4);
    temp_s3 = *(s32 *)((u8 *)temp_v1_4 + 0x8C);
    temp_s2_3 = *(s32 *)((u8 *)temp_v1_4 + 0x80) + *(s32 *)((u8 *)temp_v1_4 + 0x84);
    var_s1_2 = temp_s2_3;
loop_32:
    if (var_s1_2 < (temp_s3 + temp_s2_3)) {
        temp_s0_2 = (unsigned char *)(*(s32 *)((u8 *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24)) + 0xC) + (var_s1_2 << 5));
        temp_v0_3 = func_001F5FD0(0x81000000, (char *)(D_004698C0), (s32)(temp_s0_2), (void *)(func_001F2FD0));
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) & ~0x40);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) | 0x40);
        temp_t1_2 = **(u8 ***)((u8 *)(**(u8 ***)((u8 *)temp_s0_2 + 4)) + 0x1C);
        var_v1_2 = 0;
        if (temp_t1_2 != NULL) {
            var_t0_2 = 0;
loop_29:
            if (var_t0_2 < *(s32 *)((u8 *)temp_t1_2 + 0x10)) {
                if (*(s32 *)(*(s32 *)((u8 *)temp_t1_2 + 0x1C) + (var_t0_2 << 5)) == 0x58) {
                    var_v1_2 |= 0x200;
                }
                var_t0_2 += 1;
                goto loop_29;
            }
        }
        var_s1_2 += 1;
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) & ~var_v1_2);
        *(s32 *)((u8 *)temp_v0_3 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_3 + 0x20) | var_v1_2);
        goto loop_32;
    }
    temp_v1_5 = *(u8 **)((u8 *)(*D_0051CD14 + (((s32)(D_0051CD20)) * 0x24)) + 4);
    temp_s1_2 = *(s32 *)((u8 *)temp_v1_5 + 0x90);
    var_s0_2 = temp_s1_2 - *(s32 *)((u8 *)temp_v1_5 + 0x88);
loop_35:
    if (var_s0_2 < temp_s1_2) {
        func_001F7490(var_s0_2);
        var_s0_2 += 1;
        goto loop_35;
    }
    temp_v1_6 = ((u8 *)&D_0044AE50) + (((s32)(gBtbBg)) * 0x5C) + (((s32)(D_0051CD20)) << 5);
    if (*(s32 *)((u8 *)temp_v1_6 + 0x24) >= 0) {
        temp_v0_4 = (int)func_001F5FD0(0x86000000, (char *)(D_00469898), (s32)(NULL), (void *)((void (*)(s8 *)) func_001F0A50));
        temp_s0_3 = temp_v0_4 + 0x30;
        *(s32 *)((u8 *)temp_v0_4 + 0x20) = 0x2800;
        memset(temp_s0_3, 0, 0x80);
        *(s32 *)((u8 *)temp_s0_3 + 0x28) = (int)(func_001A50F0(*D_0051CD0C, 0x280));
        *(u8 **)((u8 *)temp_s0_3 + 0x20) = (u8 *) (((u8 *)&D_0044A880) + (*(s32 *)((u8 *)(temp_v1_6 + 0x1C) + 8) * 0x10));
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($a1) */);
        *(f32 *)((u8 *)temp_s0_3 + 0x18) = -1.0f;
    }
}
