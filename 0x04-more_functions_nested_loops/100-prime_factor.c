#include <stdio.h>

/**
 * is_prime - checks if number is prime
 * @n: the number to be checked
 * Return: 1 if prime or 0 otherwise
 */

int is_prime(long int n)
{
	long int i;

	if (n < 2)
		return (0);
	i = 2;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * largest_prime_factor - get largest factor
 * @n: the number to work with
 * Return: return the largest factor
 */

long int largest_prime_factor(long int n)
{
	long int largest_factor;
	long int i;

	largest_factor = 1;
	i = 2;
	while (i <= n / i)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				largest_factor = i;
			if (is_prime(n / i))
				largest_factor = n / i;
		}
		i++;
	}
	return (largest_factor);
}

/**
 * main - Entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	long int n;

	n = 612852475143;
	printf("Largest prime factor of %ld is %ld\n", n, largest_prime_factor(n));
	return (0);
}
