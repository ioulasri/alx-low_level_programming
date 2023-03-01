#include "main.h"

/**
 * rot13 - rotate by 13 places 'Caesar Cipher'
 * @s: the string to convert
 * Return: the converted string
 **/

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] + 13 <= 'z')
				s[i] += 13;
			else
			{
				s[i] = 'a' + 12 - ('z' - s[i]);
			}
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] + 13 < 'Z')
				s[i] += 13;
		}
		i++;
	}
	return (s);
}
