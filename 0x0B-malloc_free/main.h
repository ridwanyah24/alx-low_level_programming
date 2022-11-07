#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_grid(int **grid, int);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
#endif
