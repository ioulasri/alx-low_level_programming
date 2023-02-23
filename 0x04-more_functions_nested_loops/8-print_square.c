#include "main.h"

/**
 * print_square - prints a square n times large
 * @size: number of rows and columns
 * description: prints a square n times large using _putchar
 */

void print_square(int size)
{
	int i;
	int rows;
	
	i = 1;
	if (n <= 0)
		putchar('\n');
	else
	{
		while (i <= n)
		{
			rows = n;
				while (rows > 0)
				{
					putchar('#');
					rows--;
				}
			i++;
			putchar('\n');
		}
	}
}