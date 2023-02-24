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
		_putnbr(nb);
	}
	else if (nb > 9)
	{
		_putnbr(nb / 10);
		_putnbr(nb % 10);
	}
	else
		_putchar(nb + 48);
}
