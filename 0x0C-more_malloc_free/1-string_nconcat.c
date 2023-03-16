#include "main.h"
#include <stdlib.h>

/**
 * __strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int __strlen(char *s)
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
 * __strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */

char *__strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (dest[i])
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/**
 * __strncpy - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	string = malloc(sizeof(char) * (__strlen(s1) + n) + 1);
	if (!string)
		return (NULL);
	string = __strncpy(s1, s2, n);
}