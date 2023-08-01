#include "lists.h"

/**
 * add_nodeint_end - adds a node at the last part
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, or NULL if it does not
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new_end;
	listint_t *temp = *head;

	add_new_end = malloc(sizeof(listint_t));
	if (!add_new_end)
		return (NULL);

	add_new_end->n = n;
	add_new_end->next = NULL;

	if (*head == NULL)
	{
		*head = add_new_end;
		return (add_new_end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add_new_end;

	return (add_new_end);
}
