#!/usr/bin/env python3
"""Deterministic Immediate/Offset Patcher for sim_clone near-misses (ZERO LLM).

When sim_clone adapts a matched sibling function, remaining diffs are often pure
16-bit immediate / struct-offset / lui-constant differences (e.g. a[15] -> a[12],
0x41F00000 -> 0x41A00000, struct field offsets 0x44 -> 0x34).

This script:
1. Reads build/sim/clones.json.
2. For each compiling `diff` clone, aligns compiled vs original MIPS words and
   extracts all pure-immediate diffs (same opcode + same registers, different imm16).
3. Deterministically patches array indices, hex/dec offsets, `lui` float/int
   constants, and local clone struct field offsets, re-verifying after each patch.
4. Saves verified 0-diff matches to build/b3auto/sweep/matches/ for apply_matches.py.
"""

import bisect
import json
import re
import sys
import tempfile
from pathlib import Path

ROOT = Path("/home/emanu/psvita/budokai3-decomp")
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "scripts" / "b3auto"))
sys.path.insert(0, str(ROOT))

import configure  # noqa: E402
import fdiff  # noqa: E402
import mwmatch  # noqa: E402
import sweep_parked  # noqa: E402

ROM = ROOT / "disc" / "SLUS_209.98.rom"
MATCH_DIR = ROOT / "build" / "b3auto" / "sweep" / "matches"
INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def s16(v):
    return v - 0x10000 if v >= 0x8000 else v


def eval_code(pre_txt, code_txt, fn, flags, addr, rom):
    with tempfile.TemporaryDirectory(dir="/dev/shm") as td:
        c = Path(td) / "t.c"
        o = Path(td) / "t.o"
        c.write_text(pre_txt + "\n" + code_txt)
        err = mwmatch.compile_c(configure.MWCC_VERSION, flags, c, o)
        if err:
            return None, None, None
        fns = mwmatch.functions(o)
        if fn not in fns:
            return None, None, None
        words, relocs = fns[fn]
        diffs, orig = mwmatch.compare(words, relocs, addr, rom)
        return diffs, words, orig


def extract_imm_diffs(words, orig, relocs_set):
    """Return list of (op, old_imm16, new_imm16) where opcode & registers match."""
    out = []
    n = min(len(words), len(orig))
    for i in range(n):
        if i in relocs_set:
            continue
        a, b = words[i], orig[i]
        if a == b:
            continue
        if (a & 0xFFFF0000) == (b & 0xFFFF0000):
            op = (a >> 26) & 0x3F
            # Exclude branches (op 1, 4, 5, 6, 7, 20, 21, 22, 23)
            if op in (1, 4, 5, 6, 7, 20, 21, 22, 23):
                continue
            out.append((op, a & 0xFFFF, b & 0xFFFF))
    return out


def try_patch_struct_offsets(code, imm_diffs):
    """If code defines a local `typedef struct { ... } Name_cXXXXXX;` with pad/field offsets,
    rebuild field positions when multiple load/store offsets shift."""
    # Map old_off -> new_off from load/store/addiu diffs (op in 9, 32..43, 49, 57)
    off_map = {}
    for op, old_i, new_i in imm_diffs:
        if op in (9, 32, 33, 35, 36, 37, 40, 41, 43, 49, 57):
            oo, no = s16(old_i), s16(new_i)
            if oo >= 0 and no >= 0 and oo != no:
                off_map[oo] = no
    if not off_map:
        return None
    # Check if local struct has fields named fXX (e.g. f44, f48, f4C, f58)
    m = re.search(r"typedef\s+struct\s*\{([^}]+)\}\s*([A-Za-z0-9_]+)\s*;", code, flags=re.S)
    if not m:
        return None
    body, sname = m.group(1), m.group(2)
    # Parse fields with offsets from fXX names or pad sizes
    fields = []
    cur_off = 0
    for ln in body.splitlines():
        ln_s = ln.strip()
        if not ln_s or ln_s.startswith("/*"):
            continue
        # match `type name[N];` or `type name;`
        fm = re.match(r"^(u8|s8|u16|s16|u32|s32|f32|int|short|char|float|void\s*\*|s32\s*\*|u8\s*\*)\s+([A-Za-z0-9_]+)(?:\[(\d+|0x[0-9A-Fa-f]+)\])?\s*;$", ln_s)
        if not fm:
            return None
        ty, nm, cnt = fm.group(1), fm.group(2), fm.group(3)
        tsz = 1 if ty in ("u8", "s8", "char") else (2 if ty in ("u16", "s16", "short") else 4)
        n_el = int(cnt, 0) if cnt else 1
        sz = tsz * n_el
        # align
        if cur_off % tsz != 0:
            cur_off += tsz - (cur_off % tsz)
        if not nm.startswith("pad"):
            new_off = off_map.get(cur_off, cur_off)
            fields.append((new_off, ty, nm, cnt, sz))
        cur_off += sz
    if not fields:
        return None
    # Sort fields by new_off and check non-overlapping
    fields.sort(key=lambda x: x[0])
    new_lines = []
    pos = 0
    pad_i = 0
    for off, ty, nm, cnt, sz in fields:
        if off < pos:
            return None  # overlap
        if off > pos:
            new_lines.append(f"    u8 pad_{pad_i}[0x{off - pos:X}];")
            pad_i += 1
            pos = off
        decl = f"    {ty} {nm}[{cnt}];" if cnt else f"    {ty} {nm};"
        new_lines.append(decl)
        pos += sz
    new_struct = "typedef struct {\n" + "\n".join(new_lines) + f"\n}} {sname};"
    return code[:m.start()] + new_struct + code[m.end():]


def patch_one_clone(pre_txt, code, fn, flags, addr, rom):
    diffs, words, orig = eval_code(pre_txt, code, fn, flags, addr, rom)
    if diffs is None:
        return code, 9999
    if len(diffs) == 0:
        return code, 0

    best_code = code
    best_nd = len(diffs)

    # Iterative deterministic patching (up to 6 rounds)
    for _ in range(6):
        # Need relocs indices
        with tempfile.TemporaryDirectory(dir="/dev/shm") as td:
            c = Path(td) / "t.c"; o = Path(td) / "t.o"
            c.write_text(pre_txt + "\n" + best_code)
            if mwmatch.compile_c(configure.MWCC_VERSION, flags, c, o):
                break
            words, relocs = mwmatch.functions(o)[fn]
            diffs, orig = mwmatch.compare(words, relocs, addr, rom)
        rel_set = {(r[0] // 4 if isinstance(r, tuple) else (r // 4 if r >= len(words) else r)) for r in relocs}
        imm_diffs = extract_imm_diffs(words, orig, rel_set)
        if not imm_diffs:
            break

        improved = False
        # 1. Try struct offset rebuild if local struct exists
        cand_s = try_patch_struct_offsets(best_code, imm_diffs)
        if cand_s and cand_s != best_code:
            d2, _, _ = eval_code(pre_txt, cand_s, fn, flags, addr, rom)
            if d2 is not None and len(d2) < best_nd:
                best_code, best_nd = cand_s, len(d2)
                improved = True
                if best_nd == 0:
                    return best_code, 0

        # 2. Try individual immediate / constant / array-index / offset replacements
        for op, old_i, new_i in imm_diffs:
            cands = []
            if op == 15:  # lui
                old_hex = f"0x{old_i:04X}0000"
                new_hex = f"0x{new_i:04X}0000"
                for m in re.finditer(re.escape(old_hex), best_code, flags=re.I):
                    cands.append(best_code[:m.start()] + new_hex + best_code[m.end():])
            else:
                oo, no = s16(old_i), s16(new_i)
                # Pattern A: `[0xOO / 4]` -> `[0xNO / 4]`
                if oo % 4 == 0 and no % 4 == 0 and oo >= 0 and no >= 0:
                    pat_a = rf"\[\s*0x{oo:X}\s*/\s*4\s*\]"
                    for m in re.finditer(pat_a, best_code, flags=re.I):
                        cands.append(best_code[:m.start()] + f"[0x{no:X} / 4]" + best_code[m.end():])
                    # Pattern B: `[idx]` where idx == oo // 4
                    idx_o, idx_n = oo // 4, no // 4
                    pat_b = rf"\[{idx_o}\]"
                    for m in re.finditer(pat_b, best_code):
                        cands.append(best_code[:m.start()] + f"[{idx_n}]" + best_code[m.end():])
                # Pattern C: `+ 0xOO` or `+ OO`
                for old_lit, new_lit in [(f"0x{oo:X}", f"0x{no:X}"), (f"0x{oo:x}", f"0x{no:x}"), (str(oo), str(no))]:
                    if oo >= 0 and no >= 0:
                        for m in re.finditer(rf"(?<![A-Za-z0-9_]){re.escape(old_lit)}(?![A-Za-z0-9_xX])", best_code):
                            cands.append(best_code[:m.start()] + new_lit + best_code[m.end():])

            for cand in cands[:24]:
                d2, _, _ = eval_code(pre_txt, cand, fn, flags, addr, rom)
                if d2 is not None and len(d2) < best_nd:
                    best_code, best_nd = cand, len(d2)
                    improved = True
                    if best_nd == 0:
                        return best_code, 0
                    break
            if improved:
                break
        if not improved:
            break

    return best_code, best_nd


def main():
    cjson = ROOT / "build" / "sim" / "clones.json"
    if not cjson.exists():
        print("No build/sim/clones.json")
        return
    rom = ROM.read_bytes()
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()

    active = {}
    for p in sorted((ROOT / "src").rglob("*.c")):
        for m in INC_RE.finditer(p.read_text(errors="ignore")):
            fn = m.group(2)
            am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
            addr = int(am.group(1), 16) if am else syms.get(fn)
            if addr is not None:
                active[fn] = (p, addr)

    preambles = {}
    def get_pre(path):
        if path not in preambles:
            preambles[path] = sweep_parked.strip_func_bodies(path.read_text(errors="ignore"))
        return preambles[path]

    clones = json.loads(cjson.read_text())
    matched = []
    improved_cnt = 0
    for ent in clones:
        fn = ent.get("name")
        if fn not in active or ent.get("status") != "diff":
            continue
        path, addr = active[fn]
        rel = path.resolve().relative_to(ROOT)
        flags = configure.mwcc_flags(rel)
        raw_c = ent.get("c", "")
        pre_txt = get_pre(path)
        # Keep struct/extern lines from raw_c inside code so struct patching works!
        ep, fc = sweep_parked.split_externs_and_func(raw_c, fn)
        pre_clean, ep_clean = sweep_parked.dedup_externs(pre_txt, ep)
        # Put typedef structs from ep_clean into patchable block
        new_block, nd = patch_one_clone(pre_clean, ep_clean + "\n" + fc, fn, flags, addr, rom)
        orig_d = ent.get("diffs", 999)
        print(f"  {fn:16s} ({rel}): {orig_d} -> {nd} diffs", flush=True)
        if nd == 0:
            MATCH_DIR.mkdir(parents=True, exist_ok=True)
            # Keep only typedefs and externs referenced by the function body so apply_matches compiles cleanly
            ep_out, fc_out = sweep_parked.split_externs_and_func(new_block, fn)
            used_ids = set(re.findall(r"\b[A-Za-z_][A-Za-z0-9_]*\b", fc_out))
            kept_pre = []
            in_struct = False
            sbuf = []
            for ln in ep_out.splitlines():
                ls = ln.strip()
                if not ls or ls.startswith("#include"):
                    continue
                if ls.startswith("typedef struct") or ls.startswith("struct "):
                    in_struct = True
                    sbuf = [ln]
                    if "}" in ls and ls.endswith(";"):
                        in_struct = False
                        if any(u in ls for u in used_ids):
                            kept_pre.extend(sbuf)
                    continue
                if in_struct:
                    sbuf.append(ln)
                    if "}" in ls and ls.endswith(";"):
                        in_struct = False
                        if any(u in ls for u in used_ids):
                            kept_pre.extend(sbuf)
                    continue
                if ls.startswith("extern "):
                    if any(re.search(rf"\b{re.escape(u)}\b", ls) for u in used_ids if u not in ("void", "int", "char", "short", "float", "s32", "u32", "s16", "u16", "s8", "u8", "f32")):
                        kept_pre.append(ln)
            clean_out = ("\n".join(kept_pre) + "\n\n" if kept_pre else "") + fc_out
            (MATCH_DIR / f"{fn}.c").write_text(clean_out)
            (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
                "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
                "kind": "sim_clone+imm_patch", "line": f"STATUS=MATCH diffs=0 (was {orig_d})"
            }, indent=2))
            matched.append(fn)
        elif nd < orig_d:
            improved_cnt += 1

    print(f"\nCLONE_PATCHER DONE: {len(matched)} EXACT MATCHES ({matched}), {improved_cnt} improved")


if __name__ == "__main__":
    main()
