#include "main.h"

/**
 * rev_string - prints a given string in reverse
 * @str: the string
 */

void rev_string(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = -1;
	while (str[i])
		i++;
	while (j++ < i-- / 2)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
	}
}
