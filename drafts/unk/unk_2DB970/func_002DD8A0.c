/* Draft (not built): func_002DD8A0 at 0x002DD8A0, size 0x230, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 77 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x220, original 0x230
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DD8A0.s */

// src/unk/unk_2DB970.c func_002DD8A0 size diff=77/136
s32 func_0022C7D0(s32, s32, s32);
void func_002D5090();
extern s32 func_002D8920;
extern s32 func_002D9C20;
extern s32 func_002D9F80;
extern s32 func_002DA310;
extern s32 func_002DB0E0;
extern s32 func_002DB3B0;
extern void func_002DF6E0(void);
extern void func_002D4340(void);
extern void func_002D5720(void);
extern void func_002D5E50(void);
extern void func_002D8D00(void);
extern void func_002D92C0(void);
extern void func_002D96D0(void);
void func_002DD8A0(void) {
    s32 *var_s2;
    s32 temp_v1;
    s32 var_s1_2;
    void (*var_s1)();
    void (*var_v0)();
    u8 *var_s0;

    var_s2 = NULL;
    var_s1 = NULL;
    var_s0 = (unsigned char *)(gOptionWork);
    temp_v1 = *(s32 *)((u8 *)var_s0 + 0x37C);
    *(s32 *)((u8 *)var_s0 + 0x388) = 0;
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_s2 = &func_002DB3B0;
        var_s1 = func_002D5720;
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2A4), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2A8), 1, 0);
        break;
    case 1:
        var_s2 = &func_002DB0E0;
        var_s1 = func_002D5090;
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2AC), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2B0), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2B4), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2B8), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2BC), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2C0), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x2C4), 1, 0);
        break;
    }
    if (var_s2 != NULL) {
        *(s32 **)((u8 *)var_s0 + 0x344) = var_s2;
        *(void (**)())((u8 *)var_s0 + 0x370) = func_002D5E50;
        *(void (**)())((u8 *)var_s0 + 0x374) = var_s1;
        var_v0 = func_002DF6E0;
        if (func_002DF6E0 == NULL) {
            var_v0 = NULL;
        }
        *(void (**)())((u8 *)(*(u8 **)((u8 *)var_s0 + 0x320)) + 0x1C) = var_v0;
        *(void (**)())((u8 *)var_s0 + 0x360) = func_002D4340;
        *(s32 **)((u8 *)var_s0 + 0x350) = &func_002D9C20;
        *(s32 **)((u8 *)var_s0 + 0x348) = &func_002DA310;
        *(s32 **)((u8 *)var_s0 + 0x36C) = &func_002D8920;
        *(void (**)())((u8 *)var_s0 + 0x364) = func_002D8D00;
        *(void (**)())((u8 *)var_s0 + 0x35C) = func_002D92C0;
        *(void (**)())((u8 *)var_s0 + 0x354) = func_002D96D0;
        *(s32 **)((u8 *)var_s0 + 0x34C) = &func_002D9F80;
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x68), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x4C), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x50), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x58), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x5C), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x60), 1, 0);
        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x64), 1, 0);
        var_s1_2 = 0;
        do {
            func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x18), 1, 0);
            var_s1_2 += 1;
            var_s0 += 4;
        } while (var_s1_2 < 6);
    }
}
