#!/usr/bin/env python3
"""Batched Metrowerks compiles for the permuter: K candidates in one mwccps2 call.

mwccps2 compiles every function on its own (scripts/mwbatch_check.py: 573/573 variants byte-identical alone and as
renamed copies in one translation unit), and ~13 of the ~17 ms of a compile are wibo + compiler start-up. So the
permuter's evaluation step is rewritten for Metrowerks folders (fast.json kind "mwcc"):

- K lanes (B3_MWBATCH, default 16), each one the permuter's own candidate chain (keep the last candidate with
  keep_prob unless it scored 0 or failed, else a new one from the base; then one randomization pass): exactly what K
  permuter threads would do, one step each.
- the K sources share the text around the function (the permuter only changes the function); their functions are
  renamed FUNC__mwbK and compiled as one file. A batch that does not compile is split in halves until the bad
  candidates are alone (those score as a failed compile, as before). A candidate whose surrounding text differs
  (a randomization added a helper) or whose function calls itself is compiled alone, as before.
- one objdump of the batch .o; every function's block is put back at offset 0 (branch targets, .text addends,
  the header's name) and scored by the permuter's own Scorer, unchanged.

The worker loop still gets one result per call (the other K-1 wait in a queue). Off with B3_MWBATCH=0 or 1, and for
folders with PERM macros (seed enumeration), --show-errors or --debug.

    mwbatch.py --check DIR... [-n 200]     the same candidates scored alone and batched: scores and rows must agree
    mwbatch.py --bench DIR... [-t 20]      candidates per CPU second, single compiles against batches
"""

import collections
import hashlib
import os
import random
import re
import sys
import tempfile
import time
import traceback
from pathlib import Path

HERE = Path(__file__).resolve().parent
LANES = int(os.environ.get("B3_MWBATCH", "16"))

# raw objdump texts waiting to be scored, by the fake .o name the Scorer is given (perm.py's fast_objdump reads them)
PENDING_DUMPS = {}
_SEQ = [0]


def split_fn(src, fn):
    """(pre, function text, post) of the C text the permuter prints; None if not found."""
    m = re.search(rf"^[^\n;{{}}]*\b{re.escape(fn)}\s*\([^;{{}}]*\)\s*\{{", src, re.M)
    if not m:
        return None
    i = m.end() - 1
    depth, n = 0, len(src)
    while i < n:
        c = src[i]
        if c == '"' or c == "'":
            j = i + 1
            while j < n and src[j] != c:
                j += 2 if src[j] == "\\" else 1
            i = j
        elif c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                return src[:m.start()], src[m.start():i + 1], src[i + 1:]
        i += 1
    return None


_HDR = re.compile(r"^([0-9a-f]+) <([^>]+)>:\s*$")


def _blocks(text):
    """{symbol: (start, [lines])} of an objdump -d text."""
    out, cur = {}, None
    for ln in text.splitlines():
        m = _HDR.match(ln)
        if m:
            cur = out[m.group(2)] = (int(m.group(1), 16), [])
            continue
        if cur is not None:
            cur[1].append(ln)
    return out


def _rebase(lines, name, fn, start):
    """A function's objdump lines from the batch, as a compile of the function alone prints them."""
    tgt = re.compile(rf"\b([0-9a-f]+) <{re.escape(name)}(?:\+0x([0-9a-f]+))?>")
    txt = re.compile(r"\.text\+0x([0-9a-f]+)")
    addr = re.compile(r"^(\s*)([0-9a-f]+):")
    out = ["", f"{0:08x} <{fn}>:"]
    for ln in lines:
        m = addr.match(ln)
        if m:
            ln = f"{m.group(1)}{int(m.group(2), 16) - start:x}:" + ln[m.end():]
        if "<" in ln:
            ln = tgt.sub(lambda q: f"{int(q.group(2) or '0', 16):x} <{fn}" + (f"+0x{q.group(2)}>" if q.group(2) else ">"), ln)
        if ".text+0x" in ln and start:
            ln = txt.sub(lambda q: f".text+0x{int(q.group(1), 16) - start:x}", ln)
        out.append(ln)
    return "\n".join(out) + "\n"


class Batcher:
    """compile_many(sources) -> [raw objdump text of the function alone, or None (does not compile)]."""

    def __init__(self, fast, dumper_cmd, sample_o, fn):
        import fastcc
        self.fast, self.fn = fast, fn
        self.dump = fastcc.FastObjdump(list(dumper_cmd), sample_o)
        self.tmp = tempfile.mkdtemp(prefix="mwbatch")
        self.stats = collections.Counter()

    def _compile(self, text):
        _SEQ[0] += 1
        c = os.path.join(self.tmp, f"b{_SEQ[0]}.c")
        o = c[:-2] + ".o"
        Path(c).write_text(text)
        try:
            self.stats["compiles"] += 1
            if not self.fast.compile(c, o):
                return None
            return self.dump.text(o)
        finally:
            for p in (c, o):
                try:
                    os.unlink(p)
                except FileNotFoundError:
                    pass

    def _group(self, pre, post, items):
        """items: [(index, body)] sharing pre/post -> {index: raw or None}; halves on a failed compile."""
        res = {}
        if not items:
            return res
        names = {k: f"{self.fn}__mwb{k}" for k, _ in items}
        text = pre + "".join(re.sub(rf"\b{re.escape(self.fn)}\b", names[k], b, count=1) + "\n" for k, b in items) + post
        dump = self._compile(text)
        if dump is None:
            if len(items) == 1:
                return {items[0][0]: None}
            self.stats["splits"] += 1
            h = len(items) // 2
            res.update(self._group(pre, post, items[:h]))
            res.update(self._group(pre, post, items[h:]))
            return res
        bl = _blocks(dump)
        for k, _ in items:
            b = bl.get(names[k])
            res[k] = _rebase(b[1], names[k], self.fn, b[0]) if b else None
        return res

    def compile_many(self, sources):
        out = [None] * len(sources)
        groups = collections.defaultdict(list)
        for k, s in enumerate(sources):
            sp = split_fn(s, self.fn)
            if sp is None or len(re.findall(rf"\b{re.escape(self.fn)}\b", sp[1])) != 1:
                self.stats["alone"] += 1
                d = self._compile(s)
                out[k] = d
                continue
            groups[(sp[0], sp[2])].append((k, sp[1]))
        for (pre, post), items in groups.items():
            self.stats["batched"] += len(items)
            for k, raw in self._group(pre, post, items).items():
                out[k] = raw
        return out


class _Lane:
    __slots__ = ("cand", "last", "seed")

    def __init__(self):
        self.cand, self.last, self.seed = None, None, None


def _enabled(p):
    fast = getattr(p.compiler, "fast", None)
    return (LANES > 1 and fast is not None and type(fast).__name__ == "FastMwcc" and p._permutations.is_random()
            and p._permutations.perm_count == 1 and not p._force_rng_seed and not p._show_errors
            and not p._debug_mode and bool(p.scorer.objdump_command))


def batched_eval(self, seed, timer):
    """Permuter._eval_candidate with K lanes compiled together (see the module text)."""
    from src.candidate import Candidate, CandidateResult
    from src.perm.perm import EvalState
    from src.permuter import EvalError
    from src.profiler import Profiler
    st = self.__dict__.get("_mwb")
    if st is None:
        if not _enabled(self):
            st = self._mwb = False
        else:
            st = self._mwb = dict(lanes=[_Lane() for _ in range(LANES)], pending=collections.deque(),
                                  batcher=Batcher(self.compiler.fast, self.scorer.objdump_command.split(),
                                                  self.scorer.target_o, self.fn_name))
    if st is False:
        return _orig_eval(self, seed, timer)
    if st["pending"]:
        return st["pending"].popleft()
    profiler = Profiler()
    profiler.add_stat(Profiler.StatType.ipc, timer.tick())
    INF = self.scorer.PENALTY_INF
    slots = []  # (lane, source or EvalError)
    for lane in st["lanes"]:
        try:
            keep = random.uniform(0, 1) < self.keep_prob and lane.last != 0 and lane.last != INF
            lane.last = None
            if lane.cand is None or not keep:
                es = EvalState()
                cand_c = self._permutations.evaluate(seed, es)
                rng_seed = random.randrange(1, 10**20)
                lane.seed = (seed, rng_seed)
                lane.cand = Candidate.from_source(cand_c, es, self.fn_name, self.randomization_weights,
                                                  rng_seed=rng_seed)
            lane.cand.randomize_ast()
            slots.append((lane, lane.cand.get_source()))
        except Exception:
            slots.append((lane, EvalError(exc_str=traceback.format_exc(), seed=lane.seed)))
    profiler.add_stat(Profiler.StatType.perm, timer.tick())
    todo, results = [], [None] * len(slots)
    for i, (lane, src) in enumerate(slots):
        if isinstance(src, EvalError):
            results[i] = src
            continue
        h = hashlib.sha256(src.encode()).digest()
        old = self._score_for_source.get(h)
        if old is not None:
            results[i] = CandidateResult(score=old, hash=None, source=src)
        else:
            todo.append((i, h, src))
    raws = st["batcher"].compile_many([s for _, _, s in todo]) if todo else []
    profiler.add_stat(Profiler.StatType.compile, timer.tick())
    for (i, h, src), raw in zip(todo, raws):
        lane = slots[i][0]
        try:
            if raw is None:
                sv, sh = INF, ""
            else:
                _SEQ[0] += 1
                key = f"mwbatch:{os.getpid()}:{_SEQ[0]}"
                PENDING_DUMPS[key] = raw
                try:
                    sv, sh = self.scorer.score(key)
                finally:
                    PENDING_DUMPS.pop(key, None)
            results[i] = CandidateResult(score=sv, hash=sh, source=src)
            if len(self._score_for_source) < 100000:
                self._score_for_source[h] = sv
        except Exception:
            results[i] = EvalError(exc_str=traceback.format_exc(), seed=lane.seed)
    profiler.add_stat(Profiler.StatType.score, timer.tick())
    for (lane, _), r in zip(slots, results):
        if isinstance(r, CandidateResult):
            lane.last = r.score
            if self.need_profiler:
                r.profiler = profiler
                profiler = Profiler()
            if not self._need_to_send_source(r):
                r.source = None
                r.hash = None
    st["pending"].extend(results)
    return st["pending"].popleft()


_orig_eval = None


def install():
    global _orig_eval
    from src.permuter import Permuter
    if _orig_eval is None and LANES > 1:
        _orig_eval = Permuter._eval_candidate
        Permuter._eval_candidate = batched_eval


# ------------------------------------------------------------------------------------------------ checks


def _permuter(d):
    """A Permuter for folder d, as permuter.py builds it (stack differences on, as our runs use)."""
    import perm  # noqa: F401  (patches the compiler / objdump of the permuter)
    import src.main as pm
    from src.preprocess import preprocess
    from src.permuter import Permuter
    from src.scorer import Scorer
    settings = pm.get_settings(d)
    ctype = pm.json_prop(settings, "compiler_type", str, "base")
    weights = pm.merge_randomization_weights(pm.get_default_randomization_weights(ctype),
                                             pm.json_dict(pm.json_prop(settings, "weight_overrides", dict, {}), float))
    fn = pm.json_prop(settings, "func_name", str) if "func_name" in settings else Path(d, "function.txt").read_text().strip()
    comp = pm.Compiler(os.path.join(d, "compile.sh"), show_errors=False, debug_mode=False)
    sc = Scorer(os.path.join(d, "target.o"), stack_differences=True, algorithm="difflib", debug_mode=False,
                ign_branch_targets=False, objdump_command=pm.json_prop(settings, "objdump_command", str, "") or None)
    return Permuter(d, fn, comp, sc, os.path.join(d, "base.c"), preprocess(os.path.join(d, "base.c")),
                    randomization_weights=weights, force_seed=None, force_rng_seed=None, keep_prob=0.6,
                    need_profiler=False, need_all_sources=False, show_errors=False, best_only=False,
                    better_only=False, score_threshold=None, debug_mode=False, speed=100)


def check(dirs, n):
    """n candidates per folder: scored alone (the permuter's own path) and in batches: same scores and rows."""
    from src.candidate import Candidate
    from src.perm.perm import EvalState
    bad = 0
    for d in dirs:
        d = os.path.abspath(d)
        p = _permuter(d)
        random.seed(1234)
        srcs = []
        cand = None
        while len(srcs) < n:
            if cand is None or random.random() < 0.4:
                es = EvalState()
                cand = Candidate.from_source(p._permutations.evaluate(0, es), es, p.fn_name, p.randomization_weights,
                                             rng_seed=random.randrange(1, 10**20))
            try:
                cand.randomize_ast()
            except Exception:
                cand = None
                continue
            srcs.append(cand.get_source())
        b = Batcher(p.compiler.fast, p.scorer.objdump_command.split(), p.scorer.target_o, p.fn_name)
        raws = []
        for i in range(0, n, LANES):
            raws += b.compile_many(srcs[i:i + LANES])
        same_s = same_r = fails = 0
        for s, raw in zip(srcs, raws):
            o = p.compiler.compile(s)
            sa, _ = p.scorer.score(o) if o else (p.scorer.PENALTY_INF, "")
            if o:
                os.unlink(o)
            if raw is None:
                sb = p.scorer.PENALTY_INF
            else:
                PENDING_DUMPS["chk"] = raw
                sb, _ = p.scorer.score("chk")
            fails += o is None
            same_s += sa == sb
            if sa != sb:
                bad += 1
                print(f"  {p.fn_name}: score alone {sa} batched {sb}")
        print(f"{p.fn_name}: {n} candidates, scores identical {same_s}/{n}, failed compiles {fails}; "
              f"compiles {b.stats['compiles']}, splits {b.stats['splits']}, alone {b.stats['alone']}")
    return bad


def rows_check(dirs, n):
    """Like check, comparing the scorer's rows (labels @N renumbered by first use) instead of the scores."""
    from src.candidate import Candidate
    from src.perm.perm import EvalState
    bad = 0
    for d in dirs:
        d = os.path.abspath(d)
        p = _permuter(d)
        random.seed(99)
        srcs, cand = [], None
        while len(srcs) < n:
            if cand is None or random.random() < 0.4:
                es = EvalState()
                cand = Candidate.from_source(p._permutations.evaluate(0, es), es, p.fn_name, p.randomization_weights,
                                             rng_seed=random.randrange(1, 10**20))
            try:
                cand.randomize_ast()
            except Exception:
                cand = None
                continue
            srcs.append(cand.get_source())
        b = Batcher(p.compiler.fast, p.scorer.objdump_command.split(), p.scorer.target_o, p.fn_name)
        raws = []
        for i in range(0, n, LANES):
            raws += b.compile_many(srcs[i:i + LANES])
        same = labels_only = 0
        for s, raw in zip(srcs, raws):
            o = p.compiler.compile(s)
            ra = p.scorer._objdump(o)[0] if o else None
            if o:
                os.unlink(o)
            if raw is not None:
                PENDING_DUMPS["chk"] = raw
                rb = p.scorer._objdump("chk")[0]
            else:
                rb = None
            if ra == rb:
                same += 1
            elif ra and rb and _renum(ra) == _renum(rb):
                labels_only += 1
            else:
                bad += 1
                print(f"  {p.fn_name}: rows differ")
        print(f"{p.fn_name}: rows identical {same}/{n}, identical up to @N label numbers {labels_only}")
    return bad


def _renum(t):
    m = {}
    return re.sub(r"@\d+", lambda q: m.setdefault(q.group(0), f"@L{len(m)}"), t)


def bench(dirs, secs):
    """Candidates per CPU second (this process + its compilers), the permuter's own loop, single vs batched."""
    from src.profiler import Timer
    for d in dirs:
        d = os.path.abspath(d)
        line = []
        for lanes in (1, LANES):
            p = _permuter(d)
            if lanes == 1:
                p._mwb = False
            random.seed(7)
            timer = Timer()
            t0, w0 = os.times(), time.time()
            k = best = 0
            best = p.base_score
            while time.time() - w0 < secs:
                r = p.try_eval_candidate(0, timer)
                k += 1
                if hasattr(r, "score"):
                    best = min(best, r.score)
            t1 = os.times()
            cpu = (t1.user - t0.user) + (t1.system - t0.system) + (t1.children_user - t0.children_user) + \
                  (t1.children_system - t0.children_system)
            line.append((lanes, k, cpu, best))
        (l1, k1, c1, b1), (l2, k2, c2, b2) = line
        print(f"{Path(d).name}: base {p.base_score}; single {k1 / c1:.1f}/CPU-s (best {b1}), batch x{l2} "
              f"{k2 / c2:.1f}/CPU-s (best {b2}): {k2 / c2 / (k1 / c1):.2f}x", flush=True)


def main():
    import argparse
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("dirs", nargs="+")
    ap.add_argument("--check", action="store_true")
    ap.add_argument("--rows", action="store_true")
    ap.add_argument("--bench", action="store_true")
    ap.add_argument("-n", type=int, default=200)
    ap.add_argument("-t", type=float, default=20)
    a = ap.parse_args()
    a.dirs = [os.path.abspath(d) for d in a.dirs]
    sys.path.insert(0, str(HERE))
    sys.path.insert(0, str(HERE.parent.parent / "tools" / "permuter"))
    os.chdir(HERE.parent.parent / "tools" / "permuter")
    install()
    bad = 0
    if a.check:
        bad += check(a.dirs, a.n)
    if a.rows:
        bad += rows_check(a.dirs, a.n)
    if a.bench:
        bench(a.dirs, a.t)
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    # run as the module perm.py imports (one PENDING_DUMPS)
    sys.path.insert(0, str(HERE))
    import mwbatch
    mwbatch.main()
