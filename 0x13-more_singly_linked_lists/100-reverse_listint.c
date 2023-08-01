#include "lists.h"

/**
 * reverse_listint - reverses an int linked list
 * @head: points to first node in the list
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	if (!head || !*head)
		return (NULL);

	old = *head;
	*head = NULL;

	while (old)
	{
		next = old->next;
		old->next = *head;
		*head = old;
		old = next;
	}
	return (*head);
}
