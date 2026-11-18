#!/usr/bin/env python3
"""Puts single C functions in place of their INCLUDE_ASM lines, each with its own isolated declarations.

    func_insert.py ITEMS.json [--only-status match] [--jobs 12] [--log FILE] [--out FILE]

ITEMS.json: a list of {addr, name, decls: [C declarations], func: "function text"} (lib_m2c.py draft output, or
func_port.py output; an optional "bind" maps a declared name to the symbol it must resolve to). Every file-scope
identifier that the declarations declare (and the function's own name) is renamed with a suffix only that function
uses, and objects/functions are bound back to their real symbol with an asm label:

    extern s32 D_0012AB00_x0015A2C0[] __asm__("D_0012AB00");

so a draft compiled alone compiles the same inside any file, whatever that file already declares (no "previous
declaration", "conflicting types", "too many arguments"). A segment still in assembly is turned into a C file of
INCLUDE_ASM lines first (asm2c.py). Each insertion is kept only when gccdiff.py says the function matches in its
file; the whole build (configure.py && ninja, CHECK) must still be run after, as for any change of the libraries."""
import argparse
import json
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import lib_remaining as LR  # noqa: E402

KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto if int long
register return short signed sizeof static struct switch typedef union unsigned void volatile while asm __asm__
__attribute__ inline __inline__ s8 u8 s16 u16 s32 u32 s64 u64 f32 f64""".split())


def strip_comments(d):
    return re.sub(r"//[^\n]*", " ", re.sub(r"/\*.*?\*/", " ", d, flags=re.S)).strip()


def split_top(s, sep=","):
    depth, cur, parts = 0, "", []
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == sep and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    parts.append(cur)
    return parts


def declarator_name(p):
    p = re.sub(r"__asm__\s*\(.*?\)", "", p.split("=")[0])
    p = re.sub(r"__attribute__\s*\(\(.*?\)\)", "", p)
    m = re.search(r"\(\s*\*+\s*(?:const\s+)?(\w+)\s*\)", p)  # pointer to function / array
    if m:
        return m.group(1)
    m = re.search(r"(\w+)\s*\(", p)
    if m and m.group(1) not in KEYWORDS:
        return m.group(1)
    ids = [i for i in re.findall(r"[A-Za-z_]\w*", re.sub(r"\[.*?\]", "", p)) if i not in KEYWORDS]
    return ids[-1] if ids else None


def decl_names(d):
    """File-scope names a declaration declares: objects, functions, typedef names, tags, enum constants."""
    d = strip_comments(d)
    names = []
    m = re.match(r"^(?:typedef\s+)?(?:const\s+)?(struct|union|enum)\s+(\w+)\s*\{", d)
    if m:
        names.append(m.group(2))
    if re.match(r"^(?:typedef\s+)?enum\b", d) and "{" in d:
        body = d[d.index("{") + 1:d.rindex("}")]
        names += [p.split("=")[0].strip() for p in split_top(body) if p.strip()]
    if "{" in d:
        tail = d[d.rindex("}") + 1:]
        if not d.startswith("typedef") and not tail.strip(" ;"):
            return names
    else:
        tail = d
        if re.match(r"^(struct|union|enum)\s+\w+\s*;$", d):
            return [d.split()[1].rstrip(";")]
    if "{" not in d:
        # drop the type specifiers: the declarators follow the last specifier word
        pass
    tail = tail.rstrip().rstrip(";")
    parts = split_top(tail)
    if "{" not in d:
        # first part carries the type; the declarator is still its last name
        pass
    for p in parts:
        n = declarator_name(p)
        if n:
            names.append(n)
    return [n for n in dict.fromkeys(names) if n]


def is_type_decl(st):
    return st.startswith("typedef") or re.match(r"^(?:const\s+)?(struct|union|enum)\s+\w*\s*\{[^;]*\}\s*;$", st, re.S) \
        or re.match(r"^(struct|union|enum)\s+\w+\s*;$", st)


def isolate(item):
    """The text that replaces the INCLUDE_ASM line: renamed declarations, then the renamed function."""
    tag = f"_x{item['addr']:08X}"
    name = item["name"]
    bind = item.get("bind", {})
    decls = [strip_comments(d) for d in item["decls"] if strip_comments(d)]
    ren, labels = {}, {}
    for st in decls:
        for n in decl_names(st):
            ren[n] = n + tag
            if not is_type_decl(st) and not st.startswith("static ") and "{" not in st:
                labels[n] = bind.get(n, n)
    ren[name] = name + tag
    pat = re.compile(r"\b(" + "|".join(sorted(map(re.escape, ren), key=len, reverse=True)) + r")\b")
    out = []
    for st in decls:
        new = pat.sub(lambda m: ren[m.group(1)], st)
        ns = [n for n in decl_names(st) if n in labels]
        if ns and new.endswith(";") and not is_type_decl(st) and "{" not in st:
            parts = split_top(new.rstrip(";"))
            if len(parts) > 1:
                # one declarator per declaration, each with its label: repeat the base type of the first one
                first = parts[0]
                nm = ns[0] + tag
                base = first[:first.index(nm)] if nm in first else ""
                base = re.sub(r"[*\s(]+$", "", base) + " "
                parts = [first] + [base + p.strip() for p in parts[1:]]
            fixed = []
            for p, n in zip(parts, ns):
                p = p.strip()
                p = p.split("=")[0].rstrip()
                fixed.append(f'{p} __asm__("{labels[n]}");')
            new = "\n".join(fixed)
            new = "\n".join(l if l.startswith("extern ") or re.search(re.escape(n + tag) + r"\s*\(", l)
                            else "extern " + l for l, n in zip(new.splitlines(), ns))
        out.append(new)
    func = pat.sub(lambda m: ren[m.group(1)], item["func"].rstrip("\n"))
    head = func[:func.index("{")].strip()
    head = re.sub(r"^static\s+", "", head)
    func = re.sub(r"^static\s+", "", func)
    out.append(f'{head} __asm__("{name}");')
    return "\n".join(out) + "\n" + func


def check(rel, name):
    r = subprocess.run([sys.executable, "scripts/gccdiff.py", rel, name], cwd=ROOT, capture_output=True, text=True)
    txt = (r.stdout + r.stderr).strip()
    return (f"{name}: OK" in txt), (txt.splitlines()[-1:] or [""])[0][-200:]


def apply(items, jobs=12, log=None, dry=False):
    rem = {r[0]: r for r in LR.remaining(True)}
    byseg = {}
    for it in items:
        r = rem.get(it["addr"])
        if r is None or r[1] != it["name"]:
            continue
        byseg.setdefault((r[2], r[3]), []).append(it)
    conv = [seg for (seg, kind) in byseg if kind == "asm"]
    for seg in conv:
        subprocess.run([sys.executable, "scripts/asm2c.py", seg], cwd=ROOT, check=True, capture_output=True)
    if conv:
        subprocess.run([sys.executable, "configure.py"], cwd=ROOT, capture_output=True)
    segs = {}
    for (seg, kind), lst in byseg.items():
        segs.setdefault(seg, []).extend(lst)

    def one(seg):
        rel = f"src/{seg}.c"
        path = ROOT / rel
        text = path.read_text()
        ok, msgs = [], []
        for it in sorted(segs[seg], key=lambda i: i["addr"]):
            pat = re.compile(r'^INCLUDE_ASM\("[^"]+", ' + re.escape(it["name"]) + r'\);[ \t]*$', re.M)
            if not pat.search(text):
                continue
            new = pat.sub(lambda _: isolate(it).replace("\\", "\\\\"), text, count=1)
            path.write_text(new)
            good, msg = check(rel, it["name"])
            if good:
                text = new
                ok.append(it)
            else:
                path.write_text(text)
                msgs.append(f"  {seg}: {it['name']} refused: {msg}")
        return seg, ok, msgs

    done = []
    with ThreadPoolExecutor(jobs) as pool:
        for seg, ok, msgs in pool.map(one, list(segs)):
            done += ok
            line = f"src/{seg}.c: {len(ok)} of {len(segs[seg])}"
            print(line, flush=True)
            if log:
                with open(log, "a") as f:
                    f.write(line + "\n" + "".join(m + "\n" for m in msgs))
    print(f"{len(done)} functions applied")
    return done


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("items")
    ap.add_argument("--only-status", default="match")
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--log")
    ap.add_argument("--out", help="json of the applied items")
    a = ap.parse_args()
    items = json.loads(Path(a.items).read_text())
    if a.only_status:
        items = [i for i in items if i.get("status", "match") == a.only_status]
    done = apply(items, a.jobs, a.log)
    if a.out:
        Path(a.out).write_text(json.dumps([{"addr": d["addr"], "name": d["name"]} for d in done]))


if __name__ == "__main__":
    main()
