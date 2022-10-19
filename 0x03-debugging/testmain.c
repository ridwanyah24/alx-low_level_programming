#include <stdio.h>
#include "main.h"
/**
  * main - code runs here
  *
  *Return: code returns 0
  */
int main(void)
{
	int a = 972;
	int b = 1098;
	int c = -560;
	int largest;

	largest = largest_number(a, b, c);
	printf("%d is the largest\n", largest);

	return (0);
}
