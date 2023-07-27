#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - include at beginning of a linked list a new node
 * @head: double pointer to list_t
 * @str: another string to add in the node
 *
 * Return: address of new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
