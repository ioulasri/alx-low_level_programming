#include "main.h"

/**
 * print_number - prints a given number
 * @n: the number to be printed
 */

void print_number(int n)
{
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		print_number(nb);
	}
	else if (nb > 9)
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
	else
		_putchar(nb + 48);
}
