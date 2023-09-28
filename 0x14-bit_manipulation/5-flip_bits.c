#include "main.h"

/**
 * flip_bits - counts the number of bits to be flipped to acquire one number
 * to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int value = 0;
	unsigned long int fp_num = n ^ m;

	while (fp_num > 0)
	{
		value += fp_num & 1;
		fp_num >>= 1;
	}
	return (value);
}
