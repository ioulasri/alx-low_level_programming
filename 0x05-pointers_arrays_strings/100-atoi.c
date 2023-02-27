#include "main.h"

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

	i = 0;
	sign = 1;
	result = 0;
	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - 48;
		}
		i++;
	}
	return (result);
}
