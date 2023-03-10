#include "main.h"
#include <stdio.h>

/**
 * check_str_number - checks if string contains numbers
 * @c: the string
 * Return: returns 1 if given string only contains numbers, 0 otherwise.
 **/

int check_str_number(char *c)
{
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			c++;
		else
			return (1);
	}
	return (0);
}

/**
 * str_len - calculate the length of a string
 * @s: the string
 * Return: return the length
 */

int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * _atoi - converts a string to int
 * @s: the string to convert
 * Return: return the value of the string converted
 */

int _atoi(char *s)
{
	int result;
	int sign;
	int i;
	int len;

	i = 0;
	len = str_len(s);
	sign = 1;
	result = 0;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	if (len > i)
	{
		if (sign == -1)
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result -= s[i] - 48;
				i++;
			}
		}
		else
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result *= 10;
				result += s[i] - 48;
				i++;
			}
		}
	}
	return (result);
}

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (check_str_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		sum += _atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
