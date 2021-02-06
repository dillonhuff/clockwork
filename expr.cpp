#include "expr.h"
 
Expr* add(vector<Expr*> args) {
  assert(args.size() > 0);
  if (args.size() == 1) {
    return args.at(0);
  } else if (args.size() == 2) {
    return add(args.at(0), args.at(1));
  } else {
    vector<Expr*> fst;
    vector<Expr*> snd;
    int index = 0;
    for (index = 0; index < (int) args.size() / 2; index++) {
      fst.push_back(args.at(index));
    }
    for (; index < args.size(); index++) {
      snd.push_back(args.at(index));
    }
    return add(add(fst), add(snd));
  }

  assert(args.size() > 1);
  Expr* res = args.at(0);
  for (int i = 1; i < args.size(); i++) {
    res = new Binop("+", res, args.at(i));
  }
  return res;
}


