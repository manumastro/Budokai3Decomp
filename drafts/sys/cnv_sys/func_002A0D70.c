/* Draft (not built): func_002A0D70 at 0x002A0D70, size 0x2A4, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 92 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x310, original 0x2A4
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0D70.s */

// src/sys/cnv_sys.c func_002A0D70 size diff=92/196
s32 A2d_SetMode(s32);
s32 func_00228430(s32);
s32 func_0029EDC0();
s32 func_0029F070(s32, f32);
s32 func_0029F180(s32, s32);
s32 func_0029F350(s32, s32);
s32 func_0029F470(void *);
s32 func_0029F730(s32, f32);
s32 func_0029FA90(s32, s32);
extern void func_00228410(void);
extern void A2d_FlushList(void);
s32 func_002A0D70(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    u8 *var_s0;

    var_s0 = D_004708CC;
    if (var_s0 == NULL) {
        return 0;
    }
    var_s1 = *(s32 *)((u8 *)var_s0 + 0x30);
    var_s5 = 0;
    if ((*(s32 *)((u8 *)var_s0 + 4) - *(s32 *)((u8 *)var_s0 + 0x10)) > 0) {
        var_s4 = 0;
        var_s3 = 0;
        var_s2 = var_s1 * 4;
        do {
            if (*(s32 *)(*(s32 *)((u8 *)var_s0 + 0x50) + var_s4) != 0) {
                func_0029F730(*(s32 *)(var_s2 + *(s32 *)((u8 *)var_s0 + 0x44)) + var_s3 + 4, *(f32 *)((u8 *)var_s0 + 0x38));
                func_0029FA90(*(s32 *)(var_s2 + *(s32 *)((u8 *)var_s0 + 0x44)) + var_s3, *(s32 *)((u8 *)var_s0 + 0x50) + var_s4);
            }
            var_s5 += 1;
            var_s4 += 8;
            var_s3 += 0xE0;
        } while (var_s5 < (*(s32 *)((u8 *)var_s0 + 4) - *(s32 *)((u8 *)var_s0 + 0x10)));
    }
    if (*(s32 *)((u8 *)var_s0 + 0xC) != 0) {
        A2d_SetMode(*(s32 *)((u8 *)D_004708CC + 0x2C));
        func_00228430(0);
        var_s2 = 0;
        if (*(s32 *)((u8 *)var_s0 + 0xC) > 0) {
            var_s5 = 0;
            var_s4 = 0;
            var_s3 = var_s1 * 4;
            do {
                func_0029F070(*(s32 *)(var_s3 + *(s32 *)((u8 *)var_s0 + 0x4C)) + var_s5, *(f32 *)((u8 *)var_s0 + 0x38));
                temp_v1 = *(s32 *)((u8 *)var_s0 + 0x1C);
                if ((temp_v1 != -1) && (temp_v1 == var_s2)) {
                    func_0029F180(*(s32 *)(var_s3 + *(s32 *)((u8 *)var_s0 + 0x4C)) + var_s5, *(s32 *)((u8 *)var_s0 + 0x58) + var_s4);
                } else {
                    func_0029F350(*(s32 *)(var_s3 + *(s32 *)((u8 *)var_s0 + 0x4C)) + var_s5, *(s32 *)((u8 *)var_s0 + 0x58) + var_s4);
                }
                var_s2 += 1;
                var_s5 += 0x2C;
                var_s4 += 0x30;
            } while (var_s2 < *(s32 *)((u8 *)var_s0 + 0xC));
        }
        func_00228410();
        A2d_FlushList();
    }
    temp_v1_2 = *(s32 *)((u8 *)var_s0 + 4);
    if (temp_v1_2 > 0) {
        var_s2 = temp_v1_2 - *(s32 *)((u8 *)var_s0 + 0x10);
        var_s4 = var_s2 * 8;
        if (var_s2 < temp_v1_2) {
            var_s1 *= 4;
            var_s3 = var_s2 * 0xE0;
            do {
                if (*(s32 *)(*(s32 *)((u8 *)var_s0 + 0x50) + var_s4) != 0) {
                    func_0029F730(*(s32 *)(var_s1 + *(s32 *)((u8 *)var_s0 + 0x44)) + var_s3 + 4, *(f32 *)((u8 *)var_s0 + 0x38));
                    func_0029FA90(*(s32 *)(var_s1 + *(s32 *)((u8 *)var_s0 + 0x44)) + var_s3, *(s32 *)((u8 *)var_s0 + 0x50) + var_s4);
                }
                var_s2 += 1;
                var_s4 += 8;
                var_s3 += 0xE0;
            } while (var_s2 < *(s32 *)((u8 *)var_s0 + 4));
        }
    }
    var_s1 = 0;
    if (*(s32 *)((u8 *)var_s0 + 8) > 0) {
        do {
            func_0029F470(var_s0);
            var_s1 += 1;
        } while (var_s1 < *(s32 *)((u8 *)var_s0 + 8));
    }
    return func_0029EDC0();
}
