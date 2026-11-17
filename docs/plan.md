# Budokai 3 decompilation: what the executable holds, and the plan

First pass, 2026-11-17. Every fact carries a label, as in Tenkaichi3Decomp's docs:

- **Verified**: checked by building or by compiling (the byte-identical build, a function compiled to the original
  bytes, a tool's output).
- **Inferred**: read from the disassembly or the strings, or a judgement.

## The executable

**Verified** (read from the ELF and checked by the rebuild, `scripts/mkelf.py`):

| | |
|---|---|
| File | `SLUS_209.98`, 3,605,552 bytes, md5 `a0d2708790227c28cd770a05b3d8af28`, PCSX2 CRC `2A4B60EB`, dated 2004-10-01 on the disc |
| Entry | `_start`, 0x100008 (0x100000-0x100007 are zero) |
| `$gp` | 0x477CF0 (`.reginfo`, and set by `_start`) |
| Loaded image | 0x100000-0x470200 (0x370200 bytes), one PT_LOAD segment at file offset 0x80 |
| `.sbss` + `.bss` | 0x470200-0x5D0100 (0x15FF00 bytes; `_start` clears exactly that range) |
| Sections | Stripped: the image is one unnamed PROGBITS section; `.symtab` and `.strtab` are empty; no `.mdebug`, no map |
| `.comment` | `MW MIPS C Compiler (2.4.1.01)`, `PlayStation2`: written by Metrowerks' linker `mwldps2` (see Compiler) |

Sections inside the image (**inferred** from the contents; the split rebuilds byte-identical with these boundaries):

| Range | Size | What |
|---|---|---|
| 0x100000-0x310908 | 2,164,996 bytes | `.text`, padded to 0x310980 |
| 0x310980-0x45CB80 | 1,360,384 bytes | `.data`: about 0x74000 bytes of VU1 microprograms (four blocks), about 0x77000 bytes of zero-filled arrays, tables |
| 0x45CB80-0x46FD00 | 78,208 bytes | `.rodata`: strings and constants in link order; its last 0x80 bytes hold a static initializer (code at 0x46FC80) and a pointer to it |
| 0x46FD00-0x470200 | 1,280 bytes | `.sdata` (starts at `$gp` - 0x7FF0) |

## What is in the executable

The code falls into four parts that differ in style (**inferred**): Metrowerks pads every function to 16 bytes, saves
`$s` registers with `sq` and never uses branch-likely instructions; the gcc-built libraries start functions on
8 bytes, save `$s` registers with `sd` and use `beql` / `bnel`. Function counts are splat's (8,299 in all, a few of
them handwritten or data inside the code).

| Part | Range | Size | Functions | Compiler | Contents |
|---|---|---|---|---|---|
| Sony SDK + C library | 0x100000-0x12C360 | 181 KB (8 %) | 858 | gcc | libgraph, libdma, libipu, libmpeg, libkernl, libcdvd, libpad, libmc, libsdr, the C library (newlib-style `vfprintf`) |
| Metrowerks, linked before CRI | 0x12C360-0x14E5D0 | 140 KB (6 %) | 414 | Metrowerks 3.0b, `-O1,p` (verified on 8 functions) | Part of Dimps' `am*` layer (`amDraw3d.c`, `amMotion.c`, `amObject.c`, `amSofdec.c`), threads, `script.c`, CD init, `main` (0x14E4B0) |
| CRI middleware | 0x14E5D0-0x1A1E80 | 342 KB (16 %) | 2,798 | gcc | ADX (ADXF, ADXT, ADXB, ADXRNA, SJ, SVM, CVFS with DVCI/HTCI/MFCI), Sofdec (MWSFD, SFD, MPV, M2V, SFX), libmtap |
| Metrowerks, linked after CRI | 0x1A1E80-0x310908 | 1,502 KB (69 %) | 4,229 | Metrowerks (verified on 3 functions) | The game: battle, characters, menus, story; also `amMc.c` (0x1A30B0) and `amCdFs.c` (0x25CA10), so the `am*` layer is not all in the first part |

So about 76 % of the code (1.64 MB, 4,643 functions) is Dimps' code built with Metrowerks, and 24 % (523 KB,
3,656 functions) is third-party libraries. The boundaries are where the style changes; a function or two on each
side may belong to the other part.

Library versions (**verified**, from their version strings):

- Sony EE libraries: `PsIIlibgraph 3000`, `libdma 3000`, `libipu 3000`, `libcdvd 3000`, `libsdr 3000`, `libpad 3010`,
  `libmc 3010` (SDK 3.0.0 / 3.0.1; Tenkaichi 3 has tags 3000 / 3020, its docs).
- CRI, built 2004-04-12 / 15: ADXT 9.19, ADXF 7.14, ADXPS2 2.52, ADXRT 3010, SJ 6.23, SVM 1.53, CVFS 2.35, DVCI 2.70,
  HTCI 2.68, MFCI 1.07, LSC 2.16, PS2RNA 1.26, SRD 2.19, DTR 1.06, DTX 1.07, MWSFD 3.13, SFD 1.903, MPV 1.902,
  M2V 1.902, SFX 2.00, SFH 1.16, CFT 1.51, SUD 0.05.
- IOP modules on the disc (`MODULES/`): `IOPRP300.IMG`, `SIO2MAN`, `PADMAN`, `MTAPMAN`, `MCMAN`, `MCSERV`, `LIBSD`,
  `SDRDRV`, `CRI_ADXI`, `MODHSYN`, `MODMIDI`, `MODSEIN`, `MODSESQ`, `AMSOUND` (Dimps' sound driver; the `.snd` / AIFF
  strings in the first Metrowerks part talk to it).

The game's subsystems (**inferred** from the source file names its assertions print, 72 of them, and the debug
labels):

| Area | Files |
|---|---|
| Battle | `btl_main.c`, `btl_cmd.c`, `btb_main.c`, `btb_draw.c` (stages), `skill_cmd.c`, `a2d.c`, `scr_func.c` |
| Characters | `character.c`, `char_body.c`, `char_parts.c`, `char_disp.c`, `char_light.c`, `char_cloth.c`, `char_mant.c`, `char_acsr.c`, `char_secp.c` |
| Story (Dragon Universe) | `str_title.c`, `str_map.c`, `str_select.c`, `str_status.c`, `str_bg.c`, `str_staffroll.c`, `str_dataerase.c`, `zny_main.c`, `evt_scrp.c`, `evt_shenron.c`, `opening.c` |
| Menus | `mn_title.c`, `mn_mainmenu.c`, `mn_vsmode.c`, `mn_charasel.c`, `mn_VsCharasel.c`, `mn_CharSelChip.c`, `mn_StageSel.c`, `mn_option.c`, `mn_save.c`, `mn_dataload.c`, `mn_help.c`, `mn_pracmode.c`, `mn_TourMode.c`, `mn_TourMap.c`, `mn_Arena*.c` (7 files), `mn_InputName.c`, `mn_InputPass.c`, `mn_OutputPass.c`, `mn_ipsyswnd.c`, `mn_Logomark.c`, `mn_csmodel.c`, `mn_cssubstat.c`, `mn_cssubArena.c` |
| Skills (capsules) | `ess_main.c`, `ess_list.c`, `ess_edit.c`, `ess_info.c`, `ess_shop.c`, `ess_trade.c`, `skl_sheet.c`, `skl_edit.c` |
| System | `cnv_sys.c`, `mc_opr.c`, `script.c` |

Files and data (**verified** strings, **inferred** use):

- Archives: `/USR/DATA_CMN.AFS`, `/USR/DATA_USA.AFS`, `/USR/ADX_USA.AFS`; movies `/USR/OPENING.SFD`,
  `/USR/ENDING00.SFD`, `/USR/DBZ2OPUS.SFD`, `/USR/DBZ2OPEU.SFD` (played through `amSofdec.c` and MWSFD). A host file
  system is also set up for development (`amCdFs.c`, "Setup host file system").
- Memory card: `BASLUS-20998DBZ3`, and the Budokai 1 / 2 save folders (`BASLUS-20591DBZ`, `BASLUS-20779DBZ2`), which
  the game reads for its bonuses.
- **VU1 microprograms**: four blocks in `.data` (0x310980, 0x36F180, 0x38BD80, 0x3EA980; about 463 KB together) of DMA
  packets with VIF `MPG` uploads: about 174 uploads, 88 different, about 32,000 instruction pairs. The last, small
  block sits beside libgraph's data and may be Sony's. That the uploads go to VU1 (not VU0) is inferred from their
  size and the DMA packet form. Tenkaichi 3 has nine VU1 programs in 15.5 KB (0x2BF6B0-0x2C3380, its docs), so
  Budokai 3 carries far more microcode; that the cel-shading and outlines are among it is a guess to check. It
  matters for the renderer of a port.
- **GS paths**: the game builds its display lists for VU1 (PATH1) and GIF packets; libgraph / libdma
  (`sceGsSyncPath`, `sceGsPutDrawEnv`) do the setup, and `amDraw3d.c` checks its packet buffer ("Packet Over").

## Compiler

**Verified** for the game (the part linked after CRI): Metrowerks CodeWarrior for PlayStation 2, version 3.0 beta
(`mwccps2` 3.0b22 to 3.0b52), at `-O3,p` or `-O4,p`.

**Verified** for Dimps' `am*` library: the same 3.0b builds at **`-O1,p`**. That covers the Metrowerks part linked
before CRI and `amMc.c` / `amCdFs.c` in the game part, but not `main` (below). The flags are per file:
configure.py's `FILE_FLAGS` gives these files `AM_FLAGS`, and every other C file `MWCC_FLAGS`.

- **The style** (**inferred**, counted over the split): in the `am*` files, the delay slots of branches and calls
  hold a `nop` (4,008 of them). The only filled ones are in hand-written functions (VU0 macro instructions; the
  FPU accumulator instructions `mula.s` / `madda.s`; `addi` / `add`; branch-likely; `$at` used as a temporary; `$ra`
  kept in a register) and in the functions listed below as belonging elsewhere. The game's files fill most of
  theirs: `btl_main.s` has 1,934 nops and 3,578 filled slots. `-opt level=1` is the level without instruction
  scheduling, tail calls or common subexpressions (`mwccps2 -help all`).
- **The match** (**verified**): `scripts/probe/am_probe.c` holds 13 functions:
  - eight of the part linked before CRI: a 240-instruction loop nest that relocates a model file's offsets, five
    small call or store functions and a bump allocator;
  - five of `amMc.c` / `amCdFs.c`: memory-card callbacks, a loop over the file table, a reference count, a queue
    read.

  `scripts/mwmatch.py` compiled the first eight with all 18 builds at `-O1`, `-O1,p`, `-O2,p` and `-O3,p`, and the
  other five with 3.0b22, 3.0b52, 3.0.3 and 3.0.1b44 at `-O1`, `-O1,p`, `-O2,p` and `-O4,p`. All 13 match
  (0 differing instructions) only with the 3.0b builds at `-O1,p` (3.0b22, 3.0b38, 3.0b50 and 3.0b52 for the
  first eight):
  - `-O1` without `,p` drops the nops that align loop heads to 8 bytes (207 of 234 differ in the big one);
  - `-O2,p` shares the allocator's two loads of its global (5 of 8 differ);
  - `-O3,p` / `-O4,p` schedule, and 3.0 / 3.0.1 / 3.0.3 / 3.0.1bXX and 2.x differ in 1 to 8 of the functions.

Two other sets of code sit at the edges of the `am*` files:

- **`main` (0x14E4B0)** compiles to the original (0 of 31 differing) with 3.0b52 at `-O3,p` and `-O4,p`, not
  at `-O1,p`, so it is a file of its own built like the game, after `script.c` (**inferred**).
- **0x14E530 and 0x14E580** come after `main`. 0x14E530 has no symbol of its own: splat folded it into `main`.
  Both look like gcc code, not Metrowerks (**inferred**): 0x14E530 saves `$s0` with `sd` in a 16-byte frame,
  as the CRI code after it does, and 0x14E580 ends in a tail call (`j`) to `memset`. Both use a counter at
  0x400B58 to clear 0x300 bytes at 0x400B60 once. So the gcc library part probably starts at 0x14E530, not
  0x14E5D0. This explains why `func_0014E580` matched with no Metrowerks build.
- **0x25BE40 and 0x25BE50**, the first two functions of `amCdFs.s`, belong to the game file before it:
  `func_0025BE50` (it starts three threads) compiles to the original (0 of 35 differing) at `-O4,p` and not at
  `-O1,p` (34 of 39). It is a scheduled function, unlike every C function of `amCdFs.c`. So `amCdFs.c` starts at
  0x25BEE0 (**inferred** for 0x25BE40, an empty function that is the same at both levels). The yaml keeps the
  boundary for now, and the two stay `INCLUDE_ASM`.
- **`unk_1A31B0.s`**, the file right after `amMc.s`, is the only other file of the game part with no filled delay
  slot (179 nops, 14 functions; counted over the split). It is probably more of the `am*` library and would then
  need `AM_FLAGS` too (**inferred**, not compiled yet).

Evidence:

1. The ELF's `.comment` is the linker's: compiling with `mwccps2` 3.0b52 writes `MW MIPS C Compiler (3.0.0)` into the
   object, and linking it with the same release's `mwldps2` writes `MW MIPS C Compiler (2.4.1.01)` and
   `PlayStation2` into the ELF, exactly the original's text. Every archived `mwldps2` (2.3.3 to 3.0.1b145) writes the
   same, so the `.comment` proves a Metrowerks link, not the compiler version.
2. `scripts/probe/compiler_probe.c` holds three functions of the game written as C (`func_001CF570`: scheduled loads
   through a `$gp` pointer with a `lui $at` offset; `func_001E3D60`: int to float, a divide, float compares,
   label-alignment nops; `func_002AA5A0`: a `$gp` float array and a function pointer store). `scripts/mwmatch.py`
   compiled them with 18 Metrowerks builds at `-O2,p`, `-O3,p`, `-O4,p` and `-O4,s`: all three match (0 differing
   instructions) with 3.0b22-020926, 3.0b38-030307, 3.0b50-030527 and 3.0b52-030722 at `-O3,p` and `-O4,p`, and
   with nothing else (2.3.3 / 2.4: 7 to 30 differing; 3.0 / 3.0.1 / 3.0.3: 3 to 17; 3.0.1b44 to b145: 8 to 17;
   `,s` breaks two of the three, 3 and 9; `-O2`: 18 to 37).
3. The style counts over the game code agree: `sd $ra` with `sq $s*` (Metrowerks 3.x; 2.x saves `$ra` with `sq`),
   no branch-likely instructions, nops that align branch targets to 8 bytes.

Still open:

- The four 3.0b builds and the two levels tie on everything matched so far. The build uses 3.0b52 at `-O4,p` until
  a function tells them apart.
- Settled: the `slti $at, x, 0` / `bnez $at` test (99 sites, 95 of them in 0x1A2000-0x1E0000) is the source
  form `x > -1` (and `x <= -1` gives the `beqz` form); `func_001D5160` matches with it. See docs/decomp_guide.md.

### The libraries' compilers

The two library parts are gcc output (branch-likely instructions, `sd` saves, 8-byte function starts), and two
different ee-gcc builds made them (2026-11-17; `scripts/gccmatch.py` over the C in `scripts/probe/gcc_*.c`, every
runnable build of decomp.me's archive at `-O1`, `-O2`, `-O3`, `-Os`, and `-O2 -fno-strict-aliasing`, all `-G0`):

| Library group | Range | Compiler and flags | Matched (0 differing instructions) |
|---|---|---|---|
| Sony's EE libraries (libgraph ... libmc, libsdr; crt0 before them is hand-written) | 0x100218-0x11B4E8 | ee-gcc 2.9-ee-991111 family, `-O2 -G0` | `sceGsPutDrawEnv` (58 instructions, a wait loop and two store paths) |
| libmtap (Sony's, linked after CRI) | 0x1A19D0-0x1A1E80 | the same | `sceMtapPortOpen` (27), `func_001A19F8` (23): 9-argument RPC calls |
| The C library (newlib); libm and libgcc by their save slots | 0x11B4E8-0x12C360 | ee-gcc 2.96-ee-001003-1, `-O2 -G0` | `rand` (25, a `__muldi3` call), `srand`, `_read_r` (24) |
| CRI ADX (ADXF, ADXT, ...) | 0x14E5D0-0x17F1D0 (about) | ee-gcc 2.96, `-O2 -G0` | `ADXF_Seek` (69), `adxf_ChkPrmPt` (18), `ADXT_GetSfreq` (19) |
| CRI Sofdec (MWSFD, SFD, ...) | 0x17F1D0 (about)-0x1A19D0 | ee-gcc 2.96, `-O2 -G0` | `mwPlyGetSyncMode` (39, a switch as a compare tree) |

What tells them apart (**verified** unless marked):

- `-G0` everywhere: neither part has a single `%gp_rel` access (newlib's `_impure_ptr` and `errno` would be one
  at `-G8`).
- The register save slots split the parts cleanly (**inferred** for the functions not compiled): the 2.9-ee builds
  save `$s` / `$ra` 16 bytes apart, 2.96 8 bytes apart. 0x100250-0x11B3D8 and 0x1A19F8-0x1A1E18 are all 16 (one
  exception, 0x106AA8 in libmpeg, not looked at), 0x11B4E8-0x12C250 and 0x14E5D0-0x1A18C8 all 8.
- Sony's libraries: `sceGsPutDrawEnv` matches with all four 2.9-ee builds (990721, 991111, 991111-01, 991111a) and
  with SN Systems' 2.95.3-136 at `-O2` / `-O3`; 2.96 gives 47 of 61 differing (a delay slot and a register pair),
  3.2 55 of 57. The libmtap pair rules out SN's 2.95.3-136 (4 and 13 differing) and every 2.95 build. The four
  2.9-ee builds produce the same code on everything tried (their output differs only in label numbers): a true
  tie. The build uses 2.9-ee-991111-01, the version the SDK's own libraries are usually tagged with (**inferred**).
- The C library: `rand` matches only with 2.96 at `-O2` / `-O3` / `-Os`, and `-fno-strict-aliasing` breaks it
  (28 of 29), so newlib was built without that flag; `srand` excludes `-Os`. `_read_r` needs `long ret` (newlib's
  `_ssize_t`; `long` is 64 bits here).
- CRI: 2.96 at `-O2` / `-O3` and nothing else matches the five functions; `-Os` breaks `ADXF_Seek`. At `-O3`, 2.96
  inlines `adxf_ChkPrmPt` into a later caller of the same file, where the original keeps the `jal`: ADXF was built
  at `-O2`. `-fno-strict-aliasing` changes nothing in the CRI functions tried.

Still open: `-O2` against `-O3` for the Sony libraries, the C library and Sofdec (the build uses `-O2`: no
function tried tells them apart); two near misses kept in the probes (`sceGsSyncPath`, 45 of 197, the order of its
time-out paths; `mwSfdPause`, 4 of 71, a register pair). How the libraries run: `scripts/eegcc/eegcc.py` (the Linux
builds in Docker, SN's Windows builds in wibo; README, "Building").

## The PC port

The port follows z3xox/Tenkaichi3Decomp's layout (checked there, read-only: `port/` holds the port's own code,
`src/` and `include/` the decompilation's; game code changes only inside `#ifdef PORT`, so the PS2 build stays
byte-identical):

- **The matching build first** (this repository): the decompiled C, linked into the executable that matches the
  original. Nothing here depends on a host.
- **The port** in `port/`: a host program built from the same C, with the PC's own layer under it:
  - the game's display lists are drawn by a renderer on the host (the list reader and the VU1 microprogram
    interpreter, which the game's own VU1 programs need, are the two parts that must be written);
  - sound, files and the disc image (an AFS and ADX reader; the game's data is read from the player's own disc,
    never shipped);
  - input and the window, through SDL3 (as in the Tenkaichi 3 port's macOS build).
- **Game data never in the repository**: the port reads it from the player's disc image, as the decompilation does.
- **Every change to the game's C under `#ifdef PORT`**, so the matching build is unaffected.

The steps are the libraries replaced by the port's own layer (Sony's graphics and file calls, CRI's sound and
movie calls, the pad and memory card), then the renderer, then a first playable fight.

## Effort

- Code to decompile for a port: the two Metrowerks parts, 4,643 functions, 1.64 MB. The libraries
  (3,656 functions) do not need to be matched for a port: Tenkaichi 3's port replaces CRI and Sony's libraries
  with its own layer; they can stay assembly (or be matched later with ee-gcc).
- Size against Tenkaichi 3: its executable has about 8,750 functions and 1.83 MB of code, 81 % game; Budokai 3's
  game part is about two thirds of Tenkaichi 3's.
- Estimate (**inferred**): with the agent-driven method of Tenkaichi3Decomp, 3 to 5 months to matching
  Metrowerks code, then 2 to 3 months to a PC host build that reaches a fight. The
  Metrowerks toolchain is less trodden than ee-gcc (mwccgap for partial files; its scheduler's ties), which is the
  main risk to the estimate; the second is the VU1 microcode volume for the renderer.

## Next milestones

1. **File boundaries and a first linked C file**: cut `mw_a/text` and `mw_b/text` into one asm file per source
   file (the 72 file names, the order of their strings in `.rodata`, the code style), put the build's C path
   through `mwccgap` and link one decompiled file into the byte-identical build. Add objdiff and a progress
   script.
2. **Library names**: carry over Sony SDK and CRI names by matching functions against known ones (Tenkaichi 3 has
   the same SDK generation and a newer CRI; its `config/symbols/lib.txt` names 341 library functions), and decide
   whether the libraries are matched or kept as assembly.
3. **The `am*` layer first**: the part linked before CRI (414 functions: drawing, motion, objects, movies, threads,
   main) and the `am*` files linked with the game (`amMc.c`, `amCdFs.c`: memory card, CD file system). It is the
   platform layer a port replaces or reimplements, so it is decompiled and documented first.
4. **The game by subsystem**: battle and characters, then the menus, the story mode, the skill screens.
5. **Data**: name the `.data` tables, split the VU1 microprograms into listings (Tenkaichi3Decomp's
   `scripts/vuasm.py` assembles them back), and list each one's job.
6. **Port**: a host build of the decompiled C in `port/` (SDL3), with the renderer, sound and files of the PC layer
   described in "The PC port", then a first fight.
