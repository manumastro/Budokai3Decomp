# Drafts of the functions still in assembly

Machine drafts (m2c, decomp-permuter) for every function that is still INCLUDE_ASM or in an asm segment;
not compiled by the build. Closest first. Status: match = compiles to the original alone but did not fit in
its file yet; diff = same size, N instructions differ; size = different size; cerr = does not compile;
m2cfail/jtbl = no draft (m2c failed / jump table); none = no machine draft. Made by scripts/drafts_write.py.

| Function | Address | Size | Region | Status | Differ | Draft |
|---|---|---|---|---|---|---|
| func_001502C8 | 0x001502C8 | 0x40 | cri | diff | 1 | [cri/adx_0014EF28/func_001502C8.c](cri/adx_0014EF28/func_001502C8.c) |
| func_0015C730 | 0x0015C730 | 0x40 | cri | diff | 1 | [cri/adx_00159278/func_0015C730.c](cri/adx_00159278/func_0015C730.c) |
| func_001524A0 | 0x001524A0 | 0x58 | cri | diff | 1 | [cri/adx_0014EF28/func_001524A0.c](cri/adx_0014EF28/func_001524A0.c) |
| func_0020F290 | 0x0020F290 | 0x64 | game | diff | 1 | [unk/unk_20A4D0/func_0020F290.c](unk/unk_20A4D0/func_0020F290.c) |
| func_002E9900 | 0x002E9900 | 0x68 | game | diff | 1 | [unk/unk_2E8540/func_002E9900.c](unk/unk_2E8540/func_002E9900.c) |
| func_00173A00 | 0x00173A00 | 0x6C | cri | diff | 1 | [cri/mpv/func_00173A00.c](cri/mpv/func_00173A00.c) |
| func_00197370 | 0x00197370 | 0x80 | cri | diff | 1 | [cri/sfd_00194D48/func_00197370.c](cri/sfd_00194D48/func_00197370.c) |
| func_001C8210 | 0x001C8210 | 0xA4 | game | diff | 1 | [battle/btl_main/func_001C8210.c](battle/btl_main/func_001C8210.c) |
| func_0019F8A8 | 0x0019F8A8 | 0x30 | cri | diff | 2 | [cri/sfx/func_0019F8A8.c](cri/sfx/func_0019F8A8.c) |
| func_00115E70 | 0x00115E70 | 0x54 | sdk | diff | 2 | [sdk/libkernl_00113B88/func_00115E70.c](sdk/libkernl_00113B88/func_00115E70.c) |
| func_00182F70 | 0x00182F70 | 0x58 | cri | diff | 2 | [cri/mwsfd/func_00182F70.c](cri/mwsfd/func_00182F70.c) |
| func_001660C0 | 0x001660C0 | 0x60 | cri | diff | 2 | [cri/dtx/func_001660C0.c](cri/dtx/func_001660C0.c) |
| func_0020F300 | 0x0020F300 | 0x68 | game | diff | 2 | [unk/unk_20A4D0/func_0020F300.c](unk/unk_20A4D0/func_0020F300.c) |
| func_0018C020 | 0x0018C020 | 0xB4 | cri | diff | 2 | [cri/sfd/func_0018C020.c](cri/sfd/func_0018C020.c) |
| func_002CA2F0 | 0x002CA2F0 | 0x100 | game | diff | 2 | [unk/unk_2C41C0/func_002CA2F0.c](unk/unk_2C41C0/func_002CA2F0.c) |
| func_0014EC50 | 0x0014EC50 | 0x30 | cri | diff | 3 | [cri/adx_0014E8F8/func_0014EC50.c](cri/adx_0014E8F8/func_0014EC50.c) |
| func_0014ECA0 | 0x0014ECA0 | 0x30 | cri | diff | 3 | [cri/adx_0014E8F8/func_0014ECA0.c](cri/adx_0014E8F8/func_0014ECA0.c) |
| ADXT_GetFmtBps | 0x0015EEA8 | 0x4C | cri | diff | 3 | [cri/adx_00159278/ADXT_GetFmtBps.c](cri/adx_00159278/ADXT_GetFmtBps.c) |
| ADXT_GetHdrLen | 0x0015EE58 | 0x4C | cri | diff | 3 | [cri/adx_00159278/ADXT_GetHdrLen.c](cri/adx_00159278/ADXT_GetHdrLen.c) |
| ADXT_GetNumChan | 0x0015EE08 | 0x4C | cri | diff | 3 | [cri/adx_00159278/ADXT_GetNumChan.c](cri/adx_00159278/ADXT_GetNumChan.c) |
| ADXT_GetSfreq | 0x0015EDB8 | 0x4C | cri | diff | 3 | [cri/adx_00159278/ADXT_GetSfreq.c](cri/adx_00159278/ADXT_GetSfreq.c) |
| func_0016C7E8 | 0x0016C7E8 | 0x50 | cri | diff | 3 | [cri/ps2rna/func_0016C7E8.c](cri/ps2rna/func_0016C7E8.c) |
| func_00197BE8 | 0x00197BE8 | 0x64 | cri | diff | 3 | [cri/sfd_00194D48/func_00197BE8.c](cri/sfd_00194D48/func_00197BE8.c) |
| func_0015C038 | 0x0015C038 | 0x68 | cri | diff | 3 | [cri/adx_00159278/func_0015C038.c](cri/adx_00159278/func_0015C038.c) |
| func_00189CF8 | 0x00189CF8 | 0x7C | cri | diff | 3 | [cri/sfd/func_00189CF8.c](cri/sfd/func_00189CF8.c) |
| func_0016F938 | 0x0016F938 | 0x90 | cri | diff | 3 | [cri/sj/func_0016F938.c](cri/sj/func_0016F938.c) |
| func_00189BF0 | 0x00189BF0 | 0x90 | cri | diff | 3 | [cri/sfd/func_00189BF0.c](cri/sfd/func_00189BF0.c) |
| func_0028DE30 | 0x0028DE30 | 0x64 | game | diff | 4 | [sys/mc_opr/func_0028DE30.c](sys/mc_opr/func_0028DE30.c) |
| ADXT_ExecHndl | 0x00161748 | 0xC4 | cri | diff | 4 | [cri/adx_00160EB0/ADXT_ExecHndl.c](cri/adx_00160EB0/ADXT_ExecHndl.c) |
| func_001D7A70 | 0x001D7A70 | 0x150 | game | diff | 4 | [unk/unk_1D5B30/func_001D7A70.c](unk/unk_1D5B30/func_001D7A70.c) |
| func_002E8540 | 0x002E8540 | 0x1D8 | game | diff | 4 | [unk/unk_2E8540/func_002E8540.c](unk/unk_2E8540/func_002E8540.c) |
| func_0019A2C0 | 0x0019A2C0 | 0x24 | cri | diff | 5 | [cri/sfd_00194D48/func_0019A2C0.c](cri/sfd_00194D48/func_0019A2C0.c) |
| func_0028DEA0 | 0x0028DEA0 | 0x6C | game | diff | 5 | [sys/mc_opr/func_0028DEA0.c](sys/mc_opr/func_0028DEA0.c) |
| func_0018F390 | 0x0018F390 | 0x70 | cri | diff | 5 | [cri/sfd/func_0018F390.c](cri/sfd/func_0018F390.c) |
| func_0029A1C0 | 0x0029A1C0 | 0x8C | game | diff | 5 | [story/str_map/func_0029A1C0.c](story/str_map/func_0029A1C0.c) |
| func_0025EE10 | 0x0025EE10 | 0xCC | game | diff | 5 | [unk/unk_25D740/func_0025EE10.c](unk/unk_25D740/func_0025EE10.c) |
| func_002A0CB0 | 0x002A0CB0 | 0x2C | game | diff | 6 | [sys/cnv_sys/func_002A0CB0.c](sys/cnv_sys/func_002A0CB0.c) |
| func_001788D8 | 0x001788D8 | 0x34 | cri | diff | 6 | [cri/mpv/func_001788D8.c](cri/mpv/func_001788D8.c) |
| func_0017B240 | 0x0017B240 | 0x34 | cri | diff | 6 | [cri/mpv/func_0017B240.c](cri/mpv/func_0017B240.c) |
| func_00289380 | 0x00289380 | 0x68 | game | diff | 6 | [sys/mc_opr/func_00289380.c](sys/mc_opr/func_00289380.c) |
| func_0010AB58 | 0x0010AB58 | 0x7C | sdk | diff | 6 | [sdk/libkernl_0010AA60/func_0010AB58.c](sdk/libkernl_0010AA60/func_0010AB58.c) |
| func_0010AC98 | 0x0010AC98 | 0x7C | sdk | diff | 6 | [sdk/libkernl/ico_cache/func_0010AC98.c](sdk/libkernl/ico_cache/func_0010AC98.c) |
| mwPlyStartAfs | 0x00182ED0 | 0x9C | cri | diff | 6 | [cri/mwsfd/mwPlyStartAfs.c](cri/mwsfd/mwPlyStartAfs.c) |
| func_0018F150 | 0x0018F150 | 0xB4 | cri | diff | 6 | [cri/sfd/func_0018F150.c](cri/sfd/func_0018F150.c) |
| func_0021B9A0 | 0x0021B9A0 | 0xBC | game | diff | 6 | [unk/unk_21B130/func_0021B9A0.c](unk/unk_21B130/func_0021B9A0.c) |
| func_00218990 | 0x00218990 | 0xCC | game | diff | 6 | [unk/unk_20A4D0/func_00218990.c](unk/unk_20A4D0/func_00218990.c) |
| func_002C5FC0 | 0x002C5FC0 | 0xEC | game | diff | 6 | [unk/unk_2C41C0/func_002C5FC0.c](unk/unk_2C41C0/func_002C5FC0.c) |
| func_00222A90 | 0x00222A90 | 0x158 | game | diff | 6 | [unk/unk_21D260/func_00222A90.c](unk/unk_21D260/func_00222A90.c) |
| func_00197810 | 0x00197810 | 0x20 | cri | diff | 7 | [cri/sfd_00194D48/func_00197810.c](cri/sfd_00194D48/func_00197810.c) |
| func_0016D7F8 | 0x0016D7F8 | 0x38 | cri | diff | 7 | [cri/ps2rna/func_0016D7F8.c](cri/ps2rna/func_0016D7F8.c) |
| func_00184B48 | 0x00184B48 | 0x4C | cri | diff | 7 | [cri/mwsfd/func_00184B48.c](cri/mwsfd/func_00184B48.c) |
| func_00197AC8 | 0x00197AC8 | 0x58 | cri | diff | 7 | [cri/sfd_00194D48/func_00197AC8.c](cri/sfd_00194D48/func_00197AC8.c) |
| func_0027B7E0 | 0x0027B7E0 | 0x74 | game | diff | 7 | [menu/mn_charasel/func_0027B7E0.c](menu/mn_charasel/func_0027B7E0.c) |
| func_002AF0A0 | 0x002AF0A0 | 0xC8 | game | diff | 7 | [unk/unk_2AE760/func_002AF0A0.c](unk/unk_2AE760/func_002AF0A0.c) |
| func_0019ABA0 | 0x0019ABA0 | 0xF0 | cri | diff | 7 | [cri/sfd_00194D48/func_0019ABA0.c](cri/sfd_00194D48/func_0019ABA0.c) |
| func_0016D798 | 0x0016D798 | 0x30 | cri | diff | 8 | [cri/ps2rna/func_0016D798.c](cri/ps2rna/func_0016D798.c) |
| func_0016D7C8 | 0x0016D7C8 | 0x30 | cri | diff | 8 | [cri/ps2rna/func_0016D7C8.c](cri/ps2rna/func_0016D7C8.c) |
| DisableDmac | 0x0010AE10 | 0x68 | sdk | diff | 8 | [sdk/libkernl_0010AD30/DisableDmac.c](sdk/libkernl_0010AD30/DisableDmac.c) |
| func_0010AD40 | 0x0010AD40 | 0x68 | sdk | diff | 8 | [sdk/libkernl_0010AD30/func_0010AD40.c](sdk/libkernl_0010AD30/func_0010AD40.c) |
| func_0010ADA8 | 0x0010ADA8 | 0x68 | sdk | diff | 8 | [sdk/libkernl_0010AD30/func_0010ADA8.c](sdk/libkernl_0010AD30/func_0010ADA8.c) |
| func_0010AE78 | 0x0010AE78 | 0x68 | sdk | diff | 8 | [sdk/libkernl_0010AD30/func_0010AE78.c](sdk/libkernl_0010AD30/func_0010AE78.c) |
| func_0027E7E0 | 0x0027E7E0 | 0x98 | game | diff | 8 | [menu/mn_charasel/func_0027E7E0.c](menu/mn_charasel/func_0027E7E0.c) |
| func_002E9BF0 | 0x002E9BF0 | 0xAC | game | diff | 8 | [unk/unk_2E9BF0/func_002E9BF0.c](unk/unk_2E9BF0/func_002E9BF0.c) |
| func_001995C8 | 0x001995C8 | 0x48 | cri | diff | 9 | [cri/sfd_00194D48/func_001995C8.c](cri/sfd_00194D48/func_001995C8.c) |
| func_002621F0 | 0x002621F0 | 0x98 | game | diff | 9 | [unk/unk_260CB0/func_002621F0.c](unk/unk_260CB0/func_002621F0.c) |
| func_001CB9B0 | 0x001CB9B0 | 0x34 | game | diff | 10 | [battle/character/func_001CB9B0.c](battle/character/func_001CB9B0.c) |
| func_00183328 | 0x00183328 | 0x3C | cri | diff | 10 | [cri/mwsfd/func_00183328.c](cri/mwsfd/func_00183328.c) |
| func_00183408 | 0x00183408 | 0x3C | cri | diff | 10 | [cri/mwsfd/func_00183408.c](cri/mwsfd/func_00183408.c) |
| func_00199180 | 0x00199180 | 0x84 | cri | diff | 10 | [cri/sfd_00194D48/func_00199180.c](cri/sfd_00194D48/func_00199180.c) |
| func_002BC090 | 0x002BC090 | 0x90 | game | diff | 10 | [unk/unk_2B98D0/func_002BC090.c](unk/unk_2B98D0/func_002BC090.c) |
| func_002A56A0 | 0x002A56A0 | 0xF0 | game | diff | 10 | [story/evt_scrp/func_002A56A0.c](story/evt_scrp/func_002A56A0.c) |
| func_00198890 | 0x00198890 | 0x40 | cri | diff | 11 | [cri/sfd_00194D48/func_00198890.c](cri/sfd_00194D48/func_00198890.c) |
| func_001ED020 | 0x001ED020 | 0x98 | game | diff | 11 | [battle/btb_draw/func_001ED020.c](battle/btb_draw/func_001ED020.c) |
| func_0016A698 | 0x0016A698 | 0xD0 | cri | diff | 11 | [cri/lsc/func_0016A698.c](cri/lsc/func_0016A698.c) |
| func_0025AF70 | 0x0025AF70 | 0x38 | game | diff | 12 | [unk/unk_25A130/func_0025AF70.c](unk/unk_25A130/func_0025AF70.c) |
| func_00181480 | 0x00181480 | 0x44 | cri | diff | 12 | [cri/mwsfd/func_00181480.c](cri/mwsfd/func_00181480.c) |
| func_001732D8 | 0x001732D8 | 0x74 | cri | diff | 12 | [cri/mpv/func_001732D8.c](cri/mpv/func_001732D8.c) |
| func_0027E9C0 | 0x0027E9C0 | 0x98 | game | diff | 12 | [menu/mn_charasel/func_0027E9C0.c](menu/mn_charasel/func_0027E9C0.c) |
| func_002B8C70 | 0x002B8C70 | 0xA8 | game | diff | 12 | [menu/mn_csmodel/func_002B8C70.c](menu/mn_csmodel/func_002B8C70.c) |
| func_0030E330 | 0x0030E330 | 0xB8 | game | diff | 12 | [story/str_staffroll/func_0030E330.c](story/str_staffroll/func_0030E330.c) |
| func_0030F0E0 | 0x0030F0E0 | 0x13C | game | diff | 12 | [story/str_staffroll/func_0030F0E0.c](story/str_staffroll/func_0030F0E0.c) |
| func_00198938 | 0x00198938 | 0x70 | cri | diff | 13 | [cri/sfd_00194D48/func_00198938.c](cri/sfd_00194D48/func_00198938.c) |
| func_0028CE10 | 0x0028CE10 | 0xD8 | game | diff | 13 | [sys/mc_opr/func_0028CE10.c](sys/mc_opr/func_0028CE10.c) |
| func_002927E0 | 0x002927E0 | 0xE0 | game | diff | 13 | [unk/unk_2918A0/func_002927E0.c](unk/unk_2918A0/func_002927E0.c) |
| func_00307D50 | 0x00307D50 | 0xE4 | game | diff | 13 | [menu/mn_ArenaCharasel_pvsc/func_00307D50.c](menu/mn_ArenaCharasel_pvsc/func_00307D50.c) |
| func_002F4D50 | 0x002F4D50 | 0xEC | game | diff | 13 | [menu/mn_ipsyswnd/func_002F4D50.c](menu/mn_ipsyswnd/func_002F4D50.c) |
| func_0029F350 | 0x0029F350 | 0x118 | game | diff | 13 | [battle/char_disp/func_0029F350.c](battle/char_disp/func_0029F350.c) |
| func_002CB250 | 0x002CB250 | 0xB0 | game | diff | 14 | [unk/unk_2CAED0/func_002CB250.c](unk/unk_2CAED0/func_002CB250.c) |
| func_00187280 | 0x00187280 | 0xC0 | cri | diff | 14 | [cri/mwsfd/func_00187280.c](cri/mwsfd/func_00187280.c) |
| func_002EB140 | 0x002EB140 | 0x13C | game | diff | 14 | [unk/unk_2EA0B0/func_002EB140.c](unk/unk_2EA0B0/func_002EB140.c) |
| func_00192968 | 0x00192968 | 0x50 | cri | diff | 15 | [cri/sfd/func_00192968.c](cri/sfd/func_00192968.c) |
| func_00280DF0 | 0x00280DF0 | 0x50 | game | diff | 15 | [unk/unk_280730/func_00280DF0.c](unk/unk_280730/func_00280DF0.c) |
| func_00197598 | 0x00197598 | 0x58 | cri | diff | 15 | [cri/sfd_00194D48/func_00197598.c](cri/sfd_00194D48/func_00197598.c) |
| func_001CBD90 | 0x001CBD90 | 0x58 | game | diff | 15 | [unk/unk_1CBD90/func_001CBD90.c](unk/unk_1CBD90/func_001CBD90.c) |
| func_002A0A60 | 0x002A0A60 | 0x68 | game | diff | 15 | [sys/cnv_sys/func_002A0A60.c](sys/cnv_sys/func_002A0A60.c) |
| func_0017AAF0 | 0x0017AAF0 | 0x70 | cri | diff | 15 | [cri/mpv/func_0017AAF0.c](cri/mpv/func_0017AAF0.c) |
| func_00195C78 | 0x00195C78 | 0x88 | cri | diff | 15 | [cri/sfd_00194D48/func_00195C78.c](cri/sfd_00194D48/func_00195C78.c) |
| func_001989A8 | 0x001989A8 | 0xB4 | cri | diff | 15 | [cri/sfd_00194D48/func_001989A8.c](cri/sfd_00194D48/func_001989A8.c) |
| func_002C27B0 | 0x002C27B0 | 0xE4 | game | diff | 15 | [story/str_status/func_002C27B0.c](story/str_status/func_002C27B0.c) |
| func_001CBE80 | 0x001CBE80 | 0x54 | game | diff | 16 | [unk/unk_1CBD90/func_001CBE80.c](unk/unk_1CBD90/func_001CBE80.c) |
| func_0019E298 | 0x0019E298 | 0x68 | cri | diff | 16 | [cri/sfd_00194D48/func_0019E298.c](cri/sfd_00194D48/func_0019E298.c) |
| func_0019E380 | 0x0019E380 | 0x68 | cri | diff | 16 | [cri/sfd_00194D48/func_0019E380.c](cri/sfd_00194D48/func_0019E380.c) |
| func_0019E3E8 | 0x0019E3E8 | 0x68 | cri | diff | 16 | [cri/sfd_00194D48/func_0019E3E8.c](cri/sfd_00194D48/func_0019E3E8.c) |
| func_0019E450 | 0x0019E450 | 0x68 | cri | diff | 16 | [cri/sfd_00194D48/func_0019E450.c](cri/sfd_00194D48/func_0019E450.c) |
| func_0019A5D8 | 0x0019A5D8 | 0xAC | cri | diff | 16 | [cri/sfd_00194D48/func_0019A5D8.c](cri/sfd_00194D48/func_0019A5D8.c) |
| func_00218B60 | 0x00218B60 | 0xDC | game | diff | 16 | [unk/unk_20A4D0/func_00218B60.c](unk/unk_20A4D0/func_00218B60.c) |
| func_002A75C0 | 0x002A75C0 | 0x118 | game | diff | 16 | [story/evt_scrp/func_002A75C0.c](story/evt_scrp/func_002A75C0.c) |
| func_002408C0 | 0x002408C0 | 0x1CC | game | diff | 16 | [unk/unk_23A890/func_002408C0.c](unk/unk_23A890/func_002408C0.c) |
| func_002A1430 | 0x002A1430 | 0xD8 | game | diff | 17 | [sys/cnv_sys/func_002A1430.c](sys/cnv_sys/func_002A1430.c) |
| func_00268D00 | 0x00268D00 | 0x13C | game | diff | 17 | [menu/mn_vsmode/func_00268D00.c](menu/mn_vsmode/func_00268D00.c) |
| func_00287C60 | 0x00287C60 | 0x1F8 | game | diff | 17 | [menu/mn_StageSel/func_00287C60.c](menu/mn_StageSel/func_00287C60.c) |
| func_002E1A40 | 0x002E1A40 | 0x164 | game | diff | 18 | [menu/mn_option_2/func_002E1A40.c](menu/mn_option_2/func_002E1A40.c) |
| func_002E9600 | 0x002E9600 | 0x168 | game | diff | 18 | [unk/unk_2E8540/func_002E9600.c](unk/unk_2E8540/func_002E9600.c) |
| func_0030A540 | 0x0030A540 | 0x98 | game | diff | 19 | [menu/mn_ArenaCharasel_cvsc/func_0030A540.c](menu/mn_ArenaCharasel_cvsc/func_0030A540.c) |
| func_002163D0 | 0x002163D0 | 0xF4 | game | diff | 19 | [unk/unk_20A4D0/func_002163D0.c](unk/unk_20A4D0/func_002163D0.c) |
| func_00277A90 | 0x00277A90 | 0x1E4 | game | diff | 19 | [menu/ess_trade/func_00277A90.c](menu/ess_trade/func_00277A90.c) |
| func_002AF170 | 0x002AF170 | 0xB0 | game | diff | 20 | [unk/unk_2AE760/func_002AF170.c](unk/unk_2AE760/func_002AF170.c) |
| func_00268BF0 | 0x00268BF0 | 0x104 | game | diff | 20 | [menu/mn_vsmode/func_00268BF0.c](menu/mn_vsmode/func_00268BF0.c) |
| func_00196EA0 | 0x00196EA0 | 0x64 | cri | diff | 21 | [cri/sfd_00194D48/func_00196EA0.c](cri/sfd_00194D48/func_00196EA0.c) |
| func_00309B20 | 0x00309B20 | 0x1A8 | game | diff | 21 | [menu/mn_ArenaCharasel_pvsp/func_00309B20.c](menu/mn_ArenaCharasel_pvsp/func_00309B20.c) |
| func_002920E0 | 0x002920E0 | 0x1E0 | game | diff | 21 | [unk/unk_2918A0/func_002920E0.c](unk/unk_2918A0/func_002920E0.c) |
| func_0026D610 | 0x0026D610 | 0x8C | game | diff | 22 | [menu/ess_main/func_0026D610.c](menu/ess_main/func_0026D610.c) |
| func_003071C0 | 0x003071C0 | 0xB0 | game | diff | 22 | [story/evt_shenron/func_003071C0.c](story/evt_shenron/func_003071C0.c) |
| func_0025B6D0 | 0x0025B6D0 | 0xB4 | game | diff | 22 | [unk/unk_25A130/func_0025B6D0.c](unk/unk_25A130/func_0025B6D0.c) |
| func_0018F2C8 | 0x0018F2C8 | 0xC4 | cri | diff | 22 | [cri/sfd/func_0018F2C8.c](cri/sfd/func_0018F2C8.c) |
| func_002E9970 | 0x002E9970 | 0x1A0 | game | diff | 22 | [unk/unk_2E8540/func_002E9970.c](unk/unk_2E8540/func_002E9970.c) |
| func_0019F5D0 | 0x0019F5D0 | 0xA0 | cri | diff | 23 | [cri/sfx/func_0019F5D0.c](cri/sfx/func_0019F5D0.c) |
| func_00247820 | 0x00247820 | 0xD8 | game | diff | 23 | [unk/unk_23A890/func_00247820.c](unk/unk_23A890/func_00247820.c) |
| func_00307AF0 | 0x00307AF0 | 0x10C | game | diff | 23 | [menu/mn_ArenaCharasel_pvsc/func_00307AF0.c](menu/mn_ArenaCharasel_pvsc/func_00307AF0.c) |
| func_0027D330 | 0x0027D330 | 0x80 | game | diff | 24 | [menu/mn_charasel/func_0027D330.c](menu/mn_charasel/func_0027D330.c) |
| func_001AF9A0 | 0x001AF9A0 | 0x10C | game | diff | 24 | [battle/btl_main/func_001AF9A0.c](battle/btl_main/func_001AF9A0.c) |
| func_002B7C40 | 0x002B7C40 | 0x178 | game | diff | 24 | [menu/mn_csmodel/func_002B7C40.c](menu/mn_csmodel/func_002B7C40.c) |
| func_00187A78 | 0x00187A78 | 0xC4 | cri | diff | 25 | [cri/mwsfd/func_00187A78.c](cri/mwsfd/func_00187A78.c) |
| func_002928C0 | 0x002928C0 | 0xDC | game | diff | 25 | [unk/unk_2918A0/func_002928C0.c](unk/unk_2918A0/func_002928C0.c) |
| func_001B6130 | 0x001B6130 | 0x194 | game | diff | 25 | [battle/btl_main/func_001B6130.c](battle/btl_main/func_001B6130.c) |
| func_001AC400 | 0x001AC400 | 0x88 | game | diff | 26 | [battle/btl_main/func_001AC400.c](battle/btl_main/func_001AC400.c) |
| func_0028C310 | 0x0028C310 | 0xD0 | game | diff | 26 | [sys/mc_opr/func_0028C310.c](sys/mc_opr/func_0028C310.c) |
| func_002AE760 | 0x002AE760 | 0xA8 | game | diff | 27 | [unk/unk_2AE760/func_002AE760.c](unk/unk_2AE760/func_002AE760.c) |
| func_001F9CD0 | 0x001F9CD0 | 0x11C | game | diff | 27 | [battle/btb_main/func_001F9CD0.c](battle/btb_main/func_001F9CD0.c) |
| func_00170380 | 0x00170380 | 0xCC | cri | diff | 28 | [cri/svm/func_00170380.c](cri/svm/func_00170380.c) |
| func_00282620 | 0x00282620 | 0xEC | game | diff | 28 | [unk/unk_280730/func_00282620.c](unk/unk_280730/func_00282620.c) |
| func_002DF5D0 | 0x002DF5D0 | 0x10C | game | diff | 28 | [menu/mn_option/func_002DF5D0.c](menu/mn_option/func_002DF5D0.c) |
| func_0021B130 | 0x0021B130 | 0xA4 | game | diff | 29 | [unk/unk_21B130/func_0021B130.c](unk/unk_21B130/func_0021B130.c) |
| func_001DC080 | 0x001DC080 | 0xD0 | game | diff | 29 | [unk/unk_1D5B30/func_001DC080.c](unk/unk_1D5B30/func_001DC080.c) |
| func_001BACE0 | 0x001BACE0 | 0x130 | game | diff | 29 | [battle/btl_main/func_001BACE0.c](battle/btl_main/func_001BACE0.c) |
| func_001C8860 | 0x001C8860 | 0x134 | game | diff | 29 | [battle/btl_main/func_001C8860.c](battle/btl_main/func_001C8860.c) |
| func_003095A0 | 0x003095A0 | 0xE0 | game | diff | 30 | [menu/mn_ArenaCharasel_pvsp/func_003095A0.c](menu/mn_ArenaCharasel_pvsp/func_003095A0.c) |
| func_00283A00 | 0x00283A00 | 0x1CC | game | diff | 30 | [menu/skl_sheet/func_00283A00.c](menu/skl_sheet/func_00283A00.c) |
| func_001963E0 | 0x001963E0 | 0x8C | cri | diff | 31 | [cri/sfd_00194D48/func_001963E0.c](cri/sfd_00194D48/func_001963E0.c) |
| func_0019F018 | 0x0019F018 | 0xB8 | cri | diff | 31 | [cri/sfx/func_0019F018.c](cri/sfx/func_0019F018.c) |
| func_0025E1A0 | 0x0025E1A0 | 0xD0 | game | diff | 31 | [unk/unk_25D740/func_0025E1A0.c](unk/unk_25D740/func_0025E1A0.c) |
| func_00218C40 | 0x00218C40 | 0x90 | game | diff | 32 | [unk/unk_20A4D0/func_00218C40.c](unk/unk_20A4D0/func_00218C40.c) |
| func_0019B120 | 0x0019B120 | 0xA8 | cri | diff | 32 | [cri/sfd_00194D48/func_0019B120.c](cri/sfd_00194D48/func_0019B120.c) |
| func_0028BDB0 | 0x0028BDB0 | 0xF8 | game | diff | 32 | [sys/mc_opr/func_0028BDB0.c](sys/mc_opr/func_0028BDB0.c) |
| func_002DDCA0 | 0x002DDCA0 | 0x94 | game | diff | 33 | [unk/unk_2DB970/func_002DDCA0.c](unk/unk_2DB970/func_002DDCA0.c) |
| func_00289E80 | 0x00289E80 | 0xAC | game | diff | 33 | [sys/mc_opr/func_00289E80.c](sys/mc_opr/func_00289E80.c) |
| func_00310640 | 0x00310640 | 0x17C | game | diff | 33 | [story/str_dataerase/func_00310640.c](story/str_dataerase/func_00310640.c) |
| func_0028A9E0 | 0x0028A9E0 | 0xBC | game | diff | 34 | [sys/mc_opr/func_0028A9E0.c](sys/mc_opr/func_0028A9E0.c) |
| func_002D8B00 | 0x002D8B00 | 0xF8 | game | diff | 34 | [unk/unk_2D2530/func_002D8B00.c](unk/unk_2D2530/func_002D8B00.c) |
| func_003107E0 | 0x003107E0 | 0x114 | game | diff | 35 | [story/str_dataerase/func_003107E0.c](story/str_dataerase/func_003107E0.c) |
| func_002A1050 | 0x002A1050 | 0xA0 | game | diff | 36 | [sys/cnv_sys/func_002A1050.c](sys/cnv_sys/func_002A1050.c) |
| func_001DFC80 | 0x001DFC80 | 0x1D4 | game | diff | 36 | [unk/unk_1D5B30/func_001DFC80.c](unk/unk_1D5B30/func_001DFC80.c) |
| func_002CF500 | 0x002CF500 | 0x14C | game | diff | 37 | [unk/unk_2CD5F0/func_002CF500.c](unk/unk_2CD5F0/func_002CF500.c) |
| func_002CF3B0 | 0x002CF3B0 | 0x144 | game | diff | 39 | [unk/unk_2CD5F0/func_002CF3B0.c](unk/unk_2CD5F0/func_002CF3B0.c) |
| func_002CD0C0 | 0x002CD0C0 | 0xF0 | game | diff | 40 | [unk/unk_2CC840/func_002CD0C0.c](unk/unk_2CC840/func_002CD0C0.c) |
| func_00241010 | 0x00241010 | 0xBC | game | diff | 41 | [unk/unk_23A890/func_00241010.c](unk/unk_23A890/func_00241010.c) |
| amCdFs_Close | 0x0025C800 | 0x1C4 | game | diff | 41 | [sys/amCdFs/amCdFs_Close.c](sys/amCdFs/amCdFs_Close.c) |
| func_002A10F0 | 0x002A10F0 | 0xD0 | game | diff | 42 | [sys/cnv_sys/func_002A10F0.c](sys/cnv_sys/func_002A10F0.c) |
| func_002E8190 | 0x002E8190 | 0xDC | game | diff | 42 | [menu/mn_Logomark/func_002E8190.c](menu/mn_Logomark/func_002E8190.c) |
| func_001F9660 | 0x001F9660 | 0x138 | game | diff | 42 | [battle/btb_main/func_001F9660.c](battle/btb_main/func_001F9660.c) |
| func_001C5FE0 | 0x001C5FE0 | 0x13C | game | diff | 42 | [battle/btl_main/func_001C5FE0.c](battle/btl_main/func_001C5FE0.c) |
| func_002A1C20 | 0x002A1C20 | 0x18C | game | diff | 43 | [story/evt_scrp/func_002A1C20.c](story/evt_scrp/func_002A1C20.c) |
| func_001BD530 | 0x00468E50 | 0x0 | game | diff | 44 | [battle/btl_main/func_001BD530.c](battle/btl_main/func_001BD530.c) |
| func_001BD900 | 0x00468E80 | 0x0 | game | diff | 44 | [battle/btl_main/func_001BD900.c](battle/btl_main/func_001BD900.c) |
| func_0026E780 | 0x0026E780 | 0x1CC | game | diff | 44 | [menu/ess_main_2/func_0026E780.c](menu/ess_main_2/func_0026E780.c) |
| func_001B2600 | 0x004687C0 | 0x0 | game | diff | 45 | [battle/btl_main/func_001B2600.c](battle/btl_main/func_001B2600.c) |
| func_00306AD0 | 0x00306AD0 | 0x118 | game | diff | 46 | [story/evt_shenron/func_00306AD0.c](story/evt_shenron/func_00306AD0.c) |
| func_001E9050 | 0x001E9050 | 0x138 | game | diff | 46 | [unk/unk_1D5B30/func_001E9050.c](unk/unk_1D5B30/func_001E9050.c) |
| func_001B9CA0 | 0x00468D00 | 0x0 | game | diff | 50 | [battle/btl_main/func_001B9CA0.c](battle/btl_main/func_001B9CA0.c) |
| func_002AF330 | 0x002AF330 | 0xE4 | game | diff | 50 | [unk/unk_2AE760/func_002AF330.c](unk/unk_2AE760/func_002AF330.c) |
| func_00272D30 | 0x00272D30 | 0xF0 | game | diff | 50 | [menu/ess_shop/func_00272D30.c](menu/ess_shop/func_00272D30.c) |
| func_002934F0 | 0x002934F0 | 0xF8 | game | diff | 50 | [unk/unk_2918A0/func_002934F0.c](unk/unk_2918A0/func_002934F0.c) |
| func_002DEFF0 | 0x002DEFF0 | 0x10C | game | diff | 50 | [menu/mn_option/func_002DEFF0.c](menu/mn_option/func_002DEFF0.c) |
| func_001E92D0 | 0x001E92D0 | 0x130 | game | diff | 51 | [unk/unk_1D5B30/func_001E92D0.c](unk/unk_1D5B30/func_001E92D0.c) |
| func_002B6C30 | 0x002B6C30 | 0x184 | game | diff | 51 | [menu/mn_csmodel/func_002B6C30.c](menu/mn_csmodel/func_002B6C30.c) |
| func_001B3A20 | 0x004688B0 | 0x0 | game | diff | 52 | [battle/btl_main/func_001B3A20.c](battle/btl_main/func_001B3A20.c) |
| func_002BCAE0 | 0x002BCAE0 | 0x100 | game | diff | 52 | [unk/unk_2B98D0/func_002BCAE0.c](unk/unk_2B98D0/func_002BCAE0.c) |
| func_002FBE20 | 0x002FBE20 | 0x118 | game | diff | 53 | [unk/unk_2FAFF0/func_002FBE20.c](unk/unk_2FAFF0/func_002FBE20.c) |
| func_002A1F30 | 0x002A1F30 | 0xF0 | game | diff | 54 | [story/evt_scrp/func_002A1F30.c](story/evt_scrp/func_002A1F30.c) |
| func_002CE2A0 | 0x002CE2A0 | 0x12C | game | diff | 54 | [unk/unk_2CD5F0/func_002CE2A0.c](unk/unk_2CD5F0/func_002CE2A0.c) |
| func_002CE500 | 0x002CE500 | 0x12C | game | diff | 54 | [unk/unk_2CD5F0/func_002CE500.c](unk/unk_2CD5F0/func_002CE500.c) |
| func_0028CCE0 | 0x0028CCE0 | 0x130 | game | diff | 55 | [sys/mc_opr/func_0028CCE0.c](sys/mc_opr/func_0028CCE0.c) |
| func_002BF970 | 0x002BF970 | 0x28C | game | diff | 55 | [story/str_status/func_002BF970.c](story/str_status/func_002BF970.c) |
| func_00301700 | 0x00301700 | 0x118 | game | diff | 56 | [unk/unk_301530/func_00301700.c](unk/unk_301530/func_00301700.c) |
| func_001DFA90 | 0x001DFA90 | 0x160 | game | diff | 56 | [unk/unk_1D5B30/func_001DFA90.c](unk/unk_1D5B30/func_001DFA90.c) |
| func_001C5D50 | 0x001C5D50 | 0x1D0 | game | diff | 56 | [battle/btl_main/func_001C5D50.c](battle/btl_main/func_001C5D50.c) |
| func_002BAFA0 | 0x002BAFA0 | 0x154 | game | diff | 57 | [unk/unk_2B98D0/func_002BAFA0.c](unk/unk_2B98D0/func_002BAFA0.c) |
| func_0029AAC0 | 0x0029AAC0 | 0x168 | game | diff | 57 | [story/str_map/func_0029AAC0.c](story/str_map/func_0029AAC0.c) |
| func_002AF220 | 0x002AF220 | 0x108 | game | diff | 58 | [unk/unk_2AE760/func_002AF220.c](unk/unk_2AE760/func_002AF220.c) |
| func_001941C0 | 0x001941C0 | 0x110 | cri | diff | 58 | [cri/sfd/func_001941C0.c](cri/sfd/func_001941C0.c) |
| func_002A5580 | 0x002A5580 | 0x118 | game | diff | 58 | [story/evt_scrp/func_002A5580.c](story/evt_scrp/func_002A5580.c) |
| func_00293D70 | 0x00293D70 | 0x108 | game | diff | 59 | [unk/unk_2918A0/func_00293D70.c](unk/unk_2918A0/func_00293D70.c) |
| func_002380F0 | 0x002380F0 | 0x110 | game | diff | 59 | [battle/char_light/func_002380F0.c](battle/char_light/func_002380F0.c) |
| func_0026CC30 | 0x0026CC30 | 0x120 | game | diff | 59 | [menu/ess_main/func_0026CC30.c](menu/ess_main/func_0026CC30.c) |
| func_003067A0 | 0x003067A0 | 0x138 | game | diff | 63 | [story/evt_shenron/func_003067A0.c](story/evt_shenron/func_003067A0.c) |
| func_0022F520 | 0x0022F520 | 0x140 | game | diff | 63 | [unk/unk_22E0B0/func_0022F520.c](unk/unk_22E0B0/func_0022F520.c) |
| func_001CCA90 | 0x001CCA90 | 0x15C | game | diff | 63 | [unk/unk_1CBD90/func_001CCA90.c](unk/unk_1CBD90/func_001CCA90.c) |
| func_00241C10 | 0x00241C10 | 0x148 | game | diff | 64 | [unk/unk_23A890/func_00241C10.c](unk/unk_23A890/func_00241C10.c) |
| func_00278980 | 0x00278980 | 0x17C | game | diff | 64 | [menu/ess_trade/func_00278980.c](menu/ess_trade/func_00278980.c) |
| func_002ECCE0 | 0x002ECCE0 | 0x138 | game | diff | 65 | [unk/unk_2ECB90/func_002ECCE0.c](unk/unk_2ECB90/func_002ECCE0.c) |
| func_002730B0 | 0x002730B0 | 0x158 | game | diff | 65 | [menu/ess_shop/func_002730B0.c](menu/ess_shop/func_002730B0.c) |
| func_00238610 | 0x00238610 | 0x174 | game | diff | 65 | [battle/char_light/func_00238610.c](battle/char_light/func_00238610.c) |
| func_002B1590 | 0x002B1590 | 0x120 | game | diff | 67 | [unk/unk_2AF860/func_002B1590.c](unk/unk_2AF860/func_002B1590.c) |
| func_001D3FF0 | 0x001D3FF0 | 0x164 | game | diff | 67 | [battle/char_parts/func_001D3FF0.c](battle/char_parts/func_001D3FF0.c) |
| func_001C61A0 | 0x001C61A0 | 0x1A4 | game | diff | 67 | [battle/btl_main/func_001C61A0.c](battle/btl_main/func_001C61A0.c) |
| func_00309E40 | 0x00309E40 | 0x160 | game | diff | 68 | [menu/mn_ArenaCharasel_cvsc/func_00309E40.c](menu/mn_ArenaCharasel_cvsc/func_00309E40.c) |
| func_0020EE10 | 0x0020EE10 | 0x170 | game | diff | 68 | [unk/unk_20A4D0/func_0020EE10.c](unk/unk_20A4D0/func_0020EE10.c) |
| func_00304FB0 | 0x00304FB0 | 0x174 | game | diff | 68 | [menu/mn_TourMap/func_00304FB0.c](menu/mn_TourMap/func_00304FB0.c) |
| func_002B47D0 | 0x002B47D0 | 0x178 | game | diff | 68 | [unk/unk_2B2C20/func_002B47D0.c](unk/unk_2B2C20/func_002B47D0.c) |
| func_002AD8D0 | 0x002AD8D0 | 0x19C | game | diff | 70 | [battle/scr_func/func_002AD8D0.c](battle/scr_func/func_002AD8D0.c) |
| func_0025FD50 | 0x0025FD50 | 0x1B0 | game | diff | 70 | [unk/unk_25D740/func_0025FD50.c](unk/unk_25D740/func_0025FD50.c) |
| func_00243280 | 0x00243280 | 0x168 | game | diff | 71 | [unk/unk_23A890/func_00243280.c](unk/unk_23A890/func_00243280.c) |
| func_001C9DB0 | 0x001C9DB0 | 0x140 | game | diff | 72 | [battle/char_body/func_001C9DB0.c](battle/char_body/func_001C9DB0.c) |
| func_001514C8 | 0x001514C8 | 0x188 | cri | diff | 72 | [cri/adx_0014EF28/func_001514C8.c](cri/adx_0014EF28/func_001514C8.c) |
| func_002529B0 | 0x002529B0 | 0x150 | game | diff | 75 | [battle/skill_cmd/func_002529B0.c](battle/skill_cmd/func_002529B0.c) |
| func_001D6CD0 | 0x001D6CD0 | 0x148 | game | diff | 78 | [unk/unk_1D5B30/func_001D6CD0.c](unk/unk_1D5B30/func_001D6CD0.c) |
| func_0028C580 | 0x0028C580 | 0x1A8 | game | diff | 78 | [sys/mc_opr/func_0028C580.c](sys/mc_opr/func_0028C580.c) |
| func_001F1890 | 0x001F1890 | 0x16C | game | diff | 80 | [battle/btb_draw/func_001F1890.c](battle/btb_draw/func_001F1890.c) |
| func_002D8920 | 0x002D8920 | 0x18C | game | diff | 80 | [unk/unk_2D2530/func_002D8920.c](unk/unk_2D2530/func_002D8920.c) |
| func_002228F0 | 0x002228F0 | 0x1A0 | game | diff | 80 | [unk/unk_21D260/func_002228F0.c](unk/unk_21D260/func_002228F0.c) |
| func_002E40D0 | 0x002E40D0 | 0x3C4 | game | diff | 80 | [unk/unk_2E4030/func_002E40D0.c](unk/unk_2E4030/func_002E40D0.c) |
| func_0024A0B0 | 0x0024A0B0 | 0x29C | game | diff | 82 | [battle/skill_cmd/func_0024A0B0.c](battle/skill_cmd/func_0024A0B0.c) |
| func_001B2CD0 | 0x001B2CD0 | 0x218 | game | diff | 86 | [battle/btl_main/func_001B2CD0.c](battle/btl_main/func_001B2CD0.c) |
| func_00222280 | 0x00222280 | 0x1B8 | game | diff | 87 | [unk/unk_21D260/func_00222280.c](unk/unk_21D260/func_00222280.c) |
| func_002B4E40 | 0x002B4E40 | 0x1E4 | game | diff | 89 | [unk/unk_2B2C20/func_002B4E40.c](unk/unk_2B2C20/func_002B4E40.c) |
| func_002AA6B0 | 0x002AA6B0 | 0x1F0 | game | diff | 89 | [battle/scr_func/func_002AA6B0.c](battle/scr_func/func_002AA6B0.c) |
| func_002EE1C0 | 0x002EE1C0 | 0x1A0 | game | diff | 92 | [menu/mn_ArenaList/func_002EE1C0.c](menu/mn_ArenaList/func_002EE1C0.c) |
| func_001BF570 | 0x00468F10 | 0x0 | game | diff | 93 | [battle/btl_main/func_001BF570.c](battle/btl_main/func_001BF570.c) |
| func_0020BBD0 | 0x0020BBD0 | 0x1E0 | game | diff | 93 | [unk/unk_20A4D0/func_0020BBD0.c](unk/unk_20A4D0/func_0020BBD0.c) |
| func_0023AEE0 | 0x0023AEE0 | 0x1A0 | game | diff | 94 | [unk/unk_23A890/func_0023AEE0.c](unk/unk_23A890/func_0023AEE0.c) |
| func_0024B810 | 0x0024B810 | 0x29C | game | diff | 94 | [battle/skill_cmd/func_0024B810.c](battle/skill_cmd/func_0024B810.c) |
| func_001ABF10 | 0x001ABF10 | 0x1F4 | game | diff | 97 | [battle/btl_main/func_001ABF10.c](battle/btl_main/func_001ABF10.c) |
| func_0026DC80 | 0x0026DC80 | 0x1A8 | game | diff | 99 | [menu/ess_main_2/func_0026DC80.c](menu/ess_main_2/func_0026DC80.c) |
| func_001D6470 | 0x001D6470 | 0x1D0 | game | diff | 107 | [unk/unk_1D5B30/func_001D6470.c](unk/unk_1D5B30/func_001D6470.c) |
| func_0026CD50 | 0x0026CD50 | 0x228 | game | diff | 112 | [menu/ess_main/func_0026CD50.c](menu/ess_main/func_0026CD50.c) |
| func_003068E0 | 0x003068E0 | 0x1F0 | game | diff | 113 | [story/evt_shenron/func_003068E0.c](story/evt_shenron/func_003068E0.c) |
| func_00243020 | 0x00243020 | 0x258 | game | diff | 117 | [unk/unk_23A890/func_00243020.c](unk/unk_23A890/func_00243020.c) |
| func_001B0B10 | 0x001B0B10 | 0x1FC | game | diff | 120 | [battle/btl_main/func_001B0B10.c](battle/btl_main/func_001B0B10.c) |
| func_00223660 | 0x00223660 | 0x244 | game | diff | 124 | [unk/unk_21D260/func_00223660.c](unk/unk_21D260/func_00223660.c) |
| func_002DF100 | 0x002DF100 | 0x2D0 | game | diff | 129 | [menu/mn_option/func_002DF100.c](menu/mn_option/func_002DF100.c) |
| func_0028A480 | 0x0028A480 | 0x2A8 | game | diff | 137 | [sys/mc_opr/func_0028A480.c](sys/mc_opr/func_0028A480.c) |
| func_00241280 | 0x00241280 | 0x278 | game | diff | 140 | [unk/unk_23A890/func_00241280.c](unk/unk_23A890/func_00241280.c) |
| func_0028AFB0 | 0x0028AFB0 | 0x2C0 | game | diff | 140 | [sys/mc_opr/func_0028AFB0.c](sys/mc_opr/func_0028AFB0.c) |
| func_001C9AF0 | 0x001C9AF0 | 0x2A0 | game | diff | 147 | [battle/char_body/func_001C9AF0.c](battle/char_body/func_001C9AF0.c) |
| func_0028CEF0 | 0x0028CEF0 | 0x2E8 | game | diff | 147 | [sys/mc_opr/func_0028CEF0.c](sys/mc_opr/func_0028CEF0.c) |
| func_0023B080 | 0x0023B080 | 0x340 | game | diff | 147 | [unk/unk_23A890/func_0023B080.c](unk/unk_23A890/func_0023B080.c) |
| func_0028D4D0 | 0x0028D4D0 | 0x338 | game | diff | 158 | [sys/mc_opr/func_0028D4D0.c](sys/mc_opr/func_0028D4D0.c) |
| func_001BC7C0 | 0x001BC7C0 | 0x2C0 | game | diff | 162 | [battle/btl_main/func_001BC7C0.c](battle/btl_main/func_001BC7C0.c) |
| func_001DB320 | 0x001DB320 | 0x338 | game | diff | 164 | [unk/unk_1D5B30/func_001DB320.c](unk/unk_1D5B30/func_001DB320.c) |
| func_002B93D0 | 0x002B93D0 | 0x304 | game | diff | 171 | [menu/mn_csmodel/func_002B93D0.c](menu/mn_csmodel/func_002B93D0.c) |
| func_00273AF0 | 0x00273AF0 | 0x328 | game | diff | 186 | [menu/ess_shop/func_00273AF0.c](menu/ess_shop/func_00273AF0.c) |
| func_0029E120 | 0x0029E120 | 0x330 | game | diff | 191 | [battle/char_disp/func_0029E120.c](battle/char_disp/func_0029E120.c) |
| func_002DE5A0 | 0x002DE5A0 | 0x36C | game | diff | 196 | [menu/mn_option/func_002DE5A0.c](menu/mn_option/func_002DE5A0.c) |
| func_00243600 | 0x00243600 | 0x3E0 | game | diff | 228 | [unk/unk_23A890/func_00243600.c](unk/unk_23A890/func_00243600.c) |
| MainMenu_TaskMain | 0x00267440 | 0x4CC | game | diff | 229 | [menu/mn_mainmenu/MainMenu_TaskMain.c](menu/mn_mainmenu/MainMenu_TaskMain.c) |
| func_00282E10 | 0x00282E10 | 0x4D0 | game | diff | 245 | [menu/skl_sheet/func_00282E10.c](menu/skl_sheet/func_00282E10.c) |
| func_0022E0B0 | 0x0022E0B0 | 0x574 | game | diff | 250 | [unk/unk_22E0B0/func_0022E0B0.c](unk/unk_22E0B0/func_0022E0B0.c) |
| func_00145D70 | 0x00145D70 | 0x460 | game | diff | 254 | [sys/unk_145B40/func_00145D70.c](sys/unk_145B40/func_00145D70.c) |
| func_001D1ED0 | 0x001D1ED0 | 0x42C | game | diff | 257 | [battle/char_cloth/func_001D1ED0.c](battle/char_cloth/func_001D1ED0.c) |
| func_002DB970 | 0x002DB970 | 0x5B0 | game | diff | 310 | [unk/unk_2DB970/func_002DB970.c](unk/unk_2DB970/func_002DB970.c) |
| func_00275230 | 0x00275230 | 0x7B4 | game | diff | 399 | [menu/ess_shop/func_00275230.c](menu/ess_shop/func_00275230.c) |
| func_00147650 | 0x00147650 | 0xAFC | game | diff | 683 | [sys/unk_147560/func_00147650.c](sys/unk_147560/func_00147650.c) |
| func_001EF1E0 | 0x001EF1E0 | 0x32C | game | data | 0 | [battle/btb_draw/func_001EF1E0.c](battle/btb_draw/func_001EF1E0.c) |
| func_0027DAF0 | 0x0027DAF0 | 0x2C | game | size | 1 | [menu/mn_charasel/func_0027DAF0.c](menu/mn_charasel/func_0027DAF0.c) |
| func_0028DDA0 | 0x0028DDA0 | 0xC | game | size | 2 | [sys/mc_opr/func_0028DDA0.c](sys/mc_opr/func_0028DDA0.c) |
| func_001CE560 | 0x001CE560 | 0x48 | game | size | 3 | [unk/unk_1CBD90/func_001CE560.c](unk/unk_1CBD90/func_001CE560.c) |
| func_001291C8 | 0x001291C8 | 0x28 | libc | size | 4 | [sdk/libc_00128288/func_001291C8.c](sdk/libc_00128288/func_001291C8.c) |
| func_00156B68 | 0x00156B68 | 0x28 | cri | size | 4 | [cri/adx_001563B0/func_00156B68.c](cri/adx_001563B0/func_00156B68.c) |
| func_00156B90 | 0x00156B90 | 0x28 | cri | size | 4 | [cri/adx_001563B0/func_00156B90.c](cri/adx_001563B0/func_00156B90.c) |
| func_0019EC50 | 0x0019EC50 | 0x28 | cri | size | 4 | [cri/sfd_00194D48/func_0019EC50.c](cri/sfd_00194D48/func_0019EC50.c) |
| func_0019FE88 | 0x0019FE88 | 0x28 | cri | size | 4 | [cri/sfx/func_0019FE88.c](cri/sfx/func_0019FE88.c) |
| func_00168938 | 0x00168938 | 0x2C | cri | size | 4 | [cri/htci/func_00168938.c](cri/htci/func_00168938.c) |
| func_00189BC0 | 0x00189BC0 | 0x30 | cri | size | 4 | [cri/sfd/func_00189BC0.c](cri/sfd/func_00189BC0.c) |
| func_00194560 | 0x00194560 | 0x30 | cri | size | 4 | [cri/sfd/func_00194560.c](cri/sfd/func_00194560.c) |
| func_00104938 | 0x00104938 | 0x34 | sdk | size | 4 | [sdk/libmpeg/func_00104938.c](sdk/libmpeg/func_00104938.c) |
| func_00106A68 | 0x00106A68 | 0x34 | sdk | size | 4 | [sdk/libmpeg_00104BE8/func_00106A68.c](sdk/libmpeg_00104BE8/func_00106A68.c) |
| func_00170AA8 | 0x00170AA8 | 0x34 | cri | size | 4 | [cri/mpv/func_00170AA8.c](cri/mpv/func_00170AA8.c) |
| func_00172F48 | 0x00172F48 | 0x34 | cri | size | 4 | [cri/mpv/func_00172F48.c](cri/mpv/func_00172F48.c) |
| func_0017B098 | 0x0017B098 | 0x34 | cri | size | 4 | [cri/mpv/func_0017B098.c](cri/mpv/func_0017B098.c) |
| func_0017C330 | 0x0017C330 | 0x34 | cri | size | 4 | [cri/mpv/func_0017C330.c](cri/mpv/func_0017C330.c) |
| func_0028DDF0 | 0x0028DDF0 | 0x38 | game | size | 4 | [sys/mc_opr/func_0028DDF0.c](sys/mc_opr/func_0028DDF0.c) |
| func_00181330 | 0x00181330 | 0x3C | cri | size | 4 | [cri/mwsfd/func_00181330.c](cri/mwsfd/func_00181330.c) |
| func_001816F0 | 0x001816F0 | 0x3C | cri | size | 4 | [cri/mwsfd/func_001816F0.c](cri/mwsfd/func_001816F0.c) |
| func_0019A120 | 0x0019A120 | 0x3C | cri | size | 4 | [cri/sfd_00194D48/func_0019A120.c](cri/sfd_00194D48/func_0019A120.c) |
| func_001A1990 | 0x001A1990 | 0x3C | cri | size | 4 | [cri/sfx/func_001A1990.c](cri/sfx/func_001A1990.c) |
| PS2RNA_DiscardData | 0x0016D920 | 0x44 | cri | size | 4 | [cri/ps2rna/PS2RNA_DiscardData.c](cri/ps2rna/PS2RNA_DiscardData.c) |
| PS2RNA_GetStartSmpl | 0x0016D750 | 0x44 | cri | size | 4 | [cri/ps2rna/PS2RNA_GetStartSmpl.c](cri/ps2rna/PS2RNA_GetStartSmpl.c) |
| PS2RNA_IsOverflow | 0x0016D888 | 0x44 | cri | size | 4 | [cri/ps2rna/PS2RNA_IsOverflow.c](cri/ps2rna/PS2RNA_IsOverflow.c) |
| PS2RNA_SetStmHdInfo | 0x0016D9B0 | 0x44 | cri | size | 4 | [cri/ps2rna/PS2RNA_SetStmHdInfo.c](cri/ps2rna/PS2RNA_SetStmHdInfo.c) |
| func_0018A9B0 | 0x0018A9B0 | 0x48 | cri | size | 4 | [cri/sfd/func_0018A9B0.c](cri/sfd/func_0018A9B0.c) |
| func_0018A9F8 | 0x0018A9F8 | 0x48 | cri | size | 4 | [cri/sfd/func_0018A9F8.c](cri/sfd/func_0018A9F8.c) |
| func_001946D8 | 0x001946D8 | 0x48 | cri | size | 4 | [cri/sfd/func_001946D8.c](cri/sfd/func_001946D8.c) |
| ADXRNA_GetStat | 0x001588F8 | 0x4C | cri | size | 4 | [cri/adx_001563B0/ADXRNA_GetStat.c](cri/adx_001563B0/ADXRNA_GetStat.c) |
| func_0018CD20 | 0x0018CD20 | 0x4C | cri | size | 4 | [cri/sfd/func_0018CD20.c](cri/sfd/func_0018CD20.c) |
| func_0018F670 | 0x0018F670 | 0x4C | cri | size | 4 | [cri/sfd/func_0018F670.c](cri/sfd/func_0018F670.c) |
| func_0019A488 | 0x0019A488 | 0x4C | cri | size | 4 | [cri/sfd_00194D48/func_0019A488.c](cri/sfd_00194D48/func_0019A488.c) |
| func_00106C08 | 0x00106C08 | 0x50 | sdk | size | 4 | [sdk/libmpeg_00104BE8/func_00106C08.c](sdk/libmpeg_00104BE8/func_00106C08.c) |
| func_00107F70 | 0x00107F70 | 0x50 | sdk | size | 4 | [sdk/libmpeg/kfiv_mpeg/func_00107F70.c](sdk/libmpeg/kfiv_mpeg/func_00107F70.c) |
| func_00178910 | 0x00178910 | 0x50 | cri | size | 4 | [cri/mpv/func_00178910.c](cri/mpv/func_00178910.c) |
| func_001929B8 | 0x001929B8 | 0x50 | cri | size | 4 | [cri/sfd/func_001929B8.c](cri/sfd/func_001929B8.c) |
| func_0019F580 | 0x0019F580 | 0x50 | cri | size | 4 | [cri/sfx/func_0019F580.c](cri/sfx/func_0019F580.c) |
| func_0019FE28 | 0x0019FE28 | 0x50 | cri | size | 4 | [cri/sfx/func_0019FE28.c](cri/sfx/func_0019FE28.c) |
| func_0016C910 | 0x0016C910 | 0x54 | cri | size | 4 | [cri/ps2rna/func_0016C910.c](cri/ps2rna/func_0016C910.c) |
| func_00178B28 | 0x00178B28 | 0x54 | cri | size | 4 | [cri/mpv/func_00178B28.c](cri/mpv/func_00178B28.c) |
| _close_r | 0x001222D8 | 0x58 | libc | size | 4 | [sdk/libc/_close_r.c](sdk/libc/_close_r.c) |
| _sbrk_r | 0x001273A8 | 0x58 | libc | size | 4 | [sdk/libc_00126B70/_sbrk_r.c](sdk/libc_00126B70/_sbrk_r.c) |
| func_00116D70 | 0x00116D70 | 0x58 | sdk | size | 4 | [sdk/libpad/kfiv_libpad/func_00116D70.c](sdk/libpad/kfiv_libpad/func_00116D70.c) |
| func_001709A8 | 0x001709A8 | 0x58 | cri | size | 4 | [cri/mpv/func_001709A8.c](cri/mpv/func_001709A8.c) |
| func_001962A0 | 0x001962A0 | 0x58 | cri | size | 4 | [cri/sfd_00194D48/func_001962A0.c](cri/sfd_00194D48/func_001962A0.c) |
| mwSfdSetOutVol | 0x00184088 | 0x58 | cri | size | 4 | [cri/mwsfd/mwSfdSetOutVol.c](cri/mwsfd/mwSfdSetOutVol.c) |
| func_0016C788 | 0x0016C788 | 0x5C | cri | size | 4 | [cri/ps2rna/func_0016C788.c](cri/ps2rna/func_0016C788.c) |
| func_00192800 | 0x00192800 | 0x5C | cri | size | 4 | [cri/sfd/func_00192800.c](cri/sfd/func_00192800.c) |
| func_0018B058 | 0x0018B058 | 0x60 | cri | size | 4 | [cri/sfd/func_0018B058.c](cri/sfd/func_0018B058.c) |
| func_00165C68 | 0x00165C68 | 0x64 | cri | size | 4 | [cri/dtx/func_00165C68.c](cri/dtx/func_00165C68.c) |
| func_00169770 | 0x00169770 | 0x64 | cri | size | 4 | [cri/htci/func_00169770.c](cri/htci/func_00169770.c) |
| func_00181E20 | 0x00181E20 | 0x64 | cri | size | 4 | [cri/mwsfd/func_00181E20.c](cri/mwsfd/func_00181E20.c) |
| func_00181EA0 | 0x00181EA0 | 0x64 | cri | size | 4 | [cri/mwsfd/func_00181EA0.c](cri/mwsfd/func_00181EA0.c) |
| func_00181F20 | 0x00181F20 | 0x64 | cri | size | 4 | [cri/mwsfd/func_00181F20.c](cri/mwsfd/func_00181F20.c) |
| func_0019A160 | 0x0019A160 | 0x64 | cri | size | 4 | [cri/sfd_00194D48/func_0019A160.c](cri/sfd_00194D48/func_0019A160.c) |
| func_0018A4B8 | 0x0018A4B8 | 0x68 | cri | size | 4 | [cri/sfd/func_0018A4B8.c](cri/sfd/func_0018A4B8.c) |
| func_00184A68 | 0x00184A68 | 0x6C | cri | size | 4 | [cri/mwsfd/func_00184A68.c](cri/mwsfd/func_00184A68.c) |
| func_00184AD8 | 0x00184AD8 | 0x6C | cri | size | 4 | [cri/mwsfd/func_00184AD8.c](cri/mwsfd/func_00184AD8.c) |
| func_0018B6A0 | 0x0018B6A0 | 0x6C | cri | size | 4 | [cri/sfd/func_0018B6A0.c](cri/sfd/func_0018B6A0.c) |
| func_0018A890 | 0x0018A890 | 0x70 | cri | size | 4 | [cri/sfd/func_0018A890.c](cri/sfd/func_0018A890.c) |
| func_00198380 | 0x00198380 | 0x70 | cri | size | 4 | [cri/sfd_00194D48/func_00198380.c](cri/sfd_00194D48/func_00198380.c) |
| func_00109848 | 0x00109848 | 0x74 | sdk | size | 4 | [sdk/libmpeg_001095D0/func_00109848.c](sdk/libmpeg_001095D0/func_00109848.c) |
| func_00109B60 | 0x00109B60 | 0x74 | sdk | size | 4 | [sdk/libipu/func_00109B60.c](sdk/libipu/func_00109B60.c) |
| func_001986A0 | 0x001986A0 | 0x74 | cri | size | 4 | [cri/sfd_00194D48/func_001986A0.c](cri/sfd_00194D48/func_001986A0.c) |
| func_00116278 | 0x00116278 | 0x78 | sdk | size | 4 | [sdk/libkernl_00113B88/func_00116278.c](sdk/libkernl_00113B88/func_00116278.c) |
| func_00189C80 | 0x00189C80 | 0x78 | cri | size | 4 | [cri/sfd/func_00189C80.c](cri/sfd/func_00189C80.c) |
| func_0010E948 | 0x0010E948 | 0x7C | sdk | size | 4 | [sdk/libkernl_0010E8D8/func_0010E948.c](sdk/libkernl_0010E8D8/func_0010E948.c) |
| func_0019E300 | 0x0019E300 | 0x80 | cri | size | 4 | [cri/sfd_00194D48/func_0019E300.c](cri/sfd_00194D48/func_0019E300.c) |
| func_0019E948 | 0x0019E948 | 0x84 | cri | size | 4 | [cri/sfd_00194D48/func_0019E948.c](cri/sfd_00194D48/func_0019E948.c) |
| func_001CF600 | 0x001CF600 | 0x84 | game | size | 4 | [unk/unk_1CBD90/func_001CF600.c](unk/unk_1CBD90/func_001CF600.c) |
| func_0018FA58 | 0x0018FA58 | 0x88 | cri | size | 4 | [cri/sfd/func_0018FA58.c](cri/sfd/func_0018FA58.c) |
| func_0019B398 | 0x0019B398 | 0x8C | cri | size | 4 | [cri/sfd_00194D48/func_0019B398.c](cri/sfd_00194D48/func_0019B398.c) |
| func_001167D0 | 0x001167D0 | 0x90 | sdk | size | 4 | [sdk/libpad/kfiv_libpad/func_001167D0.c](sdk/libpad/kfiv_libpad/func_001167D0.c) |
| func_0017AF10 | 0x0017AF10 | 0x94 | cri | size | 4 | [cri/mpv/func_0017AF10.c](cri/mpv/func_0017AF10.c) |
| func_00197778 | 0x00197778 | 0x94 | cri | size | 4 | [cri/sfd_00194D48/func_00197778.c](cri/sfd_00194D48/func_00197778.c) |
| func_0016CF38 | 0x0016CF38 | 0x98 | cri | size | 4 | [cri/ps2rna/func_0016CF38.c](cri/ps2rna/func_0016CF38.c) |
| func_00180B08 | 0x00180B08 | 0x98 | cri | size | 4 | [cri/mwsfd/func_00180B08.c](cri/mwsfd/func_00180B08.c) |
| mwPlyExecSvrHndl | 0x00187B40 | 0x9C | cri | size | 4 | [cri/mwsfd/mwPlyExecSvrHndl.c](cri/mwsfd/mwPlyExecSvrHndl.c) |
| func_00163EE8 | 0x00163EE8 | 0xA0 | cri | size | 4 | [cri/srd/func_00163EE8.c](cri/srd/func_00163EE8.c) |
| func_00193DE0 | 0x00193DE0 | 0xA0 | cri | size | 4 | [cri/sfd/func_00193DE0.c](cri/sfd/func_00193DE0.c) |
| func_0018F520 | 0x0018F520 | 0xA4 | cri | size | 4 | [cri/sfd/func_0018F520.c](cri/sfd/func_0018F520.c) |
| func_0015B500 | 0x0015B500 | 0xB0 | cri | size | 4 | [cri/adx_00159278/func_0015B500.c](cri/adx_00159278/func_0015B500.c) |
| func_00165810 | 0x00165810 | 0xB0 | cri | size | 4 | [cri/dtr/func_00165810.c](cri/dtr/func_00165810.c) |
| func_001890C0 | 0x001890C0 | 0xB4 | cri | size | 4 | [cri/sfd/func_001890C0.c](cri/sfd/func_001890C0.c) |
| func_00172F80 | 0x00172F80 | 0xB8 | cri | size | 4 | [cri/mpv/func_00172F80.c](cri/mpv/func_00172F80.c) |
| func_001972B8 | 0x001972B8 | 0xB8 | cri | size | 4 | [cri/sfd_00194D48/func_001972B8.c](cri/sfd_00194D48/func_001972B8.c) |
| func_00234C90 | 0x00234C90 | 0xB8 | game | size | 4 | [unk/unk_231E70/func_00234C90.c](unk/unk_231E70/func_00234C90.c) |
| sfxcnv_IsCnvUpHalf | 0x0019EDD0 | 0xB8 | cri | size | 4 | [cri/sfx/sfxcnv_IsCnvUpHalf.c](cri/sfx/sfxcnv_IsCnvUpHalf.c) |
| func_0019B520 | 0x0019B520 | 0xC4 | cri | size | 4 | [cri/sfd_00194D48/func_0019B520.c](cri/sfd_00194D48/func_0019B520.c) |
| func_0015C948 | 0x0015C948 | 0xCC | cri | size | 4 | [cri/adx_00159278/func_0015C948.c](cri/adx_00159278/func_0015C948.c) |
| func_0015CA18 | 0x0015CA18 | 0xCC | cri | size | 4 | [cri/adx_00159278/func_0015CA18.c](cri/adx_00159278/func_0015CA18.c) |
| func_00190F48 | 0x00190F48 | 0xD0 | cri | size | 4 | [cri/sfd/func_00190F48.c](cri/sfd/func_00190F48.c) |
| func_001987C0 | 0x001987C0 | 0xD0 | cri | size | 4 | [cri/sfd_00194D48/func_001987C0.c](cri/sfd_00194D48/func_001987C0.c) |
| sceTtyRead | 0x0010BB30 | 0xD0 | sdk | size | 4 | [sdk/libkernl_0010B9B8/sceTtyRead.c](sdk/libkernl_0010B9B8/sceTtyRead.c) |
| func_0016D508 | 0x0016D508 | 0xD8 | cri | size | 4 | [cri/ps2rna/func_0016D508.c](cri/ps2rna/func_0016D508.c) |
| func_00192A08 | 0x00192A08 | 0xE0 | cri | size | 4 | [cri/sfd/func_00192A08.c](cri/sfd/func_00192A08.c) |
| func_00193520 | 0x00193520 | 0xE8 | cri | size | 4 | [cri/sfd/func_00193520.c](cri/sfd/func_00193520.c) |
| func_00192C78 | 0x00192C78 | 0xF0 | cri | size | 4 | [cri/sfd/func_00192C78.c](cri/sfd/func_00192C78.c) |
| func_00199218 | 0x00199218 | 0xF8 | cri | size | 4 | [cri/sfd_00194D48/func_00199218.c](cri/sfd_00194D48/func_00199218.c) |
| func_0016B190 | 0x0016B190 | 0x100 | cri | size | 4 | [cri/mfci/func_0016B190.c](cri/mfci/func_0016B190.c) |
| func_0017B4B8 | 0x0017B4B8 | 0x100 | cri | size | 4 | [cri/mpv/func_0017B4B8.c](cri/mpv/func_0017B4B8.c) |
| func_0019CDF8 | 0x0019CDF8 | 0x110 | cri | size | 4 | [cri/sfd_00194D48/func_0019CDF8.c](cri/sfd_00194D48/func_0019CDF8.c) |
| func_0019F468 | 0x0019F468 | 0x114 | cri | size | 4 | [cri/sfx/func_0019F468.c](cri/sfx/func_0019F468.c) |
| func_0019BBD8 | 0x0019BBD8 | 0x120 | cri | size | 4 | [cri/sfd_00194D48/func_0019BBD8.c](cri/sfd_00194D48/func_0019BBD8.c) |
| func_001A0908 | 0x001A0908 | 0x130 | cri | size | 4 | [cri/sfx/func_001A0908.c](cri/sfx/func_001A0908.c) |
| func_00151650 | 0x00151650 | 0x140 | cri | size | 4 | [cri/adx_0014EF28/func_00151650.c](cri/adx_0014EF28/func_00151650.c) |
| func_0018FCC0 | 0x0018FCC0 | 0x140 | cri | size | 4 | [cri/sfd/func_0018FCC0.c](cri/sfd/func_0018FCC0.c) |
| func_001625F0 | 0x001625F0 | 0x144 | cri | size | 4 | [cri/adx_00161B98/func_001625F0.c](cri/adx_00161B98/func_001625F0.c) |
| func_0018AB70 | 0x0018AB70 | 0x14C | cri | size | 4 | [cri/sfd/func_0018AB70.c](cri/sfd/func_0018AB70.c) |
| func_00173418 | 0x00173418 | 0x164 | cri | size | 4 | [cri/mpv/func_00173418.c](cri/mpv/func_00173418.c) |
| func_001915B0 | 0x001915B0 | 0x174 | cri | size | 4 | [cri/sfd/func_001915B0.c](cri/sfd/func_001915B0.c) |
| sceTtyWrite | 0x0010B9B8 | 0x174 | sdk | size | 4 | [sdk/libkernl_0010B9B8/sceTtyWrite.c](sdk/libkernl_0010B9B8/sceTtyWrite.c) |
| func_0014F6E0 | 0x0014F6E0 | 0x180 | cri | size | 4 | [cri/adx_0014EF28/func_0014F6E0.c](cri/adx_0014EF28/func_0014F6E0.c) |
| func_0014FFA0 | 0x0014FFA0 | 0x180 | cri | size | 4 | [cri/adx_0014EF28/func_0014FFA0.c](cri/adx_0014EF28/func_0014FFA0.c) |
| htCiLoadDirInfo | 0x00169500 | 0x188 | cri | size | 4 | [cri/htci/htCiLoadDirInfo.c](cri/htci/htCiLoadDirInfo.c) |
| sceSifInitRpc | 0x0010D820 | 0x19C | sdk | size | 4 | [sdk/libkernl_0010D628/sceSifInitRpc.c](sdk/libkernl_0010D628/sceSifInitRpc.c) |
| func_00105AF8 | 0x00105AF8 | 0x1A0 | sdk | size | 4 | [sdk/libmpeg_00104BE8/func_00105AF8.c](sdk/libmpeg_00104BE8/func_00105AF8.c) |
| func_001A03B8 | 0x001A03B8 | 0x1D0 | cri | size | 4 | [cri/sfx/func_001A03B8.c](cri/sfx/func_001A03B8.c) |
| func_00182538 | 0x00182538 | 0x1E8 | cri | size | 4 | [cri/mwsfd/func_00182538.c](cri/mwsfd/func_00182538.c) |
| func_00199E08 | 0x00199E08 | 0x208 | cri | size | 4 | [cri/sfd_00194D48/func_00199E08.c](cri/sfd_00194D48/func_00199E08.c) |
| func_00172110 | 0x00172110 | 0x2CC | cri | size | 4 | [cri/mpv/func_00172110.c](cri/mpv/func_00172110.c) |
| ADXT_Create | 0x0015DDD8 | 0x30C | cri | size | 4 | [cri/adx_00159278/ADXT_Create.c](cri/adx_00159278/ADXT_Create.c) |
| func_00142100 | 0x00142100 | 0x14 | game | size | 5 | [sys/amSofdec/func_00142100.c](sys/amSofdec/func_00142100.c) |
| func_00288000 | 0x00288000 | 0xAC | game | size | 5 | [menu/mn_StageSel/func_00288000.c](menu/mn_StageSel/func_00288000.c) |
| func_002A0D50 | 0x002A0D50 | 0x20 | game | size | 6 | [sys/cnv_sys/func_002A0D50.c](sys/cnv_sys/func_002A0D50.c) |
| func_001FA360 | 0x001FA360 | 0x5C | game | size | 6 | [battle/btb_main/func_001FA360.c](battle/btb_main/func_001FA360.c) |
| func_001EF090 | 0x001EF090 | 0x3C | game | size | 7 | [battle/btb_draw/func_001EF090.c](battle/btb_draw/func_001EF090.c) |
| AddDmacHandler | 0x00109F70 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/AddDmacHandler.c](sdk/libkernl_syscalls/AddDmacHandler.c) |
| AddDmacHandler2 | 0x00109F80 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/AddDmacHandler2.c](sdk/libkernl_syscalls/AddDmacHandler2.c) |
| AddIntcHandler | 0x00109F40 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/AddIntcHandler.c](sdk/libkernl_syscalls/AddIntcHandler.c) |
| AddIntcHandler2 | 0x00109F50 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/AddIntcHandler2.c](sdk/libkernl_syscalls/AddIntcHandler2.c) |
| AddSbusIntcHandler | 0x00109EE0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/AddSbusIntcHandler.c](sdk/libkernl_syscalls/AddSbusIntcHandler.c) |
| CancelWakeupThread | 0x0010A1B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/CancelWakeupThread.c](sdk/libkernl_syscalls/CancelWakeupThread.c) |
| ChangeThreadPriority | 0x0010A0F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ChangeThreadPriority.c](sdk/libkernl_syscalls/ChangeThreadPriority.c) |
| CpuConfig | 0x0010A4F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/CpuConfig.c](sdk/libkernl_syscalls/CpuConfig.c) |
| CreateSema | 0x0010A260 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/CreateSema.c](sdk/libkernl_syscalls/CreateSema.c) |
| CreateThread | 0x0010A060 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/CreateThread.c](sdk/libkernl_syscalls/CreateThread.c) |
| Deci2Call | 0x0010A690 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/Deci2Call.c](sdk/libkernl_syscalls/Deci2Call.c) |
| DeleteSema | 0x0010A270 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/DeleteSema.c](sdk/libkernl_syscalls/DeleteSema.c) |
| DeleteThread | 0x0010A070 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/DeleteThread.c](sdk/libkernl_syscalls/DeleteThread.c) |
| DisableCache | 0x0010A4C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/DisableCache.c](sdk/libkernl_syscalls/DisableCache.c) |
| DisableDispatchThread | 0x0010A0D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/DisableDispatchThread.c](sdk/libkernl_syscalls/DisableDispatchThread.c) |
| EnableCache | 0x0010A4B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/EnableCache.c](sdk/libkernl_syscalls/EnableCache.c) |
| EnableDispatchThread | 0x0010A0E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/EnableDispatchThread.c](sdk/libkernl_syscalls/EnableDispatchThread.c) |
| EndOfHeap | 0x0010A240 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/EndOfHeap.c](sdk/libkernl_syscalls/EndOfHeap.c) |
| ExecOSD | 0x0010A680 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ExecOSD.c](sdk/libkernl_syscalls/ExecOSD.c) |
| ExecPS2 | 0x00109EB0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ExecPS2.c](sdk/libkernl_syscalls/ExecPS2.c) |
| Exit | 0x00109E80 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/Exit.c](sdk/libkernl_syscalls/Exit.c) |
| ExitDeleteThread | 0x0010A0A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ExitDeleteThread.c](sdk/libkernl_syscalls/ExitDeleteThread.c) |
| ExitThread | 0x0010A090 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ExitThread.c](sdk/libkernl_syscalls/ExitThread.c) |
| FlushCache | 0x0010A4E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/FlushCache.c](sdk/libkernl_syscalls/FlushCache.c) |
| GetCop0 | 0x0010A4D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetCop0.c](sdk/libkernl_syscalls/GetCop0.c) |
| GetGsHParam | 0x0010A320 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetGsHParam.c](sdk/libkernl_syscalls/GetGsHParam.c) |
| GetGsVParam | 0x0010A330 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetGsVParam.c](sdk/libkernl_syscalls/GetGsVParam.c) |
| GetMemorySize | 0x0010A6C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetMemorySize.c](sdk/libkernl_syscalls/GetMemorySize.c) |
| GetOsdConfigParam | 0x0010A310 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetOsdConfigParam.c](sdk/libkernl_syscalls/GetOsdConfigParam.c) |
| GetOsdConfigParam2 | 0x0010A570 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetOsdConfigParam2.c](sdk/libkernl_syscalls/GetOsdConfigParam2.c) |
| GetThreadId | 0x0010A150 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GetThreadId.c](sdk/libkernl_syscalls/GetThreadId.c) |
| GsGetIMR | 0x0010A580 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GsGetIMR.c](sdk/libkernl_syscalls/GsGetIMR.c) |
| GsPutIMR | 0x0010A5A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/GsPutIMR.c](sdk/libkernl_syscalls/GsPutIMR.c) |
| Interrupt2Iop | 0x00109F00 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/Interrupt2Iop.c](sdk/libkernl_syscalls/Interrupt2Iop.c) |
| JoinThread | 0x0010A210 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/JoinThread.c](sdk/libkernl_syscalls/JoinThread.c) |
| KSeg0 | 0x0010A4A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/KSeg0.c](sdk/libkernl_syscalls/KSeg0.c) |
| LoadExecPS2 | 0x00109EA0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/LoadExecPS2.c](sdk/libkernl_syscalls/LoadExecPS2.c) |
| MachineType | 0x0010A6B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/MachineType.c](sdk/libkernl_syscalls/MachineType.c) |
| PSMode | 0x0010A6A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/PSMode.c](sdk/libkernl_syscalls/PSMode.c) |
| PollSema | 0x0010A2B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/PollSema.c](sdk/libkernl_syscalls/PollSema.c) |
| ReferSemaStatus | 0x0010A2D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ReferSemaStatus.c](sdk/libkernl_syscalls/ReferSemaStatus.c) |
| ReferThreadStatus | 0x0010A160 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ReferThreadStatus.c](sdk/libkernl_syscalls/ReferThreadStatus.c) |
| ReleaseWaitThread | 0x0010A130 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ReleaseWaitThread.c](sdk/libkernl_syscalls/ReleaseWaitThread.c) |
| RemoveDmacHandler | 0x00109F90 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/RemoveDmacHandler.c](sdk/libkernl_syscalls/RemoveDmacHandler.c) |
| RemoveIntcHandler | 0x00109F60 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/RemoveIntcHandler.c](sdk/libkernl_syscalls/RemoveIntcHandler.c) |
| RemoveSbusIntcHandler | 0x00109EF0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/RemoveSbusIntcHandler.c](sdk/libkernl_syscalls/RemoveSbusIntcHandler.c) |
| ResetEE | 0x00109E50 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ResetEE.c](sdk/libkernl_syscalls/ResetEE.c) |
| ResumeThread | 0x0010A1F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/ResumeThread.c](sdk/libkernl_syscalls/ResumeThread.c) |
| RotateThreadReadyQueue | 0x0010A110 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/RotateThreadReadyQueue.c](sdk/libkernl_syscalls/RotateThreadReadyQueue.c) |
| SetCPUTimer | 0x0010A550 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetCPUTimer.c](sdk/libkernl_syscalls/SetCPUTimer.c) |
| SetCPUTimerHandler | 0x0010A540 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetCPUTimerHandler.c](sdk/libkernl_syscalls/SetCPUTimerHandler.c) |
| SetGsCrt | 0x00109E60 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetGsCrt.c](sdk/libkernl_syscalls/SetGsCrt.c) |
| SetGsHParam | 0x0010A340 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetGsHParam.c](sdk/libkernl_syscalls/SetGsHParam.c) |
| SetGsVParam | 0x0010A350 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetGsVParam.c](sdk/libkernl_syscalls/SetGsVParam.c) |
| SetOsdConfigParam | 0x0010A300 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetOsdConfigParam.c](sdk/libkernl_syscalls/SetOsdConfigParam.c) |
| SetOsdConfigParam2 | 0x0010A560 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetOsdConfigParam2.c](sdk/libkernl_syscalls/SetOsdConfigParam2.c) |
| SetPgifHandler | 0x0010A5C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetPgifHandler.c](sdk/libkernl_syscalls/SetPgifHandler.c) |
| SetSyscall | 0x0010A5E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetSyscall.c](sdk/libkernl_syscalls/SetSyscall.c) |
| SetVCommonHandler | 0x00109F20 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetVCommonHandler.c](sdk/libkernl_syscalls/SetVCommonHandler.c) |
| SetVInterruptHandler | 0x00109F30 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetVInterruptHandler.c](sdk/libkernl_syscalls/SetVInterruptHandler.c) |
| SetVSyncFlag | 0x0010A5D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetVSyncFlag.c](sdk/libkernl_syscalls/SetVSyncFlag.c) |
| SetVTLBRefillHandler | 0x00109F10 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetVTLBRefillHandler.c](sdk/libkernl_syscalls/SetVTLBRefillHandler.c) |
| SetupHeap | 0x0010A230 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetupHeap.c](sdk/libkernl_syscalls/SetupHeap.c) |
| SetupThread | 0x0010A220 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SetupThread.c](sdk/libkernl_syscalls/SetupThread.c) |
| SignalSema | 0x0010A280 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SignalSema.c](sdk/libkernl_syscalls/SignalSema.c) |
| SleepThread | 0x0010A180 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SleepThread.c](sdk/libkernl_syscalls/SleepThread.c) |
| StartThread | 0x0010A080 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/StartThread.c](sdk/libkernl_syscalls/StartThread.c) |
| SuspendThread | 0x0010A1D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/SuspendThread.c](sdk/libkernl_syscalls/SuspendThread.c) |
| TerminateThread | 0x0010A0B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/TerminateThread.c](sdk/libkernl_syscalls/TerminateThread.c) |
| WaitSema | 0x0010A2A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/WaitSema.c](sdk/libkernl_syscalls/WaitSema.c) |
| WakeupThread | 0x0010A190 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/WakeupThread.c](sdk/libkernl_syscalls/WakeupThread.c) |
| _DisableDmac | 0x00109FD0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_DisableDmac.c](sdk/libkernl_syscalls/_DisableDmac.c) |
| _DisableIntc | 0x00109FB0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_DisableIntc.c](sdk/libkernl_syscalls/_DisableIntc.c) |
| _EnableDmac | 0x00109FC0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_EnableDmac.c](sdk/libkernl_syscalls/_EnableDmac.c) |
| _EnableIntc | 0x00109FA0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_EnableIntc.c](sdk/libkernl_syscalls/_EnableIntc.c) |
| _iDisableDmac | 0x0010A030 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iDisableDmac.c](sdk/libkernl_syscalls/_iDisableDmac.c) |
| _iDisableIntc | 0x0010A010 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iDisableIntc.c](sdk/libkernl_syscalls/_iDisableIntc.c) |
| _iEnableDmac | 0x0010A020 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iEnableDmac.c](sdk/libkernl_syscalls/_iEnableDmac.c) |
| _iEnableIntc | 0x0010A000 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iEnableIntc.c](sdk/libkernl_syscalls/_iEnableIntc.c) |
| _iRotateThreadReadyQueue | 0x0010A120 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iRotateThreadReadyQueue.c](sdk/libkernl_syscalls/_iRotateThreadReadyQueue.c) |
| _iSuspendThread | 0x0010A1E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iSuspendThread.c](sdk/libkernl_syscalls/_iSuspendThread.c) |
| _iWakeupThread | 0x0010A1A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/_iWakeupThread.c](sdk/libkernl_syscalls/_iWakeupThread.c) |
| func_001004F8 | 0x001004F8 | 0x10 | sdk | size | 8 | [sdk/libgraph/func_001004F8.c](sdk/libgraph/func_001004F8.c) |
| func_00109E40 | 0x00109E40 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109E40.c](sdk/libkernl_syscalls/func_00109E40.c) |
| func_00109E70 | 0x00109E70 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109E70.c](sdk/libkernl_syscalls/func_00109E70.c) |
| func_00109E90 | 0x00109E90 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109E90.c](sdk/libkernl_syscalls/func_00109E90.c) |
| func_00109EC0 | 0x00109EC0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109EC0.c](sdk/libkernl_syscalls/func_00109EC0.c) |
| func_00109ED0 | 0x00109ED0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109ED0.c](sdk/libkernl_syscalls/func_00109ED0.c) |
| func_00109FE0 | 0x00109FE0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109FE0.c](sdk/libkernl_syscalls/func_00109FE0.c) |
| func_00109FF0 | 0x00109FF0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_00109FF0.c](sdk/libkernl_syscalls/func_00109FF0.c) |
| func_0010A040 | 0x0010A040 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A040.c](sdk/libkernl_syscalls/func_0010A040.c) |
| func_0010A050 | 0x0010A050 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A050.c](sdk/libkernl_syscalls/func_0010A050.c) |
| func_0010A250 | 0x0010A250 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A250.c](sdk/libkernl_syscalls/func_0010A250.c) |
| func_0010A2F0 | 0x0010A2F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A2F0.c](sdk/libkernl_syscalls/func_0010A2F0.c) |
| func_0010A360 | 0x0010A360 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A360.c](sdk/libkernl_syscalls/func_0010A360.c) |
| func_0010A370 | 0x0010A370 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A370.c](sdk/libkernl_syscalls/func_0010A370.c) |
| func_0010A380 | 0x0010A380 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A380.c](sdk/libkernl_syscalls/func_0010A380.c) |
| func_0010A390 | 0x0010A390 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A390.c](sdk/libkernl_syscalls/func_0010A390.c) |
| func_0010A3A0 | 0x0010A3A0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3A0.c](sdk/libkernl_syscalls/func_0010A3A0.c) |
| func_0010A3B0 | 0x0010A3B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3B0.c](sdk/libkernl_syscalls/func_0010A3B0.c) |
| func_0010A3C0 | 0x0010A3C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3C0.c](sdk/libkernl_syscalls/func_0010A3C0.c) |
| func_0010A3D0 | 0x0010A3D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3D0.c](sdk/libkernl_syscalls/func_0010A3D0.c) |
| func_0010A3E0 | 0x0010A3E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3E0.c](sdk/libkernl_syscalls/func_0010A3E0.c) |
| func_0010A3F0 | 0x0010A3F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A3F0.c](sdk/libkernl_syscalls/func_0010A3F0.c) |
| func_0010A400 | 0x0010A400 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A400.c](sdk/libkernl_syscalls/func_0010A400.c) |
| func_0010A410 | 0x0010A410 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A410.c](sdk/libkernl_syscalls/func_0010A410.c) |
| func_0010A420 | 0x0010A420 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A420.c](sdk/libkernl_syscalls/func_0010A420.c) |
| func_0010A430 | 0x0010A430 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A430.c](sdk/libkernl_syscalls/func_0010A430.c) |
| func_0010A440 | 0x0010A440 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A440.c](sdk/libkernl_syscalls/func_0010A440.c) |
| func_0010A450 | 0x0010A450 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A450.c](sdk/libkernl_syscalls/func_0010A450.c) |
| func_0010A460 | 0x0010A460 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A460.c](sdk/libkernl_syscalls/func_0010A460.c) |
| func_0010A470 | 0x0010A470 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A470.c](sdk/libkernl_syscalls/func_0010A470.c) |
| func_0010A480 | 0x0010A480 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A480.c](sdk/libkernl_syscalls/func_0010A480.c) |
| func_0010A490 | 0x0010A490 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A490.c](sdk/libkernl_syscalls/func_0010A490.c) |
| func_0010A5F0 | 0x0010A5F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A5F0.c](sdk/libkernl_syscalls/func_0010A5F0.c) |
| func_0010A6D0 | 0x0010A6D0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/func_0010A6D0.c](sdk/libkernl_syscalls/func_0010A6D0.c) |
| func_00113B88 | 0x00113B88 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113B88.c](sdk/libkernl_00113B88/func_00113B88.c) |
| func_00113BD0 | 0x00113BD0 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113BD0.c](sdk/libkernl_00113B88/func_00113BD0.c) |
| func_00113BE0 | 0x00113BE0 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113BE0.c](sdk/libkernl_00113B88/func_00113BE0.c) |
| func_00113CB8 | 0x00113CB8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113CB8.c](sdk/libkernl_00113B88/func_00113CB8.c) |
| func_00113CC8 | 0x00113CC8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113CC8.c](sdk/libkernl_00113B88/func_00113CC8.c) |
| func_00113CD8 | 0x00113CD8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113CD8.c](sdk/libkernl_00113B88/func_00113CD8.c) |
| func_00113D18 | 0x00113D18 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D18.c](sdk/libkernl_00113B88/func_00113D18.c) |
| func_00113D28 | 0x00113D28 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D28.c](sdk/libkernl_00113B88/func_00113D28.c) |
| func_00113D38 | 0x00113D38 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D38.c](sdk/libkernl_00113B88/func_00113D38.c) |
| func_00113D48 | 0x00113D48 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D48.c](sdk/libkernl_00113B88/func_00113D48.c) |
| func_00113D58 | 0x00113D58 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D58.c](sdk/libkernl_00113B88/func_00113D58.c) |
| func_00113D68 | 0x00113D68 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00113D68.c](sdk/libkernl_00113B88/func_00113D68.c) |
| func_001143F8 | 0x001143F8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_001143F8.c](sdk/libkernl_00113B88/func_001143F8.c) |
| func_00114480 | 0x00114480 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114480.c](sdk/libkernl_00113B88/func_00114480.c) |
| func_001145C8 | 0x001145C8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_001145C8.c](sdk/libkernl_00113B88/func_001145C8.c) |
| func_00114630 | 0x00114630 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114630.c](sdk/libkernl_00113B88/func_00114630.c) |
| func_00114640 | 0x00114640 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114640.c](sdk/libkernl_00113B88/func_00114640.c) |
| func_00114688 | 0x00114688 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114688.c](sdk/libkernl_00113B88/func_00114688.c) |
| func_001147B0 | 0x001147B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_001147B0.c](sdk/libkernl_00113B88/func_001147B0.c) |
| func_001147F0 | 0x001147F0 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_001147F0.c](sdk/libkernl_00113B88/func_001147F0.c) |
| func_00114A50 | 0x00114A50 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114A50.c](sdk/libkernl_00113B88/func_00114A50.c) |
| func_00114A60 | 0x00114A60 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114A60.c](sdk/libkernl_00113B88/func_00114A60.c) |
| func_00114AA8 | 0x00114AA8 | 0x10 | sdk | size | 8 | [sdk/libkernl_00113B88/func_00114AA8.c](sdk/libkernl_00113B88/func_00114AA8.c) |
| iCancelWakeupThread | 0x0010A1C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iCancelWakeupThread.c](sdk/libkernl_syscalls/iCancelWakeupThread.c) |
| iChangeThreadPriority | 0x0010A100 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iChangeThreadPriority.c](sdk/libkernl_syscalls/iChangeThreadPriority.c) |
| iCpuConfig | 0x0010A520 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iCpuConfig.c](sdk/libkernl_syscalls/iCpuConfig.c) |
| iFlushCache | 0x0010A510 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iFlushCache.c](sdk/libkernl_syscalls/iFlushCache.c) |
| iGetCop0 | 0x0010A500 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iGetCop0.c](sdk/libkernl_syscalls/iGetCop0.c) |
| iGsGetIMR | 0x0010A590 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iGsGetIMR.c](sdk/libkernl_syscalls/iGsGetIMR.c) |
| iGsPutIMR | 0x0010A5B0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iGsPutIMR.c](sdk/libkernl_syscalls/iGsPutIMR.c) |
| iPollSema | 0x0010A2C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iPollSema.c](sdk/libkernl_syscalls/iPollSema.c) |
| iReferSemaStatus | 0x0010A2E0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iReferSemaStatus.c](sdk/libkernl_syscalls/iReferSemaStatus.c) |
| iReferThreadStatus | 0x0010A170 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iReferThreadStatus.c](sdk/libkernl_syscalls/iReferThreadStatus.c) |
| iReleaseWaitThread | 0x0010A140 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iReleaseWaitThread.c](sdk/libkernl_syscalls/iReleaseWaitThread.c) |
| iResumeThread | 0x0010A200 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iResumeThread.c](sdk/libkernl_syscalls/iResumeThread.c) |
| iSignalSema | 0x0010A290 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iSignalSema.c](sdk/libkernl_syscalls/iSignalSema.c) |
| iTerminateThread | 0x0010A0C0 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/iTerminateThread.c](sdk/libkernl_syscalls/iTerminateThread.c) |
| isceSifDmaStat | 0x0010A610 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/isceSifDmaStat.c](sdk/libkernl_syscalls/isceSifDmaStat.c) |
| isceSifSetDChain | 0x0010A650 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/isceSifSetDChain.c](sdk/libkernl_syscalls/isceSifSetDChain.c) |
| isceSifSetDma | 0x0010A630 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/isceSifSetDma.c](sdk/libkernl_syscalls/isceSifSetDma.c) |
| sceSifDmaStat | 0x0010A600 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifDmaStat.c](sdk/libkernl_syscalls/sceSifDmaStat.c) |
| sceSifGetReg | 0x0010A670 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifGetReg.c](sdk/libkernl_syscalls/sceSifGetReg.c) |
| sceSifSetDChain | 0x0010A640 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifSetDChain.c](sdk/libkernl_syscalls/sceSifSetDChain.c) |
| sceSifSetDma | 0x0010A620 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifSetDma.c](sdk/libkernl_syscalls/sceSifSetDma.c) |
| sceSifSetReg | 0x0010A660 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifSetReg.c](sdk/libkernl_syscalls/sceSifSetReg.c) |
| sceSifStopDma | 0x0010A530 | 0x10 | sdk | size | 8 | [sdk/libkernl_syscalls/sceSifStopDma.c](sdk/libkernl_syscalls/sceSifStopDma.c) |
| func_002A07A0 | 0x002A07A0 | 0x24 | game | size | 8 | [sys/cnv_sys/func_002A07A0.c](sys/cnv_sys/func_002A07A0.c) |
| func_00172A98 | 0x00172A98 | 0x2C | cri | size | 8 | [cri/mpv/func_00172A98.c](cri/mpv/func_00172A98.c) |
| func_00172AC8 | 0x00172AC8 | 0x2C | cri | size | 8 | [cri/mpv/func_00172AC8.c](cri/mpv/func_00172AC8.c) |
| func_00172B48 | 0x00172B48 | 0x2C | cri | size | 8 | [cri/mpv/func_00172B48.c](cri/mpv/func_00172B48.c) |
| func_00100220 | 0x00100220 | 0x30 | sdk | size | 8 | [sdk/crt0/func_00100220.c](sdk/crt0/func_00100220.c) |
| func_0019A288 | 0x0019A288 | 0x34 | cri | size | 8 | [cri/sfd_00194D48/func_0019A288.c](cri/sfd_00194D48/func_0019A288.c) |
| func_00164A28 | 0x00164A28 | 0x38 | cri | size | 8 | [cri/srd/func_00164A28.c](cri/srd/func_00164A28.c) |
| func_00164A60 | 0x00164A60 | 0x38 | cri | size | 8 | [cri/srd/func_00164A60.c](cri/srd/func_00164A60.c) |
| func_00164A98 | 0x00164A98 | 0x38 | cri | size | 8 | [cri/srd/func_00164A98.c](cri/srd/func_00164A98.c) |
| func_00164AD0 | 0x00164AD0 | 0x38 | cri | size | 8 | [cri/srd/func_00164AD0.c](cri/srd/func_00164AD0.c) |
| func_001899D8 | 0x001899D8 | 0x48 | cri | size | 8 | [cri/sfd/func_001899D8.c](cri/sfd/func_001899D8.c) |
| func_0018FBC8 | 0x0018FBC8 | 0x50 | cri | size | 8 | [cri/sfd/func_0018FBC8.c](cri/sfd/func_0018FBC8.c) |
| func_0018A420 | 0x0018A420 | 0x58 | cri | size | 8 | [cri/sfd/func_0018A420.c](cri/sfd/func_0018A420.c) |
| func_0018B648 | 0x0018B648 | 0x58 | cri | size | 8 | [cri/sfd/func_0018B648.c](cri/sfd/func_0018B648.c) |
| func_00152F70 | 0x00152F70 | 0x5C | cri | size | 8 | [cri/adx_0014EF28/func_00152F70.c](cri/adx_0014EF28/func_00152F70.c) |
| func_0019AA58 | 0x0019AA58 | 0x5C | cri | size | 8 | [cri/sfd_00194D48/func_0019AA58.c](cri/sfd_00194D48/func_0019AA58.c) |
| func_0019E020 | 0x0019E020 | 0x64 | cri | size | 8 | [cri/sfd_00194D48/func_0019E020.c](cri/sfd_00194D48/func_0019E020.c) |
| SFX_MakeTblZ16 | 0x0019F250 | 0x68 | cri | size | 8 | [cri/sfx/SFX_MakeTblZ16.c](cri/sfx/SFX_MakeTblZ16.c) |
| SFX_MakeTblZ32 | 0x0019F2B8 | 0x68 | cri | size | 8 | [cri/sfx/SFX_MakeTblZ32.c](cri/sfx/SFX_MakeTblZ32.c) |
| func_0018D440 | 0x0018D440 | 0x68 | cri | size | 8 | [cri/sfd/func_0018D440.c](cri/sfd/func_0018D440.c) |
| func_0019B738 | 0x0019B738 | 0x74 | cri | size | 8 | [cri/sfd_00194D48/func_0019B738.c](cri/sfd_00194D48/func_0019B738.c) |
| func_0019E8D0 | 0x0019E8D0 | 0x78 | cri | size | 8 | [cri/sfd_00194D48/func_0019E8D0.c](cri/sfd_00194D48/func_0019E8D0.c) |
| func_001696E0 | 0x001696E0 | 0x80 | cri | size | 8 | [cri/htci/func_001696E0.c](cri/htci/func_001696E0.c) |
| func_00199380 | 0x00199380 | 0x84 | cri | size | 8 | [cri/sfd_00194D48/func_00199380.c](cri/sfd_00194D48/func_00199380.c) |
| func_00189B30 | 0x00189B30 | 0x8C | cri | size | 8 | [cri/sfd/func_00189B30.c](cri/sfd/func_00189B30.c) |
| func_00198568 | 0x00198568 | 0x8C | cri | size | 8 | [cri/sfd_00194D48/func_00198568.c](cri/sfd_00194D48/func_00198568.c) |
| func_00188440 | 0x00188440 | 0x90 | cri | size | 8 | [cri/sfd/func_00188440.c](cri/sfd/func_00188440.c) |
| func_0015AAD8 | 0x0015AAD8 | 0x94 | cri | size | 8 | [cri/adx_00159278/func_0015AAD8.c](cri/adx_00159278/func_0015AAD8.c) |
| func_0019A080 | 0x0019A080 | 0x9C | cri | size | 8 | [cri/sfd_00194D48/func_0019A080.c](cri/sfd_00194D48/func_0019A080.c) |
| func_00194630 | 0x00194630 | 0xA4 | cri | size | 8 | [cri/sfd/func_00194630.c](cri/sfd/func_00194630.c) |
| func_001161D0 | 0x001161D0 | 0xA8 | sdk | size | 8 | [sdk/libkernl_00113B88/func_001161D0.c](sdk/libkernl_00113B88/func_001161D0.c) |
| func_001813D8 | 0x001813D8 | 0xA8 | cri | size | 8 | [cri/mwsfd/func_001813D8.c](cri/mwsfd/func_001813D8.c) |
| func_00196B90 | 0x00196B90 | 0xA8 | cri | size | 8 | [cri/sfd_00194D48/func_00196B90.c](cri/sfd_00194D48/func_00196B90.c) |
| func_0017EEE8 | 0x0017EEE8 | 0xB0 | cri | size | 8 | [cri/mpv/func_0017EEE8.c](cri/mpv/func_0017EEE8.c) |
| func_001996F0 | 0x001996F0 | 0xB4 | cri | size | 8 | [cri/sfd_00194D48/func_001996F0.c](cri/sfd_00194D48/func_001996F0.c) |
| func_001982C8 | 0x001982C8 | 0xB8 | cri | size | 8 | [cri/sfd_00194D48/func_001982C8.c](cri/sfd_00194D48/func_001982C8.c) |
| MWSTM_ReqStart | 0x00187500 | 0xBC | cri | size | 8 | [cri/mwsfd/MWSTM_ReqStart.c](cri/mwsfd/MWSTM_ReqStart.c) |
| func_0017EC60 | 0x0017EC60 | 0xC0 | cri | size | 8 | [cri/mpv/func_0017EC60.c](cri/mpv/func_0017EC60.c) |
| func_0016A4C8 | 0x0016A4C8 | 0xC4 | cri | size | 8 | [cri/lsc/func_0016A4C8.c](cri/lsc/func_0016A4C8.c) |
| func_00196CC0 | 0x00196CC0 | 0xC4 | cri | size | 8 | [cri/sfd_00194D48/func_00196CC0.c](cri/sfd_00194D48/func_00196CC0.c) |
| func_001974D0 | 0x001974D0 | 0xC8 | cri | size | 8 | [cri/sfd_00194D48/func_001974D0.c](cri/sfd_00194D48/func_001974D0.c) |
| func_00194320 | 0x00194320 | 0xCC | cri | size | 8 | [cri/sfd/func_00194320.c](cri/sfd/func_00194320.c) |
| mwPlySetFloatSpeed | 0x001845F0 | 0xCC | cri | size | 8 | [cri/mwsfd/mwPlySetFloatSpeed.c](cri/mwsfd/mwPlySetFloatSpeed.c) |
| func_00165638 | 0x00165638 | 0xEC | cri | size | 8 | [cri/dtr/func_00165638.c](cri/dtr/func_00165638.c) |
| func_0019BCF8 | 0x0019BCF8 | 0xEC | cri | size | 8 | [cri/sfd_00194D48/func_0019BCF8.c](cri/sfd_00194D48/func_0019BCF8.c) |
| func_00126120 | 0x00126120 | 0xFC | libc | size | 8 | [sdk/libc/kfiv_mprec/func_00126120.c](sdk/libc/kfiv_mprec/func_00126120.c) |
| func_00168B48 | 0x00168B48 | 0x114 | cri | size | 8 | [cri/htci/func_00168B48.c](cri/htci/func_00168B48.c) |
| func_0018E288 | 0x0018E288 | 0x178 | cri | size | 8 | [cri/sfd/func_0018E288.c](cri/sfd/func_0018E288.c) |
| func_00104BE8 | 0x00104BE8 | 0x17C | sdk | size | 8 | [sdk/libmpeg_00104BE8/func_00104BE8.c](sdk/libmpeg_00104BE8/func_00104BE8.c) |
| dvCiOpen | 0x001665A8 | 0x184 | cri | size | 8 | [cri/dvci/dvCiOpen.c](cri/dvci/dvCiOpen.c) |
| func_00193980 | 0x00193980 | 0x198 | cri | size | 8 | [cri/sfd/func_00193980.c](cri/sfd/func_00193980.c) |
| func_00188E68 | 0x00188E68 | 0x19C | cri | size | 8 | [cri/sfd/func_00188E68.c](cri/sfd/func_00188E68.c) |
| func_00192540 | 0x00192540 | 0x1B8 | cri | size | 8 | [cri/sfd/func_00192540.c](cri/sfd/func_00192540.c) |
| adxstmf_stat_exec | 0x0015D208 | 0x1CC | cri | size | 8 | [cri/adx_00159278/adxstmf_stat_exec.c](cri/adx_00159278/adxstmf_stat_exec.c) |
| func_00102940 | 0x00102940 | 0x250 | sdk | size | 8 | [sdk/libmpeg/func_00102940.c](sdk/libmpeg/func_00102940.c) |
| func_0019C3A8 | 0x0019C3A8 | 0x468 | cri | size | 8 | [cri/sfd_00194D48/func_0019C3A8.c](cri/sfd_00194D48/func_0019C3A8.c) |
| func_002A0750 | 0x002A0750 | 0x50 | game | size | 9 | [sys/cnv_sys/func_002A0750.c](sys/cnv_sys/func_002A0750.c) |
| func_0027E120 | 0x0027E120 | 0x1A4 | game | size | 9 | [menu/mn_charasel/func_0027E120.c](menu/mn_charasel/func_0027E120.c) |
| func_00289DF0 | 0x00289DF0 | 0x88 | game | size | 10 | [sys/mc_opr/func_00289DF0.c](sys/mc_opr/func_00289DF0.c) |
| func_002B1C60 | 0x002B1C60 | 0x104 | game | size | 10 | [unk/unk_2AF860/func_002B1C60.c](unk/unk_2AF860/func_002B1C60.c) |
| func_001B24E0 | 0x001B24E0 | 0x120 | game | size | 10 | [battle/btl_main/func_001B24E0.c](battle/btl_main/func_001B24E0.c) |
| func_00233D50 | 0x00233D50 | 0xFC | game | size | 11 | [unk/unk_231E70/func_00233D50.c](unk/unk_231E70/func_00233D50.c) |
| func_002F1650 | 0x002F1650 | 0x118 | game | size | 11 | [menu/mn_InputPass/func_002F1650.c](menu/mn_InputPass/func_002F1650.c) |
| func_00154710 | 0x00154710 | 0x28 | cri | size | 12 | [cri/adx_0014EF28/func_00154710.c](cri/adx_0014EF28/func_00154710.c) |
| func_00154738 | 0x00154738 | 0x28 | cri | size | 12 | [cri/adx_0014EF28/func_00154738.c](cri/adx_0014EF28/func_00154738.c) |
| func_00154760 | 0x00154760 | 0x28 | cri | size | 12 | [cri/adx_0014EF28/func_00154760.c](cri/adx_0014EF28/func_00154760.c) |
| func_00154788 | 0x00154788 | 0x28 | cri | size | 12 | [cri/adx_0014EF28/func_00154788.c](cri/adx_0014EF28/func_00154788.c) |
| func_002A0CE0 | 0x002A0CE0 | 0x34 | game | size | 12 | [sys/cnv_sys/func_002A0CE0.c](sys/cnv_sys/func_002A0CE0.c) |
| func_0019A2E8 | 0x0019A2E8 | 0x48 | cri | size | 12 | [cri/sfd_00194D48/func_0019A2E8.c](cri/sfd_00194D48/func_0019A2E8.c) |
| func_0014E580 | 0x0014E580 | 0x4C | game | size | 12 | [sys/script/func_0014E580.c](sys/script/func_0014E580.c) |
| func_0017B278 | 0x0017B278 | 0x58 | cri | size | 12 | [cri/mpv/func_0017B278.c](cri/mpv/func_0017B278.c) |
| func_0018EEE0 | 0x0018EEE0 | 0x60 | cri | size | 12 | [cri/sfd/func_0018EEE0.c](cri/sfd/func_0018EEE0.c) |
| mwl_convPtypeFromSFD | 0x00181370 | 0x68 | cri | size | 12 | [cri/mwsfd/mwl_convPtypeFromSFD.c](cri/mwsfd/mwl_convPtypeFromSFD.c) |
| mwl_convPtypeToSFD | 0x00181730 | 0x68 | cri | size | 12 | [cri/mwsfd/mwl_convPtypeToSFD.c](cri/mwsfd/mwl_convPtypeToSFD.c) |
| func_0017EE78 | 0x0017EE78 | 0x6C | cri | size | 12 | [cri/mpv/func_0017EE78.c](cri/mpv/func_0017EE78.c) |
| func_0018EAA8 | 0x0018EAA8 | 0x6C | cri | size | 12 | [cri/sfd/func_0018EAA8.c](cri/sfd/func_0018EAA8.c) |
| func_0018EE10 | 0x0018EE10 | 0x6C | cri | size | 12 | [cri/sfd/func_0018EE10.c](cri/sfd/func_0018EE10.c) |
| func_001A0330 | 0x001A0330 | 0x84 | cri | size | 12 | [cri/sfx/func_001A0330.c](cri/sfx/func_001A0330.c) |
| func_001A05D8 | 0x001A05D8 | 0x84 | cri | size | 12 | [cri/sfx/func_001A05D8.c](cri/sfx/func_001A05D8.c) |
| func_00308980 | 0x00308980 | 0x88 | game | size | 12 | [menu/mn_ArenaCharasel_pvsc/func_00308980.c](menu/mn_ArenaCharasel_pvsc/func_00308980.c) |
| func_0030B020 | 0x0030B020 | 0x88 | game | size | 12 | [menu/mn_ArenaCharasel_cvsc/func_0030B020.c](menu/mn_ArenaCharasel_cvsc/func_0030B020.c) |
| func_00196D88 | 0x00196D88 | 0xA0 | cri | size | 12 | [cri/sfd_00194D48/func_00196D88.c](cri/sfd_00194D48/func_00196D88.c) |
| func_001A18C8 | 0x001A18C8 | 0xA4 | cri | size | 12 | [cri/sfx/func_001A18C8.c](cri/sfx/func_001A18C8.c) |
| func_002DBF20 | 0x002DBF20 | 0xC0 | game | size | 12 | [unk/unk_2DB970/func_002DBF20.c](unk/unk_2DB970/func_002DBF20.c) |
| func_00166CD8 | 0x00166CD8 | 0xC4 | cri | size | 12 | [cri/dvci/func_00166CD8.c](cri/dvci/func_00166CD8.c) |
| func_001689B8 | 0x001689B8 | 0xC4 | cri | size | 12 | [cri/htci/func_001689B8.c](cri/htci/func_001689B8.c) |
| func_00161FA8 | 0x00161FA8 | 0xD4 | cri | size | 12 | [cri/adx_00161B98/func_00161FA8.c](cri/adx_00161B98/func_00161FA8.c) |
| func_0016A590 | 0x0016A590 | 0x104 | cri | size | 12 | [cri/lsc/func_0016A590.c](cri/lsc/func_0016A590.c) |
| func_00189208 | 0x00189208 | 0x154 | cri | size | 12 | [cri/sfd/func_00189208.c](cri/sfd/func_00189208.c) |
| func_00181FD0 | 0x00181FD0 | 0x174 | cri | size | 12 | [cri/mwsfd/func_00181FD0.c](cri/mwsfd/func_00181FD0.c) |
| func_00166F70 | 0x00166F70 | 0x194 | cri | size | 12 | [cri/dvci/func_00166F70.c](cri/dvci/func_00166F70.c) |
| func_00168D68 | 0x00168D68 | 0x19C | cri | size | 12 | [cri/htci/func_00168D68.c](cri/htci/func_00168D68.c) |
| dvCiLoadDirInfo | 0x00167778 | 0x1AC | cri | size | 12 | [cri/dvci/dvCiLoadDirInfo.c](cri/dvci/dvCiLoadDirInfo.c) |
| func_0018E400 | 0x0018E400 | 0x1D8 | cri | size | 12 | [cri/sfd/func_0018E400.c](cri/sfd/func_0018E400.c) |
| func_00105C98 | 0x00105C98 | 0x314 | sdk | size | 12 | [sdk/libmpeg_00104BE8/func_00105C98.c](sdk/libmpeg_00104BE8/func_00105C98.c) |
| ADXF_GetPtStat | 0x00154B80 | 0x3E0 | cri | size | 12 | [cri/adx_0014EF28/ADXF_GetPtStat.c](cri/adx_0014EF28/ADXF_GetPtStat.c) |
| func_001CAC10 | 0x001CAC10 | 0x5C | game | size | 13 | [battle/character/func_001CAC10.c](battle/character/func_001CAC10.c) |
| func_003070A0 | 0x003070A0 | 0xD0 | game | size | 13 | [story/evt_shenron/func_003070A0.c](story/evt_shenron/func_003070A0.c) |
| func_001E7180 | 0x001E7180 | 0xB8 | game | size | 14 | [unk/unk_1D5B30/func_001E7180.c](unk/unk_1D5B30/func_001E7180.c) |
| func_00308070 | 0x00308070 | 0xBC | game | size | 14 | [menu/mn_ArenaCharasel_pvsc/func_00308070.c](menu/mn_ArenaCharasel_pvsc/func_00308070.c) |
| func_0027F9F0 | 0x0027F9F0 | 0xE4 | game | size | 14 | [menu/mn_charasel/func_0027F9F0.c](menu/mn_charasel/func_0027F9F0.c) |
| func_00309050 | 0x00309050 | 0x98 | game | size | 15 | [menu/mn_ArenaCharasel_pvsp/func_00309050.c](menu/mn_ArenaCharasel_pvsp/func_00309050.c) |
| func_00248360 | 0x00248360 | 0xA8 | game | size | 15 | [unk/unk_23A890/func_00248360.c](unk/unk_23A890/func_00248360.c) |
| func_0020F4D0 | 0x0020F4D0 | 0xC8 | game | size | 15 | [unk/unk_20A4D0/func_0020F4D0.c](unk/unk_20A4D0/func_0020F4D0.c) |
| func_0026E3B0 | 0x0026E3B0 | 0xF0 | game | size | 15 | [menu/ess_main_2/func_0026E3B0.c](menu/ess_main_2/func_0026E3B0.c) |
| func_00218A60 | 0x00218A60 | 0xFC | game | size | 15 | [unk/unk_20A4D0/func_00218A60.c](unk/unk_20A4D0/func_00218A60.c) |
| func_00146C20 | 0x00146C20 | 0x204 | game | size | 15 | [sys/unk_1461D0/func_00146C20.c](sys/unk_1461D0/func_00146C20.c) |
| func_00168988 | 0x00168988 | 0x30 | cri | size | 16 | [cri/htci/func_00168988.c](cri/htci/func_00168988.c) |
| func_002A0B20 | 0x002A0B20 | 0x44 | game | size | 16 | [sys/cnv_sys/func_002A0B20.c](sys/cnv_sys/func_002A0B20.c) |
| func_002A0B70 | 0x002A0B70 | 0x44 | game | size | 16 | [sys/cnv_sys/func_002A0B70.c](sys/cnv_sys/func_002A0B70.c) |
| func_002A0BC0 | 0x002A0BC0 | 0x44 | game | size | 16 | [sys/cnv_sys/func_002A0BC0.c](sys/cnv_sys/func_002A0BC0.c) |
| func_002A0C10 | 0x002A0C10 | 0x44 | game | size | 16 | [sys/cnv_sys/func_002A0C10.c](sys/cnv_sys/func_002A0C10.c) |
| func_002A0C60 | 0x002A0C60 | 0x44 | game | size | 16 | [sys/cnv_sys/func_002A0C60.c](sys/cnv_sys/func_002A0C60.c) |
| func_00150558 | 0x00150558 | 0x6C | cri | size | 16 | [cri/adx_0014EF28/func_00150558.c](cri/adx_0014EF28/func_00150558.c) |
| func_0015A2D8 | 0x0015A2D8 | 0x6C | cri | size | 16 | [cri/adx_00159278/func_0015A2D8.c](cri/adx_00159278/func_0015A2D8.c) |
| func_0019A4D8 | 0x0019A4D8 | 0x78 | cri | size | 16 | [cri/sfd_00194D48/func_0019A4D8.c](cri/sfd_00194D48/func_0019A4D8.c) |
| func_00101230 | 0x00101230 | 0x88 | sdk | size | 16 | [sdk/libgraph_00100CF8/func_00101230.c](sdk/libgraph_00100CF8/func_00101230.c) |
| func_00101498 | 0x00101498 | 0x88 | sdk | size | 16 | [sdk/libgraph_00100CF8/func_00101498.c](sdk/libgraph_00100CF8/func_00101498.c) |
| func_00191260 | 0x00191260 | 0x9C | cri | size | 16 | [cri/sfd/func_00191260.c](cri/sfd/func_00191260.c) |
| func_00118158 | 0x00118158 | 0xA0 | sdk | size | 16 | [sdk/libcdvd/func_00118158.c](sdk/libcdvd/func_00118158.c) |
| func_00308450 | 0x00308450 | 0xA4 | game | size | 16 | [menu/mn_ArenaCharasel_pvsc/func_00308450.c](menu/mn_ArenaCharasel_pvsc/func_00308450.c) |
| func_0019E528 | 0x0019E528 | 0xA8 | cri | size | 16 | [cri/sfd_00194D48/func_0019E528.c](cri/sfd_00194D48/func_0019E528.c) |
| func_0018DA30 | 0x0018DA30 | 0xB0 | cri | size | 16 | [cri/sfd/func_0018DA30.c](cri/sfd/func_0018DA30.c) |
| func_00173748 | 0x00173748 | 0xC8 | cri | size | 16 | [cri/mpv/func_00173748.c](cri/mpv/func_00173748.c) |
| func_002CDA90 | 0x002CDA90 | 0xD8 | game | size | 16 | [unk/unk_2CD5F0/func_002CDA90.c](unk/unk_2CD5F0/func_002CDA90.c) |
| func_002CDDB0 | 0x002CDDB0 | 0xD8 | game | size | 16 | [unk/unk_2CD5F0/func_002CDDB0.c](unk/unk_2CD5F0/func_002CDDB0.c) |
| func_00191C40 | 0x00191C40 | 0xF4 | cri | size | 16 | [cri/sfd/func_00191C40.c](cri/sfd/func_00191C40.c) |
| scePadInit2 | 0x001166D8 | 0xF4 | sdk | size | 16 | [sdk/libpad/kfiv_libpad/scePadInit2.c](sdk/libpad/kfiv_libpad/scePadInit2.c) |
| func_00199BA0 | 0x00199BA0 | 0x108 | cri | size | 16 | [cri/sfd_00194D48/func_00199BA0.c](cri/sfd_00194D48/func_00199BA0.c) |
| func_0011ABF0 | 0x0011ABF0 | 0x140 | sdk | size | 16 | [sdk/libmc/func_0011ABF0.c](sdk/libmc/func_0011ABF0.c) |
| func_001506A8 | 0x001506A8 | 0x140 | cri | size | 16 | [cri/adx_0014EF28/func_001506A8.c](cri/adx_0014EF28/func_001506A8.c) |
| func_00195F98 | 0x00195F98 | 0x148 | cri | size | 16 | [cri/sfd_00194D48/func_00195F98.c](cri/sfd_00194D48/func_00195F98.c) |
| func_00180078 | 0x00180078 | 0x15C | cri | size | 16 | [cri/mwsfd/func_00180078.c](cri/mwsfd/func_00180078.c) |
| func_0010BE70 | 0x0010BE70 | 0x1D8 | sdk | size | 16 | [sdk/libkernl_0010BE70/func_0010BE70.c](sdk/libkernl_0010BE70/func_0010BE70.c) |
| func_00195878 | 0x00195878 | 0x214 | cri | size | 16 | [cri/sfd_00194D48/func_00195878.c](cri/sfd_00194D48/func_00195878.c) |
| func_00191748 | 0x00191748 | 0x284 | cri | size | 16 | [cri/sfd/func_00191748.c](cri/sfd/func_00191748.c) |
| func_002CE630 | 0x002CE630 | 0x58 | game | size | 17 | [unk/unk_2CD5F0/func_002CE630.c](unk/unk_2CD5F0/func_002CE630.c) |
| func_002CBEB0 | 0x002CBEB0 | 0x94 | game | size | 17 | [unk/unk_2CAED0/func_002CBEB0.c](unk/unk_2CAED0/func_002CBEB0.c) |
| func_001B8500 | 0x001B8500 | 0xF4 | game | size | 17 | [battle/btl_main/func_001B8500.c](battle/btl_main/func_001B8500.c) |
| func_002DFEC0 | 0x002DFEC0 | 0x188 | game | size | 17 | [menu/mn_option/func_002DFEC0.c](menu/mn_option/func_002DFEC0.c) |
| func_001B3190 | 0x001B3190 | 0x190 | game | size | 17 | [battle/btl_main/func_001B3190.c](battle/btl_main/func_001B3190.c) |
| func_0012E830 | 0x0012E830 | 0x5C | game | size | 18 | [sys/unk_12DE80/func_0012E830.c](sys/unk_12DE80/func_0012E830.c) |
| func_002400E0 | 0x002400E0 | 0xB8 | game | size | 18 | [unk/unk_23A890/func_002400E0.c](unk/unk_23A890/func_002400E0.c) |
| func_002EAEB0 | 0x002EAEB0 | 0xB8 | game | size | 18 | [unk/unk_2EA0B0/func_002EAEB0.c](unk/unk_2EA0B0/func_002EAEB0.c) |
| func_0028C4C0 | 0x0028C4C0 | 0xC0 | game | size | 18 | [sys/mc_opr/func_0028C4C0.c](sys/mc_opr/func_0028C4C0.c) |
| func_001C8780 | 0x001C8780 | 0xDC | game | size | 18 | [battle/btl_main/func_001C8780.c](battle/btl_main/func_001C8780.c) |
| func_0030A950 | 0x0030A950 | 0xE8 | game | size | 18 | [menu/mn_ArenaCharasel_cvsc/func_0030A950.c](menu/mn_ArenaCharasel_cvsc/func_0030A950.c) |
| func_00247410 | 0x00247410 | 0xF0 | game | size | 18 | [unk/unk_23A890/func_00247410.c](unk/unk_23A890/func_00247410.c) |
| func_001E1D60 | 0x001E1D60 | 0x114 | game | size | 18 | [unk/unk_1D5B30/func_001E1D60.c](unk/unk_1D5B30/func_001E1D60.c) |
| func_002A7820 | 0x002A7820 | 0x118 | game | size | 18 | [story/evt_scrp/func_002A7820.c](story/evt_scrp/func_002A7820.c) |
| func_0025BE50 | 0x0025BE50 | 0x8C | game | size | 19 | [sys/amCdFs/func_0025BE50.c](sys/amCdFs/func_0025BE50.c) |
| func_00280730 | 0x00280730 | 0xA0 | game | size | 19 | [unk/unk_280730/func_00280730.c](unk/unk_280730/func_00280730.c) |
| func_00218E50 | 0x00218E50 | 0xA4 | game | size | 19 | [unk/unk_20A4D0/func_00218E50.c](unk/unk_20A4D0/func_00218E50.c) |
| func_0030C8F0 | 0x0030C8F0 | 0xD0 | game | size | 19 | [unk/unk_30B130/func_0030C8F0.c](unk/unk_30B130/func_0030C8F0.c) |
| func_002270B0 | 0x002270B0 | 0x118 | game | size | 19 | [battle/a2d/func_002270B0.c](battle/a2d/func_002270B0.c) |
| func_0010AD30 | 0x0010AD30 | 0x10 | sdk | size | 20 | [sdk/libkernl_0010AD30/func_0010AD30.c](sdk/libkernl_0010AD30/func_0010AD30.c) |
| func_00116690 | 0x00116690 | 0x48 | sdk | size | 20 | [sdk/libpad/kfiv_libpad/func_00116690.c](sdk/libpad/kfiv_libpad/func_00116690.c) |
| func_0019DAD8 | 0x0019DAD8 | 0x6C | cri | size | 20 | [cri/sfd_00194D48/func_0019DAD8.c](cri/sfd_00194D48/func_0019DAD8.c) |
| func_0019E160 | 0x0019E160 | 0x70 | cri | size | 20 | [cri/sfd_00194D48/func_0019E160.c](cri/sfd_00194D48/func_0019E160.c) |
| func_0019E1D0 | 0x0019E1D0 | 0x70 | cri | size | 20 | [cri/sfd_00194D48/func_0019E1D0.c](cri/sfd_00194D48/func_0019E1D0.c) |
| ADXF_GetFsizeSct | 0x00155C58 | 0x78 | cri | size | 20 | [cri/adx_001554B8/ADXF_GetFsizeSct.c](cri/adx_001554B8/ADXF_GetFsizeSct.c) |
| func_0019B498 | 0x0019B498 | 0x84 | cri | size | 20 | [cri/sfd_00194D48/func_0019B498.c](cri/sfd_00194D48/func_0019B498.c) |
| func_0027FE10 | 0x0027FE10 | 0x94 | game | size | 20 | [menu/mn_charasel/func_0027FE10.c](menu/mn_charasel/func_0027FE10.c) |
| func_0018FC18 | 0x0018FC18 | 0xA4 | cri | size | 20 | [cri/sfd/func_0018FC18.c](cri/sfd/func_0018FC18.c) |
| func_00190290 | 0x00190290 | 0xA8 | cri | size | 20 | [cri/sfd/func_00190290.c](cri/sfd/func_00190290.c) |
| func_001E8A30 | 0x001E8A30 | 0xB4 | game | size | 20 | [unk/unk_1D5B30/func_001E8A30.c](unk/unk_1D5B30/func_001E8A30.c) |
| func_00119F40 | 0x00119F40 | 0xBC | sdk | size | 20 | [sdk/libmc/func_00119F40.c](sdk/libmc/func_00119F40.c) |
| func_0023FBB0 | 0x0023FBB0 | 0xC4 | game | size | 20 | [unk/unk_23A890/func_0023FBB0.c](unk/unk_23A890/func_0023FBB0.c) |
| func_00286DA0 | 0x00286DA0 | 0xCC | game | size | 20 | [menu/mn_StageSel/func_00286DA0.c](menu/mn_StageSel/func_00286DA0.c) |
| func_001D6B90 | 0x001D6B90 | 0xD4 | game | size | 20 | [unk/unk_1D5B30/func_001D6B90.c](unk/unk_1D5B30/func_001D6B90.c) |
| func_002356E0 | 0x002356E0 | 0xDC | game | size | 20 | [unk/unk_231E70/func_002356E0.c](unk/unk_231E70/func_002356E0.c) |
| func_002ECBD0 | 0x002ECBD0 | 0x108 | game | size | 20 | [unk/unk_2ECB90/func_002ECBD0.c](unk/unk_2ECB90/func_002ECBD0.c) |
| func_001DCB70 | 0x001DCB70 | 0x110 | game | size | 20 | [unk/unk_1D5B30/func_001DCB70.c](unk/unk_1D5B30/func_001DCB70.c) |
| func_001E11E0 | 0x001E11E0 | 0x118 | game | size | 20 | [unk/unk_1D5B30/func_001E11E0.c](unk/unk_1D5B30/func_001E11E0.c) |
| func_002CD1B0 | 0x002CD1B0 | 0x118 | game | size | 20 | [unk/unk_2CC840/func_002CD1B0.c](unk/unk_2CC840/func_002CD1B0.c) |
| func_0025DF20 | 0x0025DF20 | 0x130 | game | size | 20 | [unk/unk_25D740/func_0025DF20.c](unk/unk_25D740/func_0025DF20.c) |
| func_0030F420 | 0x0030F420 | 0x140 | game | size | 20 | [story/str_dataerase/func_0030F420.c](story/str_dataerase/func_0030F420.c) |
| func_00167928 | 0x00167928 | 0x168 | cri | size | 20 | [cri/dvci/func_00167928.c](cri/dvci/func_00167928.c) |
| func_002BF3B0 | 0x002BF3B0 | 0x168 | game | size | 20 | [story/str_status/func_002BF3B0.c](story/str_status/func_002BF3B0.c) |
| func_00129458 | 0x00129458 | 0x22C | libc | size | 20 | [sdk/libc_00129428/func_00129458.c](sdk/libc_00129428/func_00129458.c) |
| func_00107500 | 0x00107500 | 0x2B4 | sdk | size | 20 | [sdk/libmpeg_00104BE8/func_00107500.c](sdk/libmpeg_00104BE8/func_00107500.c) |
| func_002A2350 | 0x002A2350 | 0x7C | game | size | 21 | [story/evt_scrp/func_002A2350.c](story/evt_scrp/func_002A2350.c) |
| func_00265A00 | 0x00265A00 | 0x134 | game | size | 21 | [menu/mn_dataload/func_00265A00.c](menu/mn_dataload/func_00265A00.c) |
| func_0026E640 | 0x0026E640 | 0x138 | game | size | 21 | [menu/ess_main_2/func_0026E640.c](menu/ess_main_2/func_0026E640.c) |
| func_002F1500 | 0x002F1500 | 0x150 | game | size | 21 | [menu/mn_InputPass/func_002F1500.c](menu/mn_InputPass/func_002F1500.c) |
| func_001B9B00 | 0x001B9B00 | 0x19C | game | size | 21 | [battle/btl_main/func_001B9B00.c](battle/btl_main/func_001B9B00.c) |
| func_002DFBC0 | 0x002DFBC0 | 0x230 | game | size | 21 | [menu/mn_option/func_002DFBC0.c](menu/mn_option/func_002DFBC0.c) |
| func_0026D570 | 0x0026D570 | 0xA0 | game | size | 22 | [menu/ess_main/func_0026D570.c](menu/ess_main/func_0026D570.c) |
| func_001D53D0 | 0x001D53D0 | 0xCC | game | size | 22 | [battle/char_secp/func_001D53D0.c](battle/char_secp/func_001D53D0.c) |
| func_002B4CC0 | 0x002B4CC0 | 0xCC | game | size | 22 | [unk/unk_2B2C20/func_002B4CC0.c](unk/unk_2B2C20/func_002B4CC0.c) |
| func_002C60B0 | 0x002C60B0 | 0xE4 | game | size | 22 | [unk/unk_2C41C0/func_002C60B0.c](unk/unk_2C41C0/func_002C60B0.c) |
| func_002A11F0 | 0x002A11F0 | 0xE8 | game | size | 22 | [sys/cnv_sys/func_002A11F0.c](sys/cnv_sys/func_002A11F0.c) |
| func_0026FF30 | 0x0026FF30 | 0xF0 | game | size | 22 | [unk/unk_26FF30/func_0026FF30.c](unk/unk_26FF30/func_0026FF30.c) |
| func_002EAAF0 | 0x002EAAF0 | 0x138 | game | size | 22 | [unk/unk_2EA0B0/func_002EAAF0.c](unk/unk_2EA0B0/func_002EAAF0.c) |
| func_002EA940 | 0x002EA940 | 0x140 | game | size | 22 | [unk/unk_2EA0B0/func_002EA940.c](unk/unk_2EA0B0/func_002EA940.c) |
| func_0030E290 | 0x0030E290 | 0x94 | game | size | 23 | [story/str_staffroll/func_0030E290.c](story/str_staffroll/func_0030E290.c) |
| amDbg_Printf | 0x0012EC10 | 0xA0 | game | size | 23 | [sys/unk_12EC10/amDbg_Printf.c](sys/unk_12EC10/amDbg_Printf.c) |
| func_00219270 | 0x00219270 | 0xCC | game | size | 23 | [unk/unk_20A4D0/func_00219270.c](unk/unk_20A4D0/func_00219270.c) |
| func_00307E40 | 0x00307E40 | 0xCC | game | size | 23 | [menu/mn_ArenaCharasel_pvsc/func_00307E40.c](menu/mn_ArenaCharasel_pvsc/func_00307E40.c) |
| func_003062B0 | 0x003062B0 | 0xF4 | game | size | 23 | [story/evt_shenron/func_003062B0.c](story/evt_shenron/func_003062B0.c) |
| func_002F4330 | 0x002F4330 | 0x11C | game | size | 23 | [menu/mn_ipsyswnd/func_002F4330.c](menu/mn_ipsyswnd/func_002F4330.c) |
| func_00219650 | 0x00219650 | 0x134 | game | size | 23 | [unk/unk_20A4D0/func_00219650.c](unk/unk_20A4D0/func_00219650.c) |
| func_0024A760 | 0x0024A760 | 0x140 | game | size | 23 | [battle/skill_cmd/func_0024A760.c](battle/skill_cmd/func_0024A760.c) |
| func_0027A370 | 0x0027A370 | 0x148 | game | size | 23 | [menu/ess_trade/func_0027A370.c](menu/ess_trade/func_0027A370.c) |
| func_00190138 | 0x00190138 | 0x44 | cri | size | 24 | [cri/sfd/func_00190138.c](cri/sfd/func_00190138.c) |
| func_0019A330 | 0x0019A330 | 0x94 | cri | size | 24 | [cri/sfd_00194D48/func_0019A330.c](cri/sfd_00194D48/func_0019A330.c) |
| func_0028C250 | 0x0028C250 | 0xC0 | game | size | 24 | [sys/mc_opr/func_0028C250.c](sys/mc_opr/func_0028C250.c) |
| main | 0x0014E4B0 | 0xCC | game | size | 24 | [sys/script/main.c](sys/script/main.c) |
| func_00191F48 | 0x00191F48 | 0xF8 | cri | size | 24 | [cri/sfd/func_00191F48.c](cri/sfd/func_00191F48.c) |
| func_0019CCD0 | 0x0019CCD0 | 0x124 | cri | size | 24 | [cri/sfd_00194D48/func_0019CCD0.c](cri/sfd_00194D48/func_0019CCD0.c) |
| func_002EA7B0 | 0x002EA7B0 | 0x140 | game | size | 24 | [unk/unk_2EA0B0/func_002EA7B0.c](unk/unk_2EA0B0/func_002EA7B0.c) |
| func_003063B0 | 0x003063B0 | 0x148 | game | size | 24 | [story/evt_shenron/func_003063B0.c](story/evt_shenron/func_003063B0.c) |
| func_0027FCA0 | 0x0027FCA0 | 0x164 | game | size | 24 | [menu/mn_charasel/func_0027FCA0.c](menu/mn_charasel/func_0027FCA0.c) |
| func_00173810 | 0x00173810 | 0x1A0 | cri | size | 24 | [cri/mpv/func_00173810.c](cri/mpv/func_00173810.c) |
| func_002A51E0 | 0x002A51E0 | 0xC4 | game | size | 25 | [story/evt_scrp/func_002A51E0.c](story/evt_scrp/func_002A51E0.c) |
| func_0025BD40 | 0x0025BD40 | 0xE0 | game | size | 25 | [unk/unk_25A130/func_0025BD40.c](unk/unk_25A130/func_0025BD40.c) |
| func_00248550 | 0x00248550 | 0xE8 | game | size | 25 | [unk/unk_248550/func_00248550.c](unk/unk_248550/func_00248550.c) |
| func_001C80E0 | 0x001C80E0 | 0xEC | game | size | 25 | [battle/btl_main/func_001C80E0.c](battle/btl_main/func_001C80E0.c) |
| func_001D3D10 | 0x001D3D10 | 0x100 | game | size | 25 | [battle/char_mant/func_001D3D10.c](battle/char_mant/func_001D3D10.c) |
| func_0027F8B0 | 0x0027F8B0 | 0x13C | game | size | 25 | [menu/mn_charasel/func_0027F8B0.c](menu/mn_charasel/func_0027F8B0.c) |
| func_0026ED60 | 0x0026ED60 | 0x19C | game | size | 25 | [menu/ess_main_2/func_0026ED60.c](menu/ess_main_2/func_0026ED60.c) |
| func_00244190 | 0x00244190 | 0xE8 | game | size | 26 | [unk/unk_23A890/func_00244190.c](unk/unk_23A890/func_00244190.c) |
| func_001D6640 | 0x001D6640 | 0x124 | game | size | 26 | [unk/unk_1D5B30/func_001D6640.c](unk/unk_1D5B30/func_001D6640.c) |
| func_001AE5C0 | 0x001AE5C0 | 0x158 | game | size | 26 | [battle/btl_main/func_001AE5C0.c](battle/btl_main/func_001AE5C0.c) |
| func_0020BDB0 | 0x0020BDB0 | 0x180 | game | size | 26 | [unk/unk_20A4D0/func_0020BDB0.c](unk/unk_20A4D0/func_0020BDB0.c) |
| func_0030AE90 | 0x0030AE90 | 0x188 | game | size | 26 | [menu/mn_ArenaCharasel_cvsc/func_0030AE90.c](menu/mn_ArenaCharasel_cvsc/func_0030AE90.c) |
| func_00298B70 | 0x00298B70 | 0xC4 | game | size | 27 | [unk/unk_297C60/func_00298B70.c](unk/unk_297C60/func_00298B70.c) |
| func_00305590 | 0x00305590 | 0xEC | game | size | 27 | [menu/mn_TourMap/func_00305590.c](menu/mn_TourMap/func_00305590.c) |
| func_001AC670 | 0x001AC670 | 0x144 | game | size | 27 | [battle/btl_main/func_001AC670.c](battle/btl_main/func_001AC670.c) |
| func_002BED90 | 0x002BED90 | 0x144 | game | size | 27 | [story/str_status/func_002BED90.c](story/str_status/func_002BED90.c) |
| func_001E7240 | 0x001E7240 | 0x180 | game | size | 27 | [unk/unk_1D5B30/func_001E7240.c](unk/unk_1D5B30/func_001E7240.c) |
| func_00107ED0 | 0x00107ED0 | 0x44 | sdk | size | 28 | [sdk/libmpeg/kfiv_mpeg/func_00107ED0.c](sdk/libmpeg/kfiv_mpeg/func_00107ED0.c) |
| func_0011A9A0 | 0x0011A9A0 | 0x70 | sdk | size | 28 | [sdk/libmc/func_0011A9A0.c](sdk/libmc/func_0011A9A0.c) |
| func_00121210 | 0x00121210 | 0x78 | libc | size | 28 | [sdk/libgcc_0011F758/func_00121210.c](sdk/libgcc_0011F758/func_00121210.c) |
| func_00198718 | 0x00198718 | 0xA8 | cri | size | 28 | [cri/sfd_00194D48/func_00198718.c](cri/sfd_00194D48/func_00198718.c) |
| func_002E0B70 | 0x002E0B70 | 0xB4 | game | size | 28 | [menu/mn_option/func_002E0B70.c](menu/mn_option/func_002E0B70.c) |
| func_00298CC0 | 0x00298CC0 | 0xDC | game | size | 28 | [unk/unk_297C60/func_00298CC0.c](unk/unk_297C60/func_00298CC0.c) |
| func_0028C3E0 | 0x0028C3E0 | 0xE0 | game | size | 28 | [sys/mc_opr/func_0028C3E0.c](sys/mc_opr/func_0028C3E0.c) |
| func_001994D8 | 0x001994D8 | 0xF0 | cri | size | 28 | [cri/sfd_00194D48/func_001994D8.c](cri/sfd_00194D48/func_001994D8.c) |
| func_002CC120 | 0x002CC120 | 0x114 | game | size | 28 | [unk/unk_2CAED0/func_002CC120.c](unk/unk_2CAED0/func_002CC120.c) |
| func_001037A8 | 0x001037A8 | 0x428 | sdk | size | 28 | [sdk/libmpeg/func_001037A8.c](sdk/libmpeg/func_001037A8.c) |
| func_001B91B0 | 0x00468CA0 | 0x0 | game | size | 29 | [battle/btl_main/func_001B91B0.c](battle/btl_main/func_001B91B0.c) |
| func_002CF750 | 0x002CF750 | 0xC8 | game | size | 29 | [unk/unk_2CD5F0/func_002CF750.c](unk/unk_2CD5F0/func_002CF750.c) |
| func_002B16B0 | 0x002B16B0 | 0xD0 | game | size | 29 | [unk/unk_2AF860/func_002B16B0.c](unk/unk_2AF860/func_002B16B0.c) |
| func_002357C0 | 0x002357C0 | 0xDC | game | size | 29 | [unk/unk_231E70/func_002357C0.c](unk/unk_231E70/func_002357C0.c) |
| func_0020F5A0 | 0x0020F5A0 | 0xEC | game | size | 29 | [unk/unk_20A4D0/func_0020F5A0.c](unk/unk_20A4D0/func_0020F5A0.c) |
| func_00288AF0 | 0x00288AF0 | 0x100 | game | size | 29 | [sys/mc_opr/func_00288AF0.c](sys/mc_opr/func_00288AF0.c) |
| func_0028B270 | 0x0028B270 | 0x110 | game | size | 29 | [sys/mc_opr/func_0028B270.c](sys/mc_opr/func_0028B270.c) |
| func_002B0A40 | 0x002B0A40 | 0x1A8 | game | size | 29 | [unk/unk_2AF860/func_002B0A40.c](unk/unk_2AF860/func_002B0A40.c) |
| func_001ADB80 | 0x001ADB80 | 0x20C | game | size | 29 | [battle/btl_main/func_001ADB80.c](battle/btl_main/func_001ADB80.c) |
| func_0013B620 | 0x0013B620 | 0x84 | game | size | 30 | [sys/amMotion/func_0013B620.c](sys/amMotion/func_0013B620.c) |
| func_002ABE50 | 0x002ABE50 | 0xC8 | game | size | 30 | [battle/scr_func/func_002ABE50.c](battle/scr_func/func_002ABE50.c) |
| func_001AC990 | 0x001AC990 | 0xEC | game | size | 30 | [battle/btl_main/func_001AC990.c](battle/btl_main/func_001AC990.c) |
| func_001E3AA0 | 0x001E3AA0 | 0x10C | game | size | 30 | [unk/unk_1D5B30/func_001E3AA0.c](unk/unk_1D5B30/func_001E3AA0.c) |
| func_00269820 | 0x00269820 | 0x158 | game | size | 30 | [menu/mn_vsmode/func_00269820.c](menu/mn_vsmode/func_00269820.c) |
| func_00307F10 | 0x00307F10 | 0x160 | game | size | 30 | [menu/mn_ArenaCharasel_pvsc/func_00307F10.c](menu/mn_ArenaCharasel_pvsc/func_00307F10.c) |
| func_001E8830 | 0x001E8830 | 0x178 | game | size | 30 | [unk/unk_1D5B30/func_001E8830.c](unk/unk_1D5B30/func_001E8830.c) |
| func_001F1190 | 0x001F1190 | 0x1EC | game | size | 30 | [battle/btb_draw/func_001F1190.c](battle/btb_draw/func_001F1190.c) |
| func_002AC710 | 0x002AC710 | 0x80 | game | size | 31 | [battle/scr_func/func_002AC710.c](battle/scr_func/func_002AC710.c) |
| func_002E8720 | 0x002E8720 | 0x98 | game | size | 31 | [unk/unk_2E8540/func_002E8720.c](unk/unk_2E8540/func_002E8720.c) |
| func_001D9B30 | 0x001D9B30 | 0xBC | game | size | 31 | [unk/unk_1D5B30/func_001D9B30.c](unk/unk_1D5B30/func_001D9B30.c) |
| func_002A18A0 | 0x002A18A0 | 0xD4 | game | size | 31 | [story/evt_scrp/func_002A18A0.c](story/evt_scrp/func_002A18A0.c) |
| func_002BEF00 | 0x002BEF00 | 0x100 | game | size | 31 | [story/str_status/func_002BEF00.c](story/str_status/func_002BEF00.c) |
| func_0025DCA0 | 0x0025DCA0 | 0x130 | game | size | 31 | [unk/unk_25D740/func_0025DCA0.c](unk/unk_25D740/func_0025DCA0.c) |
| func_002F5120 | 0x002F5120 | 0x140 | game | size | 31 | [menu/mn_ipsyswnd/func_002F5120.c](menu/mn_ipsyswnd/func_002F5120.c) |
| func_002B0CA0 | 0x002B0CA0 | 0x158 | game | size | 31 | [unk/unk_2AF860/func_002B0CA0.c](unk/unk_2AF860/func_002B0CA0.c) |
| func_002CD480 | 0x002CD480 | 0x16C | game | size | 31 | [unk/unk_2CC840/func_002CD480.c](unk/unk_2CC840/func_002CD480.c) |
| func_0010DB20 | 0x0010DB20 | 0xCC | sdk | size | 32 | [sdk/libkernl/kfiv_sifrpc/func_0010DB20.c](sdk/libkernl/kfiv_sifrpc/func_0010DB20.c) |
| func_002A21F0 | 0x002A21F0 | 0xD0 | game | size | 32 | [story/evt_scrp/func_002A21F0.c](story/evt_scrp/func_002A21F0.c) |
| func_0015A9F0 | 0x0015A9F0 | 0xE4 | cri | size | 32 | [cri/adx_00159278/func_0015A9F0.c](cri/adx_00159278/func_0015A9F0.c) |
| func_00212050 | 0x00212050 | 0x104 | game | size | 32 | [unk/unk_20A4D0/func_00212050.c](unk/unk_20A4D0/func_00212050.c) |
| func_00274A00 | 0x00274A00 | 0x13C | game | size | 32 | [menu/ess_shop/func_00274A00.c](menu/ess_shop/func_00274A00.c) |
| func_0011ECE8 | 0x0011ECE8 | 0x18C | libc | size | 32 | [sdk/libm_0011ECE8/func_0011ECE8.c](sdk/libm_0011ECE8/func_0011ECE8.c) |
| func_0013EE00 | 0x0013EE00 | 0x88 | game | size | 33 | [sys/amObject/func_0013EE00.c](sys/amObject/func_0013EE00.c) |
| func_002F4780 | 0x002F4780 | 0x100 | game | size | 33 | [menu/mn_ipsyswnd/func_002F4780.c](menu/mn_ipsyswnd/func_002F4780.c) |
| func_002C0750 | 0x002C0750 | 0x104 | game | size | 33 | [story/str_status/func_002C0750.c](story/str_status/func_002C0750.c) |
| func_00259D90 | 0x00259D90 | 0x114 | game | size | 33 | [battle/skill_cmd/func_00259D90.c](battle/skill_cmd/func_00259D90.c) |
| func_001CA780 | 0x001CA780 | 0x118 | game | size | 33 | [battle/character/func_001CA780.c](battle/character/func_001CA780.c) |
| func_0021A500 | 0x0021A500 | 0x118 | game | size | 33 | [unk/unk_21A4C0/func_0021A500.c](unk/unk_21A4C0/func_0021A500.c) |
| func_002358A0 | 0x002358A0 | 0x148 | game | size | 33 | [unk/unk_231E70/func_002358A0.c](unk/unk_231E70/func_002358A0.c) |
| func_003090F0 | 0x003090F0 | 0x160 | game | size | 33 | [menu/mn_ArenaCharasel_pvsp/func_003090F0.c](menu/mn_ArenaCharasel_pvsp/func_003090F0.c) |
| func_002BDD10 | 0x002BDD10 | 0x168 | game | size | 33 | [story/str_status/func_002BDD10.c](story/str_status/func_002BDD10.c) |
| func_0029D550 | 0x0029D550 | 0x108 | game | size | 34 | [unk/unk_29CE90/func_0029D550.c](unk/unk_29CE90/func_0029D550.c) |
| func_002C1BC0 | 0x002C1BC0 | 0x130 | game | size | 34 | [story/str_status/func_002C1BC0.c](story/str_status/func_002C1BC0.c) |
| func_002DD180 | 0x002DD180 | 0x130 | game | size | 34 | [unk/unk_2DB970/func_002DD180.c](unk/unk_2DB970/func_002DD180.c) |
| func_00308C40 | 0x00308C40 | 0x104 | game | size | 35 | [menu/mn_ArenaCharasel_pvsp/func_00308C40.c](menu/mn_ArenaCharasel_pvsp/func_00308C40.c) |
| func_00279E60 | 0x00279E60 | 0x168 | game | size | 35 | [menu/ess_trade/func_00279E60.c](menu/ess_trade/func_00279E60.c) |
| func_002A1DB0 | 0x002A1DB0 | 0x174 | game | size | 35 | [story/evt_scrp/func_002A1DB0.c](story/evt_scrp/func_002A1DB0.c) |
| func_001E9980 | 0x001E9980 | 0x17C | game | size | 35 | [unk/unk_1D5B30/func_001E9980.c](unk/unk_1D5B30/func_001E9980.c) |
| func_00278B00 | 0x00278B00 | 0x19C | game | size | 35 | [menu/ess_trade/func_00278B00.c](menu/ess_trade/func_00278B00.c) |
| func_001C73B0 | 0x001C73B0 | 0x1BC | game | size | 35 | [battle/btl_main/func_001C73B0.c](battle/btl_main/func_001C73B0.c) |
| func_00107DE0 | 0x00107DE0 | 0x78 | sdk | size | 36 | [sdk/libmpeg/kfiv_mpeg/func_00107DE0.c](sdk/libmpeg/kfiv_mpeg/func_00107DE0.c) |
| func_0018D7A8 | 0x0018D7A8 | 0xC8 | cri | size | 36 | [cri/sfd/func_0018D7A8.c](cri/sfd/func_0018D7A8.c) |
| func_00168768 | 0x00168768 | 0x108 | cri | size | 36 | [cri/htci/func_00168768.c](cri/htci/func_00168768.c) |
| func_0028AD20 | 0x0028AD20 | 0x138 | game | size | 36 | [sys/mc_opr/func_0028AD20.c](sys/mc_opr/func_0028AD20.c) |
| func_001042C8 | 0x001042C8 | 0x178 | sdk | size | 36 | [sdk/libmpeg/func_001042C8.c](sdk/libmpeg/func_001042C8.c) |
| func_001B5940 | 0x004689A0 | 0x0 | game | size | 37 | [battle/btl_main/func_001B5940.c](battle/btl_main/func_001B5940.c) |
| func_002CC760 | 0x002CC760 | 0xDC | game | size | 37 | [unk/unk_2CAED0/func_002CC760.c](unk/unk_2CAED0/func_002CC760.c) |
| func_0020E530 | 0x0020E530 | 0xEC | game | size | 37 | [unk/unk_20A4D0/func_0020E530.c](unk/unk_20A4D0/func_0020E530.c) |
| func_002A1B30 | 0x002A1B30 | 0xEC | game | size | 37 | [story/evt_scrp/func_002A1B30.c](story/evt_scrp/func_002A1B30.c) |
| func_00227A30 | 0x00227A30 | 0xF0 | game | size | 37 | [battle/a2d/func_00227A30.c](battle/a2d/func_00227A30.c) |
| func_002655F0 | 0x002655F0 | 0x104 | game | size | 37 | [menu/mn_dataload/func_002655F0.c](menu/mn_dataload/func_002655F0.c) |
| func_001E4E20 | 0x001E4E20 | 0x11C | game | size | 37 | [unk/unk_1D5B30/func_001E4E20.c](unk/unk_1D5B30/func_001E4E20.c) |
| func_002889C0 | 0x002889C0 | 0x130 | game | size | 37 | [sys/mc_opr/func_002889C0.c](sys/mc_opr/func_002889C0.c) |
| func_002EF680 | 0x002EF680 | 0x13C | game | size | 37 | [menu/mn_ArenaList/func_002EF680.c](menu/mn_ArenaList/func_002EF680.c) |
| func_002BDF50 | 0x002BDF50 | 0x158 | game | size | 37 | [story/str_status/func_002BDF50.c](story/str_status/func_002BDF50.c) |
| func_002EB3E0 | 0x002EB3E0 | 0x174 | game | size | 37 | [unk/unk_2EA0B0/func_002EB3E0.c](unk/unk_2EA0B0/func_002EB3E0.c) |
| func_002A5D80 | 0x002A5D80 | 0x1C8 | game | size | 37 | [story/evt_scrp/func_002A5D80.c](story/evt_scrp/func_002A5D80.c) |
| func_001E73E0 | 0x001E73E0 | 0x10C | game | size | 38 | [unk/unk_1D5B30/func_001E73E0.c](unk/unk_1D5B30/func_001E73E0.c) |
| func_0022E8C0 | 0x0022E8C0 | 0x10C | game | size | 38 | [unk/unk_22E0B0/func_0022E8C0.c](unk/unk_22E0B0/func_0022E8C0.c) |
| func_0030BFC0 | 0x0030BFC0 | 0x11C | game | size | 38 | [unk/unk_30B130/func_0030BFC0.c](unk/unk_30B130/func_0030BFC0.c) |
| func_002B0000 | 0x002B0000 | 0x128 | game | size | 38 | [unk/unk_2AF860/func_002B0000.c](unk/unk_2AF860/func_002B0000.c) |
| func_002A1510 | 0x002A1510 | 0x12C | game | size | 38 | [story/evt_scrp/func_002A1510.c](story/evt_scrp/func_002A1510.c) |
| func_00253690 | 0x00253690 | 0x150 | game | size | 38 | [battle/skill_cmd/func_00253690.c](battle/skill_cmd/func_00253690.c) |
| func_0020B1C0 | 0x0020B1C0 | 0x19C | game | size | 38 | [unk/unk_20A4D0/func_0020B1C0.c](unk/unk_20A4D0/func_0020B1C0.c) |
| func_00270EC0 | 0x00270EC0 | 0x1BC | game | size | 38 | [unk/unk_26FF30/func_00270EC0.c](unk/unk_26FF30/func_00270EC0.c) |
| func_00280AB0 | 0x00280AB0 | 0x1C0 | game | size | 38 | [unk/unk_280730/func_00280AB0.c](unk/unk_280730/func_00280AB0.c) |
| func_001B9E70 | 0x001B9E70 | 0x1F8 | game | size | 38 | [battle/btl_main/func_001B9E70.c](battle/btl_main/func_001B9E70.c) |
| func_002EB560 | 0x002EB560 | 0x244 | game | size | 38 | [unk/unk_2EA0B0/func_002EB560.c](unk/unk_2EA0B0/func_002EB560.c) |
| func_002918A0 | 0x002918A0 | 0xC8 | game | size | 39 | [unk/unk_2918A0/func_002918A0.c](unk/unk_2918A0/func_002918A0.c) |
| func_001D13A0 | 0x001D13A0 | 0x100 | game | size | 39 | [battle/char_acsr/func_001D13A0.c](battle/char_acsr/func_001D13A0.c) |
| func_00281D20 | 0x00281D20 | 0x11C | game | size | 39 | [unk/unk_280730/func_00281D20.c](unk/unk_280730/func_00281D20.c) |
| func_002D0B60 | 0x002D0B60 | 0x124 | game | size | 39 | [unk/unk_2D04B0/func_002D0B60.c](unk/unk_2D04B0/func_002D0B60.c) |
| func_002DE460 | 0x002DE460 | 0x138 | game | size | 39 | [menu/mn_option/func_002DE460.c](menu/mn_option/func_002DE460.c) |
| func_0026E4A0 | 0x0026E4A0 | 0x1A0 | game | size | 39 | [menu/ess_main_2/func_0026E4A0.c](menu/ess_main_2/func_0026E4A0.c) |
| func_002778D0 | 0x002778D0 | 0x1B4 | game | size | 39 | [menu/ess_trade/func_002778D0.c](menu/ess_trade/func_002778D0.c) |
| func_00195AA0 | 0x00195AA0 | 0x64 | cri | size | 40 | [cri/sfd_00194D48/func_00195AA0.c](cri/sfd_00194D48/func_00195AA0.c) |
| func_00120F68 | 0x00120F68 | 0xA8 | libc | size | 40 | [sdk/libgcc_0011F758/func_00120F68.c](sdk/libgcc_0011F758/func_00120F68.c) |
| func_00132D20 | 0x00132D20 | 0xD0 | game | size | 40 | [sys/unk_131700/func_00132D20.c](sys/unk_131700/func_00132D20.c) |
| func_00217390 | 0x00217390 | 0x12C | game | size | 40 | [unk/unk_20A4D0/func_00217390.c](unk/unk_20A4D0/func_00217390.c) |
| func_001C8340 | 0x001C8340 | 0x134 | game | size | 40 | [battle/btl_main/func_001C8340.c](battle/btl_main/func_001C8340.c) |
| func_002E8DB0 | 0x002E8DB0 | 0x144 | game | size | 40 | [unk/unk_2E8540/func_002E8DB0.c](unk/unk_2E8540/func_002E8DB0.c) |
| func_002E5260 | 0x002E5260 | 0x148 | game | size | 40 | [unk/unk_2E4030/func_002E5260.c](unk/unk_2E4030/func_002E5260.c) |
| func_002A9D30 | 0x002A9D30 | 0x164 | game | size | 40 | [battle/scr_func/func_002A9D30.c](battle/scr_func/func_002A9D30.c) |
| func_0025B340 | 0x0025B340 | 0x188 | game | size | 40 | [unk/unk_25A130/func_0025B340.c](unk/unk_25A130/func_0025B340.c) |
| func_002E5980 | 0x002E5980 | 0x190 | game | size | 40 | [unk/unk_2E4030/func_002E5980.c](unk/unk_2E4030/func_002E5980.c) |
| func_002F0BC0 | 0x002F0BC0 | 0x1B0 | game | size | 40 | [menu/mn_InputPass/func_002F0BC0.c](menu/mn_InputPass/func_002F0BC0.c) |
| func_002F2D50 | 0x002F2D50 | 0x1B0 | game | size | 40 | [menu/mn_InputPass/func_002F2D50.c](menu/mn_InputPass/func_002F2D50.c) |
| func_0010F0E8 | 0x0010F0E8 | 0x208 | sdk | size | 40 | [sdk/libkernl/kfiv_filestub/func_0010F0E8.c](sdk/libkernl/kfiv_filestub/func_0010F0E8.c) |
| func_0011B4E8 | 0x0011B4E8 | 0x33C | libc | size | 40 | [sdk/libm/func_0011B4E8.c](sdk/libm/func_0011B4E8.c) |
| func_002A3B50 | 0x002A3B50 | 0xE0 | game | size | 41 | [story/evt_scrp/func_002A3B50.c](story/evt_scrp/func_002A3B50.c) |
| func_001E3310 | 0x001E3310 | 0x11C | game | size | 41 | [unk/unk_1D5B30/func_001E3310.c](unk/unk_1D5B30/func_001E3310.c) |
| func_001E2510 | 0x001E2510 | 0x120 | game | size | 41 | [unk/unk_1D5B30/func_001E2510.c](unk/unk_1D5B30/func_001E2510.c) |
| func_0024F6B0 | 0x0024F6B0 | 0x134 | game | size | 41 | [battle/skill_cmd/func_0024F6B0.c](battle/skill_cmd/func_0024F6B0.c) |
| func_002C1720 | 0x002C1720 | 0x138 | game | size | 41 | [story/str_status/func_002C1720.c](story/str_status/func_002C1720.c) |
| func_002C15E0 | 0x002C15E0 | 0x140 | game | size | 41 | [story/str_status/func_002C15E0.c](story/str_status/func_002C15E0.c) |
| func_00286C50 | 0x00286C50 | 0x148 | game | size | 41 | [menu/mn_StageSel/func_00286C50.c](menu/mn_StageSel/func_00286C50.c) |
| func_002695B0 | 0x002695B0 | 0x170 | game | size | 41 | [menu/mn_vsmode/func_002695B0.c](menu/mn_vsmode/func_002695B0.c) |
| func_001B34B0 | 0x001B34B0 | 0x1B0 | game | size | 41 | [battle/btl_main/func_001B34B0.c](battle/btl_main/func_001B34B0.c) |
| func_00234EA0 | 0x00234EA0 | 0x1F8 | game | size | 41 | [unk/unk_231E70/func_00234EA0.c](unk/unk_231E70/func_00234EA0.c) |
| func_001D12A0 | 0x001D12A0 | 0xF8 | game | size | 42 | [battle/char_acsr/func_001D12A0.c](battle/char_acsr/func_001D12A0.c) |
| func_001D5B30 | 0x001D5B30 | 0x110 | game | size | 42 | [unk/unk_1D5B30/func_001D5B30.c](unk/unk_1D5B30/func_001D5B30.c) |
| func_001AF840 | 0x001AF840 | 0x138 | game | size | 42 | [battle/btl_main/func_001AF840.c](battle/btl_main/func_001AF840.c) |
| func_002802E0 | 0x002802E0 | 0x188 | game | size | 42 | [menu/mn_charasel/func_002802E0.c](menu/mn_charasel/func_002802E0.c) |
| func_002AFE00 | 0x002AFE00 | 0x198 | game | size | 42 | [unk/unk_2AF860/func_002AFE00.c](unk/unk_2AF860/func_002AFE00.c) |
| func_00287E60 | 0x00287E60 | 0x19C | game | size | 42 | [menu/mn_StageSel/func_00287E60.c](menu/mn_StageSel/func_00287E60.c) |
| func_001F0280 | 0x001F0280 | 0x23C | game | size | 42 | [battle/btb_draw/func_001F0280.c](battle/btb_draw/func_001F0280.c) |
| func_001C55D0 | 0x001C55D0 | 0x2A0 | game | size | 42 | [battle/btl_main/func_001C55D0.c](battle/btl_main/func_001C55D0.c) |
| func_002E5B10 | 0x002E5B10 | 0x104 | game | size | 43 | [unk/unk_2E4030/func_002E5B10.c](unk/unk_2E4030/func_002E5B10.c) |
| func_001CB540 | 0x001CB540 | 0x120 | game | size | 43 | [battle/character/func_001CB540.c](battle/character/func_001CB540.c) |
| func_002FCF60 | 0x002FCF60 | 0x130 | game | size | 43 | [unk/unk_2FAFF0/func_002FCF60.c](unk/unk_2FAFF0/func_002FCF60.c) |
| func_001CA8F0 | 0x001CA8F0 | 0x138 | game | size | 43 | [battle/character/func_001CA8F0.c](battle/character/func_001CA8F0.c) |
| func_002B4AF0 | 0x002B4AF0 | 0x144 | game | size | 43 | [unk/unk_2B2C20/func_002B4AF0.c](unk/unk_2B2C20/func_002B4AF0.c) |
| func_00308EB0 | 0x00308EB0 | 0x144 | game | size | 43 | [menu/mn_ArenaCharasel_pvsp/func_00308EB0.c](menu/mn_ArenaCharasel_pvsp/func_00308EB0.c) |
| func_00310080 | 0x00310080 | 0x150 | game | size | 43 | [story/str_dataerase/func_00310080.c](story/str_dataerase/func_00310080.c) |
| func_002D0A00 | 0x002D0A00 | 0x154 | game | size | 43 | [unk/unk_2D04B0/func_002D0A00.c](unk/unk_2D04B0/func_002D0A00.c) |
| func_001AE720 | 0x001AE720 | 0x168 | game | size | 43 | [battle/btl_main/func_001AE720.c](battle/btl_main/func_001AE720.c) |
| func_001B5320 | 0x001B5320 | 0x168 | game | size | 43 | [battle/btl_main/func_001B5320.c](battle/btl_main/func_001B5320.c) |
| func_001B5630 | 0x001B5630 | 0x168 | game | size | 43 | [battle/btl_main/func_001B5630.c](battle/btl_main/func_001B5630.c) |
| func_0026EF00 | 0x0026EF00 | 0x170 | game | size | 43 | [menu/ess_main_2/func_0026EF00.c](menu/ess_main_2/func_0026EF00.c) |
| func_00246EB0 | 0x00246EB0 | 0x1A4 | game | size | 43 | [unk/unk_23A890/func_00246EB0.c](unk/unk_23A890/func_00246EB0.c) |
| func_00207200 | 0x00207200 | 0xB4 | game | size | 44 | [unk/unk_1FB760/func_00207200.c](unk/unk_1FB760/func_00207200.c) |
| func_002077D0 | 0x002077D0 | 0xB4 | game | size | 44 | [unk/unk_1FB760/func_002077D0.c](unk/unk_1FB760/func_002077D0.c) |
| func_00207CC0 | 0x00207CC0 | 0xB4 | game | size | 44 | [unk/unk_1FB760/func_00207CC0.c](unk/unk_1FB760/func_00207CC0.c) |
| func_00208260 | 0x00208260 | 0xB4 | game | size | 44 | [unk/unk_1FB760/func_00208260.c](unk/unk_1FB760/func_00208260.c) |
| func_001210F8 | 0x001210F8 | 0x118 | libc | size | 44 | [sdk/libgcc_0011F758/func_001210F8.c](sdk/libgcc_0011F758/func_001210F8.c) |
| func_002CE3D0 | 0x002CE3D0 | 0x130 | game | size | 44 | [unk/unk_2CD5F0/func_002CE3D0.c](unk/unk_2CD5F0/func_002CE3D0.c) |
| func_00212160 | 0x00212160 | 0x134 | game | size | 44 | [unk/unk_20A4D0/func_00212160.c](unk/unk_20A4D0/func_00212160.c) |
| func_00234D50 | 0x00234D50 | 0x148 | game | size | 44 | [unk/unk_231E70/func_00234D50.c](unk/unk_231E70/func_00234D50.c) |
| func_00272A20 | 0x00272A20 | 0x148 | game | size | 44 | [menu/ess_list/func_00272A20.c](menu/ess_list/func_00272A20.c) |
| func_00276B50 | 0x00276B50 | 0x184 | game | size | 44 | [menu/ess_shop/func_00276B50.c](menu/ess_shop/func_00276B50.c) |
| func_002AC9F0 | 0x002AC9F0 | 0x1FC | game | size | 44 | [battle/scr_func/func_002AC9F0.c](battle/scr_func/func_002AC9F0.c) |
| func_00235480 | 0x00235480 | 0x25C | game | size | 44 | [unk/unk_231E70/func_00235480.c](unk/unk_231E70/func_00235480.c) |
| func_001EF930 | 0x001EF930 | 0x474 | game | size | 44 | [battle/btb_draw/func_001EF930.c](battle/btb_draw/func_001EF930.c) |
| func_001B2EF0 | 0x00468820 | 0x0 | game | size | 45 | [battle/btl_main/func_001B2EF0.c](battle/btl_main/func_001B2EF0.c) |
| func_001B80D0 | 0x00468BE0 | 0x0 | game | size | 45 | [battle/btl_main/func_001B80D0.c](battle/btl_main/func_001B80D0.c) |
| func_001E3BB0 | 0x001E3BB0 | 0xC0 | game | size | 45 | [unk/unk_1D5B30/func_001E3BB0.c](unk/unk_1D5B30/func_001E3BB0.c) |
| func_00306140 | 0x00306140 | 0xD0 | game | size | 45 | [menu/mn_TourMap/func_00306140.c](menu/mn_TourMap/func_00306140.c) |
| func_002667D0 | 0x002667D0 | 0x118 | game | size | 45 | [menu/mn_dataload/func_002667D0.c](menu/mn_dataload/func_002667D0.c) |
| func_001ADD90 | 0x001ADD90 | 0x150 | game | size | 45 | [battle/btl_main/func_001ADD90.c](battle/btl_main/func_001ADD90.c) |
| func_001D90D0 | 0x001D90D0 | 0x150 | game | size | 45 | [unk/unk_1D5B30/func_001D90D0.c](unk/unk_1D5B30/func_001D90D0.c) |
| func_0028AE60 | 0x0028AE60 | 0x150 | game | size | 45 | [sys/mc_opr/func_0028AE60.c](sys/mc_opr/func_0028AE60.c) |
| func_002F4F70 | 0x002F4F70 | 0x1B0 | game | size | 45 | [menu/mn_ipsyswnd/func_002F4F70.c](menu/mn_ipsyswnd/func_002F4F70.c) |
| func_001F4910 | 0x001F4910 | 0x1BC | game | size | 45 | [battle/btb_draw/func_001F4910.c](battle/btb_draw/func_001F4910.c) |
| func_0027F4A0 | 0x0027F4A0 | 0x1D8 | game | size | 45 | [menu/mn_charasel/func_0027F4A0.c](menu/mn_charasel/func_0027F4A0.c) |
| func_0013BA20 | 0x0013BA20 | 0xC8 | game | size | 46 | [sys/amMotion/func_0013BA20.c](sys/amMotion/func_0013BA20.c) |
| func_00291AD0 | 0x00291AD0 | 0x11C | game | size | 46 | [unk/unk_2918A0/func_00291AD0.c](unk/unk_2918A0/func_00291AD0.c) |
| func_00242A10 | 0x00242A10 | 0x130 | game | size | 46 | [unk/unk_23A890/func_00242A10.c](unk/unk_23A890/func_00242A10.c) |
| func_002BEB50 | 0x002BEB50 | 0x160 | game | size | 46 | [story/str_status/func_002BEB50.c](story/str_status/func_002BEB50.c) |
| func_00289F30 | 0x00289F30 | 0x170 | game | size | 46 | [sys/mc_opr/func_00289F30.c](sys/mc_opr/func_00289F30.c) |
| func_002EE360 | 0x002EE360 | 0x170 | game | size | 46 | [menu/mn_ArenaList/func_002EE360.c](menu/mn_ArenaList/func_002EE360.c) |
| func_001E1690 | 0x001E1690 | 0x1B8 | game | size | 46 | [unk/unk_1D5B30/func_001E1690.c](unk/unk_1D5B30/func_001E1690.c) |
| func_002378F0 | 0x002378F0 | 0x1E4 | game | size | 46 | [battle/char_light/func_002378F0.c](battle/char_light/func_002378F0.c) |
| func_00244580 | 0x00244580 | 0xD8 | game | size | 47 | [unk/unk_23A890/func_00244580.c](unk/unk_23A890/func_00244580.c) |
| func_0020E120 | 0x0020E120 | 0xE8 | game | size | 47 | [unk/unk_20A4D0/func_0020E120.c](unk/unk_20A4D0/func_0020E120.c) |
| func_0028F720 | 0x0028F720 | 0x108 | game | size | 47 | [story/str_bg/func_0028F720.c](story/str_bg/func_0028F720.c) |
| func_002B1D70 | 0x002B1D70 | 0x118 | game | size | 47 | [unk/unk_2AF860/func_002B1D70.c](unk/unk_2AF860/func_002B1D70.c) |
| func_001F1770 | 0x001F1770 | 0x11C | game | size | 47 | [battle/btb_draw/func_001F1770.c](battle/btb_draw/func_001F1770.c) |
| func_0022E7A0 | 0x0022E7A0 | 0x120 | game | size | 47 | [unk/unk_22E0B0/func_0022E7A0.c](unk/unk_22E0B0/func_0022E7A0.c) |
| func_001AC110 | 0x001AC110 | 0x130 | game | size | 47 | [battle/btl_main/func_001AC110.c](battle/btl_main/func_001AC110.c) |
| func_001ACA80 | 0x001ACA80 | 0x13C | game | size | 47 | [battle/btl_main/func_001ACA80.c](battle/btl_main/func_001ACA80.c) |
| func_002A5F50 | 0x002A5F50 | 0x13C | game | size | 47 | [story/evt_scrp/func_002A5F50.c](story/evt_scrp/func_002A5F50.c) |
| func_002CE690 | 0x002CE690 | 0x144 | game | size | 47 | [unk/unk_2CD5F0/func_002CE690.c](unk/unk_2CD5F0/func_002CE690.c) |
| func_00241AC0 | 0x00241AC0 | 0x148 | game | size | 47 | [unk/unk_23A890/func_00241AC0.c](unk/unk_23A890/func_00241AC0.c) |
| func_00249F50 | 0x00249F50 | 0x15C | game | size | 47 | [battle/skill_cmd/func_00249F50.c](battle/skill_cmd/func_00249F50.c) |
| func_002A8CE0 | 0x002A8CE0 | 0x15C | game | size | 47 | [unk/unk_2A8970/func_002A8CE0.c](unk/unk_2A8970/func_002A8CE0.c) |
| func_00268170 | 0x00268170 | 0x168 | game | size | 47 | [menu/mn_vsmode/func_00268170.c](menu/mn_vsmode/func_00268170.c) |
| func_00246680 | 0x00246680 | 0x174 | game | size | 47 | [unk/unk_23A890/func_00246680.c](unk/unk_23A890/func_00246680.c) |
| func_002D0830 | 0x002D0830 | 0x180 | game | size | 47 | [unk/unk_2D04B0/func_002D0830.c](unk/unk_2D04B0/func_002D0830.c) |
| func_00217070 | 0x00217070 | 0x18C | game | size | 47 | [unk/unk_20A4D0/func_00217070.c](unk/unk_20A4D0/func_00217070.c) |
| func_00219880 | 0x00219880 | 0x18C | game | size | 47 | [unk/unk_20A4D0/func_00219880.c](unk/unk_20A4D0/func_00219880.c) |
| func_001AFDF0 | 0x001AFDF0 | 0x1A8 | game | size | 47 | [battle/btl_main/func_001AFDF0.c](battle/btl_main/func_001AFDF0.c) |
| func_00279FD0 | 0x00279FD0 | 0x1BC | game | size | 47 | [menu/ess_trade/func_00279FD0.c](menu/ess_trade/func_00279FD0.c) |
| func_00276840 | 0x00276840 | 0x1C4 | game | size | 47 | [menu/ess_shop/func_00276840.c](menu/ess_shop/func_00276840.c) |
| func_0026DE30 | 0x0026DE30 | 0x1D0 | game | size | 47 | [menu/ess_main_2/func_0026DE30.c](menu/ess_main_2/func_0026DE30.c) |
| func_00305E90 | 0x00305E90 | 0x1D0 | game | size | 47 | [menu/mn_TourMap/func_00305E90.c](menu/mn_TourMap/func_00305E90.c) |
| func_001E80B0 | 0x001E80B0 | 0x1DC | game | size | 47 | [unk/unk_1D5B30/func_001E80B0.c](unk/unk_1D5B30/func_001E80B0.c) |
| func_00161B98 | 0x00161B98 | 0xF4 | cri | size | 48 | [cri/adx_00161B98/func_00161B98.c](cri/adx_00161B98/func_00161B98.c) |
| func_0020E290 | 0x0020E290 | 0xFC | game | size | 48 | [unk/unk_20A4D0/func_0020E290.c](unk/unk_20A4D0/func_0020E290.c) |
| func_00216F50 | 0x00216F50 | 0x110 | game | size | 48 | [unk/unk_20A4D0/func_00216F50.c](unk/unk_20A4D0/func_00216F50.c) |
| func_001D14A0 | 0x001D14A0 | 0x118 | game | size | 48 | [battle/char_acsr/func_001D14A0.c](battle/char_acsr/func_001D14A0.c) |
| func_002E0050 | 0x002E0050 | 0x11C | game | size | 48 | [menu/mn_option/func_002E0050.c](menu/mn_option/func_002E0050.c) |
| func_001EF730 | 0x001EF730 | 0x144 | game | size | 48 | [battle/btb_draw/func_001EF730.c](battle/btb_draw/func_001EF730.c) |
| func_002C1E10 | 0x002C1E10 | 0x178 | game | size | 48 | [story/str_status/func_002C1E10.c](story/str_status/func_002C1E10.c) |
| func_001503A0 | 0x001503A0 | 0x1B4 | cri | size | 48 | [cri/adx_0014EF28/func_001503A0.c](cri/adx_0014EF28/func_001503A0.c) |
| func_0015A120 | 0x0015A120 | 0x1B4 | cri | size | 48 | [cri/adx_00159278/func_0015A120.c](cri/adx_00159278/func_0015A120.c) |
| func_002782D0 | 0x002782D0 | 0x1B4 | game | size | 48 | [menu/ess_trade/func_002782D0.c](menu/ess_trade/func_002782D0.c) |
| func_00301530 | 0x00301530 | 0x1C4 | game | size | 48 | [unk/unk_301530/func_00301530.c](unk/unk_301530/func_00301530.c) |
| func_002A7940 | 0x002A7940 | 0x208 | game | size | 48 | [story/evt_scrp/func_002A7940.c](story/evt_scrp/func_002A7940.c) |
| func_001A8E60 | 0x001A8E60 | 0x280 | game | size | 48 | [battle/btl_cmd/func_001A8E60.c](battle/btl_cmd/func_001A8E60.c) |
| func_001D9EB0 | 0x001D9EB0 | 0x298 | game | size | 48 | [unk/unk_1D5B30/func_001D9EB0.c](unk/unk_1D5B30/func_001D9EB0.c) |
| func_001723E0 | 0x001723E0 | 0x308 | cri | size | 48 | [cri/mpv/func_001723E0.c](cri/mpv/func_001723E0.c) |
| func_002BC7E0 | 0x002BC7E0 | 0x140 | game | size | 49 | [unk/unk_2B98D0/func_002BC7E0.c](unk/unk_2B98D0/func_002BC7E0.c) |
| func_001CAAB0 | 0x001CAAB0 | 0x158 | game | size | 49 | [battle/character/func_001CAAB0.c](battle/character/func_001CAAB0.c) |
| func_00244410 | 0x00244410 | 0x168 | game | size | 49 | [unk/unk_23A890/func_00244410.c](unk/unk_23A890/func_00244410.c) |
| func_002A0830 | 0x002A0830 | 0x170 | game | size | 49 | [sys/cnv_sys/func_002A0830.c](sys/cnv_sys/func_002A0830.c) |
| func_002CD2D0 | 0x002CD2D0 | 0x1AC | game | size | 49 | [unk/unk_2CC840/func_002CD2D0.c](unk/unk_2CC840/func_002CD2D0.c) |
| func_00283D00 | 0x00283D00 | 0x1C8 | game | size | 49 | [menu/skl_sheet/func_00283D00.c](menu/skl_sheet/func_00283D00.c) |
| func_002470B0 | 0x002470B0 | 0x1CC | game | size | 49 | [unk/unk_23A890/func_002470B0.c](unk/unk_23A890/func_002470B0.c) |
| StrSelect_TaskLoad | 0x002EC3B0 | 0x25C | game | size | 49 | [story/str_select/StrSelect_TaskLoad.c](story/str_select/StrSelect_TaskLoad.c) |
| func_0020E620 | 0x0020E620 | 0x104 | game | size | 50 | [unk/unk_20A4D0/func_0020E620.c](unk/unk_20A4D0/func_0020E620.c) |
| func_002B89E0 | 0x002B89E0 | 0x168 | game | size | 50 | [menu/mn_csmodel/func_002B89E0.c](menu/mn_csmodel/func_002B89E0.c) |
| func_002FEBD0 | 0x002FEBD0 | 0x190 | game | size | 50 | [unk/unk_2FAFF0/func_002FEBD0.c](unk/unk_2FAFF0/func_002FEBD0.c) |
| func_00265420 | 0x00265420 | 0x1C8 | game | size | 50 | [menu/mn_dataload/func_00265420.c](menu/mn_dataload/func_00265420.c) |
| func_002B7A60 | 0x002B7A60 | 0x1DC | game | size | 50 | [menu/mn_csmodel/func_002B7A60.c](menu/mn_csmodel/func_002B7A60.c) |
| func_002F3020 | 0x002F3020 | 0x1E8 | game | size | 50 | [menu/mn_InputPass/func_002F3020.c](menu/mn_InputPass/func_002F3020.c) |
| func_002F1300 | 0x002F1300 | 0x200 | game | size | 50 | [menu/mn_InputPass/func_002F1300.c](menu/mn_InputPass/func_002F1300.c) |
| func_001B8E50 | 0x00468C70 | 0x0 | game | size | 51 | [battle/btl_main/func_001B8E50.c](battle/btl_main/func_001B8E50.c) |
| func_002C0630 | 0x002C0630 | 0x114 | game | size | 51 | [story/str_status/func_002C0630.c](story/str_status/func_002C0630.c) |
| func_002E5840 | 0x002E5840 | 0x13C | game | size | 51 | [unk/unk_2E4030/func_002E5840.c](unk/unk_2E4030/func_002E5840.c) |
| func_002908D0 | 0x002908D0 | 0x19C | game | size | 51 | [story/str_bg/func_002908D0.c](story/str_bg/func_002908D0.c) |
| func_0020D400 | 0x0020D400 | 0xF8 | game | size | 52 | [unk/unk_20A4D0/func_0020D400.c](unk/unk_20A4D0/func_0020D400.c) |
| func_0020EA70 | 0x0020EA70 | 0x100 | game | size | 52 | [unk/unk_20A4D0/func_0020EA70.c](unk/unk_20A4D0/func_0020EA70.c) |
| func_00121288 | 0x00121288 | 0x128 | libc | size | 52 | [sdk/libgcc_0011F758/func_00121288.c](sdk/libgcc_0011F758/func_00121288.c) |
| func_00288870 | 0x00288870 | 0x148 | game | size | 52 | [sys/mc_opr/func_00288870.c](sys/mc_opr/func_00288870.c) |
| func_00252780 | 0x00252780 | 0x160 | game | size | 52 | [battle/skill_cmd/func_00252780.c](battle/skill_cmd/func_00252780.c) |
| func_002ACBF0 | 0x002ACBF0 | 0x160 | game | size | 52 | [battle/scr_func/func_002ACBF0.c](battle/scr_func/func_002ACBF0.c) |
| func_00289210 | 0x00289210 | 0x170 | game | size | 52 | [sys/mc_opr/func_00289210.c](sys/mc_opr/func_00289210.c) |
| func_0026DAF0 | 0x0026DAF0 | 0x190 | game | size | 52 | [menu/ess_main_2/func_0026DAF0.c](menu/ess_main_2/func_0026DAF0.c) |
| func_002C3E40 | 0x002C3E40 | 0x1CC | game | size | 52 | [story/str_status/func_002C3E40.c](story/str_status/func_002C3E40.c) |
| func_002FE5A0 | 0x002FE5A0 | 0x1F4 | game | size | 52 | [unk/unk_2FAFF0/func_002FE5A0.c](unk/unk_2FAFF0/func_002FE5A0.c) |
| func_00306D60 | 0x00306D60 | 0x210 | game | size | 52 | [story/evt_shenron/func_00306D60.c](story/evt_shenron/func_00306D60.c) |
| func_00276610 | 0x00276610 | 0x230 | game | size | 52 | [menu/ess_shop/func_00276610.c](menu/ess_shop/func_00276610.c) |
| func_001FB500 | 0x001FB500 | 0x248 | game | size | 52 | [unk/unk_1FA3C0/func_001FB500.c](unk/unk_1FA3C0/func_001FB500.c) |
| func_0029A250 | 0x0029A250 | 0x2A0 | game | size | 52 | [story/str_map/func_0029A250.c](story/str_map/func_0029A250.c) |
| StrSelect_Draw | 0x002EBBD0 | 0x2CC | game | size | 52 | [story/str_select/StrSelect_Draw.c](story/str_select/StrSelect_Draw.c) |
| func_0021A820 | 0x0021A820 | 0x110 | game | size | 53 | [unk/unk_21A4C0/func_0021A820.c](unk/unk_21A4C0/func_0021A820.c) |
| func_00273210 | 0x00273210 | 0x118 | game | size | 53 | [menu/ess_shop/func_00273210.c](menu/ess_shop/func_00273210.c) |
| func_00272510 | 0x00272510 | 0x13C | game | size | 53 | [menu/ess_list/func_00272510.c](menu/ess_list/func_00272510.c) |
| func_002A19B0 | 0x002A19B0 | 0x174 | game | size | 53 | [story/evt_scrp/func_002A19B0.c](story/evt_scrp/func_002A19B0.c) |
| func_002A81B0 | 0x002A81B0 | 0x178 | game | size | 53 | [story/evt_scrp/func_002A81B0.c](story/evt_scrp/func_002A81B0.c) |
| func_0022E9D0 | 0x0022E9D0 | 0x194 | game | size | 53 | [unk/unk_22E0B0/func_0022E9D0.c](unk/unk_22E0B0/func_0022E9D0.c) |
| func_00286650 | 0x00286650 | 0x1E8 | game | size | 53 | [menu/mn_StageSel/func_00286650.c](menu/mn_StageSel/func_00286650.c) |
| func_00286840 | 0x00286840 | 0x1E8 | game | size | 53 | [menu/mn_StageSel/func_00286840.c](menu/mn_StageSel/func_00286840.c) |
| func_003074C0 | 0x003074C0 | 0xEC | game | size | 54 | [unk/unk_3074C0/func_003074C0.c](unk/unk_3074C0/func_003074C0.c) |
| func_002178C0 | 0x002178C0 | 0x118 | game | size | 54 | [unk/unk_20A4D0/func_002178C0.c](unk/unk_20A4D0/func_002178C0.c) |
| func_002179E0 | 0x002179E0 | 0x118 | game | size | 54 | [unk/unk_20A4D0/func_002179E0.c](unk/unk_20A4D0/func_002179E0.c) |
| func_001CB890 | 0x001CB890 | 0x11C | game | size | 54 | [battle/character/func_001CB890.c](battle/character/func_001CB890.c) |
| func_001C9910 | 0x001C9910 | 0x154 | game | size | 54 | [battle/btl_main/func_001C9910.c](battle/btl_main/func_001C9910.c) |
| func_002B7F00 | 0x002B7F00 | 0x168 | game | size | 54 | [menu/mn_csmodel/func_002B7F00.c](menu/mn_csmodel/func_002B7F00.c) |
| func_002FAFF0 | 0x002FAFF0 | 0x17C | game | size | 54 | [unk/unk_2FAFF0/func_002FAFF0.c](unk/unk_2FAFF0/func_002FAFF0.c) |
| func_002D5570 | 0x002D5570 | 0x1A8 | game | size | 54 | [unk/unk_2D2530/func_002D5570.c](unk/unk_2D2530/func_002D5570.c) |
| func_002186D0 | 0x002186D0 | 0x1B0 | game | size | 54 | [unk/unk_20A4D0/func_002186D0.c](unk/unk_20A4D0/func_002186D0.c) |
| func_002A7240 | 0x002A7240 | 0x1B4 | game | size | 54 | [story/evt_scrp/func_002A7240.c](story/evt_scrp/func_002A7240.c) |
| func_0023D680 | 0x0023D680 | 0x2E4 | game | size | 54 | [unk/unk_23A890/func_0023D680.c](unk/unk_23A890/func_0023D680.c) |
| func_002B1B10 | 0x002B1B10 | 0x148 | game | size | 55 | [unk/unk_2AF860/func_002B1B10.c](unk/unk_2AF860/func_002B1B10.c) |
| func_001C4710 | 0x001C4710 | 0x160 | game | size | 55 | [battle/btl_main/func_001C4710.c](battle/btl_main/func_001C4710.c) |
| func_0028C0F0 | 0x0028C0F0 | 0x160 | game | size | 55 | [sys/mc_opr/func_0028C0F0.c](sys/mc_opr/func_0028C0F0.c) |
| func_002B7690 | 0x002B7690 | 0x170 | game | size | 55 | [menu/mn_csmodel/func_002B7690.c](menu/mn_csmodel/func_002B7690.c) |
| func_001C8600 | 0x001C8600 | 0x174 | game | size | 55 | [battle/btl_main/func_001C8600.c](battle/btl_main/func_001C8600.c) |
| func_0028A300 | 0x0028A300 | 0x180 | game | size | 55 | [sys/mc_opr/func_0028A300.c](sys/mc_opr/func_0028A300.c) |
| func_002A6E40 | 0x002A6E40 | 0x18C | game | size | 55 | [story/evt_scrp/func_002A6E40.c](story/evt_scrp/func_002A6E40.c) |
| func_002CC240 | 0x002CC240 | 0x20C | game | size | 55 | [unk/unk_2CAED0/func_002CC240.c](unk/unk_2CAED0/func_002CC240.c) |
| func_0019DB48 | 0x0019DB48 | 0x90 | cri | size | 56 | [cri/sfd_00194D48/func_0019DB48.c](cri/sfd_00194D48/func_0019DB48.c) |
| func_002DE910 | 0x002DE910 | 0xEC | game | size | 56 | [menu/mn_option/func_002DE910.c](menu/mn_option/func_002DE910.c) |
| func_001E52B0 | 0x001E52B0 | 0xF8 | game | size | 56 | [unk/unk_1D5B30/func_001E52B0.c](unk/unk_1D5B30/func_001E52B0.c) |
| func_00116C18 | 0x00116C18 | 0x158 | sdk | size | 56 | [sdk/libpad/kfiv_libpad/func_00116C18.c](sdk/libpad/kfiv_libpad/func_00116C18.c) |
| func_00301820 | 0x00301820 | 0x17C | game | size | 56 | [unk/unk_301530/func_00301820.c](unk/unk_301530/func_00301820.c) |
| func_003009E0 | 0x003009E0 | 0x180 | game | size | 56 | [unk/unk_2FAFF0/func_003009E0.c](unk/unk_2FAFF0/func_003009E0.c) |
| func_00309FA0 | 0x00309FA0 | 0x180 | game | size | 56 | [menu/mn_ArenaCharasel_cvsc/func_00309FA0.c](menu/mn_ArenaCharasel_cvsc/func_00309FA0.c) |
| func_0030A3C0 | 0x0030A3C0 | 0x180 | game | size | 56 | [menu/mn_ArenaCharasel_cvsc/func_0030A3C0.c](menu/mn_ArenaCharasel_cvsc/func_0030A3C0.c) |
| func_001C9440 | 0x001C9440 | 0x1A8 | game | size | 56 | [battle/btl_main/func_001C9440.c](battle/btl_main/func_001C9440.c) |
| func_0027FAE0 | 0x0027FAE0 | 0x1C0 | game | size | 56 | [menu/mn_charasel/func_0027FAE0.c](menu/mn_charasel/func_0027FAE0.c) |
| func_001D16F0 | 0x001D16F0 | 0x1C8 | game | size | 56 | [battle/char_acsr/func_001D16F0.c](battle/char_acsr/func_001D16F0.c) |
| func_001F0860 | 0x001F0860 | 0x1E4 | game | size | 56 | [battle/btb_draw/func_001F0860.c](battle/btb_draw/func_001F0860.c) |
| func_0026B560 | 0x0026B560 | 0x20C | game | size | 56 | [menu/ess_main/func_0026B560.c](menu/ess_main/func_0026B560.c) |
| func_0020A4D0 | 0x0020A4D0 | 0x11C | game | size | 57 | [unk/unk_20A4D0/func_0020A4D0.c](unk/unk_20A4D0/func_0020A4D0.c) |
| func_0030C6F0 | 0x0030C6F0 | 0x170 | game | size | 57 | [unk/unk_30B130/func_0030C6F0.c](unk/unk_30B130/func_0030C6F0.c) |
| func_002B58A0 | 0x002B58A0 | 0x1A0 | game | size | 57 | [unk/unk_2B5460/func_002B58A0.c](unk/unk_2B5460/func_002B58A0.c) |
| func_00211BD0 | 0x00211BD0 | 0x1A8 | game | size | 57 | [unk/unk_20A4D0/func_00211BD0.c](unk/unk_20A4D0/func_00211BD0.c) |
| func_002DDD40 | 0x002DDD40 | 0x1C0 | game | size | 57 | [unk/unk_2DB970/func_002DDD40.c](unk/unk_2DB970/func_002DDD40.c) |
| func_002F10F0 | 0x002F10F0 | 0x208 | game | size | 57 | [menu/mn_InputPass/func_002F10F0.c](menu/mn_InputPass/func_002F10F0.c) |
| func_001E3C70 | 0x001E3C70 | 0xEC | game | size | 58 | [unk/unk_1D5B30/func_001E3C70.c](unk/unk_1D5B30/func_001E3C70.c) |
| func_0026D8A0 | 0x0026D8A0 | 0x118 | game | size | 58 | [menu/ess_main/func_0026D8A0.c](menu/ess_main/func_0026D8A0.c) |
| func_001E5AD0 | 0x001E5AD0 | 0x134 | game | size | 58 | [unk/unk_1D5B30/func_001E5AD0.c](unk/unk_1D5B30/func_001E5AD0.c) |
| func_00300B60 | 0x00300B60 | 0x140 | game | size | 58 | [unk/unk_2FAFF0/func_00300B60.c](unk/unk_2FAFF0/func_00300B60.c) |
| func_00247E00 | 0x00247E00 | 0x170 | game | size | 58 | [unk/unk_23A890/func_00247E00.c](unk/unk_23A890/func_00247E00.c) |
| func_0023B4C0 | 0x0023B4C0 | 0x1EC | game | size | 58 | [unk/unk_23A890/func_0023B4C0.c](unk/unk_23A890/func_0023B4C0.c) |
| func_002D76E0 | 0x002D76E0 | 0x2E0 | game | size | 58 | [unk/unk_2D2530/func_002D76E0.c](unk/unk_2D2530/func_002D76E0.c) |
| func_002EC9B0 | 0x002EC9B0 | 0x110 | game | size | 59 | [unk/unk_2EC850/func_002EC9B0.c](unk/unk_2EC850/func_002EC9B0.c) |
| func_002C0510 | 0x002C0510 | 0x120 | game | size | 59 | [story/str_status/func_002C0510.c](story/str_status/func_002C0510.c) |
| func_001CCDD0 | 0x001CCDD0 | 0x158 | game | size | 59 | [unk/unk_1CBD90/func_001CCDD0.c](unk/unk_1CBD90/func_001CCDD0.c) |
| func_002AB4F0 | 0x002AB4F0 | 0x198 | game | size | 59 | [battle/scr_func/func_002AB4F0.c](battle/scr_func/func_002AB4F0.c) |
| func_0030C0E0 | 0x0030C0E0 | 0x19C | game | size | 59 | [unk/unk_30B130/func_0030C0E0.c](unk/unk_30B130/func_0030C0E0.c) |
| func_002BE870 | 0x002BE870 | 0x1B8 | game | size | 59 | [story/str_status/func_002BE870.c](story/str_status/func_002BE870.c) |
| func_002C3B40 | 0x002C3B40 | 0x1E0 | game | size | 59 | [story/str_status/func_002C3B40.c](story/str_status/func_002C3B40.c) |
| func_002CEA60 | 0x002CEA60 | 0x1F0 | game | size | 59 | [unk/unk_2CD5F0/func_002CEA60.c](unk/unk_2CD5F0/func_002CEA60.c) |
| func_00284AA0 | 0x00284AA0 | 0x208 | game | size | 59 | [unk/unk_284AA0/func_00284AA0.c](unk/unk_284AA0/func_00284AA0.c) |
| func_001B0160 | 0x001B0160 | 0x214 | game | size | 59 | [battle/btl_main/func_001B0160.c](battle/btl_main/func_001B0160.c) |
| func_001985F8 | 0x001985F8 | 0xA4 | cri | size | 60 | [cri/sfd_00194D48/func_001985F8.c](cri/sfd_00194D48/func_001985F8.c) |
| func_002DDAD0 | 0x002DDAD0 | 0x154 | game | size | 60 | [unk/unk_2DB970/func_002DDAD0.c](unk/unk_2DB970/func_002DDAD0.c) |
| func_001D39D0 | 0x001D39D0 | 0x190 | game | size | 60 | [battle/char_mant/func_001D39D0.c](battle/char_mant/func_001D39D0.c) |
| func_0020E390 | 0x0020E390 | 0x1A0 | game | size | 60 | [unk/unk_20A4D0/func_0020E390.c](unk/unk_20A4D0/func_0020E390.c) |
| func_0023E7A0 | 0x0023E7A0 | 0x1AC | game | size | 60 | [unk/unk_23A890/func_0023E7A0.c](unk/unk_23A890/func_0023E7A0.c) |
| func_0023A890 | 0x0023A890 | 0x1BC | game | size | 60 | [unk/unk_23A890/func_0023A890.c](unk/unk_23A890/func_0023A890.c) |
| func_002EE5C0 | 0x002EE5C0 | 0x1D8 | game | size | 60 | [menu/mn_ArenaList/func_002EE5C0.c](menu/mn_ArenaList/func_002EE5C0.c) |
| func_00131D00 | 0x00131D00 | 0x1F8 | game | size | 60 | [sys/unk_131700/func_00131D00.c](sys/unk_131700/func_00131D00.c) |
| func_00258090 | 0x00258090 | 0x278 | game | size | 60 | [battle/skill_cmd/func_00258090.c](battle/skill_cmd/func_00258090.c) |
| func_00108248 | 0x00108248 | 0x290 | sdk | size | 60 | [sdk/libmpeg_001081F8/func_00108248.c](sdk/libmpeg_001081F8/func_00108248.c) |
| func_002FED60 | 0x002FED60 | 0x170 | game | size | 61 | [unk/unk_2FAFF0/func_002FED60.c](unk/unk_2FAFF0/func_002FED60.c) |
| func_002B8260 | 0x002B8260 | 0x1A8 | game | size | 61 | [menu/mn_csmodel/func_002B8260.c](menu/mn_csmodel/func_002B8260.c) |
| func_00305680 | 0x00305680 | 0x1AC | game | size | 61 | [menu/mn_TourMap/func_00305680.c](menu/mn_TourMap/func_00305680.c) |
| func_00133DD0 | 0x00133DD0 | 0x1C8 | game | size | 61 | [sys/unk_133620/func_00133DD0.c](sys/unk_133620/func_00133DD0.c) |
| func_001F4E70 | 0x001F4E70 | 0x1C8 | game | size | 61 | [battle/btb_draw/func_001F4E70.c](battle/btb_draw/func_001F4E70.c) |
| func_001F5040 | 0x001F5040 | 0x1C8 | game | size | 61 | [battle/btb_draw/func_001F5040.c](battle/btb_draw/func_001F5040.c) |
| func_001F5660 | 0x001F5660 | 0x1C8 | game | size | 61 | [battle/btb_draw/func_001F5660.c](battle/btb_draw/func_001F5660.c) |
| func_001AC7C0 | 0x001AC7C0 | 0x1CC | game | size | 61 | [battle/btl_main/func_001AC7C0.c](battle/btl_main/func_001AC7C0.c) |
| func_001A4AF0 | 0x001A4AF0 | 0x1F4 | game | size | 61 | [battle/btl_cmd/func_001A4AF0.c](battle/btl_cmd/func_001A4AF0.c) |
| func_00242290 | 0x00242290 | 0x1F4 | game | size | 61 | [unk/unk_23A890/func_00242290.c](unk/unk_23A890/func_00242290.c) |
| func_00211D80 | 0x00211D80 | 0x200 | game | size | 61 | [unk/unk_20A4D0/func_00211D80.c](unk/unk_20A4D0/func_00211D80.c) |
| func_003075B0 | 0x003075B0 | 0x224 | game | size | 61 | [unk/unk_3074C0/func_003075B0.c](unk/unk_3074C0/func_003075B0.c) |
| func_00233B20 | 0x00233B20 | 0x22C | game | size | 61 | [unk/unk_231E70/func_00233B20.c](unk/unk_231E70/func_00233B20.c) |
| func_002D20E0 | 0x002D20E0 | 0x278 | game | size | 61 | [unk/unk_2D1C20/func_002D20E0.c](unk/unk_2D1C20/func_002D20E0.c) |
| func_001FB260 | 0x001FB260 | 0x150 | game | size | 62 | [unk/unk_1FA3C0/func_001FB260.c](unk/unk_1FA3C0/func_001FB260.c) |
| func_0027D1D0 | 0x0027D1D0 | 0x158 | game | size | 62 | [menu/mn_charasel/func_0027D1D0.c](menu/mn_charasel/func_0027D1D0.c) |
| func_001D2B40 | 0x001D2B40 | 0x170 | game | size | 62 | [battle/char_mant/func_001D2B40.c](battle/char_mant/func_001D2B40.c) |
| func_002D7050 | 0x002D7050 | 0x178 | game | size | 62 | [unk/unk_2D2530/func_002D7050.c](unk/unk_2D2530/func_002D7050.c) |
| func_0029C110 | 0x0029C110 | 0x180 | game | size | 62 | [story/str_map/func_0029C110.c](story/str_map/func_0029C110.c) |
| func_0023D970 | 0x0023D970 | 0x1CC | game | size | 62 | [unk/unk_23A890/func_0023D970.c](unk/unk_23A890/func_0023D970.c) |
| func_00258F80 | 0x00258F80 | 0x258 | game | size | 62 | [battle/skill_cmd/func_00258F80.c](battle/skill_cmd/func_00258F80.c) |
| func_00214370 | 0x00214370 | 0x268 | game | size | 62 | [unk/unk_20A4D0/func_00214370.c](unk/unk_20A4D0/func_00214370.c) |
| func_0023E260 | 0x0023E260 | 0x30C | game | size | 62 | [unk/unk_23A890/func_0023E260.c](unk/unk_23A890/func_0023E260.c) |
| func_0020A5F0 | 0x0020A5F0 | 0x128 | game | size | 63 | [unk/unk_20A4D0/func_0020A5F0.c](unk/unk_20A4D0/func_0020A5F0.c) |
| func_002C6D40 | 0x002C6D40 | 0x1A4 | game | size | 63 | [unk/unk_2C41C0/func_002C6D40.c](unk/unk_2C41C0/func_002C6D40.c) |
| func_002693E0 | 0x002693E0 | 0x1C4 | game | size | 63 | [menu/mn_vsmode/func_002693E0.c](menu/mn_vsmode/func_002693E0.c) |
| func_002122A0 | 0x002122A0 | 0x1D8 | game | size | 63 | [unk/unk_20A4D0/func_002122A0.c](unk/unk_20A4D0/func_002122A0.c) |
| func_002AF420 | 0x002AF420 | 0x210 | game | size | 63 | [unk/unk_2AE760/func_002AF420.c](unk/unk_2AE760/func_002AF420.c) |
| func_002AF650 | 0x002AF650 | 0x210 | game | size | 63 | [unk/unk_2AE760/func_002AF650.c](unk/unk_2AE760/func_002AF650.c) |
| func_002D12B0 | 0x002D12B0 | 0x210 | game | size | 63 | [unk/unk_2D04B0/func_002D12B0.c](unk/unk_2D04B0/func_002D12B0.c) |
| func_001C3AF0 | 0x001C3AF0 | 0x21C | game | size | 63 | [battle/btl_main/func_001C3AF0.c](battle/btl_main/func_001C3AF0.c) |
| func_0024CDD0 | 0x0024CDD0 | 0x21C | game | size | 63 | [battle/skill_cmd/func_0024CDD0.c](battle/skill_cmd/func_0024CDD0.c) |
| func_0018A678 | 0x0018A678 | 0x88 | cri | size | 64 | [cri/sfd/func_0018A678.c](cri/sfd/func_0018A678.c) |
| func_002BB150 | 0x002BB150 | 0x148 | game | size | 64 | [unk/unk_2B98D0/func_002BB150.c](unk/unk_2B98D0/func_002BB150.c) |
| func_002E06A0 | 0x002E06A0 | 0x154 | game | size | 64 | [menu/mn_option/func_002E06A0.c](menu/mn_option/func_002E06A0.c) |
| func_001F7DB0 | 0x001F7DB0 | 0x194 | game | size | 64 | [battle/btb_draw/func_001F7DB0.c](battle/btb_draw/func_001F7DB0.c) |
| func_00246AB0 | 0x00246AB0 | 0x1EC | game | size | 64 | [unk/unk_23A890/func_00246AB0.c](unk/unk_23A890/func_00246AB0.c) |
| func_00191D38 | 0x00191D38 | 0x20C | cri | size | 64 | [cri/sfd/func_00191D38.c](cri/sfd/func_00191D38.c) |
| func_001E9B00 | 0x001E9B00 | 0x210 | game | size | 64 | [unk/unk_1D5B30/func_001E9B00.c](unk/unk_1D5B30/func_001E9B00.c) |
| func_0020DE40 | 0x0020DE40 | 0x22C | game | size | 64 | [unk/unk_20A4D0/func_0020DE40.c](unk/unk_20A4D0/func_0020DE40.c) |
| func_002ADB70 | 0x002ADB70 | 0x248 | game | size | 64 | [battle/scr_func/func_002ADB70.c](battle/scr_func/func_002ADB70.c) |
| func_002A5870 | 0x002A5870 | 0x288 | game | size | 64 | [story/evt_scrp/func_002A5870.c](story/evt_scrp/func_002A5870.c) |
| func_0029B130 | 0x0029B130 | 0x158 | game | size | 65 | [story/str_map/func_0029B130.c](story/str_map/func_0029B130.c) |
| func_00251C20 | 0x00251C20 | 0x17C | game | size | 65 | [battle/skill_cmd/func_00251C20.c](battle/skill_cmd/func_00251C20.c) |
| func_002E1DF0 | 0x002E1DF0 | 0x194 | game | size | 65 | [menu/mn_option_2/func_002E1DF0.c](menu/mn_option_2/func_002E1DF0.c) |
| func_002CE7E0 | 0x002CE7E0 | 0x19C | game | size | 65 | [unk/unk_2CD5F0/func_002CE7E0.c](unk/unk_2CD5F0/func_002CE7E0.c) |
| func_002C6930 | 0x002C6930 | 0x228 | game | size | 65 | [unk/unk_2C41C0/func_002C6930.c](unk/unk_2C41C0/func_002C6930.c) |
| func_002C8670 | 0x002C8670 | 0x228 | game | size | 65 | [unk/unk_2C41C0/func_002C8670.c](unk/unk_2C41C0/func_002C8670.c) |
| func_002BF610 | 0x002BF610 | 0x234 | game | size | 65 | [story/str_status/func_002BF610.c](story/str_status/func_002BF610.c) |
| func_001C7D90 | 0x001C7D90 | 0x288 | game | size | 65 | [battle/btl_main/func_001C7D90.c](battle/btl_main/func_001C7D90.c) |
| func_002AC520 | 0x002AC520 | 0x140 | game | size | 66 | [battle/scr_func/func_002AC520.c](battle/scr_func/func_002AC520.c) |
| func_00253A50 | 0x00253A50 | 0x148 | game | size | 66 | [battle/skill_cmd/func_00253A50.c](battle/skill_cmd/func_00253A50.c) |
| func_00251DA0 | 0x00251DA0 | 0x184 | game | size | 66 | [battle/skill_cmd/func_00251DA0.c](battle/skill_cmd/func_00251DA0.c) |
| func_002518B0 | 0x002518B0 | 0x1AC | game | size | 66 | [battle/skill_cmd/func_002518B0.c](battle/skill_cmd/func_002518B0.c) |
| func_002661D0 | 0x002661D0 | 0x1C0 | game | size | 66 | [menu/mn_dataload/func_002661D0.c](menu/mn_dataload/func_002661D0.c) |
| func_00287A70 | 0x00287A70 | 0x1C0 | game | size | 66 | [menu/mn_StageSel/func_00287A70.c](menu/mn_StageSel/func_00287A70.c) |
| func_0029CA40 | 0x0029CA40 | 0x1D8 | game | size | 66 | [story/str_map/func_0029CA40.c](story/str_map/func_0029CA40.c) |
| func_0025A3A0 | 0x0025A3A0 | 0x1E0 | game | size | 66 | [unk/unk_25A130/func_0025A3A0.c](unk/unk_25A130/func_0025A3A0.c) |
| func_0025B4D0 | 0x0025B4D0 | 0x200 | game | size | 66 | [unk/unk_25A130/func_0025B4D0.c](unk/unk_25A130/func_0025B4D0.c) |
| func_00242E10 | 0x00242E10 | 0x210 | game | size | 66 | [unk/unk_23A890/func_00242E10.c](unk/unk_23A890/func_00242E10.c) |
| func_0030EDA0 | 0x0030EDA0 | 0x248 | game | size | 66 | [story/str_staffroll/func_0030EDA0.c](story/str_staffroll/func_0030EDA0.c) |
| func_001C8B50 | 0x001C8B50 | 0x2F4 | game | size | 66 | [battle/btl_main/func_001C8B50.c](battle/btl_main/func_001C8B50.c) |
| func_00273E20 | 0x00273E20 | 0x300 | game | size | 66 | [menu/ess_shop/func_00273E20.c](menu/ess_shop/func_00273E20.c) |
| func_00277010 | 0x00277010 | 0x300 | game | size | 66 | [menu/ess_shop/func_00277010.c](menu/ess_shop/func_00277010.c) |
| func_001BAB10 | 0x00468D60 | 0x0 | game | size | 67 | [battle/btl_main/func_001BAB10.c](battle/btl_main/func_001BAB10.c) |
| func_002E9300 | 0x002E9300 | 0x1B4 | game | size | 67 | [unk/unk_2E8540/func_002E9300.c](unk/unk_2E8540/func_002E9300.c) |
| func_002C1160 | 0x002C1160 | 0x1BC | game | size | 67 | [story/str_status/func_002C1160.c](story/str_status/func_002C1160.c) |
| func_001E2DE0 | 0x001E2DE0 | 0x228 | game | size | 67 | [unk/unk_1D5B30/func_001E2DE0.c](unk/unk_1D5B30/func_001E2DE0.c) |
| func_00237EC0 | 0x00237EC0 | 0x228 | game | size | 67 | [battle/char_light/func_00237EC0.c](battle/char_light/func_00237EC0.c) |
| func_002C2560 | 0x002C2560 | 0x244 | game | size | 67 | [story/str_status/func_002C2560.c](story/str_status/func_002C2560.c) |
| func_0029C730 | 0x0029C730 | 0x278 | game | size | 67 | [story/str_map/func_0029C730.c](story/str_map/func_0029C730.c) |
| func_00212730 | 0x00212730 | 0x280 | game | size | 67 | [unk/unk_20A4D0/func_00212730.c](unk/unk_20A4D0/func_00212730.c) |
| func_00139330 | 0x00139330 | 0x2D4 | game | size | 67 | [sys/unk_137EE0/func_00139330.c](sys/unk_137EE0/func_00139330.c) |
| func_0019D148 | 0x0019D148 | 0x14 | cri | size | 68 | [cri/sfd_00194D48/func_0019D148.c](cri/sfd_00194D48/func_0019D148.c) |
| func_00161A90 | 0x00161A90 | 0x30 | cri | size | 68 | [cri/adx_001619A0/func_00161A90.c](cri/adx_001619A0/func_00161A90.c) |
| func_00161AF0 | 0x00161AF0 | 0x30 | cri | size | 68 | [cri/adx_001619A0/func_00161AF0.c](cri/adx_001619A0/func_00161AF0.c) |
| func_0013B190 | 0x0013B190 | 0x11C | game | size | 68 | [sys/amMotion/func_0013B190.c](sys/amMotion/func_0013B190.c) |
| func_00217200 | 0x00217200 | 0x184 | game | size | 68 | [unk/unk_20A4D0/func_00217200.c](unk/unk_20A4D0/func_00217200.c) |
| func_00240A90 | 0x00240A90 | 0x1A0 | game | size | 68 | [unk/unk_23A890/func_00240A90.c](unk/unk_23A890/func_00240A90.c) |
| func_001AEBF0 | 0x001AEBF0 | 0x1BC | game | size | 68 | [battle/btl_main/func_001AEBF0.c](battle/btl_main/func_001AEBF0.c) |
| func_0011AFE0 | 0x0011AFE0 | 0x1CC | sdk | size | 68 | [sdk/libmc/func_0011AFE0.c](sdk/libmc/func_0011AFE0.c) |
| func_00305CB0 | 0x00305CB0 | 0x1E0 | game | size | 68 | [menu/mn_TourMap/func_00305CB0.c](menu/mn_TourMap/func_00305CB0.c) |
| func_001E1E80 | 0x001E1E80 | 0x1E4 | game | size | 68 | [unk/unk_1D5B30/func_001E1E80.c](unk/unk_1D5B30/func_001E1E80.c) |
| func_0027EE70 | 0x0027EE70 | 0x1F4 | game | size | 68 | [menu/mn_charasel/func_0027EE70.c](menu/mn_charasel/func_0027EE70.c) |
| func_0027FEB0 | 0x0027FEB0 | 0x238 | game | size | 68 | [menu/mn_charasel/func_0027FEB0.c](menu/mn_charasel/func_0027FEB0.c) |
| func_00300D20 | 0x00300D20 | 0x248 | game | size | 68 | [unk/unk_2FAFF0/func_00300D20.c](unk/unk_2FAFF0/func_00300D20.c) |
| func_002B5620 | 0x002B5620 | 0x27C | game | size | 68 | [unk/unk_2B5460/func_002B5620.c](unk/unk_2B5460/func_002B5620.c) |
| func_001E53B0 | 0x001E53B0 | 0x150 | game | size | 69 | [unk/unk_1D5B30/func_001E53B0.c](unk/unk_1D5B30/func_001E53B0.c) |
| func_002B5030 | 0x002B5030 | 0x1B0 | game | size | 69 | [unk/unk_2B2C20/func_002B5030.c](unk/unk_2B2C20/func_002B5030.c) |
| func_0020D7C0 | 0x0020D7C0 | 0x1E4 | game | size | 69 | [unk/unk_20A4D0/func_0020D7C0.c](unk/unk_20A4D0/func_0020D7C0.c) |
| func_002BB2A0 | 0x002BB2A0 | 0x1F0 | game | size | 69 | [unk/unk_2B98D0/func_002BB2A0.c](unk/unk_2B98D0/func_002BB2A0.c) |
| func_002A9080 | 0x002A9080 | 0x224 | game | size | 69 | [battle/scr_func/func_002A9080.c](battle/scr_func/func_002A9080.c) |
| func_00283710 | 0x00283710 | 0x2E8 | game | size | 69 | [menu/skl_sheet/func_00283710.c](menu/skl_sheet/func_00283710.c) |
| func_001D2F10 | 0x001D2F10 | 0x15C | game | size | 70 | [battle/char_mant/func_001D2F10.c](battle/char_mant/func_001D2F10.c) |
| func_002A5420 | 0x002A5420 | 0x160 | game | size | 70 | [story/evt_scrp/func_002A5420.c](story/evt_scrp/func_002A5420.c) |
| func_00219EA0 | 0x00219EA0 | 0x184 | game | size | 70 | [unk/unk_219A80/func_00219EA0.c](unk/unk_219A80/func_00219EA0.c) |
| func_00287110 | 0x00287110 | 0x184 | game | size | 70 | [menu/mn_StageSel/func_00287110.c](menu/mn_StageSel/func_00287110.c) |
| func_0027EA60 | 0x0027EA60 | 0x1AC | game | size | 70 | [menu/mn_charasel/func_0027EA60.c](menu/mn_charasel/func_0027EA60.c) |
| func_001AFFA0 | 0x001AFFA0 | 0x1C0 | game | size | 70 | [battle/btl_main/func_001AFFA0.c](battle/btl_main/func_001AFFA0.c) |
| func_003081F0 | 0x003081F0 | 0x1E4 | game | size | 70 | [menu/mn_ArenaCharasel_pvsc/func_003081F0.c](menu/mn_ArenaCharasel_pvsc/func_003081F0.c) |
| func_002401A0 | 0x002401A0 | 0x1E8 | game | size | 70 | [unk/unk_23A890/func_002401A0.c](unk/unk_23A890/func_002401A0.c) |
| func_00270660 | 0x00270660 | 0x204 | game | size | 70 | [unk/unk_26FF30/func_00270660.c](unk/unk_26FF30/func_00270660.c) |
| func_001B5BC0 | 0x004689D0 | 0x0 | game | size | 71 | [battle/btl_main/func_001B5BC0.c](battle/btl_main/func_001B5BC0.c) |
| func_0029F180 | 0x0029F180 | 0x1D0 | game | size | 71 | [battle/char_disp/func_0029F180.c](battle/char_disp/func_0029F180.c) |
| func_002B8070 | 0x002B8070 | 0x1F0 | game | size | 71 | [menu/mn_csmodel/func_002B8070.c](menu/mn_csmodel/func_002B8070.c) |
| func_002D7DC0 | 0x002D7DC0 | 0x1F4 | game | size | 71 | [unk/unk_2D2530/func_002D7DC0.c](unk/unk_2D2530/func_002D7DC0.c) |
| func_001F7490 | 0x001F7490 | 0x200 | game | size | 71 | [battle/btb_draw/func_001F7490.c](battle/btb_draw/func_001F7490.c) |
| func_002CD5F0 | 0x002CD5F0 | 0x220 | game | size | 71 | [unk/unk_2CD5F0/func_002CD5F0.c](unk/unk_2CD5F0/func_002CD5F0.c) |
| func_001C90D0 | 0x001C90D0 | 0x240 | game | size | 71 | [battle/btl_main/func_001C90D0.c](battle/btl_main/func_001C90D0.c) |
| func_001B0810 | 0x001B0810 | 0x2F8 | game | size | 71 | [battle/btl_main/func_001B0810.c](battle/btl_main/func_001B0810.c) |
| func_002A2730 | 0x002A2730 | 0x158 | game | size | 72 | [story/evt_scrp/func_002A2730.c](story/evt_scrp/func_002A2730.c) |
| func_002E4BF0 | 0x002E4BF0 | 0x168 | game | size | 72 | [unk/unk_2E4030/func_002E4BF0.c](unk/unk_2E4030/func_002E4BF0.c) |
| func_002DF740 | 0x002DF740 | 0x1F0 | game | size | 72 | [menu/mn_option/func_002DF740.c](menu/mn_option/func_002DF740.c) |
| func_002569E0 | 0x002569E0 | 0x208 | game | size | 72 | [battle/skill_cmd/func_002569E0.c](battle/skill_cmd/func_002569E0.c) |
| func_00237BB0 | 0x00237BB0 | 0x248 | game | size | 72 | [battle/char_light/func_00237BB0.c](battle/char_light/func_00237BB0.c) |
| func_0028AAA0 | 0x0028AAA0 | 0x278 | game | size | 72 | [sys/mc_opr/func_0028AAA0.c](sys/mc_opr/func_0028AAA0.c) |
| func_00244280 | 0x00244280 | 0x18C | game | size | 73 | [unk/unk_23A890/func_00244280.c](unk/unk_23A890/func_00244280.c) |
| func_001A6AD0 | 0x001A6AD0 | 0x198 | game | size | 73 | [battle/btl_cmd/func_001A6AD0.c](battle/btl_cmd/func_001A6AD0.c) |
| func_002420F0 | 0x002420F0 | 0x1A0 | game | size | 73 | [unk/unk_23A890/func_002420F0.c](unk/unk_23A890/func_002420F0.c) |
| func_00243BD0 | 0x00243BD0 | 0x1A8 | game | size | 73 | [unk/unk_23A890/func_00243BD0.c](unk/unk_23A890/func_00243BD0.c) |
| func_001D3B60 | 0x001D3B60 | 0x1B0 | game | size | 73 | [battle/char_mant/func_001D3B60.c](battle/char_mant/func_001D3B60.c) |
| func_00251A60 | 0x00251A60 | 0x1BC | game | size | 73 | [battle/skill_cmd/func_00251A60.c](battle/skill_cmd/func_00251A60.c) |
| func_001BEE60 | 0x001BEE60 | 0x228 | game | size | 73 | [battle/btl_main/func_001BEE60.c](battle/btl_main/func_001BEE60.c) |
| func_00239480 | 0x00239480 | 0x298 | game | size | 73 | [battle/char_light/func_00239480.c](battle/char_light/func_00239480.c) |
| func_00285AA0 | 0x00285AA0 | 0x168 | game | size | 74 | [unk/unk_284AA0/func_00285AA0.c](unk/unk_284AA0/func_00285AA0.c) |
| func_001FD300 | 0x001FD300 | 0x220 | game | size | 74 | [unk/unk_1FB760/func_001FD300.c](unk/unk_1FB760/func_001FD300.c) |
| func_001B2AA0 | 0x004687F0 | 0x0 | game | size | 75 | [battle/btl_main/func_001B2AA0.c](battle/btl_main/func_001B2AA0.c) |
| func_00265800 | 0x00265800 | 0x1DC | game | size | 75 | [menu/mn_dataload/func_00265800.c](menu/mn_dataload/func_00265800.c) |
| func_001DD680 | 0x001DD680 | 0x1F8 | game | size | 75 | [unk/unk_1D5B30/func_001DD680.c](unk/unk_1D5B30/func_001DD680.c) |
| func_001C4000 | 0x001C4000 | 0x244 | game | size | 75 | [battle/btl_main/func_001C4000.c](battle/btl_main/func_001C4000.c) |
| func_001D80A0 | 0x001D80A0 | 0x27C | game | size | 75 | [unk/unk_1D5B30/func_001D80A0.c](unk/unk_1D5B30/func_001D80A0.c) |
| func_001C3500 | 0x001C3500 | 0x2E8 | game | size | 75 | [battle/btl_main/func_001C3500.c](battle/btl_main/func_001C3500.c) |
| func_001BC4D0 | 0x001BC4D0 | 0x2F0 | game | size | 75 | [battle/btl_main/func_001BC4D0.c](battle/btl_main/func_001BC4D0.c) |
| func_002B06B0 | 0x002B06B0 | 0x384 | game | size | 75 | [unk/unk_2AF860/func_002B06B0.c](unk/unk_2AF860/func_002B06B0.c) |
| func_001923E8 | 0x001923E8 | 0x11C | cri | size | 76 | [cri/sfd/func_001923E8.c](cri/sfd/func_001923E8.c) |
| func_002878B0 | 0x002878B0 | 0x1BC | game | size | 76 | [menu/mn_StageSel/func_002878B0.c](menu/mn_StageSel/func_002878B0.c) |
| func_00300800 | 0x00300800 | 0x1D4 | game | size | 76 | [unk/unk_2FAFF0/func_00300800.c](unk/unk_2FAFF0/func_00300800.c) |
| func_0030BD30 | 0x0030BD30 | 0x1D8 | game | size | 76 | [unk/unk_30B130/func_0030BD30.c](unk/unk_30B130/func_0030BD30.c) |
| func_002A2C70 | 0x002A2C70 | 0x1E0 | game | size | 76 | [story/evt_scrp/func_002A2C70.c](story/evt_scrp/func_002A2C70.c) |
| func_001CA180 | 0x001CA180 | 0x1F0 | game | size | 76 | [battle/char_body/func_001CA180.c](battle/char_body/func_001CA180.c) |
| func_002F4880 | 0x002F4880 | 0x1F0 | game | size | 76 | [menu/mn_ipsyswnd/func_002F4880.c](menu/mn_ipsyswnd/func_002F4880.c) |
| func_0023E570 | 0x0023E570 | 0x228 | game | size | 76 | [unk/unk_23A890/func_0023E570.c](unk/unk_23A890/func_0023E570.c) |
| func_002FC800 | 0x002FC800 | 0x1F0 | game | size | 77 | [unk/unk_2FAFF0/func_002FC800.c](unk/unk_2FAFF0/func_002FC800.c) |
| func_001E55C0 | 0x001E55C0 | 0x1F8 | game | size | 77 | [unk/unk_1D5B30/func_001E55C0.c](unk/unk_1D5B30/func_001E55C0.c) |
| func_002C6700 | 0x002C6700 | 0x22C | game | size | 77 | [unk/unk_2C41C0/func_002C6700.c](unk/unk_2C41C0/func_002C6700.c) |
| func_002DD8A0 | 0x002DD8A0 | 0x230 | game | size | 77 | [unk/unk_2DB970/func_002DD8A0.c](unk/unk_2DB970/func_002DD8A0.c) |
| func_0026E950 | 0x0026E950 | 0x31C | game | size | 77 | [menu/ess_main_2/func_0026E950.c](menu/ess_main_2/func_0026E950.c) |
| func_00228240 | 0x00228240 | 0x1CC | game | size | 78 | [battle/a2d/func_00228240.c](battle/a2d/func_00228240.c) |
| func_002925A0 | 0x002925A0 | 0x1DC | game | size | 78 | [unk/unk_2918A0/func_002925A0.c](unk/unk_2918A0/func_002925A0.c) |
| func_002BE530 | 0x002BE530 | 0x1E0 | game | size | 78 | [story/str_status/func_002BE530.c](story/str_status/func_002BE530.c) |
| func_00289BE0 | 0x00289BE0 | 0x208 | game | size | 78 | [sys/mc_opr/func_00289BE0.c](sys/mc_opr/func_00289BE0.c) |
| func_0024C2C0 | 0x0024C2C0 | 0x214 | game | size | 78 | [battle/skill_cmd/func_0024C2C0.c](battle/skill_cmd/func_0024C2C0.c) |
| func_002E1BD0 | 0x002E1BD0 | 0x218 | game | size | 78 | [menu/mn_option_2/func_002E1BD0.c](menu/mn_option_2/func_002E1BD0.c) |
| func_002F0960 | 0x002F0960 | 0x194 | game | size | 79 | [menu/mn_InputPass/func_002F0960.c](menu/mn_InputPass/func_002F0960.c) |
| func_002F2AF0 | 0x002F2AF0 | 0x194 | game | size | 79 | [menu/mn_InputPass/func_002F2AF0.c](menu/mn_InputPass/func_002F2AF0.c) |
| func_002DE2C0 | 0x002DE2C0 | 0x1A0 | game | size | 79 | [menu/mn_option/func_002DE2C0.c](menu/mn_option/func_002DE2C0.c) |
| func_002ECE20 | 0x002ECE20 | 0x1AC | game | size | 79 | [unk/unk_2ECB90/func_002ECE20.c](unk/unk_2ECB90/func_002ECE20.c) |
| func_001EF510 | 0x001EF510 | 0x220 | game | size | 79 | [battle/btb_draw/func_001EF510.c](battle/btb_draw/func_001EF510.c) |
| func_001F7990 | 0x001F7990 | 0x254 | game | size | 79 | [battle/btb_draw/func_001F7990.c](battle/btb_draw/func_001F7990.c) |
| func_001AE980 | 0x001AE980 | 0x264 | game | size | 79 | [battle/btl_main/func_001AE980.c](battle/btl_main/func_001AE980.c) |
| func_002682E0 | 0x002682E0 | 0x264 | game | size | 79 | [menu/mn_vsmode/func_002682E0.c](menu/mn_vsmode/func_002682E0.c) |
| func_00288BF0 | 0x00288BF0 | 0x280 | game | size | 79 | [sys/mc_opr/func_00288BF0.c](sys/mc_opr/func_00288BF0.c) |
| func_00189740 | 0x00189740 | 0xD8 | cri | size | 80 | [cri/sfd/func_00189740.c](cri/sfd/func_00189740.c) |
| func_0030B130 | 0x0030B130 | 0x1AC | game | size | 80 | [unk/unk_30B130/func_0030B130.c](unk/unk_30B130/func_0030B130.c) |
| amTask_Init | 0x00144CE0 | 0x1E0 | game | size | 80 | [sys/unk_144CE0/amTask_Init.c](sys/unk_144CE0/amTask_Init.c) |
| func_002BB650 | 0x002BB650 | 0x240 | game | size | 80 | [unk/unk_2B98D0/func_002BB650.c](unk/unk_2B98D0/func_002BB650.c) |
| func_002DB3B0 | 0x002DB3B0 | 0x244 | game | size | 80 | [unk/unk_2D9510/func_002DB3B0.c](unk/unk_2D9510/func_002DB3B0.c) |
| func_00244A60 | 0x00244A60 | 0x260 | game | size | 80 | [unk/unk_23A890/func_00244A60.c](unk/unk_23A890/func_00244A60.c) |
| func_001D9480 | 0x001D9480 | 0x264 | game | size | 80 | [unk/unk_1D5B30/func_001D9480.c](unk/unk_1D5B30/func_001D9480.c) |
| func_002EAC30 | 0x002EAC30 | 0x278 | game | size | 80 | [unk/unk_2EA0B0/func_002EAC30.c](unk/unk_2EA0B0/func_002EAC30.c) |
| ADXB_DecodeHeaderAdx | 0x00150830 | 0x2EC | cri | size | 80 | [cri/adx_0014EF28/ADXB_DecodeHeaderAdx.c](cri/adx_0014EF28/ADXB_DecodeHeaderAdx.c) |
| func_00224680 | 0x00224680 | 0x324 | game | size | 80 | [unk/unk_21D260/func_00224680.c](unk/unk_21D260/func_00224680.c) |
| func_0012FBF0 | 0x0012FBF0 | 0x354 | game | size | 80 | [sys/amDraw3d/func_0012FBF0.c](sys/amDraw3d/func_0012FBF0.c) |
| func_001D3E10 | 0x001D3E10 | 0x1A4 | game | size | 81 | [battle/char_parts/func_001D3E10.c](battle/char_parts/func_001D3E10.c) |
| func_002AA980 | 0x002AA980 | 0x1B8 | game | size | 81 | [battle/scr_func/func_002AA980.c](battle/scr_func/func_002AA980.c) |
| func_003053D0 | 0x003053D0 | 0x1C0 | game | size | 81 | [menu/mn_TourMap/func_003053D0.c](menu/mn_TourMap/func_003053D0.c) |
| func_001F4C20 | 0x001F4C20 | 0x244 | game | size | 81 | [battle/btb_draw/func_001F4C20.c](battle/btb_draw/func_001F4C20.c) |
| func_002A94B0 | 0x002A94B0 | 0x2A8 | game | size | 81 | [battle/scr_func/func_002A94B0.c](battle/scr_func/func_002A94B0.c) |
| func_001C24C0 | 0x001C24C0 | 0x1D8 | game | size | 82 | [battle/btl_main/func_001C24C0.c](battle/btl_main/func_001C24C0.c) |
| func_0027D820 | 0x0027D820 | 0x1D8 | game | size | 82 | [menu/mn_charasel/func_0027D820.c](menu/mn_charasel/func_0027D820.c) |
| func_0027EC10 | 0x0027EC10 | 0x254 | game | size | 82 | [menu/mn_charasel/func_0027EC10.c](menu/mn_charasel/func_0027EC10.c) |
| func_001B1C00 | 0x001B1C00 | 0x274 | game | size | 82 | [battle/btl_main/func_001B1C00.c](battle/btl_main/func_001B1C00.c) |
| func_002C1320 | 0x002C1320 | 0x2C0 | game | size | 82 | [story/str_status/func_002C1320.c](story/str_status/func_002C1320.c) |
| func_0024AA00 | 0x0024AA00 | 0x2E0 | game | size | 82 | [battle/skill_cmd/func_0024AA00.c](battle/skill_cmd/func_0024AA00.c) |
| func_003077E0 | 0x003077E0 | 0x304 | game | size | 82 | [menu/mn_ArenaCharasel_pvsc/func_003077E0.c](menu/mn_ArenaCharasel_pvsc/func_003077E0.c) |
| func_00251F30 | 0x00251F30 | 0x478 | game | size | 82 | [battle/skill_cmd/func_00251F30.c](battle/skill_cmd/func_00251F30.c) |
| func_001B3720 | 0x00468880 | 0x0 | game | size | 83 | [battle/btl_main/func_001B3720.c](battle/btl_main/func_001B3720.c) |
| func_001B7A30 | 0x00468B80 | 0x0 | game | size | 83 | [battle/btl_main/func_001B7A30.c](battle/btl_main/func_001B7A30.c) |
| func_00217DD0 | 0x00217DD0 | 0x19C | game | size | 83 | [unk/unk_20A4D0/func_00217DD0.c](unk/unk_20A4D0/func_00217DD0.c) |
| func_0021A620 | 0x0021A620 | 0x1A8 | game | size | 83 | [unk/unk_21A4C0/func_0021A620.c](unk/unk_21A4C0/func_0021A620.c) |
| func_002735D0 | 0x002735D0 | 0x1E4 | game | size | 83 | [menu/ess_shop/func_002735D0.c](menu/ess_shop/func_002735D0.c) |
| func_0028BEB0 | 0x0028BEB0 | 0x240 | game | size | 83 | [sys/mc_opr/func_0028BEB0.c](sys/mc_opr/func_0028BEB0.c) |
| func_0027CF80 | 0x0027CF80 | 0x244 | game | size | 83 | [menu/mn_charasel/func_0027CF80.c](menu/mn_charasel/func_0027CF80.c) |
| func_002A5B00 | 0x002A5B00 | 0x264 | game | size | 83 | [story/evt_scrp/func_002A5B00.c](story/evt_scrp/func_002A5B00.c) |
| func_00293250 | 0x00293250 | 0x298 | game | size | 83 | [unk/unk_2918A0/func_00293250.c](unk/unk_2918A0/func_00293250.c) |
| func_001DF1F0 | 0x001DF1F0 | 0x228 | game | size | 84 | [unk/unk_1D5B30/func_001DF1F0.c](unk/unk_1D5B30/func_001DF1F0.c) |
| func_0019CA98 | 0x0019CA98 | 0x234 | cri | size | 84 | [cri/sfd_00194D48/func_0019CA98.c](cri/sfd_00194D48/func_0019CA98.c) |
| func_00103238 | 0x00103238 | 0x240 | sdk | size | 84 | [sdk/libmpeg/func_00103238.c](sdk/libmpeg/func_00103238.c) |
| func_002FD560 | 0x002FD560 | 0x278 | game | size | 84 | [unk/unk_2FAFF0/func_002FD560.c](unk/unk_2FAFF0/func_002FD560.c) |
| func_0028B720 | 0x0028B720 | 0x290 | game | size | 84 | [sys/mc_opr/func_0028B720.c](sys/mc_opr/func_0028B720.c) |
| func_00273330 | 0x00273330 | 0x298 | game | size | 84 | [menu/ess_shop/func_00273330.c](menu/ess_shop/func_00273330.c) |
| func_0030A120 | 0x0030A120 | 0x2A0 | game | size | 84 | [menu/mn_ArenaCharasel_cvsc/func_0030A120.c](menu/mn_ArenaCharasel_cvsc/func_0030A120.c) |
| func_001EFDB0 | 0x001EFDB0 | 0x4C8 | game | size | 84 | [battle/btb_draw/func_001EFDB0.c](battle/btb_draw/func_001EFDB0.c) |
| func_002800F0 | 0x002800F0 | 0x1E8 | game | size | 85 | [menu/mn_charasel/func_002800F0.c](menu/mn_charasel/func_002800F0.c) |
| func_001F7210 | 0x001F7210 | 0x258 | game | size | 85 | [battle/btb_draw/func_001F7210.c](battle/btb_draw/func_001F7210.c) |
| func_002BBA30 | 0x002BBA30 | 0x280 | game | size | 85 | [unk/unk_2B98D0/func_002BBA30.c](unk/unk_2B98D0/func_002BBA30.c) |
| func_0022F660 | 0x0022F660 | 0x2A0 | game | size | 85 | [unk/unk_22E0B0/func_0022F660.c](unk/unk_22E0B0/func_0022F660.c) |
| func_0029B290 | 0x0029B290 | 0x2BC | game | size | 85 | [story/str_map/func_0029B290.c](story/str_map/func_0029B290.c) |
| func_001BA570 | 0x00468D30 | 0x0 | game | size | 86 | [battle/btl_main/func_001BA570.c](battle/btl_main/func_001BA570.c) |
| func_00142120 | 0x00142120 | 0x15C | game | size | 86 | [sys/amSofdec/func_00142120.c](sys/amSofdec/func_00142120.c) |
| func_0021C080 | 0x0021C080 | 0x1D0 | game | size | 86 | [unk/unk_21B130/func_0021C080.c](unk/unk_21B130/func_0021C080.c) |
| func_00281870 | 0x00281870 | 0x1D0 | game | size | 86 | [unk/unk_280730/func_00281870.c](unk/unk_280730/func_00281870.c) |
| func_001AC490 | 0x001AC490 | 0x1D4 | game | size | 86 | [battle/btl_main/func_001AC490.c](battle/btl_main/func_001AC490.c) |
| func_002FB170 | 0x002FB170 | 0x348 | game | size | 86 | [unk/unk_2FAFF0/func_002FB170.c](unk/unk_2FAFF0/func_002FB170.c) |
| func_00309250 | 0x00309250 | 0x350 | game | size | 86 | [menu/mn_ArenaCharasel_pvsp/func_00309250.c](menu/mn_ArenaCharasel_pvsp/func_00309250.c) |
| func_001F8ED0 | 0x001F8ED0 | 0x39C | game | size | 86 | [battle/btb_main/func_001F8ED0.c](battle/btb_main/func_001F8ED0.c) |
| func_0020D120 | 0x0020D120 | 0x164 | game | size | 87 | [unk/unk_20A4D0/func_0020D120.c](unk/unk_20A4D0/func_0020D120.c) |
| func_0020D290 | 0x0020D290 | 0x164 | game | size | 87 | [unk/unk_20A4D0/func_0020D290.c](unk/unk_20A4D0/func_0020D290.c) |
| func_002EA4A0 | 0x002EA4A0 | 0x214 | game | size | 87 | [unk/unk_2EA0B0/func_002EA4A0.c](unk/unk_2EA0B0/func_002EA4A0.c) |
| func_002F0160 | 0x002F0160 | 0x240 | game | size | 87 | [menu/mn_ArenaList/func_002F0160.c](menu/mn_ArenaList/func_002F0160.c) |
| func_00255E10 | 0x00255E10 | 0x28C | game | size | 87 | [battle/skill_cmd/func_00255E10.c](battle/skill_cmd/func_00255E10.c) |
| func_00202FA0 | 0x00202FA0 | 0x2B0 | game | size | 87 | [unk/unk_1FB760/func_00202FA0.c](unk/unk_1FB760/func_00202FA0.c) |
| func_00193478 | 0x00193478 | 0xA4 | cri | size | 88 | [cri/sfd/func_00193478.c](cri/sfd/func_00193478.c) |
| func_00190E40 | 0x00190E40 | 0xB4 | cri | size | 88 | [cri/sfd/func_00190E40.c](cri/sfd/func_00190E40.c) |
| func_002668F0 | 0x002668F0 | 0x1C4 | game | size | 88 | [menu/mn_dataload/func_002668F0.c](menu/mn_dataload/func_002668F0.c) |
| func_002E44A0 | 0x002E44A0 | 0x1FC | game | size | 88 | [unk/unk_2E4030/func_002E44A0.c](unk/unk_2E4030/func_002E44A0.c) |
| func_00112C28 | 0x00112C28 | 0x208 | sdk | size | 88 | [sdk/libkernl_00111C50/func_00112C28.c](sdk/libkernl_00111C50/func_00112C28.c) |
| func_00112E30 | 0x00112E30 | 0x208 | sdk | size | 88 | [sdk/libkernl_00111C50/func_00112E30.c](sdk/libkernl_00111C50/func_00112E30.c) |
| func_00113238 | 0x00113238 | 0x224 | sdk | size | 88 | [sdk/libkernl_00111C50/func_00113238.c](sdk/libkernl_00111C50/func_00113238.c) |
| func_002DD2B0 | 0x002DD2B0 | 0x260 | game | size | 88 | [unk/unk_2DB970/func_002DD2B0.c](unk/unk_2DB970/func_002DD2B0.c) |
| func_001AD2E0 | 0x001AD2E0 | 0x288 | game | size | 88 | [battle/btl_main/func_001AD2E0.c](battle/btl_main/func_001AD2E0.c) |
| func_002DF930 | 0x002DF930 | 0x288 | game | size | 88 | [menu/mn_option/func_002DF930.c](menu/mn_option/func_002DF930.c) |
| func_0017B7D0 | 0x0017B7D0 | 0x4A4 | cri | size | 88 | [cri/mpv/func_0017B7D0.c](cri/mpv/func_0017B7D0.c) |
| func_00132DF0 | 0x00132DF0 | 0x16C | game | size | 89 | [sys/unk_131700/func_00132DF0.c](sys/unk_131700/func_00132DF0.c) |
| func_00285330 | 0x00285330 | 0x1FC | game | size | 89 | [unk/unk_284AA0/func_00285330.c](unk/unk_284AA0/func_00285330.c) |
| func_002F5260 | 0x002F5260 | 0x218 | game | size | 89 | [menu/mn_ipsyswnd/func_002F5260.c](menu/mn_ipsyswnd/func_002F5260.c) |
| func_00267090 | 0x00267090 | 0x264 | game | size | 89 | [menu/mn_dataload/func_00267090.c](menu/mn_dataload/func_00267090.c) |
| func_0024F260 | 0x0024F260 | 0x268 | game | size | 89 | [battle/skill_cmd/func_0024F260.c](battle/skill_cmd/func_0024F260.c) |
| func_0028A730 | 0x0028A730 | 0x2A8 | game | size | 89 | [sys/mc_opr/func_0028A730.c](sys/mc_opr/func_0028A730.c) |
| func_00233850 | 0x00233850 | 0x2C8 | game | size | 89 | [unk/unk_231E70/func_00233850.c](unk/unk_231E70/func_00233850.c) |
| func_00141CF0 | 0x00141CF0 | 0x178 | game | size | 90 | [sys/amSofdec/func_00141CF0.c](sys/amSofdec/func_00141CF0.c) |
| func_001DD880 | 0x001DD880 | 0x1AC | game | size | 90 | [unk/unk_1D5B30/func_001DD880.c](unk/unk_1D5B30/func_001DD880.c) |
| func_001CF2C0 | 0x001CF2C0 | 0x1E0 | game | size | 90 | [unk/unk_1CBD90/func_001CF2C0.c](unk/unk_1CBD90/func_001CF2C0.c) |
| func_002E7400 | 0x002E7400 | 0x1F0 | game | size | 90 | [menu/mn_Logomark/func_002E7400.c](menu/mn_Logomark/func_002E7400.c) |
| func_002CE0A0 | 0x002CE0A0 | 0x1F4 | game | size | 90 | [unk/unk_2CD5F0/func_002CE0A0.c](unk/unk_2CD5F0/func_002CE0A0.c) |
| func_002D2E50 | 0x002D2E50 | 0x1FC | game | size | 90 | [unk/unk_2D2530/func_002D2E50.c](unk/unk_2D2530/func_002D2E50.c) |
| func_002FBAE0 | 0x002FBAE0 | 0x2A4 | game | size | 90 | [unk/unk_2FAFF0/func_002FBAE0.c](unk/unk_2FAFF0/func_002FBAE0.c) |
| func_002904C0 | 0x002904C0 | 0x2B8 | game | size | 90 | [story/str_bg/func_002904C0.c](story/str_bg/func_002904C0.c) |
| func_001DF8F0 | 0x001DF8F0 | 0x198 | game | size | 91 | [unk/unk_1D5B30/func_001DF8F0.c](unk/unk_1D5B30/func_001DF8F0.c) |
| func_002700E0 | 0x002700E0 | 0x1B4 | game | size | 91 | [unk/unk_26FF30/func_002700E0.c](unk/unk_26FF30/func_002700E0.c) |
| func_00291BF0 | 0x00291BF0 | 0x234 | game | size | 91 | [unk/unk_2918A0/func_00291BF0.c](unk/unk_2918A0/func_00291BF0.c) |
| func_001B70B0 | 0x001B70B0 | 0x2B0 | game | size | 91 | [battle/btl_main/func_001B70B0.c](battle/btl_main/func_001B70B0.c) |
| func_001BDB20 | 0x001BDB20 | 0x308 | game | size | 91 | [battle/btl_main/func_001BDB20.c](battle/btl_main/func_001BDB20.c) |
| func_002CC840 | 0x002CC840 | 0x328 | game | size | 91 | [unk/unk_2CC840/func_002CC840.c](unk/unk_2CC840/func_002CC840.c) |
| func_00217F70 | 0x00217F70 | 0x230 | game | size | 92 | [unk/unk_20A4D0/func_00217F70.c](unk/unk_20A4D0/func_00217F70.c) |
| func_002A0D70 | 0x002A0D70 | 0x2A4 | game | size | 92 | [sys/cnv_sys/func_002A0D70.c](sys/cnv_sys/func_002A0D70.c) |
| func_002CED60 | 0x002CED60 | 0x2B0 | game | size | 92 | [unk/unk_2CD5F0/func_002CED60.c](unk/unk_2CD5F0/func_002CED60.c) |
| func_002175A0 | 0x002175A0 | 0x2D0 | game | size | 92 | [unk/unk_20A4D0/func_002175A0.c](unk/unk_20A4D0/func_002175A0.c) |
| func_002587F0 | 0x002587F0 | 0x2D0 | game | size | 92 | [battle/skill_cmd/func_002587F0.c](battle/skill_cmd/func_002587F0.c) |
| func_00179400 | 0x00179400 | 0x45C | cri | size | 92 | [cri/mpv/func_00179400.c](cri/mpv/func_00179400.c) |
| func_002EF1A0 | 0x002EF1A0 | 0x1F0 | game | size | 93 | [menu/mn_ArenaList/func_002EF1A0.c](menu/mn_ArenaList/func_002EF1A0.c) |
| func_0026D6A0 | 0x0026D6A0 | 0x1FC | game | size | 93 | [menu/ess_main/func_0026D6A0.c](menu/ess_main/func_0026D6A0.c) |
| func_001E28F0 | 0x001E28F0 | 0x210 | game | size | 93 | [unk/unk_1D5B30/func_001E28F0.c](unk/unk_1D5B30/func_001E28F0.c) |
| func_0024E4D0 | 0x0024E4D0 | 0x288 | game | size | 93 | [battle/skill_cmd/func_0024E4D0.c](battle/skill_cmd/func_0024E4D0.c) |
| func_0028D1E0 | 0x0028D1E0 | 0x2F0 | game | size | 93 | [sys/mc_opr/func_0028D1E0.c](sys/mc_opr/func_0028D1E0.c) |
| func_001BDF80 | 0x001BDF80 | 0x2F8 | game | size | 93 | [battle/btl_main/func_001BDF80.c](battle/btl_main/func_001BDF80.c) |
| func_00138070 | 0x00138070 | 0x304 | game | size | 93 | [sys/unk_137EE0/func_00138070.c](sys/unk_137EE0/func_00138070.c) |
| func_001B9800 | 0x00468CD0 | 0x0 | game | size | 94 | [battle/btl_main/func_001B9800.c](battle/btl_main/func_001B9800.c) |
| func_00249D50 | 0x00249D50 | 0x200 | game | size | 94 | [battle/skill_cmd/func_00249D50.c](battle/skill_cmd/func_00249D50.c) |
| func_0027F680 | 0x0027F680 | 0x208 | game | size | 94 | [menu/mn_charasel/func_0027F680.c](menu/mn_charasel/func_0027F680.c) |
| func_00286A30 | 0x00286A30 | 0x220 | game | size | 94 | [menu/mn_StageSel/func_00286A30.c](menu/mn_StageSel/func_00286A30.c) |
| func_001F34E0 | 0x001F34E0 | 0x25C | game | size | 94 | [battle/btb_draw/func_001F34E0.c](battle/btb_draw/func_001F34E0.c) |
| func_002F44E0 | 0x002F44E0 | 0x298 | game | size | 94 | [menu/mn_ipsyswnd/func_002F44E0.c](menu/mn_ipsyswnd/func_002F44E0.c) |
| func_0020E8F0 | 0x0020E8F0 | 0x180 | game | size | 95 | [unk/unk_20A4D0/func_0020E8F0.c](unk/unk_20A4D0/func_0020E8F0.c) |
| func_0020A7F0 | 0x0020A7F0 | 0x228 | game | size | 95 | [unk/unk_20A4D0/func_0020A7F0.c](unk/unk_20A4D0/func_0020A7F0.c) |
| func_0024ECE0 | 0x0024ECE0 | 0x268 | game | size | 95 | [battle/skill_cmd/func_0024ECE0.c](battle/skill_cmd/func_0024ECE0.c) |
| func_002D0530 | 0x002D0530 | 0x300 | game | size | 95 | [unk/unk_2D04B0/func_002D0530.c](unk/unk_2D04B0/func_002D0530.c) |
| func_001B3FE0 | 0x00468910 | 0x0 | game | size | 96 | [battle/btl_main/func_001B3FE0.c](battle/btl_main/func_001B3FE0.c) |
| func_00227880 | 0x00227880 | 0x1B0 | game | size | 96 | [battle/a2d/func_00227880.c](battle/a2d/func_00227880.c) |
| func_002AAD80 | 0x002AAD80 | 0x1B0 | game | size | 96 | [battle/scr_func/func_002AAD80.c](battle/scr_func/func_002AAD80.c) |
| func_0027F290 | 0x0027F290 | 0x208 | game | size | 96 | [menu/mn_charasel/func_0027F290.c](menu/mn_charasel/func_0027F290.c) |
| func_002EDC50 | 0x002EDC50 | 0x234 | game | size | 96 | [menu/mn_ArenaList/func_002EDC50.c](menu/mn_ArenaList/func_002EDC50.c) |
| func_0024BBA0 | 0x0024BBA0 | 0x284 | game | size | 96 | [battle/skill_cmd/func_0024BBA0.c](battle/skill_cmd/func_0024BBA0.c) |
| func_0024F7F0 | 0x0024F7F0 | 0x2DC | game | size | 96 | [battle/skill_cmd/func_0024F7F0.c](battle/skill_cmd/func_0024F7F0.c) |
| func_001A4920 | 0x001A4920 | 0x1D0 | game | size | 97 | [battle/btl_cmd/func_001A4920.c](battle/btl_cmd/func_001A4920.c) |
| func_001E5040 | 0x001E5040 | 0x1E8 | game | size | 97 | [unk/unk_1D5B30/func_001E5040.c](unk/unk_1D5B30/func_001E5040.c) |
| func_00281A40 | 0x00281A40 | 0x218 | game | size | 97 | [unk/unk_280730/func_00281A40.c](unk/unk_280730/func_00281A40.c) |
| func_0024B2B0 | 0x0024B2B0 | 0x3AC | game | size | 97 | [battle/skill_cmd/func_0024B2B0.c](battle/skill_cmd/func_0024B2B0.c) |
| func_0028A0A0 | 0x0028A0A0 | 0x258 | game | size | 98 | [sys/mc_opr/func_0028A0A0.c](sys/mc_opr/func_0028A0A0.c) |
| func_002EDE90 | 0x002EDE90 | 0x264 | game | size | 98 | [menu/mn_ArenaList/func_002EDE90.c](menu/mn_ArenaList/func_002EDE90.c) |
| func_00239920 | 0x00239920 | 0x394 | game | size | 98 | [battle/char_light/func_00239920.c](battle/char_light/func_00239920.c) |
| func_001A4CF0 | 0x001A4CF0 | 0x400 | game | size | 98 | [battle/btl_cmd/func_001A4CF0.c](battle/btl_cmd/func_001A4CF0.c) |
| func_00266CD0 | 0x00266CD0 | 0x1E8 | game | size | 99 | [menu/mn_dataload/func_00266CD0.c](menu/mn_dataload/func_00266CD0.c) |
| func_002E08F0 | 0x002E08F0 | 0x278 | game | size | 99 | [menu/mn_option/func_002E08F0.c](menu/mn_option/func_002E08F0.c) |
| func_002D7450 | 0x002D7450 | 0x288 | game | size | 99 | [unk/unk_2D2530/func_002D7450.c](unk/unk_2D2530/func_002D7450.c) |
| func_002B6DC0 | 0x002B6DC0 | 0x380 | game | size | 99 | [menu/mn_csmodel/func_002B6DC0.c](menu/mn_csmodel/func_002B6DC0.c) |
| func_002350A0 | 0x002350A0 | 0x3D8 | game | size | 99 | [unk/unk_231E70/func_002350A0.c](unk/unk_231E70/func_002350A0.c) |
| sceSifWriteBackDCache | 0x0010D770 | 0xAC | sdk | size | 100 | [sdk/libkernl_0010D628/sceSifWriteBackDCache.c](sdk/libkernl_0010D628/sceSifWriteBackDCache.c) |
| func_00121010 | 0x00121010 | 0xE8 | libc | size | 100 | [sdk/libgcc_0011F758/func_00121010.c](sdk/libgcc_0011F758/func_00121010.c) |
| func_001FB880 | 0x001FB880 | 0x218 | game | size | 100 | [unk/unk_1FB760/func_001FB880.c](unk/unk_1FB760/func_001FB880.c) |
| func_00299390 | 0x00299390 | 0x254 | game | size | 100 | [unk/unk_297C60/func_00299390.c](unk/unk_297C60/func_00299390.c) |
| func_0024BFA0 | 0x0024BFA0 | 0x2A8 | game | size | 100 | [battle/skill_cmd/func_0024BFA0.c](battle/skill_cmd/func_0024BFA0.c) |
| func_001EA480 | 0x001EA480 | 0x2B8 | game | size | 100 | [unk/unk_1EA380/func_001EA480.c](unk/unk_1EA380/func_001EA480.c) |
| func_00268550 | 0x00268550 | 0x304 | game | size | 100 | [menu/mn_vsmode/func_00268550.c](menu/mn_vsmode/func_00268550.c) |
| func_001B1E80 | 0x00468760 | 0x0 | game | size | 101 | [battle/btl_main/func_001B1E80.c](battle/btl_main/func_001B1E80.c) |
| func_002BE0B0 | 0x002BE0B0 | 0x268 | game | size | 101 | [story/str_status/func_002BE0B0.c](story/str_status/func_002BE0B0.c) |
| func_001BD020 | 0x001BD020 | 0x2D8 | game | size | 101 | [battle/btl_main/func_001BD020.c](battle/btl_main/func_001BD020.c) |
| func_001F8420 | 0x001F8420 | 0x320 | game | size | 101 | [battle/btb_main/func_001F8420.c](battle/btb_main/func_001F8420.c) |
| func_001B5E70 | 0x00468A00 | 0x0 | game | size | 102 | [battle/btl_main/func_001B5E70.c](battle/btl_main/func_001B5E70.c) |
| func_0020CF60 | 0x0020CF60 | 0x1B4 | game | size | 102 | [unk/unk_20A4D0/func_0020CF60.c](unk/unk_20A4D0/func_0020CF60.c) |
| func_0027F070 | 0x0027F070 | 0x220 | game | size | 102 | [menu/mn_charasel/func_0027F070.c](menu/mn_charasel/func_0027F070.c) |
| func_00284CB0 | 0x00284CB0 | 0x254 | game | size | 102 | [unk/unk_284AA0/func_00284CB0.c](unk/unk_284AA0/func_00284CB0.c) |
| func_002052F0 | 0x002052F0 | 0x258 | game | size | 102 | [unk/unk_1FB760/func_002052F0.c](unk/unk_1FB760/func_002052F0.c) |
| func_001D83E0 | 0x001D83E0 | 0x328 | game | size | 102 | [unk/unk_1D5B30/func_001D83E0.c](unk/unk_1D5B30/func_001D83E0.c) |
| func_0021CD80 | 0x0021CD80 | 0x3EC | game | size | 102 | [unk/unk_21B130/func_0021CD80.c](unk/unk_21B130/func_0021CD80.c) |
| func_00270CA0 | 0x00270CA0 | 0x214 | game | size | 103 | [unk/unk_26FF30/func_00270CA0.c](unk/unk_26FF30/func_00270CA0.c) |
| func_001DB7C0 | 0x001DB7C0 | 0x364 | game | size | 103 | [unk/unk_1D5B30/func_001DB7C0.c](unk/unk_1D5B30/func_001DB7C0.c) |
| func_00244660 | 0x00244660 | 0x3F4 | game | size | 103 | [unk/unk_23A890/func_00244660.c](unk/unk_23A890/func_00244660.c) |
| func_001B6C50 | 0x00468AC0 | 0x0 | game | size | 104 | [battle/btl_main/func_001B6C50.c](battle/btl_main/func_001B6C50.c) |
| func_002FD7E0 | 0x002FD7E0 | 0x210 | game | size | 104 | [unk/unk_2FAFF0/func_002FD7E0.c](unk/unk_2FAFF0/func_002FD7E0.c) |
| func_002BFFD0 | 0x002BFFD0 | 0x244 | game | size | 104 | [story/str_status/func_002BFFD0.c](story/str_status/func_002BFFD0.c) |
| func_0023E950 | 0x0023E950 | 0x3DC | game | size | 104 | [unk/unk_23A890/func_0023E950.c](unk/unk_23A890/func_0023E950.c) |
| func_002AE380 | 0x002AE380 | 0x3DC | game | size | 104 | [unk/unk_2ADDC0/func_002AE380.c](unk/unk_2ADDC0/func_002AE380.c) |
| func_002C61A0 | 0x002C61A0 | 0x220 | game | size | 105 | [unk/unk_2C41C0/func_002C61A0.c](unk/unk_2C41C0/func_002C61A0.c) |
| func_00292FF0 | 0x00292FF0 | 0x260 | game | size | 105 | [unk/unk_2918A0/func_00292FF0.c](unk/unk_2918A0/func_00292FF0.c) |
| func_00255610 | 0x00255610 | 0x394 | game | size | 105 | [battle/skill_cmd/func_00255610.c](battle/skill_cmd/func_00255610.c) |
| func_0020D5C0 | 0x0020D5C0 | 0x1C0 | game | size | 106 | [unk/unk_20A4D0/func_0020D5C0.c](unk/unk_20A4D0/func_0020D5C0.c) |
| func_00249B00 | 0x00249B00 | 0x24C | game | size | 106 | [battle/skill_cmd/func_00249B00.c](battle/skill_cmd/func_00249B00.c) |
| func_0028E790 | 0x0028E790 | 0x2EC | game | size | 106 | [story/str_bg/func_0028E790.c](story/str_bg/func_0028E790.c) |
| func_001D8CD0 | 0x001D8CD0 | 0x304 | game | size | 106 | [unk/unk_1D5B30/func_001D8CD0.c](unk/unk_1D5B30/func_001D8CD0.c) |
| func_00268860 | 0x00268860 | 0x218 | game | size | 107 | [menu/mn_vsmode/func_00268860.c](menu/mn_vsmode/func_00268860.c) |
| func_001D5900 | 0x001D5900 | 0x224 | game | size | 107 | [battle/char_secp/func_001D5900.c](battle/char_secp/func_001D5900.c) |
| func_0029A4F0 | 0x0029A4F0 | 0x3E4 | game | size | 107 | [story/str_map/func_0029A4F0.c](story/str_map/func_0029A4F0.c) |
| func_00299CA0 | 0x00299CA0 | 0x3EC | game | size | 107 | [story/str_map/func_00299CA0.c](story/str_map/func_00299CA0.c) |
| func_001E2290 | 0x001E2290 | 0x27C | game | size | 108 | [unk/unk_1D5B30/func_001E2290.c](unk/unk_1D5B30/func_001E2290.c) |
| func_001A8930 | 0x001A8930 | 0x2A0 | game | size | 108 | [battle/btl_cmd/func_001A8930.c](battle/btl_cmd/func_001A8930.c) |
| func_001B10D0 | 0x001B10D0 | 0x320 | game | size | 108 | [battle/btl_main/func_001B10D0.c](battle/btl_main/func_001B10D0.c) |
| func_0023D360 | 0x0023D360 | 0x320 | game | size | 108 | [unk/unk_23A890/func_0023D360.c](unk/unk_23A890/func_0023D360.c) |
| func_00244F00 | 0x00244F00 | 0x338 | game | size | 108 | [unk/unk_23A890/func_00244F00.c](unk/unk_23A890/func_00244F00.c) |
| func_00103D70 | 0x00103D70 | 0x558 | sdk | size | 108 | [sdk/libmpeg/func_00103D70.c](sdk/libmpeg/func_00103D70.c) |
| func_002371C0 | 0x002371C0 | 0x218 | game | size | 109 | [battle/char_light/func_002371C0.c](battle/char_light/func_002371C0.c) |
| func_0013FC20 | 0x0013FC20 | 0x238 | game | size | 109 | [sys/unk_13FC20/func_0013FC20.c](sys/unk_13FC20/func_0013FC20.c) |
| func_00280F20 | 0x00280F20 | 0x2B0 | game | size | 109 | [unk/unk_280730/func_00280F20.c](unk/unk_280730/func_00280F20.c) |
| func_002C63C0 | 0x002C63C0 | 0x334 | game | size | 109 | [unk/unk_2C41C0/func_002C63C0.c](unk/unk_2C41C0/func_002C63C0.c) |
| func_001BBC60 | 0x00468DC0 | 0x0 | game | size | 110 | [battle/btl_main/func_001BBC60.c](battle/btl_main/func_001BBC60.c) |
| func_002D6890 | 0x002D6890 | 0x280 | game | size | 110 | [unk/unk_2D2530/func_002D6890.c](unk/unk_2D2530/func_002D6890.c) |
| func_00250500 | 0x00250500 | 0x2B0 | game | size | 110 | [battle/skill_cmd/func_00250500.c](battle/skill_cmd/func_00250500.c) |
| func_00242B40 | 0x00242B40 | 0x2CC | game | size | 110 | [unk/unk_23A890/func_00242B40.c](unk/unk_23A890/func_00242B40.c) |
| func_002737C0 | 0x002737C0 | 0x32C | game | size | 110 | [menu/ess_shop/func_002737C0.c](menu/ess_shop/func_002737C0.c) |
| func_002B0E00 | 0x002B0E00 | 0x360 | game | size | 110 | [unk/unk_2AF860/func_002B0E00.c](unk/unk_2AF860/func_002B0E00.c) |
| func_00271580 | 0x00271580 | 0x444 | game | size | 110 | [unk/unk_26FF30/func_00271580.c](unk/unk_26FF30/func_00271580.c) |
| func_001DC150 | 0x001DC150 | 0x290 | game | size | 111 | [unk/unk_1D5B30/func_001DC150.c](unk/unk_1D5B30/func_001DC150.c) |
| func_00203250 | 0x00203250 | 0x298 | game | size | 111 | [unk/unk_1FB760/func_00203250.c](unk/unk_1FB760/func_00203250.c) |
| func_002EEF00 | 0x002EEF00 | 0x2A0 | game | size | 111 | [menu/mn_ArenaList/func_002EEF00.c](menu/mn_ArenaList/func_002EEF00.c) |
| func_00267E00 | 0x00267E00 | 0x370 | game | size | 111 | [menu/mn_vsmode/func_00267E00.c](menu/mn_vsmode/func_00267E00.c) |
| func_00279010 | 0x00279010 | 0x3A8 | game | size | 111 | [menu/ess_trade/func_00279010.c](menu/ess_trade/func_00279010.c) |
| func_00285530 | 0x00285530 | 0x420 | game | size | 111 | [unk/unk_284AA0/func_00285530.c](unk/unk_284AA0/func_00285530.c) |
| func_0021C6E0 | 0x0021C6E0 | 0x33C | game | size | 112 | [unk/unk_21B130/func_0021C6E0.c](unk/unk_21B130/func_0021C6E0.c) |
| func_002A0060 | 0x002A0060 | 0x24C | game | size | 113 | [sys/cnv_sys/func_002A0060.c](sys/cnv_sys/func_002A0060.c) |
| func_002DAE10 | 0x002DAE10 | 0x2CC | game | size | 113 | [unk/unk_2D9510/func_002DAE10.c](unk/unk_2D9510/func_002DAE10.c) |
| func_00206310 | 0x00206310 | 0x2E0 | game | size | 113 | [unk/unk_1FB760/func_00206310.c](unk/unk_1FB760/func_00206310.c) |
| func_001D6170 | 0x001D6170 | 0x300 | game | size | 113 | [unk/unk_1D5B30/func_001D6170.c](unk/unk_1D5B30/func_001D6170.c) |
| func_002C8360 | 0x002C8360 | 0x310 | game | size | 113 | [unk/unk_2C41C0/func_002C8360.c](unk/unk_2C41C0/func_002C8360.c) |
| func_002B1FF0 | 0x002B1FF0 | 0x404 | game | size | 113 | [unk/unk_2AF860/func_002B1FF0.c](unk/unk_2AF860/func_002B1FF0.c) |
| func_001E94C0 | 0x001E94C0 | 0x44C | game | size | 113 | [unk/unk_1D5B30/func_001E94C0.c](unk/unk_1D5B30/func_001E94C0.c) |
| func_001FCE20 | 0x001FCE20 | 0x27C | game | size | 114 | [unk/unk_1FB760/func_001FCE20.c](unk/unk_1FB760/func_001FCE20.c) |
| func_00236D60 | 0x00236D60 | 0x294 | game | size | 114 | [battle/char_light/func_00236D60.c](battle/char_light/func_00236D60.c) |
| func_001B6980 | 0x001B6980 | 0x2C8 | game | size | 114 | [battle/btl_main/func_001B6980.c](battle/btl_main/func_001B6980.c) |
| func_001CACB0 | 0x001CACB0 | 0x2FC | game | size | 114 | [battle/character/func_001CACB0.c](battle/character/func_001CACB0.c) |
| func_00218F00 | 0x00218F00 | 0x364 | game | size | 114 | [unk/unk_20A4D0/func_00218F00.c](unk/unk_20A4D0/func_00218F00.c) |
| func_001D1090 | 0x001D1090 | 0x210 | game | size | 115 | [battle/char_acsr/func_001D1090.c](battle/char_acsr/func_001D1090.c) |
| func_001FC5C0 | 0x001FC5C0 | 0x260 | game | size | 115 | [unk/unk_1FB760/func_001FC5C0.c](unk/unk_1FB760/func_001FC5C0.c) |
| func_002D5AE0 | 0x002D5AE0 | 0x28C | game | size | 115 | [unk/unk_2D2530/func_002D5AE0.c](unk/unk_2D2530/func_002D5AE0.c) |
| func_001E2630 | 0x001E2630 | 0x2C0 | game | size | 115 | [unk/unk_1D5B30/func_001E2630.c](unk/unk_1D5B30/func_001E2630.c) |
| func_0021F0E0 | 0x0021F0E0 | 0x2C0 | game | size | 115 | [unk/unk_21D260/func_0021F0E0.c](unk/unk_21D260/func_0021F0E0.c) |
| func_00253BA0 | 0x00253BA0 | 0x2C0 | game | size | 115 | [battle/skill_cmd/func_00253BA0.c](battle/skill_cmd/func_00253BA0.c) |
| func_002980F0 | 0x002980F0 | 0x330 | game | size | 115 | [unk/unk_297C60/func_002980F0.c](unk/unk_297C60/func_002980F0.c) |
| func_002BA2A0 | 0x002BA2A0 | 0x370 | game | size | 115 | [unk/unk_2B98D0/func_002BA2A0.c](unk/unk_2B98D0/func_002BA2A0.c) |
| func_001471C0 | 0x001471C0 | 0x3A0 | game | size | 115 | [sys/unk_1461D0/func_001471C0.c](sys/unk_1461D0/func_001471C0.c) |
| func_002E2290 | 0x002E2290 | 0x3A0 | game | size | 115 | [unk/unk_2E2290/func_002E2290.c](unk/unk_2E2290/func_002E2290.c) |
| func_0029FE20 | 0x0029FE20 | 0x234 | game | size | 116 | [sys/cnv_sys/func_0029FE20.c](sys/cnv_sys/func_0029FE20.c) |
| func_001D2340 | 0x001D2340 | 0x238 | game | size | 116 | [battle/char_cloth/func_001D2340.c](battle/char_cloth/func_001D2340.c) |
| func_002D6400 | 0x002D6400 | 0x2AC | game | size | 116 | [unk/unk_2D2530/func_002D6400.c](unk/unk_2D2530/func_002D6400.c) |
| func_002C7010 | 0x002C7010 | 0x2C4 | game | size | 116 | [unk/unk_2C41C0/func_002C7010.c](unk/unk_2C41C0/func_002C7010.c) |
| func_002E46A0 | 0x002E46A0 | 0x414 | game | size | 116 | [unk/unk_2E4030/func_002E46A0.c](unk/unk_2E4030/func_002E46A0.c) |
| func_001D2CB0 | 0x001D2CB0 | 0x254 | game | size | 117 | [battle/char_mant/func_001D2CB0.c](battle/char_mant/func_001D2CB0.c) |
| func_002F0D70 | 0x002F0D70 | 0x260 | game | size | 117 | [menu/mn_InputPass/func_002F0D70.c](menu/mn_InputPass/func_002F0D70.c) |
| func_00222440 | 0x00222440 | 0x4A4 | game | size | 117 | [unk/unk_21D260/func_00222440.c](unk/unk_21D260/func_00222440.c) |
| func_00266AC0 | 0x00266AC0 | 0x208 | game | size | 118 | [menu/mn_dataload/func_00266AC0.c](menu/mn_dataload/func_00266AC0.c) |
| func_002DB0E0 | 0x002DB0E0 | 0x2D0 | game | size | 118 | [unk/unk_2D9510/func_002DB0E0.c](unk/unk_2D9510/func_002DB0E0.c) |
| func_002DAB30 | 0x002DAB30 | 0x2E0 | game | size | 118 | [unk/unk_2D9510/func_002DAB30.c](unk/unk_2D9510/func_002DAB30.c) |
| func_00225020 | 0x00225020 | 0x354 | game | size | 118 | [unk/unk_21D260/func_00225020.c](unk/unk_21D260/func_00225020.c) |
| func_001BAFF0 | 0x00468D90 | 0x0 | game | size | 119 | [battle/btl_main/func_001BAFF0.c](battle/btl_main/func_001BAFF0.c) |
| func_001D18C0 | 0x001D18C0 | 0x2B8 | game | size | 119 | [battle/char_acsr/func_001D18C0.c](battle/char_acsr/func_001D18C0.c) |
| func_001F2760 | 0x001F2760 | 0x330 | game | size | 119 | [battle/btb_draw/func_001F2760.c](battle/btb_draw/func_001F2760.c) |
| func_00205FD0 | 0x00205FD0 | 0x338 | game | size | 119 | [unk/unk_1FB760/func_00205FD0.c](unk/unk_1FB760/func_00205FD0.c) |
| func_002B7340 | 0x002B7340 | 0x348 | game | size | 119 | [menu/mn_csmodel/func_002B7340.c](menu/mn_csmodel/func_002B7340.c) |
| func_001DFE60 | 0x001DFE60 | 0x398 | game | size | 119 | [unk/unk_1D5B30/func_001DFE60.c](unk/unk_1D5B30/func_001DFE60.c) |
| func_00192D68 | 0x00192D68 | 0x78 | cri | size | 120 | [cri/sfd/func_00192D68.c](cri/sfd/func_00192D68.c) |
| func_0019DC28 | 0x0019DC28 | 0xD0 | cri | size | 120 | [cri/sfd_00194D48/func_0019DC28.c](cri/sfd_00194D48/func_0019DC28.c) |
| func_0024E1A0 | 0x0024E1A0 | 0x2A0 | game | size | 120 | [battle/skill_cmd/func_0024E1A0.c](battle/skill_cmd/func_0024E1A0.c) |
| func_00246800 | 0x00246800 | 0x2A4 | game | size | 120 | [unk/unk_23A890/func_00246800.c](unk/unk_23A890/func_00246800.c) |
| func_00265020 | 0x00265020 | 0x3F8 | game | size | 120 | [menu/mn_dataload/func_00265020.c](menu/mn_dataload/func_00265020.c) |
| func_00284F10 | 0x00284F10 | 0x41C | game | size | 120 | [unk/unk_284AA0/func_00284F10.c](unk/unk_284AA0/func_00284F10.c) |
| func_00288500 | 0x00288500 | 0x364 | game | size | 121 | [sys/mc_opr/func_00288500.c](sys/mc_opr/func_00288500.c) |
| func_002ADE10 | 0x002ADE10 | 0x4B4 | game | size | 121 | [unk/unk_2ADDC0/func_002ADE10.c](unk/unk_2ADDC0/func_002ADE10.c) |
| func_002FDF70 | 0x002FDF70 | 0x238 | game | size | 122 | [unk/unk_2FAFF0/func_002FDF70.c](unk/unk_2FAFF0/func_002FDF70.c) |
| func_002A7CB0 | 0x002A7CB0 | 0x2C0 | game | size | 122 | [story/evt_scrp/func_002A7CB0.c](story/evt_scrp/func_002A7CB0.c) |
| func_001D8710 | 0x001D8710 | 0x2CC | game | size | 122 | [unk/unk_1D5B30/func_001D8710.c](unk/unk_1D5B30/func_001D8710.c) |
| func_001F5210 | 0x001F5210 | 0x330 | game | size | 122 | [battle/btb_draw/func_001F5210.c](battle/btb_draw/func_001F5210.c) |
| func_002069B0 | 0x002069B0 | 0x2D0 | game | size | 124 | [unk/unk_1FB760/func_002069B0.c](unk/unk_1FB760/func_002069B0.c) |
| func_002898F0 | 0x002898F0 | 0x2F0 | game | size | 124 | [sys/mc_opr/func_002898F0.c](sys/mc_opr/func_002898F0.c) |
| func_001F2CB0 | 0x001F2CB0 | 0x320 | game | size | 124 | [battle/btb_draw/func_001F2CB0.c](battle/btb_draw/func_001F2CB0.c) |
| func_00288E70 | 0x00288E70 | 0x3A0 | game | size | 124 | [sys/mc_opr/func_00288E70.c](sys/mc_opr/func_00288E70.c) |
| func_00141E70 | 0x00141E70 | 0x208 | game | size | 125 | [sys/amSofdec/func_00141E70.c](sys/amSofdec/func_00141E70.c) |
| func_002181A0 | 0x002181A0 | 0x248 | game | size | 125 | [unk/unk_20A4D0/func_002181A0.c](unk/unk_20A4D0/func_002181A0.c) |
| func_001C7130 | 0x001C7130 | 0x278 | game | size | 125 | [battle/btl_main/func_001C7130.c](battle/btl_main/func_001C7130.c) |
| func_002D2AD0 | 0x002D2AD0 | 0x378 | game | size | 125 | [unk/unk_2D2530/func_002D2AD0.c](unk/unk_2D2530/func_002D2AD0.c) |
| func_001ACBC0 | 0x001ACBC0 | 0x410 | game | size | 126 | [battle/btl_main/func_001ACBC0.c](battle/btl_main/func_001ACBC0.c) |
| func_0030C400 | 0x0030C400 | 0x2F0 | game | size | 127 | [unk/unk_30B130/func_0030C400.c](unk/unk_30B130/func_0030C400.c) |
| func_00304970 | 0x00304970 | 0x37C | game | size | 128 | [menu/mn_TourMap/func_00304970.c](menu/mn_TourMap/func_00304970.c) |
| func_0028B380 | 0x0028B380 | 0x3A0 | game | size | 128 | [sys/mc_opr/func_0028B380.c](sys/mc_opr/func_0028B380.c) |
| func_00305130 | 0x00305130 | 0x2A0 | game | size | 129 | [menu/mn_TourMap/func_00305130.c](menu/mn_TourMap/func_00305130.c) |
| func_0030A5E0 | 0x0030A5E0 | 0x364 | game | size | 129 | [menu/mn_ArenaCharasel_cvsc/func_0030A5E0.c](menu/mn_ArenaCharasel_cvsc/func_0030A5E0.c) |
| func_0029C2E0 | 0x0029C2E0 | 0x394 | game | size | 129 | [story/str_map/func_0029C2E0.c](story/str_map/func_0029C2E0.c) |
| func_00272660 | 0x00272660 | 0x3B4 | game | size | 130 | [menu/ess_list/func_00272660.c](menu/ess_list/func_00272660.c) |
| func_00308500 | 0x00308500 | 0x32C | game | size | 131 | [menu/mn_ArenaCharasel_pvsc/func_00308500.c](menu/mn_ArenaCharasel_pvsc/func_00308500.c) |
| func_00193060 | 0x00193060 | 0x2FC | cri | size | 132 | [cri/sfd/func_00193060.c](cri/sfd/func_00193060.c) |
| func_0013C1E0 | 0x0013C1E0 | 0x318 | game | size | 132 | [sys/amMotion/func_0013C1E0.c](sys/amMotion/func_0013C1E0.c) |
| func_002BBCB0 | 0x002BBCB0 | 0x344 | game | size | 132 | [unk/unk_2B98D0/func_002BBCB0.c](unk/unk_2B98D0/func_002BBCB0.c) |
| func_0022BC30 | 0x0022BC30 | 0x348 | game | size | 132 | [battle/a2d/func_0022BC30.c](battle/a2d/func_0022BC30.c) |
| func_0024E910 | 0x0024E910 | 0x3D0 | game | size | 132 | [battle/skill_cmd/func_0024E910.c](battle/skill_cmd/func_0024E910.c) |
| func_00179860 | 0x00179860 | 0x640 | cri | size | 132 | [cri/mpv/func_00179860.c](cri/mpv/func_00179860.c) |
| func_00139620 | 0x00139620 | 0x2B8 | game | size | 133 | [sys/unk_137EE0/func_00139620.c](sys/unk_137EE0/func_00139620.c) |
| func_00247FF0 | 0x00247FF0 | 0x360 | game | size | 133 | [unk/unk_23A890/func_00247FF0.c](unk/unk_23A890/func_00247FF0.c) |
| func_00270870 | 0x00270870 | 0x430 | game | size | 133 | [unk/unk_26FF30/func_00270870.c](unk/unk_26FF30/func_00270870.c) |
| func_002560A0 | 0x002560A0 | 0x2BC | game | size | 134 | [battle/skill_cmd/func_002560A0.c](battle/skill_cmd/func_002560A0.c) |
| func_0020DAE0 | 0x0020DAE0 | 0x2F0 | game | size | 134 | [unk/unk_20A4D0/func_0020DAE0.c](unk/unk_20A4D0/func_0020DAE0.c) |
| func_002BAC80 | 0x002BAC80 | 0x314 | game | size | 134 | [unk/unk_2B98D0/func_002BAC80.c](unk/unk_2B98D0/func_002BAC80.c) |
| func_00139A80 | 0x00139A80 | 0x35C | game | size | 134 | [sys/unk_137EE0/func_00139A80.c](sys/unk_137EE0/func_00139A80.c) |
| func_002D2530 | 0x002D2530 | 0x2B0 | game | size | 135 | [unk/unk_2D2530/func_002D2530.c](unk/unk_2D2530/func_002D2530.c) |
| func_0024C610 | 0x0024C610 | 0x2F0 | game | size | 135 | [battle/skill_cmd/func_0024C610.c](battle/skill_cmd/func_0024C610.c) |
| func_001DF500 | 0x001DF500 | 0x32C | game | size | 135 | [unk/unk_1D5B30/func_001DF500.c](unk/unk_1D5B30/func_001DF500.c) |
| func_0026B880 | 0x0026B880 | 0x48C | game | size | 135 | [menu/ess_main/func_0026B880.c](menu/ess_main/func_0026B880.c) |
| func_001151D0 | 0x001151D0 | 0x2A4 | sdk | size | 136 | [sdk/libkernl_00113B88/func_001151D0.c](sdk/libkernl_00113B88/func_001151D0.c) |
| func_002B98D0 | 0x002B98D0 | 0x340 | game | size | 136 | [unk/unk_2B98D0/func_002B98D0.c](unk/unk_2B98D0/func_002B98D0.c) |
| func_00212DA0 | 0x00212DA0 | 0x3D8 | game | size | 136 | [unk/unk_20A4D0/func_00212DA0.c](unk/unk_20A4D0/func_00212DA0.c) |
| func_0020A230 | 0x0020A230 | 0x29C | game | size | 137 | [unk/unk_1FB760/func_0020A230.c](unk/unk_1FB760/func_0020A230.c) |
| func_002922C0 | 0x002922C0 | 0x2D4 | game | size | 137 | [unk/unk_2918A0/func_002922C0.c](unk/unk_2918A0/func_002922C0.c) |
| func_00265BF0 | 0x00265BF0 | 0x474 | game | size | 137 | [menu/mn_dataload/func_00265BF0.c](menu/mn_dataload/func_00265BF0.c) |
| func_002591E0 | 0x002591E0 | 0x4C0 | game | size | 137 | [battle/skill_cmd/func_002591E0.c](battle/skill_cmd/func_002591E0.c) |
| func_002C8A80 | 0x002C8A80 | 0x2A8 | game | size | 138 | [unk/unk_2C41C0/func_002C8A80.c](unk/unk_2C41C0/func_002C8A80.c) |
| func_002BF000 | 0x002BF000 | 0x30C | game | size | 138 | [story/str_status/func_002BF000.c](story/str_status/func_002BF000.c) |
| func_001B4DC0 | 0x00468970 | 0x0 | game | size | 139 | [battle/btl_main/func_001B4DC0.c](battle/btl_main/func_001B4DC0.c) |
| func_0030FB00 | 0x0030FB00 | 0x42C | game | size | 139 | [story/str_dataerase/func_0030FB00.c](story/str_dataerase/func_0030FB00.c) |
| func_001A3EF0 | 0x001A3EF0 | 0x568 | game | size | 139 | [unk/unk_1A31B0/func_001A3EF0.c](unk/unk_1A31B0/func_001A3EF0.c) |
| func_00201BD0 | 0x00201BD0 | 0x370 | game | size | 140 | [unk/unk_1FB760/func_00201BD0.c](unk/unk_1FB760/func_00201BD0.c) |
| func_002129B0 | 0x002129B0 | 0x3E4 | game | size | 140 | [unk/unk_20A4D0/func_002129B0.c](unk/unk_20A4D0/func_002129B0.c) |
| func_00291E30 | 0x00291E30 | 0x2B0 | game | size | 141 | [unk/unk_2918A0/func_00291E30.c](unk/unk_2918A0/func_00291E30.c) |
| func_001DA170 | 0x001DA170 | 0x2B4 | game | size | 141 | [unk/unk_1D5B30/func_001DA170.c](unk/unk_1D5B30/func_001DA170.c) |
| func_001A5880 | 0x001A5880 | 0x2BC | game | size | 141 | [battle/btl_cmd/func_001A5880.c](battle/btl_cmd/func_001A5880.c) |
| func_002A02B0 | 0x002A02B0 | 0x444 | game | size | 142 | [sys/cnv_sys/func_002A02B0.c](sys/cnv_sys/func_002A02B0.c) |
| func_00291390 | 0x00291390 | 0x508 | game | size | 142 | [story/str_bg/func_00291390.c](story/str_bg/func_00291390.c) |
| func_002DB600 | 0x002DB600 | 0x36C | game | size | 143 | [unk/unk_2D9510/func_002DB600.c](unk/unk_2D9510/func_002DB600.c) |
| func_00213180 | 0x00213180 | 0x3F0 | game | size | 143 | [unk/unk_20A4D0/func_00213180.c](unk/unk_20A4D0/func_00213180.c) |
| func_0028B9B0 | 0x0028B9B0 | 0x3F4 | game | size | 143 | [sys/mc_opr/func_0028B9B0.c](sys/mc_opr/func_0028B9B0.c) |
| func_001CA4D0 | 0x001CA4D0 | 0x2A8 | game | size | 144 | [battle/character/func_001CA4D0.c](battle/character/func_001CA4D0.c) |
| func_001C4870 | 0x001C4870 | 0x3A0 | game | size | 144 | [battle/btl_main/func_001C4870.c](battle/btl_main/func_001C4870.c) |
| func_001C3120 | 0x001C3120 | 0x3DC | game | size | 144 | [battle/btl_main/func_001C3120.c](battle/btl_main/func_001C3120.c) |
| func_002E0260 | 0x002E0260 | 0x438 | game | size | 144 | [menu/mn_option/func_002E0260.c](menu/mn_option/func_002E0260.c) |
| func_002D4CF0 | 0x002D4CF0 | 0x3A0 | game | size | 145 | [unk/unk_2D2530/func_002D4CF0.c](unk/unk_2D2530/func_002D4CF0.c) |
| func_00271080 | 0x00271080 | 0x4F4 | game | size | 145 | [unk/unk_26FF30/func_00271080.c](unk/unk_26FF30/func_00271080.c) |
| func_001416A0 | 0x001416A0 | 0x280 | game | size | 146 | [sys/amSofdec/func_001416A0.c](sys/amSofdec/func_001416A0.c) |
| func_00272E20 | 0x00272E20 | 0x290 | game | size | 146 | [menu/ess_shop/func_00272E20.c](menu/ess_shop/func_00272E20.c) |
| func_00221E10 | 0x00221E10 | 0x464 | game | size | 146 | [unk/unk_21D260/func_00221E10.c](unk/unk_21D260/func_00221E10.c) |
| func_001D5C40 | 0x001D5C40 | 0x528 | game | size | 146 | [unk/unk_1D5B30/func_001D5C40.c](unk/unk_1D5B30/func_001D5C40.c) |
| func_002E8F90 | 0x002E8F90 | 0x344 | game | size | 147 | [unk/unk_2E8540/func_002E8F90.c](unk/unk_2E8540/func_002E8F90.c) |
| func_0012FFC0 | 0x0012FFC0 | 0x414 | game | size | 147 | [sys/amDraw3d/func_0012FFC0.c](sys/amDraw3d/func_0012FFC0.c) |
| func_001C37F0 | 0x001C37F0 | 0x300 | game | size | 148 | [battle/btl_main/func_001C37F0.c](battle/btl_main/func_001C37F0.c) |
| func_0021BA60 | 0x0021BA60 | 0x438 | game | size | 148 | [unk/unk_21B130/func_0021BA60.c](unk/unk_21B130/func_0021BA60.c) |
| func_002FB4C0 | 0x002FB4C0 | 0x5B8 | game | size | 148 | [unk/unk_2FAFF0/func_002FB4C0.c](unk/unk_2FAFF0/func_002FB4C0.c) |
| func_0026E000 | 0x0026E000 | 0x2E8 | game | size | 149 | [menu/ess_main_2/func_0026E000.c](menu/ess_main_2/func_0026E000.c) |
| func_001DDA30 | 0x001DDA30 | 0x2FC | game | size | 150 | [unk/unk_1D5B30/func_001DDA30.c](unk/unk_1D5B30/func_001DDA30.c) |
| func_00248E00 | 0x00248E00 | 0x300 | game | size | 150 | [battle/skill_cmd/func_00248E00.c](battle/skill_cmd/func_00248E00.c) |
| func_0021F3A0 | 0x0021F3A0 | 0x39C | game | size | 151 | [unk/unk_21D260/func_0021F3A0.c](unk/unk_21D260/func_0021F3A0.c) |
| func_0020CCF0 | 0x0020CCF0 | 0x264 | game | size | 152 | [unk/unk_20A4D0/func_0020CCF0.c](unk/unk_20A4D0/func_0020CCF0.c) |
| func_001CFB80 | 0x001CFB80 | 0x2C8 | game | size | 152 | [unk/unk_1CBD90/func_001CFB80.c](unk/unk_1CBD90/func_001CFB80.c) |
| func_002B85F0 | 0x002B85F0 | 0x3E4 | game | size | 152 | [menu/mn_csmodel/func_002B85F0.c](menu/mn_csmodel/func_002B85F0.c) |
| func_001A6C70 | 0x001A6C70 | 0x318 | game | size | 153 | [battle/btl_cmd/func_001A6C70.c](battle/btl_cmd/func_001A6C70.c) |
| func_00293600 | 0x00293600 | 0x344 | game | size | 153 | [unk/unk_2918A0/func_00293600.c](unk/unk_2918A0/func_00293600.c) |
| func_001D1B80 | 0x001D1B80 | 0x350 | game | size | 153 | [battle/char_cloth/func_001D1B80.c](battle/char_cloth/func_001D1B80.c) |
| func_001F0E20 | 0x001F0E20 | 0x364 | game | size | 153 | [battle/btb_draw/func_001F0E20.c](battle/btb_draw/func_001F0E20.c) |
| func_0023FC80 | 0x0023FC80 | 0x460 | game | size | 153 | [unk/unk_23A890/func_0023FC80.c](unk/unk_23A890/func_0023FC80.c) |
| func_002D27E0 | 0x002D27E0 | 0x2E8 | game | size | 154 | [unk/unk_2D2530/func_002D27E0.c](unk/unk_2D2530/func_002D27E0.c) |
| func_0030AA40 | 0x0030AA40 | 0x414 | game | size | 154 | [menu/mn_ArenaCharasel_cvsc/func_0030AA40.c](menu/mn_ArenaCharasel_cvsc/func_0030AA40.c) |
| func_00266390 | 0x00266390 | 0x440 | game | size | 154 | [menu/mn_dataload/func_00266390.c](menu/mn_dataload/func_00266390.c) |
| func_001D6770 | 0x001D6770 | 0x414 | game | size | 155 | [unk/unk_1D5B30/func_001D6770.c](unk/unk_1D5B30/func_001D6770.c) |
| func_001EA740 | 0x001EA740 | 0x4D8 | game | size | 155 | [unk/unk_1EA380/func_001EA740.c](unk/unk_1EA380/func_001EA740.c) |
| func_002DD510 | 0x002DD510 | 0x38C | game | size | 156 | [unk/unk_2DB970/func_002DD510.c](unk/unk_2DB970/func_002DD510.c) |
| func_00221110 | 0x00221110 | 0x398 | game | size | 156 | [unk/unk_21D260/func_00221110.c](unk/unk_21D260/func_00221110.c) |
| func_001FBAA0 | 0x001FBAA0 | 0x334 | game | size | 157 | [unk/unk_1FB760/func_001FBAA0.c](unk/unk_1FB760/func_001FBAA0.c) |
| func_0030C9C0 | 0x0030C9C0 | 0x3C0 | game | size | 157 | [unk/unk_30B130/func_0030C9C0.c](unk/unk_30B130/func_0030C9C0.c) |
| func_001B93A0 | 0x001B93A0 | 0x460 | game | size | 157 | [battle/btl_main/func_001B93A0.c](battle/btl_main/func_001B93A0.c) |
| func_002B1780 | 0x002B1780 | 0x38C | game | size | 158 | [unk/unk_2AF860/func_002B1780.c](unk/unk_2AF860/func_002B1780.c) |
| func_002FE7A0 | 0x002FE7A0 | 0x430 | game | size | 158 | [unk/unk_2FAFF0/func_002FE7A0.c](unk/unk_2FAFF0/func_002FE7A0.c) |
| func_00131700 | 0x00131700 | 0x488 | game | size | 158 | [sys/unk_131700/func_00131700.c](sys/unk_131700/func_00131700.c) |
| func_001AF100 | 0x001AF100 | 0x544 | game | size | 158 | [battle/btl_main/func_001AF100.c](battle/btl_main/func_001AF100.c) |
| func_002034F0 | 0x002034F0 | 0x400 | game | size | 159 | [unk/unk_1FB760/func_002034F0.c](unk/unk_1FB760/func_002034F0.c) |
| func_002559B0 | 0x002559B0 | 0x454 | game | size | 159 | [battle/skill_cmd/func_002559B0.c](battle/skill_cmd/func_002559B0.c) |
| func_001D2750 | 0x001D2750 | 0x3E0 | game | size | 160 | [battle/char_cloth/func_001D2750.c](battle/char_cloth/func_001D2750.c) |
| func_002B1160 | 0x002B1160 | 0x428 | game | size | 160 | [unk/unk_2AF860/func_002B1160.c](unk/unk_2AF860/func_002B1160.c) |
| func_002CCB70 | 0x002CCB70 | 0x460 | game | size | 160 | [unk/unk_2CC840/func_002CCB70.c](unk/unk_2CC840/func_002CCB70.c) |
| func_002065F0 | 0x002065F0 | 0x3C0 | game | size | 161 | [unk/unk_1FB760/func_002065F0.c](unk/unk_1FB760/func_002065F0.c) |
| func_0029DD30 | 0x0029DD30 | 0x3E4 | game | size | 161 | [battle/char_disp/func_0029DD30.c](battle/char_disp/func_0029DD30.c) |
| func_001D3070 | 0x001D3070 | 0x364 | game | size | 162 | [battle/char_mant/func_001D3070.c](battle/char_mant/func_001D3070.c) |
| func_00213F30 | 0x00213F30 | 0x434 | game | size | 163 | [unk/unk_20A4D0/func_00213F30.c](unk/unk_20A4D0/func_00213F30.c) |
| func_00203F10 | 0x00203F10 | 0x3E8 | game | size | 164 | [unk/unk_1FB760/func_00203F10.c](unk/unk_1FB760/func_00203F10.c) |
| func_002514B0 | 0x002514B0 | 0x3F8 | game | size | 164 | [battle/skill_cmd/func_002514B0.c](battle/skill_cmd/func_002514B0.c) |
| func_00146260 | 0x00146260 | 0x41C | game | size | 164 | [sys/unk_1461D0/func_00146260.c](sys/unk_1461D0/func_00146260.c) |
| func_0023AB60 | 0x0023AB60 | 0x378 | game | size | 165 | [unk/unk_23A890/func_0023AB60.c](unk/unk_23A890/func_0023AB60.c) |
| func_001E8290 | 0x001E8290 | 0x39C | game | size | 165 | [unk/unk_1D5B30/func_001E8290.c](unk/unk_1D5B30/func_001E8290.c) |
| func_001E4440 | 0x001E4440 | 0x3B8 | game | size | 165 | [unk/unk_1D5B30/func_001E4440.c](unk/unk_1D5B30/func_001E4440.c) |
| func_001DA5C0 | 0x001DA5C0 | 0x364 | game | size | 166 | [unk/unk_1D5B30/func_001DA5C0.c](unk/unk_1D5B30/func_001DA5C0.c) |
| func_0029FA90 | 0x0029FA90 | 0x384 | game | size | 167 | [battle/char_disp/func_0029FA90.c](battle/char_disp/func_0029FA90.c) |
| func_001CE960 | 0x001CE960 | 0x3B4 | game | size | 168 | [unk/unk_1CBD90/func_001CE960.c](unk/unk_1CBD90/func_001CE960.c) |
| func_002C8D30 | 0x002C8D30 | 0x3E4 | game | size | 168 | [unk/unk_2C41C0/func_002C8D30.c](unk/unk_2C41C0/func_002C8D30.c) |
| func_00213AE0 | 0x00213AE0 | 0x44C | game | size | 169 | [unk/unk_20A4D0/func_00213AE0.c](unk/unk_20A4D0/func_00213AE0.c) |
| func_00193B18 | 0x00193B18 | 0x1FC | cri | size | 172 | [cri/sfd/func_00193B18.c](cri/sfd/func_00193B18.c) |
| func_00224BB0 | 0x00224BB0 | 0x3D8 | game | size | 173 | [unk/unk_21D260/func_00224BB0.c](unk/unk_21D260/func_00224BB0.c) |
| func_00205BC0 | 0x00205BC0 | 0x410 | game | size | 173 | [unk/unk_1FB760/func_00205BC0.c](unk/unk_1FB760/func_00205BC0.c) |
| func_001F41E0 | 0x001F41E0 | 0x334 | game | size | 174 | [battle/btb_draw/func_001F41E0.c](battle/btb_draw/func_001F41E0.c) |
| func_00293950 | 0x00293950 | 0x420 | game | size | 174 | [unk/unk_2918A0/func_00293950.c](unk/unk_2918A0/func_00293950.c) |
| func_0030DC70 | 0x0030DC70 | 0x500 | game | size | 174 | [story/str_staffroll/func_0030DC70.c](story/str_staffroll/func_0030DC70.c) |
| func_00292A40 | 0x00292A40 | 0x5A8 | game | size | 174 | [unk/unk_2918A0/func_00292A40.c](unk/unk_2918A0/func_00292A40.c) |
| func_001D54A0 | 0x001D54A0 | 0x458 | game | size | 175 | [battle/char_secp/func_001D54A0.c](battle/char_secp/func_001D54A0.c) |
| func_00309680 | 0x00309680 | 0x464 | game | size | 175 | [menu/mn_ArenaCharasel_pvsp/func_00309680.c](menu/mn_ArenaCharasel_pvsp/func_00309680.c) |
| func_00238C50 | 0x00238C50 | 0x4B4 | game | size | 176 | [battle/char_light/func_00238C50.c](battle/char_light/func_00238C50.c) |
| func_00238790 | 0x00238790 | 0x4B4 | game | size | 177 | [battle/char_light/func_00238790.c](battle/char_light/func_00238790.c) |
| func_002ACDB0 | 0x002ACDB0 | 0x3D0 | game | size | 178 | [battle/scr_func/func_002ACDB0.c](battle/scr_func/func_002ACDB0.c) |
| func_001363D0 | 0x001363D0 | 0x494 | game | size | 178 | [sys/unk_133620/func_001363D0.c](sys/unk_133620/func_001363D0.c) |
| func_002FE1B0 | 0x002FE1B0 | 0x3F0 | game | size | 179 | [unk/unk_2FAFF0/func_002FE1B0.c](unk/unk_2FAFF0/func_002FE1B0.c) |
| func_00258310 | 0x00258310 | 0x4E0 | game | size | 179 | [battle/skill_cmd/func_00258310.c](battle/skill_cmd/func_00258310.c) |
| func_001B7CF0 | 0x00468BB0 | 0x0 | game | size | 180 | [battle/btl_main/func_001B7CF0.c](battle/btl_main/func_001B7CF0.c) |
| func_0027D3B0 | 0x0027D3B0 | 0x468 | game | size | 181 | [menu/mn_charasel/func_0027D3B0.c](menu/mn_charasel/func_0027D3B0.c) |
| func_002D5090 | 0x002D5090 | 0x4E0 | game | size | 181 | [unk/unk_2D2530/func_002D5090.c](unk/unk_2D2530/func_002D5090.c) |
| func_002238B0 | 0x002238B0 | 0x4E4 | game | size | 181 | [unk/unk_21D260/func_002238B0.c](unk/unk_21D260/func_002238B0.c) |
| func_001BA070 | 0x001BA070 | 0x4F8 | game | size | 181 | [battle/btl_main/func_001BA070.c](battle/btl_main/func_001BA070.c) |
| func_00141920 | 0x00141920 | 0x310 | game | size | 182 | [sys/amSofdec/func_00141920.c](sys/amSofdec/func_00141920.c) |
| func_0029B550 | 0x0029B550 | 0x528 | game | size | 182 | [story/str_map/func_0029B550.c](story/str_map/func_0029B550.c) |
| func_00140010 | 0x00140010 | 0x404 | game | size | 183 | [sys/unk_13FC20/func_00140010.c](sys/unk_13FC20/func_00140010.c) |
| func_002D6B10 | 0x002D6B10 | 0x42C | game | size | 183 | [unk/unk_2D2530/func_002D6B10.c](unk/unk_2D2530/func_002D6B10.c) |
| func_001B7620 | 0x00468B50 | 0x0 | game | size | 184 | [battle/btl_main/func_001B7620.c](battle/btl_main/func_001B7620.c) |
| func_001181F8 | 0x001181F8 | 0x16C | sdk | size | 184 | [sdk/libcdvd/func_001181F8.c](sdk/libcdvd/func_001181F8.c) |
| func_00204ED0 | 0x00204ED0 | 0x420 | game | size | 184 | [unk/unk_1FB760/func_00204ED0.c](unk/unk_1FB760/func_00204ED0.c) |
| func_002C1F90 | 0x002C1F90 | 0x4E0 | game | size | 185 | [story/str_status/func_002C1F90.c](story/str_status/func_002C1F90.c) |
| func_002C7E00 | 0x002C7E00 | 0x558 | game | size | 185 | [unk/unk_2C41C0/func_002C7E00.c](unk/unk_2C41C0/func_002C7E00.c) |
| func_001FC220 | 0x001FC220 | 0x39C | game | size | 187 | [unk/unk_1FB760/func_001FC220.c](unk/unk_1FB760/func_001FC220.c) |
| func_00193F38 | 0x00193F38 | 0x16C | cri | size | 188 | [cri/sfd/func_00193F38.c](cri/sfd/func_00193F38.c) |
| func_002B8D20 | 0x002B8D20 | 0x4C4 | game | size | 188 | [menu/mn_csmodel/func_002B8D20.c](menu/mn_csmodel/func_002B8D20.c) |
| func_00300F70 | 0x00300F70 | 0x5B4 | game | size | 188 | [unk/unk_2FAFF0/func_00300F70.c](unk/unk_2FAFF0/func_00300F70.c) |
| func_00179EA0 | 0x00179EA0 | 0xC50 | cri | size | 188 | [cri/mpv/func_00179EA0.c](cri/mpv/func_00179EA0.c) |
| func_001A5B40 | 0x001A5B40 | 0x394 | game | size | 189 | [battle/btl_cmd/func_001A5B40.c](battle/btl_cmd/func_001A5B40.c) |
| func_001D4AF0 | 0x001D4AF0 | 0x4D8 | game | size | 189 | [battle/char_secp/func_001D4AF0.c](battle/char_secp/func_001D4AF0.c) |
| func_001E62C0 | 0x001E62C0 | 0x418 | game | size | 190 | [unk/unk_1D5B30/func_001E62C0.c](unk/unk_1D5B30/func_001E62C0.c) |
| func_0023B7D0 | 0x0023B7D0 | 0x410 | game | size | 191 | [unk/unk_23A890/func_0023B7D0.c](unk/unk_23A890/func_0023B7D0.c) |
| func_0013E590 | 0x0013E590 | 0x45C | game | size | 191 | [sys/amObject/func_0013E590.c](sys/amObject/func_0013E590.c) |
| func_002214B0 | 0x002214B0 | 0x494 | game | size | 192 | [unk/unk_21D260/func_002214B0.c](unk/unk_21D260/func_002214B0.c) |
| func_0027E2D0 | 0x0027E2D0 | 0x504 | game | size | 192 | [menu/mn_charasel/func_0027E2D0.c](menu/mn_charasel/func_0027E2D0.c) |
| func_0013CE50 | 0x0013CE50 | 0x504 | game | size | 193 | [sys/amMotion/func_0013CE50.c](sys/amMotion/func_0013CE50.c) |
| func_001A6350 | 0x001A6350 | 0x3DC | game | size | 194 | [battle/btl_cmd/func_001A6350.c](battle/btl_cmd/func_001A6350.c) |
| func_00274120 | 0x00274120 | 0x8D4 | game | size | 194 | [menu/ess_shop/func_00274120.c](menu/ess_shop/func_00274120.c) |
| func_00140420 | 0x00140420 | 0x470 | game | size | 195 | [sys/unk_13FC20/func_00140420.c](sys/unk_13FC20/func_00140420.c) |
| func_001FBDE0 | 0x001FBDE0 | 0x434 | game | size | 198 | [unk/unk_1FB760/func_001FBDE0.c](unk/unk_1FB760/func_001FBDE0.c) |
| func_0023F7A0 | 0x0023F7A0 | 0x404 | game | size | 199 | [unk/unk_23A890/func_0023F7A0.c](unk/unk_23A890/func_0023F7A0.c) |
| func_001F6690 | 0x001F6690 | 0x634 | game | size | 199 | [battle/btb_draw/func_001F6690.c](battle/btb_draw/func_001F6690.c) |
| func_001A6740 | 0x001A6740 | 0x388 | game | size | 200 | [battle/btl_cmd/func_001A6740.c](battle/btl_cmd/func_001A6740.c) |
| func_002DCC60 | 0x002DCC60 | 0x518 | game | size | 201 | [unk/unk_2DB970/func_002DCC60.c](unk/unk_2DB970/func_002DCC60.c) |
| func_001D6E20 | 0x001D6E20 | 0x460 | game | size | 202 | [unk/unk_1D5B30/func_001D6E20.c](unk/unk_1D5B30/func_001D6E20.c) |
| func_002016F0 | 0x002016F0 | 0x424 | game | size | 205 | [unk/unk_1FB760/func_002016F0.c](unk/unk_1FB760/func_002016F0.c) |
| func_00226540 | 0x00226540 | 0x468 | game | size | 206 | [battle/a2d/func_00226540.c](battle/a2d/func_00226540.c) |
| func_002FBFD0 | 0x002FBFD0 | 0x538 | game | size | 207 | [unk/unk_2FAFF0/func_002FBFD0.c](unk/unk_2FAFF0/func_002FBFD0.c) |
| func_001484A0 | 0x001484A0 | 0x54C | game | size | 207 | [sys/unk_147560/func_001484A0.c](sys/unk_147560/func_001484A0.c) |
| func_00277310 | 0x00277310 | 0x5B4 | game | size | 207 | [menu/ess_shop/func_00277310.c](menu/ess_shop/func_00277310.c) |
| func_002995F0 | 0x002995F0 | 0x6A8 | game | size | 208 | [unk/unk_297C60/func_002995F0.c](unk/unk_297C60/func_002995F0.c) |
| func_00228B00 | 0x00228B00 | 0x498 | game | size | 209 | [battle/a2d/func_00228B00.c](battle/a2d/func_00228B00.c) |
| func_00268E40 | 0x00268E40 | 0x5A0 | game | size | 209 | [menu/mn_vsmode/func_00268E40.c](menu/mn_vsmode/func_00268E40.c) |
| amSofdec_Draw | 0x00142E80 | 0x43C | game | size | 212 | [sys/unk_142AA0/amSofdec_Draw.c](sys/unk_142AA0/amSofdec_Draw.c) |
| func_00136E80 | 0x00136E80 | 0x5B4 | game | size | 212 | [sys/unk_133620/func_00136E80.c](sys/unk_133620/func_00136E80.c) |
| func_002454B0 | 0x002454B0 | 0x5CC | game | size | 212 | [unk/unk_23A890/func_002454B0.c](unk/unk_23A890/func_002454B0.c) |
| func_00136870 | 0x00136870 | 0x610 | game | size | 212 | [sys/unk_133620/func_00136870.c](sys/unk_133620/func_00136870.c) |
| func_001A6FA0 | 0x001A6FA0 | 0x450 | game | size | 213 | [battle/btl_cmd/func_001A6FA0.c](battle/btl_cmd/func_001A6FA0.c) |
| func_001E3EB0 | 0x001E3EB0 | 0x590 | game | size | 216 | [unk/unk_1D5B30/func_001E3EB0.c](unk/unk_1D5B30/func_001E3EB0.c) |
| func_0024D060 | 0x0024D060 | 0x454 | game | size | 217 | [battle/skill_cmd/func_0024D060.c](battle/skill_cmd/func_0024D060.c) |
| func_002BC250 | 0x002BC250 | 0x58C | game | size | 217 | [unk/unk_2B98D0/func_002BC250.c](unk/unk_2B98D0/func_002BC250.c) |
| func_00204300 | 0x00204300 | 0x5B0 | game | size | 217 | [unk/unk_1FB760/func_00204300.c](unk/unk_1FB760/func_00204300.c) |
| func_002AD180 | 0x002AD180 | 0x410 | game | size | 219 | [battle/scr_func/func_002AD180.c](battle/scr_func/func_002AD180.c) |
| func_001A5EF0 | 0x001A5EF0 | 0x460 | game | size | 219 | [battle/btl_cmd/func_001A5EF0.c](battle/btl_cmd/func_001A5EF0.c) |
| func_00213570 | 0x00213570 | 0x564 | game | size | 220 | [unk/unk_20A4D0/func_00213570.c](unk/unk_20A4D0/func_00213570.c) |
| func_0027CB20 | 0x0027CB20 | 0x45C | game | size | 221 | [menu/mn_charasel/func_0027CB20.c](menu/mn_charasel/func_0027CB20.c) |
| func_0027A4C0 | 0x0027A4C0 | 0x614 | game | size | 221 | [menu/ess_trade/func_0027A4C0.c](menu/ess_trade/func_0027A4C0.c) |
| func_001FC880 | 0x001FC880 | 0x438 | game | size | 223 | [unk/unk_1FB760/func_001FC880.c](unk/unk_1FB760/func_001FC880.c) |
| func_001B87F0 | 0x001B87F0 | 0x658 | game | size | 225 | [battle/btl_main/func_001B87F0.c](battle/btl_main/func_001B87F0.c) |
| func_001C5870 | 0x001C5870 | 0x4DC | game | size | 226 | [battle/btl_main/func_001C5870.c](battle/btl_main/func_001C5870.c) |
| func_0024DB10 | 0x0024DB10 | 0x5D4 | game | size | 227 | [battle/skill_cmd/func_0024DB10.c](battle/skill_cmd/func_0024DB10.c) |
| func_001C2B10 | 0x001C2B10 | 0x610 | game | size | 227 | [battle/btl_main/func_001C2B10.c](battle/btl_main/func_001C2B10.c) |
| Sys_Init | 0x0014DC10 | 0x89C | game | size | 228 | [sys/script/Sys_Init.c](sys/script/Sys_Init.c) |
| func_001E4820 | 0x001E4820 | 0x4B4 | game | size | 229 | [unk/unk_1D5B30/func_001E4820.c](unk/unk_1D5B30/func_001E4820.c) |
| func_0026A680 | 0x0026A680 | 0x740 | game | size | 229 | [menu/ess_main/func_0026A680.c](menu/ess_main/func_0026A680.c) |
| func_001499C0 | 0x001499C0 | 0x490 | game | size | 230 | [sys/unk_147560/func_001499C0.c](sys/unk_147560/func_001499C0.c) |
| func_002DEA00 | 0x002DEA00 | 0x5C4 | game | size | 230 | [menu/mn_option/func_002DEA00.c](menu/mn_option/func_002DEA00.c) |
| func_00278490 | 0x00278490 | 0x4E4 | game | size | 231 | [menu/ess_trade/func_00278490.c](menu/ess_trade/func_00278490.c) |
| func_001AD570 | 0x001AD570 | 0x610 | game | size | 231 | [battle/btl_main/func_001AD570.c](battle/btl_main/func_001AD570.c) |
| func_00146680 | 0x00146680 | 0x5A0 | game | size | 232 | [sys/unk_1461D0/func_00146680.c](sys/unk_1461D0/func_00146680.c) |
| func_002794D0 | 0x002794D0 | 0x7A8 | game | size | 233 | [menu/ess_trade/func_002794D0.c](menu/ess_trade/func_002794D0.c) |
| func_00133FF0 | 0x00133FF0 | 0x694 | game | size | 234 | [sys/unk_133620/func_00133FF0.c](sys/unk_133620/func_00133FF0.c) |
| func_00215500 | 0x00215500 | 0x3F8 | game | size | 236 | [unk/unk_20A4D0/func_00215500.c](unk/unk_20A4D0/func_00215500.c) |
| func_0011E548 | 0x0011E548 | 0x4C8 | libc | size | 236 | [sdk/libm/func_0011E548.c](sdk/libm/func_0011E548.c) |
| func_00269CC0 | 0x00269CC0 | 0x824 | game | size | 236 | [menu/ess_main/func_00269CC0.c](menu/ess_main/func_00269CC0.c) |
| func_002FD090 | 0x002FD090 | 0x4C8 | game | size | 238 | [unk/unk_2FAFF0/func_002FD090.c](unk/unk_2FAFF0/func_002FD090.c) |
| func_002E2850 | 0x002E2850 | 0x5F8 | game | size | 238 | [unk/unk_2E2290/func_002E2850.c](unk/unk_2E2290/func_002E2850.c) |
| func_0028DFC0 | 0x0028DFC0 | 0x604 | game | size | 238 | [sys/mc_opr/func_0028DFC0.c](sys/mc_opr/func_0028DFC0.c) |
| func_0024ACE0 | 0x0024ACE0 | 0x57C | game | size | 240 | [battle/skill_cmd/func_0024ACE0.c](battle/skill_cmd/func_0024ACE0.c) |
| func_0024FEA0 | 0x0024FEA0 | 0x5B4 | game | size | 240 | [battle/skill_cmd/func_0024FEA0.c](battle/skill_cmd/func_0024FEA0.c) |
| func_002880B0 | 0x002880B0 | 0x450 | game | size | 242 | [sys/mc_opr/func_002880B0.c](sys/mc_opr/func_002880B0.c) |
| func_0023C690 | 0x0023C690 | 0x7EC | game | size | 242 | [unk/unk_23A890/func_0023C690.c](unk/unk_23A890/func_0023C690.c) |
| func_001BF730 | 0x001BF730 | 0x62C | game | size | 243 | [battle/btl_main/func_001BF730.c](battle/btl_main/func_001BF730.c) |
| func_00250DC0 | 0x00250DC0 | 0x63C | game | size | 244 | [battle/skill_cmd/func_00250DC0.c](battle/skill_cmd/func_00250DC0.c) |
| func_002893F0 | 0x002893F0 | 0x500 | game | size | 248 | [sys/mc_opr/func_002893F0.c](sys/mc_opr/func_002893F0.c) |
| func_002D0C90 | 0x002D0C90 | 0x614 | game | size | 249 | [unk/unk_2D04B0/func_002D0C90.c](unk/unk_2D04B0/func_002D0C90.c) |
| func_002273B0 | 0x002273B0 | 0x458 | game | size | 250 | [battle/a2d/func_002273B0.c](battle/a2d/func_002273B0.c) |
| func_002811D0 | 0x002811D0 | 0x698 | game | size | 252 | [unk/unk_280730/func_002811D0.c](unk/unk_280730/func_002811D0.c) |
| func_00223DA0 | 0x00223DA0 | 0x6D4 | game | size | 252 | [unk/unk_21D260/func_00223DA0.c](unk/unk_21D260/func_00223DA0.c) |
| func_001C6860 | 0x001C6860 | 0x8D0 | game | size | 252 | [battle/btl_main/func_001C6860.c](battle/btl_main/func_001C6860.c) |
| func_002FCAF0 | 0x002FCAF0 | 0x464 | game | size | 256 | [unk/unk_2FAFF0/func_002FCAF0.c](unk/unk_2FAFF0/func_002FCAF0.c) |
| func_0023CE80 | 0x0023CE80 | 0x4D8 | game | size | 256 | [unk/unk_23A890/func_0023CE80.c](unk/unk_23A890/func_0023CE80.c) |
| func_0028C740 | 0x0028C740 | 0x598 | game | size | 256 | [sys/mc_opr/func_0028C740.c](sys/mc_opr/func_0028C740.c) |
| func_00271AF0 | 0x00271AF0 | 0x890 | game | size | 262 | [menu/ess_list/func_00271AF0.c](menu/ess_list/func_00271AF0.c) |
| func_00290D00 | 0x00290D00 | 0x680 | game | size | 264 | [story/str_bg/func_00290D00.c](story/str_bg/func_00290D00.c) |
| func_002872A0 | 0x002872A0 | 0x610 | game | size | 273 | [menu/mn_StageSel/func_002872A0.c](menu/mn_StageSel/func_002872A0.c) |
| func_002A8330 | 0x002A8330 | 0x638 | game | size | 275 | [story/evt_scrp/func_002A8330.c](story/evt_scrp/func_002A8330.c) |
| func_0023DC10 | 0x0023DC10 | 0x644 | game | size | 276 | [unk/unk_23A890/func_0023DC10.c](unk/unk_23A890/func_0023DC10.c) |
| func_002C29A0 | 0x002C29A0 | 0x650 | game | size | 276 | [story/str_status/func_002C29A0.c](story/str_status/func_002C29A0.c) |
| func_002BA610 | 0x002BA610 | 0x668 | game | size | 276 | [unk/unk_2B98D0/func_002BA610.c](unk/unk_2B98D0/func_002BA610.c) |
| func_002C32C0 | 0x002C32C0 | 0x750 | game | size | 278 | [story/str_status/func_002C32C0.c](story/str_status/func_002C32C0.c) |
| func_002D3730 | 0x002D3730 | 0x720 | game | size | 282 | [unk/unk_2D2530/func_002D3730.c](unk/unk_2D2530/func_002D3730.c) |
| func_00277C80 | 0x00277C80 | 0x648 | game | size | 283 | [menu/ess_trade/func_00277C80.c](menu/ess_trade/func_00277C80.c) |
| func_00254DB0 | 0x00254DB0 | 0x85C | game | size | 283 | [battle/skill_cmd/func_00254DB0.c](battle/skill_cmd/func_00254DB0.c) |
| func_002B3D90 | 0x002B3D90 | 0x8EC | game | size | 284 | [unk/unk_2B2C20/func_002B3D90.c](unk/unk_2B2C20/func_002B3D90.c) |
| func_001C7670 | 0x001C7670 | 0x6B8 | game | size | 285 | [battle/btl_main/func_001C7670.c](battle/btl_main/func_001C7670.c) |
| func_0011B828 | 0x0011B828 | 0x608 | libc | size | 292 | [sdk/libm/func_0011B828.c](sdk/libm/func_0011B828.c) |
| func_002507B0 | 0x002507B0 | 0x604 | game | size | 293 | [battle/skill_cmd/func_002507B0.c](battle/skill_cmd/func_002507B0.c) |
| func_0028D810 | 0x0028D810 | 0x588 | game | size | 294 | [sys/mc_opr/func_0028D810.c](sys/mc_opr/func_0028D810.c) |
| func_0021D6C0 | 0x0021D6C0 | 0x624 | game | size | 294 | [unk/unk_21D260/func_0021D6C0.c](unk/unk_21D260/func_0021D6C0.c) |
| func_0013D360 | 0x0013D360 | 0x64C | game | size | 296 | [sys/amMotion/func_0013D360.c](sys/amMotion/func_0013D360.c) |
| func_002E0E50 | 0x002E0E50 | 0xA20 | game | size | 296 | [menu/mn_option_2/func_002E0E50.c](menu/mn_option_2/func_002E0E50.c) |
| func_001FD800 | 0x001FD800 | 0x540 | game | size | 298 | [unk/unk_1FB760/func_001FD800.c](unk/unk_1FB760/func_001FD800.c) |
| func_0024D4C0 | 0x0024D4C0 | 0x64C | game | size | 300 | [battle/skill_cmd/func_0024D4C0.c](battle/skill_cmd/func_0024D4C0.c) |
| func_001E0A50 | 0x001E0A50 | 0x788 | game | size | 301 | [unk/unk_1D5B30/func_001E0A50.c](unk/unk_1D5B30/func_001E0A50.c) |
| func_001D7450 | 0x001D7450 | 0x5A0 | game | size | 302 | [unk/unk_1D5B30/func_001D7450.c](unk/unk_1D5B30/func_001D7450.c) |
| func_002C0860 | 0x002C0860 | 0x758 | game | size | 302 | [story/str_status/func_002C0860.c](story/str_status/func_002C0860.c) |
| func_002FF610 | 0x002FF610 | 0x710 | game | size | 305 | [unk/unk_2FAFF0/func_002FF610.c](unk/unk_2FAFF0/func_002FF610.c) |
| func_002316D0 | 0x002316D0 | 0x7A0 | game | size | 308 | [unk/unk_22E0B0/func_002316D0.c](unk/unk_22E0B0/func_002316D0.c) |
| func_002048B0 | 0x002048B0 | 0x614 | game | size | 314 | [unk/unk_1FB760/func_002048B0.c](unk/unk_1FB760/func_002048B0.c) |
| func_00205550 | 0x00205550 | 0x664 | game | size | 315 | [unk/unk_1FB760/func_00205550.c](unk/unk_1FB760/func_00205550.c) |
| func_002038F0 | 0x002038F0 | 0x620 | game | size | 316 | [unk/unk_1FB760/func_002038F0.c](unk/unk_1FB760/func_002038F0.c) |
| func_00256360 | 0x00256360 | 0x678 | game | size | 316 | [battle/skill_cmd/func_00256360.c](battle/skill_cmd/func_00256360.c) |
| func_00227B20 | 0x00227B20 | 0x714 | game | size | 317 | [battle/a2d/func_00227B20.c](battle/a2d/func_00227B20.c) |
| func_002B2400 | 0x002B2400 | 0x818 | game | size | 317 | [unk/unk_2B2400/func_002B2400.c](unk/unk_2B2400/func_002B2400.c) |
| func_002FFD20 | 0x002FFD20 | 0x608 | game | size | 318 | [unk/unk_2FAFF0/func_002FFD20.c](unk/unk_2FAFF0/func_002FFD20.c) |
| func_00222BF0 | 0x00222BF0 | 0xA6C | game | size | 321 | [unk/unk_21D260/func_00222BF0.c](unk/unk_21D260/func_00222BF0.c) |
| func_002269B0 | 0x002269B0 | 0x660 | game | size | 328 | [battle/a2d/func_002269B0.c](battle/a2d/func_002269B0.c) |
| func_0028F090 | 0x0028F090 | 0x68C | game | size | 328 | [story/str_bg/func_0028F090.c](story/str_bg/func_0028F090.c) |
| func_00281E40 | 0x00281E40 | 0x7E0 | game | size | 337 | [unk/unk_280730/func_00281E40.c](unk/unk_280730/func_00281E40.c) |
| func_001DC3E0 | 0x001DC3E0 | 0x778 | game | size | 339 | [unk/unk_1D5B30/func_001DC3E0.c](unk/unk_1D5B30/func_001DC3E0.c) |
| func_002A3190 | 0x002A3190 | 0x64C | game | size | 341 | [story/evt_scrp/func_002A3190.c](story/evt_scrp/func_002A3190.c) |
| func_0026BD50 | 0x0026BD50 | 0xA70 | game | size | 343 | [menu/ess_main/func_0026BD50.c](menu/ess_main/func_0026BD50.c) |
| func_00294A10 | 0x00294A10 | 0x850 | game | size | 349 | [unk/unk_2918A0/func_00294A10.c](unk/unk_2918A0/func_00294A10.c) |
| func_002CB650 | 0x002CB650 | 0x6EC | game | size | 350 | [unk/unk_2CAED0/func_002CB650.c](unk/unk_2CAED0/func_002CB650.c) |
| func_0022EB70 | 0x0022EB70 | 0x9A4 | game | size | 364 | [unk/unk_22E0B0/func_0022EB70.c](unk/unk_22E0B0/func_0022EB70.c) |
| func_0022F900 | 0x0022F900 | 0x7E0 | game | size | 367 | [unk/unk_22E0B0/func_0022F900.c](unk/unk_22E0B0/func_0022F900.c) |
| func_001C0130 | 0x001C0130 | 0x870 | game | size | 369 | [battle/btl_main/func_001C0130.c](battle/btl_main/func_001C0130.c) |
| func_002B61E0 | 0x002B61E0 | 0xA48 | game | size | 373 | [menu/mn_csmodel/func_002B61E0.c](menu/mn_csmodel/func_002B61E0.c) |
| func_001BB310 | 0x001BB310 | 0x948 | game | size | 382 | [battle/btl_main/func_001BB310.c](battle/btl_main/func_001BB310.c) |
| func_002EF7C0 | 0x002EF7C0 | 0x914 | game | size | 384 | [menu/mn_ArenaList/func_002EF7C0.c](menu/mn_ArenaList/func_002EF7C0.c) |
| func_002C9120 | 0x002C9120 | 0x830 | game | size | 387 | [unk/unk_2C41C0/func_002C9120.c](unk/unk_2C41C0/func_002C9120.c) |
| func_0030B2E0 | 0x0030B2E0 | 0xA4C | game | size | 389 | [unk/unk_30B130/func_0030B2E0.c](unk/unk_30B130/func_0030B2E0.c) |
| func_001FFBA0 | 0x001FFBA0 | 0x6C8 | game | size | 394 | [unk/unk_1FB760/func_001FFBA0.c](unk/unk_1FB760/func_001FFBA0.c) |
| func_00210C20 | 0x00210C20 | 0x880 | game | size | 397 | [unk/unk_20A4D0/func_00210C20.c](unk/unk_20A4D0/func_00210C20.c) |
| func_002009B0 | 0x002009B0 | 0x7A0 | game | size | 402 | [unk/unk_1FB760/func_002009B0.c](unk/unk_1FB760/func_002009B0.c) |
| func_002FEED0 | 0x002FEED0 | 0x738 | game | size | 407 | [unk/unk_2FAFF0/func_002FEED0.c](unk/unk_2FAFF0/func_002FEED0.c) |
| func_002F1770 | 0x002F1770 | 0xA34 | game | size | 413 | [menu/mn_InputPass/func_002F1770.c](menu/mn_InputPass/func_002F1770.c) |
| func_00249100 | 0x00249100 | 0x898 | game | size | 419 | [battle/skill_cmd/func_00249100.c](battle/skill_cmd/func_00249100.c) |
| func_002F3210 | 0x002F3210 | 0xA4C | game | size | 420 | [menu/mn_InputPass/func_002F3210.c](menu/mn_InputPass/func_002F3210.c) |
| func_002C41C0 | 0x002C41C0 | 0xAD0 | game | size | 420 | [unk/unk_2C41C0/func_002C41C0.c](unk/unk_2C41C0/func_002C41C0.c) |
| func_002759F0 | 0x002759F0 | 0x9B8 | game | size | 432 | [menu/ess_shop/func_002759F0.c](menu/ess_shop/func_002759F0.c) |
| func_001C4C10 | 0x001C4C10 | 0x9BC | game | size | 438 | [battle/btl_main/func_001C4C10.c](battle/btl_main/func_001C4C10.c) |
| func_002C72E0 | 0x002C72E0 | 0x970 | game | size | 443 | [unk/unk_2C41C0/func_002C72E0.c](unk/unk_2C41C0/func_002C72E0.c) |
| func_00293E80 | 0x00293E80 | 0xA40 | game | size | 444 | [unk/unk_2918A0/func_00293E80.c](unk/unk_2918A0/func_00293E80.c) |
| func_00229840 | 0x00229840 | 0x854 | game | size | 467 | [battle/a2d/func_00229840.c](battle/a2d/func_00229840.c) |
| func_0028F930 | 0x0028F930 | 0x9F0 | game | size | 484 | [story/str_bg/func_0028F930.c](story/str_bg/func_0028F930.c) |
| func_001A9AD0 | 0x001A9AD0 | 0x980 | game | size | 493 | [battle/btl_cmd/func_001A9AD0.c](battle/btl_cmd/func_001A9AD0.c) |
| func_002A6210 | 0x002A6210 | 0xB98 | game | size | 501 | [story/evt_scrp/func_002A6210.c](story/evt_scrp/func_002A6210.c) |
| func_00210240 | 0x00210240 | 0x9E0 | game | size | 503 | [unk/unk_20A4D0/func_00210240.c](unk/unk_20A4D0/func_00210240.c) |
| func_0027AC90 | 0x0027AC90 | 0xB34 | game | size | 512 | [menu/mn_charasel/func_0027AC90.c](menu/mn_charasel/func_0027AC90.c) |
| func_001DCC90 | 0x001DCC90 | 0x9E4 | game | size | 524 | [unk/unk_1D5B30/func_001DCC90.c](unk/unk_1D5B30/func_001DCC90.c) |
| func_001DE4B0 | 0x001DE4B0 | 0xCBC | game | size | 524 | [unk/unk_1D5B30/func_001DE4B0.c](unk/unk_1D5B30/func_001DE4B0.c) |
| func_002DBFE0 | 0x002DBFE0 | 0xC64 | game | size | 534 | [unk/unk_2DB970/func_002DBFE0.c](unk/unk_2DB970/func_002DBFE0.c) |
| func_0023BBE0 | 0x0023BBE0 | 0xAB0 | game | size | 578 | [unk/unk_23A890/func_0023BBE0.c](unk/unk_23A890/func_0023BBE0.c) |
| func_001FE2B0 | 0x001FE2B0 | 0xA48 | game | size | 579 | [unk/unk_1FB760/func_001FE2B0.c](unk/unk_1FB760/func_001FE2B0.c) |
| func_003019A0 | 0x003019A0 | 0xAB0 | game | size | 583 | [unk/unk_301530/func_003019A0.c](unk/unk_301530/func_003019A0.c) |
| func_002ECFD0 | 0x002ECFD0 | 0xC78 | game | size | 677 | [unk/unk_2ECB90/func_002ECFD0.c](unk/unk_2ECB90/func_002ECFD0.c) |
| func_00303A30 | 0x00303A30 | 0xF3C | game | size | 684 | [unk/unk_301530/func_00303A30.c](unk/unk_301530/func_00303A30.c) |
| func_001A73F0 | 0x001A73F0 | 0xCF0 | game | size | 696 | [battle/btl_cmd/func_001A73F0.c](battle/btl_cmd/func_001A73F0.c) |
| func_002300E0 | 0x002300E0 | 0x15F0 | game | size | 769 | [unk/unk_22E0B0/func_002300E0.c](unk/unk_22E0B0/func_002300E0.c) |
| func_001C09A0 | 0x001C09A0 | 0x1814 | game | size | 894 | [battle/btl_main/func_001C09A0.c](battle/btl_main/func_001C09A0.c) |
| func_00231E70 | 0x00231E70 | 0x19E0 | game | size | 971 | [unk/unk_231E70/func_00231E70.c](unk/unk_231E70/func_00231E70.c) |
| func_00302450 | 0x00302450 | 0x15DC | game | size | 1030 | [unk/unk_301530/func_00302450.c](unk/unk_301530/func_00302450.c) |
| func_00262290 | 0x00262290 | 0x1A5C | game | size | 1227 | [unk/unk_260CB0/func_00262290.c](unk/unk_260CB0/func_00262290.c) |
| func_00295300 | 0x00295300 | 0x2958 | game | size | 1998 | [unk/unk_2918A0/func_00295300.c](unk/unk_2918A0/func_00295300.c) |
| func_001B46C0 | 0x00468940 | 0x0 | game | cerr |  | [battle/btl_main/func_001B46C0.c](battle/btl_main/func_001B46C0.c) |
| func_00117D48 | 0x00117D48 | 0x1C | sdk | cerr |  | [sdk/libsdr/func_00117D48.c](sdk/libsdr/func_00117D48.c) |
| func_0018B790 | 0x0018B790 | 0x28 | cri | cerr |  | [cri/sfd/func_0018B790.c](cri/sfd/func_0018B790.c) |
| func_0018B7B8 | 0x0018B7B8 | 0x28 | cri | cerr |  | [cri/sfd/func_0018B7B8.c](cri/sfd/func_0018B7B8.c) |
| func_0019B460 | 0x0019B460 | 0x34 | cri | cerr |  | [cri/sfd_00194D48/func_0019B460.c](cri/sfd_00194D48/func_0019B460.c) |
| func_0010CE58 | 0x0010CE58 | 0x38 | sdk | cerr |  | [sdk/libkernl_0010BE70/func_0010CE58.c](sdk/libkernl_0010BE70/func_0010CE58.c) |
| func_001849A8 | 0x001849A8 | 0x48 | cri | cerr |  | [cri/mwsfd/func_001849A8.c](cri/mwsfd/func_001849A8.c) |
| func_00189008 | 0x00189008 | 0x48 | cri | cerr |  | [cri/sfd/func_00189008.c](cri/sfd/func_00189008.c) |
| func_00190DF0 | 0x00190DF0 | 0x4C | cri | cerr |  | [cri/sfd/func_00190DF0.c](cri/sfd/func_00190DF0.c) |
| func_001570B8 | 0x001570B8 | 0x50 | cri | cerr |  | [cri/adx_001563B0/func_001570B8.c](cri/adx_001563B0/func_001570B8.c) |
| func_00157108 | 0x00157108 | 0x50 | cri | cerr |  | [cri/adx_001563B0/func_00157108.c](cri/adx_001563B0/func_00157108.c) |
| func_0019B290 | 0x0019B290 | 0x50 | cri | cerr |  | [cri/sfd_00194D48/func_0019B290.c](cri/sfd_00194D48/func_0019B290.c) |
| func_0019C0D8 | 0x0019C0D8 | 0x50 | cri | cerr |  | [cri/sfd_00194D48/func_0019C0D8.c](cri/sfd_00194D48/func_0019C0D8.c) |
| func_001A02E0 | 0x001A02E0 | 0x50 | cri | cerr |  | [cri/sfx/func_001A02E0.c](cri/sfx/func_001A02E0.c) |
| func_001A0588 | 0x001A0588 | 0x50 | cri | cerr |  | [cri/sfx/func_001A0588.c](cri/sfx/func_001A0588.c) |
| mwPlyGetNumSkipEmptyB | 0x001842F8 | 0x54 | cri | cerr |  | [cri/mwsfd/mwPlyGetNumSkipEmptyB.c](cri/mwsfd/mwPlyGetNumSkipEmptyB.c) |
| mwPlyGetNumTotalDec | 0x00183F18 | 0x54 | cri | cerr |  | [cri/mwsfd/mwPlyGetNumTotalDec.c](cri/mwsfd/mwPlyGetNumTotalDec.c) |
| func_0017E268 | 0x0017E268 | 0x58 | cri | cerr |  | [cri/mpv/func_0017E268.c](cri/mpv/func_0017E268.c) |
| func_0018AE48 | 0x0018AE48 | 0x58 | cri | cerr |  | [cri/sfd/func_0018AE48.c](cri/sfd/func_0018AE48.c) |
| func_00191018 | 0x00191018 | 0x5C | cri | cerr |  | [cri/sfd/func_00191018.c](cri/sfd/func_00191018.c) |
| mwPlyGetNumSkipDec | 0x00183748 | 0x60 | cri | cerr |  | [cri/mwsfd/mwPlyGetNumSkipDec.c](cri/mwsfd/mwPlyGetNumSkipDec.c) |
| func_00195810 | 0x00195810 | 0x64 | cri | cerr |  | [cri/sfd_00194D48/func_00195810.c](cri/sfd_00194D48/func_00195810.c) |
| func_0019B228 | 0x0019B228 | 0x64 | cri | cerr |  | [cri/sfd_00194D48/func_0019B228.c](cri/sfd_00194D48/func_0019B228.c) |
| func_001003F0 | 0x001003F0 | 0x68 | sdk | cerr |  | [sdk/libgraph/func_001003F0.c](sdk/libgraph/func_001003F0.c) |
| func_0018DCD0 | 0x0018DCD0 | 0x68 | cri | cerr |  | [cri/sfd/func_0018DCD0.c](cri/sfd/func_0018DCD0.c) |
| func_00197460 | 0x00197460 | 0x6C | cri | cerr |  | [cri/sfd_00194D48/func_00197460.c](cri/sfd_00194D48/func_00197460.c) |
| func_00198F70 | 0x00198F70 | 0x6C | cri | cerr |  | [cri/sfd_00194D48/func_00198F70.c](cri/sfd_00194D48/func_00198F70.c) |
| func_0010CED8 | 0x0010CED8 | 0x70 | sdk | cerr |  | [sdk/libkernl_0010BE70/func_0010CED8.c](sdk/libkernl_0010BE70/func_0010CED8.c) |
| func_00185810 | 0x00185810 | 0x70 | cri | cerr |  | [cri/mwsfd/func_00185810.c](cri/mwsfd/func_00185810.c) |
| func_001943F8 | 0x001943F8 | 0x70 | cri | cerr |  | [cri/sfd/func_001943F8.c](cri/sfd/func_001943F8.c) |
| func_00104D68 | 0x00104D68 | 0x74 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00104D68.c](sdk/libmpeg_00104BE8/func_00104D68.c) |
| func_00107E58 | 0x00107E58 | 0x74 | sdk | cerr |  | [sdk/libmpeg/kfiv_mpeg/func_00107E58.c](sdk/libmpeg/kfiv_mpeg/func_00107E58.c) |
| func_00116DC8 | 0x00116DC8 | 0x74 | sdk | cerr |  | [sdk/libpad/kfiv_libpad/func_00116DC8.c](sdk/libpad/kfiv_libpad/func_00116DC8.c) |
| func_00190358 | 0x00190358 | 0x74 | cri | cerr |  | [cri/sfd/func_00190358.c](cri/sfd/func_00190358.c) |
| func_00188578 | 0x00188578 | 0x78 | cri | cerr |  | [cri/sfd/func_00188578.c](cri/sfd/func_00188578.c) |
| func_0018B8F0 | 0x0018B8F0 | 0x7C | cri | cerr |  | [cri/sfd/func_0018B8F0.c](cri/sfd/func_0018B8F0.c) |
| func_0019AD80 | 0x0019AD80 | 0x7C | cri | cerr |  | [cri/sfd_00194D48/func_0019AD80.c](cri/sfd_00194D48/func_0019AD80.c) |
| func_0019A408 | 0x0019A408 | 0x80 | cri | cerr |  | [cri/sfd_00194D48/func_0019A408.c](cri/sfd_00194D48/func_0019A408.c) |
| func_001A0108 | 0x001A0108 | 0x80 | cri | cerr |  | [cri/sfx/func_001A0108.c](cri/sfx/func_001A0108.c) |
| kprintf | 0x0010CFC8 | 0x80 | sdk | cerr |  | [sdk/libkernl_0010BE70/kprintf.c](sdk/libkernl_0010BE70/kprintf.c) |
| scePrintf | 0x0010CF48 | 0x80 | sdk | cerr |  | [sdk/libkernl_0010BE70/scePrintf.c](sdk/libkernl_0010BE70/scePrintf.c) |
| func_00157398 | 0x00157398 | 0x88 | cri | cerr |  | [cri/adx_001563B0/func_00157398.c](cri/adx_001563B0/func_00157398.c) |
| func_00157420 | 0x00157420 | 0x88 | cri | cerr |  | [cri/adx_001563B0/func_00157420.c](cri/adx_001563B0/func_00157420.c) |
| func_001884E8 | 0x001884E8 | 0x90 | cri | cerr |  | [cri/sfd/func_001884E8.c](cri/sfd/func_001884E8.c) |
| func_001975F0 | 0x001975F0 | 0x90 | cri | cerr |  | [cri/sfd_00194D48/func_001975F0.c](cri/sfd_00194D48/func_001975F0.c) |
| func_00104DE0 | 0x00104DE0 | 0x94 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00104DE0.c](sdk/libmpeg_00104BE8/func_00104DE0.c) |
| func_00166ED8 | 0x00166ED8 | 0x94 | cri | cerr |  | [cri/dvci/func_00166ED8.c](cri/dvci/func_00166ED8.c) |
| func_00168CD0 | 0x00168CD0 | 0x94 | cri | cerr |  | [cri/htci/func_00168CD0.c](cri/htci/func_00168CD0.c) |
| func_0019A7B0 | 0x0019A7B0 | 0x94 | cri | cerr |  | [cri/sfd_00194D48/func_0019A7B0.c](cri/sfd_00194D48/func_0019A7B0.c) |
| func_0018BF88 | 0x0018BF88 | 0x98 | cri | cerr |  | [cri/sfd/func_0018BF88.c](cri/sfd/func_0018BF88.c) |
| func_0018F0B8 | 0x0018F0B8 | 0x98 | cri | cerr |  | [cri/sfd/func_0018F0B8.c](cri/sfd/func_0018F0B8.c) |
| func_0019B8A0 | 0x0019B8A0 | 0x98 | cri | cerr |  | [cri/sfd_00194D48/func_0019B8A0.c](cri/sfd_00194D48/func_0019B8A0.c) |
| func_0019C040 | 0x0019C040 | 0x98 | cri | cerr |  | [cri/sfd_00194D48/func_0019C040.c](cri/sfd_00194D48/func_0019C040.c) |
| mwPlyGetPlyInf | 0x00184400 | 0x98 | cri | cerr |  | [cri/mwsfd/mwPlyGetPlyInf.c](cri/mwsfd/mwPlyGetPlyInf.c) |
| func_00105360 | 0x00105360 | 0x9C | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105360.c](sdk/libmpeg_00104BE8/func_00105360.c) |
| func_0018AFB8 | 0x0018AFB8 | 0x9C | cri | cerr |  | [cri/sfd/func_0018AFB8.c](cri/sfd/func_0018AFB8.c) |
| func_00194798 | 0x00194798 | 0x9C | cri | cerr |  | [cri/sfd/func_00194798.c](cri/sfd/func_00194798.c) |
| func_00194838 | 0x00194838 | 0x9C | cri | cerr |  | [cri/sfd/func_00194838.c](cri/sfd/func_00194838.c) |
| mwPlyGetSyncMode | 0x00183E10 | 0x9C | cri | cerr |  | [cri/mwsfd/mwPlyGetSyncMode.c](cri/mwsfd/mwPlyGetSyncMode.c) |
| func_0010F000 | 0x0010F000 | 0xA0 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_0010F000.c](sdk/libkernl/kfiv_filestub/func_0010F000.c) |
| func_0018A900 | 0x0018A900 | 0xA0 | cri | cerr |  | [cri/sfd/func_0018A900.c](cri/sfd/func_0018A900.c) |
| func_0018F5D0 | 0x0018F5D0 | 0xA0 | cri | cerr |  | [cri/sfd/func_0018F5D0.c](cri/sfd/func_0018F5D0.c) |
| func_00198FE0 | 0x00198FE0 | 0xA0 | cri | cerr |  | [cri/sfd_00194D48/func_00198FE0.c](cri/sfd_00194D48/func_00198FE0.c) |
| func_0018AA98 | 0x0018AA98 | 0xA4 | cri | cerr |  | [cri/sfd/func_0018AA98.c](cri/sfd/func_0018AA98.c) |
| func_00191078 | 0x00191078 | 0xA4 | cri | cerr |  | [cri/sfd/func_00191078.c](cri/sfd/func_00191078.c) |
| mwPlySfdInit | 0x00182470 | 0xA4 | cri | cerr |  | [cri/mwsfd/mwPlySfdInit.c](cri/mwsfd/mwPlySfdInit.c) |
| func_00179148 | 0x00179148 | 0xA8 | cri | cerr |  | [cri/mpv/func_00179148.c](cri/mpv/func_00179148.c) |
| func_001855A8 | 0x001855A8 | 0xA8 | cri | cerr |  | [cri/mwsfd/func_001855A8.c](cri/mwsfd/func_001855A8.c) |
| func_00193608 | 0x00193608 | 0xA8 | cri | cerr |  | [cri/sfd/func_00193608.c](cri/sfd/func_00193608.c) |
| func_001990D8 | 0x001990D8 | 0xA8 | cri | cerr |  | [cri/sfd_00194D48/func_001990D8.c](cri/sfd_00194D48/func_001990D8.c) |
| mwPlyFxCnvFrmZ16 | 0x00184BC8 | 0xA8 | cri | cerr |  | [cri/mwsfd/mwPlyFxCnvFrmZ16.c](cri/mwsfd/mwPlyFxCnvFrmZ16.c) |
| mwPlyFxCnvFrmZ32 | 0x00184C70 | 0xA8 | cri | cerr |  | [cri/mwsfd/mwPlyFxCnvFrmZ32.c](cri/mwsfd/mwPlyFxCnvFrmZ32.c) |
| func_00105000 | 0x00105000 | 0xAC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105000.c](sdk/libmpeg_00104BE8/func_00105000.c) |
| func_00105400 | 0x00105400 | 0xAC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105400.c](sdk/libmpeg_00104BE8/func_00105400.c) |
| func_0018B970 | 0x0018B970 | 0xAC | cri | cerr |  | [cri/sfd/func_0018B970.c](cri/sfd/func_0018B970.c) |
| func_002D99A0 | 0x002D99A0 | 0xAC | game | cerr |  | [unk/unk_2D9510/func_002D99A0.c](unk/unk_2D9510/func_002D99A0.c) |
| func_002D9C20 | 0x002D9C20 | 0xAC | game | cerr |  | [unk/unk_2D9510/func_002D9C20.c](unk/unk_2D9510/func_002D9C20.c) |
| func_002D9F80 | 0x002D9F80 | 0xAC | game | cerr |  | [unk/unk_2D9510/func_002D9F80.c](unk/unk_2D9510/func_002D9F80.c) |
| func_002DA310 | 0x002DA310 | 0xAC | game | cerr |  | [unk/unk_2D9510/func_002DA310.c](unk/unk_2D9510/func_002DA310.c) |
| func_0011A3C0 | 0x0011A3C0 | 0xB0 | sdk | cerr |  | [sdk/libmc/func_0011A3C0.c](sdk/libmc/func_0011A3C0.c) |
| func_0018F008 | 0x0018F008 | 0xB0 | cri | cerr |  | [cri/sfd/func_0018F008.c](cri/sfd/func_0018F008.c) |
| scePadGetButtonMask | 0x001175F8 | 0xB0 | sdk | cerr |  | [sdk/libpad/kfiv_libpad/scePadGetButtonMask.c](sdk/libpad/kfiv_libpad/scePadGetButtonMask.c) |
| func_00104E78 | 0x00104E78 | 0xB4 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00104E78.c](sdk/libmpeg_00104BE8/func_00104E78.c) |
| func_001886A8 | 0x001886A8 | 0xB4 | cri | cerr |  | [cri/sfd/func_001886A8.c](cri/sfd/func_001886A8.c) |
| func_00188A68 | 0x00188A68 | 0xB4 | cri | cerr |  | [cri/sfd/func_00188A68.c](cri/sfd/func_00188A68.c) |
| func_001050B0 | 0x001050B0 | 0xB8 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_001050B0.c](sdk/libmpeg_00104BE8/func_001050B0.c) |
| func_001882C8 | 0x001882C8 | 0xB8 | cri | cerr |  | [cri/sfd/func_001882C8.c](cri/sfd/func_001882C8.c) |
| func_0018A520 | 0x0018A520 | 0xB8 | cri | cerr |  | [cri/sfd/func_0018A520.c](cri/sfd/func_0018A520.c) |
| func_0018F210 | 0x0018F210 | 0xB8 | cri | cerr |  | [cri/sfd/func_0018F210.c](cri/sfd/func_0018F210.c) |
| func_00162AD8 | 0x00162AD8 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00162AD8.c](cri/adx_00162A70/func_00162AD8.c) |
| func_00162F30 | 0x00162F30 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00162F30.c](cri/adx_00162A70/func_00162F30.c) |
| func_001632D8 | 0x001632D8 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_001632D8.c](cri/adx_00162A70/func_001632D8.c) |
| func_00163398 | 0x00163398 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00163398.c](cri/adx_00162A70/func_00163398.c) |
| func_00163458 | 0x00163458 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00163458.c](cri/adx_00162A70/func_00163458.c) |
| func_00163698 | 0x00163698 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00163698.c](cri/adx_00162A70/func_00163698.c) |
| func_00163868 | 0x00163868 | 0xBC | cri | cerr |  | [cri/adx_00162A70/func_00163868.c](cri/adx_00162A70/func_00163868.c) |
| func_001895D8 | 0x001895D8 | 0xBC | cri | cerr |  | [cri/sfd/func_001895D8.c](cri/sfd/func_001895D8.c) |
| func_001639F8 | 0x001639F8 | 0xC0 | cri | cerr |  | [cri/adx_00162A70/func_001639F8.c](cri/adx_00162A70/func_001639F8.c) |
| func_0018BA20 | 0x0018BA20 | 0xC0 | cri | cerr |  | [cri/sfd/func_0018BA20.c](cri/sfd/func_0018BA20.c) |
| func_001914C8 | 0x001914C8 | 0xC0 | cri | cerr |  | [cri/sfd/func_001914C8.c](cri/sfd/func_001914C8.c) |
| func_00191B80 | 0x00191B80 | 0xC0 | cri | cerr |  | [cri/sfd/func_00191B80.c](cri/sfd/func_00191B80.c) |
| func_002A1700 | 0x002A1700 | 0xC4 | game | cerr |  | [story/evt_scrp/func_002A1700.c](story/evt_scrp/func_002A1700.c) |
| func_0010B2D8 | 0x0010B2D8 | 0xC8 | sdk | cerr |  | [sdk/libkernl_0010B038/func_0010B2D8.c](sdk/libkernl_0010B038/func_0010B2D8.c) |
| func_00167AD8 | 0x00167AD8 | 0xC8 | cri | cerr |  | [cri/dvci/func_00167AD8.c](cri/dvci/func_00167AD8.c) |
| func_0018A358 | 0x0018A358 | 0xC8 | cri | cerr |  | [cri/sfd/func_0018A358.c](cri/sfd/func_0018A358.c) |
| func_00104F30 | 0x00104F30 | 0xCC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00104F30.c](sdk/libmpeg_00104BE8/func_00104F30.c) |
| func_00126960 | 0x00126960 | 0xCC | libc | cerr |  | [sdk/libc/kfiv_mprec/func_00126960.c](sdk/libc/kfiv_mprec/func_00126960.c) |
| func_00162B98 | 0x00162B98 | 0xCC | cri | cerr |  | [cri/adx_00162A70/func_00162B98.c](cri/adx_00162A70/func_00162B98.c) |
| func_00163928 | 0x00163928 | 0xCC | cri | cerr |  | [cri/adx_00162A70/func_00163928.c](cri/adx_00162A70/func_00163928.c) |
| func_001919D0 | 0x001919D0 | 0xCC | cri | cerr |  | [cri/sfd/func_001919D0.c](cri/sfd/func_001919D0.c) |
| func_002A17D0 | 0x002A17D0 | 0xCC | game | cerr |  | [story/evt_scrp/func_002A17D0.c](story/evt_scrp/func_002A17D0.c) |
| func_00105750 | 0x00105750 | 0xD0 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105750.c](sdk/libmpeg_00104BE8/func_00105750.c) |
| func_0018DC00 | 0x0018DC00 | 0xD0 | cri | cerr |  | [cri/sfd/func_0018DC00.c](cri/sfd/func_0018DC00.c) |
| func_00263CF0 | 0x00263CF0 | 0xD0 | game | cerr |  | [unk/unk_260CB0/func_00263CF0.c](unk/unk_260CB0/func_00263CF0.c) |
| func_00105678 | 0x00105678 | 0xD4 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105678.c](sdk/libmpeg_00104BE8/func_00105678.c) |
| func_0021AA50 | 0x0021AA50 | 0xD4 | game | cerr |  | [unk/unk_21A4C0/func_0021AA50.c](unk/unk_21A4C0/func_0021AA50.c) |
| func_0018E700 | 0x0018E700 | 0xD8 | cri | cerr |  | [cri/sfd/func_0018E700.c](cri/sfd/func_0018E700.c) |
| func_001054B0 | 0x001054B0 | 0xDC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_001054B0.c](sdk/libmpeg_00104BE8/func_001054B0.c) |
| func_00192040 | 0x00192040 | 0xE0 | cri | cerr |  | [cri/sfd/func_00192040.c](cri/sfd/func_00192040.c) |
| func_00197138 | 0x00197138 | 0xE0 | cri | cerr |  | [cri/sfd_00194D48/func_00197138.c](cri/sfd_00194D48/func_00197138.c) |
| func_001A0E48 | 0x001A0E48 | 0xE0 | cri | cerr |  | [cri/sfx/func_001A0E48.c](cri/sfx/func_001A0E48.c) |
| func_00105590 | 0x00105590 | 0xE4 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105590.c](sdk/libmpeg_00104BE8/func_00105590.c) |
| func_0011CAB8 | 0x0011CAB8 | 0xE4 | libc | cerr |  | [sdk/libm/func_0011CAB8.c](sdk/libm/func_0011CAB8.c) |
| func_00190180 | 0x00190180 | 0xE4 | cri | cerr |  | [cri/sfd/func_00190180.c](cri/sfd/func_00190180.c) |
| func_00194968 | 0x00194968 | 0xE4 | cri | cerr |  | [cri/sfd/func_00194968.c](cri/sfd/func_00194968.c) |
| func_00104A38 | 0x00104A38 | 0xEC | sdk | cerr |  | [sdk/libmpeg/func_00104A38.c](sdk/libmpeg/func_00104A38.c) |
| func_0010B038 | 0x0010B038 | 0xEC | sdk | cerr |  | [sdk/libkernl_0010B038/func_0010B038.c](sdk/libkernl_0010B038/func_0010B038.c) |
| func_00167598 | 0x00167598 | 0xEC | cri | cerr |  | [cri/dvci/func_00167598.c](cri/dvci/func_00167598.c) |
| func_00167688 | 0x00167688 | 0xEC | cri | cerr |  | [cri/dvci/func_00167688.c](cri/dvci/func_00167688.c) |
| func_00179310 | 0x00179310 | 0xEC | cri | cerr |  | [cri/mpv/func_00179310.c](cri/mpv/func_00179310.c) |
| func_00193870 | 0x00193870 | 0xEC | cri | cerr |  | [cri/sfd/func_00193870.c](cri/sfd/func_00193870.c) |
| func_0010F4F8 | 0x0010F4F8 | 0xF0 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_0010F4F8.c](sdk/libkernl/kfiv_filestub/func_0010F4F8.c) |
| func_00189898 | 0x00189898 | 0xF0 | cri | cerr |  | [cri/sfd/func_00189898.c](cri/sfd/func_00189898.c) |
| func_0018B540 | 0x0018B540 | 0xF0 | cri | cerr |  | [cri/sfd/func_0018B540.c](cri/sfd/func_0018B540.c) |
| func_002194C0 | 0x002194C0 | 0xF0 | game | cerr |  | [unk/unk_20A4D0/func_002194C0.c](unk/unk_20A4D0/func_002194C0.c) |
| func_00307C00 | 0x00307C00 | 0xF0 | game | cerr |  | [menu/mn_ArenaCharasel_pvsc/func_00307C00.c](menu/mn_ArenaCharasel_pvsc/func_00307C00.c) |
| func_0018B298 | 0x0018B298 | 0xF4 | cri | cerr |  | [cri/sfd/func_0018B298.c](cri/sfd/func_0018B298.c) |
| func_00105168 | 0x00105168 | 0xF8 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105168.c](sdk/libmpeg_00104BE8/func_00105168.c) |
| func_00194468 | 0x00194468 | 0xF8 | cri | cerr |  | [cri/sfd/func_00194468.c](cri/sfd/func_00194468.c) |
| func_0019A910 | 0x0019A910 | 0xF8 | cri | cerr |  | [cri/sfd_00194D48/func_0019A910.c](cri/sfd_00194D48/func_0019A910.c) |
| func_002CB550 | 0x002CB550 | 0xF8 | game | cerr |  | [unk/unk_2CAED0/func_002CB550.c](unk/unk_2CAED0/func_002CB550.c) |
| mfci_get_adr_size | 0x0016A7F8 | 0xF8 | cri | cerr |  | [cri/mfci/mfci_get_adr_size.c](cri/mfci/mfci_get_adr_size.c) |
| func_00105260 | 0x00105260 | 0xFC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105260.c](sdk/libmpeg_00104BE8/func_00105260.c) |
| func_001E6F70 | 0x001E6F70 | 0xFC | game | cerr |  | [unk/unk_1D5B30/func_001E6F70.c](unk/unk_1D5B30/func_001E6F70.c) |
| func_00107180 | 0x00107180 | 0x100 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00107180.c](sdk/libmpeg_00104BE8/func_00107180.c) |
| func_00150FB8 | 0x00150FB8 | 0x100 | cri | cerr |  | [cri/adx_0014EF28/func_00150FB8.c](cri/adx_0014EF28/func_00150FB8.c) |
| func_002D9CD0 | 0x002D9CD0 | 0x104 | game | cerr |  | [unk/unk_2D9510/func_002D9CD0.c](unk/unk_2D9510/func_002D9CD0.c) |
| func_00163760 | 0x00163760 | 0x108 | cri | cerr |  | [cri/adx_00162A70/func_00163760.c](cri/adx_00162A70/func_00163760.c) |
| func_0017B5B8 | 0x0017B5B8 | 0x108 | cri | cerr |  | [cri/mpv/func_0017B5B8.c](cri/mpv/func_0017B5B8.c) |
| func_00181A20 | 0x00181A20 | 0x108 | cri | cerr |  | [cri/mwsfd/func_00181A20.c](cri/mwsfd/func_00181A20.c) |
| func_00188C40 | 0x00188C40 | 0x108 | cri | cerr |  | [cri/sfd/func_00188C40.c](cri/sfd/func_00188C40.c) |
| func_00192860 | 0x00192860 | 0x108 | cri | cerr |  | [cri/sfd/func_00192860.c](cri/sfd/func_00192860.c) |
| func_00163098 | 0x00163098 | 0x110 | cri | cerr |  | [cri/adx_00162A70/func_00163098.c](cri/adx_00162A70/func_00163098.c) |
| func_0016F828 | 0x0016F828 | 0x110 | cri | cerr |  | [cri/sj/func_0016F828.c](cri/sj/func_0016F828.c) |
| func_0016F9C8 | 0x0016F9C8 | 0x110 | cri | cerr |  | [cri/sj/func_0016F9C8.c](cri/sj/func_0016F9C8.c) |
| func_0017B6C0 | 0x0017B6C0 | 0x110 | cri | cerr |  | [cri/mpv/func_0017B6C0.c](cri/mpv/func_0017B6C0.c) |
| func_001A0BC8 | 0x001A0BC8 | 0x110 | cri | cerr |  | [cri/sfx/func_001A0BC8.c](cri/sfx/func_001A0BC8.c) |
| func_00105940 | 0x00105940 | 0x114 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105940.c](sdk/libmpeg_00104BE8/func_00105940.c) |
| func_00117150 | 0x00117150 | 0x114 | sdk | cerr |  | [sdk/libpad/kfiv_libpad/func_00117150.c](sdk/libpad/kfiv_libpad/func_00117150.c) |
| func_0019FFF0 | 0x0019FFF0 | 0x114 | cri | cerr |  | [cri/sfx/func_0019FFF0.c](cri/sfx/func_0019FFF0.c) |
| func_00117038 | 0x00117038 | 0x118 | sdk | cerr |  | [sdk/libpad/kfiv_libpad/func_00117038.c](sdk/libpad/kfiv_libpad/func_00117038.c) |
| func_00193360 | 0x00193360 | 0x118 | cri | cerr |  | [cri/sfd/func_00193360.c](cri/sfd/func_00193360.c) |
| func_001E2CC0 | 0x001E2CC0 | 0x11C | game | cerr |  | [unk/unk_1D5B30/func_001E2CC0.c](unk/unk_1D5B30/func_001E2CC0.c) |
| MWSST_Create | 0x00186B38 | 0x120 | cri | cerr |  | [cri/mwsfd/MWSST_Create.c](cri/mwsfd/MWSST_Create.c) |
| func_00105820 | 0x00105820 | 0x120 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00105820.c](sdk/libmpeg_00104BE8/func_00105820.c) |
| func_001518A0 | 0x001518A0 | 0x120 | cri | cerr |  | [cri/adx_0014EF28/func_001518A0.c](cri/adx_0014EF28/func_001518A0.c) |
| func_001742A8 | 0x001742A8 | 0x120 | cri | cerr |  | [cri/mpv/func_001742A8.c](cri/mpv/func_001742A8.c) |
| func_001791F0 | 0x001791F0 | 0x120 | cri | cerr |  | [cri/mpv/func_001791F0.c](cri/mpv/func_001791F0.c) |
| func_00117AD8 | 0x00117AD8 | 0x124 | sdk | cerr |  | [sdk/libpad_00117A70/func_00117AD8.c](sdk/libpad_00117A70/func_00117AD8.c) |
| func_001A1498 | 0x001A1498 | 0x124 | cri | cerr |  | [cri/sfx/func_001A1498.c](cri/sfx/func_001A1498.c) |
| func_001D7CC0 | 0x001D7CC0 | 0x128 | game | cerr |  | [unk/unk_1D5B30/func_001D7CC0.c](unk/unk_1D5B30/func_001D7CC0.c) |
| func_00110CF8 | 0x00110CF8 | 0x12C | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_00110CF8.c](sdk/libkernl/kfiv_filestub/func_00110CF8.c) |
| func_00127810 | 0x00127810 | 0x12C | libc | cerr |  | [sdk/libc_00127738/func_00127810.c](sdk/libc_00127738/func_00127810.c) |
| func_0014E5D0 | 0x0014E5D0 | 0x12C | cri | cerr |  | [cri/adx/func_0014E5D0.c](cri/adx/func_0014E5D0.c) |
| func_001922B8 | 0x001922B8 | 0x12C | cri | cerr |  | [cri/sfd/func_001922B8.c](cri/sfd/func_001922B8.c) |
| func_0015D720 | 0x0015D720 | 0x130 | cri | cerr |  | [cri/adx_00159278/func_0015D720.c](cri/adx_00159278/func_0015D720.c) |
| StrSelect_TaskOpen | 0x002EC270 | 0x134 | game | cerr |  | [story/str_select/StrSelect_TaskOpen.c](story/str_select/StrSelect_TaskOpen.c) |
| func_00159AD8 | 0x00159AD8 | 0x134 | cri | cerr |  | [cri/adx_00159278/func_00159AD8.c](cri/adx_00159278/func_00159AD8.c) |
| func_00194AD0 | 0x00194AD0 | 0x138 | cri | cerr |  | [cri/sfd/func_00194AD0.c](cri/sfd/func_00194AD0.c) |
| func_0010F3B8 | 0x0010F3B8 | 0x140 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_0010F3B8.c](sdk/libkernl/kfiv_filestub/func_0010F3B8.c) |
| func_00162CC8 | 0x00162CC8 | 0x140 | cri | cerr |  | [cri/adx_00162A70/func_00162CC8.c](cri/adx_00162A70/func_00162CC8.c) |
| func_0017ED20 | 0x0017ED20 | 0x140 | cri | cerr |  | [cri/mpv/func_0017ED20.c](cri/mpv/func_0017ED20.c) |
| func_0018E8F8 | 0x0018E8F8 | 0x140 | cri | cerr |  | [cri/sfd/func_0018E8F8.c](cri/sfd/func_0018E8F8.c) |
| func_002E6FA0 | 0x002E6FA0 | 0x140 | game | cerr |  | [menu/mn_Logomark/func_002E6FA0.c](menu/mn_Logomark/func_002E6FA0.c) |
| func_002E72C0 | 0x002E72C0 | 0x140 | game | cerr |  | [menu/mn_Logomark/func_002E72C0.c](menu/mn_Logomark/func_002E72C0.c) |
| func_00159990 | 0x00159990 | 0x144 | cri | cerr |  | [cri/adx_00159278/func_00159990.c](cri/adx_00159278/func_00159990.c) |
| func_00192120 | 0x00192120 | 0x144 | cri | cerr |  | [cri/sfd/func_00192120.c](cri/sfd/func_00192120.c) |
| func_0010D628 | 0x0010D628 | 0x148 | sdk | cerr |  | [sdk/libkernl_0010D628/func_0010D628.c](sdk/libkernl_0010D628/func_0010D628.c) |
| func_0018EB30 | 0x0018EB30 | 0x148 | cri | cerr |  | [cri/sfd/func_0018EB30.c](cri/sfd/func_0018EB30.c) |
| func_001853F8 | 0x001853F8 | 0x14C | cri | cerr |  | [cri/mwsfd/func_001853F8.c](cri/mwsfd/func_001853F8.c) |
| func_0019B5E8 | 0x0019B5E8 | 0x14C | cri | cerr |  | [cri/sfd_00194D48/func_0019B5E8.c](cri/sfd_00194D48/func_0019B5E8.c) |
| func_001E2B00 | 0x001E2B00 | 0x14C | game | cerr |  | [unk/unk_1D5B30/func_001E2B00.c](unk/unk_1D5B30/func_001E2B00.c) |
| func_002B4680 | 0x002B4680 | 0x14C | game | cerr |  | [unk/unk_2B2C20/func_002B4680.c](unk/unk_2B2C20/func_002B4680.c) |
| func_0018BAE0 | 0x0018BAE0 | 0x150 | cri | cerr |  | [cri/sfd/func_0018BAE0.c](cri/sfd/func_0018BAE0.c) |
| func_00241D60 | 0x00241D60 | 0x150 | game | cerr |  | [unk/unk_23A890/func_00241D60.c](unk/unk_23A890/func_00241D60.c) |
| func_00106AA8 | 0x00106AA8 | 0x154 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00106AA8.c](sdk/libmpeg_00104BE8/func_00106AA8.c) |
| func_001D7E50 | 0x001D7E50 | 0x154 | game | cerr |  | [unk/unk_1D5B30/func_001D7E50.c](unk/unk_1D5B30/func_001D7E50.c) |
| func_0016E470 | 0x0016E470 | 0x158 | cri | cerr |  | [cri/sj/func_0016E470.c](cri/sj/func_0016E470.c) |
| func_002BB490 | 0x002BB490 | 0x158 | game | cerr |  | [unk/unk_2B98D0/func_002BB490.c](unk/unk_2B98D0/func_002BB490.c) |
| fn_80046D94 | 0x00152538 | 0x15C | cri | cerr |  | [cri/adx_0014EF28/fn_80046D94.c](cri/adx_0014EF28/fn_80046D94.c) |
| func_0018A1B8 | 0x0018A1B8 | 0x15C | cri | cerr |  | [cri/sfd/func_0018A1B8.c](cri/sfd/func_0018A1B8.c) |
| func_00286E70 | 0x00286E70 | 0x15C | game | cerr |  | [menu/mn_StageSel/func_00286E70.c](menu/mn_StageSel/func_00286E70.c) |
| func_002EAF70 | 0x002EAF70 | 0x15C | game | cerr |  | [unk/unk_2EA0B0/func_002EAF70.c](unk/unk_2EA0B0/func_002EAF70.c) |
| func_00216270 | 0x00216270 | 0x160 | game | cerr |  | [unk/unk_20A4D0/func_00216270.c](unk/unk_20A4D0/func_00216270.c) |
| func_00253E60 | 0x00253E60 | 0x160 | game | cerr |  | [battle/skill_cmd/func_00253E60.c](battle/skill_cmd/func_00253E60.c) |
| mwPlyGetCurFrm | 0x00180EC0 | 0x160 | cri | cerr |  | [cri/mwsfd/mwPlyGetCurFrm.c](cri/mwsfd/mwPlyGetCurFrm.c) |
| func_0010DD00 | 0x0010DD00 | 0x164 | sdk | cerr |  | [sdk/libkernl/kfiv_sifrpc/func_0010DD00.c](sdk/libkernl/kfiv_sifrpc/func_0010DD00.c) |
| func_00110F10 | 0x00110F10 | 0x164 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_00110F10.c](sdk/libkernl/kfiv_filestub/func_00110F10.c) |
| func_00169258 | 0x00169258 | 0x164 | cri | cerr |  | [cri/htci/func_00169258.c](cri/htci/func_00169258.c) |
| func_00198C78 | 0x00198C78 | 0x164 | cri | cerr |  | [cri/sfd_00194D48/func_00198C78.c](cri/sfd_00194D48/func_00198C78.c) |
| func_002CBD40 | 0x002CBD40 | 0x164 | game | cerr |  | [unk/unk_2CAED0/func_002CBD40.c](unk/unk_2CAED0/func_002CBD40.c) |
| func_0022E630 | 0x0022E630 | 0x168 | game | cerr |  | [unk/unk_22E0B0/func_0022E630.c](unk/unk_22E0B0/func_0022E630.c) |
| func_0015ABB8 | 0x0015ABB8 | 0x16C | cri | cerr |  | [cri/adx_00159278/func_0015ABB8.c](cri/adx_00159278/func_0015ABB8.c) |
| func_001077B8 | 0x001077B8 | 0x170 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_001077B8.c](sdk/libmpeg_00104BE8/func_001077B8.c) |
| func_00153038 | 0x00153038 | 0x170 | cri | cerr |  | [cri/adx_0014EF28/func_00153038.c](cri/adx_0014EF28/func_00153038.c) |
| func_001A51E0 | 0x001A51E0 | 0x170 | game | cerr |  | [battle/btl_cmd/func_001A51E0.c](battle/btl_cmd/func_001A51E0.c) |
| func_00151AB8 | 0x00151AB8 | 0x174 | cri | cerr |  | [cri/adx_0014EF28/func_00151AB8.c](cri/adx_0014EF28/func_00151AB8.c) |
| func_00151F88 | 0x00151F88 | 0x174 | cri | cerr |  | [cri/adx_0014EF28/func_00151F88.c](cri/adx_0014EF28/func_00151F88.c) |
| func_001745E0 | 0x001745E0 | 0x174 | cri | cerr |  | [cri/mpv/func_001745E0.c](cri/mpv/func_001745E0.c) |
| func_0010B3A0 | 0x0010B3A0 | 0x178 | sdk | cerr |  | [sdk/libkernl_0010B038/func_0010B3A0.c](sdk/libkernl_0010B038/func_0010B3A0.c) |
| func_0018E0A0 | 0x0018E0A0 | 0x178 | cri | cerr |  | [cri/sfd/func_0018E0A0.c](cri/sfd/func_0018E0A0.c) |
| func_00192AE8 | 0x00192AE8 | 0x178 | cri | cerr |  | [cri/sfd/func_00192AE8.c](cri/sfd/func_00192AE8.c) |
| func_00196FB8 | 0x00196FB8 | 0x17C | cri | cerr |  | [cri/sfd_00194D48/func_00196FB8.c](cri/sfd_00194D48/func_00196FB8.c) |
| func_00215EB0 | 0x00215EB0 | 0x17C | game | cerr |  | [unk/unk_20A4D0/func_00215EB0.c](unk/unk_20A4D0/func_00215EB0.c) |
| func_001810E8 | 0x001810E8 | 0x180 | cri | cerr |  | [cri/mwsfd/func_001810E8.c](cri/mwsfd/func_001810E8.c) |
| func_00215C10 | 0x00215C10 | 0x180 | game | cerr |  | [unk/unk_20A4D0/func_00215C10.c](unk/unk_20A4D0/func_00215C10.c) |
| func_001F8AA0 | 0x001F8AA0 | 0x184 | game | cerr |  | [battle/btb_main/func_001F8AA0.c](battle/btb_main/func_001F8AA0.c) |
| htCiOpen | 0x001682D0 | 0x188 | cri | cerr |  | [cri/htci/htCiOpen.c](cri/htci/htCiOpen.c) |
| func_001A0A38 | 0x001A0A38 | 0x18C | cri | cerr |  | [cri/sfx/func_001A0A38.c](cri/sfx/func_001A0A38.c) |
| func_0014F548 | 0x0014F548 | 0x198 | cri | cerr |  | [cri/adx_0014EF28/func_0014F548.c](cri/adx_0014EF28/func_0014F548.c) |
| func_0014FE08 | 0x0014FE08 | 0x198 | cri | cerr |  | [cri/adx_0014EF28/func_0014FE08.c](cri/adx_0014EF28/func_0014FE08.c) |
| func_001960F0 | 0x001960F0 | 0x198 | cri | cerr |  | [cri/sfd_00194D48/func_001960F0.c](cri/sfd_00194D48/func_001960F0.c) |
| func_0020AE80 | 0x0020AE80 | 0x198 | game | cerr |  | [unk/unk_20A4D0/func_0020AE80.c](unk/unk_20A4D0/func_0020AE80.c) |
| func_0020B020 | 0x0020B020 | 0x198 | game | cerr |  | [unk/unk_20A4D0/func_0020B020.c](unk/unk_20A4D0/func_0020B020.c) |
| func_00242870 | 0x00242870 | 0x198 | game | cerr |  | [unk/unk_23A890/func_00242870.c](unk/unk_23A890/func_00242870.c) |
| func_002D9DE0 | 0x002D9DE0 | 0x198 | game | cerr |  | [unk/unk_2D9510/func_002D9DE0.c](unk/unk_2D9510/func_002D9DE0.c) |
| func_0018DD58 | 0x0018DD58 | 0x19C | cri | cerr |  | [cri/sfd/func_0018DD58.c](cri/sfd/func_0018DD58.c) |
| func_0015FCD8 | 0x0015FCD8 | 0x1A4 | cri | cerr |  | [cri/adx_0015EFB0/func_0015FCD8.c](cri/adx_0015EFB0/func_0015FCD8.c) |
| func_00180910 | 0x00180910 | 0x1A4 | cri | cerr |  | [cri/mwsfd/func_00180910.c](cri/mwsfd/func_00180910.c) |
| func_00190610 | 0x00190610 | 0x1A4 | cri | cerr |  | [cri/sfd/func_00190610.c](cri/sfd/func_00190610.c) |
| func_0018B0F0 | 0x0018B0F0 | 0x1A8 | cri | cerr |  | [cri/sfd/func_0018B0F0.c](cri/sfd/func_0018B0F0.c) |
| func_001E66E0 | 0x001E66E0 | 0x1A8 | game | cerr |  | [unk/unk_1D5B30/func_001E66E0.c](unk/unk_1D5B30/func_001E66E0.c) |
| func_001E6CE0 | 0x001E6CE0 | 0x1A8 | game | cerr |  | [unk/unk_1D5B30/func_001E6CE0.c](unk/unk_1D5B30/func_001E6CE0.c) |
| func_00214DD0 | 0x00214DD0 | 0x1A8 | game | cerr |  | [unk/unk_20A4D0/func_00214DD0.c](unk/unk_20A4D0/func_00214DD0.c) |
| func_00127CD8 | 0x00127CD8 | 0x1AC | libc | cerr |  | [sdk/libc_00127738/func_00127CD8.c](sdk/libc_00127738/func_00127CD8.c) |
| func_001E7F00 | 0x001E7F00 | 0x1AC | game | cerr |  | [unk/unk_1D5B30/func_001E7F00.c](unk/unk_1D5B30/func_001E7F00.c) |
| func_0027C140 | 0x0027C140 | 0x1AC | game | cerr |  | [menu/mn_charasel/func_0027C140.c](menu/mn_charasel/func_0027C140.c) |
| func_002A5030 | 0x002A5030 | 0x1AC | game | cerr |  | [story/evt_scrp/func_002A5030.c](story/evt_scrp/func_002A5030.c) |
| Scr_ReadInt | 0x0014D3C0 | 0x1B0 | game | cerr |  | [sys/script/Scr_ReadInt.c](sys/script/Scr_ReadInt.c) |
| _sceCallCode | 0x001106D0 | 0x1B0 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/_sceCallCode.c](sdk/libkernl/kfiv_filestub/_sceCallCode.c) |
| func_0018B390 | 0x0018B390 | 0x1B0 | cri | cerr |  | [cri/sfd/func_0018B390.c](cri/sfd/func_0018B390.c) |
| func_0027AAE0 | 0x0027AAE0 | 0x1B0 | game | cerr |  | [menu/ess_trade/func_0027AAE0.c](menu/ess_trade/func_0027AAE0.c) |
| func_002A9930 | 0x002A9930 | 0x1B0 | game | cerr |  | [battle/scr_func/func_002A9930.c](battle/scr_func/func_002A9930.c) |
| func_002A9EA0 | 0x002A9EA0 | 0x1B0 | game | cerr |  | [battle/scr_func/func_002A9EA0.c](battle/scr_func/func_002A9EA0.c) |
| func_002A24B0 | 0x002A24B0 | 0x1B4 | game | cerr |  | [story/evt_scrp/func_002A24B0.c](story/evt_scrp/func_002A24B0.c) |
| func_00189360 | 0x00189360 | 0x1B8 | cri | cerr |  | [cri/sfd/func_00189360.c](cri/sfd/func_00189360.c) |
| func_00173580 | 0x00173580 | 0x1BC | cri | cerr |  | [cri/mpv/func_00173580.c](cri/mpv/func_00173580.c) |
| func_002A2020 | 0x002A2020 | 0x1BC | game | cerr |  | [story/evt_scrp/func_002A2020.c](story/evt_scrp/func_002A2020.c) |
| Scr_FloatOperand | 0x0014D910 | 0x1C0 | game | cerr |  | [sys/script/Scr_FloatOperand.c](sys/script/Scr_FloatOperand.c) |
| Scr_IntOperand | 0x0014D750 | 0x1C0 | game | cerr |  | [sys/script/Scr_IntOperand.c](sys/script/Scr_IntOperand.c) |
| func_00108D08 | 0x00108D08 | 0x1C0 | sdk | cerr |  | [sdk/libmpeg_001081F8/func_00108D08.c](sdk/libmpeg_001081F8/func_00108D08.c) |
| func_0012B110 | 0x0012B110 | 0x1C0 | libc | cerr |  | [sdk/libc_00129428/func_0012B110.c](sdk/libc_00129428/func_0012B110.c) |
| func_0015B210 | 0x0015B210 | 0x1C0 | cri | cerr |  | [cri/adx_00159278/func_0015B210.c](cri/adx_00159278/func_0015B210.c) |
| func_001CF100 | 0x001CF100 | 0x1C0 | game | cerr |  | [unk/unk_1CBD90/func_001CF100.c](unk/unk_1CBD90/func_001CF100.c) |
| func_002BE320 | 0x002BE320 | 0x1C0 | game | cerr |  | [story/str_status/func_002BE320.c](story/str_status/func_002BE320.c) |
| func_00107928 | 0x00107928 | 0x1C4 | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00107928.c](sdk/libmpeg_00104BE8/func_00107928.c) |
| func_001D92B0 | 0x001D92B0 | 0x1C4 | game | cerr |  | [unk/unk_1D5B30/func_001D92B0.c](unk/unk_1D5B30/func_001D92B0.c) |
| func_00247AB0 | 0x00247AB0 | 0x1C4 | game | cerr |  | [unk/unk_23A890/func_00247AB0.c](unk/unk_23A890/func_00247AB0.c) |
| func_0029CE90 | 0x0029CE90 | 0x1C4 | game | cerr |  | [unk/unk_29CE90/func_0029CE90.c](unk/unk_29CE90/func_0029CE90.c) |
| func_00191300 | 0x00191300 | 0x1C8 | cri | cerr |  | [cri/sfd/func_00191300.c](cri/sfd/func_00191300.c) |
| func_002D9A50 | 0x002D9A50 | 0x1C8 | game | cerr |  | [unk/unk_2D9510/func_002D9A50.c](unk/unk_2D9510/func_002D9A50.c) |
| func_00106898 | 0x00106898 | 0x1CC | sdk | cerr |  | [sdk/libmpeg_00104BE8/func_00106898.c](sdk/libmpeg_00104BE8/func_00106898.c) |
| Scr_ReadFloat | 0x0014D570 | 0x1D4 | game | cerr |  | [sys/script/Scr_ReadFloat.c](sys/script/Scr_ReadFloat.c) |
| func_00167290 | 0x00167290 | 0x1D4 | cri | cerr |  | [cri/dvci/func_00167290.c](cri/dvci/func_00167290.c) |
| func_002E6BE0 | 0x002E6BE0 | 0x1D4 | game | cerr |  | [menu/mn_Logomark/func_002E6BE0.c](menu/mn_Logomark/func_002E6BE0.c) |
| func_002E6DC0 | 0x002E6DC0 | 0x1D4 | game | cerr |  | [menu/mn_Logomark/func_002E6DC0.c](menu/mn_Logomark/func_002E6DC0.c) |
| func_002E70E0 | 0x002E70E0 | 0x1D4 | game | cerr |  | [menu/mn_Logomark/func_002E70E0.c](menu/mn_Logomark/func_002E70E0.c) |
| func_00216880 | 0x00216880 | 0x1DC | game | cerr |  | [unk/unk_20A4D0/func_00216880.c](unk/unk_20A4D0/func_00216880.c) |
| func_002525A0 | 0x002525A0 | 0x1DC | game | cerr |  | [battle/skill_cmd/func_002525A0.c](battle/skill_cmd/func_002525A0.c) |
| func_00112330 | 0x00112330 | 0x1E0 | sdk | cerr |  | [sdk/libkernl_00111C50/func_00112330.c](sdk/libkernl_00111C50/func_00112330.c) |
| func_0011C5F8 | 0x0011C5F8 | 0x1E0 | libc | cerr |  | [sdk/libm/func_0011C5F8.c](sdk/libm/func_0011C5F8.c) |
| func_002A8A60 | 0x002A8A60 | 0x1E4 | game | cerr |  | [unk/unk_2A8970/func_002A8A60.c](unk/unk_2A8970/func_002A8A60.c) |
| func_001104E8 | 0x001104E8 | 0x1E8 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_001104E8.c](sdk/libkernl/kfiv_filestub/func_001104E8.c) |
| func_002AD610 | 0x002AD610 | 0x1E8 | game | cerr |  | [battle/scr_func/func_002AD610.c](battle/scr_func/func_002AD610.c) |
| func_00169068 | 0x00169068 | 0x1EC | cri | cerr |  | [cri/htci/func_00169068.c](cri/htci/func_00169068.c) |
| func_00197870 | 0x00197870 | 0x1EC | cri | cerr |  | [cri/sfd_00194D48/func_00197870.c](cri/sfd_00194D48/func_00197870.c) |
| func_0017C8A8 | 0x0017C8A8 | 0x1F0 | cri | cerr |  | [cri/mpv/func_0017C8A8.c](cri/mpv/func_0017C8A8.c) |
| func_00112138 | 0x00112138 | 0x1F8 | sdk | cerr |  | [sdk/libkernl_00111C50/func_00112138.c](sdk/libkernl_00111C50/func_00112138.c) |
| func_0030E690 | 0x0030E690 | 0x1F8 | game | cerr |  | [story/str_staffroll/func_0030E690.c](story/str_staffroll/func_0030E690.c) |
| htCiGetFileSize | 0x00167FF8 | 0x1F8 | cri | cerr |  | [cri/htci/htCiGetFileSize.c](cri/htci/htCiGetFileSize.c) |
| func_001548B0 | 0x001548B0 | 0x1FC | cri | cerr |  | [cri/adx_0014EF28/func_001548B0.c](cri/adx_0014EF28/func_001548B0.c) |
| func_00197F28 | 0x00197F28 | 0x200 | cri | cerr |  | [cri/sfd_00194D48/func_00197F28.c](cri/sfd_00194D48/func_00197F28.c) |
| func_00224480 | 0x00224480 | 0x200 | game | cerr |  | [unk/unk_21D260/func_00224480.c](unk/unk_21D260/func_00224480.c) |
| func_0028EE90 | 0x0028EE90 | 0x200 | game | cerr |  | [story/str_bg/func_0028EE90.c](story/str_bg/func_0028EE90.c) |
| sceSifCallRpc | 0x0010E1A8 | 0x200 | sdk | cerr |  | [sdk/libkernl/kfiv_sifrpc/sceSifCallRpc.c](sdk/libkernl/kfiv_sifrpc/sceSifCallRpc.c) |
| func_001BE6C0 | 0x001BE6C0 | 0x204 | game | cerr |  | [battle/btl_main/func_001BE6C0.c](battle/btl_main/func_001BE6C0.c) |
| func_002A2890 | 0x002A2890 | 0x204 | game | cerr |  | [story/evt_scrp/func_002A2890.c](story/evt_scrp/func_002A2890.c) |
| func_001115D8 | 0x001115D8 | 0x208 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_001115D8.c](sdk/libkernl/kfiv_filestub/func_001115D8.c) |
| func_002433F0 | 0x002433F0 | 0x210 | game | cerr |  | [unk/unk_23A890/func_002433F0.c](unk/unk_23A890/func_002433F0.c) |
| func_0028EC80 | 0x0028EC80 | 0x210 | game | cerr |  | [story/str_bg/func_0028EC80.c](story/str_bg/func_0028EC80.c) |
| func_0011EA48 | 0x0011EA48 | 0x214 | libc | cerr |  | [sdk/libm/func_0011EA48.c](sdk/libm/func_0011EA48.c) |
| func_00119208 | 0x00119208 | 0x218 | sdk | cerr |  | [sdk/libcdvd/func_00119208.c](sdk/libcdvd/func_00119208.c) |
| func_001743C8 | 0x001743C8 | 0x218 | cri | cerr |  | [cri/mpv/func_001743C8.c](cri/mpv/func_001743C8.c) |
| func_00152D50 | 0x00152D50 | 0x21C | cri | cerr |  | [cri/adx_0014EF28/func_00152D50.c](cri/adx_0014EF28/func_00152D50.c) |
| func_0023F3F0 | 0x0023F3F0 | 0x21C | game | cerr |  | [unk/unk_23A890/func_0023F3F0.c](unk/unk_23A890/func_0023F3F0.c) |
| func_00119420 | 0x00119420 | 0x220 | sdk | cerr |  | [sdk/libcdvd/func_00119420.c](sdk/libcdvd/func_00119420.c) |
| func_00139100 | 0x00139100 | 0x224 | game | cerr |  | [sys/unk_137EE0/func_00139100.c](sys/unk_137EE0/func_00139100.c) |
| func_0010F9F0 | 0x0010F9F0 | 0x23C | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_0010F9F0.c](sdk/libkernl/kfiv_filestub/func_0010F9F0.c) |
| func_00111C50 | 0x00111C50 | 0x23C | sdk | cerr |  | [sdk/libkernl_00111C50/func_00111C50.c](sdk/libkernl_00111C50/func_00111C50.c) |
| func_0024A440 | 0x0024A440 | 0x23C | game | cerr |  | [battle/skill_cmd/func_0024A440.c](battle/skill_cmd/func_0024A440.c) |
| func_0027DDC0 | 0x0027DDC0 | 0x23C | game | cerr |  | [menu/mn_charasel/func_0027DDC0.c](menu/mn_charasel/func_0027DDC0.c) |
| func_001903D0 | 0x001903D0 | 0x240 | cri | cerr |  | [cri/sfd/func_001903D0.c](cri/sfd/func_001903D0.c) |
| func_002383D0 | 0x002383D0 | 0x240 | game | cerr |  | [battle/char_light/func_002383D0.c](battle/char_light/func_002383D0.c) |
| func_00201F50 | 0x00201F50 | 0x248 | game | cerr |  | [unk/unk_1FB760/func_00201F50.c](unk/unk_1FB760/func_00201F50.c) |
| func_00111388 | 0x00111388 | 0x24C | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_00111388.c](sdk/libkernl/kfiv_filestub/func_00111388.c) |
| func_00276DC0 | 0x00276DC0 | 0x250 | game | cerr |  | [menu/ess_shop/func_00276DC0.c](menu/ess_shop/func_00276DC0.c) |
| func_002EE7A0 | 0x002EE7A0 | 0x250 | game | cerr |  | [menu/mn_ArenaList/func_002EE7A0.c](menu/mn_ArenaList/func_002EE7A0.c) |
| func_0030E890 | 0x0030E890 | 0x250 | game | cerr |  | [story/str_staffroll/func_0030E890.c](story/str_staffroll/func_0030E890.c) |
| func_002CFEB0 | 0x002CFEB0 | 0x258 | game | cerr |  | [unk/unk_2CF8F0/func_002CFEB0.c](unk/unk_2CF8F0/func_002CFEB0.c) |
| func_00188760 | 0x00188760 | 0x25C | cri | cerr |  | [cri/sfd/func_00188760.c](cri/sfd/func_00188760.c) |
| func_00274C10 | 0x00274C10 | 0x25C | game | cerr |  | [menu/ess_shop/func_00274C10.c](menu/ess_shop/func_00274C10.c) |
| func_0015AD28 | 0x0015AD28 | 0x260 | cri | cerr |  | [cri/adx_00159278/func_0015AD28.c](cri/adx_00159278/func_0015AD28.c) |
| func_002BD140 | 0x002BD140 | 0x260 | game | cerr |  | [story/str_status/func_002BD140.c](story/str_status/func_002BD140.c) |
| func_0010FC30 | 0x0010FC30 | 0x26C | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_0010FC30.c](sdk/libkernl/kfiv_filestub/func_0010FC30.c) |
| func_0025BAC0 | 0x0025BAC0 | 0x274 | game | cerr |  | [unk/unk_25A130/func_0025BAC0.c](unk/unk_25A130/func_0025BAC0.c) |
| func_002596A0 | 0x002596A0 | 0x278 | game | cerr |  | [battle/skill_cmd/func_002596A0.c](battle/skill_cmd/func_002596A0.c) |
| func_00192DE0 | 0x00192DE0 | 0x27C | cri | cerr |  | [cri/sfd/func_00192DE0.c](cri/sfd/func_00192DE0.c) |
| func_00110A78 | 0x00110A78 | 0x280 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_00110A78.c](sdk/libkernl/kfiv_filestub/func_00110A78.c) |
| func_001119B0 | 0x001119B0 | 0x280 | sdk | cerr |  | [sdk/libkernl/kfiv_filestub/func_001119B0.c](sdk/libkernl/kfiv_filestub/func_001119B0.c) |
| func_001B2820 | 0x001B2820 | 0x280 | game | cerr |  | [battle/btl_main/func_001B2820.c](battle/btl_main/func_001B2820.c) |
| func_00214B50 | 0x00214B50 | 0x280 | game | cerr |  | [unk/unk_20A4D0/func_00214B50.c](unk/unk_20A4D0/func_00214B50.c) |
| func_0011E2C0 | 0x0011E2C0 | 0x284 | libc | cerr |  | [sdk/libm/func_0011E2C0.c](sdk/libm/func_0011E2C0.c) |
| func_0015AF88 | 0x0015AF88 | 0x284 | cri | cerr |  | [cri/adx_00159278/func_0015AF88.c](cri/adx_00159278/func_0015AF88.c) |
| func_00190B68 | 0x00190B68 | 0x284 | cri | cerr |  | [cri/sfd/func_00190B68.c](cri/sfd/func_00190B68.c) |
| func_00235D90 | 0x00235D90 | 0x288 | game | cerr |  | [battle/char_light/func_00235D90.c](battle/char_light/func_00235D90.c) |
| func_0011EE78 | 0x0011EE78 | 0x28C | libc | cerr |  | [sdk/libm_0011ECE8/func_0011EE78.c](sdk/libm_0011ECE8/func_0011EE78.c) |
| func_0014E900 | 0x0014E900 | 0x28C | cri | cerr |  | [cri/adx_0014E8F8/func_0014E900.c](cri/adx_0014E8F8/func_0014E900.c) |
| func_002145E0 | 0x002145E0 | 0x290 | game | cerr |  | [unk/unk_20A4D0/func_002145E0.c](unk/unk_20A4D0/func_002145E0.c) |
| func_001531A8 | 0x001531A8 | 0x294 | cri | cerr |  | [cri/adx_0014EF28/func_001531A8.c](cri/adx_0014EF28/func_001531A8.c) |
| ADXB_DecodeHeader | 0x00158EC0 | 0x298 | cri | cerr |  | [cri/adx_001563B0/ADXB_DecodeHeader.c](cri/adx_001563B0/ADXB_DecodeHeader.c) |
| func_0020B360 | 0x0020B360 | 0x29C | game | cerr |  | [unk/unk_20A4D0/func_0020B360.c](unk/unk_20A4D0/func_0020B360.c) |
| func_0027DB20 | 0x0027DB20 | 0x29C | game | cerr |  | [menu/mn_charasel/func_0027DB20.c](menu/mn_charasel/func_0027DB20.c) |
| func_00153440 | 0x00153440 | 0x2A0 | cri | cerr |  | [cri/adx_0014EF28/func_00153440.c](cri/adx_0014EF28/func_00153440.c) |
| func_002EEC60 | 0x002EEC60 | 0x2A0 | game | cerr |  | [menu/mn_ArenaList/func_002EEC60.c](menu/mn_ArenaList/func_002EEC60.c) |
| func_002C9C40 | 0x002C9C40 | 0x2A4 | game | cerr |  | [unk/unk_2C41C0/func_002C9C40.c](unk/unk_2C41C0/func_002C9C40.c) |
| func_00111E90 | 0x00111E90 | 0x2A8 | sdk | cerr |  | [sdk/libkernl_00111C50/func_00111E90.c](sdk/libkernl_00111C50/func_00111E90.c) |
| func_00285EF0 | 0x00285EF0 | 0x2B4 | game | cerr |  | [unk/unk_284AA0/func_00285EF0.c](unk/unk_284AA0/func_00285EF0.c) |
| func_0030EAE0 | 0x0030EAE0 | 0x2B4 | game | cerr |  | [story/str_staffroll/func_0030EAE0.c](story/str_staffroll/func_0030EAE0.c) |
| StrSelect_TaskMain | 0x002EBFB0 | 0x2C0 | game | cerr |  | [story/str_select/StrSelect_TaskMain.c](story/str_select/StrSelect_TaskMain.c) |
| func_00216A60 | 0x00216A60 | 0x2C0 | game | cerr |  | [unk/unk_20A4D0/func_00216A60.c](unk/unk_20A4D0/func_00216A60.c) |
| func_00248640 | 0x00248640 | 0x2C4 | game | cerr |  | [unk/unk_248550/func_00248640.c](unk/unk_248550/func_00248640.c) |
| func_00270390 | 0x00270390 | 0x2CC | game | cerr |  | [unk/unk_26FF30/func_00270390.c](unk/unk_26FF30/func_00270390.c) |
| func_002984A0 | 0x002984A0 | 0x2D0 | game | cerr |  | [unk/unk_297C60/func_002984A0.c](unk/unk_297C60/func_002984A0.c) |
| func_002DA030 | 0x002DA030 | 0x2D8 | game | cerr |  | [unk/unk_2D9510/func_002DA030.c](unk/unk_2D9510/func_002DA030.c) |
| Scr_TaskMain | 0x0014A7C0 | 0x2DC | game | cerr |  | [sys/script/Scr_TaskMain.c](sys/script/Scr_TaskMain.c) |
| func_001FD520 | 0x001FD520 | 0x2DC | game | cerr |  | [unk/unk_1FB760/func_001FD520.c](unk/unk_1FB760/func_001FD520.c) |
| func_002E4D60 | 0x002E4D60 | 0x2DC | game | cerr |  | [unk/unk_2E4030/func_002E4D60.c](unk/unk_2E4030/func_002E4D60.c) |
| func_0011C7D8 | 0x0011C7D8 | 0x2E0 | libc | cerr |  | [sdk/libm/func_0011C7D8.c](sdk/libm/func_0011C7D8.c) |
| func_00214870 | 0x00214870 | 0x2E0 | game | cerr |  | [unk/unk_20A4D0/func_00214870.c](unk/unk_20A4D0/func_00214870.c) |
| func_00118F20 | 0x00118F20 | 0x2E8 | sdk | cerr |  | [sdk/libcdvd/func_00118F20.c](sdk/libcdvd/func_00118F20.c) |
| func_001186F8 | 0x001186F8 | 0x2FC | sdk | cerr |  | [sdk/libcdvd/func_001186F8.c](sdk/libcdvd/func_001186F8.c) |
| func_002361F0 | 0x002361F0 | 0x304 | game | cerr |  | [battle/char_light/func_002361F0.c](battle/char_light/func_002361F0.c) |
| func_00208F70 | 0x00208F70 | 0x308 | game | cerr |  | [unk/unk_1FB760/func_00208F70.c](unk/unk_1FB760/func_00208F70.c) |
| func_0021E420 | 0x0021E420 | 0x314 | game | cerr |  | [unk/unk_21D260/func_0021E420.c](unk/unk_21D260/func_0021E420.c) |
| func_0014F888 | 0x0014F888 | 0x318 | cri | cerr |  | [cri/adx_0014EF28/func_0014F888.c](cri/adx_0014EF28/func_0014F888.c) |
| func_001E7BE0 | 0x001E7BE0 | 0x318 | game | cerr |  | [unk/unk_1D5B30/func_001E7BE0.c](unk/unk_1D5B30/func_001E7BE0.c) |
| func_001BA7F0 | 0x001BA7F0 | 0x320 | game | cerr |  | [battle/btl_main/func_001BA7F0.c](battle/btl_main/func_001BA7F0.c) |
| func_0022B900 | 0x0022B900 | 0x328 | game | cerr |  | [battle/a2d/func_0022B900.c](battle/a2d/func_0022B900.c) |
| func_00242540 | 0x00242540 | 0x328 | game | cerr |  | [unk/unk_23A890/func_00242540.c](unk/unk_23A890/func_00242540.c) |
| func_00103478 | 0x00103478 | 0x32C | sdk | cerr |  | [sdk/libmpeg/func_00103478.c](sdk/libmpeg/func_00103478.c) |
| func_002AB690 | 0x002AB690 | 0x330 | game | cerr |  | [battle/scr_func/func_002AB690.c](battle/scr_func/func_002AB690.c) |
| func_002C9EF0 | 0x002C9EF0 | 0x334 | game | cerr |  | [unk/unk_2C41C0/func_002C9EF0.c](unk/unk_2C41C0/func_002C9EF0.c) |
| func_00248910 | 0x00248910 | 0x344 | game | cerr |  | [unk/unk_248550/func_00248910.c](unk/unk_248550/func_00248910.c) |
| func_0027BDF0 | 0x0027BDF0 | 0x344 | game | cerr |  | [menu/mn_charasel/func_0027BDF0.c](menu/mn_charasel/func_0027BDF0.c) |
| amMotion_Create | 0x0013BD20 | 0x34C | game | cerr |  | [sys/amMotion/amMotion_Create.c](sys/amMotion/amMotion_Create.c) |
| func_002570A0 | 0x002570A0 | 0x34C | game | cerr |  | [battle/skill_cmd/func_002570A0.c](battle/skill_cmd/func_002570A0.c) |
| func_002DDF00 | 0x002DDF00 | 0x34C | game | cerr |  | [unk/unk_2DB970/func_002DDF00.c](unk/unk_2DB970/func_002DDF00.c) |
| func_001E35A0 | 0x001E35A0 | 0x35C | game | cerr |  | [unk/unk_1D5B30/func_001E35A0.c](unk/unk_1D5B30/func_001E35A0.c) |
| func_00257860 | 0x00257860 | 0x360 | game | cerr |  | [battle/skill_cmd/func_00257860.c](battle/skill_cmd/func_00257860.c) |
| func_00229480 | 0x00229480 | 0x374 | game | cerr |  | [battle/a2d/func_00229480.c](battle/a2d/func_00229480.c) |
| func_00139E60 | 0x00139E60 | 0x380 | game | cerr |  | [sys/unk_139DE0/func_00139E60.c](sys/unk_139DE0/func_00139E60.c) |
| func_0016CA28 | 0x0016CA28 | 0x380 | cri | cerr |  | [cri/ps2rna/func_0016CA28.c](cri/ps2rna/func_0016CA28.c) |
| func_001C63F0 | 0x001C63F0 | 0x384 | game | cerr |  | [battle/btl_main/func_001C63F0.c](battle/btl_main/func_001C63F0.c) |
| func_00117D68 | 0x00117D68 | 0x388 | sdk | cerr |  | [sdk/libsdr/func_00117D68.c](sdk/libsdr/func_00117D68.c) |
| func_0014EF28 | 0x0014EF28 | 0x38C | cri | cerr |  | [cri/adx_0014EF28/func_0014EF28.c](cri/adx_0014EF28/func_0014EF28.c) |
| func_00180290 | 0x00180290 | 0x38C | cri | cerr |  | [cri/mwsfd/func_00180290.c](cri/mwsfd/func_00180290.c) |
| func_0011C258 | 0x0011C258 | 0x3A0 | libc | cerr |  | [sdk/libm/func_0011C258.c](sdk/libm/func_0011C258.c) |
| func_00241710 | 0x00241710 | 0x3AC | game | cerr |  | [unk/unk_23A890/func_00241710.c](unk/unk_23A890/func_00241710.c) |
| func_0011D380 | 0x0011D380 | 0x3B0 | libc | cerr |  | [sdk/libm/func_0011D380.c](sdk/libm/func_0011D380.c) |
| func_001F0A50 | 0x001F0A50 | 0x3C4 | game | cerr |  | [battle/btb_draw/func_001F0A50.c](battle/btb_draw/func_001F0A50.c) |
| func_001BFD60 | 0x001BFD60 | 0x3CC | game | cerr |  | [battle/btl_main/func_001BFD60.c](battle/btl_main/func_001BFD60.c) |
| Save_TaskIdle | 0x002E3A50 | 0x3D4 | game | cerr |  | [menu/mn_save/Save_TaskIdle.c](menu/mn_save/Save_TaskIdle.c) |
| func_00201300 | 0x00201300 | 0x3D4 | game | cerr |  | [unk/unk_1FB760/func_00201300.c](unk/unk_1FB760/func_00201300.c) |
| func_001433F0 | 0x001433F0 | 0x3EC | game | cerr |  | [sys/unk_142AA0/func_001433F0.c](sys/unk_142AA0/func_001433F0.c) |
| func_001B42D0 | 0x001B42D0 | 0x3EC | game | cerr |  | [battle/btl_main/func_001B42D0.c](battle/btl_main/func_001B42D0.c) |
| func_0013EE90 | 0x0013EE90 | 0x408 | game | cerr |  | [sys/amObject/func_0013EE90.c](sys/amObject/func_0013EE90.c) |
| func_00208530 | 0x00208530 | 0x414 | game | cerr |  | [unk/unk_1FB760/func_00208530.c](unk/unk_1FB760/func_00208530.c) |
| func_002078A0 | 0x002078A0 | 0x418 | game | cerr |  | [unk/unk_1FB760/func_002078A0.c](unk/unk_1FB760/func_002078A0.c) |
| func_00108798 | 0x00108798 | 0x420 | sdk | cerr |  | [sdk/libmpeg_001081F8/func_00108798.c](sdk/libmpeg_001081F8/func_00108798.c) |
| func_002832E0 | 0x002832E0 | 0x430 | game | cerr |  | [menu/skl_sheet/func_002832E0.c](menu/skl_sheet/func_002832E0.c) |
| func_001AAA60 | 0x001AAA60 | 0x43C | game | cerr |  | [battle/btl_cmd/func_001AAA60.c](battle/btl_cmd/func_001AAA60.c) |
| func_001E6890 | 0x001E6890 | 0x450 | game | cerr |  | [unk/unk_1D5B30/func_001E6890.c](unk/unk_1D5B30/func_001E6890.c) |
| func_0020B600 | 0x0020B600 | 0x458 | game | cerr |  | [unk/unk_20A4D0/func_0020B600.c](unk/unk_20A4D0/func_0020B600.c) |
| func_0021D260 | 0x0021D260 | 0x458 | game | cerr |  | [unk/unk_21D260/func_0021D260.c](unk/unk_21D260/func_0021D260.c) |
| func_002573F0 | 0x002573F0 | 0x468 | game | cerr |  | [battle/skill_cmd/func_002573F0.c](battle/skill_cmd/func_002573F0.c) |
| func_002BCCD0 | 0x002BCCD0 | 0x468 | game | cerr |  | [unk/unk_2B98D0/func_002BCCD0.c](unk/unk_2B98D0/func_002BCCD0.c) |
| func_0022A880 | 0x0022A880 | 0x46C | game | cerr |  | [battle/a2d/func_0022A880.c](battle/a2d/func_0022A880.c) |
| func_0013F2A0 | 0x0013F2A0 | 0x470 | game | cerr |  | [sys/amObject/func_0013F2A0.c](sys/amObject/func_0013F2A0.c) |
| func_001F7FA0 | 0x001F7FA0 | 0x47C | game | cerr |  | [battle/btb_draw/func_001F7FA0.c](battle/btb_draw/func_001F7FA0.c) |
| func_00102B90 | 0x00102B90 | 0x488 | sdk | cerr |  | [sdk/libmpeg/func_00102B90.c](sdk/libmpeg/func_00102B90.c) |
| func_001DBB30 | 0x001DBB30 | 0x48C | game | cerr |  | [unk/unk_1D5B30/func_001DBB30.c](unk/unk_1D5B30/func_001DBB30.c) |
| func_00297C60 | 0x00297C60 | 0x490 | game | cerr |  | [unk/unk_297C60/func_00297C60.c](unk/unk_297C60/func_00297C60.c) |
| func_002861B0 | 0x002861B0 | 0x494 | game | cerr |  | [menu/mn_StageSel/func_002861B0.c](menu/mn_StageSel/func_002861B0.c) |
| func_00228FA0 | 0x00228FA0 | 0x498 | game | cerr |  | [battle/a2d/func_00228FA0.c](battle/a2d/func_00228FA0.c) |
| func_0013A1E0 | 0x0013A1E0 | 0x4AC | game | cerr |  | [sys/unk_139DE0/func_0013A1E0.c](sys/unk_139DE0/func_0013A1E0.c) |
| func_002FDAC0 | 0x002FDAC0 | 0x4B0 | game | cerr |  | [unk/unk_2FAFF0/func_002FDAC0.c](unk/unk_2FAFF0/func_002FDAC0.c) |
| func_00221950 | 0x00221950 | 0x4B4 | game | cerr |  | [unk/unk_21D260/func_00221950.c](unk/unk_21D260/func_00221950.c) |
| func_001B13F0 | 0x001B13F0 | 0x4B8 | game | cerr |  | [battle/btl_main/func_001B13F0.c](battle/btl_main/func_001B13F0.c) |
| func_001C4250 | 0x001C4250 | 0x4C0 | game | cerr |  | [battle/btl_main/func_001C4250.c](battle/btl_main/func_001C4250.c) |
| func_00207D90 | 0x00207D90 | 0x4C8 | game | cerr |  | [unk/unk_1FB760/func_00207D90.c](unk/unk_1FB760/func_00207D90.c) |
| func_00226070 | 0x00226070 | 0x4D0 | game | cerr |  | [battle/a2d/func_00226070.c](battle/a2d/func_00226070.c) |
| func_002285E0 | 0x002285E0 | 0x4DC | game | cerr |  | [battle/a2d/func_002285E0.c](battle/a2d/func_002285E0.c) |
| func_002072D0 | 0x002072D0 | 0x4F4 | game | cerr |  | [unk/unk_1FB760/func_002072D0.c](unk/unk_1FB760/func_002072D0.c) |
| func_0013F710 | 0x0013F710 | 0x510 | game | cerr |  | [sys/amObject/func_0013F710.c](sys/amObject/func_0013F710.c) |
| func_001A3940 | 0x001A3940 | 0x518 | game | cerr |  | [unk/unk_1A31B0/func_001A3940.c](unk/unk_1A31B0/func_001A3940.c) |
| func_00240390 | 0x00240390 | 0x52C | game | cerr |  | [unk/unk_23A890/func_00240390.c](unk/unk_23A890/func_00240390.c) |
| func_0012E100 | 0x0012E100 | 0x540 | game | cerr |  | [sys/unk_12DE80/func_0012E100.c](sys/unk_12DE80/func_0012E100.c) |
| func_001777F0 | 0x001777F0 | 0x558 | cri | cerr |  | [cri/mpv/func_001777F0.c](cri/mpv/func_001777F0.c) |
| func_0021DCF0 | 0x0021DCF0 | 0x55C | game | cerr |  | [unk/unk_21D260/func_0021DCF0.c](unk/unk_21D260/func_0021DCF0.c) |
| func_002B9D30 | 0x002B9D30 | 0x564 | game | cerr |  | [unk/unk_2B98D0/func_002B9D30.c](unk/unk_2B98D0/func_002B9D30.c) |
| func_001FDD40 | 0x001FDD40 | 0x570 | game | cerr |  | [unk/unk_1FB760/func_001FDD40.c](unk/unk_1FB760/func_001FDD40.c) |
| func_00206C90 | 0x00206C90 | 0x570 | game | cerr |  | [unk/unk_1FB760/func_00206C90.c](unk/unk_1FB760/func_00206C90.c) |
| func_0020C600 | 0x0020C600 | 0x58C | game | cerr |  | [unk/unk_20A4D0/func_0020C600.c](unk/unk_20A4D0/func_0020C600.c) |
| func_0027B860 | 0x0027B860 | 0x590 | game | cerr |  | [menu/mn_charasel/func_0027B860.c](menu/mn_charasel/func_0027B860.c) |
| func_002BD6B0 | 0x002BD6B0 | 0x59C | game | cerr |  | [story/str_status/func_002BD6B0.c](story/str_status/func_002BD6B0.c) |
| func_001D33E0 | 0x001D33E0 | 0x5E4 | game | cerr |  | [battle/char_mant/func_001D33E0.c](battle/char_mant/func_001D33E0.c) |
| func_00245DA0 | 0x00245DA0 | 0x604 | game | cerr |  | [unk/unk_23A890/func_00245DA0.c](unk/unk_23A890/func_00245DA0.c) |
| func_0023ED30 | 0x0023ED30 | 0x63C | game | cerr |  | [unk/unk_23A890/func_0023ED30.c](unk/unk_23A890/func_0023ED30.c) |
| func_002E5C20 | 0x002E5C20 | 0x658 | game | cerr |  | [unk/unk_2E4030/func_002E5C20.c](unk/unk_2E4030/func_002E5C20.c) |
| func_0029BA80 | 0x0029BA80 | 0x68C | game | cerr |  | [story/str_map/func_0029BA80.c](story/str_map/func_0029BA80.c) |
| func_001E5C20 | 0x001E5C20 | 0x6A0 | game | cerr |  | [unk/unk_1D5B30/func_001E5C20.c](unk/unk_1D5B30/func_001E5C20.c) |
| func_001FF4F0 | 0x001FF4F0 | 0x6AC | game | cerr |  | [unk/unk_1FB760/func_001FF4F0.c](unk/unk_1FB760/func_001FF4F0.c) |
| func_002021C0 | 0x002021C0 | 0x6B4 | game | cerr |  | [unk/unk_1FB760/func_002021C0.c](unk/unk_1FB760/func_002021C0.c) |
| func_0020BF30 | 0x0020BF30 | 0x6C4 | game | cerr |  | [unk/unk_20A4D0/func_0020BF30.c](unk/unk_20A4D0/func_0020BF30.c) |
| func_001ADEE0 | 0x001ADEE0 | 0x6E0 | game | cerr |  | [battle/btl_main/func_001ADEE0.c](battle/btl_main/func_001ADEE0.c) |
| func_001E74F0 | 0x001E74F0 | 0x6E4 | game | cerr |  | [unk/unk_1D5B30/func_001E74F0.c](unk/unk_1D5B30/func_001E74F0.c) |
| func_00177D48 | 0x00177D48 | 0x6F8 | cri | cerr |  | [cri/mpv/func_00177D48.c](cri/mpv/func_00177D48.c) |
| func_00102238 | 0x00102238 | 0x704 | sdk | cerr |  | [sdk/libmpeg/func_00102238.c](sdk/libmpeg/func_00102238.c) |
| func_00131F00 | 0x00131F00 | 0x704 | game | cerr |  | [sys/unk_131700/func_00131F00.c](sys/unk_131700/func_00131F00.c) |
| func_00132610 | 0x00132610 | 0x704 | game | cerr |  | [sys/unk_131700/func_00132610.c](sys/unk_131700/func_00132610.c) |
| func_0017F750 | 0x0017F750 | 0x714 | cri | cerr |  | [cri/mwsfd/func_0017F750.c](cri/mwsfd/func_0017F750.c) |
| func_001DDD50 | 0x001DDD50 | 0x738 | game | cerr |  | [unk/unk_1D5B30/func_001DDD50.c](unk/unk_1D5B30/func_001DDD50.c) |
| func_00200270 | 0x00200270 | 0x738 | game | cerr |  | [unk/unk_1FB760/func_00200270.c](unk/unk_1FB760/func_00200270.c) |
| func_0015B6B0 | 0x0015B6B0 | 0x754 | cri | cerr |  | [cri/adx_00159278/func_0015B6B0.c](cri/adx_00159278/func_0015B6B0.c) |
| func_002DA3C0 | 0x002DA3C0 | 0x768 | game | cerr |  | [unk/unk_2D9510/func_002DA3C0.c](unk/unk_2D9510/func_002DA3C0.c) |
| func_0022A0A0 | 0x0022A0A0 | 0x794 | game | cerr |  | [battle/a2d/func_0022A0A0.c](battle/a2d/func_0022A0A0.c) |
| func_001E0200 | 0x001E0200 | 0x7DC | game | cerr |  | [unk/unk_1D5B30/func_001E0200.c](unk/unk_1D5B30/func_001E0200.c) |
| func_0011CBA0 | 0x0011CBA0 | 0x7E0 | libc | cerr |  | [sdk/libm/func_0011CBA0.c](sdk/libm/func_0011CBA0.c) |
| func_001FED00 | 0x001FED00 | 0x7E8 | game | cerr |  | [unk/unk_1FB760/func_001FED00.c](unk/unk_1FB760/func_001FED00.c) |
| func_00173A78 | 0x00173A78 | 0x830 | cri | cerr |  | [cri/mpv/func_00173A78.c](cri/mpv/func_00173A78.c) |
| func_0027C2F0 | 0x0027C2F0 | 0x830 | game | cerr |  | [menu/mn_charasel/func_0027C2F0.c](menu/mn_charasel/func_0027C2F0.c) |
| func_0020F970 | 0x0020F970 | 0x8C4 | game | cerr |  | [unk/unk_20A4D0/func_0020F970.c](unk/unk_20A4D0/func_0020F970.c) |
| func_0012F2C0 | 0x0012F2C0 | 0x8DC | game | cerr |  | [sys/unk_12EF80/func_0012F2C0.c](sys/unk_12EF80/func_0012F2C0.c) |
| func_001FA810 | 0x001FA810 | 0x8F8 | game | cerr |  | [unk/unk_1FA3C0/func_001FA810.c](unk/unk_1FA3C0/func_001FA810.c) |
| func_0021E740 | 0x0021E740 | 0x99C | game | cerr |  | [unk/unk_21D260/func_0021E740.c](unk/unk_21D260/func_0021E740.c) |
| func_001DA930 | 0x001DA930 | 0x9E4 | game | cerr |  | [unk/unk_1D5B30/func_001DA930.c](unk/unk_1D5B30/func_001DA930.c) |
| func_00261790 | 0x00261790 | 0x9F0 | game | cerr |  | [unk/unk_260CB0/func_00261790.c](unk/unk_260CB0/func_00261790.c) |
| func_001351F0 | 0x001351F0 | 0xA64 | game | cerr |  | [sys/unk_133620/func_001351F0.c](sys/unk_133620/func_001351F0.c) |
| func_00260CB0 | 0x00260CB0 | 0xAD8 | game | cerr |  | [unk/unk_260CB0/func_00260CB0.c](unk/unk_260CB0/func_00260CB0.c) |
| func_00134690 | 0x00134690 | 0xB58 | game | cerr |  | [sys/unk_133620/func_00134690.c](sys/unk_133620/func_00134690.c) |
| func_0022ACF0 | 0x0022ACF0 | 0xC10 | game | cerr |  | [battle/a2d/func_0022ACF0.c](battle/a2d/func_0022ACF0.c) |
| func_001AB000 | 0x001AB000 | 0xCB8 | game | cerr |  | [battle/btl_cmd/func_001AB000.c](battle/btl_cmd/func_001AB000.c) |
| func_00138390 | 0x00138390 | 0xD00 | game | cerr |  | [sys/unk_137EE0/func_00138390.c](sys/unk_137EE0/func_00138390.c) |
| func_002B2E40 | 0x002B2E40 | 0xD54 | game | cerr |  | [unk/unk_2B2C20/func_002B2E40.c](unk/unk_2B2C20/func_002B2E40.c) |
| func_00233E50 | 0x00233E50 | 0xDCC | game | cerr |  | [unk/unk_231E70/func_00233E50.c](unk/unk_231E70/func_00233E50.c) |
| func_001489F0 | 0x001489F0 | 0xFC4 | game | cerr |  | [sys/unk_147560/func_001489F0.c](sys/unk_147560/func_001489F0.c) |
| func_002C4C90 | 0x002C4C90 | 0x1218 | game | cerr |  | [unk/unk_2C41C0/func_002C4C90.c](unk/unk_2C41C0/func_002C4C90.c) |
| func_0021F740 | 0x0021F740 | 0x19C8 | game | cerr |  | [unk/unk_21D260/func_0021F740.c](unk/unk_21D260/func_0021F740.c) |
| func_001E5500 | 0x001E5500 | 0x0 | game | m2cfail |  | [unk/unk_1D5B30/func_001E5500.c](unk/unk_1D5B30/func_001E5500.c) |
| func_0021A220 | 0x0021A220 | 0x0 | game | m2cfail |  | [unk/unk_219A80/func_0021A220.c](unk/unk_219A80/func_0021A220.c) |
| func_0021A390 | 0x0021A390 | 0x0 | game | m2cfail |  | [unk/unk_219A80/func_0021A390.c](unk/unk_219A80/func_0021A390.c) |
| func_00100000 | 0x00100000 | 0x4 | game | uncompiled |  | [sdk/crt0/func_00100000.c](sdk/crt0/func_00100000.c) |
| func_0010D81C | 0x0010D81C | 0x4 | sdk | m2cfail |  | [sdk/libkernl_0010D628/func_0010D81C.c](sdk/libkernl_0010D628/func_0010D81C.c) |
| func_002F57DC | 0x002F57DC | 0x4 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F57DC.c](menu/mn_CharSelChip/func_002F57DC.c) |
| func_002F91B0 | 0x002F91B0 | 0x8 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F91B0.c](menu/mn_CharSelChip/func_002F91B0.c) |
| func_002F92D0 | 0x002F92D0 | 0x8 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F92D0.c](menu/mn_CharSelChip/func_002F92D0.c) |
| func_002F92C0 | 0x002F92C0 | 0xC | game | uncompiled |  | [menu/mn_CharSelChip/func_002F92C0.c](menu/mn_CharSelChip/func_002F92C0.c) |
| func_002F92E0 | 0x002F92E0 | 0xC | game | uncompiled |  | [menu/mn_CharSelChip/func_002F92E0.c](menu/mn_CharSelChip/func_002F92E0.c) |
| func_002F9500 | 0x002F9500 | 0x10 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9500.c](menu/mn_CharSelChip/func_002F9500.c) |
| func_002F9510 | 0x002F9510 | 0x28 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9510.c](menu/mn_CharSelChip/func_002F9510.c) |
| func_00219E70 | 0x00219E70 | 0x2C | game | m2cfail |  | [unk/unk_219A80/func_00219E70.c](unk/unk_219A80/func_00219E70.c) |
| func_0017FE68 | 0x0017FE68 | 0x38 | cri | jtbl |  | [cri/mwsfd/func_0017FE68.c](cri/mwsfd/func_0017FE68.c) |
| func_002F6E00 | 0x002F6E00 | 0x40 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F6E00.c](menu/mn_CharSelChip/func_002F6E00.c) |
| func_00181B40 | 0x00181B40 | 0x70 | cri | jtbl |  | [cri/mwsfd/func_00181B40.c](cri/mwsfd/func_00181B40.c) |
| func_0019E9D0 | 0x0019E9D0 | 0x70 | cri | jtbl |  | [cri/sfd_00194D48/func_0019E9D0.c](cri/sfd_00194D48/func_0019E9D0.c) |
| func_00187650 | 0x00187650 | 0x74 | cri | jtbl |  | [cri/mwsfd/func_00187650.c](cri/mwsfd/func_00187650.c) |
| func_001616B0 | 0x001616B0 | 0x98 | cri | jtbl |  | [cri/adx_00160EB0/func_001616B0.c](cri/adx_00160EB0/func_001616B0.c) |
| func_002F9540 | 0x002F9540 | 0xA0 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9540.c](menu/mn_CharSelChip/func_002F9540.c) |
| func_001A8770 | 0x001A8770 | 0xB8 | game | m2cfail |  | [battle/btl_cmd/func_001A8770.c](battle/btl_cmd/func_001A8770.c) |
| func_002F9870 | 0x002F9870 | 0xBC | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9870.c](menu/mn_CharSelChip/func_002F9870.c) |
| func_00166228 | 0x00166228 | 0xC4 | cri | jtbl |  | [cri/dtx/func_00166228.c](cri/dtx/func_00166228.c) |
| func_00167DD8 | 0x00167DD8 | 0xC4 | cri | jtbl |  | [cri/dvci/func_00167DD8.c](cri/dvci/func_00167DD8.c) |
| func_002C9AF0 | 0x002C9AF0 | 0xC8 | game | m2cfail |  | [unk/unk_2C41C0/func_002C9AF0.c](unk/unk_2C41C0/func_002C9AF0.c) |
| func_002F8DE0 | 0x002F8DE0 | 0xCC | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8DE0.c](menu/mn_CharSelChip/func_002F8DE0.c) |
| func_002F91C0 | 0x002F91C0 | 0xF4 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F91C0.c](menu/mn_CharSelChip/func_002F91C0.c) |
| func_00196868 | 0x00196868 | 0x114 | cri | jtbl |  | [cri/sfd_00194D48/func_00196868.c](cri/sfd_00194D48/func_00196868.c) |
| func_0021A930 | 0x0021A930 | 0x118 | game | m2cfail |  | [unk/unk_21A4C0/func_0021A930.c](unk/unk_21A4C0/func_0021A930.c) |
| _kDebugException | 0x00114200 | 0x11C | sdk | m2cfail |  | [sdk/libkernl_00113B88/_kDebugException.c](sdk/libkernl_00113B88/_kDebugException.c) |
| func_002F95E0 | 0x002F95E0 | 0x124 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F95E0.c](menu/mn_CharSelChip/func_002F95E0.c) |
| func_002FAB70 | 0x002FAB70 | 0x124 | game | uncompiled |  | [menu/mn_CharSelChip/func_002FAB70.c](menu/mn_CharSelChip/func_002FAB70.c) |
| func_002F84A0 | 0x002F84A0 | 0x12C | game | uncompiled |  | [menu/mn_CharSelChip/func_002F84A0.c](menu/mn_CharSelChip/func_002F84A0.c) |
| func_002F85D0 | 0x002F85D0 | 0x13C | game | uncompiled |  | [menu/mn_CharSelChip/func_002F85D0.c](menu/mn_CharSelChip/func_002F85D0.c) |
| func_002F8710 | 0x002F8710 | 0x144 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8710.c](menu/mn_CharSelChip/func_002F8710.c) |
| func_002F9060 | 0x002F9060 | 0x144 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9060.c](menu/mn_CharSelChip/func_002F9060.c) |
| func_002F8340 | 0x002F8340 | 0x154 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8340.c](menu/mn_CharSelChip/func_002F8340.c) |
| func_0021AB60 | 0x0021AB60 | 0x158 | game | m2cfail |  | [unk/unk_21AB30/func_0021AB60.c](unk/unk_21AB30/func_0021AB60.c) |
| func_002F9710 | 0x002F9710 | 0x15C | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9710.c](menu/mn_CharSelChip/func_002F9710.c) |
| sfxcnv_MakeTable | 0x0019EEA0 | 0x174 | cri | jtbl |  | [cri/sfx/sfxcnv_MakeTable.c](cri/sfx/sfxcnv_MakeTable.c) |
| func_002F8C60 | 0x002F8C60 | 0x17C | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8C60.c](menu/mn_CharSelChip/func_002F8C60.c) |
| func_00252410 | 0x00252410 | 0x18C | game | m2cfail |  | [battle/skill_cmd/func_00252410.c](battle/skill_cmd/func_00252410.c) |
| func_002F8EB0 | 0x002F8EB0 | 0x1A8 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8EB0.c](menu/mn_CharSelChip/func_002F8EB0.c) |
| func_00107348 | 0x00107348 | 0x1B4 | sdk | jtbl |  | [sdk/libmpeg_00104BE8/func_00107348.c](sdk/libmpeg_00104BE8/func_00107348.c) |
| func_001646D0 | 0x001646D0 | 0x1CC | cri | jtbl |  | [cri/srd/func_001646D0.c](cri/srd/func_001646D0.c) |
| func_00164500 | 0x00164500 | 0x1D0 | cri | jtbl |  | [cri/srd/func_00164500.c](cri/srd/func_00164500.c) |
| func_002F8860 | 0x002F8860 | 0x1DC | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8860.c](menu/mn_CharSelChip/func_002F8860.c) |
| func_002F8A40 | 0x002F8A40 | 0x218 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F8A40.c](menu/mn_CharSelChip/func_002F8A40.c) |
| _kTLBException | 0x00113FC0 | 0x234 | sdk | m2cfail |  | [sdk/libkernl_00113B88/_kTLBException.c](sdk/libkernl_00113B88/_kTLBException.c) |
| func_002F66E0 | 0x002F66E0 | 0x2F4 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F66E0.c](menu/mn_CharSelChip/func_002F66E0.c) |
| func_002F72A0 | 0x002F72A0 | 0x2F4 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F72A0.c](menu/mn_CharSelChip/func_002F72A0.c) |
| func_0013EAE0 | 0x0013EAE0 | 0x31C | game | m2cfail |  | [sys/amObject/func_0013EAE0.c](sys/amObject/func_0013EAE0.c) |
| func_002FACA0 | 0x002FACA0 | 0x350 | game | uncompiled |  | [menu/mn_CharSelChip/func_002FACA0.c](menu/mn_CharSelChip/func_002FACA0.c) |
| func_0010EBB0 | 0x0010EBB0 | 0x3B4 | sdk | jtbl |  | [sdk/libkernl/kfiv_filestub/func_0010EBB0.c](sdk/libkernl/kfiv_filestub/func_0010EBB0.c) |
| func_002F69E0 | 0x002F69E0 | 0x418 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F69E0.c](menu/mn_CharSelChip/func_002F69E0.c) |
| func_002F6E40 | 0x002F6E40 | 0x460 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F6E40.c](menu/mn_CharSelChip/func_002F6E40.c) |
| __svfscanf | 0x0012B3B0 | 0xC8C | libc | jtbl |  | [sdk/libc_00129428/__svfscanf.c](sdk/libc_00129428/__svfscanf.c) |
| func_0010C048 | 0x0010C048 | 0xD14 | sdk | jtbl |  | [sdk/libkernl_0010BE70/func_0010C048.c](sdk/libkernl_0010BE70/func_0010C048.c) |
| func_002F75A0 | 0x002F75A0 | 0xDA0 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F75A0.c](menu/mn_CharSelChip/func_002F75A0.c) |
| func_002F57E0 | 0x002F57E0 | 0xEF4 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F57E0.c](menu/mn_CharSelChip/func_002F57E0.c) |
| func_00128288 | 0x00128288 | 0xF14 | libc | jtbl |  | [sdk/libc_00128288/func_00128288.c](sdk/libc_00128288/func_00128288.c) |
| func_002F9930 | 0x002F9930 | 0x1238 | game | uncompiled |  | [menu/mn_CharSelChip/func_002F9930.c](menu/mn_CharSelChip/func_002F9930.c) |
| func_00122560 | 0x00122560 | 0x1264 | libc | jtbl |  | [sdk/libc/func_00122560.c](sdk/libc/func_00122560.c) |
| _vfprintf_r | 0x00129AA0 | 0x1670 | libc | jtbl |  | [sdk/libc_00129428/_vfprintf_r.c](sdk/libc_00129428/_vfprintf_r.c) |
| func_00174798 | 0x00174798 | 0x3058 | cri | jtbl |  | [cri/mpv/func_00174798.c](cri/mpv/func_00174798.c) |
| func_002F92F0 | 0x002F92F0 | 0x204 | game | none |  | [menu/mn_CharSelChip/func_002F92F0.c](menu/mn_CharSelChip/func_002F92F0.c) |
| _start | 0x00100008 | 0x210 | game | none |  | [sdk/crt0/_start.c](sdk/crt0/_start.c) |
