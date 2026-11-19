/* Draft (not built): func_002889C0 at 0x002889C0, size 0x130, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x138, original 0x130
 * Original: asm/nonmatchings/sys/mc_opr/func_002889C0.s */

// src/sys/mc_opr.c func_002889C0 size diff=37/78
extern s32 D_00470894;
s32 amMc_Delete(s32, s32, s32 *, s32);
extern s32 D_0046B960;
extern s32 D_0047084C;
extern s32 D_00470858;
extern s32 gMcInfo;
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028C3E0(void);
void func_002889C0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 var_a0;
    s32 var_a3;
    u8 *var_a1;

    var_a1 = arg1;
    var_a3 = 0x6B;
    var_a0 = 0;
    if (arg2 > 0) {
        do {
            var_a3 -= (u32) (*(s32 *)((u8 *)var_a1 + 0x10) + 0x3FF) >> 0xA;
            if (*(u16 *)((u8 *)var_a1 + 0x14) & 0x20) {
                var_a3 -= 1;
            }
            var_a0 += 1;
            var_a1 += 0x40;
        } while (var_a0 < arg2);
    }
    if (*(&gMcInfo + 8 + (D_0047084C << 6)) >= var_a3) {
        if (amMc_Delete(D_0047084C, 0, &D_0046B960, var_a3) != 0) {
            func_00288870(0x13);
            var_v1 = (int *)(&func_0028DDF0);
            if (&func_0028DDF0 == NULL) {
                var_v1 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
            D_00470858 = 3;
            D_00470894 = (int)(&func_0028C580);
            return;
        }
        func_00288870(0x11);
        var_v1_2 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        D_00470894 = (int)(&func_0028C3E0);
        return;
    }
    func_00288870(0xF, var_a1, &D_0046B960, var_a3);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 == NULL) {
        var_v1_3 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (int)(&func_0028C580);
}
