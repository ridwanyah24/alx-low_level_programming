#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
  * swap_int - swaps the value of int a for the value of int b
  *@a: pointer to int a
  *@b: pointer to int b
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int *holda;
	int *holdb;

	*holda = &b;
	*a = holda;
	*holdb = &a;
	*b = holdb;
}
