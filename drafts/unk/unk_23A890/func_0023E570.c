/* Draft (not built): func_0023E570 at 0x0023E570, size 0x228, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x238, original 0x228
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023E570.s */

// src/unk/unk_23A890.c func_0023E570 size diff=76/142
void *BtlSys_GetSlot(s32);
s32 func_00228430(s32, u32, s32, s32);
s32 func_002284D0(s32);
s32 func_0022B900(s32, s32, f32);
extern f32 D_00470710;
extern s32 D_0058C190;
extern void func_00228410(void);
void func_0023E570(s32 arg0) {
    f32 *temp_v1;
    s32 temp_a3;
    s32 temp_t0;
    s32 var_s0;
    s32 var_s4;
    s32 var_v1;
    u32 var_a1;
    u8 *temp_a0;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;
    u8 *var_t1;

    var_s3 = gBtlSys;
    var_s4 = arg0;
    var_s0 = func_0021C3D0(0);
    var_s2 = func_0021C660(var_s0);
    func_0021C430(var_s0);
    var_s1 = BtlSys_GetSlot(var_s0);
    func_0021C400(var_s0);
    temp_a0 = *(u8 **)((u8 *)var_s3 + 0xE84);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04010000);
    D_00470238 = 0;
    var_v1 = 0;
    var_s0 = var_s4 * 0x64;
    var_t1 = ((u8 *)&D_0058BF70) + var_s0;
    temp_t0 = (*(u32 *)((u8 *)var_s2 + 0x10) / 1000) + ((u32) *(u32 *)((u8 *)var_s2 + 0x10) >> 0x1F);
    temp_a3 = (*(u32 *)((u8 *)var_s2 + 0x14) / 1000) + ((u32) *(u32 *)((u8 *)var_s2 + 0x14) >> 0x1F);
    var_a1 = 0x3E8;
    do {
        *(s32 *)((u8 *)var_t1 + 0x240) = (s32) (var_v1 >= temp_a3);
        *(f32 *)((u8 *)var_t1 + 0x224) = 1000.0f;
        if (var_v1 == temp_t0) {
            *(f32 *)((u8 *)var_t1 + 0x224) = (f32) ((s32) *(u32 *)((u8 *)var_s2 + 0x10) % 1000);
        }
        if (temp_t0 < var_v1) {
            *(f32 *)((u8 *)var_t1 + 0x224) = 0.0f;
        }
        var_v1 += 1;
        var_t1 += 4;
    } while (var_v1 < 7);
    if (*(s32 *)((u8 *)var_s1 + 0) & 0x200) {
        var_a1 = (u32) *(u32 *)((u8 *)var_s2 + 0x10) >> 0x1F;
        temp_v1 = (float *)((((*(u32 *)((u8 *)var_s2 + 0x10) / 1000) + var_a1) * 4) + (&D_0058C190 + var_s0));
        *temp_v1 += *(f32 *)((u8 *)var_s1 + 0x34);
    }
    if (*(s32 *)((u8 *)var_s1 + 0) & 0x400) {
        func_00228430(0, var_a1, 0x447A0000, temp_a3);
        func_002284D0(0);
        func_0022B900(*(s32 *)((u8 *)((var_s4 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0xE88)) + 0x1C)) + 0xA8), *(&D_0058C190 + var_s0), *(f32 *)((u8 *)var_s1 + 0x34));
        func_00228410();
    }
    if ((s32) *(u32 *)((u8 *)var_s2 + 0x10) < 0x3E8) {
        *(f32 *)((u8 *)var_s1 + 0x38) = (f32) (*(f32 *)((u8 *)var_s1 + 0x38) + D_00470710);
    }
}
