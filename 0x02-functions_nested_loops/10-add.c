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
	if (n >= 10)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
		_putchar(n + 48);
}
/**
 * add - adds two integers given as parameters
 * @a: int a the first integer
 * @b: int b the second integer
 * Return: Always 0 (Sucess)
 */

int add(int a, int b)
{
	int result;

	result = a + b;
	print_number(result);
	return (0);
}
