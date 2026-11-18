/* Draft (not built): func_00245DA0 at 0x00245DA0, size 0x604, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ed char *)' does not match 'Sp_CallHandler(int, struct Blk48 *)' @ 2026: Sp_CallHandler(2, &sp160, D_0046FE4C, temp_a3);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00245DA0.s */

// src/unk/unk_23A890.c func_00245DA0 cerr diff=-1/0
s32 func_00215990(s32, s32 *, void *, void *);
s32 func_00218440(s32, s32 *, void *, void *);
s32 func_002C6D40(void *, s32, s32, void *);
s32 func_002CA230(s32, s32 *, void *, void *);
s32 func_002CA290(s32, s32 *, void *, void *);
s32 func_002CA2F0(s32 *, s32, s32);
extern s32 D_00451B20;
void func_00245DA0(s32 arg0, u8 **arg1) {
    s32 sp30;
    u8 *sp40;
    s16 sp44;
    s16 sp46;
    s32 sp50;
    u8 *sp60;
    s32 sp68;
    s32 sp70;
    s32 sp74;
    s16 sp78;
    s16 sp7A;
    s16 sp7C;
    s16 sp7E;
    s32 sp80;
    s32 sp8C;
    s32 sp90;
    s32 spB0;
    s16 sp100;
    s16 sp102;
    s16 sp104;
    s16 sp106;
    s16 sp108;
    u8 *sp11C;
    s32 sp128;
    s32 sp12C;
    s16 sp144;
    s16 sp146;
    s16 sp148;
    s16 sp150;
    s16 sp152;
    s16 sp154;
    s32 sp160;
    s32 sp170;
    s32 sp174;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    u8 *temp_a3;
    u8 *temp_s1;

    temp_s1 = *arg1;
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    temp_a3 = D_0046FE4C + (temp_a0 * 0x480) + 0x10;
    switch (arg0) {
    case 0x12C:
        sp170 = temp_a0;
        sp174 = 0;
        Sp_CallHandler(2, &sp160, D_0046FE4C, temp_a3);
        return;
    case 0x12D:
        memset(&spB0, 0, 0xB0);
        sp108 = 0;
        sp100 = 2;
        sp104 = 1;
        sp11C = temp_s1;
        sp12C = 0x14;
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x68) {
            sp102 = 3;
            sp150 = 2;
            sp152 = 9;
            sp154 = 3;
            sp128 = 0x14;
            sp144 = 1;
            sp148 = 1;
            sp146 = 0;
            sp106 = 0;
            func_00214DD0(&spB0, 0x14);
            func_00214F80(sp102, &spB0);
            return;
        }
        sp102 = 0;
        sp144 = 7;
        sp146 = 7;
        sp106 = 8;
        sp152 = 0x17;
        sp150 = 0;
        sp128 = 3;
        func_00214DD0(&spB0, 0x14);
        func_00214F80(sp102, &spB0);
        sp128 = 2;
        func_00214DD0(&spB0, 0);
        func_00214F80(sp102, &spB0);
        return;
    case 0x12E:
        memset(&spB0, 0, 0xB0);
        sp108 = 0;
        sp100 = 2;
        sp104 = 1;
        sp11C = temp_s1;
        sp12C = 0x14;
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x68) {
            sp102 = 3;
            sp150 = 2;
            sp152 = 9;
            sp154 = 3;
            sp128 = 0x14;
            sp144 = 1;
            sp148 = 1;
            sp146 = 0;
            sp106 = 0;
            func_00214DD0(&spB0, 0x14);
            func_00214F80(sp102, &spB0);
            return;
        }
        sp102 = 0;
        sp144 = 7;
        sp146 = 7;
        sp106 = 8;
        sp152 = 0x17;
        sp150 = 0;
        sp128 = 0;
        func_00214DD0(&spB0, 0x14);
        func_00214F80(sp102, &spB0);
        sp128 = 0x12;
        func_00214DD0(&spB0, 0);
        func_00214F80(sp102, &spB0);
        return;
    case 0x12F:
        memset(&spB0, 0, 0xB0);
        sp108 = 0;
        sp100 = 2;
        sp104 = 1;
        sp11C = temp_s1;
        sp12C = 0x14;
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x68) {
            sp102 = 3;
            sp150 = 2;
            sp152 = 9;
            sp154 = 3;
            sp128 = 0x14;
            sp144 = 1;
            sp148 = 1;
            sp146 = 0;
            sp106 = 0;
            func_00214DD0(&spB0, 0x14);
            func_00214F80(sp102, &spB0);
            return;
        }
        sp102 = 0;
        sp144 = 7;
        sp146 = 7;
        sp106 = 8;
        sp152 = 0x17;
        sp150 = 0;
        sp128 = 6;
        func_00214DD0(&spB0, 0x14);
        func_00214F80(sp102, &spB0);
        sp128 = 7;
        func_00214DD0(&spB0, 0);
        func_00214F80(sp102, &spB0);
        return;
    case 0x130:
        if (*(s32 *)((u8 *)temp_a3 + 0x1C) == -1) {
            *(s32 *)((u8 *)temp_a3 + 0x1C) = (s32) *(s32 *)((u8 *)temp_a3 + 0x14);
            memset(&spB0, 0, 0xB0);
            sp100 = 0x400;
            sp102 = 0xA;
            sp154 = 0xA;
            sp104 = 1;
            sp152 = 0x10;
            sp128 = 1;
            sp144 = 5;
            sp146 = 5;
            sp148 = 5;
            sp150 = 0;
            sp11C = temp_s1;
            func_00214DD0(&spB0, 1);
            func_00214F80(sp102, &spB0);
            memset(&sp30, 0, 0x20);
            sp44 = 4;
            sp40 = temp_s1;
            sp46 = 0xE;
            func_0025BD40(&sp30);
            return;
        }
    default:
        return;
    case 0x131:
        sp8C = 1;
        sp90 = *(s32 *)((u8 *)temp_s1 + 0x1350);
        func_00218440(0x10, &sp80, D_0046FE4C, temp_a3);
        return;
    case 0x132:
        func_002CA290(-1, &jtbl_0046AD10, D_0046FE4C, temp_a3);
        return;
        return;
    case 0x134:
        memset(&sp50, 0, 0x30);
        sp78 = 7;
        sp68 = 0;
        sp7E = 2;
        sp60 = temp_s1;
        sp7C |= ~0x3FFF;
        temp_a1 = *(s32 *)((u8 *)temp_s1 + 0x1CFC);
        var_a0 = *(&D_00451B20 + (temp_a1 * 4));
        if (temp_a1 == 0x1B) {
            temp_v1 = *(s32 *)((u8 *)temp_s1 + 0xBA4);
            if ((temp_v1 == 1) || (temp_v1 == 2)) {
                var_a0 = 0x23;
            }
            if (temp_v1 == 5) {
                goto block_33;
            }
        } else if (temp_a1 == 0x26) {
            temp_v1_2 = *(s32 *)((u8 *)temp_s1 + 0xBA4);
            if (temp_v1_2 == 1) {
                var_a0 = 0x23;
            }
            if (temp_v1_2 == 2) {
block_33:
                var_a0 = 0;
            }
        }
        sp7A = (s16) var_a0;
        sp70 = (*(s32 *)((u8 *)temp_s1 + 0xBA4) * 2) + 0x19;
        sp74 = (*(s32 *)((u8 *)temp_s1 + 0xBA4) * 2) + 0x19;
        func_002CA2F0(&sp50, temp_a1, 2);
        func_00244410(temp_s1, sp7A);
        return;
    case 0x135:
        func_002CA290(temp_a0, &jtbl_0046AD10, D_0046FE4C, temp_a3);
        return;
    case 0x136:
        func_002CA230(temp_a0, &jtbl_0046AD10, D_0046FE4C, temp_a3);
        return;
    case 0x137:
        *(s16 *)((u8 *)D_0046FE4C + 0x914) = 1;
        return;
    case 0x138:
        *(s16 *)((u8 *)D_0046FE4C + 0x914) = 0;
        *(s32 *)((u8 *)D_0046FE4C + 0x910) = 0;
        return;
    case 0x139:
        func_00215990(-1, &jtbl_0046AD10, D_0046FE4C, temp_a3);
        return;
    case 0x13A:
        *(s16 *)((u8 *)D_0046FE4C + 0x918) = 1;
        return;
    case 0x13C:
        sp170 = temp_a0;
        Sp_CallHandler(5, &sp160, D_0046FE4C, temp_a3);
        return;
    case 0x13D:
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x25) {
            func_002C6D40(temp_s1, 2, 9, temp_a3);
        }
        break;
    }
}
