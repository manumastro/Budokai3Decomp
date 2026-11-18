"""A top-level splitter for C sources: preprocessor lines, functions, data definitions, other declarations.

Not a C parser: it tracks comments, strings and brackets, which is enough to cut a file into the items the library
port rewrites (scripts/lib_port.py)."""
import re
from dataclasses import dataclass


@dataclass
class Item:
    kind: str   # pp, func, data, decl
    text: str   # the item, without the comments and blank lines before it
    lead: str   # those comments and blank lines
    name: str = ""
    head: str = ""   # functions: the text before the body, data: the declaration without its initializer


def _skip_string(s, i):
    q = s[i]
    i += 1
    while i < len(s) and s[i] != q:
        i += 2 if s[i] == "\\" else 1
    return i + 1


def _skip_comment(s, i):
    if s.startswith("/*", i):
        j = s.find("*/", i + 2)
        return len(s) if j < 0 else j + 2
    j = s.find("\n", i)
    return len(s) if j < 0 else j


IDENT = re.compile(r"[A-Za-z_]\w*")


def split_items(s):
    items = []
    i = 0
    n = len(s)
    lead_start = 0
    while i < n:
        # skip whitespace and comments into the lead
        while i < n:
            if s[i].isspace():
                i += 1
            elif s.startswith("/*", i) or s.startswith("//", i):
                i = _skip_comment(s, i)
            else:
                break
        if i >= n:
            break
        start = i
        lead = s[lead_start:start]
        if s[i] == "#":
            j = i
            while True:
                k = s.find("\n", j)
                if k < 0:
                    j = n
                    break
                if s[k - 1] == "\\":
                    j = k + 1
                    continue
                j = k
                break
            # comments can open on a directive line and run on: keep it simple, directives end at the line
            items.append(Item("pp", s[start:j], lead))
            i = j
            lead_start = i
            continue
        depth = 0
        paren = 0
        first_brace = None
        j = i
        end = None
        while j < n:
            c = s[j]
            if c in "\"'":
                j = _skip_string(s, j)
                continue
            if s.startswith("/*", j) or s.startswith("//", j):
                j = _skip_comment(s, j)
                continue
            if c == "(" or c == "[":
                paren += 1
            elif c == ")" or c == "]":
                paren -= 1
            elif c == "{":
                if depth == 0 and first_brace is None:
                    first_brace = j
                depth += 1
            elif c == "}":
                depth -= 1
                if depth == 0 and first_brace is not None:
                    head = s[start:first_brace]
                    if re.search(r"\)\s*(__attribute__\s*\(\(.*?\)\)\s*)?$", head.rstrip(), re.S) and \
                            "=" not in head and not re.match(r"\s*(typedef|struct|union|enum)\b[^()]*$", head):
                        end = j + 1
                        break
            elif c == ";" and depth == 0 and paren == 0:
                end = j + 1
                break
            j += 1
        if end is None:
            end = n
        text = s[start:end]
        items.append(classify(text, lead))
        i = end
        lead_start = i
    return items


def _strip_comments(t):
    out = []
    i = 0
    while i < len(t):
        if t.startswith("/*", i) or t.startswith("//", i):
            i = _skip_comment(t, i)
            out.append(" ")
        elif t[i] in "\"'":
            j = _skip_string(t, i)
            out.append(t[i:j])
            i = j
        else:
            out.append(t[i])
            i += 1
    return "".join(out)


def classify(text, lead):
    t = _strip_comments(text)
    if re.match(r"\s*(__asm__|__asm|asm)\b", t):
        return Item("asmblob", text, lead)
    brace = t.find("{")
    if brace >= 0 and t.rstrip().endswith("}"):
        head = t[:brace]
        if "=" not in head and re.search(r"\)\s*(__attribute__\s*\(\(.*?\)\)\s*)?$", head.rstrip(), re.S) \
                and not re.match(r"\s*(typedef|struct|union|enum)\b[^()]*$", head):
            m = re.search(r"(\w+)\s*\(", head)
            # the function name is the identifier before the first '(' that is not an attribute
            h = strip_attr(head)
            m = re.search(r"(\w+)\s*\(", h)
            return Item("func", text, lead, m.group(1) if m else "", head)
    if re.match(r"\s*(typedef|extern)\b", t) or re.match(r"\s*(struct|union|enum)\b[^=()]*(\{.*\})?\s*;\s*$", t, re.S):
        return Item("decl", text, lead)
    eq = _find_top(t, "=")
    decl = t[:eq] if eq >= 0 else t.rstrip().rstrip(";")
    if "(" in decl and "[" not in decl.split("(")[0] and "(*" not in decl:
        return Item("decl", text, lead)  # a prototype
    h = strip_attr(decl)
    h = re.sub(r"\[[^\]]*\]", "", h)
    ids = IDENT.findall(h)
    name = ids[-1] if ids else ""
    return Item("data", text, lead, name, decl.strip())


def strip_attr(t):
    """t without its __attribute__((...)) clauses (balanced brackets)."""
    while True:
        i = t.find("__attribute__")
        if i < 0:
            return t
        j = t.find("(", i)
        if j < 0:
            return t
        depth = 0
        k = j
        while k < len(t):
            if t[k] == "(":
                depth += 1
            elif t[k] == ")":
                depth -= 1
                if depth == 0:
                    break
            k += 1
        t = t[:i] + t[k + 1:]


def _find_top(t, ch):
    depth = 0
    i = 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            i = _skip_string(t, i)
            continue
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        elif c == ch and depth == 0:
            return i
        i += 1
    return -1


def c_string_value(tok):
    """The bytes a C string literal token denotes (simple escapes only), or None."""
    body = tok[1:-1]
    out = bytearray()
    i = 0
    while i < len(body):
        c = body[i]
        if c == "\\":
            i += 1
            e = body[i]
            if e in "abfnrtv\\'\"?":
                out.append({"a": 7, "b": 8, "f": 12, "n": 10, "r": 13, "t": 9, "v": 11, "\\": 92, "'": 39, '"': 34,
                            "?": 63}[e])
                i += 1
            elif e in "01234567":
                j = i
                while j < len(body) and j < i + 3 and body[j] in "01234567":
                    j += 1
                out.append(int(body[i:j], 8) & 0xFF)
                i = j
            elif e == "x":
                j = i + 1
                while j < len(body) and body[j] in "0123456789abcdefABCDEF":
                    j += 1
                out.append(int(body[i + 1:j], 16) & 0xFF)
                i = j
            else:
                return None
        else:
            out.append(ord(c))
            i += 1
    return bytes(out)


def string_tokens(text):
    """[(start, end, token)] of the string literals in text, comments skipped."""
    out = []
    i = 0
    while i < len(text):
        if text.startswith("/*", i) or text.startswith("//", i):
            i = _skip_comment(text, i)
        elif text[i] == '"':
            j = _skip_string(text, i)
            out.append((i, j, text[i:j]))
            i = j
        elif text[i] == "'":
            i = _skip_string(text, i)
        else:
            i += 1
    return out
