/* Draft (not built): func_002DDD40 at 0x002DDD40, size 0x1C0, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B0, original 0x1C0
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DDD40.s */

// src/unk/unk_2DB970.c func_002DDD40 size diff=57/108
s32 func_0022C7D0(s32, s32, s32);
extern void Option_ReadSound(void);
extern void func_002D44C0(void);
extern void func_002D9580(void);
extern void func_002D9930(void);
extern void func_002D9F80(void);
extern void func_002DB600(void);
void func_002DDD40(void) {
    f32 var_f1;
    s32 var_s2;
    void (*var_v0)();
    u8 *temp_s0;
    u8 *var_s1;

    temp_s0 = (unsigned char *)(gOptionWork);
    if (*(f32 *)((u8 *)temp_s0 + 0x388) < 75.0f) {
        if (D_004703F4 != 3) {
            var_f1 = 1.0f;
        } else {
            var_f1 = 1.2f;
        }
        *(f32 *)((u8 *)temp_s0 + 0x388) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x388) + var_f1);
        *(void (**)())((u8 *)temp_s0 + 0x344) = func_002DDD40;
        return;
    }
    *(f32 *)((u8 *)temp_s0 + 0x388) = 0.0f;
    *(void (**)())((u8 *)temp_s0 + 0x34C) = func_002D9F80;
    *(void (**)())((u8 *)temp_s0 + 0x344) = func_002DB600;
    var_v0 = Option_ReadSound;
    if (Option_ReadSound == NULL) {
        var_v0 = NULL;
    }
    *(void (**)())((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x320)) + 0x1C) = var_v0;
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x10), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x34), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x14), 1, 0);
    var_s2 = 0;
    var_s1 = temp_s0;
    do {
        func_0022C7D0(*(s32 *)((u8 *)var_s1 + 0x18), 1, 0);
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 6);
    *(s32 *)((u8 *)temp_s0 + 0x3A4) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x38C) = 0;
    *(void (**)())((u8 *)temp_s0 + 0x354) = func_002D9930;
    *(s32 *)((u8 *)temp_s0 + 0x394) = 0;
    *(void (**)())((u8 *)temp_s0 + 0x35C) = func_002D9580;
    *(s32 *)((u8 *)temp_s0 + 0x398) = 0;
    *(void (**)())((u8 *)temp_s0 + 0x360) = func_002D44C0;
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x28C), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x290), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x294), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x298), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x29C), 1, 0);
    func_0022C7D0(*(s32 *)((u8 *)temp_s0 + 0x2A0), 1, 0);
}
