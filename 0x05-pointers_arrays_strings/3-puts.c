#include "main.h"

/**
 * _puts - prints a given string
 * @str: the string
 * Return: the length of given string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
