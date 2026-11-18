/* Draft (not built): func_002E0E50 at 0x002E0E50, size 0xA20, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); declared was declared as: 'void (struct Task *)' now declared as: 'void (void *)' @ 84: extern void amTask_Kill(void *);
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E0E50.s */

// src/menu/mn_option_2.c func_002E0E50 cerr diff=-1/0
s32 func_0022D0E0(s32, s32);
extern void amTask_Kill(void *);
extern void StrStatus_Exit();
extern void Help_Exit();
extern void Save_Exit();
void func_002E0E50(void) {
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_18;
    s32 temp_a0_19;
    s32 temp_a0_20;
    s32 temp_a0_21;
    s32 temp_a0_22;
    s32 temp_a0_23;
    s32 temp_a0_24;
    s32 temp_a0_25;
    s32 temp_a0_26;
    s32 temp_a0_27;
    s32 temp_a0_28;
    s32 temp_a0_29;
    s32 temp_a0_2;
    s32 temp_a0_30;
    s32 temp_a0_31;
    s32 temp_a0_32;
    s32 temp_a0_33;
    s32 temp_a0_34;
    s32 temp_a0_35;
    s32 temp_a0_36;
    s32 temp_a0_37;
    s32 temp_a0_38;
    s32 temp_a0_39;
    s32 temp_a0_3;
    s32 temp_a0_40;
    s32 temp_a0_41;
    s32 temp_a0_42;
    s32 temp_a0_43;
    s32 temp_a0_44;
    s32 temp_a0_45;
    s32 temp_a0_46;
    s32 temp_a0_47;
    s32 temp_a0_48;
    s32 temp_a0_49;
    s32 temp_a0_4;
    s32 temp_a0_50;
    s32 temp_a0_51;
    s32 temp_a0_52;
    s32 temp_a0_53;
    s32 temp_a0_54;
    s32 temp_a0_55;
    s32 temp_a0_56;
    s32 temp_a0_57;
    s32 temp_a0_58;
    s32 temp_a0_59;
    s32 temp_a0_5;
    s32 temp_a0_60;
    s32 temp_a0_61;
    s32 temp_a0_62;
    s32 temp_a0_63;
    s32 temp_a0_64;
    s32 temp_a0_65;
    s32 temp_a0_66;
    s32 temp_a0_67;
    s32 temp_a0_68;
    s32 temp_a0_69;
    s32 temp_a0_6;
    s32 temp_a0_70;
    s32 temp_a0_71;
    s32 temp_a0_72;
    s32 temp_a0_73;
    s32 temp_a0_74;
    s32 temp_a0_75;
    s32 temp_a0_76;
    s32 temp_a0_77;
    s32 temp_a0_78;
    s32 temp_a0_79;
    s32 temp_a0_7;
    s32 temp_a0_80;
    s32 temp_a0_81;
    s32 temp_a0_82;
    s32 temp_a0_83;
    s32 temp_a0_84;
    s32 temp_a0_85;
    s32 temp_a0_86;
    s32 temp_a0_87;
    s32 temp_a0_88;
    s32 temp_a0_89;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 var_s1_10;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_s1_7;
    s32 var_s1_8;
    s32 var_s1_9;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s4;
    u8 *temp_a0_90;
    u8 *temp_a0_91;
    u8 *temp_a0_92;
    u8 *temp_s0;
    u8 *var_s1;
    u8 *var_s1_2;
    u8 *var_s2_10;
    u8 *var_s2_3;
    u8 *var_s2_4;
    u8 *var_s2_5;
    u8 *var_s2_6;
    u8 *var_s2_7;
    u8 *var_s2_8;
    u8 *var_s2_9;

    temp_s0 = (u8 *)(gOptionWork);
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x10);
    if (temp_a0 != 0) {
        func_0022D0E0(temp_a0, 1);
        *(s32 *)((u8 *)temp_s0 + 0x10) = 0;
    }
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x34);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
        *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
    }
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x264);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
        *(s32 *)((u8 *)temp_s0 + 0x264) = 0;
    }
    temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x38);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
        *(s32 *)((u8 *)temp_s0 + 0x38) = 0;
    }
    temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0x3C);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
        *(s32 *)((u8 *)temp_s0 + 0x3C) = 0;
    }
    temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0x40);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
        *(s32 *)((u8 *)temp_s0 + 0x40) = 0;
    }
    temp_a0_7 = *(s32 *)((u8 *)temp_s0 + 0x44);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
        *(s32 *)((u8 *)temp_s0 + 0x44) = 0;
    }
    temp_a0_8 = *(s32 *)((u8 *)temp_s0 + 0x48);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
        *(s32 *)((u8 *)temp_s0 + 0x48) = 0;
    }
    temp_a0_9 = *(s32 *)((u8 *)temp_s0 + 0x4C);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
        *(s32 *)((u8 *)temp_s0 + 0x4C) = 0;
    }
    temp_a0_10 = *(s32 *)((u8 *)temp_s0 + 0x50);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
        *(s32 *)((u8 *)temp_s0 + 0x50) = 0;
    }
    temp_a0_11 = *(s32 *)((u8 *)temp_s0 + 0x54);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
        *(s32 *)((u8 *)temp_s0 + 0x54) = 0;
    }
    temp_a0_12 = *(s32 *)((u8 *)temp_s0 + 0x58);
    if (temp_a0_12 != 0) {
        func_0022D0E0(temp_a0_12, 1);
        *(s32 *)((u8 *)temp_s0 + 0x58) = 0;
    }
    temp_a0_13 = *(s32 *)((u8 *)temp_s0 + 0x5C);
    if (temp_a0_13 != 0) {
        func_0022D0E0(temp_a0_13, 1);
        *(s32 *)((u8 *)temp_s0 + 0x5C) = 0;
    }
    temp_a0_14 = *(s32 *)((u8 *)temp_s0 + 0x60);
    if (temp_a0_14 != 0) {
        func_0022D0E0(temp_a0_14, 1);
        *(s32 *)((u8 *)temp_s0 + 0x60) = 0;
    }
    temp_a0_15 = *(s32 *)((u8 *)temp_s0 + 0x64);
    if (temp_a0_15 != 0) {
        func_0022D0E0(temp_a0_15, 1);
        *(s32 *)((u8 *)temp_s0 + 0x64) = 0;
    }
    temp_a0_16 = *(s32 *)((u8 *)temp_s0 + 0x68);
    if (temp_a0_16 != 0) {
        func_0022D0E0(temp_a0_16, 1);
        *(s32 *)((u8 *)temp_s0 + 0x68) = 0;
    }
    temp_a0_17 = *(s32 *)((u8 *)temp_s0 + 0x14);
    if (temp_a0_17 != 0) {
        func_0022D0E0(temp_a0_17, 1);
        *(s32 *)((u8 *)temp_s0 + 0x14) = 0;
    }
    temp_a0_18 = *(s32 *)((u8 *)temp_s0 + 0x268);
    if (temp_a0_18 != 0) {
        func_0022D0E0(temp_a0_18, 1);
        *(s32 *)((u8 *)temp_s0 + 0x268) = 0;
    }
    var_s2 = 0;
    var_s1 = temp_s0;
    do {
        temp_a0_19 = *(s32 *)((u8 *)var_s1 + 0x18);
        if (temp_a0_19 != 0) {
            func_0022D0E0(temp_a0_19, 1);
            *(s32 *)((u8 *)var_s1 + 0x18) = 0;
        }
        var_s2 += 1;
        var_s1 += 4;
    } while (var_s2 < 6);
    temp_a0_20 = *(s32 *)((u8 *)temp_s0 + 0x30);
    if (temp_a0_20 != 0) {
        func_0022D0E0(temp_a0_20, 1);
        *(s32 *)((u8 *)temp_s0 + 0x30) = 0;
    }
    temp_a0_21 = *(s32 *)((u8 *)temp_s0 + 0x6C);
    if (temp_a0_21 != 0) {
        func_0022D0E0(temp_a0_21, 1);
        *(s32 *)((u8 *)temp_s0 + 0x6C) = 0;
    }
    temp_a0_22 = *(s32 *)((u8 *)temp_s0 + 0x70);
    if (temp_a0_22 != 0) {
        func_0022D0E0(temp_a0_22, 1);
        *(s32 *)((u8 *)temp_s0 + 0x70) = 0;
    }
    temp_a0_23 = *(s32 *)((u8 *)temp_s0 + 0x90);
    if (temp_a0_23 != 0) {
        func_0022D0E0(temp_a0_23, 1);
        *(s32 *)((u8 *)temp_s0 + 0x90) = 0;
    }
    temp_a0_24 = *(s32 *)((u8 *)temp_s0 + 0x94);
    if (temp_a0_24 != 0) {
        func_0022D0E0(temp_a0_24, 1);
        *(s32 *)((u8 *)temp_s0 + 0x94) = 0;
    }
    temp_a0_25 = *(s32 *)((u8 *)temp_s0 + 0x98);
    if (temp_a0_25 != 0) {
        func_0022D0E0(temp_a0_25, 1);
        *(s32 *)((u8 *)temp_s0 + 0x98) = 0;
    }
    temp_a0_26 = *(s32 *)((u8 *)temp_s0 + 0x74);
    if (temp_a0_26 != 0) {
        func_0022D0E0(temp_a0_26, 1);
        *(s32 *)((u8 *)temp_s0 + 0x74) = 0;
    }
    temp_a0_27 = *(s32 *)((u8 *)temp_s0 + 0x78);
    if (temp_a0_27 != 0) {
        func_0022D0E0(temp_a0_27, 1);
        *(s32 *)((u8 *)temp_s0 + 0x78) = 0;
    }
    temp_a0_28 = *(s32 *)((u8 *)temp_s0 + 0x7C);
    if (temp_a0_28 != 0) {
        func_0022D0E0(temp_a0_28, 1);
        *(s32 *)((u8 *)temp_s0 + 0x7C) = 0;
    }
    temp_a0_29 = *(s32 *)((u8 *)temp_s0 + 0x80);
    if (temp_a0_29 != 0) {
        func_0022D0E0(temp_a0_29, 1);
        *(s32 *)((u8 *)temp_s0 + 0x80) = 0;
    }
    temp_a0_30 = *(s32 *)((u8 *)temp_s0 + 0x84);
    if (temp_a0_30 != 0) {
        func_0022D0E0(temp_a0_30, 1);
        *(s32 *)((u8 *)temp_s0 + 0x84) = 0;
    }
    temp_a0_31 = *(s32 *)((u8 *)temp_s0 + 0x88);
    if (temp_a0_31 != 0) {
        func_0022D0E0(temp_a0_31, 1);
        *(s32 *)((u8 *)temp_s0 + 0x88) = 0;
    }
    temp_a0_32 = *(s32 *)((u8 *)temp_s0 + 0x8C);
    if (temp_a0_32 != 0) {
        func_0022D0E0(temp_a0_32, 1);
        *(s32 *)((u8 *)temp_s0 + 0x8C) = 0;
    }
    temp_a0_33 = *(s32 *)((u8 *)temp_s0 + 0x9C);
    if (temp_a0_33 != 0) {
        func_0022D0E0(temp_a0_33, 1);
        *(s32 *)((u8 *)temp_s0 + 0x9C) = 0;
    }
    temp_a0_34 = *(s32 *)((u8 *)temp_s0 + 0xA8);
    if (temp_a0_34 != 0) {
        func_0022D0E0(temp_a0_34, 1);
        *(s32 *)((u8 *)temp_s0 + 0xA8) = 0;
    }
    temp_a0_35 = *(s32 *)((u8 *)temp_s0 + 0xA0);
    if (temp_a0_35 != 0) {
        func_0022D0E0(temp_a0_35, 1);
        *(s32 *)((u8 *)temp_s0 + 0xA0) = 0;
    }
    temp_a0_36 = *(s32 *)((u8 *)temp_s0 + 0xA4);
    if (temp_a0_36 != 0) {
        func_0022D0E0(temp_a0_36, 1);
        *(s32 *)((u8 *)temp_s0 + 0xA4) = 0;
    }
    temp_a0_37 = *(s32 *)((u8 *)temp_s0 + 0xAC);
    if (temp_a0_37 != 0) {
        func_0022D0E0(temp_a0_37, 1);
        *(s32 *)((u8 *)temp_s0 + 0xAC) = 0;
    }
    temp_a0_38 = *(s32 *)((u8 *)temp_s0 + 0xB0);
    if (temp_a0_38 != 0) {
        func_0022D0E0(temp_a0_38, 1);
        *(s32 *)((u8 *)temp_s0 + 0xB0) = 0;
    }
    temp_a0_39 = *(s32 *)((u8 *)temp_s0 + 0xB4);
    if (temp_a0_39 != 0) {
        func_0022D0E0(temp_a0_39, 1);
        *(s32 *)((u8 *)temp_s0 + 0xB4) = 0;
    }
    temp_a0_40 = *(s32 *)((u8 *)temp_s0 + 0xB8);
    if (temp_a0_40 != 0) {
        func_0022D0E0(temp_a0_40, 1);
        *(s32 *)((u8 *)temp_s0 + 0xB8) = 0;
    }
    temp_a0_41 = *(s32 *)((u8 *)temp_s0 + 0xBC);
    if (temp_a0_41 != 0) {
        func_0022D0E0(temp_a0_41, 1);
        *(s32 *)((u8 *)temp_s0 + 0xBC) = 0;
    }
    temp_a0_42 = *(s32 *)((u8 *)temp_s0 + 0xC0);
    if (temp_a0_42 != 0) {
        func_0022D0E0(temp_a0_42, 1);
        *(s32 *)((u8 *)temp_s0 + 0xC0) = 0;
    }
    var_s2_2 = 0;
    var_s1_2 = temp_s0;
    do {
        temp_a0_43 = *(s32 *)((u8 *)var_s1_2 + 0xC4);
        if (temp_a0_43 != 0) {
            func_0022D0E0(temp_a0_43, 1);
            *(s32 *)((u8 *)var_s1_2 + 0xC4) = 0;
        }
        var_s2_2 += 1;
        var_s1_2 += 4;
    } while (var_s2_2 < 4);
    var_s1_3 = 0;
    var_s2_3 = temp_s0;
    do {
        temp_a0_44 = *(s32 *)((u8 *)var_s2_3 + 0xD4);
        if (temp_a0_44 != 0) {
            func_0022D0E0(temp_a0_44, 1);
            *(s32 *)((u8 *)var_s2_3 + 0xD4) = 0;
        }
        var_s1_3 += 1;
        var_s2_3 += 4;
    } while (var_s1_3 < 8);
    var_s1_4 = 0;
    var_s2_4 = temp_s0;
    do {
        temp_a0_45 = *(s32 *)((u8 *)var_s2_4 + 0xF4);
        if (temp_a0_45 != 0) {
            func_0022D0E0(temp_a0_45, 1);
            *(s32 *)((u8 *)var_s2_4 + 0xF4) = 0;
        }
        temp_a0_46 = *(s32 *)((u8 *)var_s2_4 + 0x108);
        if (temp_a0_46 != 0) {
            func_0022D0E0(temp_a0_46, 1);
            *(s32 *)((u8 *)var_s2_4 + 0x108) = 0;
        }
        var_s1_4 += 1;
        var_s2_4 += 4;
    } while (var_s1_4 < 2);
    var_s1_5 = 0;
    var_s2_5 = temp_s0;
    do {
        temp_a0_47 = *(s32 *)((u8 *)var_s2_5 + 0xFC);
        if (temp_a0_47 != 0) {
            func_0022D0E0(temp_a0_47, 1);
            *(s32 *)((u8 *)var_s2_5 + 0xFC) = 0;
        }
        var_s1_5 += 1;
        var_s2_5 += 4;
    } while (var_s1_5 < 3);
    var_s1_6 = 0;
    var_s3 = 0;
    do {
        var_s4 = 0;
        var_s2_6 = temp_s0 + var_s3;
loop_106:
        temp_a0_48 = *(s32 *)((u8 *)var_s2_6 + 0x110);
        if (temp_a0_48 != 0) {
            func_0022D0E0(temp_a0_48, 1);
            *(s32 *)((u8 *)var_s2_6 + 0x110) = 0;
        }
        var_s4 += 1;
        var_s2_6 += 0x28;
        if (var_s4 < 8) {
            goto loop_106;
        }
        var_s1_6 += 1;
        var_s3 += 4;
    } while (var_s1_6 < 0xA);
    var_s1_7 = 0;
    var_s2_7 = temp_s0;
    do {
        temp_a0_49 = *(s32 *)((u8 *)var_s2_7 + 0x250);
        if (temp_a0_49 != 0) {
            func_0022D0E0(temp_a0_49, 1);
            *(s32 *)((u8 *)var_s2_7 + 0x250) = 0;
        }
        var_s1_7 += 1;
        var_s2_7 += 4;
    } while (var_s1_7 < 3);
    var_s1_8 = 0;
    var_s2_8 = temp_s0;
    do {
        temp_a0_50 = *(s32 *)((u8 *)var_s2_8 + 0x26C);
        if (temp_a0_50 != 0) {
            func_0022D0E0(temp_a0_50, 1);
            *(s32 *)((u8 *)var_s2_8 + 0x26C) = 0;
        }
        temp_a0_51 = *(s32 *)((u8 *)var_s2_8 + 0x25C);
        if (temp_a0_51 != 0) {
            func_0022D0E0(temp_a0_51, 1);
            *(s32 *)((u8 *)var_s2_8 + 0x25C) = 0;
        }
        var_s1_8 += 1;
        var_s2_8 += 4;
    } while (var_s1_8 < 2);
    temp_a0_52 = *(s32 *)((u8 *)temp_s0 + 0x274);
    if (temp_a0_52 != 0) {
        func_0022D0E0(temp_a0_52, 1);
        *(s32 *)((u8 *)temp_s0 + 0x274) = 0;
    }
    temp_a0_53 = *(s32 *)((u8 *)temp_s0 + 0x288);
    if (temp_a0_53 != 0) {
        func_0022D0E0(temp_a0_53, 1);
        *(s32 *)((u8 *)temp_s0 + 0x288) = 0;
    }
    temp_a0_54 = *(s32 *)((u8 *)temp_s0 + 0x28C);
    if (temp_a0_54 != 0) {
        func_0022D0E0(temp_a0_54, 1);
        *(s32 *)((u8 *)temp_s0 + 0x28C) = 0;
    }
    temp_a0_55 = *(s32 *)((u8 *)temp_s0 + 0x290);
    if (temp_a0_55 != 0) {
        func_0022D0E0(temp_a0_55, 1);
        *(s32 *)((u8 *)temp_s0 + 0x290) = 0;
    }
    temp_a0_56 = *(s32 *)((u8 *)temp_s0 + 0x294);
    if (temp_a0_56 != 0) {
        func_0022D0E0(temp_a0_56, 1);
        *(s32 *)((u8 *)temp_s0 + 0x294) = 0;
    }
    temp_a0_57 = *(s32 *)((u8 *)temp_s0 + 0x298);
    if (temp_a0_57 != 0) {
        func_0022D0E0(temp_a0_57, 1);
        *(s32 *)((u8 *)temp_s0 + 0x298) = 0;
    }
    temp_a0_58 = *(s32 *)((u8 *)temp_s0 + 0x29C);
    if (temp_a0_58 != 0) {
        func_0022D0E0(temp_a0_58, 1);
        *(s32 *)((u8 *)temp_s0 + 0x29C) = 0;
    }
    temp_a0_59 = *(s32 *)((u8 *)temp_s0 + 0x2A0);
    if (temp_a0_59 != 0) {
        func_0022D0E0(temp_a0_59, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2A0) = 0;
    }
    temp_a0_60 = *(s32 *)((u8 *)temp_s0 + 0x2A4);
    if (temp_a0_60 != 0) {
        func_0022D0E0(temp_a0_60, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2A4) = 0;
    }
    temp_a0_61 = *(s32 *)((u8 *)temp_s0 + 0x2A8);
    if (temp_a0_61 != 0) {
        func_0022D0E0(temp_a0_61, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2A8) = 0;
    }
    temp_a0_62 = *(s32 *)((u8 *)temp_s0 + 0x2AC);
    if (temp_a0_62 != 0) {
        func_0022D0E0(temp_a0_62, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2AC) = 0;
    }
    temp_a0_63 = *(s32 *)((u8 *)temp_s0 + 0x2B0);
    if (temp_a0_63 != 0) {
        func_0022D0E0(temp_a0_63, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2B0) = 0;
    }
    temp_a0_64 = *(s32 *)((u8 *)temp_s0 + 0x2B4);
    if (temp_a0_64 != 0) {
        func_0022D0E0(temp_a0_64, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2B4) = 0;
    }
    temp_a0_65 = *(s32 *)((u8 *)temp_s0 + 0x2B8);
    if (temp_a0_65 != 0) {
        func_0022D0E0(temp_a0_65, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2B8) = 0;
    }
    temp_a0_66 = *(s32 *)((u8 *)temp_s0 + 0x2BC);
    if (temp_a0_66 != 0) {
        func_0022D0E0(temp_a0_66, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2BC) = 0;
    }
    temp_a0_67 = *(s32 *)((u8 *)temp_s0 + 0x2C0);
    if (temp_a0_67 != 0) {
        func_0022D0E0(temp_a0_67, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2C0) = 0;
    }
    temp_a0_68 = *(s32 *)((u8 *)temp_s0 + 0x2C4);
    if (temp_a0_68 != 0) {
        func_0022D0E0(temp_a0_68, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2C4) = 0;
    }
    temp_a0_69 = *(s32 *)((u8 *)temp_s0 + 0x2C8);
    if (temp_a0_69 != 0) {
        func_0022D0E0(temp_a0_69, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2C8) = 0;
    }
    temp_a0_70 = *(s32 *)((u8 *)temp_s0 + 0x2CC);
    if (temp_a0_70 != 0) {
        func_0022D0E0(temp_a0_70, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2CC) = 0;
    }
    var_s1_9 = 0;
    var_s2_9 = temp_s0;
    do {
        temp_a0_71 = *(s32 *)((u8 *)var_s2_9 + 0x2D0);
        if (temp_a0_71 != 0) {
            func_0022D0E0(temp_a0_71, 1);
            *(s32 *)((u8 *)var_s2_9 + 0x2D0) = 0;
        }
        var_s1_9 += 1;
        var_s2_9 += 4;
    } while (var_s1_9 < 4);
    temp_a0_72 = *(s32 *)((u8 *)temp_s0 + 0x278);
    if (temp_a0_72 != 0) {
        func_0022D0E0(temp_a0_72, 1);
        *(s32 *)((u8 *)temp_s0 + 0x278) = 0;
    }
    var_s1_10 = 0;
    var_s2_10 = temp_s0;
    do {
        temp_a0_73 = *(s32 *)((u8 *)var_s2_10 + 0x27C);
        if (temp_a0_73 != 0) {
            func_0022D0E0(temp_a0_73, 1);
            *(s32 *)((u8 *)var_s2_10 + 0x27C) = 0;
        }
        var_s1_10 += 1;
        var_s2_10 += 4;
    } while (var_s1_10 < 3);
    temp_a0_74 = *(s32 *)((u8 *)temp_s0 + 0x2E0);
    if (temp_a0_74 != 0) {
        func_0022D0E0(temp_a0_74, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2E0) = 0;
    }
    temp_a0_75 = *(s32 *)((u8 *)temp_s0 + 0x314);
    if (temp_a0_75 != 0) {
        func_0022D0E0(temp_a0_75, 1);
        *(s32 *)((u8 *)temp_s0 + 0x314) = 0;
    }
    temp_a0_76 = *(s32 *)((u8 *)temp_s0 + 0x318);
    if (temp_a0_76 != 0) {
        func_0022D0E0(temp_a0_76, 1);
        *(s32 *)((u8 *)temp_s0 + 0x318) = 0;
    }
    temp_a0_77 = *(s32 *)((u8 *)temp_s0 + 0x31C);
    if (temp_a0_77 != 0) {
        func_0022D0E0(temp_a0_77, 1);
        *(s32 *)((u8 *)temp_s0 + 0x31C) = 0;
    }
    temp_a0_78 = *(s32 *)((u8 *)temp_s0 + 0x2E4);
    if (temp_a0_78 != 0) {
        func_0022D0E0(temp_a0_78, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2E4) = 0;
    }
    temp_a0_79 = *(s32 *)((u8 *)temp_s0 + 0x2E8);
    if (temp_a0_79 != 0) {
        func_0022D0E0(temp_a0_79, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2E8) = 0;
    }
    temp_a0_80 = *(s32 *)((u8 *)temp_s0 + 0x2EC);
    if (temp_a0_80 != 0) {
        func_0022D0E0(temp_a0_80, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2EC) = 0;
    }
    temp_a0_81 = *(s32 *)((u8 *)temp_s0 + 0x2F0);
    if (temp_a0_81 != 0) {
        func_0022D0E0(temp_a0_81, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2F0) = 0;
    }
    temp_a0_82 = *(s32 *)((u8 *)temp_s0 + 0x2F4);
    if (temp_a0_82 != 0) {
        func_0022D0E0(temp_a0_82, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2F4) = 0;
    }
    temp_a0_83 = *(s32 *)((u8 *)temp_s0 + 0x2F8);
    if (temp_a0_83 != 0) {
        func_0022D0E0(temp_a0_83, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2F8) = 0;
    }
    temp_a0_84 = *(s32 *)((u8 *)temp_s0 + 0x2FC);
    if (temp_a0_84 != 0) {
        func_0022D0E0(temp_a0_84, 1);
        *(s32 *)((u8 *)temp_s0 + 0x2FC) = 0;
    }
    temp_a0_85 = *(s32 *)((u8 *)temp_s0 + 0x300);
    if (temp_a0_85 != 0) {
        func_0022D0E0(temp_a0_85, 1);
        *(s32 *)((u8 *)temp_s0 + 0x300) = 0;
    }
    temp_a0_86 = *(s32 *)((u8 *)temp_s0 + 0x304);
    if (temp_a0_86 != 0) {
        func_0022D0E0(temp_a0_86, 1);
        *(s32 *)((u8 *)temp_s0 + 0x304) = 0;
    }
    temp_a0_87 = *(s32 *)((u8 *)temp_s0 + 0x308);
    if (temp_a0_87 != 0) {
        func_0022D0E0(temp_a0_87, 1);
        *(s32 *)((u8 *)temp_s0 + 0x308) = 0;
    }
    temp_a0_88 = *(s32 *)((u8 *)temp_s0 + 0x30C);
    if (temp_a0_88 != 0) {
        func_0022D0E0(temp_a0_88, 1);
        *(s32 *)((u8 *)temp_s0 + 0x30C) = 0;
    }
    temp_a0_89 = *(s32 *)((u8 *)temp_s0 + 0x310);
    if (temp_a0_89 != 0) {
        func_0022D0E0(temp_a0_89, 1);
        *(s32 *)((u8 *)temp_s0 + 0x310) = 0;
    }
    temp_a0_90 = *(u8 **)((u8 *)temp_s0 + 8);
    if (temp_a0_90 != NULL) {
        amHeap_Free(temp_a0_90);
        *(u8 **)((u8 *)temp_s0 + 8) = NULL;
    }
    temp_a0_91 = *(u8 **)((u8 *)temp_s0 + 0xC);
    if (temp_a0_91 != NULL) {
        amHeap_Free(temp_a0_91);
        *(u8 **)((u8 *)temp_s0 + 0xC) = NULL;
    }
    temp_a0_92 = *(u8 **)((u8 *)temp_s0 + 0x320);
    if (temp_a0_92 != NULL) {
        amTask_Kill((void *)(temp_a0_92));
        *(u8 **)((u8 *)temp_s0 + 0x320) = NULL;
    }
    StrStatus_Exit(*(s32 *)((u8 *)temp_s0 + 0x33C));
    StrStatus_Exit(*(s32 *)((u8 *)temp_s0 + 0x340));
    Help_Exit();
    Save_Exit();
    if (gOptionWork != NULL) {
        amHeap_Free(gOptionWork);
        gOptionWork = NULL;
    }
}
