#ifndef FUNC_POINTER_H
#define FUNC_POINTER_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void array_iterator(int *array, size_t size, void(*action)(int));
void print_name(char *name, void (*f)(char *));
#endif
