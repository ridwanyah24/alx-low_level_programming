/**
  * print_numbers - prints numbers from 0-9
  *
  *Return: always zero
  */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
