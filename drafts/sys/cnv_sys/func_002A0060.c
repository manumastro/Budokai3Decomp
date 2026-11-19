/* Draft (not built): func_002A0060 at 0x002A0060, size 0x24C, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 113 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x238, original 0x24C
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0060.s */

// src/sys/cnv_sys.c func_002A0060 size diff=113/142
extern u8 *D_004708CC;
s32 amHeap_Alloc(s32, s32, s32 *, s32);
s32 memset(s32, s32, s32);
extern s32 D_0046EA58;
void func_002A0060(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_t2;
    s32 temp_t3;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_s4;
    s32 var_s5;
    s32 var_t0;
    s32 var_t1;
    s32 var_t3;
    u8 *temp_s2;

    temp_s2 = D_004708CC;
    temp_s0 = *(s32 *)((u8 *)temp_s2 + 8);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0);
    if (temp_s0 != 0) {
        *(s32 *)((u8 *)temp_s2 + 0x48) = amHeap_Alloc(temp_s1 * 4, 0, &D_0046EA58, 0x510);
        var_s5 = 0;
        if (temp_s1 > 0) {
            var_s4 = 0;
            temp_s3 = temp_s0 << 5;
            do {
                *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_s4) = amHeap_Alloc(temp_s3, 0, &D_0046EA58, 0x512);
                memset(*(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_s4), 0, temp_s3);
                var_s5 += 1;
                var_s4 += 4;
            } while (var_s5 < temp_s1);
        }
        *(s32 *)((u8 *)temp_s2 + 0x54) = amHeap_Alloc(temp_s0 * 4, 0, &D_0046EA58, 0x51E);
        var_t1 = 0;
        if (temp_s0 > 0) {
            var_a2 = 0;
            var_a1 = 0;
            do {
                var_t0 = 0;
                *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x54) + var_a2) = -1;
                if (temp_s1 > 0) {
                    var_a0 = 0;
                    if (temp_s1 >= 9) {
                        do {
                            var_t0 += 8;
                            *(s32 *)(var_a1 + *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 4)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 8)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 0xC)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 0x10)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 0x14)) = -1;
                            *(s32 *)(var_a1 + *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 0x18)) = -1;
                            temp_t3 = *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_a0) + 0x1C);
                            var_a0 += 0x20;
                            *(s32 *)(var_a1 + temp_t3) = -1;
                        } while (var_t0 < (temp_s1 - 8));
                    }
                    var_t3 = var_t0 * 4;
                    if (var_t0 < temp_s1) {
                        do {
                            var_t0 += 1;
                            temp_t2 = *(s32 *)(*(s32 *)((u8 *)temp_s2 + 0x48) + var_t3);
                            var_t3 += 4;
                            *(s32 *)(var_a1 + temp_t2) = -1;
                        } while (var_t0 < temp_s1);
                    }
                }
                var_t1 += 1;
                var_a2 += 4;
                var_a1 += 0x20;
            } while (var_t1 < temp_s0);
        }
    } else {
        *(s32 *)((u8 *)temp_s2 + 0x48) = 0;
        *(s32 *)((u8 *)temp_s2 + 0x54) = 0;
    }
}
