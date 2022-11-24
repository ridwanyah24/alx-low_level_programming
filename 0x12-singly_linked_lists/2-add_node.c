#include "lists.h"

/**
  *add_node - adds a new node at the beginning of a list_t list
  *@head: the pointer to the address of head
  *@str: the string to be added to the new node
  *
  *Return: address of the new element or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	ptr->len = strlen(str);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	if (head != NULL)
		return (*head);
	return (NULL);
}
