#include "main.h"
#include <stdlib.h>

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
 * _create_array - creates an array of chars.
 * @size: the size of the memory to allocate.
 * Return: the array created.
 */

char *_create_array(unsigned int size)
{
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);
	return (array);
}

/**
 * _strdup - duplicates a given string.
 * @str: the string to duplicate.
 * Return: the array created.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	i = 0;
	new_str = _create_array(_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (i <= _strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}
