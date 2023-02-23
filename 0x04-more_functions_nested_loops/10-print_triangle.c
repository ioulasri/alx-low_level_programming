#include "main.h"

/**
 * print_triangle - prints a triangle n times large
 * @size: the size of the triangle
 * description: prints a square n times large using _putchar
 */

void print_triangle(int size)
{
	int i;
	int a;
	int size;
	int z;

	size = n;
	i = 1;
	a = 1;
	z = 0;
	if (n <= 0)
		putchar('\n');
	else
	{
		while (i < n + 1)
		{
			a = z;
			while ((size - a) - 1 > 0)
				{
				putchar(' ');
				a++;
			}
			a = z;
			while (a >= 0)
			{
				putchar('#');
				a--;
			}
			z++;
			i++;
			putchar('\n');
		}
	}
}
