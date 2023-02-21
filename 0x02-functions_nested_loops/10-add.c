#include "main.h"

/**
 * print_number - prints the number given as parameter
 * @nb: number to be printed
 */

void print_number(int nb)
{
	if (nb < 0)
	{
		_putchar('-');
		nb = nb * (-1);
		print_number(nb);
	}
	else if (nb > 10)
	{
		print_number(nb / 10);
		print_number(nb % 10);
	}
	else
	{
		_putchar(nb + 48);
	}
}

/**
 * add - adds two integers given as parameters
 * @a: int a the first integer
 * @b: int b the second integer
 * Return: (Sucess)
 */

int add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}
