#ifndef UTILS_H
#define UTILS_H

#include "types.h"
#include <iostream>
#include <random>
#include <string>

// === Logging Helper ===

void print(string message);

void print(double a);

void print_vector(double_vector v);

// === RNG ===

double random_double();

// === Infinity ===

double const inf = numeric_limits<double>::infinity();

#endif
