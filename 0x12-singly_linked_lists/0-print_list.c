#include "lists.h"

/**
  *print_list - prints all the elements of the list_t
  *@head: the pointer to the first element of the list
  *
  *Return: size of print_list
  */
size_t print_list(const list_t *head)
{
	size_t count = 0;
	char *strholder;
	unsigned int num;

	while (head != NULL)
	{
		count++;
		strholder = head->str;
		num = head->len;
		if (strholder == NULL)
		{
			num = 0;
			strholder = "(nil)";
		}
		printf("[%d] %s\n", num, strholder);
		head = head->next;
	}
	return (count);
}

