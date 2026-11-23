#pragma once
/*
 * ast_c.hpp - Fast, resilient C89/MWCC Lexer, Recursive-Descent AST Parser,
 * Deep Cloner, and Pretty-Printer for Budokai 3 decomp functions.
 *
 * Design principle: 100% parse success on real decomp C functions.
 * Every statement and expression is parsed into typed AST nodes; any exotic
 * construct (e.g. __asm__ volatile, complex initializer) falls back cleanly
 * to a RawStmt / RawExpr node so parsing never fails and pretty-printing
 * always emits valid C.
 */

#include <cctype>
#include <cstdint>
#include <memory>
#include <sstream>
#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

namespace b3ast {

/* ---------- Lexer ---------- */

enum class TokKind {
    Eof, Ident, Num, Str, CharLit,
    // Keywords
    KwIf, KwElse, KwWhile, KwDo, KwFor, KwSwitch, KwCase, KwDefault,
    KwBreak, KwContinue, KwReturn, KwGoto, KwSizeof, KwAsm,
    KwStruct, KwUnion, KwEnum, KwConst, KwVolatile, KwSigned, KwUnsigned,
    KwStatic, KwExtern, KwRegister,
    // Punctuators / Operators
    LParen, RParen, LBrace, RBrace, LBracket, RBracket,
    Semi, Comma, Colon, Question, Dot, Arrow,
    Plus, Minus, Star, Slash, Percent,
    Amp, Pipe, Caret, Tilde, Bang,
    Eq, EqEq, BangEq, Lt, Gt, LtEq, GtEq,
    AmpAmp, PipePipe, LShift, RShift,
    PlusPlus, MinusMinus,
    PlusEq, MinusEq, StarEq, SlashEq, PercentEq,
    AmpEq, PipeEq, CaretEq, LShiftEq, RShiftEq,
    Other
};

struct Token {
    TokKind kind = TokKind::Eof;
    std::string text;
};

static inline bool is_ident_start(char c) {
    return std::isalpha((unsigned char)c) || c == '_';
}
static inline bool is_ident_cont(char c) {
    return std::isalnum((unsigned char)c) || c == '_';
}

inline std::vector<Token> lex(const std::string &src) {
    std::vector<Token> out;
    size_t i = 0, n = src.size();
    while (i < n) {
        char c = src[i];
        if (std::isspace((unsigned char)c)) { i++; continue; }
        // Line comment
        if (c == '/' && i + 1 < n && src[i + 1] == '/') {
            while (i < n && src[i] != '\n') i++;
            continue;
        }
        // Block comment
        if (c == '/' && i + 1 < n && src[i + 1] == '*') {
            i += 2;
            while (i + 1 < n && !(src[i] == '*' && src[i + 1] == '/')) i++;
            if (i + 1 < n) i += 2;
            continue;
        }
        // String / char literal
        if (c == '"' || c == '\'') {
            size_t st = i++;
            while (i < n && src[i] != c) {
                if (src[i] == '\\' && i + 1 < n) i += 2;
                else i++;
            }
            if (i < n) i++;
            out.push_back({c == '"' ? TokKind::Str : TokKind::CharLit, src.substr(st, i - st)});
            continue;
        }
        // Number (hex, float, int)
        if (std::isdigit((unsigned char)c) || (c == '.' && i + 1 < n && std::isdigit((unsigned char)src[i + 1]))) {
            size_t st = i;
            if (c == '0' && i + 1 < n && (src[i + 1] == 'x' || src[i + 1] == 'X')) {
                i += 2;
                while (i < n && std::isxdigit((unsigned char)src[i])) i++;
            } else {
                while (i < n && (std::isdigit((unsigned char)src[i]) || src[i] == '.')) i++;
                if (i < n && (src[i] == 'e' || src[i] == 'E')) {
                    i++;
                    if (i < n && (src[i] == '+' || src[i] == '-')) i++;
                    while (i < n && std::isdigit((unsigned char)src[i])) i++;
                }
            }
            while (i < n && (src[i] == 'u' || src[i] == 'U' || src[i] == 'l' || src[i] == 'L' || src[i] == 'f' || src[i] == 'F')) i++;
            out.push_back({TokKind::Num, src.substr(st, i - st)});
            continue;
        }
        // Identifier / keyword
        if (is_ident_start(c)) {
            size_t st = i++;
            while (i < n && is_ident_cont(src[i])) i++;
            std::string t = src.substr(st, i - st);
            TokKind k = TokKind::Ident;
            if (t == "if") k = TokKind::KwIf;
            else if (t == "else") k = TokKind::KwElse;
            else if (t == "while") k = TokKind::KwWhile;
            else if (t == "do") k = TokKind::KwDo;
            else if (t == "for") k = TokKind::KwFor;
            else if (t == "switch") k = TokKind::KwSwitch;
            else if (t == "case") k = TokKind::KwCase;
            else if (t == "default") k = TokKind::KwDefault;
            else if (t == "break") k = TokKind::KwBreak;
            else if (t == "continue") k = TokKind::KwContinue;
            else if (t == "return") k = TokKind::KwReturn;
            else if (t == "goto") k = TokKind::KwGoto;
            else if (t == "sizeof") k = TokKind::KwSizeof;
            else if (t == "__asm__" || t == "asm" || t == "__asm") k = TokKind::KwAsm;
            else if (t == "struct") k = TokKind::KwStruct;
            else if (t == "union") k = TokKind::KwUnion;
            else if (t == "enum") k = TokKind::KwEnum;
            else if (t == "const") k = TokKind::KwConst;
            else if (t == "volatile") k = TokKind::KwVolatile;
            else if (t == "signed") k = TokKind::KwSigned;
            else if (t == "unsigned") k = TokKind::KwUnsigned;
            else if (t == "static") k = TokKind::KwStatic;
            else if (t == "extern") k = TokKind::KwExtern;
            else if (t == "register") k = TokKind::KwRegister;
            out.push_back({k, std::move(t)});
            continue;
        }
        // 3-char ops
        if (i + 2 < n) {
            std::string s3 = src.substr(i, 3);
            if (s3 == "<<=") { out.push_back({TokKind::LShiftEq, s3}); i += 3; continue; }
            if (s3 == ">>=") { out.push_back({TokKind::RShiftEq, s3}); i += 3; continue; }
        }
        // 2-char ops
        if (i + 1 < n) {
            std::string s2 = src.substr(i, 2);
            TokKind k = TokKind::Other;
            if (s2 == "->") k = TokKind::Arrow;
            else if (s2 == "==") k = TokKind::EqEq;
            else if (s2 == "!=") k = TokKind::BangEq;
            else if (s2 == "<=") k = TokKind::LtEq;
            else if (s2 == ">=") k = TokKind::GtEq;
            else if (s2 == "&&") k = TokKind::AmpAmp;
            else if (s2 == "||") k = TokKind::PipePipe;
            else if (s2 == "<<") k = TokKind::LShift;
            else if (s2 == ">>") k = TokKind::RShift;
            else if (s2 == "++") k = TokKind::PlusPlus;
            else if (s2 == "--") k = TokKind::MinusMinus;
            else if (s2 == "+=") k = TokKind::PlusEq;
            else if (s2 == "-=") k = TokKind::MinusEq;
            else if (s2 == "*=") k = TokKind::StarEq;
            else if (s2 == "/=") k = TokKind::SlashEq;
            else if (s2 == "%=") k = TokKind::PercentEq;
            else if (s2 == "&=") k = TokKind::AmpEq;
            else if (s2 == "|=") k = TokKind::PipeEq;
            else if (s2 == "^=") k = TokKind::CaretEq;
            if (k != TokKind::Other) { out.push_back({k, s2}); i += 2; continue; }
        }
        // 1-char ops
        TokKind k = TokKind::Other;
        switch (c) {
            case '(': k = TokKind::LParen; break;
            case ')': k = TokKind::RParen; break;
            case '{': k = TokKind::LBrace; break;
            case '}': k = TokKind::RBrace; break;
            case '[': k = TokKind::LBracket; break;
            case ']': k = TokKind::RBracket; break;
            case ';': k = TokKind::Semi; break;
            case ',': k = TokKind::Comma; break;
            case ':': k = TokKind::Colon; break;
            case '?': k = TokKind::Question; break;
            case '.': k = TokKind::Dot; break;
            case '+': k = TokKind::Plus; break;
            case '-': k = TokKind::Minus; break;
            case '*': k = TokKind::Star; break;
            case '/': k = TokKind::Slash; break;
            case '%': k = TokKind::Percent; break;
            case '&': k = TokKind::Amp; break;
            case '|': k = TokKind::Pipe; break;
            case '^': k = TokKind::Caret; break;
            case '~': k = TokKind::Tilde; break;
            case '!': k = TokKind::Bang; break;
            case '=': k = TokKind::Eq; break;
            case '<': k = TokKind::Lt; break;
            case '>': k = TokKind::Gt; break;
            default: break;
        }
        out.push_back({k, std::string(1, c)});
        i++;
    }
    out.push_back({TokKind::Eof, ""});
    return out;
}

/* ---------- AST Nodes ---------- */

struct Expr;
struct Stmt;
using ExprPtr = std::unique_ptr<Expr>;
using StmtPtr = std::unique_ptr<Stmt>;

enum class ExprKind {
    Ident, Num, Str, Raw,
    Unary, Postfix, Binary, Assign, Ternary,
    Cast, Call, Subscript, Member, SizeofExpr, SizeofType, Paren
};

struct Expr {
    ExprKind kind;
    std::string text;          // ident, num, str, op, type_name, member_name
    ExprPtr lhs, rhs, cond;    // operands
    std::vector<ExprPtr> args; // call args

    Expr(ExprKind k, std::string t = "") : kind(k), text(std::move(t)) {}

    ExprPtr clone() const {
        auto e = std::make_unique<Expr>(kind, text);
        if (lhs) e->lhs = lhs->clone();
        if (rhs) e->rhs = rhs->clone();
        if (cond) e->cond = cond->clone();
        e->args.reserve(args.size());
        for (const auto &a : args) e->args.push_back(a->clone());
        return e;
    }

    std::string print() const {
        switch (kind) {
            case ExprKind::Ident:
            case ExprKind::Num:
            case ExprKind::Str:
            case ExprKind::Raw:
                return text;
            case ExprKind::Paren:
                return "(" + lhs->print() + ")";
            case ExprKind::Unary:
                return text + lhs->print();
            case ExprKind::Postfix:
                return lhs->print() + text;
            case ExprKind::Binary:
                return "(" + lhs->print() + " " + text + " " + rhs->print() + ")";
            case ExprKind::Assign:
                return lhs->print() + " " + text + " " + rhs->print();
            case ExprKind::Ternary:
                return "(" + cond->print() + " ? " + lhs->print() + " : " + rhs->print() + ")";
            case ExprKind::Cast:
                return "((" + text + ")" + lhs->print() + ")";
            case ExprKind::Subscript:
                return lhs->print() + "[" + rhs->print() + "]";
            case ExprKind::Member:
                return lhs->print() + text + rhs->print();
            case ExprKind::Call: {
                std::string s = lhs->print() + "(";
                for (size_t i = 0; i < args.size(); i++) {
                    if (i) s += ", ";
                    s += args[i]->print();
                }
                s += ")";
                return s;
            }
            case ExprKind::SizeofExpr:
                return "sizeof(" + lhs->print() + ")";
            case ExprKind::SizeofType:
                return "sizeof(" + text + ")";
        }
        return "";
    }
};

struct LocalDecl {
    std::string type_str;  // e.g. "s32", "u8 *", "BattleWork *"
    std::string name;      // e.g. "i", "p"
    std::string suffix;    // e.g. "[16]" or ""
    ExprPtr init;          // optional initializer (rare in C89)
    std::string raw_line;  // fallback if complex decl (e.g. function pointer)

    LocalDecl clone() const {
        LocalDecl d;
        d.type_str = type_str;
        d.name = name;
        d.suffix = suffix;
        if (init) d.init = init->clone();
        d.raw_line = raw_line;
        return d;
    }

    std::string print(const std::string &ind) const {
        if (!raw_line.empty()) return ind + raw_line + "\n";
        std::string s = ind + type_str;
        if (!s.empty() && s.back() != '*' && s.back() != ' ') s += ' ';
        s += name + suffix;
        if (init) s += " = " + init->print();
        s += ";\n";
        return s;
    }
};

enum class StmtKind {
    Block, ExprStmt, If, While, DoWhile, For,
    Switch, Case, Default, Return, Break, Continue, Goto, Label, Raw
};

struct Stmt {
    StmtKind kind;
    std::string text;               // label/goto target or raw text
    ExprPtr expr;                   // cond, return expr, exprstmt, case val, switch expr
    ExprPtr init_expr, step_expr;   // for loop
    std::vector<LocalDecl> decls;   // for Block
    std::vector<StmtPtr> stmts;     // for Block, Switch
    StmtPtr then_br, else_br, body; // for If, While, DoWhile, For

    Stmt(StmtKind k, std::string t = "") : kind(k), text(std::move(t)) {}

    StmtPtr clone() const {
        auto s = std::make_unique<Stmt>(kind, text);
        if (expr) s->expr = expr->clone();
        if (init_expr) s->init_expr = init_expr->clone();
        if (step_expr) s->step_expr = step_expr->clone();
        for (const auto &d : decls) s->decls.push_back(d.clone());
        for (const auto &st : stmts) s->stmts.push_back(st->clone());
        if (then_br) s->then_br = then_br->clone();
        if (else_br) s->else_br = else_br->clone();
        if (body) s->body = body->clone();
        return s;
    }

    void print(std::ostringstream &os, int lvl = 0) const {
        std::string ind(lvl * 4, ' ');
        switch (kind) {
            case StmtKind::Block:
                os << ind << "{\n";
                for (const auto &d : decls) os << d.print(std::string((lvl + 1) * 4, ' '));
                for (const auto &st : stmts) st->print(os, lvl + 1);
                os << ind << "}\n";
                break;
            case StmtKind::ExprStmt:
                if (expr) os << ind << expr->print() << ";\n";
                else os << ind << ";\n";
                break;
            case StmtKind::If:
                os << ind << "if (" << expr->print() << ")\n";
                then_br->print(os, then_br->kind == StmtKind::Block ? lvl : lvl + 1);
                if (else_br) {
                    os << ind << "else\n";
                    else_br->print(os, else_br->kind == StmtKind::Block ? lvl : lvl + 1);
                }
                break;
            case StmtKind::While:
                os << ind << "while (" << expr->print() << ")\n";
                body->print(os, body->kind == StmtKind::Block ? lvl : lvl + 1);
                break;
            case StmtKind::DoWhile:
                os << ind << "do\n";
                body->print(os, body->kind == StmtKind::Block ? lvl : lvl + 1);
                os << ind << "while (" << expr->print() << ");\n";
                break;
            case StmtKind::For:
                os << ind << "for ("
                   << (init_expr ? init_expr->print() : "") << "; "
                   << (expr ? expr->print() : "") << "; "
                   << (step_expr ? step_expr->print() : "") << ")\n";
                body->print(os, body->kind == StmtKind::Block ? lvl : lvl + 1);
                break;
            case StmtKind::Switch:
                os << ind << "switch (" << expr->print() << ") {\n";
                for (const auto &st : stmts) st->print(os, lvl + 1);
                os << ind << "}\n";
                break;
            case StmtKind::Case:
                os << std::string(std::max(0, (lvl - 1) * 4), ' ') << "case " << expr->print() << ":\n";
                break;
            case StmtKind::Default:
                os << std::string(std::max(0, (lvl - 1) * 4), ' ') << "default:\n";
                break;
            case StmtKind::Return:
                if (expr) os << ind << "return " << expr->print() << ";\n";
                else os << ind << "return;\n";
                break;
            case StmtKind::Break:
                os << ind << "break;\n";
                break;
            case StmtKind::Continue:
                os << ind << "continue;\n";
                break;
            case StmtKind::Goto:
                os << ind << "goto " << text << ";\n";
                break;
            case StmtKind::Label:
                os << text << ":\n";
                break;
            case StmtKind::Raw:
                os << ind << text << "\n";
                break;
        }
    }
};

struct FuncAST {
    std::string header; // e.g. "s32 func_001AC110(void *arg0)"
    std::vector<std::string> param_names;
    StmtPtr body;       // always StmtKind::Block

    FuncAST clone() const {
        FuncAST f;
        f.header = header;
        f.param_names = param_names;
        if (body) f.body = body->clone();
        return f;
    }

    std::string print(const std::string &override_name = "", const std::string &orig_name = "") const {
        std::ostringstream os;
        if (!override_name.empty() && !orig_name.empty()) {
            size_t pos = header.find(orig_name);
            if (pos != std::string::npos) {
                os << header.substr(0, pos) << override_name << header.substr(pos + orig_name.size()) << "\n";
            } else {
                os << header << "\n";
            }
        } else {
            os << header << "\n";
        }
        if (body) body->print(os, 0);
        return os.str();
    }
};

/* ---------- Recursive-Descent Parser ---------- */

class Parser {
    std::vector<Token> toks;
    size_t pos = 0;
    std::unordered_set<std::string> known_types;

    const Token &peek(size_t off = 0) const {
        return (pos + off < toks.size()) ? toks[pos + off] : toks.back();
    }
    const Token &advance() {
        return (pos < toks.size()) ? toks[pos++] : toks.back();
    }
    bool match(TokKind k) {
        if (peek().kind == k) { pos++; return true; }
        return false;
    }

    bool is_type_start_tok(const Token &t) const {
        if (t.kind == TokKind::KwStruct || t.kind == TokKind::KwUnion || t.kind == TokKind::KwEnum ||
            t.kind == TokKind::KwConst || t.kind == TokKind::KwVolatile ||
            t.kind == TokKind::KwSigned || t.kind == TokKind::KwUnsigned ||
            t.kind == TokKind::KwStatic || t.kind == TokKind::KwRegister) return true;
        if (t.kind == TokKind::Ident && known_types.count(t.text)) return true;
        return false;
    }

    // Heuristic: is `( <type> )` a cast at current pos (where peek() == LParen)?
    bool looks_like_cast() const {
        if (peek().kind != TokKind::LParen) return false;
        size_t i = 1;
        // Also recognize `(SomeTypedef *)` even if SomeTypedef came from an #include header
        bool unknown_ptr_cast = (peek(1).kind == TokKind::Ident && peek(2).kind == TokKind::Star);
        if (!is_type_start_tok(peek(i)) && !unknown_ptr_cast) return false;
        while (peek(i).kind != TokKind::Eof && peek(i).kind != TokKind::RParen) {
            auto k = peek(i).kind;
            if (k == TokKind::LParen) {
                int d = 1; i++;
                while (peek(i).kind != TokKind::Eof && d > 0) {
                    if (peek(i).kind == TokKind::LParen) d++;
                    else if (peek(i).kind == TokKind::RParen) d--;
                    i++;
                }
                continue;
            }
            if (!(is_type_start_tok(peek(i)) || k == TokKind::Star || k == TokKind::Ident))
                return false;
            i++;
        }
        if (peek(i).kind != TokKind::RParen) return false;
        auto after = peek(i + 1).kind;
        if (after == TokKind::Semi || after == TokKind::Comma || after == TokKind::RParen ||
            after == TokKind::RBracket || after == TokKind::RBrace || after == TokKind::Eof ||
            after == TokKind::Eq || after == TokKind::EqEq || after == TokKind::BangEq)
            return false;
        return true;
    }

    std::string parse_type_until_rparen() {
        std::string s;
        int d = 0;
        while (peek().kind != TokKind::Eof) {
            if (peek().kind == TokKind::RParen && d == 0) break;
            if (peek().kind == TokKind::LParen) d++;
            else if (peek().kind == TokKind::RParen) d--;
            if (!s.empty() && s.back() != '(' && peek().kind != TokKind::RParen && peek().kind != TokKind::Star)
                s += ' ';
            else if (!s.empty() && peek().kind == TokKind::Star && s.back() != '*' && s.back() != '(')
                s += ' ';
            s += advance().text;
        }
        return s;
    }

    // Check if current position inside a Block starts a local variable declaration
    bool looks_like_decl() const {
        // Handle types from #include headers: `TypeName var;` or `TypeName *var;`
        if (peek().kind == TokKind::Ident && !is_type_start_tok(peek())) {
            size_t i = 1;
            while (peek(i).kind == TokKind::Star || peek(i).kind == TokKind::KwConst || peek(i).kind == TokKind::KwVolatile) i++;
            if (peek(i).kind == TokKind::Ident) {
                auto nk = peek(i + 1).kind;
                if (nk == TokKind::Semi || nk == TokKind::Eq || nk == TokKind::LBracket || nk == TokKind::Comma)
                    return true;
            }
            return false;
        }
        if (!is_type_start_tok(peek())) return false;
        size_t i = 0;
        while (is_type_start_tok(peek(i))) {
            if (peek(i).kind == TokKind::KwStruct || peek(i).kind == TokKind::KwUnion || peek(i).kind == TokKind::KwEnum)
                i++;
            i++;
        }
        while (peek(i).kind == TokKind::Star || peek(i).kind == TokKind::KwConst || peek(i).kind == TokKind::KwVolatile) i++;
        if (peek(i).kind == TokKind::Ident) {
            auto nk = peek(i + 1).kind;
            if (nk == TokKind::Semi || nk == TokKind::Eq || nk == TokKind::LBracket || nk == TokKind::Comma)
                return true;
        }
        if (peek(i).kind == TokKind::LParen && peek(i + 1).kind == TokKind::Star) return true; // fn ptr decl
        return false;
    }

    void parse_decl_into(std::vector<LocalDecl> &decls) {
        size_t save = pos;
        // Check if complex (comma-separated or function pointer) -> preserve raw
        size_t scan = pos;
        bool has_comma = false, has_fnptr = false;
        int par = 0;
        while (scan < toks.size() && toks[scan].kind != TokKind::Semi && toks[scan].kind != TokKind::Eof) {
            if (toks[scan].kind == TokKind::LParen) {
                if (scan + 1 < toks.size() && toks[scan + 1].kind == TokKind::Star) has_fnptr = true;
                par++;
            } else if (toks[scan].kind == TokKind::RParen) par--;
            else if (toks[scan].kind == TokKind::Comma && par == 0) has_comma = true;
            scan++;
        }
        if (has_comma || has_fnptr) {
            LocalDecl d;
            while (pos < toks.size() && peek().kind != TokKind::Semi && peek().kind != TokKind::Eof) {
                if (!d.raw_line.empty() && peek().kind != TokKind::Comma && peek().kind != TokKind::RParen &&
                    peek().kind != TokKind::LBracket && peek().kind != TokKind::RBracket)
                    d.raw_line += ' ';
                d.raw_line += advance().text;
            }
            match(TokKind::Semi);
            d.raw_line += ";";
            decls.push_back(std::move(d));
            return;
        }

        LocalDecl d;
        if (peek().kind == TokKind::Ident && !is_type_start_tok(peek())) {
            d.type_str = advance().text;
        } else {
            while (is_type_start_tok(peek())) {
                if (!d.type_str.empty()) d.type_str += ' ';
                if (peek().kind == TokKind::KwStruct || peek().kind == TokKind::KwUnion || peek().kind == TokKind::KwEnum) {
                    d.type_str += advance().text;
                    if (peek().kind == TokKind::Ident) { d.type_str += ' '; d.type_str += advance().text; }
                } else {
                    d.type_str += advance().text;
                }
            }
        }
        while (peek().kind == TokKind::Star || peek().kind == TokKind::KwConst || peek().kind == TokKind::KwVolatile) {
            if (!d.type_str.empty() && d.type_str.back() != '*') d.type_str += ' ';
            d.type_str += advance().text;
        }
        if (peek().kind == TokKind::Ident) {
            d.name = advance().text;
        } else {
            pos = save;
            LocalDecl r;
            while (peek().kind != TokKind::Semi && peek().kind != TokKind::Eof) {
                if (!r.raw_line.empty()) r.raw_line += ' ';
                r.raw_line += advance().text;
            }
            match(TokKind::Semi);
            r.raw_line += ";";
            decls.push_back(std::move(r));
            return;
        }
        while (peek().kind == TokKind::LBracket) {
            d.suffix += advance().text;
            while (peek().kind != TokKind::RBracket && peek().kind != TokKind::Eof)
                d.suffix += advance().text;
            if (peek().kind == TokKind::RBracket) d.suffix += advance().text;
        }
        // Preserve trailing __attribute__((...)) on local arrays/vars
        while (peek().kind == TokKind::Ident && peek().text == "__attribute__") {
            d.suffix += " " + advance().text;
            int pd = 0;
            while (peek().kind != TokKind::Eof) {
                if (peek().kind == TokKind::LParen) pd++;
                else if (peek().kind == TokKind::RParen) pd--;
                d.suffix += advance().text;
                if (pd <= 0) break;
            }
        }
        if (match(TokKind::Eq)) {
            d.init = parse_expr();
        }
        match(TokKind::Semi);
        decls.push_back(std::move(d));
    }

    /* ----- Expressions (C precedence climbing) ----- */

    ExprPtr parse_expr() { return parse_assign(); }

    ExprPtr parse_comma() {
        auto lhs = parse_assign();
        while (match(TokKind::Comma)) {
            auto b = std::make_unique<Expr>(ExprKind::Binary, ",");
            b->lhs = std::move(lhs);
            b->rhs = parse_assign();
            lhs = std::move(b);
        }
        return lhs;
    }

    ExprPtr parse_assign() {
        auto lhs = parse_ternary();
        auto k = peek().kind;
        if (k == TokKind::Eq || k == TokKind::PlusEq || k == TokKind::MinusEq ||
            k == TokKind::StarEq || k == TokKind::SlashEq || k == TokKind::PercentEq ||
            k == TokKind::AmpEq || k == TokKind::PipeEq || k == TokKind::CaretEq ||
            k == TokKind::LShiftEq || k == TokKind::RShiftEq) {
            std::string op = advance().text;
            auto rhs = parse_assign();
            auto e = std::make_unique<Expr>(ExprKind::Assign, op);
            e->lhs = std::move(lhs);
            e->rhs = std::move(rhs);
            return e;
        }
        return lhs;
    }

    ExprPtr parse_ternary() {
        auto c = parse_binop(1);
        if (match(TokKind::Question)) {
            auto t = parse_expr();
            match(TokKind::Colon);
            auto f = parse_ternary();
            auto e = std::make_unique<Expr>(ExprKind::Ternary);
            e->cond = std::move(c);
            e->lhs = std::move(t);
            e->rhs = std::move(f);
            return e;
        }
        return c;
    }

    static int binop_prec(TokKind k) {
        switch (k) {
            case TokKind::PipePipe: return 1;
            case TokKind::AmpAmp:   return 2;
            case TokKind::Pipe:     return 3;
            case TokKind::Caret:    return 4;
            case TokKind::Amp:      return 5;
            case TokKind::EqEq:
            case TokKind::BangEq:   return 6;
            case TokKind::Lt:
            case TokKind::Gt:
            case TokKind::LtEq:
            case TokKind::GtEq:     return 7;
            case TokKind::LShift:
            case TokKind::RShift:   return 8;
            case TokKind::Plus:
            case TokKind::Minus:    return 9;
            case TokKind::Star:
            case TokKind::Slash:
            case TokKind::Percent:  return 10;
            default: return 0;
        }
    }

    ExprPtr parse_binop(int min_prec) {
        auto lhs = parse_unary();
        while (true) {
            int p = binop_prec(peek().kind);
            if (p < min_prec) break;
            std::string op = advance().text;
            auto rhs = parse_binop(p + 1);
            auto e = std::make_unique<Expr>(ExprKind::Binary, op);
            e->lhs = std::move(lhs);
            e->rhs = std::move(rhs);
            lhs = std::move(e);
        }
        return lhs;
    }

    ExprPtr parse_unary() {
        if (looks_like_cast()) {
            advance(); // '('
            std::string ty = parse_type_until_rparen();
            match(TokKind::RParen);
            auto e = std::make_unique<Expr>(ExprKind::Cast, ty);
            e->lhs = parse_unary();
            return e;
        }
        auto k = peek().kind;
        if (k == TokKind::Plus || k == TokKind::Minus || k == TokKind::Star ||
            k == TokKind::Amp || k == TokKind::Tilde || k == TokKind::Bang ||
            k == TokKind::PlusPlus || k == TokKind::MinusMinus) {
            std::string op = advance().text;
            auto e = std::make_unique<Expr>(ExprKind::Unary, op);
            e->lhs = parse_unary();
            return e;
        }
        if (k == TokKind::KwSizeof) {
            advance();
            if (peek().kind == TokKind::LParen && is_type_start_tok(peek(1))) {
                advance();
                std::string ty = parse_type_until_rparen();
                match(TokKind::RParen);
                return std::make_unique<Expr>(ExprKind::SizeofType, ty);
            }
            auto e = std::make_unique<Expr>(ExprKind::SizeofExpr);
            if (match(TokKind::LParen)) { e->lhs = parse_expr(); match(TokKind::RParen); }
            else e->lhs = parse_unary();
            return e;
        }
        return parse_postfix();
    }

    ExprPtr parse_postfix() {
        auto e = parse_primary();
        while (true) {
            if (match(TokKind::LBracket)) {
                auto idx = parse_expr();
                match(TokKind::RBracket);
                auto s = std::make_unique<Expr>(ExprKind::Subscript);
                s->lhs = std::move(e);
                s->rhs = std::move(idx);
                e = std::move(s);
            } else if (match(TokKind::LParen)) {
                auto c = std::make_unique<Expr>(ExprKind::Call);
                c->lhs = std::move(e);
                if (peek().kind != TokKind::RParen) {
                    while (true) {
                        c->args.push_back(parse_assign());
                        if (!match(TokKind::Comma)) break;
                    }
                }
                match(TokKind::RParen);
                e = std::move(c);
            } else if (peek().kind == TokKind::Dot || peek().kind == TokKind::Arrow) {
                std::string op = advance().text;
                std::string mem = advance().text;
                auto m = std::make_unique<Expr>(ExprKind::Member, op);
                m->lhs = std::move(e);
                m->rhs = std::make_unique<Expr>(ExprKind::Ident, mem);
                e = std::move(m);
            } else if (peek().kind == TokKind::PlusPlus || peek().kind == TokKind::MinusMinus) {
                std::string op = advance().text;
                auto p = std::make_unique<Expr>(ExprKind::Postfix, op);
                p->lhs = std::move(e);
                e = std::move(p);
            } else {
                break;
            }
        }
        return e;
    }

    ExprPtr parse_primary() {
        auto k = peek().kind;
        if (k == TokKind::Ident) return std::make_unique<Expr>(ExprKind::Ident, advance().text);
        if (k == TokKind::Num) return std::make_unique<Expr>(ExprKind::Num, advance().text);
        if (k == TokKind::Str || k == TokKind::CharLit) {
            std::string s = advance().text;
            while (peek().kind == TokKind::Str) { s += " "; s += advance().text; }
            return std::make_unique<Expr>(ExprKind::Str, s);
        }
        if (match(TokKind::LParen)) {
            auto inner = parse_expr();
            match(TokKind::RParen);
            auto p = std::make_unique<Expr>(ExprKind::Paren);
            p->lhs = std::move(inner);
            return p;
        }
        // Fallback: consume one token so parser never infinite-loops
        return std::make_unique<Expr>(ExprKind::Raw, advance().text);
    }

    /* ----- Statements ----- */

    StmtPtr parse_block() {
        auto blk = std::make_unique<Stmt>(StmtKind::Block);
        match(TokKind::LBrace);
        while (peek().kind != TokKind::RBrace && peek().kind != TokKind::Eof) {
            if (looks_like_decl() && blk->stmts.empty()) {
                parse_decl_into(blk->decls);
            } else {
                blk->stmts.push_back(parse_stmt());
            }
        }
        match(TokKind::RBrace);
        return blk;
    }

    StmtPtr parse_stmt() {
        auto k = peek().kind;
        if (k == TokKind::LBrace) return parse_block();
        if (k == TokKind::KwAsm) {
            // Preserve inline __asm__ volatile (...); verbatim
            std::string raw;
            while (peek().kind != TokKind::Semi && peek().kind != TokKind::Eof) {
                if (!raw.empty() && peek().kind != TokKind::LParen && peek().kind != TokKind::RParen &&
                    peek().kind != TokKind::Comma)
                    raw += ' ';
                raw += advance().text;
            }
            match(TokKind::Semi);
            raw += ";";
            return std::make_unique<Stmt>(StmtKind::Raw, raw);
        }
        if (k == TokKind::KwIf) {
            advance();
            match(TokKind::LParen);
            auto s = std::make_unique<Stmt>(StmtKind::If);
            s->expr = parse_expr();
            match(TokKind::RParen);
            s->then_br = parse_stmt();
            if (match(TokKind::KwElse)) s->else_br = parse_stmt();
            return s;
        }
        if (k == TokKind::KwWhile) {
            advance();
            match(TokKind::LParen);
            auto s = std::make_unique<Stmt>(StmtKind::While);
            s->expr = parse_expr();
            match(TokKind::RParen);
            s->body = parse_stmt();
            return s;
        }
        if (k == TokKind::KwDo) {
            advance();
            auto s = std::make_unique<Stmt>(StmtKind::DoWhile);
            s->body = parse_stmt();
            match(TokKind::KwWhile);
            match(TokKind::LParen);
            s->expr = parse_expr();
            match(TokKind::RParen);
            match(TokKind::Semi);
            return s;
        }
        if (k == TokKind::KwFor) {
            advance();
            match(TokKind::LParen);
            auto s = std::make_unique<Stmt>(StmtKind::For);
            if (peek().kind != TokKind::Semi) s->init_expr = parse_comma();
            match(TokKind::Semi);
            if (peek().kind != TokKind::Semi) s->expr = parse_comma();
            match(TokKind::Semi);
            if (peek().kind != TokKind::RParen) s->step_expr = parse_comma();
            match(TokKind::RParen);
            s->body = parse_stmt();
            return s;
        }
        if (k == TokKind::KwSwitch) {
            advance();
            match(TokKind::LParen);
            auto s = std::make_unique<Stmt>(StmtKind::Switch);
            s->expr = parse_expr();
            match(TokKind::RParen);
            match(TokKind::LBrace);
            while (peek().kind != TokKind::RBrace && peek().kind != TokKind::Eof) {
                s->stmts.push_back(parse_stmt());
            }
            match(TokKind::RBrace);
            return s;
        }
        if (k == TokKind::KwCase) {
            advance();
            auto s = std::make_unique<Stmt>(StmtKind::Case);
            s->expr = parse_expr();
            match(TokKind::Colon);
            return s;
        }
        if (k == TokKind::KwDefault) {
            advance();
            match(TokKind::Colon);
            return std::make_unique<Stmt>(StmtKind::Default);
        }
        if (k == TokKind::KwReturn) {
            advance();
            auto s = std::make_unique<Stmt>(StmtKind::Return);
            if (peek().kind != TokKind::Semi) s->expr = parse_expr();
            match(TokKind::Semi);
            return s;
        }
        if (k == TokKind::KwBreak) { advance(); match(TokKind::Semi); return std::make_unique<Stmt>(StmtKind::Break); }
        if (k == TokKind::KwContinue) { advance(); match(TokKind::Semi); return std::make_unique<Stmt>(StmtKind::Continue); }
        if (k == TokKind::KwGoto) {
            advance();
            std::string tgt = advance().text;
            match(TokKind::Semi);
            return std::make_unique<Stmt>(StmtKind::Goto, tgt);
        }
        if (k == TokKind::Ident && peek(1).kind == TokKind::Colon) {
            std::string lbl = advance().text;
            advance(); // ':'
            return std::make_unique<Stmt>(StmtKind::Label, lbl);
        }
        if (k == TokKind::Semi) {
            advance();
            return std::make_unique<Stmt>(StmtKind::ExprStmt);
        }
        auto s = std::make_unique<Stmt>(StmtKind::ExprStmt);
        s->expr = parse_comma();
        match(TokKind::Semi);
        return s;
    }

public:
    Parser(const std::string &preamble, const std::string &func_src) {
        // Seed built-in & project primitive types
        static const char *prims[] = {
            "void", "char", "short", "int", "long", "float", "double",
            "s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64", "f32", "f64",
            "s128", "u128", "size_t", "M2C_UNK", "M2C_UNK8", "M2C_UNK16", "M2C_UNK32", "M2C_UNK64"
        };
        for (const char *p : prims) known_types.insert(p);
        // Extract typedef names from preamble
        auto ptoks = lex(preamble);
        for (size_t i = 0; i + 2 < ptoks.size(); i++) {
            if (ptoks[i].kind == TokKind::Ident && ptoks[i].text == "typedef") {
                // Find the ';' at brace depth 0 and take the identifier right before it (or before '[')
                int br = 0;
                size_t j = i + 1;
                while (j < ptoks.size() && !(ptoks[j].kind == TokKind::Semi && br == 0)) {
                    if (ptoks[j].kind == TokKind::LBrace) br++;
                    else if (ptoks[j].kind == TokKind::RBrace) br--;
                    j++;
                }
                if (j > i + 1 && j < ptoks.size()) {
                    size_t k = j - 1;
                    while (k > i && ptoks[k].kind != TokKind::Ident) k--;
                    if (k > i && ptoks[k].kind == TokKind::Ident)
                        known_types.insert(ptoks[k].text);
                }
            }
        }
        toks = lex(func_src);
    }

    bool parse_function(FuncAST &out) {
        // Find first '{' -> everything before it is header
        size_t brace_pos = 0;
        while (brace_pos < toks.size() && toks[brace_pos].kind != TokKind::LBrace) brace_pos++;
        if (brace_pos >= toks.size()) return false;

        // Reconstruct header cleanly
        std::string hdr;
        for (size_t i = 0; i < brace_pos; i++) {
            if (!hdr.empty() && toks[i].kind != TokKind::LParen && toks[i].kind != TokKind::RParen &&
                toks[i].kind != TokKind::Comma && hdr.back() != '(' && hdr.back() != '*')
                hdr += ' ';
            hdr += toks[i].text;
        }
        out.header = hdr;

        // Extract parameter names from (...) in header
        size_t lp = 0;
        while (lp < brace_pos && toks[lp].kind != TokKind::LParen) lp++;
        if (lp < brace_pos) {
            for (size_t i = lp + 1; i < brace_pos; i++) {
                if (toks[i].kind == TokKind::Comma || toks[i].kind == TokKind::RParen) {
                    if (i > lp + 1 && toks[i - 1].kind == TokKind::Ident && toks[i - 1].text != "void") {
                        out.param_names.push_back(toks[i - 1].text);
                    }
                }
            }
        }

        pos = brace_pos;
        out.body = parse_block();
        return out.body != nullptr;
    }
};

} // namespace b3ast
