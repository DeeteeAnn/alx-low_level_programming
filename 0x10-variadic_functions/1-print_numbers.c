#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - displays numbers, followed by a new line.
 * @separator: The string to be displayed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be displayed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figures;
	unsigned int words;

	va_start(figures, n);

	for (words = 0; words < n; words++)
	{
		printf("%d", va_arg(figures, int));

		if (words != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(figures);
}
