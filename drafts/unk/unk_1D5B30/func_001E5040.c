/* Draft (not built): func_001E5040 at 0x001E5040, size 0x1E8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  (*(f32 *)((u8 *)arg0 + 0x44) + sp54); @ 3733: *(f32 *)((u8 *)arg0 + 0x48) = (f32) (*(f32 *)((u8 *)arg0 + 0x48) + sp58);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E5040.s */

// src/unk/unk_1D5B30.c func_001E5040 cerr diff=-1/0
extern void func_0013B620(void *);
extern char D_003F0800[];
extern void amMotion_BuildMatrices(char *);
void func_001E5040(u8 *arg0) {
    f32 sp50;
    f32 var_f0;
    s32 temp_v0;
    s32 temp_v1;
    s8 *temp_s2;
    u8 *temp_s0;
    u8 *var_s1;

    temp_s2 = *(s8 **)((u8 *)arg0 + 0xB88);
    temp_v0 = *(s32 *)((u8 *)temp_s2 + 0x40C);
    if (temp_v0 < 0) {
        var_s1 = NULL;
    } else {
        var_s1 = *(u8 **)((u8 *)((temp_v0 * 4) + temp_s2) + 8);
    }
    temp_s0 = var_s1 + 0x50;
    func_0013B160(D_003F0800);
    func_0013B620(*(u8 **)((u8 *)arg0 + 0x17A4));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    if (*(s32 *)((u8 *)arg0 + 0x1864) & 1) {
        *(f32 *)((u8 *)arg0 + 0x40) = (f32) (*(f32 *)((u8 *)arg0 + 0x40) + sp50);
        *(f32 *)((u8 *)arg0 + 0x48) = (f32) (*(f32 *)((u8 *)arg0 + 0x48) + sp58);
        *(s32 *)((u8 *)var_s1 + 0x50) = 0;
        *(s32 *)((u8 *)temp_s0 + 8) = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0x1864) & 2) {
        *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + sp54);
        *(f32 *)((u8 *)temp_s0 + 4) = 0.0f;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x1864);
    if (temp_v1 & 4) {
        *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + sp54);
        var_f0 = *(f32 *)((u8 *)temp_s0 + 4) - sp54;
        goto block_12;
    }
    if (temp_v1 & 8) {
        var_f0 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC);
block_12:
        *(f32 *)((u8 *)temp_s0 + 4) = var_f0;
    }
    func_0013B160(var_s1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf28, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf29, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf30, 0x20($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, 0x30($s1) */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    amMotion_BuildMatrices((char *)(temp_s2));
    func_001E8640(arg0 + 0x650, -1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(f32 *)((u8 *)arg0 + 0x84) = (f32) (*(f32 *)((u8 *)arg0 + 0x84) + **(f32 **)((u8 *)arg0 + 0xB94));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {

    }
    *(f32 *)((u8 *)arg0 + 0x64) = *(f32 *)((u8 *)arg0 + 0x44);
    *(s32 *)((u8 *)arg0 + 0x1864) = 0;
}
