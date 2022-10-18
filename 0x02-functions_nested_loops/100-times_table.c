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
		printf("%d,   ", 0);
		for (stopper = 1; stopper <= n; stopper++)
		{
			muller = begin * stopper;
			if (muller < 10 && muller != (begin * n))
			{
				printf("%d,   ", muller);
			} else if (muller >= 10 && muller != (begin * n))
			{
				printf("%d,  ", muller);
			} else if (muller >= 100 && muller != (begin * n))
			{
				printf("%d, ", muller);
			}
			if (muller == (begin * n))
			{
				printf("%d",muller);
			}
		}
		printf("\n");
	}
}
