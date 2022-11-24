#include "lists.h"

/**
  *print_list - prints all the elements of the list_t
  *@head: the pointer to the first element of the list
  *
  *Return: size of print_list
  */
size_t print_list(const list_t *head)
{
	int count = 0;
	char *strholder;

	while (head != NULL)
	{
		count++;
		strholder = head->str;
		if (strholder == NULL)
			strholder = "[0] (nil)";
		printf("[%d] %s\n", head->len, strholder);
		head = head->next;
	}
	return (count);
}

