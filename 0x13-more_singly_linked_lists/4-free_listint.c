#include "lists.h"

/**
 * free_listint - frees a number of ints
 * @head: this points to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
