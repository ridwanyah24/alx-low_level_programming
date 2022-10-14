#include <stdio.h>
#include <stdlib.h>
/**
  * main - code runs here
  *Return: Function returns 0
  */
int main(void)
{
	int i, j;
	int k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '1'; l <= '9'; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					if (k != l && k < l)
					{
						putchar(k);
						putchar(l);
					}
					if (i == '9' && j == '8' && k == '9' && 'l' == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
