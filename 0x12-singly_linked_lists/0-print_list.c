#include "lists.h"

/**
  *print_list - prints all the elements of the list_t
  *@head: the pointer to the first element of the list
  *
  *Return: size of print_list
  */
size_t print_list(const list_t *head)
{
	unsigned int count;
	char *strholder;

	while (head != NULL)
	{
		strholder = head->str;
		count = head->len;
		if (strholder == NULL)
		{
			count = 0;
			strholder = "(nil)";
		}
		printf("[%d] %s\n", count, strholder);
		head = head->next;
	}
	return (count);
}

