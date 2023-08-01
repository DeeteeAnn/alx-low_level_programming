#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: points to first node
 *
 * Return: pieces left in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int ind;
	listint_t *alt;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ind = *h - (*h)->next;
		if (ind > 0)
		{
			alt = (*h)->next;
			free(*h);
			*h = alt;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
