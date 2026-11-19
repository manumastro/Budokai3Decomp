/* Draft (not built): func_00228FA0 at 0x00228FA0, size 0x498, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'unsigned char *' mwccps2.exe Compiler: @ 697: func_00228FA0(n[2], t);
 * Original: asm/nonmatchings/battle/a2d/func_00228FA0.s */

// src/battle/a2d.c func_00228FA0 cerr diff=-1/0
s32 memcpy(f32 *, s32 *, s32);
void func_00228FA0(u8 *arg0, u8 *arg1, s32 arg2, f32 fparg0) {
    s32 sp2F;
    s32 sp2E;
    s32 sp2D;
    f32 sp24;
    s32 sp28;
    u8 sp2C;
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f12;
    s16 temp_a0_2;
    s16 temp_a3;
    s16 temp_a3_2;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 var_a2;
    u8 *temp_a1;
    u8 *temp_t1;
    u8 *temp_v1;

    var_a2 = arg2;
    var_f12 = fparg0;
    if ((arg0 != NULL) && (temp_a0 = *(s32 *)((u8 *)arg0 + 0x18), (temp_a0 != 0))) {
        if (arg0 != NULL) {
            if (temp_a0 == 0) {
                goto block_5;
            }
            if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                var_f12 = (f32) ((s32) M2C_ERROR(/* Read from unset register $f0 */) % (s16) *(s16 *)((u8 *)arg0 + 0xA)) + (var_f12 - (f32) M2C_ERROR(/* Read from unset register $f0 */));
            } else {
                temp_f0 = (f32) *(s16 *)((u8 *)arg0 + 0xA);
                if (!(var_f12 < temp_f0)) {
                    var_f12 = temp_f0;
                }
            }
        } else {
block_5:
            var_f12 = 0.0f;
        }
        if (var_a2 < 0) {
            if (var_f12 == (f32) *(s16 *)((u8 *)arg0 + 0xA)) {
                var_a2 = *(s16 *)((u8 *)arg0 + 8) - 1;
            } else {
                var_a2 = func_002270B0(temp_a0, *(s16 *)((u8 *)arg0 + 8), -1, var_f12);
            }
        }
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C);
        temp_t1 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x18) + (var_a2 * 4));
        temp_a3 = *(s16 *)((u8 *)temp_t1 + 2);
        temp_a1 = temp_v1 + (var_a2 << 5);
        switch (temp_a3) {                          /* irregular */
        case 0:
            *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
            *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
            *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
            *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
            *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
            *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
            *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
            *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
            *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
            *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
            *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
            return;
        case 1:
            temp_a3_2 = *(s16 *)((u8 *)temp_t1 + 0);
            temp_f2 = M2C_ERROR(/* Read from unset register $f12 */) - (f32) temp_a3_2;
            if (temp_f2 < 0.00001f) {
                *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
                *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
                *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
                *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
                *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
                *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
                *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
                *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
                *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
                return;
            }
            if (var_a2 == (*(s16 *)((u8 *)arg0 + 8) - 1)) {
                if (*(s32 *)((u8 *)arg0 + 0) & 2) {
                    temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xA);
                    if (((f32) temp_a0_2 - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                        *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_v1 + 0);
                        *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_v1 + 4);
                        *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_v1 + 8);
                        *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_v1 + 0xC);
                        *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_v1 + 0x10);
                        *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_v1 + 0x11);
                        *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_v1 + 0x12);
                        *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_v1 + 0x13);
                        *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_v1 + 0x14);
                        *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_v1 + 0x18);
                        *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_v1 + 0x1C);
                        return;
                    }
                    func_002273B0(arg1, temp_a1, temp_v1, temp_a3_2, temp_f2 / (f32) (((s64) ((s64) temp_a0_2 << 0x30) >> 0x30) - ((s64) ((s64) temp_a3_2 << 0x30) >> 0x30)));
                    return;
                }
                *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0);
                *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
                *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
                *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
                *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x10);
                *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x11);
                *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x12);
                *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x13);
                *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x14);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x18);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x1C);
                return;
            }
            temp_v1_2 = *(s16 *)((u8 *)temp_t1 + 4);
            if (((f32) temp_v1_2 - M2C_ERROR(/* Read from unset register $f12 */)) < 0.00001f) {
                *(s32 *)((u8 *)arg1 + 0) = (s32) *(s32 *)((u8 *)temp_a1 + 0x20);
                *(s32 *)((u8 *)arg1 + 4) = (s32) *(s32 *)((u8 *)temp_a1 + 0x24);
                *(s32 *)((u8 *)arg1 + 8) = (s32) *(s32 *)((u8 *)temp_a1 + 0x28);
                *(s32 *)((u8 *)arg1 + 0xC) = (s32) *(s32 *)((u8 *)temp_a1 + 0x2C);
                *(u8 *)((u8 *)arg1 + 0x10) = (u8) *(u8 *)((u8 *)temp_a1 + 0x30);
                *(u8 *)((u8 *)arg1 + 0x11) = (u8) *(u8 *)((u8 *)temp_a1 + 0x31);
                *(u8 *)((u8 *)arg1 + 0x12) = (u8) *(u8 *)((u8 *)temp_a1 + 0x32);
                *(u8 *)((u8 *)arg1 + 0x13) = (u8) *(u8 *)((u8 *)temp_a1 + 0x33);
                *(s32 *)((u8 *)arg1 + 0x14) = (s32) *(s32 *)((u8 *)temp_a1 + 0x34);
                *(f32 *)((u8 *)arg1 + 0x18) = (f32) *(f32 *)((u8 *)temp_a1 + 0x38);
                *(f32 *)((u8 *)arg1 + 0x1C) = (f32) *(f32 *)((u8 *)temp_a1 + 0x3C);
                return;
            }
            func_002273B0(arg1, temp_a1, temp_a1 + 0x20, temp_a3_2, temp_f2 / (f32) (((s64) ((s64) temp_v1_2 << 0x30) >> 0x30) - ((s64) ((s64) temp_a3_2 << 0x30) >> 0x30)));
            return;
        }
    } else {
        *(s32 *)((u8 *)arg1 + 0xC) = 0x3F800000;
        *(s32 *)((u8 *)arg1 + 8) = 0x3F800000;
        *(s32 *)((u8 *)arg1 + 4) = 0x3F800000;
        *(s32 *)((u8 *)arg1 + 0) = 0x3F800000;
        sp28 = 0;
        memcpy(&sp24, &sp28, 4);
        sp2C = (f32) sp24;
        *(u8 *)((u8 *)arg1 + 0x10) = sp2C;
        *(u8 *)((u8 *)arg1 + 0x11) = sp2D;
        *(u8 *)((u8 *)arg1 + 0x12) = sp2E;
        *(u8 *)((u8 *)arg1 + 0x13) = sp2F;
        *(s32 *)((u8 *)arg1 + 0x14) = 1;
    case 3:
    case 2:
    }
}
