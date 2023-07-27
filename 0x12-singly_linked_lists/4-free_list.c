#include <stdlib.h>
#include "lists.h"

/**
 * free_list - releases a linked list
 * @head: list_t list to be released
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
