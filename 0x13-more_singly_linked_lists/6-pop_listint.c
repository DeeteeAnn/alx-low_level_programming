#include "lists.h"

/**
 * pop_listint - removes the head node
 * @head: points to the first piece in the linked list
 *
 * Return: the data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int value;

	if (!head || !*head)
		return (0);
	list = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = list;
	return (value);
}
