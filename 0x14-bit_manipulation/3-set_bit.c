#include "main.h"

/**
 * set_bit - places a bit at a given index to 1
 * @n: locates number to index
 * @index: index of the bit to set
 * Return: 1 for success, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
