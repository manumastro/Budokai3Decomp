/* Draft (not built): func_00265420 at 0x00265420, size 0x1C8, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x1C8
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265420.s */

// src/menu/mn_dataload.c func_00265420 size diff=50/122
extern f32 gFrameDelta;
s32 func_00228240(s32 *);
s32 func_00228430(s32);
s32 func_002284D0(s32 *);
s32 func_0022C060(void *, s32);
void *func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_00228410(void);
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00265420(u8 *arg0) {
    s32 sp40;
    f32 sp44;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f20;
    u8 *temp_a0;
    u8 *var_s0;

    var_s0 = *(u8 **)((u8 *)arg0 + 0x14);
    var_f20 = 0.0f;
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    if (!(*(u16 *)((u8 *)arg0 + 0x32) & 4)) {
        if (var_s0 == NULL) {
            *(f32 *)((u8 *)arg0 + 0x48) = 160.0f;
            *(u8 **)((u8 *)arg0 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 8), 0);
            var_s0 = *(u8 **)((u8 *)arg0 + 0x14);
        } else {
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x48) - gFrameDelta;
            *(f32 *)((u8 *)arg0 + 0x48) = temp_f1;
            if (temp_f1 < 0.0f) {
                func_0022D0E0(var_s0, 1);
                *(u8 **)((u8 *)arg0 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0xC), 0);
                *(u16 *)((u8 *)arg0 + 0x32) = (u16) (*(u16 *)((u8 *)arg0 + 0x32) | 4);
                var_s0 = *(u8 **)((u8 *)arg0 + 0x14);
            }
        }
    } else {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x44);
        temp_f1_2 = (f32) (*(u8 *)((u8 *)arg0 + 0x30) * 0x32);
        if (temp_f1_2 < var_f20) {
            var_f20 -= 1.5f;
            if (!(temp_f1_2 <= var_f20)) {
                goto block_12;
            }
        } else if (!(temp_f1_2 <= var_f20)) {
            var_f20 += 1.5f;
            if (temp_f1_2 < var_f20) {
block_12:
                var_f20 = temp_f1_2;
            }
        }
    }
    if (*(u16 *)((u8 *)arg0 + 0x32) & 4) {
        func_002284D0(&sp40);
        *(f32 *)((u8 *)arg0 + 0x44) = var_f20;
        sp44 = var_f20;
        func_00228430(0);
        func_00228240(&sp40);
    }
    func_0022C060(var_s0, 0x3F800000);
    func_0022CD00(var_s0);
    if (*(u16 *)((u8 *)arg0 + 0x32) & 4) {
        func_00228410();
    }
}
