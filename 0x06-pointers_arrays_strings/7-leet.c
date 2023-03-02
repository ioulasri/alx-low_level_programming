#include "main.h"

/**
 * leet - converts specific characters to 4-3-0-7-1
 * @s: the string to iterate through
 * Return: return the converted string
 **/

char *leet(char *s)
{
	int i;
	int j;
	char leet[11] = "aAeEoOtTlL";
	int convert[5] = {4, 3, 0, 7, 1};

	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j])
			{
				s[i] = convert[j / 2] + 48;
			}
			j++;
		}
		i++;
	}
	return (s);
}
