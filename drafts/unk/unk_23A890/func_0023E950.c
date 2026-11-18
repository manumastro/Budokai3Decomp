/* Draft (not built): func_0023E950 at 0x0023E950, size 0x3DC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0x24) @ 425: *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3 + 0x40, -1, 0.0f);
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023E950.s */

// src/unk/unk_23A890.c func_0023E950 cerr diff=-1/0
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
    s32 *temp_s2_2;
    s32 temp_a0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_v0_2;

    temp_s0 = gBtlSys;
    temp_v0 = func_0021C3D0(0);
    temp_s5 = func_0021C660(temp_v0);
    temp_v0_2 = BtlSys_GetSlot(temp_v0);
    temp_a0 = *(s32 *)((u8 *)temp_v0_2 + 0);
    temp_s2 = arg0 * 0x60;
    temp_s3 = &D_0058BF70 + temp_s2 + 0x90;
    if (temp_a0 & 0x80) {
        temp_f12 = *(f32 *)((u8 *)temp_v0_2 + 0x30);
        if (temp_f12 <= 50.0f) {
            func_00229800(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C)) + 0x28), temp_s3, -1, temp_f12);
        } else {
            func_00229800(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C)) + 0x30), temp_s3, -1, temp_f12 - 50.0f);
        }
        func_00229440(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3 + 0x40, -1, 0.0f);
    } else if (temp_a0 & 0x1000) {
        func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC44 + arg0) * 4)), temp_s3, -1, *(f32 *)((u8 *)temp_v0_2 + 0x24));
        func_00229440(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC44 + arg0) * 4)), temp_s3 + 0x40, -1, *(f32 *)((u8 *)temp_v0_2 + 0x24));
    } else {
        func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3, 0, 0.0f);
        func_00229440(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3 + 0x40, 0, 0.0f);
    }
    temp_s2_2 = &D_0058C040 + temp_s2;
    *temp_s2_2 = (s32) *(s16 *)((u8 *)temp_s5 + 2);
    temp_v1 = *(s32 *)((u8 *)temp_v0_2 + 0);
    if (temp_v1 & 0x80) {
        temp_f12_2 = *(f32 *)((u8 *)temp_v0_2 + 0x30);
        if (temp_f12_2 <= 50.0f) {
            func_00228AC0(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C)) + 0x28), temp_s3 + 0x20, -1, temp_f12_2);
            return;
        }
        func_00228AC0(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C)) + 0x30), temp_s3 + 0x20, -1, temp_f12_2 - 50.0f);
        return;
    }
    if (temp_v1 & 0x10) {
        temp_f12_3 = *(f32 *)((u8 *)temp_v0_2 + 0x40) + D_00470710;
        *(f32 *)((u8 *)temp_v0_2 + 0x40) = temp_f12_3;
        if (!(temp_f12_3 < 27.0f)) {
            *(s32 *)((u8 *)temp_v0_2 + 0) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0) ^ 0x10);
            *(f32 *)((u8 *)temp_v0_2 + 0x40) = 0.0f;
            func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3 + 0x20, 0, 0.0f);
            return;
        }
        if (!(temp_f12_3 < 10.0f)) {
            func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC50 + arg0) * 4)), temp_s3 + 0x20, -1, temp_f12_3 - 10.0f);
            return;
        }
        func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC4C + arg0) * 4)), temp_s3 + 0x20, -1, temp_f12_3);
        *temp_s2_2 = *(s32 *)((u8 *)temp_v0_2 + 0x10);
        return;
    }
    func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xE9C)) + 0x1C) + ((D_0046AC40 + arg0) * 4)), temp_s3 + 0x20, 0, 0.0f);
}
