/* Draft (not built): func_0027EA60 at 0x0027EA60, size 0x1AC, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK A2d_FlushList();                            /* extern */
M2C_UNK amModel_SetCurrent(s32, M2C_UNK);           /* extern */
M2C_UNK func_00133B50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0022BF80(void *);                          /* extern */
M2C_UNK func_0022C060(void *, M2C_UNK);             /* extern */
M2C_UNK func_0022C6B0(s32);                         /* extern */
M2C_UNK func_0022CD00(void *);                      /* extern */
M2C_UNK func_0022D0E0(void *, M2C_UNK);             /* extern */
void *func_0022D860(s32, M2C_UNK);                  /* extern */
extern s32 D_00470238;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gVsCharasel;

void func_0027EA60(void *arg0) {
    s32 sp88;
    s32 sp84;
    s32 sp80;
    s32 sp7C;
    void *sp78;
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    void *sp60;
    s32 temp_a0;
    s32 var_s1;
    s32 var_v0;
    void **var_s0;
    void **var_v1;
    void *temp_s3;
    void *temp_v0;
    void *var_s2;

    var_v0 = 0x2C;
    var_v1 = &sp60;
    temp_s3 = gVsCharasel;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp60 = M2C_FIELD(arg0, void **, 0xC);
    sp64 = M2C_FIELD(arg0, s32 *, 0x10);
    sp68 = M2C_FIELD(arg0, s32 *, 0x14);
    sp6C = M2C_FIELD(arg0, s32 *, 0x18);
    sp70 = M2C_FIELD(arg0, s32 *, 0x1C);
    sp74 = M2C_FIELD(arg0, s32 *, 0x20);
    sp78 = M2C_FIELD(arg0, void **, 0x24);
    sp7C = M2C_FIELD(arg0, s32 *, 0x28);
    sp80 = M2C_FIELD(arg0, s32 *, 0x2C);
    sp84 = M2C_FIELD(arg0, s32 *, 0x30);
    sp88 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_a0 = M2C_FIELD(temp_s3, s32 *, 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    var_s1 = 0;
    var_s0 = &sp60;
    do {
        var_s2 = *var_s0;
        if ((var_s2 == M2C_FIELD(arg0, void **, 0x24)) && !(M2C_FIELD(arg0, u8 *, 0x3C) & 1) && (func_0022BF80(var_s2) == 0xFF)) {
            func_0022D0E0(var_s2, 1);
            temp_v0 = func_0022D860(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_s3, void **, 8), void **, 0x14), s32 *, 8), 0);
            M2C_FIELD(arg0, void **, 0x24) = temp_v0;
            var_s2 = temp_v0;
            M2C_FIELD(arg0, u8 *, 0x3C) = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) | 1);
        }
        if (var_s2 != NULL) {
            func_0022C060(var_s2, 0x3F800000);
            if (var_s1 == 0) {
                func_0022C6B0(M2C_FIELD(var_s2, s32 *, 0x30));
            } else {
                func_0022CD00(var_s2);
            }
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xB);
    A2d_FlushList();
    func_00133B50(0, 0);
}
