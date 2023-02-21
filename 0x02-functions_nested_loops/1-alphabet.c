#include "main.h"

/**
 * main - prints lowercase alphabets
 * description - print alphabets using _putchar in main.h
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

