/* Draft (not built): func_002F95E0 at 0x002F95E0, size 0x124, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void *amHeap_Alloc(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *amTask_Create(M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_002F91C0(void *, s32, s32);            /* extern */
M2C_UNK func_002F92F0(void *, M2C_UNK, s32);        /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK D_0046F7F0;
extern M2C_UNK func_002F91B0;

void *func_002F95E0(s8 arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg_sp0) {
    void *temp_s1;
    void *temp_v0;

    temp_s1 = amTask_Create(&func_002F91B0, 0, M2C_ERROR(/* Read from unset register $t1 */) & 0xFFFF, 8);
    temp_v0 = amHeap_Alloc(0x5B8, 0, &D_0046F7F0, 0x65);
    M2C_FIELD(temp_s1, void **, 0x30) = temp_v0;
    memset(temp_v0, 0, 0x5B8);
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) M2C_ERROR(/* Read from unset register $t3 */);
    M2C_FIELD(temp_v0, s32 *, 4) = arg_sp0;
    M2C_FIELD(temp_v0, s8 *, 9) = arg1;
    M2C_FIELD(temp_v0, s8 *, 0xA) = 1;
    M2C_FIELD(temp_v0, s8 *, 0xB) = arg0;
    M2C_FIELD(temp_v0, s16 *, 0xE) = (s16) M2C_ERROR(/* Read from unset register $t2 */);
    M2C_FIELD(temp_v0, s32 *, 0x24) = 0x3F800000;
    M2C_FIELD(temp_v0, s32 *, 0x28) = 0x3F800000;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    func_002F91C0(temp_s1, arg2, arg_sp0);
    func_002F92F0(temp_s1, 6, arg3);
    return temp_s1;
}
