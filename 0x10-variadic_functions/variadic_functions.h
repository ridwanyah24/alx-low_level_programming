#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_numbers(const char *seperator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
#endif