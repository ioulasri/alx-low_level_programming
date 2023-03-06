#include "main.h"
#include <stdlib.h>

/**
 * _strncmp - compares the two string s1 and s2
 * @s1: the first string
 * @s2: the second string
 * @n: the len
 * Return: returns the difference between the two strings;
 */

int _strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (i < n && (s1[i] != s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i >= n)
		return (0);
	return (s1[i] - s2[i]);
}

/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: subtring
 * Return: substring if found, NULL otherwise.
 */

char *_strstr(char *haystack, char *needle)
{
	int needle_len;
	int haystack_len;

	needle_len = _strlen(needle);
	haystack_len = _strlen(haystack);

	if (needle_len > haystack_len)
		return (NULL);

	for (int i = 0; i <= haystack_len - needle_len; i++)
	{
		if (_strncmp(&haystack[i], needle, needle_len) == 0)
			return (&haystack[i]);
	}
	return (NULL);
}
