/* Draft (not built): func_0012FFC0 at 0x0012FFC0, size 0x414, segment sys/amDraw3d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 567: func_0012FFC0(buf, 0, 0);
 * Original: asm/nonmatchings/sys/amDraw3d/func_0012FFC0.s */

// src/sys/amDraw3d.c func_0012FFC0 cerr diff=-1/0
extern u16 D_0047E5A0;
extern u16 D_0047E710;
extern s32 D_8000003F;
extern void *gPacketPtr;
void func_0012FFC0(s32 arg0, s32 arg1, u8 *arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 var_a2;
    f32 var_a3;
    f32 var_t0;
    f32 var_t1;
    f32 var_v1;
    s32 var_a0;
    s8 var_v0;
    u32 temp_t1;
    u8 *var_s0;

    var_a0 = arg0;
    if (arg2 != NULL) {
        temp_f1 = 16.0f * *(f32 *)((u8 *)arg2 + 0);
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_a3 = temp_f1;
        } else {
            var_a3 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1 - 2.1474836e9f)) | 0x80000000));
        }
        temp_f1_2 = 16.0f * *(f32 *)((u8 *)arg2 + 4);
        if (!(temp_f1_2 >= 2.1474836e9f)) {
            var_v1 = temp_f1_2;
        } else {
            var_v1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
        }
        temp_f1_3 = *(f32 *)((u8 *)arg2 + 8);
        if (!(temp_f1_3 >= 2.1474836e9f)) {
            var_t0 = temp_f1_3;
        } else {
            var_t0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_3 - 2.1474836e9f)) | (s32) &D_8000003F));
        }
        temp_f1_4 = *(f32 *)((u8 *)arg2 + 0xC);
        if (!(temp_f1_4 >= 2.1474836e9f)) {
            var_a2 = temp_f1_4;
        } else {
            var_a2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_4 - 2.1474836e9f)) | 0x80000000));
        }
    } else {
        var_a3 = 0.0f;
        var_v1 = 0.0f;
        var_t0 = M2C_BITWISE(f32, D_00470414);
        var_a2 = M2C_BITWISE(f32, D_00470418);
    }
    *(s32 *)((u8 *)gPacketPtr + 0) = 0x10000002;
    *(s64 *)((u8 *)gPacketPtr + 0x10) = (s64) (1 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)gPacketPtr + 0x18) = 0xE;
    if (arg1 == 2) {
        *(s8 *)((u8 *)gPacketPtr + 0x22) = (s8) (M2C_BITWISE(u32, var_t0) >> 6);
        *(s8 *)((u8 *)gPacketPtr + 0x23) = (s8) (D_0047045C | 0x30);
        *(s8 *)((u8 *)gPacketPtr + 0x27) = (s8) (D_0047045C | 0x30);
        *(s16 *)((u8 *)gPacketPtr + 0x24) = (s16) ((u32) D_00470494 >> 8);
        var_v0 = D_00470460;
    } else if (D_004704A8 != 0) {
        *(s8 *)((u8 *)gPacketPtr + 0x22) = (s8) ((u32) (M2C_BITWISE(s32, var_t0) + 0x3F) >> 6);
        *(s8 *)((u8 *)gPacketPtr + 0x23) = (s8) D_0047044C;
        *(s8 *)((u8 *)gPacketPtr + 0x27) = (s8) D_0047044C;
        if ((D_004703B0 ^ arg1) != 0) {
            *(s16 *)((u8 *)gPacketPtr + 0x24) = (s16) ((D_0047E710 & 0x1FF & 0x1FF) << 5);
        } else {
            *(s16 *)((u8 *)gPacketPtr + 0x24) = (s16) ((D_0047E5A0 & 0x1FF & 0x1FF) << 5);
        }
        if (D_0047044C != 1) {
            var_v0 = D_00470450;
        } else {
            var_v0 = 3;
        }
    } else {
        *(s8 *)((u8 *)gPacketPtr + 0x22) = (s8) ((u32) (M2C_BITWISE(s32, var_t0) + 0x3F) >> 6);
        *(s8 *)((u8 *)gPacketPtr + 0x23) = (s8) D_0047044C;
        *(s8 *)((u8 *)gPacketPtr + 0x27) = (s8) D_0047044C;
        *(s16 *)((u8 *)gPacketPtr + 0x24) = (s16) (D_00470474 << 5);
        if (D_0047044C != 1) {
            var_v0 = D_00470450;
        } else {
            var_v0 = 3;
        }
    }
    *(s8 *)((u8 *)gPacketPtr + 0x26) = (s8) ((s32) (D_00470414 + 0x3F) >> 6);
    *(s64 *)((u8 *)gPacketPtr + 0x28) = 0x50;
    var_s0 = ((u8 *)gPacketPtr) + 0x30;
loop_38:
    if (M2C_BITWISE(s32, var_a2) != 0) {
        *(s32 *)((u8 *)var_s0 + 0) = 0x10000005;
        *(s64 *)((u8 *)var_s0 + 0x10) = (s64) (3 | (0x10000000 << 0x20));
        *(s64 *)((u8 *)var_s0 + 0x18) = 0xE;
        if (M2C_BITWISE(u32, var_a2) >= 0x41U) {
            var_t1 = 9e-44f;
        } else {
            var_t1 = var_a2;
        }
        *(f32 *)((u8 *)var_s0 + 0x20) = var_t0;
        *(f32 *)((u8 *)var_s0 + 0x24) = var_t1;
        *(s64 *)((u8 *)var_s0 + 0x28) = 0x52;
        *(s16 *)((u8 *)var_s0 + 0x34) = M2C_BITWISE(s16, var_a3);
        *(s16 *)((u8 *)var_s0 + 0x36) = M2C_BITWISE(s16, var_v1);
        *(s64 *)((u8 *)var_s0 + 0x38) = 0x51;
        var_v1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_v1) + M2C_BITWISE(s32, var_t1)));
        var_a2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_a2) - M2C_BITWISE(s32, var_t1)));
        temp_t1 = (u32) ((var_v0 * (M2C_BITWISE(s32, var_t1) * M2C_BITWISE(s32, var_t0))) + 0xF) >> 4;
        *(s32 *)((u8 *)var_s0 + 0x40) = 0;
        *(s64 *)((u8 *)var_s0 + 0x48) = 0x53;
        *(u32 *)((u8 *)var_s0 + 0x50) = temp_t1;
        *(s32 *)((u8 *)var_s0 + 0x54) = 0x08000000;
        *(s32 *)((u8 *)var_s0 + 0x60) = (s32) (temp_t1 + 0x30000000);
        *(s32 *)((u8 *)var_s0 + 0x64) = var_a0;
        var_s0 += 0x70;
        var_a0 += temp_t1 * 0x10;
        goto loop_38;
    }
    *(s32 *)((u8 *)var_s0 + 0) = 0x60000002;
    *(s64 *)((u8 *)var_s0 + 0x10) = (s64) (0x8001 | (0x10000000 << 0x20));
    *(s64 *)((u8 *)var_s0 + 0x18) = 0xE;
    *(s64 *)((u8 *)var_s0 + 0x28) = 0x3F;
    amDma_Request(0, 2, 1, 1, 0, 0, 0, 0);
    gPacketPtr = var_s0 + 0x30;
}
