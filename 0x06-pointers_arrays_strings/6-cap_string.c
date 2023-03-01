#include "main.h"

/**
 * cap_string - Captilizes the string given as parameter
 * @s: the string
 * Return: the captilized string
 **/

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}

		i++;
	}
	return (s);
}
