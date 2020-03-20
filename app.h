#pragma once

#include "algorithm.h"
#include "utils.h"
#include "qexpr.h"

map<string, int> maximize(const std::vector<QConstraint>& constraints, QExpr& objective);

map<string, int> minimize(const std::vector<QConstraint>& constraints, QExpr& objective);
