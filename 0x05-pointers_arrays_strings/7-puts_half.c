#include "main.h"

/**
 * puts_half - prints a the second half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i])
		i++;

	n = (i - 1) / 2;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
