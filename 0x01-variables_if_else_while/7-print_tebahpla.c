#include <stdio.h>
/**
 *main - Entry point
 *Description: 'list all lowercase alphabets backwards'
 *Return: Always 0
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
