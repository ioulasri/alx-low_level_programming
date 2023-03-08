#include "main.h"

/**
 * _puts_recursion - prints a given string
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (!s[i])
		_putchar('\n');
	_putchar(s[i]);
	s++;
	if (s[i])
		_puts_recursion(s);
}
