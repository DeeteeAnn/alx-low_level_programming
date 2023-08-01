#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: points to the first node in the list
 * @idx: index to add new node
 * @n: value of new node of n
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int np;
	listint_t *add_new;
	listint_t *temp = *head;

	add_new = malloc(sizeof(listint_t));
	if (!add_new || !head)
		return (NULL);

	add_new->n = n;
	add_new->next = NULL;

	if (idx == 0)
	{
		add_new->next = *head;
		*head = add_new;
		return (add_new);
	}

	for (np = 0; temp && np < idx; np++)
	{
		if (np == idx - 1)
		{
			add_new->next = temp->next;
			temp->next = add_new;
			return (add_new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
