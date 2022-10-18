#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
  * print_times_table - print time table for n nums
  *@n: the number of tables to be printed
  *
  *Return: Code returns void
  */
void print_times_table(int n)
{
	int begin;
	int stopper;
	int muller;
	for (begin = 0; begin <= n; begin++)
	{
		for (stopper = 1; stopper <= n; stopper++)
		{
			muller = begin * stopper;
			printf ("%d, ", muller);
		}
		printf("\n");
	}
}
