#include "lists.h"

/**
  *insert_nodeint_at_index - inserts a node at specified index
  *@head: the pointer to the head node
  *@index: the index to insert the node
  *@n: the data of the node to be inserted
  *
  *Return:pointer to the linked list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int count = 0;
	unsigned int i;

	listint_t *ptr, *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	ptr = *head;
	if (*head == NULL)
		return (NULL);
	while (ptr)
	{
		ptr = ptr->next;
		count++;
	}
	ptr = *head;
	if (index > count)
		return (NULL);

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return(*head);
	}
	for (i = 1; i < (index); i++)
	{
		if (ptr != NULL)
		{
			ptr = ptr->next;
		}
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (*head);
}
