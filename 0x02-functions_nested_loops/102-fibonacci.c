#include <stdio.h>

/**
 * main - entry point
 * description - print the first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	long long int a;
	long long int b;
	long long int c;
	int count;

	count = 0;
	a = 0;
	b = 1;
	while (count < 52)
	{
		printf("%lld", a);
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
