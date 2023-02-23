#include <stdio.h>

/**
 * main - Entry point
 * Desription: FIZZBUZZ who doesn't know it
 */

int main()
{
	int i;

	i = 1;
	while (i <= 100)
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
	return (0);
}
