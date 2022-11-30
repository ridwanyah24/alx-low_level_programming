#include "lists.h"

/**
  *reverse_listint- reverses a linked list
  *@head: pointer to the first node of the list
  *
  *Return: the linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next1 = NULL;

	while (*head != NULL)
	{
		next1 = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next1;
	}
	*head = prev;

	return (*head);
}
