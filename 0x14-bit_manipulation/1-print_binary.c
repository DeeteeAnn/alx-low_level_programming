#include "main.h"

/**
 * print_binary - displays a decimal number as binary
 * @n: value to be displayed in binary
 * Return: void (nothing)
 */
void print_binary(unsigned long int n)
{
	int binary_prt = sizeof(n) * 8;

	int result = 0;


	while (binary_prt)
	{
		if (n & 1L << --binary_prt)
		{
			_putchar('1');
			result++;
		}
		else if (result)
			_putchar('0');
	}
	if (!result)
		_putchar('0');
}
