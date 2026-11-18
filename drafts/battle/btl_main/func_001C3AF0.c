/* Draft (not built): func_001C3AF0 at 0x001C3AF0, size 0x21C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 's3232' mwccps2.exe Compiler: 5002: f32 var_f0_2; @ 5001: s3232 var_f0;
 * Original: asm/nonmatchings/battle/btl_main/func_001C3AF0.s */

// src/battle/btl_main.c func_001C3AF0 cerr diff=-1/0
void func_001C3AF0(u8 *arg0) {
    s3232 var_f0;
    f32 var_f0_2;
    s32 temp_s0;
    s32 var_s1;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *var_s2;

    temp_s3 = arg0 + 0x1360;
    temp_v0 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350));
    *(s3232 *)((u8 *)temp_v0 + 4) = (s3232) *(s3232 *)((u8 *)arg0 + 0x17C4);
    *(s3232 *)((u8 *)temp_v0 + 8) = (s3232) *(s3232 *)((u8 *)arg0 + 0x17C0);
    *(s3232 *)((u8 *)temp_v0 + 0xC) = (s3232) *(s3232 *)((u8 *)arg0 + 0x17D4);
    var_s2 = temp_v0;
    if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
        var_f0 = *(s3232 *)((u8 *)arg0 + 0x17D4);
    } else {
        var_f0 = *(s3232 *)((u8 *)arg0 + 0x17D0);
    }
    *(s3232 *)((u8 *)var_s2 + 0x10) = var_f0;
    if ((**(s16 **)((u8 *)arg0 + 0xBB0) != 0) && (func_001DF8F0(0, 0x1B) > 0)) {
        var_f0_2 = 0.0f;
    } else {
        var_f0_2 = (f32) (*(s8 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0xBA4) * 0x14) + *(s32 *)((u8 *)arg0 + 0x1CF8)) + 0xDD) * 0x3E8);
    }
    *(f32 *)((u8 *)var_s2 + 0x14) = var_f0_2;
    *(s32 *)((u8 *)var_s2 + 0x18) = (s32) *(s32 *)((u8 *)arg0 + 0x17EC);
    *(s16 *)((u8 *)var_s2 + 0x3E) = (s16) *(s16 *)((u8 *)temp_s3 + 0x44);
    *(s16 *)((u8 *)var_s2 + 0x40) = (s16) (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x1E) - *(s32 *)((u8 *)arg0 + 0x1894));
    *(s16 *)((u8 *)var_s2 + 0x42) = (s16) *(&D_00495B60 + (*(s32 *)((u8 *)arg0 + 0x1350) * 4));
    if (*(s32 *)((u8 *)arg0 + 0x1A48) >= 0) {
        *(s32 *)((u8 *)var_s2 + 0xE8) = 1;
        *(f32 *)((u8 *)var_s2 + 0xEC) = (f32) *(f32 *)((u8 *)arg0 + 0x1A40);
        *(s32 *)((u8 *)var_s2 + 0xF0) = 0x44E10000;
    } else {
        *(s32 *)((u8 *)var_s2 + 0xE8) = 0;
    }
    var_s1 = *(s32 *)((u8 *)temp_s3 + 0x400);
    temp_s0 = *(s32 *)((u8 *)temp_s3 + 0x3F8);
    memset(var_s2 + 0x46, 0, 0x40);
    memset(var_s2 + 0x86, 0, 0x40);
    if (var_s1 != temp_s0) {
        do {
            temp_v1 = temp_s3 + (var_s1 * 0x10);
            temp_v1_2 = *(u8 **)((u8 *)temp_v1 + 0x204);
            if (temp_v1_2 != NULL) {
                *(s16 *)((u8 *)var_s2 + 0x46) = (s16) *(s16 *)((u8 *)temp_v1_2 + 0);
                *(s16 *)((u8 *)var_s2 + 0x86) = (s16) *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0x204)) + 2);
            } else {
                *(s16 *)((u8 *)var_s2 + 0x46) = 0;
                *(s16 *)((u8 *)var_s2 + 0x86) = 0;
            }
            var_s1 = (var_s1 + 1) & 0x1F;
            var_s2 += 2;
        } while (var_s1 != temp_s0);
    }
}
