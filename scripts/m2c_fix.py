#!/usr/bin/env python3
"""Caret-driven repairs of m2c drafts for Metrowerks (used by scripts/m2c_draft.py).

Metrowerks prints every error as the source line, a `^` under the place where it gave up, and the message. That place
is just after the offending (right-most) operand, so the expression to fix is the one that ends at the caret. fix()
parses the errors, maps them to the draft's lines and rewrites them:

  illegal implicit conversion from X to Y   a cast to Y (a load `*(Y *)` when an array or a struct is used as a
                                             value, `(f32)(s32)` when a pointer is converted to a float)
  illegal explicit conversion               the same for an explicit `(f32) p`
  illegal operands X op Y                   the pointer/array side gets `[0]`, a load, `(s32)` or `(u8 *)`
  pointer/array required                    `*(integer expression)` -> `*(s32 *)(...)`
  illegal operand / type mismatch           a comparison of two different types: both sides as integers
  undefined identifier spN / saved_reg_sN   a local of that name
  identifier ... redeclared                 the draft's clashing declaration line is dropped, or the draft's
                                             signature takes the file's prototype (callers elsewhere in the file
                                             were written against it)
Casts between integer and pointer types generate no instruction in mwccps2; the loads follow what m2c meant (it
writes a global's name where the original loads from it).
"""

import re

ASSIGN_OPS = ("=", "+=", "-=", "*=", "/=", "&=", "|=", "^=", "<<=", ">>=", "?", ":")
BIN_OPS = ("<<=", ">>=", "&&", "||", "==", "!=", "<=", ">=", "<<", ">>", "+=", "-=", "*=", "/=", "&=", "|=", "^=",
           "+", "-", "*", "/", "%", "&", "|", "^", "<", ">", "=", "?", ":")
BLK = re.compile(r"^(#\s+(\d+): )(.*)\n#   Error: ( *)(\^+)\n((?:#   [^\n]*\n?)+)", re.M)
INT_TYPES = {"int", "unsigned int", "short", "unsigned short", "char", "signed char", "unsigned char", "long",
             "unsigned long", "long long", "unsigned long long"}


def errors(scratch, msg):
    """[(line number, caret column in the real line, message)] of a Metrowerks error output."""
    lines = scratch.split("\n")
    out = []
    for m in BLK.finditer(msg):
        ln = int(m.group(2))
        if not 0 < ln <= len(lines):
            continue
        snip, prefix = m.group(3), m.group(1)
        col = len(m.group(4)) + len("#   Error: ") - len(prefix)
        full = lines[ln - 1]
        st = snip.strip()
        off = full.find(st) - (len(snip) - len(snip.lstrip())) if st else 0
        text = " ".join(l[1:].strip() for l in m.group(6).splitlines() if l.startswith("#"))
        out.append((ln, max(off, 0) + col, text))
    return out


def binop_before(line, i):
    """The binary operator written ` op ` whose trailing space is at index i, or None."""
    for op in BIN_OPS:
        a = i - len(op) - 1
        if a >= 0 and line[a] == " " and line[a + 1:i] == op:
            return op
    return None


def expr_start(line, end, mode):
    """Start index of the expression that ends at `end` (exclusive). mode "full": up to an unbalanced `(`, a `,`,
    an assignment, `return` or the line's start; mode "term": also stops at a binary operator written ` op `."""
    depth, i = 0, end - 1
    while i >= 0:
        ch = line[i]
        if ch in ")]":
            depth += 1
        elif ch in "([":
            if depth == 0:
                return i + 1
            depth -= 1
        elif depth == 0:
            if ch in ",;{}":
                return i + 1
            if ch == " ":
                op = binop_before(line, i)
                if op and (mode == "term" or op in ASSIGN_OPS):
                    return i + 1
                if line[:i].strip() in ("return", "case", "switch", "if", "while"):
                    return i + 1
                if not line[:i].strip():
                    return i + 1
        i -= 1
    return 0


def norm_type(t):
    t = re.sub(r"\[\d*\]$", " *", t.strip())
    t = re.sub(r"\s+\*", " *", t)
    return t.replace("* *", "**")


def is_ptr(t):
    return t.endswith("*") or t.endswith("]")


def is_struct_value(t):
    return t.startswith("struct ") and not is_ptr(t)


def ident(e):
    return re.fullmatch(r"[A-Za-z_]\w*", e.strip()) is not None


def deref(e, t):
    """A load of type t from the address expression e."""
    return f"(*({t} *)({e}))"


def strip_casts(e):
    """e without the casts an earlier round put around it: `(T)(x)` -> `x`."""
    while True:
        mm = re.fullmatch(r"\(([\w ]+\**)\)\((.*)\)", e, re.S)
        if not mm or not wrapped("(" + mm.group(2) + ")"):
            return e
        e = mm.group(2).strip()


def wrapped(s):
    if not (s.startswith("(") and s.endswith(")")):
        return False
    depth = 0
    for k, ch in enumerate(s):
        depth += {"(": 1, ")": -1}.get(ch, 0)
        if depth == 0 and k < len(s) - 1:
            return False
    return True


TYPEDEFS = {"s8": "signed char", "u8": "unsigned char", "s16": "short", "u16": "unsigned short", "s32": "int",
            "u32": "unsigned int", "s64": "long", "u64": "unsigned long", "f32": "float", "signed int": "int",
            "signed short": "short", "signed long": "long", "char": "char"}


def canon(t):
    """A type as Metrowerks prints it: `u8 *` -> `unsigned char *`, `const s32` -> `int`."""
    t = re.sub(r"\bconst\b", "", t or "").strip()
    stars = len(t) - len(t.rstrip("*"))
    base = t.rstrip("*").strip()
    base = TYPEDEFS.get(base, base)
    return base + (" " + "*" * stars if stars else "")


def fix_expr(e, frm, to):
    """The replacement of expression e (of type frm, wanted as type to), or None."""
    if e.strip().startswith("(f32)(s32)(") or e.strip().startswith(f"({norm_type(to)})"):
        return None  # an earlier round already cast it: the error is elsewhere
    e0 = strip_casts(e.strip())
    if e0 != e.strip() and re.match(r"\((s32|f32|[\w ]+ \*+)\)\(", e.strip()):
        return None  # a cast of an earlier round: casting it again would only flip it back and forth
    if is_struct_value(to) or to.endswith("]"):
        return None
    if frm in ("float", "double") and is_ptr(to):
        return None
    if is_ptr(to):
        tn = norm_type(to)
        if e0.startswith(f"({tn})"):
            return None
        if is_struct_value(frm) and ident(e0):
            return f"({tn})&{e0}"
        return f"({tn})({e0})"
    if to in ("float", "double"):
        if frm.endswith("]") and ident(e0):
            return deref(e0, "f32")
        if is_struct_value(frm) and ident(e0):
            return deref(f"&{e0}", "f32")
        if is_ptr(frm):
            return f"(f32)(s32)({e0})"
        return None
    if to in INT_TYPES:
        if frm.endswith("]") and ident(e0):
            return deref(e0, to)
        if is_struct_value(frm) and ident(e0):
            return deref(f"&{e0}", to)
        if is_struct_value(frm):
            return None
        return f"({to})({e0})"
    return None


def operands(line, end):
    """(a, lend, opstart, opend, b): the left operand line[a:lend], the operator, the right operand line[b:end]."""
    b = expr_start(line, end, "term")
    k = b - 1
    while k >= 0 and line[k] == " ":
        k -= 1
    j = k
    while j >= 0 and line[j] in "+-*/%<>=!&|^":
        j -= 1
    lend = j + 1
    while lend > 0 and line[lend - 1] == " ":
        lend -= 1
    a = expr_start(line, lend, "term")
    return a, lend, line[j + 1:k + 1], b


def side_fix(e, t, other, op):
    e0 = e.strip()
    if is_struct_value(t):
        return deref(f"&{e0}", "s32") if ident(e0) else None
    if not is_ptr(t):
        return None
    if op == "=" and t.endswith("]"):
        return f"{e0}[0]" if ident(e0) else None
    if other in ("float", "double"):
        return deref(e0, "f32")
    if op in ("+",) and not is_ptr(other):
        return f"((u8 *){e0})"
    if op in ("==", "!=", "<", ">", "<=", ">=") and is_ptr(other):
        return f"((s32)({e0}))"
    if t.endswith("]") and ident(e0) and op not in ("+", "-"):
        return f"{e0}[0]"
    return f"((s32)({e0}))"


def split_top(s, sep=","):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == sep and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    out.append(cur)
    return [o for o in out]


def call_around(line, pos):
    """(callee start, open paren index, close paren index) of the call whose `)` is at pos, or None."""
    if pos >= len(line) or line[pos] != ")":
        return None
    depth, i = 0, pos
    while i >= 0:
        if line[i] == ")":
            depth += 1
        elif line[i] == "(":
            depth -= 1
            if depth == 0:
                break
        i -= 1
    if i <= 0:
        return None
    j = i
    while j > 0 and (line[j - 1].isalnum() or line[j - 1] in "_]["):
        j -= 1
    if j == i or not (line[j].isalpha() or line[j] == "_"):
        # a call through a parenthesised function pointer: `(...)(args)`
        if line[i - 1] == ")":
            return (None, i, pos)
        return None
    return (j, i, pos)


def param_types(proto_params):
    out = []
    for p in split_top(proto_params):
        p = p.strip()
        if not p or p == "void":
            continue
        words = re.findall(r"[A-Za-z_]\w*", p)
        if "(" not in p and len(words) > 1 and not p.endswith("*") and words[-1] not in (
                "int", "s32", "u32", "s16", "u16", "s8", "u8", "s64", "u64", "f32", "char", "float", "void", "long", "short"):
            p = p[:p.rfind(words[-1])].rstrip()
        out.append(p)
    return out


def recast_args(line, call, types):
    """The line with each argument of the call cast to the type given for it (None: leave it)."""
    _, op, cl = call
    args = split_top(line[op + 1:cl]) if line[op + 1:cl].strip() else []
    new = []
    for a, t in zip(args, types + [None] * len(args)):
        a0 = a.strip()
        if t is None or a0.startswith(f"({t})") or re.fullmatch(r"-?(0x[0-9A-Fa-f]+|\d+)", a0):
            new.append(a0)
        else:
            new.append(f"({t})({a0})")
    return line[:op + 1] + ", ".join(new) + line[cl:]


def ctype(t):
    """A C spelling of a type as Metrowerks prints it (`unsigned char *` stays, `int[4]` -> `int *`)."""
    return norm_type(t)


def castable(t):
    return is_ptr(t) or t in INT_TYPES


def fix_line(line, col, msg, protos=None):
    """The repaired line, or None. protos: {callee: [parameter types]} of the file being compiled."""
    col = min(col, len(line))
    end = col
    while end > 0 and line[end - 1] == " ":
        end -= 1
    m = re.match(r"function call '(\w+)\((.*)\)' does not match '\w+\((.*)\)'", msg)
    if m:
        got, want = param_types(m.group(2)), param_types(m.group(3))
        call = call_around(line, end) or call_around(line, col)
        if call is None or len(got) != len(want):
            return None
        types = [ctype(w) if (g != w and castable(w)) else None for g, w in zip(got, want)]
        if not any(types):
            return None
        new = recast_args(line, call, types)
        return new if new != line else None
    if msg.startswith("function call does not match prototype"):
        call = call_around(line, end) or call_around(line, col)
        if call is None or call[0] is None:
            return None
        j, op, cl = call
        callee = line[j:op]
        args = split_top(line[op + 1:cl]) if line[op + 1:cl].strip() else []
        ts = ["f32" if re.search(r"\b(temp_f|var_f|fparg|sp\w*f)|^\(f32\)|\d\.\d", a.strip()) else "s32" for a in args]
        return line[:j] + f"((s32 (*)({', '.join(ts) or 'void'})){callee})" + line[op:]
    m = re.match(r"illegal implicit conversion from '(.*?)' to '(.*?)'", msg)
    if m and protos is not None:
        call = call_around(line, end)
        if call and call[0] is not None and line[call[0]:call[1]] in protos:
            ret, want = protos[line[call[0]:call[1]]]
            frm, to = m.group(1), m.group(2)
            pre = line[:call[0]].rstrip()
            if canon(ret) == canon(frm) and (pre.endswith("=") or pre.endswith("return")) and castable(to):
                # the call's result assigned to another type
                return line[:call[0]] + f"({ctype(to)})" + line[call[0]:]
            types = [ctype(w) if castable(canon(w)) and canon(w) != "float" else None for w in want]
            new = recast_args(line, call, types)
            if new != line:
                return new
    if m:
        frm, to = m.group(1), m.group(2)
        a = expr_start(line, end, "full")
        e = line[a:end]
        if not e.strip():
            return None
        new = fix_expr(e, frm, to)
        return line[:a] + new + line[end:] if new else None
    m = re.match(r"illegal explicit conversion from '(.*?)' to '(.*?)'", msg)
    if m:
        frm, to = m.group(1), m.group(2)
        a = expr_start(line, end, "term")
        e = line[a:end].strip()
        cm = re.match(r"^\(([\w ]+\**)\)\s*(.*)$", e)
        if not cm:
            return None
        inner = cm.group(2)
        if frm.startswith("float") and is_ptr(frm):
            new = f"({cm.group(1)}) {deref(inner, 'f32')}"
        elif is_ptr(frm) and to in ("float", "double"):
            new = f"({cm.group(1)})(s32)({inner})"
        else:
            return None
        return line[:a] + new + line[end:]
    m = re.match(r"illegal operands '(.*?)' (\S+) '(.*?)'", msg)
    if m:
        lt, _, rt = m.groups()
        a, lend, op, b = operands(line, end)
        left, right = line[a:lend], line[b:end]
        if not left.strip() or not right.strip():
            return None
        new_r = side_fix(right, rt, lt, op)
        new_l = side_fix(left, lt, rt, op)
        if new_l is None and new_r is None:
            # the types may be listed pointer first: try them swapped
            new_r = side_fix(right, lt, rt, op)
            new_l = side_fix(left, rt, lt, op) if new_r is None else None
        if new_l is None and new_r is None:
            return None
        out = line
        if new_r is not None:
            out = out[:b] + new_r + out[end:]
        if new_l is not None:
            out = out[:a] + new_l + out[lend:]
        return out if out != line else None
    if msg.startswith("pointer/array required"):
        a = expr_start(line, end, "term")
        e = line[a:end]
        mm = re.match(r"^(\s*)\*\((.*)\)$", e, re.S)
        if mm:
            inner = mm.group(2)
            t = "s16" if re.search(r"\* 2\)$", inner) else "s32"
            return line[:a] + f"{mm.group(1)}*({t} *)({inner})" + line[end:]
        mm = re.match(r"^(\s*)\*([A-Za-z_]\w*)$", e)
        if mm:
            return line[:a] + f"{mm.group(1)}*(s32 *){mm.group(2)}" + line[end:]
        return None
    if msg.startswith("not an lvalue"):
        mm = re.match(r"^(\s*)([A-Za-z_]\w*)(\s*[-+*/&|^]?=\s)", line)
        if mm:
            return line[:mm.end(2)] + "[0]" + line[mm.end(2):]
        return None
    if msg.startswith("illegal operand") or msg.startswith("type mismatch"):
        a, lend, op, b = operands(line, end)
        left, right = line[a:lend].strip(), line[b:end].strip()
        tm = re.match(r"type mismatch '(.*?)' and '(.*?)'", msg)
        if tm and op in ("==", "!=", "<", ">", "<=", ">="):
            # a global array/pointer compared with a number: m2c meant its first element
            for side, t in ((left, tm.group(1)), (right, tm.group(2))):
                if is_ptr(t) and re.fullmatch(r"(D_|g)\w+", side) and not any(is_ptr(x) for x in (tm.group(1), tm.group(2)) if x != t):
                    if side == left:
                        return line[:a] + f"{left}[0]" + line[lend:]
                    return line[:b] + f"{right}[0]" + line[end:]
        if not left or not right or op not in ("==", "!=", "<", ">", "<=", ">="):
            return None
        r2 = "0" if right == "NULL" else f"(s32)({right})"
        out = line[:b] + r2 + line[end:]
        return out[:a] + f"(s32)({left})" + out[lend:]
    return None


PROTO_RE = re.compile(r"^(?:extern\s+)?[A-Za-z_][\w \*]*?\b(\w+)\(([^;{}]*)\)\s*;")
LOCAL_RE = re.compile(r"(sp\w*|saved_reg_\w+|s\d|unksp\w+|temp_\w+|var_\w+|second)")


def fix(ctext, add, scratch, cerr, name, fileproto=None, base=None):
    """Returns (new ctext, new add, notes); the same ctext when nothing applied. `scratch` is the text that was
    compiled (the draft's first line is found in it to map the error lines)."""
    lines = ctext.split("\n")
    first = lines[0]
    sl = scratch.split("\n")
    if base is None:
        try:
            base = len(sl) - sl[::-1].index(first)
        except ValueError:
            return ctext, add, []
    notes, edits, decls, drop = [], {}, set(), set()
    protos = {}
    for l in sl[:base - 1]:
        pm = PROTO_RE.match(l)
        if pm and "..." not in pm.group(2):
            protos[pm.group(1)] = (pm.group(1) and l[:l.index(pm.group(1) + "(")].replace("extern", "").strip(),
                                   param_types(pm.group(2)))
    want_fileproto = False
    add_set = {a.strip() for a in add}
    for ln, col, msg in errors(scratch, cerr):
        k = ln - base
        if 0 <= k < len(lines):
            if msg.startswith("undefined identifier"):
                sym = re.search(r"'(\w+)'", msg)
                if sym and LOCAL_RE.fullmatch(sym.group(1)):
                    decls.add(sym.group(1))
                continue
            if "redeclared" in msg:
                sig = next((i for i, l in enumerate(lines) if re.match(rf"^[^;{{}}]*\b{re.escape(name)}\(", l)
                            and not l.rstrip().endswith(";")), 0)
                if k == sig:
                    want_fileproto = True
                elif k < sig and lines[k].rstrip().endswith(";"):
                    lines[k] = ""  # a declaration in front of the function that clashes with the file's own
                    drop.add("(line)")
                continue
            edits.setdefault(k, []).append((col, msg))
        else:
            src = sl[ln - 1].strip() if 0 < ln <= len(sl) else ""
            if src in add_set:
                drop.add(src)
            elif re.search(rf"\b{re.escape(name)}\b", src) or "redeclared" in msg and re.search(rf"\b{re.escape(name)}\b", msg):
                want_fileproto = True  # a caller elsewhere no longer compiles against the draft's prototype
    changed = False
    for k, errs in edits.items():
        line = lines[k]
        for col, msg in sorted(errs, key=lambda x: -x[0]):
            new = fix_line(line, col, msg, protos)
            if new and new != line:
                line = new
                notes.append(msg[:40])
        if line != lines[k]:
            lines[k] = line
            changed = True
    if decls:
        brace = next((i for i, l in enumerate(lines) if l.rstrip().endswith("{")), None)
        if brace is not None:
            for sym in sorted(decls):
                lines.insert(brace + 1, f"    u8 sp[0x400];" if sym == "sp" else f"    s32 {sym};")
                changed = True
                notes.append("local " + sym)
    if drop:
        add = [a for a in add if a.strip() not in drop]
        changed = True
        notes.append("dropped a declaration")
    new = "\n".join(lines)
    if want_fileproto and fileproto:
        r = with_file_prototype(new, name, fileproto)
        if r and r != new:
            new = r
            changed = True
            notes.append("file prototype")
    return (new if changed else ctext), add, notes


def with_file_prototype(ctext, name, proto):
    """The draft with its signature's types taken from the file's prototype `extern T name(T1, T2);`."""
    lead = ctext[:len(ctext) - len(ctext.lstrip())]
    body = ctext.lstrip()
    nm = re.match(rf"^([^\n{{}};]*?)\b{name}\(([^{{}};]*?)\)", body)
    fm = re.match(rf"^(?:extern\s+)?(.*?)\b{name}\((.*)\)\s*;", proto.strip())
    if not nm or not fm:
        return None
    dparams = [p.strip() for p in nm.group(2).split(",") if p.strip() and p.strip() != "void"]
    fparams = [p.strip() for p in fm.group(2).split(",") if p.strip() and p.strip() != "void"]
    if len(dparams) != len(fparams) or "..." in fm.group(2):
        return None
    ps = []
    for fp, dp in zip(fparams, dparams):
        pname = re.findall(r"\w+", dp)[-1]
        ftype = fp
        # drop the parameter name of the file's prototype, if it has one
        words = re.findall(r"[A-Za-z_]\w*", fp)
        if len(words) > 1 and not fp.rstrip().endswith("*") and words[-1] not in (
                "int", "s32", "u32", "s16", "u16", "s8", "u8", "s64", "u64", "f32", "char", "float", "void", "long", "short"):
            ftype = fp[:fp.rfind(words[-1])].rstrip()
        ps.append(f"{ftype}{'' if ftype.endswith('*') else ' '}{pname}")
    ret = fm.group(1).strip()
    sig = f"{ret}{'' if ret.endswith('*') else ' '}{name}({', '.join(ps) if ps else 'void'})"
    return lead + sig + body[nm.end():]
