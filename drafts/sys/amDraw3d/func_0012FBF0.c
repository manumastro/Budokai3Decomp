/* Draft (not built): func_0012FBF0 at 0x0012FBF0, size 0x354, segment sys/amDraw3d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x30C, original 0x354
 * Original: asm/nonmatchings/sys/amDraw3d/func_0012FBF0.s */

// src/sys/amDraw3d.c func_0012FBF0 size diff=80/195
void func_0012FF50(void);
extern s32 D_00459F70;
extern u16 D_0047E5A0;
extern u16 D_0047E710;
void func_0012FBF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_s6;
    u32 var_s2;
    u32 var_s3;
    u64 var_s5;

    var_s5 = (unsigned long)(arg0);
    var_s4 = arg1;
    var_s6 = arg3;
    if ((s32)(arg2) != 0) {
        var_s1 = *(s32 *)((u8 *)arg2 + 0);
        var_s0 = *(s32 *)((u8 *)arg2 + 4);
        var_s3 = *(u32 *)((u8 *)arg2 + 8);
        var_s2 = *(u32 *)((u8 *)arg2 + 0xC);
    } else {
        var_s1 = 0;
        var_s0 = 0;
        var_s3 = D_00470414;
        var_s2 = D_00470418;
    }
    amDraw3d_Sync();
    amDma_Request(0, 1, 1, 1, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
    do {

    } while (!(*(s64 *)0x12001000 & 2));
    *(u8 *)0x12001000 = (s64) (*(u8 *)0x12001000 & M2C_ERROR(/* unknown instruction: pcpyld $v0, $zero, $v0 */));
    temp_v0 = (s32) &D_00459F70 | 0x20000000;
    if (var_s4 == 2) {
        *(s16 *)((u8 *)temp_v0 + 0) = (s16) ((u32) D_00470494 >> 8);
        *(s8 *)((u8 *)temp_v0 + 3) = (s8) ((D_0047045C & 0x3E) | 0x30);
        *(s8 *)((u8 *)temp_v0 + 7) = (s8) ((D_0047045C & 0x3E) | 0x30);
        var_s4 = D_00470460 * (var_s3 * var_s2);
    } else {
        *(s8 *)((u8 *)temp_v0 + 3) = (s8) (D_0047044C & 0xE);
        *(s8 *)((u8 *)temp_v0 + 7) = (s8) (D_0047044C & 0xE);
        if ((D_004704A8 != 0) && (D_00470408 == 1)) {
            if ((D_004703B0 ^ var_s4) != 0) {
                *(s16 *)((u8 *)temp_v0 + 0) = (s16) ((D_0047E710 & 0x1FF & 0x1FF) << 5);
            } else {
                *(s16 *)((u8 *)temp_v0 + 0) = (s16) ((D_0047E5A0 & 0x1FF & 0x1FF) << 5);
            }
        } else {
            *(s16 *)((u8 *)temp_v0 + 0) = (s16) (D_00470474 << 5);
        }
        var_s4 = D_00470450 * (var_s3 * var_s2);
    }
    *(s16 *)((u8 *)temp_v0 + 0x10) = (s16) var_s1;
    *(s16 *)((u8 *)temp_v0 + 0x12) = (s16) var_s0;
    *(u32 *)((u8 *)temp_v0 + 0x20) = var_s3;
    *(u32 *)((u8 *)temp_v0 + 0x24) = var_s2;
    amDma_Request(0, 1, 1, 1, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
    *(u8 *)0x10003C00 = (s32) (*(s32 *)0x10003C00 | 0x800000);
    *(s64 *)0x12001040 = 1;
    M2C_SYNC();
    var_s4 = (s32) (var_s4 + 0xF) >> 4;
    var_s5 <<= 0x24;
    var_s5 = var_s5 >> 0x24;
loop_18:
    if (var_s4 >= 0xF001) {
        amDma_Request(0, 1, 0, 0, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
        var_s5 += 0xF0000;
        var_s4 = (var_s4 - 0x8000) - 0x7000;
        goto loop_18;
    }
    amDma_Request(0, 1, 0, 0, M2C_ERROR(/* Read from unset register $a4 */), M2C_ERROR(/* Read from unset register $a5 */), M2C_ERROR(/* Read from unset register $a6 */), M2C_ERROR(/* Read from unset register $a7 */));
    if (var_s6 != 0) {
        func_0012FF50();
    }
}
