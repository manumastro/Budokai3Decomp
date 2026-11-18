/* Draft (not built): func_00287E60 at 0x00287E60, size 0x19C, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK Help_Load();                                /* extern */
void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *amTask_Create(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0012EAE0(M2C_UNK);                         /* extern */
M2C_UNK func_00286DA0(void *, s32);                 /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_0046B8D8;
extern void *D_0047082C;
extern u16 D_004B4B50;
extern M2C_UNK func_00286FD0;
extern M2C_UNK func_00287A70;

void *func_00287E60(s32 arg0, s32 arg1) {
    f32 var_f1;
    s32 temp_v0_3;
    s32 var_s3;
    u16 temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_s0 = D_004B4B50;
    temp_s1 = D_0047082C;
    var_s3 = arg1;
    if ((arg1 & 0xFF) >= 0xD) {
        var_s3 = 0;
    }
    temp_v0 = amTask_Create(&func_00287A70, 0, 0x2600, 8);
    M2C_FIELD(temp_s1, void **, 0x14) = temp_v0;
    temp_v0_2 = amHeap_Alloc(0x290, 0, &D_0046B8D8, 0x127);
    M2C_FIELD(temp_v0, void **, 0x30) = temp_v0_2;
    memset(temp_v0_2, 0, 0x290);
    M2C_FIELD(temp_v0_2, s16 *, 0x23C) = (s16) (arg0 & 0xFF);
    M2C_FIELD(temp_v0_2, s16 *, 0x25E) = (s16) (var_s3 & 0xFF);
    M2C_FIELD(temp_v0_2, s16 *, 0x25C) = -1;
    M2C_FIELD(temp_v0_2, s32 *, 0x270) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0x274) = 0;
    M2C_FIELD(temp_v0_2, s8 *, 0x262) = 1;
    M2C_FIELD(temp_v0_2, s8 *, 0x264) = 1;
    M2C_FIELD(temp_v0_2, s8 *, 0x267) = -1;
    temp_v0_3 = (func_0012EAE0(0x20) + 1) & 7;
    if (temp_v0_3 >= 0) {
        var_f1 = (f32) temp_v0_3;
    } else {
        var_f1 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
    }
    M2C_FIELD(temp_v0_2, f32 *, 0x280) = (f32) (60.0f * var_f1);
    M2C_FIELD(temp_v0_2, s8 *, 0x266) = 1;
    M2C_FIELD(temp_v0_2, s32 *, 0x284) = 0;
    M2C_FIELD(temp_v0_2, void **, 0x230) = amTask_Create(&func_00286FD0, 0, 0x2680, 8);
    temp_v1 = M2C_FIELD(temp_v0_2, void **, 0x230);
    M2C_FIELD(temp_v1, s16 *, 0x34) = -1;
    M2C_FIELD(temp_v1, s16 *, 0x36) = -1;
    func_00286DA0(temp_v0_2, ((temp_s0 & 0xFFFF) | 0x1000) & 0xFFFF);
    Help_Load();
    return temp_v0;
}
