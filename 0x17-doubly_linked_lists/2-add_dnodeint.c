#include "lists.h"
/**
  * add_dnodeint - adds a node at the beginning of a double linked list
  *@head: pointer to the first node
  *@n: the number to add for the new node
  *
  *Return: pointer to the linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head)
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

		temp = *head;
		*head = new_node;
		new_node = temp;

		return (new_node);
	}
	return (NULL);
}
