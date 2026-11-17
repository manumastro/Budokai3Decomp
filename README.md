# Budokai3Decomp-Vita

A matching decompilation of **Dragon Ball Z: Budokai 3** (PlayStation 2, USA release, SLUS-20998), the base for a
later native PS Vita port. The goal is C source that compiles to the same bytes as the game's executable, so that
the game's own code can then be built for other machines.

This repository contains **no game data**: no executable, no disassembly of it, no assets. You need your own disc
image of the USA release. The build reads the executable from it, and everything taken from the disc stays in
git-ignored folders (`iso/`, `disc/`, `asm/`, `assets/`, `build/`).

The executable checked against is `SLUS_209.98`, 3,605,552 bytes, md5 `a0d2708790227c28cd770a05b3d8af28`
(PCSX2 CRC `2A4B60EB`). The fan mod *Budokai AF HD* ships the same executable (it changes only the data), so its
disc image works too.

## Status

Early. The executable is split by [splat](https://github.com/ethteck/splat) and rebuilt from the split: the build
gives a byte-identical ELF. No C is linked yet. The game was built with Metrowerks CodeWarrior for PS2 3.0 beta at
`-O4,p` (three of its functions compile to the original bytes with it and with no other version:
`scripts/mwmatch.py`, `scripts/probe/`). [docs/plan.md](docs/plan.md) has the analysis of the executable, the
figures, the compiler evidence and the next steps.

## Building

macOS (Apple Silicon) or Linux x86-64, with Python 3.9 or newer, and `bsdtar` (macOS has it; on Linux the
`libarchive-tools` package) or `7z` to read the disc image.

```sh
python3 -m venv .venv
.venv/bin/pip install -r requirements.txt
python3 scripts/get_tools.py             # binutils, wibo, the Metrowerks compiler, mwccgap into tools/
mkdir -p iso && cp <your disc image> iso/   # or: configure.py --iso <your disc image>
.venv/bin/python configure.py            # extracts SLUS_209.98, checks it, splits it, writes build.ninja
.venv/bin/ninja                          # build/SLUS_209.98: rebuilt and compared with the original
```

`ninja` ends with `CHECK build/SLUS_209.98.ok` when both the flat image and the whole ELF match the original.
The Metrowerks compiler is a Windows program; [wibo](https://github.com/decompals/wibo) runs it (on Apple Silicon
under Rosetta).

## Layout

| Path | Contents |
|---|---|
| `config/SLUS_209.98.yaml` | splat's description of the executable: segments, sections, options |
| `config/symbol_addrs.txt` | Names given to addresses (functions, data); each group says why the name fits |
| `config/linker_script_extra.ld` | Linker script added after splat's |
| `configure.py` | Extracts and checks the executable, runs splat, writes `build.ninja` |
| `scripts/get_tools.py` | Downloads the tools into `tools/` |
| `scripts/mkelf.py` | Wraps the rebuilt image in an ELF laid out like the original (mwldps2's layout) |
| `scripts/mwmatch.py` | Compiles C with each Metrowerks build and flag set and compares functions with the original |
| `scripts/names_from_strings.py` | Names library functions after the error strings they print |
| `config/symbols/` | Library names: syscall stubs by number, Sony / CRI functions from their strings |
| `docs/plan.md` | What the executable contains, the compiler, the figures, the plan |

## Credits

- Layout and conventions after z3xox's [Tenkaichi3Decomp](https://github.com/z3xox/Tenkaichi3Decomp), the matching
  decompilation of Budokai Tenkaichi 3, and its PS Vita port
  ([arielxflores/Tenkaichi3Decomp-Vita](https://github.com/arielxflores/Tenkaichi3Decomp-Vita)).
- [splat](https://github.com/ethteck/splat) and [spimdisasm](https://github.com/Decompollaborate/spimdisasm),
  [binutils-mips-ps2-decompals](https://github.com/decompals/binutils-mips-ps2-decompals),
  [wibo](https://github.com/decompals/wibo), [mwccgap](https://github.com/mkst/mwccgap), and
  [decomp.me](https://decomp.me)'s compiler archive.
- The Silent Hill 2 / 3 decompilation ([memory-of-alessa](https://github.com/dreamingmoths/memory-of-alessa)) for
  how a Metrowerks PS2 game is set up.

Dragon Ball Z: Budokai 3 is a game by Dimps, published by Atari (Bandai in Japan). This project is not affiliated
with them. The code in this repository is under the MIT licence ([LICENSE](LICENSE)).
