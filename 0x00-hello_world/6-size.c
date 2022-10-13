#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	int i;
	char c;
	long long int l;
	float f;

	printf("Size of an char: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);

}
