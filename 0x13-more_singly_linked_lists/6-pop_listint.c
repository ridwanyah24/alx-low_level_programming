#include "lists.h"

/**
  *pop_listint - deletes the head node of a linked list
  *@head: the pointer to the pointer to the node
  *
  *Return: the value in the head node
  */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);
	return (value);
}
