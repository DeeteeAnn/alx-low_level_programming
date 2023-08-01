#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: points to first node in the linked list
 * @index: index of the node to acquire
 * Return: points to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pt;
	unsigned int val;

	for (pt = head, val = 0; pt && val < index; pt = pt->next, val++)
		;
	return (pt);
}
