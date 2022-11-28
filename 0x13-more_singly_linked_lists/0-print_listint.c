#include "lists.h"

/**
  *print_listint - prints all the elements of a list;
  *@header: the pointer to the first element of the linked list
  *
  *Return: int
  */
size_t print_listint(const listint_t *header)
{
	int numofnodes = 0;

	if (header == NULL)
		return (0);
	while (header != NULL)
	{
		numofnodes++;
		printf("%d\n", header->n);
		header = header->next;
	}

	return (numofnodes);
}
