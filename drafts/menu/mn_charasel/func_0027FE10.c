/* Draft (not built): func_0027FE10 at 0x0027FE10, size 0x94, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA0, original 0x94
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027FE10.s */

// src/menu/mn_charasel.c func_0027FE10 size diff=20/40
s32 func_00288000();
extern f32 gFrameDelta;
extern void func_0027FCA0(void);
void func_0027FE10(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x38);
    func_0027EA60(temp_s0);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x40) - gFrameDelta;
    *(f32 *)((u8 *)temp_s0 + 0x40) = temp_f1;
    if (temp_f1 <= 0.0f) {
        func_00288000();
        func_0027DDC0(*(s32 *)((u8 *)temp_s0 + 0));
        func_0027DDC0(*(s32 *)((u8 *)temp_s0 + 4));
        func_0027EC10(temp_s0);
        var_v1 = (int *)(&func_0027FCA0);
        *(f32 *)((u8 *)temp_s0 + 0x40) = 60.0f;
        if (&func_0027FCA0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_00266150 (src/menu/mn_dataload.c), similarity 0.82.
 * It is the template below (not built). */
#if 0
void func_00266150(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x34);
    func_00265800(s0);
    *(f32 *)(s0 + 0x34) = *(f32 *)(s0 + 0x34) - gFrameDelta;
    if (*(f32 *)(s0 + 0x34) <= 0.0f) {
        *(u16 *)(s0 + 0x32) = *(u16 *)(s0 + 0x32) | 0x100;
        *(s32 *)(s0 + 0x34) = 0x42340000;
        *(void **)(a0 + 0x1C) = ((void *)DataLoad_TaskWait == 0) ? 0 : (void *)DataLoad_TaskWait;
    }
}
#endif
