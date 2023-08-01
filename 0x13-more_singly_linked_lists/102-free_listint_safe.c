#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *diffnode
	size_t len;
	int diff = 1;

	if (!h || !*h)
		return (0);

	diffnode = find_listint_loop_fl(*h);
	for (len = 0; (*h != diffnode || diff) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next
		if (*h == diffnode && diff)
		{
			if (diffnode == diffnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			diff = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
