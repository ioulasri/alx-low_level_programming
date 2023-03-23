#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the seperator string
 * @n: the numbers of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i + 1 == n)
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
}
