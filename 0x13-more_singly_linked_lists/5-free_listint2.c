#include "lists.h"

/**
 * free_listint2 - frees a list of int
 * @head: pointer to the listint_t list to be freed
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *point, *list;

	if (!head)
		return;
	point = *head;
	while (point)
	{
		list = point;
		point = point->next;
		free(list);
	}

	*head = NULL;
}
