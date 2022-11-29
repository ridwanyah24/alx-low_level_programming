#include "lists.h"

/**
  *sum_listint - sums all the data of the linked list
  *@head: the reference to the first element of the list
  *
  *Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
