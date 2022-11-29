#include "lists.h"

/**
  *delete_nodeint_at_index - deletes a node at a particular index
  *@head: the pointer to the head node
  *@index: the index
  *
  *Return: 1 if suceess -1 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *temp;

	node  = *head;
	if (*head == NULL)
		return (-1);
	if (index != 0)
	{
		while (i < (index - 1))
		{
			node = node->next;
			i++;
		}
		if (node != NULL && node->next != NULL)
		{
			temp = node->next;
			node->next = temp->next;
			free(temp);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	return (1);
}
