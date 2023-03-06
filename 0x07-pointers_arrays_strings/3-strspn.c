#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len_sub;

	len_sub = _strlen(accept);
	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			
			j++;
		}
		if (j)
	}
}

int main(void)
{
    char *s = "123432432hello, world";
    char *f = "123456";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}