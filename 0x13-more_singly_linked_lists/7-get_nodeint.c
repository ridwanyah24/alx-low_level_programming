#include "lists.h"

/**
  *get_nodeint_at_index - gets the nth node of a linked list
  *@head: the reference to the first node
  *@index: the index
  *
  *Return: the indexed node;
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0, i;

	ptr = head;
	if (head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (index > count)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
