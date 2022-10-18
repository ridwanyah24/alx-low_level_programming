#include "main.h"
#include <unistd.h>
/**
  * main - The code runs here
  *Return: the code returns 0
  */
int main(void)
{
	char arr[] = {'_','p','u','c','h','a','r'};
	
	for (int i = 0; i <=6; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');

	return (0);
}
