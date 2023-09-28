#include "main.h"

/**
 * binary_to_uint - an unsigned int that is changed from a binary number
 * @b: this holds a binary number
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		value = value * 2 + (*b++ - '0');
	}

	return (value);
}
