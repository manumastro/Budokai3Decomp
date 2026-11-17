# Decompiling a file (working notes)

The goal is C that compiles to the same bytes as the original. The game's code (the two Metrowerks parts) is built
with Metrowerks CodeWarrior PS2 `mwccps2` 3.0b52 at `-O4,p -sdatathreshold 8` (configure.py's `MWCC_FLAGS`; see
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
    `.rodata` or `.sdata` entry to the object and shift everything after it in the linked image);
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
- A sign test is written against -1 in the source when the original has `slti $at, x, 0`: `if (x > -1)` gives
  `slti $at, x, 0` / `bnez $at` (skip when negative) and `if (x <= -1)` gives `slti $at, x, 0` / `beqz $at`, while
  `x >= 0`, `x < 0` and `0 > x` give `bltz` / `bgez` (checked: func_001D5160, func_001D51F0, func_001CBAE0,
  func_001CBC20). So the `slti` form (95 of its 99 sites are in 0x1A2000-0x1E0000) is a source idiom, not other
  compiler settings.
- `if (c) { a; return 1; } else { b; return 1; }` with the same test in each branch: write the test and the
  `return` inside each branch when the original keeps a copy of the tail in each (func_001D5160); a common tail
  after the `if` is not duplicated by the compiler.
- A function that returns `s16` is sign-extended by the caller (`dsll32` / `dsra32`) when its result is assigned
  to a wider variable; one that returns `int` is not. The extension's place tells which prototype the callee has.
- A conditional expression (`x = c ? a : x;`) joins without the alignment `nop` that an `if` statement's join gets
  (func_001C9EF0).
- Register numbers follow the variables, not their declaration order: a loop that reuses the counter of an earlier
  loop gets other registers than one with a counter of its own, and a list walk with its own iterator (not the
  variable later assigned the new object) changes the `$s` registers of the whole function. A redundant
  `if (p != 0)` inside a function, with its own loop registers, is an inlined `static inline` function: write it
  as one (func_001D4210).
- An early `return` and `if (...) {} else {...}` place the blocks differently; when the original jumps over a
  `b` to the end, try `if (a == 0 || b != 0) return;` (func_001CA000).
- A small `switch` (two or three cases, no jump table) compiles to a chain of `beq`; the case blocks are laid out
  in the source order of the `case` labels (func_001CB4A0).
- Tail calls (`j func` with the stack restored in the delay slot) appear in the code linked before CRI; 3.0b52 at
  `-O4,p` did not produce one for `func_0014E580`: open question.

## Working in parallel (agents)

- Work in your own git worktree when the coordinator gives you one; never run `git push`, never rewrite history.
- In a shared checkout, the only tool to run is `scripts/fdiff.py` (safe in parallel). Do not run configure.py,
  splat or ninja there: they rewrite asm/ and build/, which the others read.
- Edit only the files you were given and your area's symbol file. Report what matched, what did not and why.
