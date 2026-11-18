/* Draft (not built): func_001890C0 at 0x001890C0, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_001890C0.s */

s32 ADXT_GetNumChan(s32);                           /* extern */
s32 ADXT_GetNumSmpl(s32);                           /* extern */
s32 ADXT_GetSfreq(s32);                             /* extern */
s32 func_00189178(s32);                             /* extern */
void *func_00189BC0();                              /* extern */

void func_001890C0(u8 *arg0) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 *temp_v0;

    temp_v0 = func_00189BC0();
    if ((temp_v0 != NULL) && (*(s32 *)((u8 *)temp_v0 + 0) == 0)) {
        temp_s0 = **(s32 **)((u8 *)arg0 + 0x1CB4);
        if (func_00189178(temp_s0) != 0) {
            *(s32 *)((u8 *)temp_v0 + 0x10) = ADXT_GetSfreq(temp_s0);
            *(s32 *)((u8 *)temp_v0 + 0x14) = ADXT_GetNumSmpl(temp_s0);
            temp_v0_2 = ADXT_GetNumChan(temp_s0);
            *(s32 *)((u8 *)temp_v0 + 0xC) = temp_v0_2;
            *(s32 *)((u8 *)temp_v0 + 0) = 1;
            *(s32 *)((u8 *)temp_v0 + 8) = 1;
            temp_v0_3 = *(s32 *)((u8 *)temp_v0 + 0x10) * temp_v0_2 * 9;
            *(s32 *)((u8 *)temp_v0 + 4) = (s32) ((s32) ((temp_v0_3 < 0) ? (temp_v0_3 + 0xF) : temp_v0_3) >> 4);
        }
    }
}
