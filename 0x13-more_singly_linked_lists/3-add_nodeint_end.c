#include "lists.h"

/**
  *add_nodeint_end - adds a node at the end of a linked list
  *@head: double pointer to the start of the node
  *@n: data for the new node;
  *
  *Return: pointer to the new list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (new == NULL)
		return (NULL);
	ptr = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
	return (*head);
}
