#include "lists.h"

/**
 * print_listint - displays elements in a linked list
 * @h: points to the first node
 * Return: size of the node
 */
size_t print_listint(const listint_t *h)
{
	size_t current_element = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		current_element++;
	}
	return (current_element);
}
