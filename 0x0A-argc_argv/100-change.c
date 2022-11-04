#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
  * main -code runs here
  *@argc: argument count
  *@argv: argument value
  *Return: always 0
  */
int main(int argc, char **argv)
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i, j, total, change = 0;
	int remain = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", change);
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j < 4; j++)
		{
			if (atoi(argv[1]) / cent[i] != 0)
			{
				change = change + (atoi(argv[1]) / cent[i]);
				cent[i] = cent [i] * change;
			}
			if (atoi(argv[1]) % cent [i] > cent[i + j])
			{
				change = change + (atoi(argv[1]) /cent[i + j]);
			}else
				remain = atoi(argv[1]) % cent[i];
		}
	}
	total = remain + change;
	printf("%d\n", total);
	return (0);
}
