/* Draft (not built): func_0023E950 at 0x0023E950, size 0x3DC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 104 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3F4, original 0x3DC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023E950.s */

// src/unk/unk_23A890.c func_0023E950 size diff=104/253
void *BtlSys_GetSlot(s32);
s32 func_00228AC0(s32, void *, s32, f32);
s32 func_00229440(s32, void *, s32, f32);
s32 func_00229800(s32, void *, s32, f32);
extern s32 D_0046AC40;
extern s32 D_0046AC44;
extern s32 D_0046AC4C;
extern s32 D_0046AC50;
extern f32 D_00470710;
extern s32 D_0058C040;
void func_0023E950(s32 arg0) {
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s3;
    u8 *var_s4;
    u8 *var_s5;

    var_s0 = gBtlSys;
    var_s1 = arg0;
    var_s2 = func_0021C3D0(0);
    var_s5 = func_0021C660(var_s2);
    temp_v0 = BtlSys_GetSlot(var_s2);
    temp_a0 = *(s32 *)((u8 *)temp_v0 + 0);
    var_s4 = temp_v0;
    var_s2 = var_s1 * 0x60;
    var_s3 = ((u8 *)&D_0058BF70) + var_s2 + 0x90;
    if (temp_a0 & 0x80) {
        temp_f12 = *(f32 *)((u8 *)var_s4 + 0x30);
        if (temp_f12 <= 50.0f) {
            func_00229800(*(s32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C)) + 0x28), var_s3, -1, temp_f12);
        } else {
            func_00229800(*(s32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C)) + 0x30), var_s3, -1, temp_f12 - 50.0f);
        }
        func_00229440(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + var_s1) * 4)), var_s3 + 0x40, -1, 0.0f);
    } else if (temp_a0 & 0x1000) {
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC44 + var_s1) * 4)), var_s3, -1, *(f32 *)((u8 *)var_s4 + 0x24));
        func_00229440(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC44 + var_s1) * 4)), var_s3 + 0x40, -1, *(f32 *)((u8 *)var_s4 + 0x24));
    } else {
        func_00229800(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + var_s1) * 4)), var_s3, 0, 0.0f);
        func_00229440(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + var_s1) * 4)), var_s3 + 0x40, 0, 0.0f);
    }
    var_s2 = (s32) (&D_0058C040 + var_s2);
    *(s32 *)var_s2 = (s32) *(s16 *)((u8 *)var_s5 + 2);
    temp_v1 = *(s32 *)((u8 *)var_s4 + 0);
    if (temp_v1 & 0x80) {
        temp_f12_2 = *(f32 *)((u8 *)var_s4 + 0x30);
        if (temp_f12_2 <= 50.0f) {
            func_00228AC0(*(s32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C)) + 0x28), var_s3 + 0x20, -1, temp_f12_2);
            return;
        }
        func_00228AC0(*(s32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C)) + 0x30), var_s3 + 0x20, -1, temp_f12_2 - 50.0f);
        return;
    }
    if (temp_v1 & 0x10) {
        temp_f12_3 = *(f32 *)((u8 *)var_s4 + 0x40) + D_00470710;
        *(f32 *)((u8 *)var_s4 + 0x40) = temp_f12_3;
        if (!(temp_f12_3 < 27.0f)) {
            *(s32 *)((u8 *)var_s4 + 0) = (s32) (*(s32 *)((u8 *)var_s4 + 0) ^ 0x10);
            *(f32 *)((u8 *)var_s4 + 0x40) = 0.0f;
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + var_s1) * 4)), var_s3 + 0x20, 0, 0.0f);
            return;
        }
        if (!(temp_f12_3 < 10.0f)) {
            func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC50 + var_s1) * 4)), var_s3 + 0x20, -1, temp_f12_3 - 10.0f);
            return;
        }
        func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC4C + var_s1) * 4)), var_s3 + 0x20, -1, temp_f12_3);
        *(s32 *)var_s2 = (s32) *(s32 *)((u8 *)var_s4 + 0x10);
        return;
    }
    func_00228AC0(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + var_s1) * 4)), var_s3 + 0x20, 0, 0.0f);
}
