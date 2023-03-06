#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: subtring
 * Return: substring if found, NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int index;
	int matching;

	i = 0;
	while (haystack[i])
	{
		matching = 1;
		j = 0;
		if (haystack[i] == needle[j])
		{
			index = i;
			while (needle[j])
			{
				if (needle[j] != haystack[index])
					matching = 0;
				j++;
				index++;
			}
			if (matching == 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
