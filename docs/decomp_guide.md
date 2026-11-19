# Decompiling a file (working notes)

The goal is C that compiles to the same bytes as the original. The Metrowerks code is built with Metrowerks
CodeWarrior PS2 `mwccps2` 3.0b52, with flags that depend on the file (docs/plan.md, "Compiler"):

- the game uses `-O4,p -sdatathreshold 8 -str readonly` (configure.py's `MWCC_FLAGS`);
- Dimps' `am*` library uses `-O1,p -sdatathreshold 8 -str readonly` (`AM_FLAGS`). These are the `src/sys/` files of the part
  linked before CRI, and `amMc.c` / `amCdFs.c`.

configure.py's `FILE_FLAGS` table (path prefixes, first match wins) chooses the flags. Both ninja and
`scripts/fdiff.py` read that table, so a new file built with other flags needs one line there. Every function gets a real name once its job is understood. After the model of
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

## Labels in INCLUDE_ASM functions

mwccgap copies a global symbol that an INCLUDE_ASM function defines into the C object with the section index it
had in the assembly object, so a branch to it lands in the wrong place. This affects jump-table labels (`jlabel`)
and alternative entries (`alabel`). For that reason:

- mwccgap gets `include/macro_cc.inc`, not `include/macro.inc`. There, a `jlabel` is a plain local label, so
  branches to it are resolved inside the function. An `alabel` defines nothing.
- configure.py writes `build/c_labels.ld`, which gives these labels their original addresses for the jump tables
  (still in `asm/data`) and for calls. It also covers labels that a hand-written function branches to inside
  another function.

A hand-written function that falls into the next one (an entry point that is not 16-byte aligned) cannot be its
own C-file function, because Metrowerks aligns each function to 16. Give the first one a `size:` that covers both
and name the inner entry `.LXXXXXXXX` with `type:label` in the symbol file (see `func_0012EAE0` in sys.txt).

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
- `a = b = f();` stores `b` first, then `a` (func_001D0FC0).
- A function emitted on its own and also expanded inline elsewhere in its file (the same instructions appear in
  another function's body) was a `static inline` helper called by both; `inline` on the emitted function itself
  makes Metrowerks drop it (func_001D0B90, func_001D0C00).
- An `extern` of 8 bytes or less is assumed to be in `.sdata` (`$gp`); when the original reaches it with
  `lui` / `ld` (an `s64` in `.data`, e.g. `D_003F01C8`), declare it as an array of unknown size.
- Count the argument registers at each call: some library calls take five or six (`$t0`, `$t1`), and a missing
  argument changes the scheduling around the call.
- A field offset kept in the load / store (`swc1 $f0, 0x10($v1)` after `addiu $a1, %lo(D_x)`) rather than folded
  into `%lo(D_x + 0x10)` means the source took the address of an element first (`S *p = &D_x[i][j]; p->f = v;`, or
  a row pointer `S *row = D_x[i]; row[j].f = v;`); indexing all the way in one expression folds the offset. The
  same holds for an index `j + 1` that the original adds before multiplying (func_002AC990, func_002ACD50).
- `x & ~(u16)a` loads `a` with `lhu` (func_002AC860).
- A small `switch` (two or three cases, no jump table) compiles to a chain of `beq`; the case blocks are laid out
  in the source order of the `case` labels (func_001CB4A0).
- The operand order of an address sum's `addu` follows the source form: `(u8 *)(i * 4) + (s32)p` gives
  `addu x, idx, p`, `p + i * 4` gives `addu x, p, idx` (func_0020F290, func_001C8210; game_mutate.py `addcast`).
- A pointer chain written with struct fields (`c->d[k]->e[j].v`) and the index in its own local gets other
  registers than the same chain in byte offsets, and keeps the `-1` of an index out of the load offset
  (func_0020F300).
- More shapes that fixed same-size near misses by hand (2026-11-19): `a = g = f();` to store a call's result
  right after the call (func_0027E7E0, func_002F4D50); a ternary `v = (f == NULL) ? NULL : f;` instead of an
  `if` (func_00289380, func_0027B7E0); `(b == 0) ? 1U : 2U` for a `movn` with 1 as the base (func_002B8C70); an
  argument variable reused as a local when the original keeps the value in that argument register
  (func_002C5FC0); a pointer to a field (`s32 *fp = &p->f30;`) to keep a base register (func_00222A90); cases of a
  small switch tested in reverse source order, a case body after the switch behind a `goto` (func_002E9BF0);
  `mtc1 $zero, $f12` before a call = an `f32` argument `0.0f`, fix the callee's prototype (func_0027E9C0).
- Tail calls (`j func` with the stack restored in the delay slot) come from `-O3` and up. The `am*` files have
  none: a `j` there is either hand-written or in gcc code (`func_0014E580`).

## The `am*` files (`-O1,p`)

- **No scheduling.** Instructions come out in source order and every delay slot holds a `nop`. A load that is
  out of place means the source is in another order.
- **No common subexpressions.** Each `p->a[i].x` is recomputed from scratch (`sll` / `addu` again each time),
  and a global read twice is loaded twice. Write the expressions the way the assembly repeats them. Do not add
  locals that the assembly does not show.
- **Locals and registers.** The order in which locals are declared changes which register each one gets. For
  example, `func_0012C540` matched only with `i, it, j, a, b, k` in that order. When only the registers differ,
  try other declaration orders.
- **`for (p = x, i = 0; ...)`.** The order of the initialisers is the order of the two moves.
- **Inline assembly works.** mwccps2 3.0b52 accepts gcc-style `__asm__ volatile ("..." : outputs : inputs)`
  with VU0 mnemonics and `$vf` registers, `sync`, `ei`, `pcpyld`, `sqrt.s`, `abs.s`. Several am* functions are C
  with VU0 asm blocks: they match this way. Separate instructions with ` ; `. An `"=r"` output used as the
  source of `qmtc2` is refused. Metrowerks `asm { }` blocks constant-fold some moves. `__s_abs(x)` gives `abs.s`.
- **`slt $at` / `slti $at`.** `if (x > c)` compiles to `slti $at, x, c+1`, and `if (a <= b + k)` to `slt $at`.
  The `x >= c` form uses a `$v` register instead. `?:` also gives `$at`, and a label reached from a `?:` gets no
  alignment nop (one from an `if` statement does).
- **Small switches** without a jump table test their cases in the reverse of the source order. The case bodies
  stay in source order.
- **Calls.** Arguments are evaluated heaviest first, and an implicit conversion counts as weight (declare a
  size `u32` where the asm loads it early). `if (p->cb) { f = p->cb; f(p); }` loads the callee before the
  arguments, as the original does.
- **Struct copies.** A whole-struct assignment is copied through FPU registers (`lwc1` / `swc1`). Where the
  original has `lw` / `sw`, assign member by member.
- **Open.** Some functions lack the FPU hazard nops that 3.0b52 puts after `div.s`
  (`func_00131D00`, `func_00132D20`). `va_start` in `func_0012EC10` is not reproduced yet.
- **Hand-written functions** stay `INCLUDE_ASM`. These include VU0 macro code (`vmove`, `lqc2`, `vmul`), `addi`,
  frames saved with `sq $ra`, and entry points that are not 16-byte aligned (e.g. `func_0012EAEC`,
  `func_001315D8`).
- `if (x >= 0)` on a value it can test with a branch on zero gives `bltz`; the original sometimes has
  `slti $at, x, 0` / `bnez $at` instead (95 of 99 such sites are in 0x1A2000-0x1E0000), source form unknown yet.
- Labels made by an expression (`?:`) are never padded; labels made by a statement (`if`) are. The task-function
  store (`bnez v1, L` / `move v1, zero` / `L: sw v1, 0x1C(sX)`, about 665 sites, `L` often not 8-aligned) is the
  expression `t->func = (f == NULL) ? NULL : f;`; the statement `if (f == NULL) f = NULL; t->func = f;` gives the
  same instructions but pads `L` with a `nop` when it falls on 4 mod 8.
- `x = flag == 0 ? A : B` gave the original `li s0, A` / `li v0, B` / `movn s0, v0, flag`; `flag ? B : A` and
  `!flag ? A : B` gave `movz` with the constants swapped.
- Tail calls (`j func` with the stack restored in the delay slot) appear in the code linked before CRI; 3.0b52 at
  `-O4,p` did not produce one for `func_0014E580`: open question.

## Working in parallel (agents)

- Work in your own git worktree when the coordinator gives you one; never run `git push`, never rewrite history.
- In a shared checkout, the only tool to run is `scripts/fdiff.py` (safe in parallel). Do not run configure.py,
  splat or ninja there: they rewrite asm/ and build/, which the others read.
- Edit only the files you were given and your area's symbol file. Report what matched, what did not and why.

## The libraries (ee-gcc)

C files under `src/sdk/` and `src/cri/` are compiled with Sony's ee-gcc, not Metrowerks: configure.py's
`GCC_GROUPS` gives the build and flags per path (2.9-ee-991111-01 for Sony's libraries, 2.96 for newlib, libm,
libgcc and CRI; all `-O2 -G0`; docs/plan.md, "The libraries' compilers"). `scripts/eegcc/eegcc.py` runs the compiler
(the Linux builds in a Docker container, SN's Windows builds in wibo), gas assembles its output with
`include/gcc_prelude.inc`, and INCLUDE_ASM pulls the assembly in with `.include` (include/include_asm.h).

- `python3 scripts/gccdiff.py src/sdk/<file>.c [name ...] [-v]` is fdiff.py for these files. Like fdiff, it masks
  relocated fields, so a call to the wrong function still prints OK: check the callees, and let ninja's CHECK decide.
- The asm objects of the split are only 4-aligned: when the next object starts on 16 bytes (Metrowerks), the C
  file of the last library object keeps the padding itself (`__asm__(".section .text\n\t.balign 16\n")`).
- Data rules as above (no data defined in C). The R5900 short-loop nops in the original are the toolchain's: write
  the loop plainly.
