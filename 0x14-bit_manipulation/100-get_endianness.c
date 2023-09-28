#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned long int num = 1;
	char *c = (char *) &num;

	if (*c)
	{
		return (1);
	}

	else
	return (0);
}
