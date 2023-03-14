#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncpy - copies n bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
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
 * isspace - checks if character is space
 * @c: the char
 * Return: the integer value of char
 */

int isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

/**
 * count_words - counts words in a given string
 * @str: the string to count words from
 * Return: the number of words
 */

int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: the string to split
 * Return: the pointer to an array containing words.
 */

char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words;
	int i = 0;
	int j = 0;
	int start;

	num_words = count_words(str);
	char **words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < num_words)
	{
		start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;
		int end = i;
		int word_length = end - start;

		if (word_length > 0)
		{
			char *word = malloc(sizeof(char) * (word_length + 1));

			if (word == NULL)
				return (NULL);
			_strncpy(word, str + start, word_length);
			word[word_length] = '\0';
			words[j] = word;
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}