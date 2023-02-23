#include <stdio.h>

/**
 * main - Entry point
 * Desription: FIZZBUZZ who doesn't know it
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 99)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("Buzz");
	return (0);
}
