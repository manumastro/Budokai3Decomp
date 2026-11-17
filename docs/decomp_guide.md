# Decompiling a file (working notes)

The goal is C that compiles to the same bytes as the original. The game's code (the two Metrowerks parts) is built
with Metrowerks CodeWarrior PS2 `mwccps2` 3.0b52 at `-O4,p -sdatathreshold 8 -str readonly` (configure.py's `MWCC_FLAGS`; see
docs/plan.md, "Compiler"). Every function gets a real name once its job is understood. After the model of
z3xox/Tenkaichi3Decomp's docs/decomp_guide.md.

## Loop

1. Pick a file of the split (`asm/<area>/<file>.s`; the yaml lists them). If it is still assembly, the coordinator
   turns it into C with `scripts/asm2c.py <area>/<file>` (then configure.py): `src/<area>/<file>.c` holds one
   `INCLUDE_ASM` per function, and each function's assembly is in `asm/nonmatchings/<area>/<file>/<name>.s`.
2. Replace an `INCLUDE_ASM` line with C, in place (functions stay in address order).
3. `python3 scripts/fdiff.py src/<area>/<file>.c [name ...]` (with the repo's `.venv/bin/python`): it compiles
   the file and compares each C function with the original; `OK` means every non-relocated bit matches and the
   size is right; `-v` shows the differing instructions side by side (original on the right).
4. Iterate until `OK`. A function that will not match after real effort stays `INCLUDE_ASM`, with the best C
   attempt above it inside `#if 0 ... #endif` and a one-line note on what differs.
5. Record each new name in the area's symbol file (below); the coordinator re-splits and runs the whole build.

## Symbol files

`config/symbols/<area>.txt` (sys, battle, menu, story, unk; lib_sdk, lib_cri for the libraries), listed in the
yaml. Format:

    Name = 0x00123456; // type:func
    gGlobal = 0x00470570; // size:0x4

A `//` comment line above each group says what the code does and why the name fits; end a line with `// guess` when
the name is a best guess. Names are unique across all of `config/`. Functions: `Module_VerbNoun`; globals: `gName`.
Until a function is named in a symbol file, keep its `func_XXXXXXXX` name in C (fdiff finds its address from it).

## Rules for matching in the full build

- A C file covers one contiguous range of functions, in address order; nothing skipped.
- **Define no data in C yet.** The data stays in the assembly data files (asm/data/), so:
  - string literals: declare the original string as `extern char D_XXXXXXXX[];` and use that (a literal would add a
    `.rodata` entry to the object and shift everything after it in the linked image). The game's strings, short
    ones included, are all in `.rodata`: that is `-str readonly` (without it Metrowerks puts strings of 8 bytes or
    less in `.sdata`);
  - float constants: Metrowerks builds a float whose low 16 bits are zero with `lui` / `mtc1` (write it as a
    literal: `0.5f`); any other float it loads from `.sdata` (`lwc1 $f, %gp_rel(D_XXXXXXXX)($gp)`): write
    `extern f32 D_XXXXXXXX;` and use the variable;
  - `switch` statements with a jump table: the table is in `.rodata` (`jtbl_...` in the assembly); a C switch would
    emit its own. Leave such functions `INCLUDE_ASM` until the coordinator migrates that file's data;
  - `static` variables of the file: refer to them as `extern` with their `D_XXXXXXXX` name for now.
- Globals: declare `extern` with the right type. Metrowerks reaches a global of 8 bytes or less through `$gp`
  (`%gp_rel`); for that the `extern` must have a complete type of at most 8 bytes (`extern s32 D_x;`,
  `extern s32 D_x[2];`), while `extern s32 D_x[];` compiles to `lui` / `addiu`.
- fdiff checks the instructions only. The coordinator's `ninja` checks the whole image (data included).

## Things Metrowerks 3.0b is sensitive to (seen so far)

- It saves `$ra` with `sd` and `$s` registers with `sq`; moves are `daddu rd, rs, $zero`.
- `-O4,p` schedules: loads hoisted to the top, `lui $at` for offsets over 0x7FFF placed early, delay slots filled.
- It pads branch targets to 8 bytes with a `nop` and every function to 16 bytes.
- `if (x >= 0)` on a value it can test with a branch on zero gives `bltz`; the original sometimes has
  `slti $at, x, 0` / `bnez $at` instead (95 of 99 such sites are in 0x1A2000-0x1E0000), source form unknown yet.
- Tail calls (`j func` with the stack restored in the delay slot) appear in the code linked before CRI; 3.0b52 at
  `-O4,p` did not produce one for `func_0014E580`: open question.

## Working in parallel (agents)

- Work in your own git worktree when the coordinator gives you one; never run `git push`, never rewrite history.
- In a shared checkout, the only tool to run is `scripts/fdiff.py` (safe in parallel). Do not run configure.py,
  splat or ninja there: they rewrite asm/ and build/, which the others read.
- Edit only the files you were given and your area's symbol file. Report what matched, what did not and why.
