#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	i--;
	while (j < i / 2)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
}
