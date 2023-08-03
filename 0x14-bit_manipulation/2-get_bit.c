#include "main.h"

/**
 * get_bit - returns the value of a bit at an index
 * @n: number to search
 * @index: the bit index
 * Return: value or state of bit or -1 if there is inaccuracy
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n & (1 << index)) >> index);
}
