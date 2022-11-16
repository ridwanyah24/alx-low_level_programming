#ifndef FUNC_POINTER_H
#define FUNC_POINTER_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void print_name (char *name, void (*f)(char *));
#endif
