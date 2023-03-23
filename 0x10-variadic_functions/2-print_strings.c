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
		if (i + 1 != n && separator != NULL)
			printf("%s%s", va_arg(ap, char*), separator);
		else
			printf("%s", va_arg(ap, char*));
	}
	va_end(ap);
	printf("\n");
}

int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}