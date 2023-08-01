#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node a given index in a linked list
 * @head: points to first piece in the list
 * @index: index of the node to be eliminated
 *
 * Return: 1 (Success), or -1 (Failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point, *old_point;
	unsigned int val = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		point = *head;
		*head = (*head)->next;
		free(point);
		return (1);
	}
	point = *head;
	while (point)
	{
		if (val == index)
		{
			old_point->next = point->next;
			free(point);
			return (1);
		}
		val++;
		old_point = point;
		point = point->next;
	}
	return (-1);
}
