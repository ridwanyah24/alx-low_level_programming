#include "lists.h"

/**
  *listint_len - returns the number of elements in a linked list
  *@head: pointer to the first element of the list
  *
  *Return: the number of elements in the list
  */
size_t listint_len(const listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
