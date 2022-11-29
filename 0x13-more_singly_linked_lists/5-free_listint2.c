#include "lists.h"

/**
  *free_listint2 - frees a linked list
  *@head: double pointer to the list
  *
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
