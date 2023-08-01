#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head: points to first node in the linked list
 *
 * Return: the total sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
