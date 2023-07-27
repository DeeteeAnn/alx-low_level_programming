#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in linked list is returned
 * @h: list_t list pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
