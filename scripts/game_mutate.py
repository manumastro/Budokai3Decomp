#!/usr/bin/env python3
"""Greedy mechanical mutations of the game's near-miss m2c drafts, each checked with the Metrowerks checker of
scripts/m2c_draft.py (the function compiled in its own file with the file's flags).

    game_mutate.py --csv A.csv --drafts A_DIR [--csv B.csv --drafts B_DIR ...] [--max-diff 30] [-j 8]
                   [--evals 300] [--seconds 900] [--out build/mut] [--only NAME ...] [--apply]

The best draft of each function over every (CSV, drafts folder) pair given (status, then differing instructions) is
parsed with pycparser and walked by a hill climb: every single mutation of the current text is compiled, the best
strictly better one is kept, until a match, no improvement, or the budget. The mutations are the shapes that the
near misses of this compiler showed (most 1-3 instruction diffs are one of them):
  commute    swap the operands of + * & | ^ == != (and < > <= >= with the mirrored operator)
  signed     (s8 *) <-> (u8 *), (s16 *) <-> (u16 *), (s32 *) <-> (u32 *) in a cast, and the same for local types
  gderef     *D_x / D_x[i] through a cast to every integer pointer type (the file's type of the global is a guess)
  nocast     drop a cast to an arithmetic type ((s32)(x) -> x)
  ifswap     if (c) A else B -> if (!c) B else A
  stmtswap   swap two adjacent expression statements
  declfirst  move one local declaration to the front (Metrowerks numbers its values in declaration order)
  nonull     (p != NULL) -> p, (x != 0) -> x
Writes OUT/NAME.match.c (exact) or OUT/NAME.better.c (improved) and OUT/mutate.csv; --apply puts the matches in
place with scripts/apply_drafts.py's one-at-a-time check (the whole build must still be run). Each worker prints a
heartbeat line at least once a minute; every compile has the checker's own time limit.
"""
import argparse
import copy
import csv
import os
import re
import signal
import sys
import time
from multiprocessing import get_context
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "tools" / "m2c"))
import m2c_draft  # noqa: E402
from pycparser import c_ast, c_generator, c_parser  # noqa: E402

RANK = m2c_draft.RANK
INT_PAIRS = {"s8": "u8", "u8": "s8", "s16": "u16", "u16": "s16", "s32": "u32", "u32": "s32", "char": "u8",
             "int": "u32", "short": "u16"}
INT_TYPES = ["s32", "u32", "s16", "u16", "s8", "u8"]
MIRROR = {"<": ">", ">": "<", "<=": ">=", ">=": "<="}
COMMUTE = {"+", "*", "&", "|", "^", "==", "!="}
WIDTH = 3      # beam width
PLATEAU = 3    # rounds without a better key before giving up
SLACK = 4      # a state up to this many instructions worse may still be expanded (two-step fixes)

_TYPEDEFS = None
KEYWORDS = set("auto break case char const continue default do double else enum extern float for goto if inline int "
               "long register restrict return short signed sizeof static struct switch typedef union unsigned void "
               "volatile while asm".split())


def typedef_names(srctext):
    global _TYPEDEFS
    if _TYPEDEFS is None:
        names = set()
        for h in (ROOT / "include").rglob("*.h"):
            names |= set(re.findall(r"\btypedef\b[^;{]*?(?:\{[^}]*\}\s*)?\**\s*(\w+)\s*(?:\[[^\]]*\])?\s*;",
                                    h.read_text(errors="replace"), re.S))
        _TYPEDEFS = names
    names = set(_TYPEDEFS)
    names |= set(re.findall(r"\btypedef\b[^;{]*?(?:\{[^}]*\}\s*)?\**\s*(\w+)\s*(?:\[[^\]]*\])?\s*;", srctext, re.S))
    names |= set(re.findall(r"\}\s*(\w+)\s*;", srctext))
    names |= {"s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64", "f32", "f64", "s128", "u128"}
    names -= KEYWORDS
    return sorted(n for n in names if re.fullmatch(r"[A-Za-z_]\w*", n))


def parse_func(ctext, tdefs):
    pre = "".join(f"typedef int {t};\n" for t in tdefs)
    # function-like typedefs only matter as names here; pycparser needs no real types
    ctext = re.sub(r"/\*.*?\*/", "", ctext, flags=re.S)
    ctext = re.sub(r"//[^\n]*", "", ctext)
    ast = c_parser.CParser().parse(pre + ctext, filename="<draft>")
    return ast.ext[-1]


class Gen(c_generator.CGenerator):
    """pycparser's generator with the parentheses a person would write: casts and prefix operators bind tighter than
    any binary operator, so they need none as operands; `(T *)p` without the space."""

    def __init__(self):
        super().__init__(reduce_parentheses=True)

    def _is_simple_node(self, n):
        if isinstance(n, c_ast.Cast):
            return True
        if isinstance(n, c_ast.UnaryOp) and n.op not in ("p++", "p--", "sizeof"):
            return True
        return super()._is_simple_node(n)

    def visit_Cast(self, n):
        s = "(" + self._generate_type(n.to_type, emit_declname=False) + ")"
        return s + self._operand(n.expr)

    def _operand(self, e):
        if isinstance(e, (c_ast.Cast, c_ast.UnaryOp)) and not (isinstance(e, c_ast.UnaryOp) and e.op in ("p++", "p--")):
            return self.visit(e)
        return self._parenthesize_unless_simple(e)

    def visit_UnaryOp(self, n):
        if n.op in ("p++", "p--", "sizeof") or not isinstance(n.expr, (c_ast.Cast, c_ast.UnaryOp)):
            return super().visit_UnaryOp(n)
        inner = self.visit(n.expr)
        if inner[:1] in ("-", "+", "&") and inner[:1] == n.op[:1]:
            inner = "(" + inner + ")"  # `- -x`, `&&x` would read as other tokens
        return n.op + inner


GEN = Gen()


def pretty(text):
    """pycparser's output in the project's style: `) {` and `} else {` on one line, 4-space indents, no blank runs."""
    out = []
    for raw in text.rstrip().split("\n"):
        if not raw.strip():
            if out and out[-1] != "":
                out.append("")
            continue
        n = len(raw) - len(raw.lstrip(" "))
        line = " " * (n * 2) + raw.strip()
        s = line.strip()
        while out and out[-1] == "" and s in ("{", "}", "else"):
            out.pop()
        if s == "{" and out and out[-1].strip() and not out[-1].rstrip().endswith((";", "{", "}")):
            out[-1] = out[-1].rstrip() + " {"
            continue
        if s == "{" and out and out[-1].strip() == "}":
            out[-1] = out[-1].rstrip() + " {"
            continue
        if (s == "else" or s.startswith("else ")) and out and out[-1].strip() == "}":
            out[-1] = out[-1].rstrip() + " " + s
            continue
        out.append(line)
    while out and out[-1] == "":
        out.pop()
    return "\n".join(out) + "\n"


def gen(fd):
    return pretty(GEN.visit(fd))


def tidy_draft(text):
    """A draft (declaration lines, then the function) with repeated declaration lines dropped."""
    seen, out = set(), []
    for l in text.split("\n"):
        if l.startswith("extern ") and l.endswith(";"):
            if l in seen:
                continue
            seen.add(l)
        out.append(l)
    return "\n".join(out)


def nodes(fd):
    """Every node of the tree, with a stable index (depth-first)."""
    out = []

    def walk(n):
        out.append(n)
        for _, ch in n.children():
            walk(ch)
    walk(fd)
    return out


def ptr_base_name(tn):
    """The PtrDecl -> TypeDecl -> IdentifierType names of a Typename, or None."""
    t = tn.type if isinstance(tn, c_ast.Typename) else tn
    if not isinstance(t, c_ast.PtrDecl):
        return None
    t = t.type
    if isinstance(t, c_ast.TypeDecl) and isinstance(t.type, c_ast.IdentifierType):
        return t.type
    return None


PRIORITY = ["gderef", "ptrload", "bderef", "compound", "commute", "decltype", "declfirst", "nomask", "shift",
            "signed", "nonull", "ifswap", "nocast", "stmtswap"]


def mutations(fd):
    """Yields (label, new FuncDef) for every single mutation, the kinds that fixed most near misses first."""
    out = list(_mutations(fd))
    rank = {k: i for i, k in enumerate(PRIORITY)}
    out.sort(key=lambda lc: rank.get(re.match(r"[a-z]+", lc[0]).group(0), len(rank)))
    return out


def _mutations(fd):
    base = nodes(fd)
    n = len(base)
    pmap = {}
    for p in base:
        for _, ch in p.children():
            pmap[id(ch)] = p

    def at(i):
        c = copy.deepcopy(fd)
        return c, nodes(c)[i]

    for i in range(n):
        x = base[i]
        if isinstance(x, c_ast.BinaryOp) and (x.op in COMMUTE or x.op in MIRROR):
            c, y = at(i)
            y.left, y.right = y.right, y.left
            y.op = MIRROR.get(y.op, y.op)
            yield f"commute{i}", c
        if isinstance(x, c_ast.Cast):
            it = ptr_base_name(x.to_type)
            pa = pmap.get(id(x))
            under_deref = isinstance(pa, c_ast.UnaryOp) and pa.op == "*" or isinstance(pa, c_ast.ArrayRef)
            if it is not None and len(it.names) == 1 and it.names[0] in INT_PAIRS and under_deref:
                c, y = at(i)
                ptr_base_name(y.to_type).names = [INT_PAIRS[it.names[0]]]
                yield f"signed{i}", c
            if it is not None and len(it.names) == 1 and it.names[0] in ("s32", "u32", "int"):
                c, y = at(i)
                y.to_type.type = c_ast.PtrDecl([], c_ast.PtrDecl([], c_ast.TypeDecl(
                    None, [], None, c_ast.IdentifierType(["u8"]))))
                yield f"ptrload{i}", c
            t = x.to_type.type
            if isinstance(t, c_ast.TypeDecl) and isinstance(t.type, c_ast.IdentifierType) and \
                    not isinstance(x.expr, c_ast.Constant):
                c, y = at(i)
                parent = [p for p in nodes(c) if any(ch is y for _, ch in p.children())]
                if parent:
                    replace_child(parent[0], y, y.expr)
                    yield f"nocast{i}", c
        if isinstance(x, c_ast.UnaryOp) and x.op == "*" and isinstance(x.expr, c_ast.ID) and \
                re.match(r"(D_|g[A-Z])", x.expr.name):
            for t in INT_TYPES:
                c, y = at(i)
                y.expr = c_ast.Cast(c_ast.Typename(None, [], None, c_ast.PtrDecl([], c_ast.TypeDecl(
                    None, [], None, c_ast.IdentifierType([t])))), y.expr)
                yield f"gderef{i}_{t}", c
        if isinstance(x, c_ast.UnaryOp) and x.op == "*" and isinstance(x.expr, c_ast.BinaryOp) and \
                x.expr.op in ("+", "-"):
            # `*((u8 *)&D_x + i * 2)`: m2c did not know the element type of the table
            for t in INT_TYPES:
                c, y = at(i)
                y.expr = c_ast.Cast(c_ast.Typename(None, [], None, c_ast.PtrDecl([], c_ast.TypeDecl(
                    None, [], None, c_ast.IdentifierType([t])))), y.expr)
                yield f"bderef{i}_{t}", c
        if isinstance(x, c_ast.If) and x.iffalse is not None:
            c, y = at(i)
            y.cond = c_ast.UnaryOp("!", y.cond)
            y.iftrue, y.iffalse = y.iffalse, y.iftrue
            yield f"ifswap{i}", c
        if isinstance(x, c_ast.BinaryOp) and x.op == "!=" and isinstance(x.right, c_ast.Constant) and \
                x.right.value in ("0", "NULL"):
            c, y = at(i)
            parent = [p for p in nodes(c) if any(ch is y for _, ch in p.children())]
            if parent:
                replace_child(parent[0], y, y.left)
                yield f"nonull{i}", c
        if isinstance(x, c_ast.BinaryOp) and x.op == "&" and isinstance(x.right, c_ast.Constant) and \
                x.right.value.lower() in ("0xff", "0xffff", "255", "65535"):
            c, y = at(i)
            parent = [p for p in nodes(c) if any(ch is y for _, ch in p.children())]
            if parent:
                replace_child(parent[0], y, y.left)
                yield f"nomask{i}", c
        if isinstance(x, c_ast.BinaryOp) and x.op == ">>":
            for t in ("s32", "u32"):
                c, y = at(i)
                y.left = c_ast.Cast(c_ast.Typename(None, [], None, c_ast.TypeDecl(
                    None, [], None, c_ast.IdentifierType([t]))), y.left)
                yield f"shift{i}_{t}", c
        if isinstance(x, c_ast.Assignment) and x.op == "=":
            r = x.rvalue
            while isinstance(r, c_ast.Cast):
                r = r.expr
            if isinstance(r, c_ast.BinaryOp) and r.op in ("+", "-", "*", "&", "|", "^", "<<", ">>"):
                lv = GEN.visit(x.lvalue)
                for side, other in (("left", "right"), ("right", "left")):
                    s = getattr(r, side)
                    while isinstance(s, c_ast.Cast):
                        s = s.expr
                    if GEN.visit(s) == lv and (side == "left" or r.op in ("+", "*", "&", "|", "^")):
                        c, y = at(i)
                        r2 = y.rvalue
                        while isinstance(r2, c_ast.Cast):
                            r2 = r2.expr
                        y.op = r.op + "="
                        y.rvalue = getattr(r2, other)
                        yield f"compound{i}", c
                        o = y.rvalue
                        while isinstance(o, c_ast.Cast):
                            o = o.expr
                        if isinstance(o, c_ast.BinaryOp) and o.op == "&" and isinstance(o.right, c_ast.Constant) \
                                and o.right.value.lower() in ("0xff", "0xffff", "255", "65535"):
                            # m2c's mask of a narrow store's value: `x = (u16)(a & 0xFFFF | x)` is `x |= a`
                            c2 = copy.deepcopy(c)
                            nodes(c2)[i].rvalue = copy.deepcopy(o.left)
                            yield f"compound{i}m", c2
                        break
        if isinstance(x, c_ast.Compound) and x.block_items:
            items = x.block_items
            for k in range(len(items) - 1):
                if all(isinstance(it, (c_ast.Assignment, c_ast.FuncCall)) for it in items[k:k + 2]):
                    c, y = at(i)
                    y.block_items[k], y.block_items[k + 1] = y.block_items[k + 1], y.block_items[k]
                    yield f"stmtswap{i}_{k}", c
            decls = [k for k, it in enumerate(items) if isinstance(it, c_ast.Decl)]
            if decls == list(range(len(decls))) and len(decls) > 1 and x is fd.body:
                for k in decls[1:]:
                    c, y = at(i)
                    d = y.block_items.pop(k)
                    y.block_items.insert(0, d)
                    yield f"declfirst{k}", c
                for k in decls:
                    t = items[k].type
                    tt = t.type if isinstance(t, c_ast.PtrDecl) else t
                    if isinstance(tt, c_ast.TypeDecl) and isinstance(tt.type, c_ast.IdentifierType) and \
                            len(tt.type.names) == 1 and tt.type.names[0] in INT_PAIRS:
                        c, y = at(i)
                        t2 = y.block_items[k].type
                        t2 = t2.type if isinstance(t2, c_ast.PtrDecl) else t2
                        t2.type.names = [INT_PAIRS[tt.type.names[0]]]
                        yield f"decltype{k}", c


def replace_child(parent, old, new):
    for name, ch in parent.children():
        if ch is not old:
            continue
        m = re.match(r"(\w+)\[(\d+)\]$", name)
        if m:
            getattr(parent, m.group(1))[int(m.group(2))] = new
        else:
            setattr(parent, name, new)
        return True
    return False


_DECLS = None


def score(rel, name, text):
    global _DECLS
    if _DECLS is None:
        _DECLS = m2c_draft.build_context()  # once per worker: building it is most of a check's time
    try:
        r = m2c_draft.draft(ROOT / rel, name, decls=_DECLS, c_override=text)
    except Exception as e:  # noqa: BLE001
        return (9, 0), f"error {e}"[:60]
    st = r["status"]
    if st == "match" and r.get("relaxed"):
        st = "relaxmatch"
    key = (RANK.get(st, 9) + (1 if st == "relaxmatch" else 0), r["diff"] if st in ("diff", "size") else 0)
    return key, f"{st} {r['diff']}"


class Timeout(Exception):
    pass


def _alarm(*_):
    raise Timeout()


def work(job):
    name, rel, text, evals, seconds = job
    signal.signal(signal.SIGALRM, _alarm)
    signal.alarm(seconds + 120)
    t0 = time.time()
    try:
        add, ctext = m2c_draft.split_draft(text, name)
        head = "".join(a + "\n" for a in add)
        tdefs = typedef_names((ROOT / rel).read_text())
        try:
            fd = parse_func(ctext, tdefs)
        except Exception as e:  # noqa: BLE001
            return dict(function=name, file=rel, result="noparse", base="", best="", steps="", detail=str(e)[:80])
        cur_text = head + gen(fd)
        base_key, base_desc = score(rel, name, head + ctext)
        cur_key, cur_desc = score(rel, name, cur_text)
        if base_key < cur_key:  # the pycparser round trip changed the code: start from the draft as it is
            cur_key, cur_desc = base_key, base_desc
            cur_text = head + ctext
        # beam search: the WIDTH best states (ties included, so a plateau step that only prepares the next mutation
        # survives) are expanded each round; stop at a match, the budget, or PLATEAU rounds without a better key
        n, last, flat = 0, time.time(), 0
        seen = {cur_text}
        steps = []
        frontier = [(cur_key, cur_desc, fd, cur_text, [])]
        while cur_key[0] > 0 and n < evals and time.time() - t0 < seconds and frontier and flat < PLATEAU:
            cands = []
            for fkey, _, ffd, _, fsteps in frontier:
                for label, c in mutations(ffd):
                    if n >= evals or time.time() - t0 >= seconds:
                        break
                    t = head + gen(c)
                    if t in seen:
                        continue
                    seen.add(t)
                    n += 1
                    k, desc = score(rel, name, t)
                    if time.time() - last > 50:
                        print(f"  .. {name} {n} evals, best {cur_desc}", file=sys.stderr, flush=True)
                        last = time.time()
                    if k <= cur_key or (k[0] == cur_key[0] and k[1] <= cur_key[1] + SLACK):
                        cands.append((k, desc, c, t, fsteps + [label]))
                    if k[0] == 0:
                        break
                if cands and cands[-1][0][0] == 0:
                    break
            if not cands:
                break
            cands.sort(key=lambda x: x[0])
            frontier = cands[:WIDTH]
            if frontier[0][0] < cur_key:
                cur_key, cur_desc, fd, cur_text, steps = frontier[0]
                flat = 0
            else:
                flat += 1
        res = "match" if cur_key[0] == 0 else ("better" if cur_key < base_key else "same")
        return dict(function=name, file=rel, result=res, base=base_desc, best=cur_desc, steps=" ".join(steps),
                    detail=f"{n} evals {time.time() - t0:.0f}s", text=cur_text)
    except Timeout:
        return dict(function=name, file=rel, result="timeout", base="", best="", steps="", detail="")
    except Exception as e:  # noqa: BLE001
        return dict(function=name, file=rel, result="error", base="", best="", steps="", detail=f"{type(e).__name__}: {e}"[:100])
    finally:
        signal.alarm(0)


def best_drafts(pairs, max_diff, only):
    best = {}
    for csvf, ddir in pairs:
        if not Path(csvf).exists():
            continue
        for r in csv.DictReader(open(csvf)):
            name = r["function"]
            if "result" in r:  # an earlier game_mutate.py run: its improved draft
                bm = re.match(r"(diff|size) (\d+)", r["best"])
                if r["result"] != "better" or not bm:
                    continue
                st, d = bm.group(1), int(bm.group(2))
            else:
                st = r.get("status") or r.get("best_status")
                if st not in ("diff", "size"):
                    continue
                d = int(r["diff"])
            if only and name not in only:
                continue
            if d > max_diff:
                continue
            f = Path(ddir) / f"{name}.{st}.c"
            if not f.exists():
                f = Path(ddir) / f"{name}.better.c"
                if not f.exists():
                    continue
            key = (RANK[st], d)
            if name not in best or key < best[name][0]:
                best[name] = (key, r["file"], f)
    return best


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--csv", action="append", required=True)
    ap.add_argument("--drafts", action="append", required=True)
    ap.add_argument("--max-diff", type=int, default=30)
    ap.add_argument("-j", type=int, default=8)
    ap.add_argument("--evals", type=int, default=300)
    ap.add_argument("--seconds", type=int, default=900)
    ap.add_argument("--out", default="build/mut")
    ap.add_argument("--only", nargs="*")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    out = ROOT / a.out
    out.mkdir(parents=True, exist_ok=True)
    best = best_drafts(list(zip(a.csv, a.drafts)), a.max_diff, set(a.only or []))
    jobs = []
    for name, (key, rel, f) in sorted(best.items(), key=lambda kv: kv[1][0]):
        src = (ROOT / rel).read_text()
        if not m2c_draft.asm_info(name, src):
            continue  # written meanwhile
        text = "\n".join(l for l in f.read_text().splitlines() if not l.startswith("// src/")) + "\n"
        jobs.append((name, rel, text, a.evals, a.seconds))
    print(f"{len(jobs)} functions, -j{a.j}", file=sys.stderr, flush=True)
    rows = []
    with get_context("spawn").Pool(a.j, maxtasksperchild=4) as pool, open(out / "mutate.csv", "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["function", "file", "result", "base", "best", "steps", "detail"])
        for r in pool.imap_unordered(work, jobs):
            if r.get("text") and r["result"] in ("match", "better"):
                (out / f"{r['function']}.{r['result']}.c").write_text(r["text"])
            w.writerow([r[k] for k in ("function", "file", "result", "base", "best", "steps", "detail")])
            fh.flush()
            rows.append(r)
            print(f"{len(rows)}/{len(jobs)} {r['function']} {r['result']} {r['base']} -> {r['best']} [{r['steps']}] {r['detail']}",
                  file=sys.stderr, flush=True)
    n = sum(r["result"] == "match" for r in rows)
    print(f"{n} matches, {sum(r['result'] == 'better' for r in rows)} better, of {len(rows)}", flush=True)
    if a.apply and n:
        import apply_drafts
        for r in sorted(rows, key=lambda r: (r["file"], r["function"])):
            if r["result"] == "match":
                print(r["function"], apply_drafts.apply_one(r["file"], r["function"], r["text"]), flush=True)


if __name__ == "__main__":
    main()
