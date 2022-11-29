#include "lists.h"

/**
  *add_nodeint - adds a node at the beginning of the list
  *@head: pointer to the pointer to the first node
  *@n: the integer data of the new node
  *
  *Return: pointer to the new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	if (head)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	return (*head);
}
