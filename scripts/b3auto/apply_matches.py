#!/usr/bin/env python3
"""Safely apply verified zero-diff matches from build/b3auto/*/matches/ into src/,
checking each one with scripts/fdiff.py and fake-match guards, rolling back any failure."""

import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts" / "b3auto"))
import sweep_parked  # noqa: E402

INC_RE_TMPL = r'INCLUDE_ASM\("([^"]+)",\s*{fn}\);'


def apply_one(meta_path):
    meta = json.loads(meta_path.read_text())
    fn = meta["func"]
    rel = meta["file"]
    src_path = ROOT / rel
    c_path = meta_path.with_suffix(".c")
    if not c_path.exists() or not src_path.exists():
        return False, "missing files"

    code = c_path.read_text().strip() + "\n"
    orig_text = src_path.read_text()

    m_inc = re.search(INC_RE_TMPL.format(fn=re.escape(fn)), orig_text)
    if not m_inc:
        return False, "INCLUDE_ASM not found (already matched?)"

    orig_s = ROOT / m_inc.group(1) / f"{fn}.s"
    if sweep_parked.is_fake_match(code, orig_s):
        return False, "REJECTED by fake-match guard"

    # Find if there is a #if 0 ... #endif directly above INCLUDE_ASM
    lines = orig_text.splitlines(keepends=True)
    inc_line = None
    inc_pat = re.compile(INC_RE_TMPL.format(fn=re.escape(fn)))
    for i, ln in enumerate(lines):
        if inc_pat.search(ln):
            inc_line = i
            break
    if inc_line is None:
        return False, "INCLUDE_ASM line not found"

    replace_start = inc_line
    extra_pre = ""
    j = inc_line - 1
    while j >= 0 and (lines[j].strip() == "" or lines[j].strip().startswith("//")):
        j -= 1
    if j >= 0 and lines[j].strip().startswith("#endif"):
        k = j - 1
        depth = 1
        while k >= 0 and depth > 0:
            t = lines[k].strip()
            if t.startswith("#if"):
                depth -= 1
            elif t.startswith("#endif"):
                depth += 1
            k -= 1
        k += 1
        if lines[k].strip().startswith("#if 0"):
            replace_start = k
            # Extract any extern lines from the original #if 0 block if not already in code
            ep, _ = sweep_parked.split_externs_and_func("".join(lines[k:j + 1]), fn)
            if ep and ep.strip() and ep.strip() not in code:
                extra_pre = ep.strip() + "\n"

    # Deduplicate leading externs in both extra_pre and code ONLY against declarations BEFORE replace_start + headers
    file_before = "".join(lines[:replace_start])
    existing_syms = set(re.findall(r"(?m)^\s*(?:extern\s+)?[A-Za-z_][\w\s\*]*?\b([A-Za-z_]\w*)\s*(?:\[|\(|;)", file_before))
    # Also scan included local headers so we don't redeclare header prototypes
    for hm in re.finditer(r'#include\s+"([^"]+)"', file_before):
        hp = ROOT / "include" / hm.group(1)
        if hp.exists():
            htxt = hp.read_text(errors="ignore")
            existing_syms |= set(re.findall(r"(?m)^\s*(?:extern\s+)?[A-Za-z_][\w\s\*]*?\b([A-Za-z_]\w*)\s*(?:\[|\(|;)", htxt))

    code_ep, code_body = sweep_parked.split_externs_and_func(code, fn)
    if code_body:
        combined_ep = extra_pre + (code_ep or "")
        body_only = code_body
    else:
        combined_ep = extra_pre
        body_only = code

    ep_filtered = []
    seen_ep = set()
    for ln in combined_ep.splitlines(keepends=True):
        mm = re.search(r"\b([A-Za-z_]\w*)\s*(?:\[|\(|;)", ln)
        if mm:
            sym = mm.group(1)
            if sym in existing_syms or sym in seen_ep:
                continue
            seen_ep.add(sym)
        ep_filtered.append(ln)
    final_block = "".join(ep_filtered) + body_only

    new_text = "".join(lines[:replace_start]) + final_block + "".join(lines[inc_line + 1:])
    src_path.write_text(new_text)

    # Verify with fdiff.py on the real file (allow pre-existing .rodata in files with switch tables)
    r = subprocess.run([sys.executable, str(ROOT / "scripts" / "fdiff.py"), "--allow-data", str(src_path), fn],
                       capture_output=True, text=True, cwd=ROOT)
    out = (r.stdout + r.stderr).strip()
    if r.returncode == 0 and f"{fn}: OK" in out:
        return True, "OK (fdiff verified)"
    # Rollback
    src_path.write_text(orig_text)
    first_err = out.splitlines()[0] if out else f"rc={r.returncode}"
    return False, f"fdiff failed: {first_err}"


def main():
    metas = sorted(list((ROOT / "build" / "b3auto" / "sweep" / "matches").glob("*.json")) +
                   list((ROOT / "build" / "b3auto" / "vu0" / "matches").glob("*.json")))
    print(f"Found {len(metas)} candidate matches to verify and apply...")
    applied = []
    rejected = []
    for mp in metas:
        ok, msg = apply_one(mp)
        fn = mp.stem
        print(f"  {'[APPLIED]' if ok else '[SKIP]   '} {fn:16s} : {msg}")
        if ok:
            applied.append(fn)
        else:
            rejected.append((fn, msg))
    print(f"\nSummary: {len(applied)} applied, {len(rejected)} skipped/rejected")


if __name__ == "__main__":
    main()
