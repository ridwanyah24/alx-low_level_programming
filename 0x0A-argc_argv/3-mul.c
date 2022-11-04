#include <stdio.h>
#include <stdlib.h>
/**
  *main - code runs here
  *@argc: argument count
  *@argv: argument value
  *Return: ALWAYS 0
  */
int main(int argc, char **argv)
{
	int muller;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	muller = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", muller);
	return (0);

}
