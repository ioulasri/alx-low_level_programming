#include "main.h"

/**
 * _puts_recursion - prints a given string
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	_putchar(s[i]);
	if (!s[i])
	{
		_putchar('\n');
		return;
	}
	s++;
	if (s[i])
		_puts_recursion(s);
	else
		_putchar('\n');
}
