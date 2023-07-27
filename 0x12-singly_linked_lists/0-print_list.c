#include <stdio.h>
#include "lists.h"

/**
 * print_list - this displays content in the linked list
 * @h: pointer to list_t to be displayed
 *
 * Return: quantity of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		element++;
	}

	return (element);
}
