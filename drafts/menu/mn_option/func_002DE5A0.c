/* Draft (not built): func_002DE5A0 at 0x002DE5A0, size 0x36C, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 196 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option/func_002DE5A0.s */

// src/menu/mn_option.c func_002DE5A0 diff diff=196/219
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
s32 func_002D76E0();
extern s32 func_002D9C20;
extern s32 func_002D9F80;
extern s32 func_002DA310;
extern void func_002D40A0(void);
extern void func_002D6160(void);
extern void func_002D8720(void);
extern void func_002D8D00(void);
extern void func_002D9580(void);
extern void func_002D9930(void);
void func_002DE5A0(void) {
    s32 var_s1;
    s32 var_s2;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *var_s0;

    temp_s3 = gOptionWork;
    *(void (**)())((u8 *)temp_s3 + 0x344) = func_002DE250;
    *(s32 *)((u8 *)temp_s3 + 0x10) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 4), 0);
    *(s32 **)((u8 *)temp_s3 + 0x348) = &func_002DA310;
    *(s32 *)((u8 *)temp_s3 + 0x48) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x3C), 0x41200000);
    *(s32 *)((u8 *)temp_s3 + 0x38) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x20), 0);
    *(s32 *)((u8 *)temp_s3 + 0x3C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A0), 0);
    *(s32 *)((u8 *)temp_s3 + 0x40) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A4), 0);
    *(s32 *)((u8 *)temp_s3 + 0x44) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A8), 0);
    *(s32 *)((u8 *)temp_s3 + 0x4C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x59C), 0);
    *(s32 *)((u8 *)temp_s3 + 0x50) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x598), 0);
    *(s32 *)((u8 *)temp_s3 + 0x54) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0xC), 0);
    *(s32 *)((u8 *)temp_s3 + 0x58) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x594), 0);
    *(s32 *)((u8 *)temp_s3 + 0x5C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A0), 0);
    *(s32 *)((u8 *)temp_s3 + 0x60) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A4), 0);
    *(s32 *)((u8 *)temp_s3 + 0x64) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x5A8), 0);
    *(s32 *)((u8 *)temp_s3 + 0x68) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x10), 0);
    *(s32 *)((u8 *)temp_s3 + 0x34) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14), 0);
    *(s32 *)((u8 *)temp_s3 + 0x264) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x24), 0);
    *(s32 **)((u8 *)temp_s3 + 0x34C) = &func_002D9F80;
    *(s32 *)((u8 *)temp_s3 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 8), 0);
    *(s32 *)((u8 *)temp_s3 + 0x268) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x34), 0);
    var_s2 = 0;
    var_s1 = 0;
    var_s0 = temp_s3;
    *(s32 **)((u8 *)temp_s3 + 0x350) = &func_002D9C20;
    do {
        *(s32 *)((u8 *)var_s0 + 0x18) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C) + var_s1) + 0xB0), 0);
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 6);
    *(void (**)())((u8 *)temp_s3 + 0x354) = func_002D9930;
    *(s32 *)((u8 *)temp_s3 + 0x38C) = 0;
    *(s32 *)((u8 *)temp_s3 + 0x358) = 0;
    *(s32 *)((u8 *)temp_s3 + 0x30) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x14)) + 0x58), 0);
    *(void (**)())((u8 *)temp_s3 + 0x35C) = func_002D9580;
    *(s32 *)((u8 *)temp_s3 + 0x6C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 8)) + 0x1C)) + 0x314), 0);
    *(void (**)())((u8 *)temp_s3 + 0x364) = func_002D8D00;
    *(s32 *)((u8 *)temp_s3 + 0x360) = 0;
    *(s32 *)((u8 *)temp_s3 + 0x368) = 0;
    *(s32 *)((u8 *)temp_s3 + 0x3BC) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3CC) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3B0) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3B4) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3B8) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3BC) = 0x3F800000;
    *(s32 *)((u8 *)temp_s3 + 0x3C0) = 0x3F000000;
    *(s32 *)((u8 *)temp_s3 + 0x3C4) = 0x3F000000;
    *(s32 *)((u8 *)temp_s3 + 0x3C8) = 0x3F000000;
    *(s32 *)((u8 *)temp_s3 + 0x3CC) = 0x3F800000;
    func_002D8720();
    temp_s0 = gOptionWork;
    *(s32 *)((u8 *)temp_s0 + 0x9C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0xDC), 0);
    *(s32 *)((u8 *)temp_s0 + 0xA8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x334), 0);
    *(s32 *)((u8 *)temp_s0 + 0xA0) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x1C8), 0);
    *(s32 *)((u8 *)temp_s0 + 0xA4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x1CC), 0);
    func_002D76E0();
    func_002D6160();
    func_002D40A0();
}

/* Similar function already in C: func_002D6160 (src/unk/unk_2D2530.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void func_002D6160(void) {
    Obj2D2530 *s = gOptionWork;

    *(s32 *)((char *)s + 0x274) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0xE4), 0.0f);
    *(s32 *)((char *)s + 0x288) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x34C), 0.0f);
    *(s32 *)((char *)s + 0x28C) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x454), 0.0f);
    *(s32 *)((char *)s + 0x290) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x44C), 0.0f);
    *(s32 *)((char *)s + 0x294) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x444), 0.0f);
    *(s32 *)((char *)s + 0x298) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x43C), 0.0f);
    *(s32 *)((char *)s + 0x29C) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x5C), 0.0f);
    *(s32 *)((char *)s + 0x2A0) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x60), 0.0f);
    *(s32 *)((char *)s + 0x2A4) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x48), 0.0f);
    *(s32 *)((char *)s + 0x2A8) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x464), 0.0f);
    *(s32 *)((char *)s + 0x2AC) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x50), 0.0f);
    *(s32 *)((char *)s + 0x2B0) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x68), 0.0f);
    *(s32 *)((char *)s + 0x2B4) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x6C), 0.0f);
    *(s32 *)((char *)s + 0x2B8) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x510), 0.0f);
    *(s32 *)((char *)s + 0x2BC) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x4F4), 0.0f);
    *(s32 *)((char *)s + 0x2C0) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x508), 0.0f);
    *(s32 *)((char *)s + 0x2C4) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x4F0), 0.0f);
    *(s32 *)((char *)s + 0x2C8) = func_0022D860(*(s32 *)(*(char **)((char *)s->f8 + 0x14) + 0x4C), 0.0f);
    *(s32 *)((char *)s + 0x2CC) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x4AC), 0.0f);
    {
        s32 i;

        for (i = 0; i < 4; i++) {
            *(s32 *)((char *)s + 0x2D0 + i * 4) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x4BC + i * 4), 0.0f);
        }
    }
    *(s32 *)((char *)s + 0x278) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x1DC), 0.0f);
    *(s32 *)((char *)s + 0x27C) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x1D0), 0.0f);
    *(s32 *)((char *)s + 0x280) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x1D4), 0.0f);
    *(s32 *)((char *)s + 0x284) = func_0022D670(*(s32 *)(*(char **)((char *)s->f8 + 0x1C) + 0x1D8), 0.0f);
}
#endif
