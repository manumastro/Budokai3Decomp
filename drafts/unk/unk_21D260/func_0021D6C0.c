/* Draft (not built): func_0021D6C0 at 0x0021D6C0, size 0x624, segment unk/unk_21D260 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ompiler: 117: *(s3232 *)((u8 *)D_0058BAE0 + 0x44) = 0x3F800000; @ 116: *(s3232 *)((u8 *)D_0058BAE0 + 0x40) = 0x3F800000;
 * Original: asm/nonmatchings/unk/unk_21D260/func_0021D6C0.s */

// src/unk/unk_21D260.c func_0021D6C0 cerr diff=-1/0
extern void func_0022C6B0(void *);
extern f32 D_0058BAF0;
extern f32 D_0058BAF4;
extern f32 D_0058BAF8;
extern f32 D_0058BAFC;
extern u8 D_0058BB00;
extern u8 D_0058BB01;
extern u8 D_0058BB02;
extern u8 D_0058BB03;
extern f32 D_0058BB10;
extern f32 D_0058BB14;
extern f32 D_0058BB18;
extern f32 D_0058BB1C;
extern u8 D_0058BB20;
extern u8 D_0058BB21;
extern u8 D_0058BB22;
extern u8 D_0058BB23;
void func_0021D6C0(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f1;

    temp_f23 = fparg0 / 2.0f;
    temp_f22 = fparg1 / 2.0f;
    if (arg0 == 0) {
        *(u8 *)((u8 *)D_0058BAE0 + 0x1C) = (u8) D_0058BB00;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1D) = (u8) D_0058BB01;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1E) = (u8) D_0058BB02;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1F) = (u8) D_0058BB03;
        *(f32 *)((u8 *)D_0058BAE0 + 0x50) = (f32) D_0058BAF0;
        *(f32 *)((u8 *)D_0058BAE0 + 0x54) = (f32) D_0058BAF4;
        *(f32 *)((u8 *)D_0058BAE0 + 0x58) = (f32) D_0058BAF8;
        var_f0 = D_0058BAFC;
    } else {
        *(u8 *)((u8 *)D_0058BAE0 + 0x1C) = (u8) D_0058BB20;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1D) = (u8) D_0058BB21;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1E) = (u8) D_0058BB22;
        *(u8 *)((u8 *)D_0058BAE0 + 0x1F) = (u8) D_0058BB23;
        *(f32 *)((u8 *)D_0058BAE0 + 0x50) = (f32) D_0058BB10;
        *(f32 *)((u8 *)D_0058BAE0 + 0x54) = (f32) D_0058BB14;
        *(f32 *)((u8 *)D_0058BAE0 + 0x58) = (f32) D_0058BB18;
        var_f0 = D_0058BB1C;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x5C) = var_f0;
    temp_f20 = -temp_f23;
    temp_f21 = -temp_f22;
    *(f32 *)((u8 *)D_0058BAE0 + 0x30) = temp_f20;
    *(f32 *)((u8 *)D_0058BAE0 + 0x34) = temp_f21;
    if (!(temp_f23 < 30.0f)) {
        var_f1 = (32.0f + *(f32 *)((u8 *)D_0058BAE0 + 0x30)) - 2.0f;
    } else {
        var_f1 = 0.0f;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x38) = var_f1;
    if (!(temp_f22 < 30.0f)) {
        var_f0_2 = (32.0f + *(f32 *)((u8 *)D_0058BAE0 + 0x34)) - 2.0f;
    } else {
        var_f0_2 = 0.0f;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = var_f0_2;
    *(s3232 *)((u8 *)D_0058BAE0 + 0x40) = 0x3F800000;
    *(s3232 *)((u8 *)D_0058BAE0 + 0x44) = 0x3F800000;
    *(s32 *)((u8 *)D_0058BAE0 + 0x48) = 0x41F80000;
    *(s32 *)((u8 *)D_0058BAE0 + 0x4C) = 0x41F80000;
    func_0022C6B0(D_0058BAE0);
    *(f32 *)((u8 *)D_0058BAE0 + 0x34) = temp_f22;
    if (!(temp_f22 < 30.0f)) {
        var_f0_3 = 2.0f + (*(f32 *)((u8 *)D_0058BAE0 + 0x34) - 32.0f);
    } else {
        var_f0_3 = 0.0f;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = var_f0_3;
    func_0022C6B0(D_0058BAE0);
    *(f32 *)((u8 *)D_0058BAE0 + 0x30) = temp_f23;
    if (!(temp_f23 < 30.0f)) {
        var_f0_4 = 2.0f + (*(f32 *)((u8 *)D_0058BAE0 + 0x30) - 32.0f);
    } else {
        var_f0_4 = 0.0f;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x38) = var_f0_4;
    func_0022C6B0(D_0058BAE0);
    *(f32 *)((u8 *)D_0058BAE0 + 0x34) = temp_f21;
    if (!(temp_f22 < 30.0f)) {
        var_f0_5 = (32.0f + *(f32 *)((u8 *)D_0058BAE0 + 0x34)) - 2.0f;
    } else {
        var_f0_5 = 0.0f;
    }
    *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = var_f0_5;
    func_0022C6B0(D_0058BAE0);
    if (!(temp_f23 <= 30.0f)) {
        *(f32 *)((u8 *)D_0058BAE0 + 0x30) = (f32) ((32.0f - temp_f23) - 2.0f);
        *(f32 *)((u8 *)D_0058BAE0 + 0x34) = temp_f21;
        *(f32 *)((u8 *)D_0058BAE0 + 0x38) = (f32) (2.0f + (temp_f23 - 32.0f));
        *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = (f32) ((32.0f + *(f32 *)((u8 *)D_0058BAE0 + 0x34)) - 2.0f);
        *(s3232 *)((u8 *)D_0058BAE0 + 0x40) = 0x41F00000;
        *(s3232 *)((u8 *)D_0058BAE0 + 0x44) = 0x3F800000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x48) = 0x41F80000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x4C) = 0x41F80000;
        func_0022C6B0(D_0058BAE0);
        *(f32 *)((u8 *)D_0058BAE0 + 0x34) = temp_f22;
        *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = (f32) (2.0f + (*(f32 *)((u8 *)D_0058BAE0 + 0x34) - 32.0f));
        func_0022C6B0(D_0058BAE0);
    }
    if (!(temp_f22 <= 30.0f)) {
        *(f32 *)((u8 *)D_0058BAE0 + 0x30) = temp_f20;
        *(f32 *)((u8 *)D_0058BAE0 + 0x34) = (f32) ((32.0f - temp_f22) - 2.0f);
        *(f32 *)((u8 *)D_0058BAE0 + 0x38) = (f32) ((32.0f + *(f32 *)((u8 *)D_0058BAE0 + 0x30)) - 2.0f);
        *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = (f32) (2.0f + (temp_f22 - 32.0f));
        *(s3232 *)((u8 *)D_0058BAE0 + 0x40) = 0x3F800000;
        *(s3232 *)((u8 *)D_0058BAE0 + 0x44) = 0x41F00000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x48) = 0x41F80000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x4C) = 0x41F80000;
        func_0022C6B0(D_0058BAE0);
        *(f32 *)((u8 *)D_0058BAE0 + 0x30) = temp_f23;
        *(f32 *)((u8 *)D_0058BAE0 + 0x38) = (f32) (2.0f + (*(f32 *)((u8 *)D_0058BAE0 + 0x30) - 32.0f));
        func_0022C6B0(D_0058BAE0);
    }
    if (!(temp_f23 <= 30.0f) && !(temp_f22 <= 30.0f)) {
        *(f32 *)((u8 *)D_0058BAE0 + 0x30) = (f32) ((32.0f - temp_f23) - 2.0f);
        *(f32 *)((u8 *)D_0058BAE0 + 0x34) = (f32) ((32.0f - temp_f22) - 2.0f);
        *(f32 *)((u8 *)D_0058BAE0 + 0x38) = (f32) (2.0f + (temp_f23 - 32.0f));
        *(f32 *)((u8 *)D_0058BAE0 + 0x3C) = (f32) (2.0f + (temp_f22 - 32.0f));
        *(s3232 *)((u8 *)D_0058BAE0 + 0x40) = 0x41F00000;
        *(s3232 *)((u8 *)D_0058BAE0 + 0x44) = 0x41F00000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x48) = 0x41F80000;
        *(s32 *)((u8 *)D_0058BAE0 + 0x4C) = 0x41F80000;
        func_0022C6B0(D_0058BAE0);
    }
}
