#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Calculates the number of nodes
 * @head: Points to the head of listint_t
 *
 * Return: list is not looped,return 0.
 * Otherwise - amount of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *value1, *value2;
	size_t point = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	value1 = head->next;
	value2 = (head->next)->next;

	while (value2)
	{
		if (value1 == value2)
		{
			value1 = head;
			while (value1 != value2)
			{
				point++;
				value1 = value1->next;
				value2 = value2->next;
			}

			value1 = value1->next;
			while (value1 != value2)
			{
				point++;
				value1 = value1->next;
			}

			return (point);
		}

		value1 = value1->next;
		value2 = (value2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -displays a listint_t list
 * @head: Points to the head of the listint_t.
 *
 * Return: Amount of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t point, num = 0;

	point = looped_listint_len(head);

	if (point == 0)
	{
		for (; head != NULL; point++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (num = 0; num < point; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (point);
}
