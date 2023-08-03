#include "main.h"

/**
 * clear_bit - places the value of a given bit at the index
 * @n: locates the number to change
 * @index: index of the bit to clear
 * Return: 1 for successful, -1 if unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
