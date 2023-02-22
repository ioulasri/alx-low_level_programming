#include <stdio.h>

/**
 * main - entry point
 * description - print the sum of the even value in the range
 * of first fibonacci numbers before 4000000
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a;
	long int b;
	long int c;
	int count;
	long int sum;

	count = 0;
	a = 1;
	b = 2;
	while (a <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (a % 2 == 0)
			sum += a;
		count++;
	}
	printf("\n");
	return (0);
}
