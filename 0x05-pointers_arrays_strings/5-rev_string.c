#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int len;
	char c;

	i = 0;
	j = -1;
	while (s[i])
		i++;
	len = i - 1;
	while (j++ < len / 2)
	{
		c = s[j];
		s[j] = s[len];
		s[len] = c;
		len--;
	}
}
