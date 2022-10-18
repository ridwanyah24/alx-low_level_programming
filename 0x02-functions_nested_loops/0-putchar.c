#include "_putchar.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char);
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
