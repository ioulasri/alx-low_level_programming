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
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += s[i] - 48;
		}
		i++;
	}
	return (result * sign);
}
