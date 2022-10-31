#include <stdio.h>
#include "main.h"
/**
  * set_string - sets the value of a pointer to char
  *@s: the string pointer
  *@to: the char pointer
  *Return: void
  */
void set_string(char **s, char *to)
{
	*s = to;
}
