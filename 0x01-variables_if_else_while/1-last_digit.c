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
	int mo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mo = n % 10;
	if (mo == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, mo);
	} else if (mo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mo);
	} else if (mo < 6 && mo != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mo);
	}
	return (0);
}
