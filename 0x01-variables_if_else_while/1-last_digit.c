#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - The program runs here
  *
  *Return: The function returns a 0
  */
int main(void)
{
	int n;
	int modulo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	modulo = n % 10;
	if (modulo == 0)
	{
		printf("Last digit of %d is %d", n, modulo + " and is 0");
	} else if (modulo > 5)
	{
		printf("Last digit of %d is %d", n, modulo + "and is greater than 5");
	} else if (modulo < 6 && != 0)
	{
		printf("Last digit of %d is %d", n, modulo + "and is less than 6 and not 0");
	}
	return (0);
}
