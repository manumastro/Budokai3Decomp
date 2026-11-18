/* Draft (not built): func_00267090 at 0x00267090, size 0x264, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 89 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x24C, original 0x264
 * Original: asm/nonmatchings/menu/mn_dataload/func_00267090.s */

// src/menu/mn_dataload.c func_00267090 size diff=89/147
s32 func_00131F00(s32 *, s32, s32);
s32 func_0013B110(s32);
s32 func_0013BC00(f32, f32, f32);
s32 func_0013BC30(f32, f32, f32);
s32 func_0013E0A0(s32);
s32 func_0022C060(void *, s32);
extern f32 D_00470004;
extern f32 D_00470008;
extern f32 D_0047000C;
extern f32 D_00470010;
extern f32 D_00470014;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_0047CA40;
extern void A2d_FlushList(void);
extern void func_00132DF0(void *);
extern void func_0013B0B0(void *);
extern char D_00495758[];
extern void func_0012F2C0(void);
extern void func_0022CD00(void *);
extern char D_003F0800[];
extern void amDraw_ResetPackets(void);
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00267090(u8 *arg0) {
    f32 temp_f2;
    s32 var_s2;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s1_4;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s2_3;
    u8 *temp_s3;
    u8 *var_s1;

    amDraw_ResetPackets();
    temp_f2 = *D_00495758 + D_00470014;
    *D_00495758 = temp_f2;
    if (!(temp_f2 <= 1.0f)) {
        *D_00495758 = temp_f2 - 1.0f;
    } else if (temp_f2 < 0.0f) {
        *D_00495758 = temp_f2 + 1.0f;
    }
    amModel_SetCurrent(*(u8 **)((u8 *)arg0 + 0xC), 0x2000);
    func_00131F00(&D_0047CA40, 0x43C80000, 0x43C80000);
    func_00132DF0(D_003F0800);
    func_0013B0B0(D_003F0800);
    func_0013BC00(D_00470004, D_00470008, D_0047000C);
    func_0013BC30(D_00470010, D_00470010, D_00470010);
    func_0013E0A0(*(s32 *)((u8 *)arg0 + 0x8C));
    func_0013B110(1);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x10);
    if (temp_s1 != NULL) {
        func_0022C060(temp_s1, 0x3F800000);
        func_0022CD00(temp_s1);
    }
    var_s2 = 0;
    var_s1 = arg0;
    do {
        temp_s3 = *(u8 **)((u8 *)var_s1 + 0x14);
        if (temp_s3 != NULL) {
            func_0022C060(temp_s3, 0x3F800000);
            func_0022CD00(temp_s3);
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 0xC);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x80);
    temp_s1_2 = *(u8 **)((u8 *)arg0 + 0x84);
    if (temp_s2 != NULL) {
        func_0022C060(temp_s2, 0x3F800000);
        func_0022CD00(temp_s2);
    }
    if (temp_s1_2 != NULL) {
        func_0022C060(temp_s1_2, 0x3F800000);
        func_0022CD00(temp_s1_2);
    }
    temp_s2_2 = *(u8 **)((u8 *)arg0 + 0x44);
    temp_s1_3 = *(u8 **)((u8 *)arg0 + 0x48);
    if (temp_s2_2 != NULL) {
        func_0022C060(temp_s2_2, 0x3F800000);
        func_0022CD00(temp_s2_2);
    }
    if (temp_s1_3 != NULL) {
        func_0022C060(temp_s1_3, 0x3F800000);
        func_0022CD00(temp_s1_3);
    }
    temp_s2_3 = *(u8 **)((u8 *)arg0 + 0x4C);
    temp_s1_4 = *(u8 **)((u8 *)arg0 + 0x50);
    if (temp_s2_3 != NULL) {
        func_0022C060(temp_s2_3, 0x3F800000);
        func_0022CD00(temp_s2_3);
    }
    if (temp_s1_4 != NULL) {
        func_0022C060(temp_s1_4, 0x3F800000);
        func_0022CD00(temp_s1_4);
    }
    func_00266390(arg0);
    A2d_FlushList();
    func_0012F2C0();
}
