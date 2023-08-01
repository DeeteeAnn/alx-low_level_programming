#include "lists.h"

/**
 * add_nodeint - attaches new node at the start of a linked list
 * @head: points to the first node in the list
 * @n: data to input to new node
 * Return: points to new node, or NULL if it doesn't
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new = malloc(sizeof(listint_t));

	if (!head || !add_new)
	{
		return (NULL);
	}

	add_new->next = NULL;
	add_new->n = n;
	if (*head)
		add_new->next = *head;
	*head = add_new;

	return (add_new);
}
