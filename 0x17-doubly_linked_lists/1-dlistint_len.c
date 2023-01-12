#include "lists.h"
/**
  * dlistint_len - returns the lenght of a doubly linked list
  *@h: the head node
  *
  *Return: the lenght of the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
