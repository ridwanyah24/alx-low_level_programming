#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * _puts - prints the string to standard output
  *@str - the string to be printed
  *Return: void
  */
void _puts(char *str)
{
	write(1, str, (strlen(str) + 1));
	write(2);
}
