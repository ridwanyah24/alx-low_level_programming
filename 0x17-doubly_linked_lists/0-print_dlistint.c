#include "lists.h"
/**
  *print_dlistint - prints the elements of a doubly linked list
  *@h: the head node
  *
  *Return: nothing
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
