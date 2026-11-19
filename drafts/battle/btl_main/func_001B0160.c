/* Draft (not built): func_001B0160 at 0x001B0160, size 0x214, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 59 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1EC, original 0x214
 * Original: asm/nonmatchings/battle/btl_main/func_001B0160.s */

// src/battle/btl_main.c func_001B0160 size diff=59/123
void func_001B0160(void *arg0) {
    void (**var_s0)();
    void (*temp_v0)(u8 *);
    void (*var_v0)();

    temp_v0 = D_00468270[*(s32 *)((u8 *)arg0 + 0x30)];
    if (temp_v0 != NULL) {
        temp_v0((unsigned char *)(gBattle));
        *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) + 1);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)gBattle + 0x8970) = 0;
    gBattle->unk8954[0x158] = 1;
    var_v0 = *D_004682B0;
    var_s0 = D_004682B0;
    if (var_v0 != NULL) {
        do {
            var_v0();
            var_s0 += 4;
            var_v0 = *var_s0;
        } while (var_v0 != NULL);
    }
    Fade_Request(0xA, NULL, 0);
    amTask_Create((void (*)(u8 *)) func_001AFFA0, (void *)(NULL), 0x4100, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    amTask_Create((void (*)(u8 *)) func_001AFDF0, (void *)(NULL), 0x3000, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    amTask_Create((void (*)(u8 *)) Btl_TaskPostDraw, (void *)(NULL), 0x3F00, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    amTask_Create((void (*)(u8 *)) func_001AFC50, (void *)(NULL), 0x3900, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    amTask_Create((void (*)(u8 *)) func_001AF9A0, (void *)(NULL), 0x9F10, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    if (*(s32 *)((u8 *)gBattle + 0x88D8) >= 3) {
        amTask_Create((void (*)(u8 *)) Btl_ToggleF8975, (void *)(NULL), 0x9FF0, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
    }
    D_004682E0[*(s32 *)((u8 *)gBattle + 0x88F8)]();
    func_001482C0(0);
    amTask_Kill(arg0);
}
