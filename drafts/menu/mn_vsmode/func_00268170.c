/* Draft (not built): func_00268170 at 0x00268170, size 0x168, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 47 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x174, original 0x168
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268170.s */

// src/menu/mn_vsmode.c func_00268170 size diff=47/93
extern void *D_004707DC;
s32 func_0022BF80(void *);
s32 func_0022C060(void *, s32);
void *func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00268170(u8 *arg0) {
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_s2;

    temp_s3 = D_004707DC;
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = arg0;
    do {
        var_s2 = *(u8 **)((u8 *)var_s0 + 0xC);
        if (var_s2 != NULL) {
            switch (var_s1) {                       /* irregular */
            case 0:
                if (!(*(u8 *)((u8 *)arg0 + 0x55) & 1) && (func_0022BF80(var_s2) == 0xFF)) {
                    func_0022D0E0(var_s2, 1);
                    temp_v0 = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 4), 0);
                    *(u8 **)((u8 *)var_s0 + 0xC) = temp_v0;
                    var_s2 = temp_v0;
                    *(u8 *)((u8 *)arg0 + 0x55) = (u8) (*(u8 *)((u8 *)arg0 + 0x55) | 1);
                }
                break;
            case 1:
                if (!(*(u8 *)((u8 *)arg0 + 0x55) & 2) && (func_0022BF80(var_s2) == 0xFF)) {
                    func_0022D0E0(var_s2, 1);
                    temp_v0_2 = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0xC), 0);
                    *(u8 **)((u8 *)var_s0 + 0xC) = temp_v0_2;
                    var_s2 = temp_v0_2;
                    *(u8 *)((u8 *)arg0 + 0x55) = (u8) (*(u8 *)((u8 *)arg0 + 0x55) | 2);
                }
                break;
            }
            func_0022C060(var_s2, 0x3F800000);
            func_0022CD00(var_s2);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
}
