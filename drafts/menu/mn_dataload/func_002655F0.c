/* Draft (not built): func_002655F0 at 0x002655F0, size 0x104, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 37 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x104
 * Original: asm/nonmatchings/menu/mn_dataload/func_002655F0.s */

// src/menu/mn_dataload.c func_002655F0 size diff=37/68
s32 func_0022C060(void *, s32);
void *func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002655F0(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_a0;
    u8 *var_s1;

    var_s1 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    if (!(*(u16 *)((u8 *)arg0 + 0x32) & 1)) {
        if (var_s1 == NULL) {
            *(u8 **)((u8 *)arg0 + 0xC) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0x10), 0);
            var_s1 = *(u8 **)((u8 *)arg0 + 0xC);
        } else {
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x38);
            if (temp_f1 < 0.0f) {
                func_0022D0E0(var_s1, 1);
                *(u8 **)((u8 *)arg0 + 0xC) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0x14), 0);
                *(u16 *)((u8 *)arg0 + 0x32) = (u16) (*(u16 *)((u8 *)arg0 + 0x32) | 1);
                var_s1 = *(u8 **)((u8 *)arg0 + 0xC);
            } else {
                *(f32 *)((u8 *)arg0 + 0x38) = (f32) (temp_f1 - 1.0f);
            }
        }
    }
    func_0022C060(var_s1, 0x3F800000);
    func_0022CD00(var_s1);
}
