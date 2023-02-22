#include <stdio.h>

/**
 * main - entry point
 * description - print the first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	int count;

	count = 0;
	a = 0;
	b = 1;
	while (count < 52)
	{
		printf("%ld", a);
		if (a < 20000000000)
		{
			printf(", ");
		}
		c = a + b;
        a = b;
        b = c;
		count++;
	}
	printf("\n");
	return (0);
}
