#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to list_t list
 * @str: string to include in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_end = malloc(sizeof(list_t));
	if (!new_end)
		return (NULL);

	new_end->str = strdup(str);
	new_end->len = len;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_end;

	return (new_end);
}
