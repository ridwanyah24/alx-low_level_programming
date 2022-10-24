#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
  * reset_to_98 - resets the value of a variable to 98
  *@*n: the pointer to the variable it wants to reset
  *Return: void
  */
void reset_to_98(int *n)
{
	*n = 98;
}
