/* Draft (not built): func_0012FBF0 at 0x0012FBF0, size 0x354, segment sys/amDraw3d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); func_0012FF50(...)' redeclared was declared as: 'int (...)' now declared as: 'void ()' @ 169: void func_0012FF50(void) {
 * Original: asm/nonmatchings/sys/amDraw3d/func_0012FBF0.s */

// src/sys/amDraw3d.c func_0012FBF0 cerr diff=-1/0
extern s32 D_00459F70;
extern u16 D_0047E5A0;
extern u16 D_0047E710;
void func_0012FBF0(s64 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    f32 var_s0;
    f32 var_s1;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s4_2;

    if (arg2 != NULL) {
        var_s1 = *(f32 *)((u8 *)arg2 + 0);
        var_s0 = *(f32 *)((u8 *)arg2 + 4);
        var_s3 = *(s32 *)((u8 *)arg2 + 8);
        var_s2 = *(s32 *)((u8 *)arg2 + 0xC);
    } else {
        var_s1 = 0.0f;
        var_s0 = 0.0f;
        var_s3 = D_00470414;
        var_s2 = D_00470418;
    }
    amDraw3d_Sync();
    amDma_Request(0, 1, 1, 1, 0, 0, 0, 0);
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
    do {

    } while (!(*(s64 *)0x12001000 & 2));
    *(u8 *)0x12001000 = (s64) (*(u8 *)0x12001000 & M2C_ERROR(/* unknown instruction: pcpyld $v0, $zero, $v0 */));
    temp_v0 = (s32) &D_00459F70 | 0x20000000;
    if (arg1 == 2) {
        *(s16 *)((u8 *)temp_v0 + 0) = (s16) ((u32) D_00470494 >> 8);
        *(s8 *)((u8 *)temp_v0 + 3) = (s8) ((D_0047045C & 0x3E) | 0x30);
        *(s8 *)((u8 *)temp_v0 + 7) = (s8) ((D_0047045C & 0x3E) | 0x30);
        var_s4 = D_00470460 * (var_s3 * var_s2);
    } else {
        *(s8 *)((u8 *)temp_v0 + 3) = (s8) (D_0047044C & 0xE);
        *(s8 *)((u8 *)temp_v0 + 7) = (s8) (D_0047044C & 0xE);
        if ((D_004704A8 != 0) && (D_00470408 == 1)) {
            if ((D_004703B0 ^ arg1) != 0) {
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
    *(s32 *)((u8 *)temp_v0 + 0x20) = var_s3;
    *(s32 *)((u8 *)temp_v0 + 0x24) = var_s2;
    amDma_Request(0, 1, 1, 1, 0, 0, 0, 0);
    amDma_WaitQueue(0);
    sceGsSyncPath(0, 0);
    *(u8 *)0x10003C00 = (s32) (*(s32 *)0x10003C00 | 0x800000);
    *(s64 *)0x12001040 = 1;
    M2C_SYNC();
    var_s4_2 = (s32) (var_s4 + 0xF) >> 4;
loop_18:
    if (var_s4_2 >= 0xF001) {
        amDma_Request(0, 1, 0, 0, 0, 0, 0, 0);
        var_s4_2 = (var_s4_2 - 0x8000) - 0x7000;
        goto loop_18;
    }
    amDma_Request(0, 1, 0, 0, 0, 0, 0, 0);
    if (arg3 != 0) {
        func_0012FF50();
    }
}
