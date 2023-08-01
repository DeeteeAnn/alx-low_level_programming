#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Explores linked list
 * Return: address of the node where the loop begins, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start;
	listint_t *finish;

	if (!head)
		return (NULL);

	for (finish = head->next; finish != NULL; finish = finish->next)
	{
		if (finish == finish->next)
			return (finish);
		for (start = head; start != finish; start = start->next)
			if (start == finish->next)
				return (finish->next);
	}
	return (NULL);
}
