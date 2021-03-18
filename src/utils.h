#ifndef UTILS_H
#define UTILS_H

#include "types.h"
#include <iostream>
#include <random>
#include <string>

// === Logging Helper ===

extern bool logging_enabled;

void print_info(const string& message);

void print(const string& message);

void print(double a);

void print(const double_vector& v);

// === RNG ===

double random_double();

// === Infinity ===

double const inf = numeric_limits<double>::infinity();

#endif
