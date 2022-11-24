#include "lists.h"

/**
  * add_node_end - adds a node to the singly list to the end of the list
  *@head: pointer to the pointer to the start of the list
  *@str: the string of the node
  *
  *Return: address of the new element or NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	last = *head;
	new = malloc(sizeof(list_t));
	
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next  != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
