#include "main.h"

/**
 * print_diagonal - prints a line n times long
 * @n: number of lines
 * description: prints a line n times long using _putchar
 */

void print_diagonal(int n)
{
	int i;

	i = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
		    spaces = i;
		    while (spaces > 0)
		    {
		        _putchar(' ');
		        spaces--;
		    }
		    _putchar('\\');
		    _putchar('\n');
		    i++;
		}
	}
}
