#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
  * _isupper - print uppercase character
  *@c: character to be printed
  *
  *Return:0 if lowercase 1 if uppercase
  */
int _isupper(int c)
{
	if (isupper(c + 48))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
