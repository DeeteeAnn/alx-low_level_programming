#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print all single digits of base 10'
 *Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 0; b <= 9; b++)
	{
		putchar(b + 48);
	}
	putchar('\n');
	return (0);
}
