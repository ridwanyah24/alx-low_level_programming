#include "lists.h"

/**
  *free_listsint - frees a linked list
  *@head: the pointer to the first element of the list
  *
  *Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
