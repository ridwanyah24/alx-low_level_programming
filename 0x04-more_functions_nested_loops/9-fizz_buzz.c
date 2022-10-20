#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
  * main - code runs here
  * Return: always 0
  */
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}
/**
  * fizz_buzz - print numbers from 1 -100 except multiple of 3
  * and 5 and replacing them with
  * fizz for 3 and buzz for 5 and fizzbuzz for multiple of both
  * Return: returns void
  */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		} else if ((i % 5 == 0) && i % 3 != 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
