#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - writes each array element on a newline
 * @array: array
 * @size: the number of element to print
 * @action: pointer to print in regular or hex value
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
