#include <stdio.h>
/**
 *main - Entry point
 *Description: 'list all lowercase alphabets with the exception of q and e'
 *Return: Always 0
 */
int main(void)
{
	int l = 97;

	while (l <= 122)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
