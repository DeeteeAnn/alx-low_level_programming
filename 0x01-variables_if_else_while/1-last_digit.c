#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Obtain the last figure of a number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lf;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lf = n % 10;
	if (lf > 5)
	{
		printf("last figure of %d is %d and is greater than 5\n", n, lf);
	}
	else if (lf == 0)
	{
		printf("last figure of %d is %d and is 0\n", n, lf);
	}
	else (lf < 6 && lf !=0)
	{
		printf("last figure of %d is %d and is less than 6 and not 0\n", n, lf);
	}
	return (0);
}
