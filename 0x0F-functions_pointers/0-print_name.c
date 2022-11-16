#include "function_pointers.h"
/**void print_the_name(char * names)
 *{
 *	unsigned int i;
 *
 *	names = malloc(sizeof(char) * (strlen(names) + 1));
 *	for (i = 0; i < strlen(names); i++)
 *	{
 *		putchar(names[i]);
 *	}
 *	name
 *}
 */
/**
  *print_name - prints a name
  *@name: the name string
  *@f(char): function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
