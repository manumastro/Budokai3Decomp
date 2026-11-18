#!/usr/bin/env python3
"""Checks one library function (ee-gcc) written in a snippet file, the way func_insert.py will put it in place.

    lib_try.py FUNC SNIPPET.c [-q]
    lib_try.py --brief FUNC        # prints a task brief: the best draft, its diff, the recipes, the check command
    lib_try.py --items OUT.json SNIPPET.c ...   # the snippets as func_insert.py items

SNIPPET.c holds the declarations the function needs (prototypes, externs, typedefs, structs) and then the function
FUNC itself; nothing after it. The declarations are isolated as func_insert.py does (renamed, bound back with
__asm__), so the file's own declarations never clash. A function of a C segment is compiled inside a copy of its file
(src/<segment>_lhtmp_<FUNC>.c, deleted after); one of an assembly segment is compiled alone. Prints MATCH, or the
number of differing instructions and the side-by-side diff (original on the right), or the compiler's errors.
Exit status 0 only on MATCH (same words, same size, no data defined, every outside symbol known to the link).
"""
import argparse
import json
import re
import shutil
import struct
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "scripts" / "eegcc"))
sys.path.insert(0, str(ROOT))
import configure  # noqa: E402
import eegcc  # noqa: E402
import func_insert as FI  # noqa: E402
import gccmatch as G  # noqa: E402
import lib_remaining as LR  # noqa: E402

DATA_SECS = (".data", ".rodata", ".bss", ".sdata", ".sbss", ".lit4", ".lit8")

RECIPES = """- The compiler is ee-gcc (2.96 for CRI and libc/libm/libgcc, 2.9-991111-01 for the Sony SDK) at -O2 -G0. Write plain
  C89: declarations at the top of a block, no `//` inside the function is fine, no C99 `for (int i...)`.
- Read the ORIGINAL assembly first (path below). Count the arguments (a0..a3, then t0..t3 for args 5-8) and see what
  is returned (v0). Fix the prototype of the function and of its callees before touching the body: an argument the
  function does not use still has to be declared if a later one is used.
- Register differences (same instructions, other registers): change the order of local declarations, merge or split
  temporaries, reuse the argument variable instead of a new local, write `a = b + c` vs `a = c + b`.
- Branch order / `beqz` vs `bnez` differences: invert the if/else, use `if (!x) return;` early, or a do/while loop
  instead of while/for. `for` loops whose test moves to the bottom are normal gcc output.
- Sign/width: `lw` vs `lh/lhu/lb/lbu`, `sra` vs `srl`, `slt` vs `sltu`, `mult` vs `multu`, `div` vs `divu` tell the type
  (s32/u32/s16/u16/s8/u8). An `andi x, 0xFF` after a call often means a u8 return or a u8 argument.
- Struct fields: `lw v0, 0x1C(a0)` = `p->field_at_0x1C`; write a struct with padding, or `*(s32 *)((u8 *)p + 0x1C)`.
  Both usually compile the same; a struct lets gcc schedule differently, so try both.
- Globals: `lui/addiu` or `lui + lw %lo` = an extern variable: declare `extern s32 D_XXXXXXXX;` or an array
  `extern u8 D_XXXXXXXX[];` (the name is in the assembly). Calls: declare `s32 func_XXXXXXXX();` (unprototyped) or
  with its real argument types.
- No string literals, no float constants loaded from memory, no switch with a jump table (they would define data):
  use `extern char D_XXXXXXXX[];` for a string. If the original needs a jump table, report "no match: jump table".
- `volatile` or an empty `__asm__ __volatile__("")` can keep a load/store in place; `register s32 x asm("s0")` is
  allowed only as a last resort.
- Tail calls: `j func` at the end with the stack popped in its delay slot is gcc's normal sibling call
  (`return f(x);` or a void call last).
- Argument pass-through: when only a2 (or a1) is set before a call and a0/a1 are left alone, the function hands its
  own arguments on: `void f(s32 a, s32 b) { g(a, b, 3); }`. A `move a0,a2` means the callee gets this function's
  third argument first: declare all three arguments even if the first two are unused.
- The function name in the snippet must be the one of the task (func_XXXXXXXX), even if the draft uses another.
- An `sq`/`lq` 128-bit move, `mfc0`, `syscall`, `ei`/`di`, `sync.l` mean hand-written assembly or inline asm:
  report "no match: hand-written" unless the draft already compiles to it."""


_REM = None


def find_item(name):
    global _REM
    if _REM is None:
        _REM = {r[1]: r for r in LR.remaining(True)}
    if name in _REM:
        return _REM[name]
    sys.exit(f"{name}: not a function still in assembly (scripts/lib_remaining.py)")


def split_snippet(text, name):
    """(declarations, function text) of a snippet: the function is the definition of `name`, the declarations are
    the top-level statements before it."""
    text = re.sub(r"^\s*#\s*include[^\n]*\n", "", text, flags=re.M)
    m = re.search(rf"^[^\n;{{}}]*\b{re.escape(name)}\s*\([^;{{]*\)\s*\{{", text, re.M)
    if not m:
        sys.exit(f"no definition of {name}() in the snippet (the function must be written last, its head on one line)")
    head, func = text[:m.start()], text[m.start():]
    decls, cur, depth = [], "", 0
    for ch in FI.strip_comments(head):
        cur += ch
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
        elif ch == ";" and depth == 0:
            if cur.strip():
                decls.append(" ".join(cur.split()))
            cur = ""
    if cur.strip():
        sys.exit("declarations before the function do not end with ';': " + cur.strip()[:80])
    # nothing may follow the function
    depth, end = 0, None
    for i, ch in enumerate(func):
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                end = i + 1
                break
    if end is None:
        sys.exit("unbalanced braces in the function")
    if FI.strip_comments(func[end:]).strip():
        sys.exit("text after the function: put helpers and declarations BEFORE it, and only one function")
    return decls, func[:end] + "\n"


def compile_one(src, rel, keep):
    version, flags = configure.gcc_group(rel)
    inc = ["include", "src", *configure.gcc_extra_includes(rel).replace("-I", "").split()]
    work = ROOT / keep
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    asm = work / "out.s"
    args = [*flags.split(), *[f"-I{ROOT / d}" for d in inc], "-DNO_INCLUDE_ASM", "-S", str(src), "-o", str(asm)]
    rc, out = eegcc.run(version, args, cwd=ROOT)
    if rc != 0 or not asm.exists():
        return None, out, work
    obj = asm.with_suffix(".o")
    err = G.assemble(asm, obj, version, "gas", inc)
    if err:
        return None, "assembler: " + err, work
    return obj, "", work


def sections(obj):
    from elftools.elf.elffile import ELFFile
    with open(obj, "rb") as f:
        e = ELFFile(f)
        secs = {s.name: s["sh_size"] for s in e.iter_sections() if s.name in DATA_SECS}
        und = {s.name for s in e.get_section_by_name(".symtab").iter_symbols()
               if s.name and s["st_shndx"] == "SHN_UNDEF"}
    return secs, und


def try_snippet(name, snippet_text, quiet=False):
    addr, _, seg, kind = find_item(name)
    decls, func = split_snippet(snippet_text, name)
    item = {"addr": addr, "name": name, "decls": decls, "func": func}
    text = FI.isolate(item)
    tmp_rel = f"src/{seg}_lhtmp_{name}.c"
    tmp = ROOT / tmp_rel
    base_secs = {}
    if kind == "c":
        orig = (ROOT / "src" / f"{seg}.c").read_text()
        pat = re.compile(r'^INCLUDE_ASM\("[^"]+", ' + re.escape(name) + r'\);[ \t]*$', re.M)
        body = pat.sub(lambda _: text.replace("\\", "\\\\"), orig, count=1)
        # data of the file without the function, to tell what the function adds (cached per file content)
        import hashlib
        cache = ROOT / "build" / "lh" / "base_secs" / (hashlib.md5(orig.encode()).hexdigest() + ".json")
        if cache.exists():
            base_secs = json.loads(cache.read_text())
        else:
            base = ROOT / f"src/{seg}_lhbase_{name}.c"
            base.write_text(orig)
            try:
                o, _, w = compile_one(base, f"src/{seg}_lhbase_{name}.c", f"build/lh/w_{name}_base")
                if o:
                    base_secs = sections(o)[0]
                    cache.parent.mkdir(parents=True, exist_ok=True)
                    cache.write_text(json.dumps(base_secs))
                shutil.rmtree(w, ignore_errors=True)
            finally:
                base.unlink(missing_ok=True)
    else:
        head = (ROOT / "src" / f"{seg}.c").read_text()[:800] if (ROOT / "src" / f"{seg}.c").exists() else ""
        body = '#include "common.h"\n\n' + text
    tmp.write_text(body)
    try:
        obj, err, work = compile_one(tmp, tmp_rel, f"build/lh/w_{name}")
    finally:
        tmp.unlink(missing_ok=True)
    if obj is None:
        lines = [l for l in err.splitlines() if l.strip()]
        print("COMPILE ERROR (names carry a _x<addr> suffix added by the checker: ignore it):")
        print("\n".join(lines[-25:]))
        shutil.rmtree(work, ignore_errors=True)
        return False, item
    fns = G.objects_functions(obj)
    secs, und = sections(obj)
    shutil.rmtree(work, ignore_errors=True)
    if name not in fns:
        print("the function was not compiled (inlined or removed?)")
        return False, item
    words, masks = fns[name]
    rom = G.ROM.read_bytes()
    size = G.function_sizes().get(addr)
    diffs, orig_words = G.compare(words, masks, addr, rom)
    ok = True
    if size is not None and size != 4 * len(words):
        ok = False
        print(f"SIZE: compiled 0x{4 * len(words):X} bytes, the original is 0x{size:X}")
        if not quiet:
            o = list(struct.unpack(f"<{size // 4}I", rom[addr - G.VRAM:addr - G.VRAM + size]))
            G.show(words, o, addr, set(range(max(len(words), len(o)))) - {i for i in range(min(len(words), len(o)))
                                                                           if words[i] == o[i]})
    elif diffs:
        ok = False
        print(f"DIFF: {len(diffs)} of {len(words)} instructions differ (yours left, original right)")
        if not quiet:
            G.show(words, orig_words, addr, set(diffs))
    added = {s: n - base_secs.get(s, 0) for s, n in secs.items() if n - base_secs.get(s, 0) > 0}
    if ok and added:
        ok = False
        print(f"DATA: the code matches but it defines data {added} (a string literal, float constant or switch "
              "table): use the original's extern symbols instead")
    if ok:
        bad = sorted(n for n in und - FI.known_symbols() if not n.startswith(".") and n != "_gp"
                     and not n.endswith(f"_x{addr:08X}"))
        bad = [n for n in bad if n not in FI.known_symbols()]
        if bad:
            ok = False
            print("UNDEFINED: the code matches but these symbols are not known to the link: " + " ".join(bad[:8]))
    if ok:
        print(f"MATCH {name}")
    return ok, item


def brief(name):
    addr, _, seg, kind = find_item(name)
    drafts = list((ROOT / "drafts").glob(f"*/*/{name}.c")) + list((ROOT / "drafts").glob(f"*/{name}.c"))
    asm = ROOT / "asm" / "nonmatchings" / seg / f"{name}.s"
    if not asm.exists():
        asm = ROOT / "asm" / f"{seg}.s"
    version, flags = configure.gcc_group(f"src/{seg}.c")
    print(f"# Task: match {name} (0x{addr:08X}, segment {seg}, {kind}); ee-gcc {version} {flags}\n")
    print(f"Original assembly: {asm.relative_to(ROOT)}" + (" (a whole segment: look for `glabel " + name + "`)" if
                                                          asm.name == f"{seg.split('/')[-1]}.s" else ""))
    print(f"Check: `.venv/bin/python scripts/lib_try.py {name} build/lh/{name}.c` (run in the worktree root; MATCH = done)\n")
    if drafts:
        d = drafts[0].read_text()
        print(f"## Best machine draft ({drafts[0].relative_to(ROOT)})\n\n```c\n{d.strip()}\n```\n")
        print("## The draft checked now (lib_try.py output)\n\n```")
        try:
            try_snippet(name, d)
        except SystemExit as e:
            print(e)
        print("```\n")
    else:
        print("## No machine draft: write it from the assembly.\n")
    print("## Recipes\n\n" + RECIPES)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("args", nargs="*")
    ap.add_argument("--brief")
    ap.add_argument("--items")
    ap.add_argument("-q", action="store_true")
    a = ap.parse_args()
    if a.brief:
        brief(a.brief)
        return
    if a.items:
        items = []
        for p in a.args:
            p = Path(p)
            name = p.stem
            ok, item = try_snippet(name, p.read_text(), quiet=True)
            if ok:
                items.append(item)
        Path(a.items).write_text(json.dumps(items, indent=1))
        print(f"{len(items)} of {len(a.args)} snippets match; items in {a.items}")
        return
    name, path = a.args
    ok, _ = try_snippet(name, Path(path).read_text(), a.q)
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
