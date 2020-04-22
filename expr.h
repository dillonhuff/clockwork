#pragma once


struct Token {
  string txt;

  Token() : txt("") {}
  Token(const std::string& txt_) : txt(txt_) {}
};

static inline
ostream& operator<<(ostream& out, const Token& e) {
  out << e.txt;
  return out;
}

