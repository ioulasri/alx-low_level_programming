#include <stdio.h>

/**
 * main - entry point
 * description - print the first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int a;
	unsigned long int b;
	unsigned long int c;
	int count;

	count = 0;
	a = 1;
	b = 2;
	while (count < 100)
	{
		printf("%lu", a);
		if (count < 99)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
