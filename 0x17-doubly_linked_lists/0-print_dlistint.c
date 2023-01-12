#include "lists.h"
/**
  *print_dlistint - prints the elements of a doubly linked list
  *@h: the head node
  *
  *Return: nothing
  */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0, j;
	dlistint_t *temp;

	temp = h;

	if(h)
	{
		while(h)
		{
			i++;
			h = h->next;
		}
		h = temp;
		for(j = 0; j < i; j++)
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
}
