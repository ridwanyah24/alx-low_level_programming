#include "lists.h"

/**
  *list_len - returns the number of elements in a linked list
  *@head: the pointer to the first node
  *
  *Return: number of elements to the linked list
  */
size_t list_len(const list_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
