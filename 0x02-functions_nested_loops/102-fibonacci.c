#include <stdio.h>

/**
 * main - entry point
 * description - print the first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int count;

	count = 0;
	a = 1;
	b = 2;
	while (count < 50)
	{
		printf("%d, ", a);
		printf("%d, ", b);
		a = a + b;
		b = a + b;
		count++;
	}
	printf("\n");
	return (0);
}
